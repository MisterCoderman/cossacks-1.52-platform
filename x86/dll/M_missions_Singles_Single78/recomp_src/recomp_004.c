#include "recomp.h"

/* FUN_100160a0 @ 0x11cd60a0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11cd60a0(void) {
  FTRACE(0x11cd60a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd60a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd60a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd60a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd60a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd60a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd60aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd60ad sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd60b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd60b6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd60ba ja 0x11cd60ea */
  if ((!C.cf&&!C.zf)) goto L_11cd60ea;
  /* 11cd60bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd60bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd60c1 mov dl, byte ptr [eax + 0x11cd6104] */
  DL = (r8((uint32_t)(EAX + 0x11cd6104)));
  /* 11cd60c7 jmp dword ptr [edx*4 + 0x11cd60f0] */
  switch (EDX) {
    case 0: goto L_11cd60ce;
    case 1: goto L_11cd60d5;
    case 2: goto L_11cd60dc;
    case 3: goto L_11cd60e3;
    case 4: goto L_11cd60ea;
    default: x86_unimpl("switch@0x11cd60c7 out of table"); return;
  }
L_11cd60ce:;
  /* 11cd60ce mov eax, 0x411 */
  EAX = (0x411u);
  /* 11cd60d3 jmp 0x11cd60ec */
  goto L_11cd60ec;
L_11cd60d5:;
  /* 11cd60d5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11cd60da jmp 0x11cd60ec */
  goto L_11cd60ec;
L_11cd60dc:;
  /* 11cd60dc mov eax, 0x412 */
  EAX = (0x412u);
  /* 11cd60e1 jmp 0x11cd60ec */
  goto L_11cd60ec;
L_11cd60e3:;
  /* 11cd60e3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11cd60e8 jmp 0x11cd60ec */
  goto L_11cd60ec;
L_11cd60ea:;
  /* 11cd60ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cd60ec:;
  /* 11cd60ec mov esp, ebp */
  ESP = (EBP);
  /* 11cd60ee pop ebp */
  EBP = (pop32());
  /* 11cd60ef ret  */
  ESPCHK(0x11cd60a0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11cd6120 (116 bytes, 29 insns) */
void f_11cd6120(void) {
  FTRACE(0x11cd6120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd6120 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd6121 mov ebp, esp */
  EBP = (ESP);
  /* 11cd6123 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6124 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd612b jmp 0x11cd6136 */
  goto L_11cd6136;
L_11cd612d:;
  /* 11cd612d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd6130 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6133 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd6136:;
  /* 11cd6136 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd613d jge 0x11cd614b */
  if ((C.sf==C.of)) goto L_11cd614b;
  /* 11cd613f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd6142 mov byte ptr [ecx + 0x11cff980], 0 */
  w8((uint32_t)(ECX + 0x11cff980), (0x0u));
  /* 11cd6149 jmp 0x11cd612d */
  goto L_11cd612d;
L_11cd614b:;
  /* 11cd614b mov dword ptr [0x11cff7e8], 0 */
  w32((uint32_t)(0x11cff7e8), (0x0u));
  /* 11cd6155 mov dword ptr [0x11cff86c], 0 */
  w32((uint32_t)(0x11cff86c), (0x0u));
  /* 11cd615f mov dword ptr [0x11cffa84], 0 */
  w32((uint32_t)(0x11cffa84), (0x0u));
  /* 11cd6169 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd6170 jmp 0x11cd617b */
  goto L_11cd617b;
L_11cd6172:;
  /* 11cd6172 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd6175 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6178 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd617b:;
  /* 11cd617b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd617f jge 0x11cd6190 */
  if ((C.sf==C.of)) goto L_11cd6190;
  /* 11cd6181 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd6184 mov word ptr [eax*2 + 0x11cff860], 0 */
  w16((uint32_t)(EAX*2 + 0x11cff860), (0x0u));
  /* 11cd618e jmp 0x11cd6172 */
  goto L_11cd6172;
L_11cd6190:;
  /* 11cd6190 mov esp, ebp */
  ESP = (EBP);
  /* 11cd6192 pop ebp */
  EBP = (pop32());
  /* 11cd6193 ret  */
  ESPCHK(0x11cd6120u, _esp0);
  ESP += 4; return;
}

/* FUN_100161a0 @ 0x11cd61a0 (770 bytes, 175 insns) */
void f_11cd61a0(void) {
  FTRACE(0x11cd61a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd61a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd61a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd61a3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd61a9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11cd61af push eax */
  push32((uint32_t)(EAX));
  /* 11cd61b0 mov ecx, dword ptr [0x11cff7e8] */
  ECX = (r32((uint32_t)(0x11cff7e8)));
  /* 11cd61b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd61b7 call dword ptr [0x11d01360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01360))), 0x11cd61bdu);
  /* 11cd61bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd61c0 jne 0x11cd63d9 */
  if (!C.zf) goto L_11cd63d9;
  /* 11cd61c6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11cd61d0 jmp 0x11cd61e1 */
  goto L_11cd61e1;
L_11cd61d2:;
  /* 11cd61d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd61d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd61db mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11cd61e1:;
  /* 11cd61e1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd61eb jae 0x11cd6202 */
  if (!C.cf) goto L_11cd6202;
  /* 11cd61ed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd61f3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11cd61f9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11cd6200 jmp 0x11cd61d2 */
  goto L_11cd61d2;
L_11cd6202:;
  /* 11cd6202 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11cd6209 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11cd620f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd6212 jmp 0x11cd621d */
  goto L_11cd621d;
L_11cd6214:;
  /* 11cd6214 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd6217 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd621a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd621d:;
  /* 11cd621d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd6220 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6222 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cd6224 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd6226 je 0x11cd6268 */
  if (C.zf) goto L_11cd6268;
  /* 11cd6228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd622b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd622d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cd622f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11cd6235 jmp 0x11cd6246 */
  goto L_11cd6246;
L_11cd6237:;
  /* 11cd6237 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd623d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6240 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11cd6246:;
  /* 11cd6246 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd6249 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd624b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11cd624e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6254 ja 0x11cd6266 */
  if ((!C.cf&&!C.zf)) goto L_11cd6266;
  /* 11cd6256 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd625c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11cd6264 jmp 0x11cd6237 */
  goto L_11cd6237;
L_11cd6266:;
  /* 11cd6266 jmp 0x11cd6214 */
  goto L_11cd6214;
L_11cd6268:;
  /* 11cd6268 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd626a mov eax, dword ptr [0x11cffa84] */
  EAX = (r32((uint32_t)(0x11cffa84)));
  /* 11cd626f push eax */
  push32((uint32_t)(EAX));
  /* 11cd6270 mov ecx, dword ptr [0x11cff7e8] */
  ECX = (r32((uint32_t)(0x11cff7e8)));
  /* 11cd6276 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6277 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11cd627d push edx */
  push32((uint32_t)(EDX));
  /* 11cd627e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11cd6283 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11cd6289 push eax */
  push32((uint32_t)(EAX));
  /* 11cd628a push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd628c call 0x11cd7660 */
  push32(0x11cd6291u); f_11cd7660();
  /* 11cd6291 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6294 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd6296 mov ecx, dword ptr [0x11cff7e8] */
  ECX = (r32((uint32_t)(0x11cff7e8)));
  /* 11cd629c push ecx */
  push32((uint32_t)(ECX));
  /* 11cd629d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11cd62a2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11cd62a8 push edx */
  push32((uint32_t)(EDX));
  /* 11cd62a9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11cd62ae lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11cd62b4 push eax */
  push32((uint32_t)(EAX));
  /* 11cd62b5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11cd62ba mov ecx, dword ptr [0x11cffa84] */
  ECX = (r32((uint32_t)(0x11cffa84)));
  /* 11cd62c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd62c1 call 0x11cd8270 */
  push32(0x11cd62c6u); f_11cd8270();
  /* 11cd62c6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd62c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd62cb mov edx, dword ptr [0x11cff7e8] */
  EDX = (r32((uint32_t)(0x11cff7e8)));
  /* 11cd62d1 push edx */
  push32((uint32_t)(EDX));
  /* 11cd62d2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11cd62d7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11cd62dd push eax */
  push32((uint32_t)(EAX));
  /* 11cd62de push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11cd62e3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11cd62e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd62ea push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11cd62ef mov edx, dword ptr [0x11cffa84] */
  EDX = (r32((uint32_t)(0x11cffa84)));
  /* 11cd62f5 push edx */
  push32((uint32_t)(EDX));
  /* 11cd62f6 call 0x11cd8270 */
  push32(0x11cd62fbu); f_11cd8270();
  /* 11cd62fb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd62fe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11cd6308 jmp 0x11cd6319 */
  goto L_11cd6319;
L_11cd630a:;
  /* 11cd630a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd6310 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6313 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11cd6319:;
  /* 11cd6319 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6323 jae 0x11cd63d4 */
  if (!C.cf) goto L_11cd63d4;
  /* 11cd6329 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd632f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6331 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11cd6339 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd633c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd633e je 0x11cd6376 */
  if (C.zf) goto L_11cd6376;
  /* 11cd6340 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd6346 mov cl, byte ptr [eax + 0x11cff981] */
  CL = (r8((uint32_t)(EAX + 0x11cff981)));
  /* 11cd634c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11cd634f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd6355 mov byte ptr [edx + 0x11cff981], cl */
  w8((uint32_t)(EDX + 0x11cff981), (CL));
  /* 11cd635b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd6361 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd6367 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11cd636e mov byte ptr [eax + 0x11cff880], dl */
  w8((uint32_t)(EAX + 0x11cff880), (DL));
  /* 11cd6374 jmp 0x11cd63cf */
  goto L_11cd63cf;
L_11cd6376:;
  /* 11cd6376 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd637c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd637e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11cd6386 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6389 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd638b je 0x11cd63c2 */
  if (C.zf) goto L_11cd63c2;
  /* 11cd638d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd6393 mov al, byte ptr [edx + 0x11cff981] */
  AL = (r8((uint32_t)(EDX + 0x11cff981)));
  /* 11cd6399 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11cd639b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd63a1 mov byte ptr [ecx + 0x11cff981], al */
  w8((uint32_t)(ECX + 0x11cff981), (AL));
  /* 11cd63a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd63ad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd63b3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11cd63ba mov byte ptr [edx + 0x11cff880], cl */
  w8((uint32_t)(EDX + 0x11cff880), (CL));
  /* 11cd63c0 jmp 0x11cd63cf */
  goto L_11cd63cf;
L_11cd63c2:;
  /* 11cd63c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd63c8 mov byte ptr [edx + 0x11cff880], 0 */
  w8((uint32_t)(EDX + 0x11cff880), (0x0u));
L_11cd63cf:;
  /* 11cd63cf jmp 0x11cd630a */
  goto L_11cd630a;
L_11cd63d4:;
  /* 11cd63d4 jmp 0x11cd649e */
  goto L_11cd649e;
L_11cd63d9:;
  /* 11cd63d9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11cd63e3 jmp 0x11cd63f4 */
  goto L_11cd63f4;
L_11cd63e5:;
  /* 11cd63e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd63eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd63ee mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11cd63f4:;
  /* 11cd63f4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd63fe jae 0x11cd649e */
  if (!C.cf) goto L_11cd649e;
  /* 11cd6404 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd640b jb 0x11cd6448 */
  if (C.cf) goto L_11cd6448;
  /* 11cd640d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6414 ja 0x11cd6448 */
  if ((!C.cf&&!C.zf)) goto L_11cd6448;
  /* 11cd6416 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd641c mov dl, byte ptr [ecx + 0x11cff981] */
  DL = (r8((uint32_t)(ECX + 0x11cff981)));
  /* 11cd6422 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11cd6425 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd642b mov byte ptr [eax + 0x11cff981], dl */
  w8((uint32_t)(EAX + 0x11cff981), (DL));
  /* 11cd6431 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd6437 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd643a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd6440 mov byte ptr [edx + 0x11cff880], cl */
  w8((uint32_t)(EDX + 0x11cff880), (CL));
  /* 11cd6446 jmp 0x11cd6499 */
  goto L_11cd6499;
L_11cd6448:;
  /* 11cd6448 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd644f jb 0x11cd648c */
  if (C.cf) goto L_11cd648c;
  /* 11cd6451 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6458 ja 0x11cd648c */
  if ((!C.cf&&!C.zf)) goto L_11cd648c;
  /* 11cd645a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd6460 mov cl, byte ptr [eax + 0x11cff981] */
  CL = (r8((uint32_t)(EAX + 0x11cff981)));
  /* 11cd6466 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11cd6469 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd646f mov byte ptr [edx + 0x11cff981], cl */
  w8((uint32_t)(EDX + 0x11cff981), (CL));
  /* 11cd6475 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd647b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd647e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd6484 mov byte ptr [ecx + 0x11cff880], al */
  w8((uint32_t)(ECX + 0x11cff880), (AL));
  /* 11cd648a jmp 0x11cd6499 */
  goto L_11cd6499;
L_11cd648c:;
  /* 11cd648c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11cd6492 mov byte ptr [edx + 0x11cff880], 0 */
  w8((uint32_t)(EDX + 0x11cff880), (0x0u));
L_11cd6499:;
  /* 11cd6499 jmp 0x11cd63e5 */
  goto L_11cd63e5;
L_11cd649e:;
  /* 11cd649e mov esp, ebp */
  ESP = (EBP);
  /* 11cd64a0 pop ebp */
  EBP = (pop32());
  /* 11cd64a1 ret  */
  ESPCHK(0x11cd61a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100164b0 @ 0x11cd64b0 (23 bytes, 9 insns) */
void f_11cd64b0(void) {
  FTRACE(0x11cd64b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd64b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd64b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd64b3 cmp dword ptr [0x11cff86c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff86c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd64ba je 0x11cd64c3 */
  if (C.zf) goto L_11cd64c3;
  /* 11cd64bc mov eax, dword ptr [0x11cff7e8] */
  EAX = (r32((uint32_t)(0x11cff7e8)));
  /* 11cd64c1 jmp 0x11cd64c5 */
  goto L_11cd64c5;
L_11cd64c3:;
  /* 11cd64c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cd64c5:;
  /* 11cd64c5 pop ebp */
  EBP = (pop32());
  /* 11cd64c6 ret  */
  ESPCHK(0x11cd64b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100164d0 @ 0x11cd64d0 (34 bytes, 10 insns) */
void f_11cd64d0(void) {
  FTRACE(0x11cd64d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd64d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd64d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd64d3 cmp dword ptr [0x11d00f70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00f70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd64da jne 0x11cd64f0 */
  if (!C.zf) goto L_11cd64f0;
  /* 11cd64dc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11cd64de call 0x11cd5cf0 */
  push32(0x11cd64e3u); f_11cd5cf0();
  /* 11cd64e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd64e6 mov dword ptr [0x11d00f70], 1 */
  w32((uint32_t)(0x11d00f70), (0x1u));
L_11cd64f0:;
  /* 11cd64f0 pop ebp */
  EBP = (pop32());
  /* 11cd64f1 ret  */
  ESPCHK(0x11cd64d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016500 @ 0x11cd6500 (664 bytes, 263 insns) [15 switch table(s)] */
void f_11cd6500(void) {
  FTRACE(0x11cd6500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd6500 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd6501 mov ebp, esp */
  EBP = (ESP);
  /* 11cd6503 push edi */
  push32((uint32_t)(EDI));
  /* 11cd6504 push esi */
  push32((uint32_t)(ESI));
  /* 11cd6505 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6508 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd650b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd650e mov eax, ecx */
  EAX = (ECX);
  /* 11cd6510 mov edx, ecx */
  EDX = (ECX);
  /* 11cd6512 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6514 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6516 jbe 0x11cd6520 */
  if ((C.cf||C.zf)) goto L_11cd6520;
  /* 11cd6518 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd651a jb 0x11cd6698 */
  if (C.cf) goto L_11cd6698;
L_11cd6520:;
  /* 11cd6520 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11cd6526 jne 0x11cd653c */
  if (!C.zf) goto L_11cd653c;
  /* 11cd6528 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd652b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd652e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6531 jb 0x11cd655c */
  if (C.cf) goto L_11cd655c;
  /* 11cd6533 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd6535 jmp dword ptr [edx*4 + 0x11cd6648] */
  switch (EDX) {
    case 0: goto L_11cd6658;
    case 1: goto L_11cd6660;
    case 2: goto L_11cd666c;
    case 3: goto L_11cd6680;
    default: x86_unimpl("switch@0x11cd6535 out of table"); return;
  }
L_11cd653c:;
  /* 11cd653c mov eax, edi */
  EAX = (EDI);
  /* 11cd653e mov edx, 3 */
  EDX = (0x3u);
  /* 11cd6543 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd6546 jb 0x11cd6554 */
  if (C.cf) goto L_11cd6554;
  /* 11cd6548 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd654b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd654d jmp dword ptr [eax*4 + 0x11cd6560] */
  switch (EAX) {
    case 1: goto L_11cd6570;
    case 2: goto L_11cd659c;
    case 3: goto L_11cd65c0;
    default: x86_unimpl("switch@0x11cd654d out of table"); return;
  }
L_11cd6554:;
  /* 11cd6554 jmp dword ptr [ecx*4 + 0x11cd6658] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11cd6658)))); return;
  /* 11cd655b nop  */
  /* nop */
L_11cd655c:;
  /* 11cd655c jmp dword ptr [ecx*4 + 0x11cd65dc] */
  switch (ECX) {
    case 0: goto L_11cd663f;
    case 1: goto L_11cd662c;
    case 2: goto L_11cd6624;
    case 3: goto L_11cd661c;
    case 4: goto L_11cd6614;
    case 5: goto L_11cd660c;
    case 6: goto L_11cd6604;
    case 7: goto L_11cd65fc;
    default: x86_unimpl("switch@0x11cd655c out of table"); return;
  }
  /* 11cd6563 nop  */
  /* nop */
L_11cd6570:;
  /* 11cd6570 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6572 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cd6574 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd6576 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cd6579 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cd657c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cd657f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd6582 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cd6585 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6588 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd658b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd658e jb 0x11cd655c */
  if (C.cf) goto L_11cd655c;
  /* 11cd6590 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd6592 jmp dword ptr [edx*4 + 0x11cd6648] */
  switch (EDX) {
    case 0: goto L_11cd6658;
    case 1: goto L_11cd6660;
    case 2: goto L_11cd666c;
    case 3: goto L_11cd6680;
    default: x86_unimpl("switch@0x11cd6592 out of table"); return;
  }
  /* 11cd6599 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cd659c:;
  /* 11cd659c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd659e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cd65a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd65a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cd65a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd65a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cd65ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd65ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd65b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd65b4 jb 0x11cd655c */
  if (C.cf) goto L_11cd655c;
  /* 11cd65b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd65b8 jmp dword ptr [edx*4 + 0x11cd6648] */
  switch (EDX) {
    case 0: goto L_11cd6658;
    case 1: goto L_11cd6660;
    case 2: goto L_11cd666c;
    case 3: goto L_11cd6680;
    default: x86_unimpl("switch@0x11cd65b8 out of table"); return;
  }
  /* 11cd65bf nop  */
  /* nop */
L_11cd65c0:;
  /* 11cd65c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd65c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cd65c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd65c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cd65c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd65ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cd65cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd65ce jb 0x11cd655c */
  if (C.cf) goto L_11cd655c;
  /* 11cd65d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd65d2 jmp dword ptr [edx*4 + 0x11cd6648] */
  switch (EDX) {
    case 0: goto L_11cd6658;
    case 1: goto L_11cd6660;
    case 2: goto L_11cd666c;
    case 3: goto L_11cd6680;
    default: x86_unimpl("switch@0x11cd65d2 out of table"); return;
  }
  /* 11cd65d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cd65fc:;
  /* 11cd65fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11cd6600 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11cd6604:;
  /* 11cd6604 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11cd6608 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11cd660c:;
  /* 11cd660c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11cd6610 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11cd6614:;
  /* 11cd6614 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11cd6618 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11cd661c:;
  /* 11cd661c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11cd6620 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11cd6624:;
  /* 11cd6624 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11cd6628 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11cd662c:;
  /* 11cd662c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11cd6630 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11cd6634 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11cd663b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd663d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11cd663f:;
  /* 11cd663f jmp dword ptr [edx*4 + 0x11cd6648] */
  switch (EDX) {
    case 0: goto L_11cd6658;
    case 1: goto L_11cd6660;
    case 2: goto L_11cd666c;
    case 3: goto L_11cd6680;
    default: x86_unimpl("switch@0x11cd663f out of table"); return;
  }
  /* 11cd6646 mov edi, edi */
  EDI = (EDI);
L_11cd6658:;
  /* 11cd6658 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd665b pop esi */
  ESI = (pop32());
  /* 11cd665c pop edi */
  EDI = (pop32());
  /* 11cd665d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd665e ret  */
  ESPCHK(0x11cd6500u, _esp0);
  ESP += 4; return;
  /* 11cd665f nop  */
  /* nop */
L_11cd6660:;
  /* 11cd6660 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cd6662 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd6664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6667 pop esi */
  ESI = (pop32());
  /* 11cd6668 pop edi */
  EDI = (pop32());
  /* 11cd6669 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd666a ret  */
  ESPCHK(0x11cd6500u, _esp0);
  ESP += 4; return;
  /* 11cd666b nop  */
  /* nop */
L_11cd666c:;
  /* 11cd666c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cd666e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd6670 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cd6673 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cd6676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6679 pop esi */
  ESI = (pop32());
  /* 11cd667a pop edi */
  EDI = (pop32());
  /* 11cd667b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd667c ret  */
  ESPCHK(0x11cd6500u, _esp0);
  ESP += 4; return;
  /* 11cd667d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cd6680:;
  /* 11cd6680 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cd6682 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd6684 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cd6687 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cd668a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cd668d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cd6690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6693 pop esi */
  ESI = (pop32());
  /* 11cd6694 pop edi */
  EDI = (pop32());
  /* 11cd6695 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd6696 ret  */
  ESPCHK(0x11cd6500u, _esp0);
  ESP += 4; return;
  /* 11cd6697 nop  */
  /* nop */
L_11cd6698:;
  /* 11cd6698 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11cd669c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11cd66a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11cd66a6 jne 0x11cd66cc */
  if (!C.zf) goto L_11cd66cc;
  /* 11cd66a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd66ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd66ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd66b1 jb 0x11cd66c0 */
  if (C.cf) goto L_11cd66c0;
  /* 11cd66b3 std  */
  C.df=1;
  /* 11cd66b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd66b6 cld  */
  C.df=0;
  /* 11cd66b7 jmp dword ptr [edx*4 + 0x11cd67e0] */
  switch (EDX) {
    case 0: goto L_11cd67f0;
    case 1: goto L_11cd67f8;
    case 2: goto L_11cd6808;
    case 3: goto L_11cd681c;
    default: x86_unimpl("switch@0x11cd66b7 out of table"); return;
  }
  /* 11cd66be mov edi, edi */
  EDI = (EDI);
L_11cd66c0:;
  /* 11cd66c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd66c2 jmp dword ptr [ecx*4 + 0x11cd6790] */
  switch (ECX) {
    case 0: goto L_11cd67d7;
    default: x86_unimpl("switch@0x11cd66c2 out of table"); return;
  }
  /* 11cd66c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cd66cc:;
  /* 11cd66cc mov eax, edi */
  EAX = (EDI);
  /* 11cd66ce mov edx, 3 */
  EDX = (0x3u);
  /* 11cd66d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd66d6 jb 0x11cd66e4 */
  if (C.cf) goto L_11cd66e4;
  /* 11cd66d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd66db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd66dd jmp dword ptr [eax*4 + 0x11cd66e8] */
  switch (EAX) {
    case 1: goto L_11cd66f8;
    case 2: goto L_11cd6718;
    case 3: goto L_11cd6740;
    default: x86_unimpl("switch@0x11cd66dd out of table"); return;
  }
L_11cd66e4:;
  /* 11cd66e4 jmp dword ptr [ecx*4 + 0x11cd67e0] */
  switch (ECX) {
    case 0: goto L_11cd67f0;
    case 1: goto L_11cd67f8;
    case 2: goto L_11cd6808;
    case 3: goto L_11cd681c;
    default: x86_unimpl("switch@0x11cd66e4 out of table"); return;
  }
  /* 11cd66eb nop  */
  /* nop */
L_11cd66f8:;
  /* 11cd66f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cd66fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd66fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cd6700 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11cd6701 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd6704 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11cd6705 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6708 jb 0x11cd66c0 */
  if (C.cf) goto L_11cd66c0;
  /* 11cd670a std  */
  C.df=1;
  /* 11cd670b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd670d cld  */
  C.df=0;
  /* 11cd670e jmp dword ptr [edx*4 + 0x11cd67e0] */
  switch (EDX) {
    case 0: goto L_11cd67f0;
    case 1: goto L_11cd67f8;
    case 2: goto L_11cd6808;
    case 3: goto L_11cd681c;
    default: x86_unimpl("switch@0x11cd670e out of table"); return;
  }
  /* 11cd6715 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cd6718:;
  /* 11cd6718 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cd671b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd671d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cd6720 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cd6723 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd6726 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cd6729 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd672c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd672f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6732 jb 0x11cd66c0 */
  if (C.cf) goto L_11cd66c0;
  /* 11cd6734 std  */
  C.df=1;
  /* 11cd6735 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd6737 cld  */
  C.df=0;
  /* 11cd6738 jmp dword ptr [edx*4 + 0x11cd67e0] */
  switch (EDX) {
    case 0: goto L_11cd67f0;
    case 1: goto L_11cd67f8;
    case 2: goto L_11cd6808;
    case 3: goto L_11cd681c;
    default: x86_unimpl("switch@0x11cd6738 out of table"); return;
  }
  /* 11cd673f nop  */
  /* nop */
L_11cd6740:;
  /* 11cd6740 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cd6743 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6745 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cd6748 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cd674b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cd674e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cd6751 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd6754 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cd6757 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd675a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd675d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6760 jb 0x11cd66c0 */
  if (C.cf) goto L_11cd66c0;
  /* 11cd6766 std  */
  C.df=1;
  /* 11cd6767 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd6769 cld  */
  C.df=0;
  /* 11cd676a jmp dword ptr [edx*4 + 0x11cd67e0] */
  switch (EDX) {
    case 0: goto L_11cd67f0;
    case 1: goto L_11cd67f8;
    case 2: goto L_11cd6808;
    case 3: goto L_11cd681c;
    default: x86_unimpl("switch@0x11cd676a out of table"); return;
  }
  /* 11cd6771 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11cd6774 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11cd6775 int 0x11 */
  x86_unimpl("int @ 0x11cd6775");
  /* 11cd6778 pushfd  */
  x86_unimpl("pushfd @ 0x11cd6778");
  /* 11cd6779 int 0x11 */
  x86_unimpl("int @ 0x11cd6779");
  /* 11cd677c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11cd677d int 0x11 */
  x86_unimpl("int @ 0x11cd677d");
  /* 11cd6780 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 11cd6781 int 0x11 */
  x86_unimpl("int @ 0x11cd6781");
  /* 11cd6784 mov ah, 0x67 */
  AH = (0x67u);
  /* 11cd6786 int 0x11 */
  x86_unimpl("int @ 0x11cd6786");
  /* 11cd6788 mov esp, 0xc411cd67 */
  ESP = (0xc411cd67u);
  /* 11cd678d int 0x11 */
  x86_unimpl("int @ 0x11cd678d");
  /* 11cd6794 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11cd6798 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11cd679c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11cd67a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11cd67a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11cd67a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11cd67ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11cd67b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11cd67b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11cd67b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11cd67bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11cd67c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11cd67c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11cd67c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11cd67cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11cd67d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd67d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11cd67d7:;
  /* 11cd67d7 jmp dword ptr [edx*4 + 0x11cd67e0] */
  switch (EDX) {
    case 0: goto L_11cd67f0;
    case 1: goto L_11cd67f8;
    case 2: goto L_11cd6808;
    case 3: goto L_11cd681c;
    default: x86_unimpl("switch@0x11cd67d7 out of table"); return;
  }
  /* 11cd67de mov edi, edi */
  EDI = (EDI);
L_11cd67f0:;
  /* 11cd67f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd67f3 pop esi */
  ESI = (pop32());
  /* 11cd67f4 pop edi */
  EDI = (pop32());
  /* 11cd67f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd67f6 ret  */
  ESPCHK(0x11cd6500u, _esp0);
  ESP += 4; return;
  /* 11cd67f7 nop  */
  /* nop */
L_11cd67f8:;
  /* 11cd67f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cd67fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cd67fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6801 pop esi */
  ESI = (pop32());
  /* 11cd6802 pop edi */
  EDI = (pop32());
  /* 11cd6803 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd6804 ret  */
  ESPCHK(0x11cd6500u, _esp0);
  ESP += 4; return;
  /* 11cd6805 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cd6808:;
  /* 11cd6808 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cd680b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cd680e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cd6811 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cd6814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6817 pop esi */
  ESI = (pop32());
  /* 11cd6818 pop edi */
  EDI = (pop32());
  /* 11cd6819 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd681a ret  */
  ESPCHK(0x11cd6500u, _esp0);
  ESP += 4; return;
  /* 11cd681b nop  */
  /* nop */
L_11cd681c:;
  /* 11cd681c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cd681f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cd6822 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cd6825 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cd6828 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cd682b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cd682e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6831 pop esi */
  ESI = (pop32());
  /* 11cd6832 pop edi */
  EDI = (pop32());
  /* 11cd6833 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd6834 ret  */
  ESPCHK(0x11cd6500u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11cd6840 (145 bytes, 42 insns) */
void f_11cd6840(void) {
  FTRACE(0x11cd6840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd6840 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd6841 mov ebp, esp */
  EBP = (ESP);
  /* 11cd6843 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6844 call 0x11cd68f0 */
  push32(0x11cd6849u); f_11cd68f0();
  /* 11cd6849 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd684c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11cd684e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd6855 jmp 0x11cd6860 */
  goto L_11cd6860;
L_11cd6857:;
  /* 11cd6857 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd685a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd685d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd6860:;
  /* 11cd6860 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6864 jae 0x11cd688a */
  if (!C.cf) goto L_11cd688a;
  /* 11cd6866 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd6869 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd686c cmp ecx, dword ptr [eax*8 + 0x11cfd670] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11cfd670))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6873 jne 0x11cd6888 */
  if (!C.zf) goto L_11cd6888;
  /* 11cd6875 call 0x11cd68e0 */
  push32(0x11cd687au); f_11cd68e0();
  /* 11cd687a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd687d mov ecx, dword ptr [edx*8 + 0x11cfd674] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11cfd674)));
  /* 11cd6884 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11cd6886 jmp 0x11cd68cd */
  goto L_11cd68cd;
L_11cd6888:;
  /* 11cd6888 jmp 0x11cd6857 */
  goto L_11cd6857;
L_11cd688a:;
  /* 11cd688a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd688e jb 0x11cd68a3 */
  if (C.cf) goto L_11cd68a3;
  /* 11cd6890 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6894 ja 0x11cd68a3 */
  if ((!C.cf&&!C.zf)) goto L_11cd68a3;
  /* 11cd6896 call 0x11cd68e0 */
  push32(0x11cd689bu); f_11cd68e0();
  /* 11cd689b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11cd68a1 jmp 0x11cd68cd */
  goto L_11cd68cd;
L_11cd68a3:;
  /* 11cd68a3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd68aa jb 0x11cd68c2 */
  if (C.cf) goto L_11cd68c2;
  /* 11cd68ac cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd68b3 ja 0x11cd68c2 */
  if ((!C.cf&&!C.zf)) goto L_11cd68c2;
  /* 11cd68b5 call 0x11cd68e0 */
  push32(0x11cd68bau); f_11cd68e0();
  /* 11cd68ba mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11cd68c0 jmp 0x11cd68cd */
  goto L_11cd68cd;
L_11cd68c2:;
  /* 11cd68c2 call 0x11cd68e0 */
  push32(0x11cd68c7u); f_11cd68e0();
  /* 11cd68c7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11cd68cd:;
  /* 11cd68cd mov esp, ebp */
  ESP = (EBP);
  /* 11cd68cf pop ebp */
  EBP = (pop32());
  /* 11cd68d0 ret  */
  ESPCHK(0x11cd6840u, _esp0);
  ESP += 4; return;
}

/* FUN_100168e0 @ 0x11cd68e0 (13 bytes, 6 insns) */
void f_11cd68e0(void) {
  FTRACE(0x11cd68e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd68e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd68e1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd68e3 call 0x11cce1c0 */
  push32(0x11cd68e8u); f_11cce1c0();
  /* 11cd68e8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd68eb pop ebp */
  EBP = (pop32());
  /* 11cd68ec ret  */
  ESPCHK(0x11cd68e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100168f0 @ 0x11cd68f0 (13 bytes, 6 insns) */
void f_11cd68f0(void) {
  FTRACE(0x11cd68f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd68f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd68f1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd68f3 call 0x11cce1c0 */
  push32(0x11cd68f8u); f_11cce1c0();
  /* 11cd68f8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd68fb pop ebp */
  EBP = (pop32());
  /* 11cd68fc ret  */
  ESPCHK(0x11cd68f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016900 @ 0x11cd6900 (85 bytes, 32 insns) */
void f_11cd6900(void) {
  FTRACE(0x11cd6900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd6900 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd6901 mov ebp, esp */
  EBP = (ESP);
  /* 11cd6903 cmp dword ptr [0x11cfd8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd690a jne 0x11cd6934 */
  if (!C.zf) goto L_11cd6934;
  /* 11cd690c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd690f push eax */
  push32((uint32_t)(EAX));
  /* 11cd6910 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd6913 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6914 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6917 push edx */
  push32((uint32_t)(EDX));
  /* 11cd6918 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd691a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd691c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd691f push eax */
  push32((uint32_t)(EAX));
  /* 11cd6920 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6923 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6927 push edx */
  push32((uint32_t)(EDX));
  /* 11cd6928 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd692a call 0x11cd73b0 */
  push32(0x11cd692fu); f_11cd73b0();
  /* 11cd692f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6932 jmp 0x11cd6953 */
  goto L_11cd6953;
L_11cd6934:;
  /* 11cd6934 call 0x11cd68e0 */
  push32(0x11cd6939u); f_11cd68e0();
  /* 11cd6939 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11cd693f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11cd6944 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd6947 push eax */
  push32((uint32_t)(EAX));
  /* 11cd6948 call 0x11cd75a0 */
  push32(0x11cd694du); f_11cd75a0();
  /* 11cd694d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6950 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
L_11cd6953:;
  /* 11cd6953 pop ebp */
  EBP = (pop32());
  /* 11cd6954 ret  */
  ESPCHK(0x11cd6900u, _esp0);
  ESP += 4; return;
}

/* FUN_10016960 @ 0x11cd6960 (103 bytes, 39 insns) */
void f_11cd6960(void) {
  FTRACE(0x11cd6960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd6960 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd6961 mov ebp, esp */
  EBP = (ESP);
  /* 11cd6963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd6966 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
  /* 11cd6969 fadd qword ptr [ebp + 0x14] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + 0x14)));
  /* 11cd696c fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11cd696f cmp dword ptr [0x11cfd8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6976 jne 0x11cd69a4 */
  if (!C.zf) goto L_11cd69a4;
  /* 11cd6978 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd697b push eax */
  push32((uint32_t)(EAX));
  /* 11cd697c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd697f push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6980 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd6983 push edx */
  push32((uint32_t)(EDX));
  /* 11cd6984 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd6987 push eax */
  push32((uint32_t)(EAX));
  /* 11cd6988 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd698b push ecx */
  push32((uint32_t)(ECX));
  /* 11cd698c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd698f push edx */
  push32((uint32_t)(EDX));
  /* 11cd6990 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6993 push eax */
  push32((uint32_t)(EAX));
  /* 11cd6994 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6997 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6998 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd699a call 0x11cd73b0 */
  push32(0x11cd699fu); f_11cd73b0();
  /* 11cd699f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd69a2 jmp 0x11cd69c3 */
  goto L_11cd69c3;
L_11cd69a4:;
  /* 11cd69a4 call 0x11cd68e0 */
  push32(0x11cd69a9u); f_11cd68e0();
  /* 11cd69a9 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11cd69af push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11cd69b4 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd69b7 push edx */
  push32((uint32_t)(EDX));
  /* 11cd69b8 call 0x11cd75a0 */
  push32(0x11cd69bdu); f_11cd75a0();
  /* 11cd69bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd69c0 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
L_11cd69c3:;
  /* 11cd69c3 mov esp, ebp */
  ESP = (EBP);
  /* 11cd69c5 pop ebp */
  EBP = (pop32());
  /* 11cd69c6 ret  */
  ESPCHK(0x11cd6960u, _esp0);
  ESP += 4; return;
}

/* FUN_100169d0 @ 0x11cd69d0 (178 bytes, 71 insns) */
void f_11cd69d0(void) {
  FTRACE(0x11cd69d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd69d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd69d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd69d3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd69d6 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11cd69d9 push eax */
  push32((uint32_t)(EAX));
  /* 11cd69da lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11cd69dd push ecx */
  push32((uint32_t)(ECX));
  /* 11cd69de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd69e1 push edx */
  push32((uint32_t)(EDX));
  /* 11cd69e2 call 0x11cd7030 */
  push32(0x11cd69e7u); f_11cd7030();
  /* 11cd69e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd69ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd69ec jne 0x11cd6a16 */
  if (!C.zf) goto L_11cd6a16;
  /* 11cd69ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd69f1 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11cd69f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11cd69f6 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11cd69f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd69fa lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11cd69fd push edx */
  push32((uint32_t)(EDX));
  /* 11cd69fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6a01 push eax */
  push32((uint32_t)(EAX));
  /* 11cd6a02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6a05 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6a06 lea edx, [ebp + 0x20] */
  EDX = ((uint32_t)(EBP + 0x20));
  /* 11cd6a09 push edx */
  push32((uint32_t)(EDX));
  /* 11cd6a0a lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11cd6a0d push eax */
  push32((uint32_t)(EAX));
  /* 11cd6a0e call 0x11cd6b60 */
  push32(0x11cd6a13u); f_11cd6b60();
  /* 11cd6a13 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd6a16:;
  /* 11cd6a16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6a19 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6a1a call 0x11cd74d0 */
  push32(0x11cd6a1fu); f_11cd74d0();
  /* 11cd6a1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6a22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd6a25 cmp dword ptr [0x11cfd8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6a2c jne 0x11cd6a5e */
  if (!C.zf) goto L_11cd6a5e;
  /* 11cd6a2e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6a32 je 0x11cd6a5e */
  if (C.zf) goto L_11cd6a5e;
  /* 11cd6a34 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11cd6a37 push edx */
  push32((uint32_t)(EDX));
  /* 11cd6a38 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd6a3b push eax */
  push32((uint32_t)(EAX));
  /* 11cd6a3c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd6a3f push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6a40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd6a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd6a44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd6a47 push edx */
  push32((uint32_t)(EDX));
  /* 11cd6a48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd6a4b push eax */
  push32((uint32_t)(EAX));
  /* 11cd6a4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6a4f push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6a50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd6a53 push edx */
  push32((uint32_t)(EDX));
  /* 11cd6a54 call 0x11cd73b0 */
  push32(0x11cd6a59u); f_11cd73b0();
  /* 11cd6a59 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6a5c jmp 0x11cd6a7e */
  goto L_11cd6a7e;
L_11cd6a5e:;
  /* 11cd6a5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd6a61 push eax */
  push32((uint32_t)(EAX));
  /* 11cd6a62 call 0x11cd7450 */
  push32(0x11cd6a67u); f_11cd7450();
  /* 11cd6a67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6a6a push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11cd6a6f mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11cd6a72 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6a73 call 0x11cd75a0 */
  push32(0x11cd6a78u); f_11cd75a0();
  /* 11cd6a78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6a7b fld qword ptr [ebp + 0x18] */
  fpu_push(rf64((uint32_t)(EBP + 0x18)));
L_11cd6a7e:;
  /* 11cd6a7e mov esp, ebp */
  ESP = (EBP);
  /* 11cd6a80 pop ebp */
  EBP = (pop32());
  /* 11cd6a81 ret  */
  ESPCHK(0x11cd69d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a90 @ 0x11cd6a90 (206 bytes, 81 insns) */
void f_11cd6a90(void) {
  FTRACE(0x11cd6a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd6a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd6a91 mov ebp, esp */
  EBP = (ESP);
  /* 11cd6a93 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd6a96 mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11cd6a99 push eax */
  push32((uint32_t)(EAX));
  /* 11cd6a9a lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 11cd6a9d push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6a9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6aa1 push edx */
  push32((uint32_t)(EDX));
  /* 11cd6aa2 call 0x11cd7030 */
  push32(0x11cd6aa7u); f_11cd7030();
  /* 11cd6aa7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd6aac jne 0x11cd6aee */
  if (!C.zf) goto L_11cd6aee;
  /* 11cd6aae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd6ab1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11cd6ab3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11cd6ab6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd6ab9 and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6abc or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6abf mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11cd6ac2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd6ac5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11cd6ac8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd6acb mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11cd6ace lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 11cd6ad1 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6ad2 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11cd6ad5 push edx */
  push32((uint32_t)(EDX));
  /* 11cd6ad6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6ad9 push eax */
  push32((uint32_t)(EAX));
  /* 11cd6ada mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6add push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6ade lea edx, [ebp + 0x28] */
  EDX = ((uint32_t)(EBP + 0x28));
  /* 11cd6ae1 push edx */
  push32((uint32_t)(EDX));
  /* 11cd6ae2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11cd6ae5 push eax */
  push32((uint32_t)(EAX));
  /* 11cd6ae6 call 0x11cd6b60 */
  push32(0x11cd6aebu); f_11cd6b60();
  /* 11cd6aeb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd6aee:;
  /* 11cd6aee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6af1 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6af2 call 0x11cd74d0 */
  push32(0x11cd6af7u); f_11cd74d0();
  /* 11cd6af7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6afa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd6afd cmp dword ptr [0x11cfd8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6b04 jne 0x11cd6b3a */
  if (!C.zf) goto L_11cd6b3a;
  /* 11cd6b06 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6b0a je 0x11cd6b3a */
  if (C.zf) goto L_11cd6b3a;
  /* 11cd6b0c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11cd6b0f push edx */
  push32((uint32_t)(EDX));
  /* 11cd6b10 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11cd6b13 push eax */
  push32((uint32_t)(EAX));
  /* 11cd6b14 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11cd6b17 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6b18 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd6b1b push edx */
  push32((uint32_t)(EDX));
  /* 11cd6b1c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd6b1f push eax */
  push32((uint32_t)(EAX));
  /* 11cd6b20 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd6b23 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6b24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd6b27 push edx */
  push32((uint32_t)(EDX));
  /* 11cd6b28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6b2b push eax */
  push32((uint32_t)(EAX));
  /* 11cd6b2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd6b2f push ecx */
  push32((uint32_t)(ECX));
  /* 11cd6b30 call 0x11cd73b0 */
  push32(0x11cd6b35u); f_11cd73b0();
  /* 11cd6b35 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6b38 jmp 0x11cd6b5a */
  goto L_11cd6b5a;
L_11cd6b3a:;
  /* 11cd6b3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd6b3d push edx */
  push32((uint32_t)(EDX));
  /* 11cd6b3e call 0x11cd7450 */
  push32(0x11cd6b43u); f_11cd7450();
  /* 11cd6b43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6b46 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11cd6b4b mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11cd6b4e push eax */
  push32((uint32_t)(EAX));
  /* 11cd6b4f call 0x11cd75a0 */
  push32(0x11cd6b54u); f_11cd75a0();
  /* 11cd6b54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd6b57 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11cd6b5a:;
  /* 11cd6b5a mov esp, ebp */
  ESP = (EBP);
  /* 11cd6b5c pop ebp */
  EBP = (pop32());
  /* 11cd6b5d ret  */
  ESPCHK(0x11cd6a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b60 @ 0x11cd6b60 (1201 bytes, 425 insns) [1 switch table(s)] */
void f_11cd6b60(void) {
  FTRACE(0x11cd6b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd6b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd6b61 mov ebp, esp */
  EBP = (ESP);
  /* 11cd6b63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd6b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6b69 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11cd6b70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6b73 mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11cd6b7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6b7d mov dword ptr [edx + 0xc], 0 */
  w32((uint32_t)(EDX + 0xc), (0x0u));
  /* 11cd6b84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd6b87 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6b8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd6b8c je 0x11cd6ba4 */
  if (C.zf) goto L_11cd6ba4;
  /* 11cd6b8e mov dword ptr [ebp - 4], 0xc000008f */
  w32((uint32_t)(EBP + -0x4), (0xc000008fu));
  /* 11cd6b95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6b98 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd6b9b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6b9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6ba1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11cd6ba4:;
  /* 11cd6ba4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd6ba7 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6baa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd6bac je 0x11cd6bc3 */
  if (C.zf) goto L_11cd6bc3;
  /* 11cd6bae mov dword ptr [ebp - 4], 0xc0000093 */
  w32((uint32_t)(EBP + -0x4), (0xc0000093u));
  /* 11cd6bb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6bb8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd6bbb or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11cd6bbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6bc0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11cd6bc3:;
  /* 11cd6bc3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd6bc6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6bc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd6bcb je 0x11cd6be3 */
  if (C.zf) goto L_11cd6be3;
  /* 11cd6bcd mov dword ptr [ebp - 4], 0xc0000091 */
  w32((uint32_t)(EBP + -0x4), (0xc0000091u));
  /* 11cd6bd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6bd7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd6bda or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6bdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6be0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11cd6be3:;
  /* 11cd6be3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd6be6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6be9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd6beb je 0x11cd6c03 */
  if (C.zf) goto L_11cd6c03;
  /* 11cd6bed mov dword ptr [ebp - 4], 0xc000008e */
  w32((uint32_t)(EBP + -0x4), (0xc000008eu));
  /* 11cd6bf4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6bf7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd6bfa or edx, 8 */
  { uint32_t _r=(EDX)|(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6bfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6c00 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11cd6c03:;
  /* 11cd6c03 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd6c06 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6c09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd6c0b je 0x11cd6c22 */
  if (C.zf) goto L_11cd6c22;
  /* 11cd6c0d mov dword ptr [ebp - 4], 0xc0000090 */
  w32((uint32_t)(EBP + -0x4), (0xc0000090u));
  /* 11cd6c14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6c17 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd6c1a or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 11cd6c1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6c1f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11cd6c22:;
  /* 11cd6c22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6c25 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd6c27 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6c2a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd6c2c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd6c2e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cd6c2f and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6c32 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11cd6c35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6c38 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd6c3b and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6c3e or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6c40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6c43 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11cd6c46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6c49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd6c4b and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6c4e neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd6c50 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd6c52 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11cd6c53 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6c56 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11cd6c59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6c5c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd6c5f and ecx, 0xfffffff7 */
  { uint32_t _r=(ECX)&(0xfffffff7u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6c62 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6c64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6c67 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11cd6c6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6c6d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd6c6f and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6c72 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd6c74 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd6c76 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cd6c77 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6c7a shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd6c7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6c80 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cd6c83 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11cd6c85 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6c87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6c8a mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11cd6c8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6c90 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd6c92 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6c95 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd6c97 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd6c99 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cd6c9a and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6c9d shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cd6c9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6ca2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd6ca5 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6ca8 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6caa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6cad mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11cd6cb0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6cb3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd6cb5 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6cb8 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd6cba sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd6cbc inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11cd6cbd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6cc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6cc3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd6cc6 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6cc9 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6ccb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6cce mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11cd6cd1 call 0x11cd7560 */
  push32(0x11cd6cd6u); f_11cd7560();
  /* 11cd6cd6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd6cd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd6cdc and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6cdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd6ce1 je 0x11cd6cf2 */
  if (C.zf) goto L_11cd6cf2;
  /* 11cd6ce3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6ce6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cd6ce9 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6cec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6cef mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_11cd6cf2:;
  /* 11cd6cf2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd6cf5 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6cf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd6cfa je 0x11cd6d0a */
  if (C.zf) goto L_11cd6d0a;
  /* 11cd6cfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6cff mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11cd6d02 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11cd6d04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6d07 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11cd6d0a:;
  /* 11cd6d0a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd6d0d and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6d10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd6d12 je 0x11cd6d23 */
  if (C.zf) goto L_11cd6d23;
  /* 11cd6d14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6d17 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cd6d1a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6d1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6d20 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11cd6d23:;
  /* 11cd6d23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd6d26 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6d29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd6d2b je 0x11cd6d3c */
  if (C.zf) goto L_11cd6d3c;
  /* 11cd6d2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6d30 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cd6d33 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6d39 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_11cd6d3c:;
  /* 11cd6d3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd6d3f and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6d42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd6d44 je 0x11cd6d54 */
  if (C.zf) goto L_11cd6d54;
  /* 11cd6d46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6d49 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11cd6d4c or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11cd6d4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6d51 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11cd6d54:;
  /* 11cd6d54 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6d57 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd6d59 and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6d5e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd6d61 cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6d68 ja 0x11cd6d84 */
  if ((!C.cf&&!C.zf)) goto L_11cd6d84;
  /* 11cd6d6a cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6d71 je 0x11cd6d9e */
  if (C.zf) goto L_11cd6d9e;
  /* 11cd6d73 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6d77 je 0x11cd6dc2 */
  if (C.zf) goto L_11cd6dc2;
  /* 11cd6d79 cmp dword ptr [ebp - 0xc], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6d80 je 0x11cd6db0 */
  if (C.zf) goto L_11cd6db0;
  /* 11cd6d82 jmp 0x11cd6dcf */
  goto L_11cd6dcf;
L_11cd6d84:;
  /* 11cd6d84 cmp dword ptr [ebp - 0xc], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6d8b je 0x11cd6d8f */
  if (C.zf) goto L_11cd6d8f;
  /* 11cd6d8d jmp 0x11cd6dcf */
  goto L_11cd6dcf;
L_11cd6d8f:;
  /* 11cd6d8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6d92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd6d94 or edx, 3 */
  { uint32_t _r=(EDX)|(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6d97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6d9a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cd6d9c jmp 0x11cd6dcf */
  goto L_11cd6dcf;
L_11cd6d9e:;
  /* 11cd6d9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6da1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd6da3 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6da6 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6da9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6dac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cd6dae jmp 0x11cd6dcf */
  goto L_11cd6dcf;
L_11cd6db0:;
  /* 11cd6db0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6db3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd6db5 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6db8 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6dbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6dbe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cd6dc0 jmp 0x11cd6dcf */
  goto L_11cd6dcf;
L_11cd6dc2:;
  /* 11cd6dc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6dc5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd6dc7 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6dca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6dcd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11cd6dcf:;
  /* 11cd6dcf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6dd2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd6dd4 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6dda mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11cd6ddd cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6de1 je 0x11cd6e18 */
  if (C.zf) goto L_11cd6e18;
  /* 11cd6de3 cmp dword ptr [ebp - 0x10], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6dea je 0x11cd6e06 */
  if (C.zf) goto L_11cd6e06;
  /* 11cd6dec cmp dword ptr [ebp - 0x10], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6df3 je 0x11cd6df7 */
  if (C.zf) goto L_11cd6df7;
  /* 11cd6df5 jmp 0x11cd6e28 */
  goto L_11cd6e28;
L_11cd6df7:;
  /* 11cd6df7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6dfa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd6dfc and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6dff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e02 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11cd6e04 jmp 0x11cd6e28 */
  goto L_11cd6e28;
L_11cd6e06:;
  /* 11cd6e06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd6e0b and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6e0e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6e11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e14 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11cd6e16 jmp 0x11cd6e28 */
  goto L_11cd6e28;
L_11cd6e18:;
  /* 11cd6e18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e1b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd6e1d and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6e20 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6e23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e26 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cd6e28:;
  /* 11cd6e28 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd6e2b and eax, 0xfff */
  { uint32_t _r=(EAX)&(0xfffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6e30 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd6e33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd6e38 and edx, 0xfffe001f */
  { uint32_t _r=(EDX)&(0xfffe001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6e3e or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6e40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cd6e45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e48 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11cd6e4b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6e4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e51 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11cd6e54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e57 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11cd6e5a and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6e5d or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6e60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e63 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11cd6e66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e69 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd6e6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd6e6e mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11cd6e71 mov edx, dword ptr [edx + 4] */
  EDX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd6e74 mov dword ptr [ecx + 0x14], edx */
  w32((uint32_t)(ECX + 0x14), (EDX));
  /* 11cd6e77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e7a mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11cd6e7d or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6e80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e83 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11cd6e86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e89 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11cd6e8c and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6e8f or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6e92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e95 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11cd6e98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6e9b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd6e9e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd6ea0 mov dword ptr [eax + 0x40], edx */
  w32((uint32_t)(EAX + 0x40), (EDX));
  /* 11cd6ea3 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd6ea6 mov dword ptr [eax + 0x44], ecx */
  w32((uint32_t)(EAX + 0x44), (ECX));
  /* 11cd6ea9 call 0x11cd7580 */
  push32(0x11cd6eaeu); f_11cd7580();
  /* 11cd6eae lea edx, [ebp + 8] */
  EDX = ((uint32_t)(EBP + 0x8));
  /* 11cd6eb1 push edx */
  push32((uint32_t)(EDX));
  /* 11cd6eb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd6eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd6eb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd6eb9 push eax */
  push32((uint32_t)(EAX));
  /* 11cd6eba call dword ptr [0x11d01354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01354))), 0x11cd6ec0u);
  /* 11cd6ec0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6ec3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd6ec6 shr edx, 4 */
  EDX = (sh_shr((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11cd6ec9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6ecc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd6ece je 0x11cd6edd */
  if (C.zf) goto L_11cd6edd;
  /* 11cd6ed0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6ed3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd6ed5 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6ed8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6edb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cd6edd:;
  /* 11cd6edd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6ee0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd6ee3 shr ecx, 3 */
  ECX = (sh_shr((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11cd6ee6 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6ee9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd6eeb je 0x11cd6ef9 */
  if (C.zf) goto L_11cd6ef9;
  /* 11cd6eed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6ef0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd6ef2 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11cd6ef4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6ef7 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11cd6ef9:;
  /* 11cd6ef9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6efc mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cd6eff shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11cd6f02 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6f05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd6f07 je 0x11cd6f16 */
  if (C.zf) goto L_11cd6f16;
  /* 11cd6f09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6f0c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd6f0e and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6f11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6f14 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11cd6f16:;
  /* 11cd6f16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6f19 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd6f1c shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11cd6f1e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd6f21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd6f23 je 0x11cd6f32 */
  if (C.zf) goto L_11cd6f32;
  /* 11cd6f25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6f28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd6f2a and ecx, 0xffffffef */
  { uint32_t _r=(ECX)&(0xffffffefu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6f2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6f30 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cd6f32:;
  /* 11cd6f32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6f35 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd6f38 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd6f3b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd6f3d je 0x11cd6f4b */
  if (C.zf) goto L_11cd6f4b;
  /* 11cd6f3f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6f42 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd6f44 and al, 0xdf */
  { uint32_t _r=(AL)&(0xdfu); AL = (_r); fl_logic(_r,8); }
  /* 11cd6f46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6f49 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11cd6f4b:;
  /* 11cd6f4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6f4e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd6f50 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6f53 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cd6f56 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6f5a ja 0x11cd6fa9 */
  if ((!C.cf&&!C.zf)) goto L_11cd6fa9;
  /* 11cd6f5c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd6f5f jmp dword ptr [ecx*4 + 0x11cd7011] */
  switch (ECX) {
    case 0: goto L_11cd6f9c;
    case 1: goto L_11cd6f8a;
    case 2: goto L_11cd6f78;
    case 3: goto L_11cd6f66;
    default: x86_unimpl("switch@0x11cd6f5f out of table"); return;
  }
L_11cd6f66:;
  /* 11cd6f66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6f69 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd6f6b and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11cd6f6e or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11cd6f71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6f74 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cd6f76 jmp 0x11cd6fa9 */
  goto L_11cd6fa9;
L_11cd6f78:;
  /* 11cd6f78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6f7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd6f7d and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11cd6f80 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11cd6f83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6f86 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cd6f88 jmp 0x11cd6fa9 */
  goto L_11cd6fa9;
L_11cd6f8a:;
  /* 11cd6f8a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6f8d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd6f8f and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11cd6f92 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11cd6f95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6f98 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cd6f9a jmp 0x11cd6fa9 */
  goto L_11cd6fa9;
L_11cd6f9c:;
  /* 11cd6f9c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6f9f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd6fa1 and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11cd6fa4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6fa7 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11cd6fa9:;
  /* 11cd6fa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6fac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd6fae shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11cd6fb1 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6fb4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd6fb7 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6fbb je 0x11cd6fcb */
  if (C.zf) goto L_11cd6fcb;
  /* 11cd6fbd cmp dword ptr [ebp - 0x18], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6fc1 je 0x11cd6fdd */
  if (C.zf) goto L_11cd6fdd;
  /* 11cd6fc3 cmp dword ptr [ebp - 0x18], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6fc7 je 0x11cd6fef */
  if (C.zf) goto L_11cd6fef;
  /* 11cd6fc9 jmp 0x11cd6ffc */
  goto L_11cd6ffc;
L_11cd6fcb:;
  /* 11cd6fcb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6fce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd6fd0 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11cd6fd3 or dh, 3 */
  { uint32_t _r=(C.d.b.h)|(0x3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11cd6fd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6fd9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cd6fdb jmp 0x11cd6ffc */
  goto L_11cd6ffc;
L_11cd6fdd:;
  /* 11cd6fdd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6fe0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd6fe2 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11cd6fe5 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11cd6fe8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6feb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cd6fed jmp 0x11cd6ffc */
  goto L_11cd6ffc;
L_11cd6fef:;
  /* 11cd6fef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6ff2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd6ff4 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11cd6ff7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd6ffa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11cd6ffc:;
  /* 11cd6ffc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd6fff mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd7002 mov eax, dword ptr [ecx + 0x40] */
  EAX = (r32((uint32_t)(ECX + 0x40)));
  /* 11cd7005 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11cd7007 mov ecx, dword ptr [ecx + 0x44] */
  ECX = (r32((uint32_t)(ECX + 0x44)));
  /* 11cd700a mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11cd700d mov esp, ebp */
  ESP = (EBP);
  /* 11cd700f pop ebp */
  EBP = (pop32());
  /* 11cd7010 ret  */
  ESPCHK(0x11cd6b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10017030 @ 0x11cd7030 (882 bytes, 268 insns) */
void f_11cd7030(void) {
  FTRACE(0x11cd7030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd7030 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd7031 mov ebp, esp */
  EBP = (ESP);
  /* 11cd7033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd7036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7039 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd703c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd703f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7042 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd7045 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd7047 je 0x11cd706a */
  if (C.zf) goto L_11cd706a;
  /* 11cd7049 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd704c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd704f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd7051 je 0x11cd706a */
  if (C.zf) goto L_11cd706a;
  /* 11cd7053 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd7055 call 0x11cd75e0 */
  push32(0x11cd705au); f_11cd75e0();
  /* 11cd705a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd705d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd7060 and al, 0xf7 */
  { uint32_t _r=(AL)&(0xf7u); AL = (_r); fl_logic(_r,8); }
  /* 11cd7062 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd7065 jmp 0x11cd736e */
  goto L_11cd736e;
L_11cd706a:;
  /* 11cd706a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd706d and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd7070 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd7072 je 0x11cd7095 */
  if (C.zf) goto L_11cd7095;
  /* 11cd7074 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd7077 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd707a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd707c je 0x11cd7095 */
  if (C.zf) goto L_11cd7095;
  /* 11cd707e push 4 */
  push32((uint32_t)(0x4u));
  /* 11cd7080 call 0x11cd75e0 */
  push32(0x11cd7085u); f_11cd75e0();
  /* 11cd7085 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd708b and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11cd708d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd7090 jmp 0x11cd736e */
  goto L_11cd736e;
L_11cd7095:;
  /* 11cd7095 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7098 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd709b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd709d je 0x11cd7211 */
  if (C.zf) goto L_11cd7211;
  /* 11cd70a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd70a6 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd70a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd70ab je 0x11cd7211 */
  if (C.zf) goto L_11cd7211;
  /* 11cd70b1 push 8 */
  push32((uint32_t)(0x8u));
  /* 11cd70b3 call 0x11cd75e0 */
  push32(0x11cd70b8u); f_11cd75e0();
  /* 11cd70b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd70bb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd70be and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd70c3 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11cd70c6 cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd70cd ja 0x11cd70f0 */
  if ((!C.cf&&!C.zf)) goto L_11cd70f0;
  /* 11cd70cf cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd70d6 je 0x11cd7145 */
  if (C.zf) goto L_11cd7145;
  /* 11cd70d8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd70dc je 0x11cd7102 */
  if (C.zf) goto L_11cd7102;
  /* 11cd70de cmp dword ptr [ebp - 0x20], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd70e5 je 0x11cd7185 */
  if (C.zf) goto L_11cd7185;
  /* 11cd70eb jmp 0x11cd7203 */
  goto L_11cd7203;
L_11cd70f0:;
  /* 11cd70f0 cmp dword ptr [ebp - 0x20], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd70f7 je 0x11cd71c5 */
  if (C.zf) goto L_11cd71c5;
  /* 11cd70fd jmp 0x11cd7203 */
  goto L_11cd7203;
L_11cd7102:;
  /* 11cd7102 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd7105 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11cd7107 fcomp qword ptr [0x11cf9788] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11cf9788)));
  (void)fpu_pop();
  /* 11cd710d fnstsw ax */
  AX = fpu_status();
  /* 11cd710f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11cd7112 jne 0x11cd7127 */
  if (!C.zf) goto L_11cd7127;
  /* 11cd7114 mov edx, dword ptr [0x11cfda20] */
  EDX = (r32((uint32_t)(0x11cfda20)));
  /* 11cd711a mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11cd711d mov eax, dword ptr [0x11cfda24] */
  EAX = (r32((uint32_t)(0x11cfda24)));
  /* 11cd7122 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11cd7125 jmp 0x11cd7132 */
  goto L_11cd7132;
L_11cd7127:;
  /* 11cd7127 fld qword ptr [0x11cfda20] */
  fpu_push(rf64((uint32_t)(0x11cfda20)));
  /* 11cd712d fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11cd712f fstp qword ptr [ebp - 0x28] */
  wf64((uint32_t)(EBP + -0x28), FPU_ST(0));
  (void)fpu_pop();
L_11cd7132:;
  /* 11cd7132 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd7135 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd7138 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11cd713a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd713d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11cd7140 jmp 0x11cd7203 */
  goto L_11cd7203;
L_11cd7145:;
  /* 11cd7145 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd7148 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11cd714a fcomp qword ptr [0x11cf9788] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11cf9788)));
  (void)fpu_pop();
  /* 11cd7150 fnstsw ax */
  AX = fpu_status();
  /* 11cd7152 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11cd7155 jne 0x11cd716a */
  if (!C.zf) goto L_11cd716a;
  /* 11cd7157 mov edx, dword ptr [0x11cfda20] */
  EDX = (r32((uint32_t)(0x11cfda20)));
  /* 11cd715d mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11cd7160 mov eax, dword ptr [0x11cfda24] */
  EAX = (r32((uint32_t)(0x11cfda24)));
  /* 11cd7165 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11cd7168 jmp 0x11cd7175 */
  goto L_11cd7175;
L_11cd716a:;
  /* 11cd716a fld qword ptr [0x11cfda30] */
  fpu_push(rf64((uint32_t)(0x11cfda30)));
  /* 11cd7170 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11cd7172 fstp qword ptr [ebp - 0x30] */
  wf64((uint32_t)(EBP + -0x30), FPU_ST(0));
  (void)fpu_pop();
L_11cd7175:;
  /* 11cd7175 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd7178 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd717b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11cd717d mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd7180 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11cd7183 jmp 0x11cd7203 */
  goto L_11cd7203;
L_11cd7185:;
  /* 11cd7185 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd7188 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11cd718a fcomp qword ptr [0x11cf9788] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11cf9788)));
  (void)fpu_pop();
  /* 11cd7190 fnstsw ax */
  AX = fpu_status();
  /* 11cd7192 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11cd7195 jne 0x11cd71aa */
  if (!C.zf) goto L_11cd71aa;
  /* 11cd7197 mov edx, dword ptr [0x11cfda30] */
  EDX = (r32((uint32_t)(0x11cfda30)));
  /* 11cd719d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11cd71a0 mov eax, dword ptr [0x11cfda34] */
  EAX = (r32((uint32_t)(0x11cfda34)));
  /* 11cd71a5 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11cd71a8 jmp 0x11cd71b5 */
  goto L_11cd71b5;
L_11cd71aa:;
  /* 11cd71aa fld qword ptr [0x11cfda20] */
  fpu_push(rf64((uint32_t)(0x11cfda20)));
  /* 11cd71b0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11cd71b2 fstp qword ptr [ebp - 0x38] */
  wf64((uint32_t)(EBP + -0x38), FPU_ST(0));
  (void)fpu_pop();
L_11cd71b5:;
  /* 11cd71b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd71b8 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd71bb mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11cd71bd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd71c0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11cd71c3 jmp 0x11cd7203 */
  goto L_11cd7203;
L_11cd71c5:;
  /* 11cd71c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd71c8 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11cd71ca fcomp qword ptr [0x11cf9788] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11cf9788)));
  (void)fpu_pop();
  /* 11cd71d0 fnstsw ax */
  AX = fpu_status();
  /* 11cd71d2 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11cd71d5 jne 0x11cd71ea */
  if (!C.zf) goto L_11cd71ea;
  /* 11cd71d7 mov edx, dword ptr [0x11cfda30] */
  EDX = (r32((uint32_t)(0x11cfda30)));
  /* 11cd71dd mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11cd71e0 mov eax, dword ptr [0x11cfda34] */
  EAX = (r32((uint32_t)(0x11cfda34)));
  /* 11cd71e5 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11cd71e8 jmp 0x11cd71f5 */
  goto L_11cd71f5;
L_11cd71ea:;
  /* 11cd71ea fld qword ptr [0x11cfda30] */
  fpu_push(rf64((uint32_t)(0x11cfda30)));
  /* 11cd71f0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11cd71f2 fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
L_11cd71f5:;
  /* 11cd71f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd71f8 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11cd71fb mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11cd71fd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd7200 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11cd7203:;
  /* 11cd7203 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd7206 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd7209 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd720c jmp 0x11cd736e */
  goto L_11cd736e;
L_11cd7211:;
  /* 11cd7211 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7214 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd7217 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd7219 je 0x11cd736e */
  if (C.zf) goto L_11cd736e;
  /* 11cd721f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd7222 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7227 je 0x11cd736e */
  if (C.zf) goto L_11cd736e;
  /* 11cd722d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cd7234 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7237 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd723a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd723c je 0x11cd7245 */
  if (C.zf) goto L_11cd7245;
  /* 11cd723e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11cd7245:;
  /* 11cd7245 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd7248 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 11cd724a fcomp qword ptr [0x11cf9788] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11cf9788)));
  (void)fpu_pop();
  /* 11cd7250 fnstsw ax */
  AX = fpu_status();
  /* 11cd7252 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11cd7255 jne 0x11cd734e */
  if (!C.zf) goto L_11cd734e;
  /* 11cd725b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11cd725e push eax */
  push32((uint32_t)(EAX));
  /* 11cd725f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd7262 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd7265 push edx */
  push32((uint32_t)(EDX));
  /* 11cd7266 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11cd7268 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7269 call 0x11cda440 */
  push32(0x11cd726eu); f_11cda440();
  /* 11cd726e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7271 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11cd7274 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd7277 sub ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd727d mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cd7280 cmp dword ptr [ebp - 0x14], 0xfffffbce */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffbceu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7287 jge 0x11cd72a1 */
  if ((C.sf==C.of)) goto L_11cd72a1;
  /* 11cd7289 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11cd728c fmul qword ptr [0x11cf9788] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11cf9788)));
  /* 11cd7292 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11cd7295 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11cd729c jmp 0x11cd733e */
  goto L_11cd733e;
L_11cd72a1:;
  /* 11cd72a1 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11cd72a4 fcomp qword ptr [0x11cf9788] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11cf9788)));
  (void)fpu_pop();
  /* 11cd72aa fnstsw ax */
  AX = fpu_status();
  /* 11cd72ac test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11cd72af je 0x11cd72ba */
  if (C.zf) goto L_11cd72ba;
  /* 11cd72b1 mov dword ptr [ebp - 0x44], 1 */
  w32((uint32_t)(EBP + -0x44), (0x1u));
  /* 11cd72b8 jmp 0x11cd72c1 */
  goto L_11cd72c1;
L_11cd72ba:;
  /* 11cd72ba mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
L_11cd72c1:;
  /* 11cd72c1 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11cd72c4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11cd72c7 mov ax, word ptr [ebp - 0xa] */
  AX = (r16((uint32_t)(EBP + -0xa)));
  /* 11cd72cb and ax, 0xf */
  { uint32_t _r=(AX)&(0xfu); AX = (_r); fl_logic(_r,16); }
  /* 11cd72cf mov word ptr [ebp - 0xa], ax */
  w16((uint32_t)(EBP + -0xa), (AX));
  /* 11cd72d3 mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11cd72d7 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11cd72da mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
  /* 11cd72de jmp 0x11cd72e9 */
  goto L_11cd72e9;
L_11cd72e0:;
  /* 11cd72e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd72e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd72e6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11cd72e9:;
  /* 11cd72e9 cmp dword ptr [ebp - 0x14], 0xfffffc03 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffc03u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd72f0 jge 0x11cd7330 */
  if ((C.sf==C.of)) goto L_11cd7330;
  /* 11cd72f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd72f5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd72f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd72fa je 0x11cd7309 */
  if (C.zf) goto L_11cd7309;
  /* 11cd72fc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7300 jne 0x11cd7309 */
  if (!C.zf) goto L_11cd7309;
  /* 11cd7302 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11cd7309:;
  /* 11cd7309 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd730c shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11cd730e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cd7311 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd7314 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd7317 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd7319 je 0x11cd7326 */
  if (C.zf) goto L_11cd7326;
  /* 11cd731b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd731e or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7323 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11cd7326:;
  /* 11cd7326 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd7329 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11cd732b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cd732e jmp 0x11cd72e0 */
  goto L_11cd72e0;
L_11cd7330:;
  /* 11cd7330 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7334 je 0x11cd733e */
  if (C.zf) goto L_11cd733e;
  /* 11cd7336 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11cd7339 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11cd733b fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
L_11cd733e:;
  /* 11cd733e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd7341 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd7344 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11cd7346 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd7349 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11cd734c jmp 0x11cd7355 */
  goto L_11cd7355;
L_11cd734e:;
  /* 11cd734e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11cd7355:;
  /* 11cd7355 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7359 je 0x11cd7365 */
  if (C.zf) goto L_11cd7365;
  /* 11cd735b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11cd735d call 0x11cd75e0 */
  push32(0x11cd7362u); f_11cd75e0();
  /* 11cd7362 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd7365:;
  /* 11cd7365 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd7368 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd736b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd736e:;
  /* 11cd736e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7371 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7374 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7376 je 0x11cd7395 */
  if (C.zf) goto L_11cd7395;
  /* 11cd7378 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd737b and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd737e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd7380 je 0x11cd7395 */
  if (C.zf) goto L_11cd7395;
  /* 11cd7382 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11cd7384 call 0x11cd75e0 */
  push32(0x11cd7389u); f_11cd75e0();
  /* 11cd7389 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd738c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd738f and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd7392 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd7395:;
  /* 11cd7395 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7397 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd739b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11cd739e mov esp, ebp */
  ESP = (EBP);
  /* 11cd73a0 pop ebp */
  EBP = (pop32());
  /* 11cd73a1 ret  */
  ESPCHK(0x11cd7030u, _esp0);
  ESP += 4; return;
}

/* __umatherr @ 0x11cd73b0 (155 bytes, 54 insns) */
void f_11cd73b0(void) {
  FTRACE(0x11cd73b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd73b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd73b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd73b3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd73b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd73b9 push eax */
  push32((uint32_t)(EAX));
  /* 11cd73ba call 0x11cd7490 */
  push32(0x11cd73bfu); f_11cd7490();
  /* 11cd73bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd73c2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11cd73c5 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd73c9 je 0x11cd7427 */
  if (C.zf) goto L_11cd7427;
  /* 11cd73cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd73ce mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11cd73d1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd73d4 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11cd73d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd73da mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cd73dd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd73e0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cd73e3 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd73e6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cd73e9 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11cd73ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd73ef mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11cd73f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd73f5 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11cd73fa mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11cd73fd push edx */
  push32((uint32_t)(EDX));
  /* 11cd73fe call 0x11cd75a0 */
  push32(0x11cd7403u); f_11cd75a0();
  /* 11cd7403 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7406 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11cd7409 push eax */
  push32((uint32_t)(EAX));
  /* 11cd740a call 0x11cd7550 */
  push32(0x11cd740fu); f_11cd7550();
  /* 11cd740f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7412 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7414 jne 0x11cd7422 */
  if (!C.zf) goto L_11cd7422;
  /* 11cd7416 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7419 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd741a call 0x11cd7450 */
  push32(0x11cd741fu); f_11cd7450();
  /* 11cd741f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd7422:;
  /* 11cd7422 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11cd7425 jmp 0x11cd7447 */
  goto L_11cd7447;
L_11cd7427:;
  /* 11cd7427 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11cd742c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11cd742f push edx */
  push32((uint32_t)(EDX));
  /* 11cd7430 call 0x11cd75a0 */
  push32(0x11cd7435u); f_11cd75a0();
  /* 11cd7435 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7438 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd743b push eax */
  push32((uint32_t)(EAX));
  /* 11cd743c call 0x11cd7450 */
  push32(0x11cd7441u); f_11cd7450();
  /* 11cd7441 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7444 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11cd7447:;
  /* 11cd7447 mov esp, ebp */
  ESP = (EBP);
  /* 11cd7449 pop ebp */
  EBP = (pop32());
  /* 11cd744a ret  */
  ESPCHK(0x11cd73b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__set_errno_from_matherr @ 0x11cd7450 (58 bytes, 20 insns) */
void f_11cd7450(void) {
  FTRACE(0x11cd7450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd7450 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd7451 mov ebp, esp */
  EBP = (ESP);
  /* 11cd7453 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7457 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd745a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd745e je 0x11cd746e */
  if (C.zf) goto L_11cd746e;
  /* 11cd7460 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7464 jle 0x11cd7486 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd7486;
  /* 11cd7466 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd746a jle 0x11cd747b */
  if ((C.zf||C.sf!=C.of)) goto L_11cd747b;
  /* 11cd746c jmp 0x11cd7486 */
  goto L_11cd7486;
L_11cd746e:;
  /* 11cd746e call 0x11cd68e0 */
  push32(0x11cd7473u); f_11cd68e0();
  /* 11cd7473 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11cd7479 jmp 0x11cd7486 */
  goto L_11cd7486;
L_11cd747b:;
  /* 11cd747b call 0x11cd68e0 */
  push32(0x11cd7480u); f_11cd68e0();
  /* 11cd7480 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
L_11cd7486:;
  /* 11cd7486 mov esp, ebp */
  ESP = (EBP);
  /* 11cd7488 pop ebp */
  EBP = (pop32());
  /* 11cd7489 ret  */
  ESPCHK(0x11cd7450u, _esp0);
  ESP += 4; return;
}

/* __get_fname @ 0x11cd7490 (63 bytes, 22 insns) */
void f_11cd7490(void) {
  FTRACE(0x11cd7490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd7490 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd7491 mov ebp, esp */
  EBP = (ESP);
  /* 11cd7493 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7494 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd749b jmp 0x11cd74a6 */
  goto L_11cd74a6;
L_11cd749d:;
  /* 11cd749d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd74a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd74a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd74a6:;
  /* 11cd74a6 cmp dword ptr [ebp - 4], 0x1b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd74aa jge 0x11cd74c9 */
  if ((C.sf==C.of)) goto L_11cd74c9;
  /* 11cd74ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd74af mov edx, dword ptr [ecx*8 + 0x11cfd7d8] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11cfd7d8)));
  /* 11cd74b6 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd74b9 jne 0x11cd74c7 */
  if (!C.zf) goto L_11cd74c7;
  /* 11cd74bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd74be mov eax, dword ptr [eax*8 + 0x11cfd7dc] */
  EAX = (r32((uint32_t)(EAX*8 + 0x11cfd7dc)));
  /* 11cd74c5 jmp 0x11cd74cb */
  goto L_11cd74cb;
L_11cd74c7:;
  /* 11cd74c7 jmp 0x11cd749d */
  goto L_11cd749d;
L_11cd74c9:;
  /* 11cd74c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cd74cb:;
  /* 11cd74cb mov esp, ebp */
  ESP = (EBP);
  /* 11cd74cd pop ebp */
  EBP = (pop32());
  /* 11cd74ce ret  */
  ESPCHK(0x11cd7490u, _esp0);
  ESP += 4; return;
}

/* FUN_100174d0 @ 0x11cd74d0 (113 bytes, 38 insns) */
void f_11cd74d0(void) {
  FTRACE(0x11cd74d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd74d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd74d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd74d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd74d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd74d7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd74da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd74dc je 0x11cd74e7 */
  if (C.zf) goto L_11cd74e7;
  /* 11cd74de mov dword ptr [ebp - 4], 5 */
  w32((uint32_t)(EBP + -0x4), (0x5u));
  /* 11cd74e5 jmp 0x11cd753a */
  goto L_11cd753a;
L_11cd74e7:;
  /* 11cd74e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd74ea and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd74ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd74ef je 0x11cd74fa */
  if (C.zf) goto L_11cd74fa;
  /* 11cd74f1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cd74f8 jmp 0x11cd753a */
  goto L_11cd753a;
L_11cd74fa:;
  /* 11cd74fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd74fd and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd7500 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd7502 je 0x11cd750d */
  if (C.zf) goto L_11cd750d;
  /* 11cd7504 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11cd750b jmp 0x11cd753a */
  goto L_11cd753a;
L_11cd750d:;
  /* 11cd750d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7510 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7513 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7515 je 0x11cd7520 */
  if (C.zf) goto L_11cd7520;
  /* 11cd7517 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11cd751e jmp 0x11cd753a */
  goto L_11cd753a;
L_11cd7520:;
  /* 11cd7520 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7523 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd7526 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd7528 je 0x11cd7533 */
  if (C.zf) goto L_11cd7533;
  /* 11cd752a mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11cd7531 jmp 0x11cd753a */
  goto L_11cd753a;
L_11cd7533:;
  /* 11cd7533 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cd753a:;
  /* 11cd753a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd753d mov esp, ebp */
  ESP = (EBP);
  /* 11cd753f pop ebp */
  EBP = (pop32());
  /* 11cd7540 ret  */
  ESPCHK(0x11cd74d0u, _esp0);
  ESP += 4; return;
}

/* __matherr @ 0x11cd7550 (7 bytes, 5 insns) */
void f_11cd7550(void) {
  FTRACE(0x11cd7550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd7550 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd7551 mov ebp, esp */
  EBP = (ESP);
  /* 11cd7553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7555 pop ebp */
  EBP = (pop32());
  /* 11cd7556 ret  */
  ESPCHK(0x11cd7550u, _esp0);
  ESP += 4; return;
}

/* FUN_10017560 @ 0x11cd7560 (22 bytes, 15 insns) */
void f_11cd7560(void) {
  FTRACE(0x11cd7560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd7560 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd7561 mov ebp, esp */
  EBP = (ESP);
  /* 11cd7563 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7564 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd7565 push esi */
  push32((uint32_t)(ESI));
  /* 11cd7566 push edi */
  push32((uint32_t)(EDI));
  /* 11cd7567 wait  */
  /* wait (no observable integer/reg state) */
  /* 11cd7568 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11cd756b movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11cd756f pop edi */
  EDI = (pop32());
  /* 11cd7570 pop esi */
  ESI = (pop32());
  /* 11cd7571 pop ebx */
  EBX = (pop32());
  /* 11cd7572 mov esp, ebp */
  ESP = (EBP);
  /* 11cd7574 pop ebp */
  EBP = (pop32());
  /* 11cd7575 ret  */
  ESPCHK(0x11cd7560u, _esp0);
  ESP += 4; return;
}

/* FUN_10017580 @ 0x11cd7580 (23 bytes, 15 insns) */
void f_11cd7580(void) {
  FTRACE(0x11cd7580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd7580 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd7581 mov ebp, esp */
  EBP = (ESP);
  /* 11cd7583 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7584 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd7585 push esi */
  push32((uint32_t)(ESI));
  /* 11cd7586 push edi */
  push32((uint32_t)(EDI));
  /* 11cd7587 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11cd758a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11cd758c movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11cd7590 pop edi */
  EDI = (pop32());
  /* 11cd7591 pop esi */
  ESI = (pop32());
  /* 11cd7592 pop ebx */
  EBX = (pop32());
  /* 11cd7593 mov esp, ebp */
  ESP = (EBP);
  /* 11cd7595 pop ebp */
  EBP = (pop32());
  /* 11cd7596 ret  */
  ESPCHK(0x11cd7580u, _esp0);
  ESP += 4; return;
}

/* FUN_100175a0 @ 0x11cd75a0 (50 bytes, 24 insns) */
void f_11cd75a0(void) {
  FTRACE(0x11cd75a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd75a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd75a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd75a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd75a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd75a7 push esi */
  push32((uint32_t)(ESI));
  /* 11cd75a8 push edi */
  push32((uint32_t)(EDI));
  /* 11cd75a9 wait  */
  /* wait (no observable integer/reg state) */
  /* 11cd75aa fnstcw word ptr [ebp - 8] */
  w16((uint32_t)(EBP + -0x8), C.fcw);
  /* 11cd75ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd75b0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11cd75b3 movsx ecx, word ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11cd75b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd75ba not edx */
  EDX = (~(EDX));
  /* 11cd75bc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd75be or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd75c0 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11cd75c4 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11cd75c7 movsx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11cd75cb pop edi */
  EDI = (pop32());
  /* 11cd75cc pop esi */
  ESI = (pop32());
  /* 11cd75cd pop ebx */
  EBX = (pop32());
  /* 11cd75ce mov esp, ebp */
  ESP = (EBP);
  /* 11cd75d0 pop ebp */
  EBP = (pop32());
  /* 11cd75d1 ret  */
  ESPCHK(0x11cd75a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100175e0 @ 0x11cd75e0 (117 bytes, 53 insns) */
void f_11cd75e0(void) {
  FTRACE(0x11cd75e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd75e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd75e1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd75e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd75e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd75e7 push esi */
  push32((uint32_t)(ESI));
  /* 11cd75e8 push edi */
  push32((uint32_t)(EDI));
  /* 11cd75e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd75ec and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd75ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd75f1 je 0x11cd75fd */
  if (C.zf) goto L_11cd75fd;
  /* 11cd75f3 fld xword ptr [0x11cfd8b4] */
  fpu_push(rf80((uint32_t)(0x11cfd8b4)));
  /* 11cd75f9 fistp dword ptr [ebp - 0xc] */
  w32((uint32_t)(EBP + -0xc), (uint32_t)fpu_to_i32(FPU_ST(0)));
  (void)fpu_pop();
  /* 11cd75fc wait  */
  /* wait (no observable integer/reg state) */
L_11cd75fd:;
  /* 11cd75fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7600 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd7603 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd7605 je 0x11cd7617 */
  if (C.zf) goto L_11cd7617;
  /* 11cd7607 wait  */
  /* wait (no observable integer/reg state) */
  /* 11cd7608 fnstsw ax */
  AX = fpu_status();
  /* 11cd760a fld xword ptr [0x11cfd8b4] */
  fpu_push(rf80((uint32_t)(0x11cfd8b4)));
  /* 11cd7610 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11cd7613 wait  */
  /* wait (no observable integer/reg state) */
  /* 11cd7614 wait  */
  /* wait (no observable integer/reg state) */
  /* 11cd7615 fnstsw ax */
  AX = fpu_status();
L_11cd7617:;
  /* 11cd7617 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd761a and edx, 0x10 */
  { uint32_t _r=(EDX)&(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd761d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd761f je 0x11cd762b */
  if (C.zf) goto L_11cd762b;
  /* 11cd7621 fld xword ptr [0x11cfd8c0] */
  fpu_push(rf80((uint32_t)(0x11cfd8c0)));
  /* 11cd7627 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11cd762a wait  */
  /* wait (no observable integer/reg state) */
L_11cd762b:;
  /* 11cd762b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd762e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7631 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7633 je 0x11cd763e */
  if (C.zf) goto L_11cd763e;
  /* 11cd7635 fldz  */
  fpu_push(0.0);
  /* 11cd7637 fld1  */
  fpu_push(1.0);
  /* 11cd7639 fdivrp st(1) */
  FPU_ST(1) = FPU_ST(0) / FPU_ST(1);
  (void)fpu_pop();
  /* 11cd763b fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11cd763d wait  */
  /* wait (no observable integer/reg state) */
L_11cd763e:;
  /* 11cd763e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7641 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd7644 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd7646 je 0x11cd764e */
  if (C.zf) goto L_11cd764e;
  /* 11cd7648 fldpi  */
  fpu_push(3.14159265358979311599796346854);
  /* 11cd764a fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11cd764d wait  */
  /* wait (no observable integer/reg state) */
L_11cd764e:;
  /* 11cd764e pop edi */
  EDI = (pop32());
  /* 11cd764f pop esi */
  ESI = (pop32());
  /* 11cd7650 pop ebx */
  EBX = (pop32());
  /* 11cd7651 mov esp, ebp */
  ESP = (EBP);
  /* 11cd7653 pop ebp */
  EBP = (pop32());
  /* 11cd7654 ret  */
  ESPCHK(0x11cd75e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017660 @ 0x11cd7660 (421 bytes, 148 insns) */
void f_11cd7660(void) {
  FTRACE(0x11cd7660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd7660 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd7661 mov ebp, esp */
  EBP = (ESP);
  /* 11cd7663 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cd7665 push 0x11cfa428 */
  push32((uint32_t)(0x11cfa428u));
  /* 11cd766a push 0x11cd501c */
  push32((uint32_t)(0x11cd501cu));
  /* 11cd766f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11cd7675 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7676 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11cd767d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7680 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd7681 push esi */
  push32((uint32_t)(ESI));
  /* 11cd7682 push edi */
  push32((uint32_t)(EDI));
  /* 11cd7683 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cd7686 cmp dword ptr [0x11cff64c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff64c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd768d jne 0x11cd76de */
  if (!C.zf) goto L_11cd76de;
  /* 11cd768f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11cd7692 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7693 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd7695 push 0x11cfa420 */
  push32((uint32_t)(0x11cfa420u));
  /* 11cd769a push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd769c call dword ptr [0x11d01348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01348))), 0x11cd76a2u);
  /* 11cd76a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd76a4 je 0x11cd76b2 */
  if (C.zf) goto L_11cd76b2;
  /* 11cd76a6 mov dword ptr [0x11cff64c], 1 */
  w32((uint32_t)(0x11cff64c), (0x1u));
  /* 11cd76b0 jmp 0x11cd76de */
  goto L_11cd76de;
L_11cd76b2:;
  /* 11cd76b2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11cd76b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd76b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd76b8 push 0x11cfa41c */
  push32((uint32_t)(0x11cfa41cu));
  /* 11cd76bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd76bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd76c1 call dword ptr [0x11d01340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01340))), 0x11cd76c7u);
  /* 11cd76c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd76c9 je 0x11cd76d7 */
  if (C.zf) goto L_11cd76d7;
  /* 11cd76cb mov dword ptr [0x11cff64c], 2 */
  w32((uint32_t)(0x11cff64c), (0x2u));
  /* 11cd76d5 jmp 0x11cd76de */
  goto L_11cd76de;
L_11cd76d7:;
  /* 11cd76d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd76d9 jmp 0x11cd7808 */
  goto L_11cd7808;
L_11cd76de:;
  /* 11cd76de cmp dword ptr [0x11cff64c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11cff64c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd76e5 jne 0x11cd7715 */
  if (!C.zf) goto L_11cd7715;
  /* 11cd76e7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd76eb jne 0x11cd76f6 */
  if (!C.zf) goto L_11cd76f6;
  /* 11cd76ed mov edx, dword ptr [0x11cff664] */
  EDX = (r32((uint32_t)(0x11cff664)));
  /* 11cd76f3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11cd76f6:;
  /* 11cd76f6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd76f9 push eax */
  push32((uint32_t)(EAX));
  /* 11cd76fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd76fd push ecx */
  push32((uint32_t)(ECX));
  /* 11cd76fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd7701 push edx */
  push32((uint32_t)(EDX));
  /* 11cd7702 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7705 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7706 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd7709 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd770a call dword ptr [0x11d01340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01340))), 0x11cd7710u);
  /* 11cd7710 jmp 0x11cd7808 */
  goto L_11cd7808;
L_11cd7715:;
  /* 11cd7715 cmp dword ptr [0x11cff64c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff64c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd771c jne 0x11cd7806 */
  if (!C.zf) goto L_11cd7806;
  /* 11cd7722 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7726 jne 0x11cd7731 */
  if (!C.zf) goto L_11cd7731;
  /* 11cd7728 mov edx, dword ptr [0x11cff674] */
  EDX = (r32((uint32_t)(0x11cff674)));
  /* 11cd772e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11cd7731:;
  /* 11cd7731 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd7733 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd7735 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd7738 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7739 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd773c push ecx */
  push32((uint32_t)(ECX));
  /* 11cd773d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11cd7740 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd7742 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd7744 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd7747 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd774a push edx */
  push32((uint32_t)(EDX));
  /* 11cd774b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd774e push eax */
  push32((uint32_t)(EAX));
  /* 11cd774f call dword ptr [0x11d01344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01344))), 0x11cd7755u);
  /* 11cd7755 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11cd7758 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd775c jne 0x11cd7765 */
  if (!C.zf) goto L_11cd7765;
  /* 11cd775e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7760 jmp 0x11cd7808 */
  goto L_11cd7808;
L_11cd7765:;
  /* 11cd7765 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd776c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd776f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cd7771 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7774 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11cd7776 call 0x11cd0df0 */
  push32(0x11cd777bu); f_11cd0df0();
  /* 11cd777b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11cd777e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cd7781 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd7784 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11cd7787 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd778a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11cd778c push edx */
  push32((uint32_t)(EDX));
  /* 11cd778d push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd778f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd7792 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7793 call 0x11cd2900 */
  push32(0x11cd7798u); f_11cd2900();
  /* 11cd7798 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd779b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11cd77a2 jmp 0x11cd77bb */
  goto L_11cd77bb;
  /* 11cd77a4 mov eax, 1 */
  EAX = (0x1u);
  /* 11cd77a9 ret  */
  ESPCHK(0x11cd7660u, _esp0);
  ESP += 4; return;
  /* 11cd77aa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd77ad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11cd77b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11cd77bb:;
  /* 11cd77bb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd77bf jne 0x11cd77c5 */
  if (!C.zf) goto L_11cd77c5;
  /* 11cd77c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd77c3 jmp 0x11cd7808 */
  goto L_11cd7808;
L_11cd77c5:;
  /* 11cd77c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd77c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd77c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd77cc push edx */
  push32((uint32_t)(EDX));
  /* 11cd77cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd77d0 push eax */
  push32((uint32_t)(EAX));
  /* 11cd77d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd77d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd77d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd77d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd77da push edx */
  push32((uint32_t)(EDX));
  /* 11cd77db call dword ptr [0x11d01344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01344))), 0x11cd77e1u);
  /* 11cd77e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11cd77e4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd77e8 jne 0x11cd77ee */
  if (!C.zf) goto L_11cd77ee;
  /* 11cd77ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd77ec jmp 0x11cd7808 */
  goto L_11cd7808;
L_11cd77ee:;
  /* 11cd77ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd77f1 push eax */
  push32((uint32_t)(EAX));
  /* 11cd77f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd77f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd77f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd77f9 push edx */
  push32((uint32_t)(EDX));
  /* 11cd77fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd77fd push eax */
  push32((uint32_t)(EAX));
  /* 11cd77fe call dword ptr [0x11d01348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01348))), 0x11cd7804u);
  /* 11cd7804 jmp 0x11cd7808 */
  goto L_11cd7808;
L_11cd7806:;
  /* 11cd7806 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cd7808:;
  /* 11cd7808 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11cd780b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd780e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11cd7815 pop edi */
  EDI = (pop32());
  /* 11cd7816 pop esi */
  ESI = (pop32());
  /* 11cd7817 pop ebx */
  EBX = (pop32());
  /* 11cd7818 mov esp, ebp */
  ESP = (EBP);
  /* 11cd781a pop ebp */
  EBP = (pop32());
  /* 11cd781b ret  */
  ESPCHK(0x11cd7660u, _esp0);
  ESP += 4; return;
}

/* FUN_10017820 @ 0x11cd7820 (1007 bytes, 269 insns) */
void f_11cd7820(void) {
  FTRACE(0x11cd7820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd7820 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd7821 mov ebp, esp */
  EBP = (ESP);
  /* 11cd7823 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd7829 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd782d jl 0x11cd7835 */
  if ((C.sf!=C.of)) goto L_11cd7835;
  /* 11cd782f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7833 jle 0x11cd783c */
  if ((C.zf||C.sf!=C.of)) goto L_11cd783c;
L_11cd7835:;
  /* 11cd7835 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7837 jmp 0x11cd7c0b */
  goto L_11cd7c0b;
L_11cd783c:;
  /* 11cd783c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11cd783e call 0x11ccb3c0 */
  push32(0x11cd7843u); f_11ccb3c0();
  /* 11cd7843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7846 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cd784d mov eax, dword ptr [0x11cff7d4] */
  EAX = (r32((uint32_t)(0x11cff7d4)));
  /* 11cd7852 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7855 mov dword ptr [0x11cff7d4], eax */
  w32((uint32_t)(0x11cff7d4), (EAX));
L_11cd785a:;
  /* 11cd785a cmp dword ptr [0x11cff7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7861 je 0x11cd786d */
  if (C.zf) goto L_11cd786d;
  /* 11cd7863 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd7865 call dword ptr [0x11d01338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01338))), 0x11cd786bu);
  /* 11cd786b jmp 0x11cd785a */
  goto L_11cd785a;
L_11cd786d:;
  /* 11cd786d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7871 je 0x11cd78b1 */
  if (C.zf) goto L_11cd78b1;
  /* 11cd7873 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7877 je 0x11cd7891 */
  if (C.zf) goto L_11cd7891;
  /* 11cd7879 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd787c push ecx */
  push32((uint32_t)(ECX));
  /* 11cd787d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7880 push edx */
  push32((uint32_t)(EDX));
  /* 11cd7881 call 0x11cd7c10 */
  push32(0x11cd7886u); f_11cd7c10();
  /* 11cd7886 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7889 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11cd788f jmp 0x11cd78a3 */
  goto L_11cd78a3;
L_11cd7891:;
  /* 11cd7891 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7894 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd7897 mov ecx, dword ptr [eax + 0x11cfd9dc] */
  ECX = (r32((uint32_t)(EAX + 0x11cfd9dc)));
  /* 11cd789d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11cd78a3:;
  /* 11cd78a3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11cd78a9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cd78ac jmp 0x11cd7beb */
  goto L_11cd7beb;
L_11cd78b1:;
  /* 11cd78b1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11cd78b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cd78bf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd78c3 je 0x11cd7be3 */
  if (C.zf) goto L_11cd7be3;
  /* 11cd78c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd78cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cd78cf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd78d2 jne 0x11cd7af4 */
  if (!C.zf) goto L_11cd7af4;
  /* 11cd78d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd78db movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11cd78df cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd78e2 jne 0x11cd7af4 */
  if (!C.zf) goto L_11cd7af4;
  /* 11cd78e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd78eb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11cd78ef cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd78f2 jne 0x11cd7af4 */
  if (!C.zf) goto L_11cd7af4;
  /* 11cd78f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd78fb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11cd7901:;
  /* 11cd7901 push 0x11cfa478 */
  push32((uint32_t)(0x11cfa478u));
  /* 11cd7906 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11cd790c push ecx */
  push32((uint32_t)(ECX));
  /* 11cd790d call 0x11cdbac0 */
  push32(0x11cd7912u); f_11cdbac0();
  /* 11cd7912 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7915 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11cd791b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7922 je 0x11cd794d */
  if (C.zf) goto L_11cd794d;
  /* 11cd7924 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11cd792a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd7930 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11cd7936 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd793d je 0x11cd794d */
  if (C.zf) goto L_11cd794d;
  /* 11cd793f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11cd7945 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cd7948 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd794b jne 0x11cd7973 */
  if (!C.zf) goto L_11cd7973;
L_11cd794d:;
  /* 11cd794d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7951 je 0x11cd796c */
  if (C.zf) goto L_11cd796c;
  /* 11cd7953 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11cd7955 call 0x11ccb460 */
  push32(0x11cd795au); f_11ccb460();
  /* 11cd795a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd795d mov edx, dword ptr [0x11cff7d4] */
  EDX = (r32((uint32_t)(0x11cff7d4)));
  /* 11cd7963 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd7966 mov dword ptr [0x11cff7d4], edx */
  w32((uint32_t)(0x11cff7d4), (EDX));
L_11cd796c:;
  /* 11cd796c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd796e jmp 0x11cd7c0b */
  goto L_11cd7c0b;
L_11cd7973:;
  /* 11cd7973 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11cd797a jmp 0x11cd7985 */
  goto L_11cd7985;
L_11cd797c:;
  /* 11cd797c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd797f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7982 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11cd7985:;
  /* 11cd7985 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7989 jg 0x11cd79d3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd79d3;
  /* 11cd798b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11cd7991 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7992 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11cd7998 push edx */
  push32((uint32_t)(EDX));
  /* 11cd7999 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd799c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd799f mov ecx, dword ptr [eax + 0x11cfd9d8] */
  ECX = (r32((uint32_t)(EAX + 0x11cfd9d8)));
  /* 11cd79a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd79a6 call 0x11cdba80 */
  push32(0x11cd79abu); f_11cdba80();
  /* 11cd79ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd79ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd79b0 jne 0x11cd79d1 */
  if (!C.zf) goto L_11cd79d1;
  /* 11cd79b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd79b5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd79b8 mov eax, dword ptr [edx + 0x11cfd9d8] */
  EAX = (r32((uint32_t)(EDX + 0x11cfd9d8)));
  /* 11cd79be push eax */
  push32((uint32_t)(EAX));
  /* 11cd79bf call 0x11cd0a80 */
  push32(0x11cd79c4u); f_11cd0a80();
  /* 11cd79c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd79c7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd79cd jne 0x11cd79d1 */
  if (!C.zf) goto L_11cd79d1;
  /* 11cd79cf jmp 0x11cd79d3 */
  goto L_11cd79d3;
L_11cd79d1:;
  /* 11cd79d1 jmp 0x11cd797c */
  goto L_11cd797c;
L_11cd79d3:;
  /* 11cd79d3 push 0x11cfa474 */
  push32((uint32_t)(0x11cfa474u));
  /* 11cd79d8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11cd79de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd79e1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11cd79e7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11cd79ed push edx */
  push32((uint32_t)(EDX));
  /* 11cd79ee call 0x11cdba40 */
  push32(0x11cd79f3u); f_11cdba40();
  /* 11cd79f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd79f6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11cd79fc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7a03 jne 0x11cd7a39 */
  if (!C.zf) goto L_11cd7a39;
  /* 11cd7a05 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11cd7a0b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cd7a0e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7a11 je 0x11cd7a39 */
  if (C.zf) goto L_11cd7a39;
  /* 11cd7a13 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7a17 je 0x11cd7a32 */
  if (C.zf) goto L_11cd7a32;
  /* 11cd7a19 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11cd7a1b call 0x11ccb460 */
  push32(0x11cd7a20u); f_11ccb460();
  /* 11cd7a20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7a23 mov edx, dword ptr [0x11cff7d4] */
  EDX = (r32((uint32_t)(0x11cff7d4)));
  /* 11cd7a29 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd7a2c mov dword ptr [0x11cff7d4], edx */
  w32((uint32_t)(0x11cff7d4), (EDX));
L_11cd7a32:;
  /* 11cd7a32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7a34 jmp 0x11cd7c0b */
  goto L_11cd7c0b;
L_11cd7a39:;
  /* 11cd7a39 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7a3d jg 0x11cd7a8a */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd7a8a;
  /* 11cd7a3f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11cd7a45 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7a46 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11cd7a4c push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7a4d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11cd7a53 push edx */
  push32((uint32_t)(EDX));
  /* 11cd7a54 call 0x11cd1470 */
  push32(0x11cd7a59u); f_11cd1470();
  /* 11cd7a59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7a5c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11cd7a62 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11cd7a6a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11cd7a70 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7a71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd7a74 push edx */
  push32((uint32_t)(EDX));
  /* 11cd7a75 call 0x11cd7c10 */
  push32(0x11cd7a7au); f_11cd7c10();
  /* 11cd7a7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7a7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7a7f je 0x11cd7a8a */
  if (C.zf) goto L_11cd7a8a;
  /* 11cd7a81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd7a84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7a87 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11cd7a8a:;
  /* 11cd7a8a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11cd7a90 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7a96 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11cd7a9c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11cd7aa2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cd7aa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7aa7 je 0x11cd7ab8 */
  if (C.zf) goto L_11cd7ab8;
  /* 11cd7aa9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11cd7aaf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7ab2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11cd7ab8:;
  /* 11cd7ab8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11cd7abe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cd7ac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7ac3 jne 0x11cd7901 */
  if (!C.zf) goto L_11cd7901;
  /* 11cd7ac9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7acd je 0x11cd7adc */
  if (C.zf) goto L_11cd7adc;
  /* 11cd7acf call 0x11cd7db0 */
  push32(0x11cd7ad4u); f_11cd7db0();
  /* 11cd7ad4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11cd7ada jmp 0x11cd7ae6 */
  goto L_11cd7ae6;
L_11cd7adc:;
  /* 11cd7adc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11cd7ae6:;
  /* 11cd7ae6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11cd7aec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd7aef jmp 0x11cd7be1 */
  goto L_11cd7be1;
L_11cd7af4:;
  /* 11cd7af4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7af7 push edx */
  push32((uint32_t)(EDX));
  /* 11cd7af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd7afa push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd7afc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11cd7b02 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7b03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd7b06 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7b07 call 0x11cd7eb0 */
  push32(0x11cd7b0cu); f_11cd7eb0();
  /* 11cd7b0c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7b0f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd7b12 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7b16 je 0x11cd7be1 */
  if (C.zf) goto L_11cd7be1;
  /* 11cd7b1c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11cd7b23 jmp 0x11cd7b2e */
  goto L_11cd7b2e;
L_11cd7b25:;
  /* 11cd7b25 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd7b28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7b2b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11cd7b2e:;
  /* 11cd7b2e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7b32 jg 0x11cd7b90 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd7b90;
  /* 11cd7b34 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7b38 je 0x11cd7b8e */
  if (C.zf) goto L_11cd7b8e;
  /* 11cd7b3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd7b3d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd7b40 mov ecx, dword ptr [eax + 0x11cfd9dc] */
  ECX = (r32((uint32_t)(EAX + 0x11cfd9dc)));
  /* 11cd7b46 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7b47 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11cd7b4d push edx */
  push32((uint32_t)(EDX));
  /* 11cd7b4e call 0x11cd4f90 */
  push32(0x11cd7b53u); f_11cd4f90();
  /* 11cd7b53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7b56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7b58 je 0x11cd7b85 */
  if (C.zf) goto L_11cd7b85;
  /* 11cd7b5a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11cd7b60 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7b61 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd7b64 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7b65 call 0x11cd7c10 */
  push32(0x11cd7b6au); f_11cd7c10();
  /* 11cd7b6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7b6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7b6f je 0x11cd7b7c */
  if (C.zf) goto L_11cd7b7c;
  /* 11cd7b71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd7b74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7b77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cd7b7a jmp 0x11cd7b83 */
  goto L_11cd7b83;
L_11cd7b7c:;
  /* 11cd7b7c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11cd7b83:;
  /* 11cd7b83 jmp 0x11cd7b8e */
  goto L_11cd7b8e;
L_11cd7b85:;
  /* 11cd7b85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd7b88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7b8b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11cd7b8e:;
  /* 11cd7b8e jmp 0x11cd7b25 */
  goto L_11cd7b25;
L_11cd7b90:;
  /* 11cd7b90 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7b94 je 0x11cd7bbb */
  if (C.zf) goto L_11cd7bbb;
  /* 11cd7b96 call 0x11cd7db0 */
  push32(0x11cd7b9bu); f_11cd7db0();
  /* 11cd7b9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd7b9e push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd7ba0 mov ecx, dword ptr [0x11cfd9dc] */
  ECX = (r32((uint32_t)(0x11cfd9dc)));
  /* 11cd7ba6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7ba7 call 0x11ccbf50 */
  push32(0x11cd7bacu); f_11ccbf50();
  /* 11cd7bac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7baf mov dword ptr [0x11cfd9dc], 0 */
  w32((uint32_t)(0x11cfd9dc), (0x0u));
  /* 11cd7bb9 jmp 0x11cd7be1 */
  goto L_11cd7be1;
L_11cd7bbb:;
  /* 11cd7bbb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7bbf je 0x11cd7bce */
  if (C.zf) goto L_11cd7bce;
  /* 11cd7bc1 call 0x11cd7db0 */
  push32(0x11cd7bc6u); f_11cd7db0();
  /* 11cd7bc6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11cd7bcc jmp 0x11cd7bd8 */
  goto L_11cd7bd8;
L_11cd7bce:;
  /* 11cd7bce mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11cd7bd8:;
  /* 11cd7bd8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11cd7bde mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11cd7be1:;
  /* 11cd7be1 jmp 0x11cd7beb */
  goto L_11cd7beb;
L_11cd7be3:;
  /* 11cd7be3 call 0x11cd7db0 */
  push32(0x11cd7be8u); f_11cd7db0();
  /* 11cd7be8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11cd7beb:;
  /* 11cd7beb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7bef je 0x11cd7c08 */
  if (C.zf) goto L_11cd7c08;
  /* 11cd7bf1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11cd7bf3 call 0x11ccb460 */
  push32(0x11cd7bf8u); f_11ccb460();
  /* 11cd7bf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7bfb mov eax, dword ptr [0x11cff7d4] */
  EAX = (r32((uint32_t)(0x11cff7d4)));
  /* 11cd7c00 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd7c03 mov dword ptr [0x11cff7d4], eax */
  w32((uint32_t)(0x11cff7d4), (EAX));
L_11cd7c08:;
  /* 11cd7c08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11cd7c0b:;
  /* 11cd7c0b mov esp, ebp */
  ESP = (EBP);
  /* 11cd7c0d pop ebp */
  EBP = (pop32());
  /* 11cd7c0e ret  */
  ESPCHK(0x11cd7820u, _esp0);
  ESP += 4; return;
}

/* FUN_10017c10 @ 0x11cd7c10 (403 bytes, 117 insns) */
void f_11cd7c10(void) {
  FTRACE(0x11cd7c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd7c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd7c11 mov ebp, esp */
  EBP = (ESP);
  /* 11cd7c13 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd7c19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7c1c push eax */
  push32((uint32_t)(EAX));
  /* 11cd7c1d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11cd7c23 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7c24 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11cd7c2a push edx */
  push32((uint32_t)(EDX));
  /* 11cd7c2b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11cd7c31 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7c32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd7c35 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7c36 call 0x11cd7eb0 */
  push32(0x11cd7c3bu); f_11cd7eb0();
  /* 11cd7c3b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7c3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7c40 jne 0x11cd7c49 */
  if (!C.zf) goto L_11cd7c49;
  /* 11cd7c42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7c44 jmp 0x11cd7d9f */
  goto L_11cd7d9f;
L_11cd7c49:;
  /* 11cd7c49 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11cd7c4e push 0x11cfa47c */
  push32((uint32_t)(0x11cfa47cu));
  /* 11cd7c53 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd7c55 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11cd7c5b push edx */
  push32((uint32_t)(EDX));
  /* 11cd7c5c call 0x11cd0a80 */
  push32(0x11cd7c61u); f_11cd0a80();
  /* 11cd7c61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7c64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7c67 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7c68 call 0x11ccb4c0 */
  push32(0x11cd7c6du); f_11ccb4c0();
  /* 11cd7c6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7c70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd7c73 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7c77 jne 0x11cd7c80 */
  if (!C.zf) goto L_11cd7c80;
  /* 11cd7c79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7c7b jmp 0x11cd7d9f */
  goto L_11cd7d9f;
L_11cd7c80:;
  /* 11cd7c80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7c83 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd7c86 mov ecx, dword ptr [eax + 0x11cfd9dc] */
  ECX = (r32((uint32_t)(EAX + 0x11cfd9dc)));
  /* 11cd7c8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cd7c8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7c92 mov eax, dword ptr [edx*4 + 0x11cff65c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11cff65c)));
  /* 11cd7c99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd7c9c push 6 */
  push32((uint32_t)(0x6u));
  /* 11cd7c9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7ca1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd7ca4 add ecx, 0x11cff69c */
  { uint32_t _a=(ECX),_b=(0x11cff69cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7caa push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7cab lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11cd7cae push edx */
  push32((uint32_t)(EDX));
  /* 11cd7caf call 0x11cd6500 */
  push32(0x11cd7cb4u); f_11cd6500();
  /* 11cd7cb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7cb7 mov eax, dword ptr [0x11cff674] */
  EAX = (r32((uint32_t)(0x11cff674)));
  /* 11cd7cbc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd7cbf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11cd7cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7cc6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd7cc9 push edx */
  push32((uint32_t)(EDX));
  /* 11cd7cca call 0x11cd0c00 */
  push32(0x11cd7ccfu); f_11cd0c00();
  /* 11cd7ccf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7cd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7cd5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd7cd8 mov dword ptr [ecx + 0x11cfd9dc], eax */
  w32((uint32_t)(ECX + 0x11cfd9dc), (EAX));
  /* 11cd7cde mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11cd7ce4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd7cea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7ced mov dword ptr [eax*4 + 0x11cff65c], edx */
  w32((uint32_t)(EAX*4 + 0x11cff65c), (EDX));
  /* 11cd7cf4 push 6 */
  push32((uint32_t)(0x6u));
  /* 11cd7cf6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11cd7cfc push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7cfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7d00 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd7d03 add edx, 0x11cff69c */
  { uint32_t _a=(EDX),_b=(0x11cff69cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7d09 push edx */
  push32((uint32_t)(EDX));
  /* 11cd7d0a call 0x11cd6500 */
  push32(0x11cd7d0fu); f_11cd6500();
  /* 11cd7d0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7d12 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7d16 jne 0x11cd7d23 */
  if (!C.zf) goto L_11cd7d23;
  /* 11cd7d18 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11cd7d1e mov dword ptr [0x11cff674], eax */
  w32((uint32_t)(0x11cff674), (EAX));
L_11cd7d23:;
  /* 11cd7d23 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7d27 jne 0x11cd7d35 */
  if (!C.zf) goto L_11cd7d35;
  /* 11cd7d29 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11cd7d2f mov dword ptr [0x11cff678], ecx */
  w32((uint32_t)(0x11cff678), (ECX));
L_11cd7d35:;
  /* 11cd7d35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7d38 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd7d3b call dword ptr [edx + 0x11cfd9e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x11cfd9e0))), 0x11cd7d41u);
  /* 11cd7d41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7d43 je 0x11cd7d7c */
  if (C.zf) goto L_11cd7d7c;
  /* 11cd7d45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7d48 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd7d4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd7d4e mov dword ptr [eax + 0x11cfd9dc], ecx */
  w32((uint32_t)(EAX + 0x11cfd9dc), (ECX));
  /* 11cd7d54 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd7d56 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd7d59 push edx */
  push32((uint32_t)(EDX));
  /* 11cd7d5a call 0x11ccbf50 */
  push32(0x11cd7d5fu); f_11ccbf50();
  /* 11cd7d5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7d62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7d65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd7d68 mov dword ptr [eax*4 + 0x11cff65c], ecx */
  w32((uint32_t)(EAX*4 + 0x11cff65c), (ECX));
  /* 11cd7d6f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd7d72 mov dword ptr [0x11cff674], edx */
  w32((uint32_t)(0x11cff674), (EDX));
  /* 11cd7d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7d7a jmp 0x11cd7d9f */
  goto L_11cd7d9f;
L_11cd7d7c:;
  /* 11cd7d7c cmp dword ptr [ebp - 0xc], 0x11cfd8cc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x11cfd8ccu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7d83 je 0x11cd7d93 */
  if (C.zf) goto L_11cd7d93;
  /* 11cd7d85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd7d87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd7d8a push eax */
  push32((uint32_t)(EAX));
  /* 11cd7d8b call 0x11ccbf50 */
  push32(0x11cd7d90u); f_11ccbf50();
  /* 11cd7d90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd7d93:;
  /* 11cd7d93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7d96 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd7d99 mov eax, dword ptr [ecx + 0x11cfd9dc] */
  EAX = (r32((uint32_t)(ECX + 0x11cfd9dc)));
L_11cd7d9f:;
  /* 11cd7d9f mov esp, ebp */
  ESP = (EBP);
  /* 11cd7da1 pop ebp */
  EBP = (pop32());
  /* 11cd7da2 ret  */
  ESPCHK(0x11cd7c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10017db0 @ 0x11cd7db0 (256 bytes, 72 insns) */
void f_11cd7db0(void) {
  FTRACE(0x11cd7db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd7db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd7db1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd7db3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd7db6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11cd7dbd cmp dword ptr [0x11cfd9dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd9dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7dc4 jne 0x11cd7de4 */
  if (!C.zf) goto L_11cd7de4;
  /* 11cd7dc6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11cd7dcb push 0x11cfa47c */
  push32((uint32_t)(0x11cfa47cu));
  /* 11cd7dd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd7dd2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11cd7dd7 call 0x11ccb4c0 */
  push32(0x11cd7ddcu); f_11ccb4c0();
  /* 11cd7ddc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7ddf mov dword ptr [0x11cfd9dc], eax */
  w32((uint32_t)(0x11cfd9dc), (EAX));
L_11cd7de4:;
  /* 11cd7de4 mov eax, dword ptr [0x11cfd9dc] */
  EAX = (r32((uint32_t)(0x11cfd9dc)));
  /* 11cd7de9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11cd7dec mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cd7df3 jmp 0x11cd7dfe */
  goto L_11cd7dfe;
L_11cd7df5:;
  /* 11cd7df5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd7df8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7dfb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd7dfe:;
  /* 11cd7dfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd7e01 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd7e04 mov eax, dword ptr [edx + 0x11cfd9dc] */
  EAX = (r32((uint32_t)(EDX + 0x11cfd9dc)));
  /* 11cd7e0a push eax */
  push32((uint32_t)(EAX));
  /* 11cd7e0b push 0x11cfa488 */
  push32((uint32_t)(0x11cfa488u));
  /* 11cd7e10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd7e13 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd7e16 mov edx, dword ptr [ecx + 0x11cfd9d8] */
  EDX = (r32((uint32_t)(ECX + 0x11cfd9d8)));
  /* 11cd7e1c push edx */
  push32((uint32_t)(EDX));
  /* 11cd7e1d push 3 */
  push32((uint32_t)(0x3u));
  /* 11cd7e1f mov eax, dword ptr [0x11cfd9dc] */
  EAX = (r32((uint32_t)(0x11cfd9dc)));
  /* 11cd7e24 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7e25 call 0x11cd8050 */
  push32(0x11cd7e2au); f_11cd8050();
  /* 11cd7e2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7e2d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7e31 jge 0x11cd7e79 */
  if ((C.sf==C.of)) goto L_11cd7e79;
  /* 11cd7e33 push 0x11cfa474 */
  push32((uint32_t)(0x11cfa474u));
  /* 11cd7e38 mov ecx, dword ptr [0x11cfd9dc] */
  ECX = (r32((uint32_t)(0x11cfd9dc)));
  /* 11cd7e3e push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7e3f call 0x11cd0c10 */
  push32(0x11cd7e44u); f_11cd0c10();
  /* 11cd7e44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7e47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd7e4a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7e4d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd7e50 mov eax, dword ptr [edx + 0x11cfd9dc] */
  EAX = (r32((uint32_t)(EDX + 0x11cfd9dc)));
  /* 11cd7e56 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7e57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd7e5a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd7e5d mov edx, dword ptr [ecx + 0x11cfd9dc] */
  EDX = (r32((uint32_t)(ECX + 0x11cfd9dc)));
  /* 11cd7e63 push edx */
  push32((uint32_t)(EDX));
  /* 11cd7e64 call 0x11cd4f90 */
  push32(0x11cd7e69u); f_11cd4f90();
  /* 11cd7e69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7e6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7e6e je 0x11cd7e77 */
  if (C.zf) goto L_11cd7e77;
  /* 11cd7e70 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11cd7e77:;
  /* 11cd7e77 jmp 0x11cd7ea7 */
  goto L_11cd7ea7;
L_11cd7e79:;
  /* 11cd7e79 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7e7d jne 0x11cd7e86 */
  if (!C.zf) goto L_11cd7e86;
  /* 11cd7e7f mov eax, dword ptr [0x11cfd9dc] */
  EAX = (r32((uint32_t)(0x11cfd9dc)));
  /* 11cd7e84 jmp 0x11cd7eac */
  goto L_11cd7eac;
L_11cd7e86:;
  /* 11cd7e86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd7e88 mov eax, dword ptr [0x11cfd9dc] */
  EAX = (r32((uint32_t)(0x11cfd9dc)));
  /* 11cd7e8d push eax */
  push32((uint32_t)(EAX));
  /* 11cd7e8e call 0x11ccbf50 */
  push32(0x11cd7e93u); f_11ccbf50();
  /* 11cd7e93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7e96 mov dword ptr [0x11cfd9dc], 0 */
  w32((uint32_t)(0x11cfd9dc), (0x0u));
  /* 11cd7ea0 mov eax, dword ptr [0x11cfd9f4] */
  EAX = (r32((uint32_t)(0x11cfd9f4)));
  /* 11cd7ea5 jmp 0x11cd7eac */
  goto L_11cd7eac;
L_11cd7ea7:;
  /* 11cd7ea7 jmp 0x11cd7df5 */
  goto L_11cd7df5;
L_11cd7eac:;
  /* 11cd7eac mov esp, ebp */
  ESP = (EBP);
  /* 11cd7eae pop ebp */
  EBP = (pop32());
  /* 11cd7eaf ret  */
  ESPCHK(0x11cd7db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017eb0 @ 0x11cd7eb0 (388 bytes, 115 insns) */
void f_11cd7eb0(void) {
  FTRACE(0x11cd7eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd7eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd7eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd7eb3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd7eb9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7ebd jne 0x11cd7ec6 */
  if (!C.zf) goto L_11cd7ec6;
  /* 11cd7ebf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7ec1 jmp 0x11cd8030 */
  goto L_11cd8030;
L_11cd7ec6:;
  /* 11cd7ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7ec9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cd7ecc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7ecf jne 0x11cd7f20 */
  if (!C.zf) goto L_11cd7f20;
  /* 11cd7ed1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7ed4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11cd7ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7eda jne 0x11cd7f20 */
  if (!C.zf) goto L_11cd7f20;
  /* 11cd7edc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd7edf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11cd7ee2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd7ee5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11cd7ee9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7eed je 0x11cd7f09 */
  if (C.zf) goto L_11cd7f09;
  /* 11cd7eef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd7ef2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11cd7ef7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd7efa mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11cd7f00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd7f03 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11cd7f09:;
  /* 11cd7f09 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7f0d je 0x11cd7f18 */
  if (C.zf) goto L_11cd7f18;
  /* 11cd7f0f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd7f12 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11cd7f18:;
  /* 11cd7f18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd7f1b jmp 0x11cd8030 */
  goto L_11cd8030;
L_11cd7f20:;
  /* 11cd7f20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7f23 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7f24 push 0x11cfd954 */
  push32((uint32_t)(0x11cfd954u));
  /* 11cd7f29 call 0x11cd4f90 */
  push32(0x11cd7f2eu); f_11cd4f90();
  /* 11cd7f2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7f33 je 0x11cd7fe8 */
  if (C.zf) goto L_11cd7fe8;
  /* 11cd7f39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7f3c push edx */
  push32((uint32_t)(EDX));
  /* 11cd7f3d push 0x11cfd8d0 */
  push32((uint32_t)(0x11cfd8d0u));
  /* 11cd7f42 call 0x11cd4f90 */
  push32(0x11cd7f47u); f_11cd4f90();
  /* 11cd7f47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7f4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7f4c je 0x11cd7fe8 */
  if (C.zf) goto L_11cd7fe8;
  /* 11cd7f52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7f55 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7f56 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11cd7f5c push ecx */
  push32((uint32_t)(ECX));
  /* 11cd7f5d call 0x11cd80a0 */
  push32(0x11cd7f62u); f_11cd80a0();
  /* 11cd7f62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7f65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7f67 je 0x11cd7f70 */
  if (C.zf) goto L_11cd7f70;
  /* 11cd7f69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7f6b jmp 0x11cd8030 */
  goto L_11cd8030;
L_11cd7f70:;
  /* 11cd7f70 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11cd7f76 push edx */
  push32((uint32_t)(EDX));
  /* 11cd7f77 push 0x11cff650 */
  push32((uint32_t)(0x11cff650u));
  /* 11cd7f7c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11cd7f82 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7f83 call 0x11cdbb00 */
  push32(0x11cd7f88u); f_11cdbb00();
  /* 11cd7f88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7f8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd7f8d jne 0x11cd7f96 */
  if (!C.zf) goto L_11cd7f96;
  /* 11cd7f8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd7f91 jmp 0x11cd8030 */
  goto L_11cd8030;
L_11cd7f96:;
  /* 11cd7f96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd7f98 mov cx, word ptr [0x11cff654] */
  CX = (r16((uint32_t)(0x11cff654)));
  /* 11cd7f9f mov dword ptr [0x11cff658], ecx */
  w32((uint32_t)(0x11cff658), (ECX));
  /* 11cd7fa5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11cd7fab push edx */
  push32((uint32_t)(EDX));
  /* 11cd7fac push 0x11cfd954 */
  push32((uint32_t)(0x11cfd954u));
  /* 11cd7fb1 call 0x11cd8200 */
  push32(0x11cd7fb6u); f_11cd8200();
  /* 11cd7fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7fb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7fbc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cd7fbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd7fc1 je 0x11cd7fd6 */
  if (C.zf) goto L_11cd7fd6;
  /* 11cd7fc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd7fc6 push edx */
  push32((uint32_t)(EDX));
  /* 11cd7fc7 push 0x11cfd8d0 */
  push32((uint32_t)(0x11cfd8d0u));
  /* 11cd7fcc call 0x11cd0c00 */
  push32(0x11cd7fd1u); f_11cd0c00();
  /* 11cd7fd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd7fd4 jmp 0x11cd7fe8 */
  goto L_11cd7fe8;
L_11cd7fd6:;
  /* 11cd7fd6 push 0x11cfd954 */
  push32((uint32_t)(0x11cfd954u));
  /* 11cd7fdb push 0x11cfd8d0 */
  push32((uint32_t)(0x11cfd8d0u));
  /* 11cd7fe0 call 0x11cd0c00 */
  push32(0x11cd7fe5u); f_11cd0c00();
  /* 11cd7fe5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd7fe8:;
  /* 11cd7fe8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd7fec je 0x11cd8001 */
  if (C.zf) goto L_11cd8001;
  /* 11cd7fee push 6 */
  push32((uint32_t)(0x6u));
  /* 11cd7ff0 push 0x11cff650 */
  push32((uint32_t)(0x11cff650u));
  /* 11cd7ff5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd7ff8 push eax */
  push32((uint32_t)(EAX));
  /* 11cd7ff9 call 0x11cd6500 */
  push32(0x11cd7ffeu); f_11cd6500();
  /* 11cd7ffe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd8001:;
  /* 11cd8001 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8005 je 0x11cd801a */
  if (C.zf) goto L_11cd801a;
  /* 11cd8007 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cd8009 push 0x11cff658 */
  push32((uint32_t)(0x11cff658u));
  /* 11cd800e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd8011 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8012 call 0x11cd6500 */
  push32(0x11cd8017u); f_11cd6500();
  /* 11cd8017 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd801a:;
  /* 11cd801a push 0x11cfd954 */
  push32((uint32_t)(0x11cfd954u));
  /* 11cd801f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd8022 push edx */
  push32((uint32_t)(EDX));
  /* 11cd8023 call 0x11cd0c00 */
  push32(0x11cd8028u); f_11cd0c00();
  /* 11cd8028 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd802b mov eax, 0x11cfd954 */
  EAX = (0x11cfd954u);
L_11cd8030:;
  /* 11cd8030 mov esp, ebp */
  ESP = (EBP);
  /* 11cd8032 pop ebp */
  EBP = (pop32());
  /* 11cd8033 ret  */
  ESPCHK(0x11cd7eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018040 @ 0x11cd8040 (7 bytes, 5 insns) */
void f_11cd8040(void) {
  FTRACE(0x11cd8040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd8040 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd8041 mov ebp, esp */
  EBP = (ESP);
  /* 11cd8043 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd8045 pop ebp */
  EBP = (pop32());
  /* 11cd8046 ret  */
  ESPCHK(0x11cd8040u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11cd8050 (79 bytes, 28 insns) */
void f_11cd8050(void) {
  FTRACE(0x11cd8050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd8050 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd8051 mov ebp, esp */
  EBP = (ESP);
  /* 11cd8053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8056 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11cd8059 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd805c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cd8063 jmp 0x11cd806e */
  goto L_11cd806e;
L_11cd8065:;
  /* 11cd8065 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd8068 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd806b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11cd806e:;
  /* 11cd806e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd8071 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8074 jge 0x11cd8094 */
  if ((C.sf==C.of)) goto L_11cd8094;
  /* 11cd8076 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8079 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd807c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd807f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8082 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11cd8085 push edx */
  push32((uint32_t)(EDX));
  /* 11cd8086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8089 push eax */
  push32((uint32_t)(EAX));
  /* 11cd808a call 0x11cd0c10 */
  push32(0x11cd808fu); f_11cd0c10();
  /* 11cd808f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8092 jmp 0x11cd8065 */
  goto L_11cd8065;
L_11cd8094:;
  /* 11cd8094 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd809b mov esp, ebp */
  ESP = (EBP);
  /* 11cd809d pop ebp */
  EBP = (pop32());
  /* 11cd809e ret  */
  ESPCHK(0x11cd8050u, _esp0);
  ESP += 4; return;
}

/* FUN_100180a0 @ 0x11cd80a0 (349 bytes, 122 insns) */
void f_11cd80a0(void) {
  FTRACE(0x11cd80a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd80a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd80a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd80a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd80a6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11cd80ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd80ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd80b0 push eax */
  push32((uint32_t)(EAX));
  /* 11cd80b1 call 0x11cd2900 */
  push32(0x11cd80b6u); f_11cd2900();
  /* 11cd80b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd80b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd80bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cd80bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd80c1 jne 0x11cd80ca */
  if (!C.zf) goto L_11cd80ca;
  /* 11cd80c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd80c5 jmp 0x11cd81f9 */
  goto L_11cd81f9;
L_11cd80ca:;
  /* 11cd80ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd80cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cd80d0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd80d3 jne 0x11cd8100 */
  if (!C.zf) goto L_11cd8100;
  /* 11cd80d5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd80d8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11cd80dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd80de je 0x11cd8100 */
  if (C.zf) goto L_11cd8100;
  /* 11cd80e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd80e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd80e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd80e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd80ea add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd80f0 push edx */
  push32((uint32_t)(EDX));
  /* 11cd80f1 call 0x11cd0c00 */
  push32(0x11cd80f6u); f_11cd0c00();
  /* 11cd80f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd80f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd80fb jmp 0x11cd81f9 */
  goto L_11cd81f9;
L_11cd8100:;
  /* 11cd8100 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd8107 jmp 0x11cd8112 */
  goto L_11cd8112;
L_11cd8109:;
  /* 11cd8109 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd810c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd810f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd8112:;
  /* 11cd8112 push 0x11cfa48c */
  push32((uint32_t)(0x11cfa48cu));
  /* 11cd8117 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd811a push ecx */
  push32((uint32_t)(ECX));
  /* 11cd811b call 0x11cdba40 */
  push32(0x11cd8120u); f_11cdba40();
  /* 11cd8120 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8123 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd8126 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd812a jne 0x11cd8134 */
  if (!C.zf) goto L_11cd8134;
  /* 11cd812c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd812f jmp 0x11cd81f9 */
  goto L_11cd81f9;
L_11cd8134:;
  /* 11cd8134 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd8137 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd813a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cd813c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11cd813f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8143 jne 0x11cd816a */
  if (!C.zf) goto L_11cd816a;
  /* 11cd8145 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8149 jge 0x11cd816a */
  if ((C.sf==C.of)) goto L_11cd816a;
  /* 11cd814b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11cd814f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8152 je 0x11cd816a */
  if (C.zf) goto L_11cd816a;
  /* 11cd8154 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd8157 push edx */
  push32((uint32_t)(EDX));
  /* 11cd8158 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd815b push eax */
  push32((uint32_t)(EAX));
  /* 11cd815c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd815f push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8160 call 0x11cd1470 */
  push32(0x11cd8165u); f_11cd1470();
  /* 11cd8165 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8168 jmp 0x11cd81d0 */
  goto L_11cd81d0;
L_11cd816a:;
  /* 11cd816a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd816e jne 0x11cd8198 */
  if (!C.zf) goto L_11cd8198;
  /* 11cd8170 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8174 jge 0x11cd8198 */
  if ((C.sf==C.of)) goto L_11cd8198;
  /* 11cd8176 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11cd817a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd817d je 0x11cd8198 */
  if (C.zf) goto L_11cd8198;
  /* 11cd817f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd8182 push eax */
  push32((uint32_t)(EAX));
  /* 11cd8183 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd8186 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8187 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd818a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd818d push edx */
  push32((uint32_t)(EDX));
  /* 11cd818e call 0x11cd1470 */
  push32(0x11cd8193u); f_11cd1470();
  /* 11cd8193 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8196 jmp 0x11cd81d0 */
  goto L_11cd81d0;
L_11cd8198:;
  /* 11cd8198 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd819c jne 0x11cd81cb */
  if (!C.zf) goto L_11cd81cb;
  /* 11cd819e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11cd81a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd81a4 je 0x11cd81af */
  if (C.zf) goto L_11cd81af;
  /* 11cd81a6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11cd81aa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd81ad jne 0x11cd81cb */
  if (!C.zf) goto L_11cd81cb;
L_11cd81af:;
  /* 11cd81af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd81b2 push edx */
  push32((uint32_t)(EDX));
  /* 11cd81b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd81b6 push eax */
  push32((uint32_t)(EAX));
  /* 11cd81b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd81ba add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd81c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd81c1 call 0x11cd1470 */
  push32(0x11cd81c6u); f_11cd1470();
  /* 11cd81c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd81c9 jmp 0x11cd81d0 */
  goto L_11cd81d0;
L_11cd81cb:;
  /* 11cd81cb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd81ce jmp 0x11cd81f9 */
  goto L_11cd81f9;
L_11cd81d0:;
  /* 11cd81d0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11cd81d4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd81d7 jne 0x11cd81db */
  if (!C.zf) goto L_11cd81db;
  /* 11cd81d9 jmp 0x11cd81f7 */
  goto L_11cd81f7;
L_11cd81db:;
  /* 11cd81db movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11cd81df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd81e1 jne 0x11cd81e5 */
  if (!C.zf) goto L_11cd81e5;
  /* 11cd81e3 jmp 0x11cd81f7 */
  goto L_11cd81f7;
L_11cd81e5:;
  /* 11cd81e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd81e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd81eb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11cd81ef mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11cd81f2 jmp 0x11cd8109 */
  goto L_11cd8109;
L_11cd81f7:;
  /* 11cd81f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cd81f9:;
  /* 11cd81f9 mov esp, ebp */
  ESP = (EBP);
  /* 11cd81fb pop ebp */
  EBP = (pop32());
  /* 11cd81fc ret  */
  ESPCHK(0x11cd80a0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11cd8200 (101 bytes, 36 insns) */
void f_11cd8200(void) {
  FTRACE(0x11cd8200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd8200 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd8201 mov ebp, esp */
  EBP = (ESP);
  /* 11cd8203 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd8206 push eax */
  push32((uint32_t)(EAX));
  /* 11cd8207 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd820a push ecx */
  push32((uint32_t)(ECX));
  /* 11cd820b call 0x11cd0c00 */
  push32(0x11cd8210u); f_11cd0c00();
  /* 11cd8210 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8213 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd8216 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11cd821a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd821c je 0x11cd8238 */
  if (C.zf) goto L_11cd8238;
  /* 11cd821e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd8221 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8224 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8225 push 0x11cfa494 */
  push32((uint32_t)(0x11cfa494u));
  /* 11cd822a push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd822c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd822f push edx */
  push32((uint32_t)(EDX));
  /* 11cd8230 call 0x11cd8050 */
  push32(0x11cd8235u); f_11cd8050();
  /* 11cd8235 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd8238:;
  /* 11cd8238 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd823b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11cd8242 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd8244 je 0x11cd8263 */
  if (C.zf) goto L_11cd8263;
  /* 11cd8246 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd8249 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd824f push edx */
  push32((uint32_t)(EDX));
  /* 11cd8250 push 0x11cfa490 */
  push32((uint32_t)(0x11cfa490u));
  /* 11cd8255 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd8257 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd825a push eax */
  push32((uint32_t)(EAX));
  /* 11cd825b call 0x11cd8050 */
  push32(0x11cd8260u); f_11cd8050();
  /* 11cd8260 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd8263:;
  /* 11cd8263 pop ebp */
  EBP = (pop32());
  /* 11cd8264 ret  */
  ESPCHK(0x11cd8200u, _esp0);
  ESP += 4; return;
}

/* FUN_10018270 @ 0x11cd8270 (727 bytes, 263 insns) */
void f_11cd8270(void) {
  FTRACE(0x11cd8270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd8270 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd8271 mov ebp, esp */
  EBP = (ESP);
  /* 11cd8273 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cd8275 push 0x11cfa498 */
  push32((uint32_t)(0x11cfa498u));
  /* 11cd827a push 0x11cd501c */
  push32((uint32_t)(0x11cd501cu));
  /* 11cd827f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11cd8285 push eax */
  push32((uint32_t)(EAX));
  /* 11cd8286 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11cd828d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8290 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd8291 push esi */
  push32((uint32_t)(ESI));
  /* 11cd8292 push edi */
  push32((uint32_t)(EDI));
  /* 11cd8293 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cd8296 cmp dword ptr [0x11cff67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd829d jne 0x11cd82f6 */
  if (!C.zf) goto L_11cd82f6;
  /* 11cd829f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd82a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd82a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd82a5 push 0x11cfa420 */
  push32((uint32_t)(0x11cfa420u));
  /* 11cd82aa push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11cd82af push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd82b1 call dword ptr [0x11d0133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0133c))), 0x11cd82b7u);
  /* 11cd82b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd82b9 je 0x11cd82c7 */
  if (C.zf) goto L_11cd82c7;
  /* 11cd82bb mov dword ptr [0x11cff67c], 1 */
  w32((uint32_t)(0x11cff67c), (0x1u));
  /* 11cd82c5 jmp 0x11cd82f6 */
  goto L_11cd82f6;
L_11cd82c7:;
  /* 11cd82c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd82c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd82cb push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd82cd push 0x11cfa41c */
  push32((uint32_t)(0x11cfa41cu));
  /* 11cd82d2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11cd82d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd82d9 call dword ptr [0x11d01334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01334))), 0x11cd82dfu);
  /* 11cd82df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd82e1 je 0x11cd82ef */
  if (C.zf) goto L_11cd82ef;
  /* 11cd82e3 mov dword ptr [0x11cff67c], 2 */
  w32((uint32_t)(0x11cff67c), (0x2u));
  /* 11cd82ed jmp 0x11cd82f6 */
  goto L_11cd82f6;
L_11cd82ef:;
  /* 11cd82ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd82f1 jmp 0x11cd8561 */
  goto L_11cd8561;
L_11cd82f6:;
  /* 11cd82f6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd82fa jle 0x11cd830f */
  if ((C.zf||C.sf!=C.of)) goto L_11cd830f;
  /* 11cd82fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd82ff push eax */
  push32((uint32_t)(EAX));
  /* 11cd8300 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd8303 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8304 call 0x11cd8580 */
  push32(0x11cd8309u); f_11cd8580();
  /* 11cd8309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd830c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11cd830f:;
  /* 11cd830f cmp dword ptr [0x11cff67c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11cff67c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8316 jne 0x11cd833b */
  if (!C.zf) goto L_11cd833b;
  /* 11cd8318 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd831b push edx */
  push32((uint32_t)(EDX));
  /* 11cd831c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd831f push eax */
  push32((uint32_t)(EAX));
  /* 11cd8320 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd8323 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8324 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd8327 push edx */
  push32((uint32_t)(EDX));
  /* 11cd8328 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd832b push eax */
  push32((uint32_t)(EAX));
  /* 11cd832c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd832f push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8330 call dword ptr [0x11d01334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01334))), 0x11cd8336u);
  /* 11cd8336 jmp 0x11cd8561 */
  goto L_11cd8561;
L_11cd833b:;
  /* 11cd833b cmp dword ptr [0x11cff67c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff67c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8342 jne 0x11cd855f */
  if (!C.zf) goto L_11cd855f;
  /* 11cd8348 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd834c jne 0x11cd8357 */
  if (!C.zf) goto L_11cd8357;
  /* 11cd834e mov edx, dword ptr [0x11cff674] */
  EDX = (r32((uint32_t)(0x11cff674)));
  /* 11cd8354 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11cd8357:;
  /* 11cd8357 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd8359 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd835b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd835e push eax */
  push32((uint32_t)(EAX));
  /* 11cd835f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd8362 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8363 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11cd8366 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd8368 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd836a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd836d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8370 push edx */
  push32((uint32_t)(EDX));
  /* 11cd8371 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11cd8374 push eax */
  push32((uint32_t)(EAX));
  /* 11cd8375 call dword ptr [0x11d01344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01344))), 0x11cd837bu);
  /* 11cd837b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11cd837e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8382 jne 0x11cd838b */
  if (!C.zf) goto L_11cd838b;
  /* 11cd8384 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd8386 jmp 0x11cd8561 */
  goto L_11cd8561;
L_11cd838b:;
  /* 11cd838b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd8392 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd8395 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cd8397 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd839a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11cd839c call 0x11cd0df0 */
  push32(0x11cd83a1u); f_11cd0df0();
  /* 11cd83a1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11cd83a4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cd83a7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd83aa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11cd83ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11cd83b4 jmp 0x11cd83cd */
  goto L_11cd83cd;
  /* 11cd83b6 mov eax, 1 */
  EAX = (0x1u);
  /* 11cd83bb ret  */
  ESPCHK(0x11cd8270u, _esp0);
  ESP += 4; return;
  /* 11cd83bc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd83bf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11cd83c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11cd83cd:;
  /* 11cd83cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd83d1 jne 0x11cd83da */
  if (!C.zf) goto L_11cd83da;
  /* 11cd83d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd83d5 jmp 0x11cd8561 */
  goto L_11cd8561;
L_11cd83da:;
  /* 11cd83da mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd83dd push edx */
  push32((uint32_t)(EDX));
  /* 11cd83de mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd83e1 push eax */
  push32((uint32_t)(EAX));
  /* 11cd83e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd83e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd83e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd83e9 push edx */
  push32((uint32_t)(EDX));
  /* 11cd83ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd83ec mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11cd83ef push eax */
  push32((uint32_t)(EAX));
  /* 11cd83f0 call dword ptr [0x11d01344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01344))), 0x11cd83f6u);
  /* 11cd83f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd83f8 jne 0x11cd8401 */
  if (!C.zf) goto L_11cd8401;
  /* 11cd83fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd83fc jmp 0x11cd8561 */
  goto L_11cd8561;
L_11cd8401:;
  /* 11cd8401 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd8403 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd8405 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd8408 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8409 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd840c push edx */
  push32((uint32_t)(EDX));
  /* 11cd840d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd8410 push eax */
  push32((uint32_t)(EAX));
  /* 11cd8411 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8414 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8415 call dword ptr [0x11d0133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0133c))), 0x11cd841bu);
  /* 11cd841b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11cd841e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8422 jne 0x11cd842b */
  if (!C.zf) goto L_11cd842b;
  /* 11cd8424 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd8426 jmp 0x11cd8561 */
  goto L_11cd8561;
L_11cd842b:;
  /* 11cd842b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd842e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd8434 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd8436 je 0x11cd847b */
  if (C.zf) goto L_11cd847b;
  /* 11cd8438 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd843c je 0x11cd8476 */
  if (C.zf) goto L_11cd8476;
  /* 11cd843e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd8441 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8444 jle 0x11cd844d */
  if ((C.zf||C.sf!=C.of)) goto L_11cd844d;
  /* 11cd8446 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd8448 jmp 0x11cd8561 */
  goto L_11cd8561;
L_11cd844d:;
  /* 11cd844d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd8450 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8451 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd8454 push edx */
  push32((uint32_t)(EDX));
  /* 11cd8455 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd8458 push eax */
  push32((uint32_t)(EAX));
  /* 11cd8459 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd845c push ecx */
  push32((uint32_t)(ECX));
  /* 11cd845d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd8460 push edx */
  push32((uint32_t)(EDX));
  /* 11cd8461 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8464 push eax */
  push32((uint32_t)(EAX));
  /* 11cd8465 call dword ptr [0x11d0133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0133c))), 0x11cd846bu);
  /* 11cd846b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd846d jne 0x11cd8476 */
  if (!C.zf) goto L_11cd8476;
  /* 11cd846f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd8471 jmp 0x11cd8561 */
  goto L_11cd8561;
L_11cd8476:;
  /* 11cd8476 jmp 0x11cd855a */
  goto L_11cd855a;
L_11cd847b:;
  /* 11cd847b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd847e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11cd8481 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cd8488 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd848b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cd848d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8490 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11cd8492 call 0x11cd0df0 */
  push32(0x11cd8497u); f_11cd0df0();
  /* 11cd8497 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11cd849a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cd849d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd84a0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11cd84a3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11cd84aa jmp 0x11cd84c3 */
  goto L_11cd84c3;
  /* 11cd84ac mov eax, 1 */
  EAX = (0x1u);
  /* 11cd84b1 ret  */
  ESPCHK(0x11cd8270u, _esp0);
  ESP += 4; return;
  /* 11cd84b2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd84b5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11cd84bc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11cd84c3:;
  /* 11cd84c3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd84c7 jne 0x11cd84d0 */
  if (!C.zf) goto L_11cd84d0;
  /* 11cd84c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd84cb jmp 0x11cd8561 */
  goto L_11cd8561;
L_11cd84d0:;
  /* 11cd84d0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd84d3 push eax */
  push32((uint32_t)(EAX));
  /* 11cd84d4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd84d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd84d8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd84db push edx */
  push32((uint32_t)(EDX));
  /* 11cd84dc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd84df push eax */
  push32((uint32_t)(EAX));
  /* 11cd84e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd84e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd84e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd84e7 push edx */
  push32((uint32_t)(EDX));
  /* 11cd84e8 call dword ptr [0x11d0133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0133c))), 0x11cd84eeu);
  /* 11cd84ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd84f0 jne 0x11cd84f6 */
  if (!C.zf) goto L_11cd84f6;
  /* 11cd84f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd84f4 jmp 0x11cd8561 */
  goto L_11cd8561;
L_11cd84f6:;
  /* 11cd84f6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd84fa jne 0x11cd852a */
  if (!C.zf) goto L_11cd852a;
  /* 11cd84fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd84fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd8500 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd8502 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd8504 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd8507 push eax */
  push32((uint32_t)(EAX));
  /* 11cd8508 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd850b push ecx */
  push32((uint32_t)(ECX));
  /* 11cd850c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11cd8511 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11cd8514 push edx */
  push32((uint32_t)(EDX));
  /* 11cd8515 call dword ptr [0x11d0139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0139c))), 0x11cd851bu);
  /* 11cd851b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11cd851e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8522 jne 0x11cd8528 */
  if (!C.zf) goto L_11cd8528;
  /* 11cd8524 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd8526 jmp 0x11cd8561 */
  goto L_11cd8561;
L_11cd8528:;
  /* 11cd8528 jmp 0x11cd855a */
  goto L_11cd855a;
L_11cd852a:;
  /* 11cd852a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd852c push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd852e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd8531 push eax */
  push32((uint32_t)(EAX));
  /* 11cd8532 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd8535 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8536 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd8539 push edx */
  push32((uint32_t)(EDX));
  /* 11cd853a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd853d push eax */
  push32((uint32_t)(EAX));
  /* 11cd853e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11cd8543 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11cd8546 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8547 call dword ptr [0x11d0139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0139c))), 0x11cd854du);
  /* 11cd854d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11cd8550 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8554 jne 0x11cd855a */
  if (!C.zf) goto L_11cd855a;
  /* 11cd8556 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd8558 jmp 0x11cd8561 */
  goto L_11cd8561;
L_11cd855a:;
  /* 11cd855a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd855d jmp 0x11cd8561 */
  goto L_11cd8561;
L_11cd855f:;
  /* 11cd855f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cd8561:;
  /* 11cd8561 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11cd8564 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd8567 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11cd856e pop edi */
  EDI = (pop32());
  /* 11cd856f pop esi */
  ESI = (pop32());
  /* 11cd8570 pop ebx */
  EBX = (pop32());
  /* 11cd8571 mov esp, ebp */
  ESP = (EBP);
  /* 11cd8573 pop ebp */
  EBP = (pop32());
  /* 11cd8574 ret  */
  ESPCHK(0x11cd8270u, _esp0);
  ESP += 4; return;
}

/* FUN_10018580 @ 0x11cd8580 (80 bytes, 32 insns) */
void f_11cd8580(void) {
  FTRACE(0x11cd8580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd8580 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd8581 mov ebp, esp */
  EBP = (ESP);
  /* 11cd8583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8586 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd8589 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd858c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd858f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd8592:;
  /* 11cd8592 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd8595 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd8598 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd859b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd859e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd85a0 je 0x11cd85b7 */
  if (C.zf) goto L_11cd85b7;
  /* 11cd85a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd85a5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cd85a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd85aa je 0x11cd85b7 */
  if (C.zf) goto L_11cd85b7;
  /* 11cd85ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd85af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd85b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd85b5 jmp 0x11cd8592 */
  goto L_11cd8592;
L_11cd85b7:;
  /* 11cd85b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd85ba movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cd85bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd85bf jne 0x11cd85c9 */
  if (!C.zf) goto L_11cd85c9;
  /* 11cd85c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd85c4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd85c7 jmp 0x11cd85cc */
  goto L_11cd85cc;
L_11cd85c9:;
  /* 11cd85c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11cd85cc:;
  /* 11cd85cc mov esp, ebp */
  ESP = (EBP);
  /* 11cd85ce pop ebp */
  EBP = (pop32());
  /* 11cd85cf ret  */
  ESPCHK(0x11cd8580u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x11cd85d0 (62 bytes, 23 insns) */
void f_11cd85d0(void) {
  FTRACE(0x11cd85d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd85d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd85d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd85d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd85d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cd85dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd85e0 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd85e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd85e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd85e9 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd85ec jb 0x11cd85f6 */
  if (C.cf) goto L_11cd85f6;
  /* 11cd85ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd85f1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd85f4 jae 0x11cd85ff */
  if (!C.cf) goto L_11cd85ff;
L_11cd85f6:;
  /* 11cd85f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd85f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd85fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11cd85ff:;
  /* 11cd85ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd8602 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8605 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11cd8607 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd860a mov esp, ebp */
  ESP = (EBP);
  /* 11cd860c pop ebp */
  EBP = (pop32());
  /* 11cd860d ret  */
  ESPCHK(0x11cd85d0u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11cd8610 (173 bytes, 66 insns) */
void f_11cd8610(void) {
  FTRACE(0x11cd8610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd8610 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd8611 mov ebp, esp */
  EBP = (ESP);
  /* 11cd8613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8619 push eax */
  push32((uint32_t)(EAX));
  /* 11cd861a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd861d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd861f push edx */
  push32((uint32_t)(EDX));
  /* 11cd8620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8623 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd8625 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8626 call 0x11cd85d0 */
  push32(0x11cd862bu); f_11cd85d0();
  /* 11cd862b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd862e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd8631 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8635 je 0x11cd8667 */
  if (C.zf) goto L_11cd8667;
  /* 11cd8637 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd863a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd863d push edx */
  push32((uint32_t)(EDX));
  /* 11cd863e push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd8640 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8643 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd8646 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8647 call 0x11cd85d0 */
  push32(0x11cd864cu); f_11cd85d0();
  /* 11cd864c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd864f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd8652 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8656 je 0x11cd8667 */
  if (C.zf) goto L_11cd8667;
  /* 11cd8658 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd865b mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cd865e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8661 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8664 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_11cd8667:;
  /* 11cd8667 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd866a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd866d push edx */
  push32((uint32_t)(EDX));
  /* 11cd866e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd8671 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd8674 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8675 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8678 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd867b push eax */
  push32((uint32_t)(EAX));
  /* 11cd867c call 0x11cd85d0 */
  push32(0x11cd8681u); f_11cd85d0();
  /* 11cd8681 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8684 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd8687 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd868b je 0x11cd869c */
  if (C.zf) goto L_11cd869c;
  /* 11cd868d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8690 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd8693 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8699 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11cd869c:;
  /* 11cd869c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd869f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd86a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd86a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd86a6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cd86a9 push eax */
  push32((uint32_t)(EAX));
  /* 11cd86aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd86ad mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd86b0 push edx */
  push32((uint32_t)(EDX));
  /* 11cd86b1 call 0x11cd85d0 */
  push32(0x11cd86b6u); f_11cd85d0();
  /* 11cd86b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd86b9 mov esp, ebp */
  ESP = (EBP);
  /* 11cd86bb pop ebp */
  EBP = (pop32());
  /* 11cd86bc ret  */
  ESPCHK(0x11cd8610u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x11cd86c0 (96 bytes, 37 insns) */
void f_11cd86c0(void) {
  FTRACE(0x11cd86c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd86c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd86c1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd86c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd86c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd86c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd86cb and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd86d1 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd86d3 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd86d5 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd86d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd86da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd86dd mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd86e0 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd86e5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd86e7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd86e9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd86eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd86ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd86f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd86f3 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11cd86f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd86f8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cd86fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd86fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd8700 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11cd8702 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11cd8705 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8708 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11cd870b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd870e mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd8711 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11cd8713 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11cd8716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8719 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11cd871c mov esp, ebp */
  ESP = (EBP);
  /* 11cd871e pop ebp */
  EBP = (pop32());
  /* 11cd871f ret  */
  ESPCHK(0x11cd86c0u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x11cd8720 (99 bytes, 37 insns) */
void f_11cd8720(void) {
  FTRACE(0x11cd8720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd8720 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd8721 mov ebp, esp */
  EBP = (ESP);
  /* 11cd8723 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8726 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8729 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd872c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd872f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd8731 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8733 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd8739 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd873c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd873f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd8742 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd8745 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd8747 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8749 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd874e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd8751 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8754 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd8757 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11cd8759 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd875c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11cd875f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8762 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd8765 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11cd8767 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11cd876a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd876d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11cd8770 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd8773 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd8775 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11cd8777 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11cd877a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd877d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cd877f mov esp, ebp */
  ESP = (EBP);
  /* 11cd8781 pop ebp */
  EBP = (pop32());
  /* 11cd8782 ret  */
  ESPCHK(0x11cd8720u, _esp0);
  ESP += 4; return;
}

/* FUN_10018790 @ 0x11cd8790 (315 bytes, 101 insns) */
void f_11cd8790(void) {
  FTRACE(0x11cd8790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd8790 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd8791 mov ebp, esp */
  EBP = (ESP);
  /* 11cd8793 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8796 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 11cd879c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd879f mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11cd87a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd87a8 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11cd87af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd87b2 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11cd87b9 jmp 0x11cd87cd */
  goto L_11cd87cd;
L_11cd87bb:;
  /* 11cd87bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd87be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd87c1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11cd87c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd87c7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd87ca mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11cd87cd:;
  /* 11cd87cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd87d1 jbe 0x11cd8847 */
  if ((C.cf||C.zf)) goto L_11cd8847;
  /* 11cd87d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd87d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd87d8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd87db mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd87de mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd87e1 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cd87e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd87e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd87ea push eax */
  push32((uint32_t)(EAX));
  /* 11cd87eb call 0x11cd86c0 */
  push32(0x11cd87f0u); f_11cd86c0();
  /* 11cd87f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd87f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd87f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd87f7 call 0x11cd86c0 */
  push32(0x11cd87fcu); f_11cd86c0();
  /* 11cd87fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd87ff lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11cd8802 push edx */
  push32((uint32_t)(EDX));
  /* 11cd8803 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd8806 push eax */
  push32((uint32_t)(EAX));
  /* 11cd8807 call 0x11cd8610 */
  push32(0x11cd880cu); f_11cd8610();
  /* 11cd880c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd880f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd8812 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8813 call 0x11cd86c0 */
  push32(0x11cd8818u); f_11cd86c0();
  /* 11cd8818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd881b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd881e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cd8821 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd8824 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cd882b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd8832 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11cd8835 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8836 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd8839 push edx */
  push32((uint32_t)(EDX));
  /* 11cd883a call 0x11cd8610 */
  push32(0x11cd883fu); f_11cd8610();
  /* 11cd883f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8842 jmp 0x11cd87bb */
  goto L_11cd87bb;
L_11cd8847:;
  /* 11cd8847 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd884a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd884e jne 0x11cd8893 */
  if (!C.zf) goto L_11cd8893;
  /* 11cd8850 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd8853 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd8856 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11cd8859 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd885c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11cd885f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd8862 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd8865 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11cd8868 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd886b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd886d shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11cd8870 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd8872 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd8875 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11cd8878 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd887b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd887d shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11cd8880 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd8883 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cd8885 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11cd8889 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11cd888d mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 11cd8891 jmp 0x11cd8847 */
  goto L_11cd8847;
L_11cd8893:;
  /* 11cd8893 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd8896 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cd8899 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd889e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd88a0 jne 0x11cd88bc */
  if (!C.zf) goto L_11cd88bc;
  /* 11cd88a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd88a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd88a6 call 0x11cd86c0 */
  push32(0x11cd88abu); f_11cd86c0();
  /* 11cd88ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd88ae mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 11cd88b2 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11cd88b6 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 11cd88ba jmp 0x11cd8893 */
  goto L_11cd8893;
L_11cd88bc:;
  /* 11cd88bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd88bf mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11cd88c3 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 11cd88c7 mov esp, ebp */
  ESP = (EBP);
  /* 11cd88c9 pop ebp */
  EBP = (pop32());
  /* 11cd88ca ret  */
  ESPCHK(0x11cd8790u, _esp0);
  ESP += 4; return;
}

/* FUN_100188d0 @ 0x11cd88d0 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_11cd88d0(void) {
  FTRACE(0x11cd88d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd88d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd88d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd88d3 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd88d9 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11cd88dc mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 11cd88df mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11cd88e5 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 11cd88ec mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 11cd88f3 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 11cd88fa mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cd8901 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11cd8908 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11cd890f mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 11cd8916 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11cd891d mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 11cd8924 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11cd892b mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11cd8932 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd8935 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd8938 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd893b mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11cd893e jmp 0x11cd8949 */
  goto L_11cd8949;
L_11cd8940:;
  /* 11cd8940 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8943 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8946 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd8949:;
  /* 11cd8949 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd894c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cd894f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8952 je 0x11cd8975 */
  if (C.zf) goto L_11cd8975;
  /* 11cd8954 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8957 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cd895a cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd895d je 0x11cd8975 */
  if (C.zf) goto L_11cd8975;
  /* 11cd895f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8962 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cd8965 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8968 je 0x11cd8975 */
  if (C.zf) goto L_11cd8975;
  /* 11cd896a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd896d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cd8970 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8973 jne 0x11cd8977 */
  if (!C.zf) goto L_11cd8977;
L_11cd8975:;
  /* 11cd8975 jmp 0x11cd8940 */
  goto L_11cd8940;
L_11cd8977:;
  /* 11cd8977 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd897b je 0x11cd90d8 */
  if (C.zf) goto L_11cd90d8;
  /* 11cd8981 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8984 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cd8986 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11cd8989 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd898c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd898f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd8992 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11cd8995 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 11cd8998 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd899c ja 0x11cd90d3 */
  if ((!C.cf&&!C.zf)) goto L_11cd90d3;
  /* 11cd89a2 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 11cd89a5 jmp dword ptr [ecx*4 + 0x11cd92ea] */
  switch (ECX) {
    case 0: goto L_11cd89ac;
    case 1: goto L_11cd8a4a;
    case 2: goto L_11cd8b00;
    case 3: goto L_11cd8b6b;
    case 4: goto L_11cd8c83;
    case 5: goto L_11cd8db5;
    case 6: goto L_11cd8e2b;
    case 7: goto L_11cd8f10;
    case 8: goto L_11cd8eb2;
    case 9: goto L_11cd8f63;
    case 10: goto L_11cd90d3;
    case 11: goto L_11cd906f;
    case 12: goto L_11cd8ad9;
    case 13: goto L_11cd8ac7;
    case 14: goto L_11cd8ad0;
    case 15: goto L_11cd8aeb;
    default: x86_unimpl("switch@0x11cd89a5 out of table"); return;
  }
L_11cd89ac:;
  /* 11cd89ac movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd89b0 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd89b3 jl 0x11cd89d0 */
  if ((C.sf!=C.of)) goto L_11cd89d0;
  /* 11cd89b5 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd89b9 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd89bc jg 0x11cd89d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd89d0;
  /* 11cd89be mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11cd89c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd89c8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd89cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd89ce jmp 0x11cd8a45 */
  goto L_11cd8a45;
L_11cd89d0:;
  /* 11cd89d0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd89d4 movsx eax, byte ptr [0x11cfd004] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11cfd004))));
  /* 11cd89db cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd89dd jne 0x11cd89e8 */
  if (!C.zf) goto L_11cd89e8;
  /* 11cd89df mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11cd89e6 jmp 0x11cd8a45 */
  goto L_11cd8a45;
L_11cd89e8:;
  /* 11cd89e8 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11cd89eb mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 11cd89f1 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd89f8 je 0x11cd8a17 */
  if (C.zf) goto L_11cd8a17;
  /* 11cd89fa cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd8a01 je 0x11cd8a26 */
  if (C.zf) goto L_11cd8a26;
  /* 11cd8a03 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd8a0a je 0x11cd8a0e */
  if (C.zf) goto L_11cd8a0e;
  /* 11cd8a0c jmp 0x11cd8a35 */
  goto L_11cd8a35;
L_11cd8a0e:;
  /* 11cd8a0e mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11cd8a15 jmp 0x11cd8a45 */
  goto L_11cd8a45;
L_11cd8a17:;
  /* 11cd8a17 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11cd8a1e mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11cd8a24 jmp 0x11cd8a45 */
  goto L_11cd8a45;
L_11cd8a26:;
  /* 11cd8a26 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11cd8a2d mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 11cd8a33 jmp 0x11cd8a45 */
  goto L_11cd8a45;
L_11cd8a35:;
  /* 11cd8a35 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11cd8a3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8a3f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8a42 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd8a45:;
  /* 11cd8a45 jmp 0x11cd90d3 */
  goto L_11cd90d3;
L_11cd8a4a:;
  /* 11cd8a4a mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11cd8a51 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8a55 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8a58 jl 0x11cd8a78 */
  if ((C.sf!=C.of)) goto L_11cd8a78;
  /* 11cd8a5a movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8a5e cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8a61 jg 0x11cd8a78 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd8a78;
  /* 11cd8a63 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11cd8a6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8a6d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8a70 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd8a73 jmp 0x11cd8afb */
  goto L_11cd8afb;
L_11cd8a78:;
  /* 11cd8a78 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8a7c movsx ecx, byte ptr [0x11cfd004] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11cfd004))));
  /* 11cd8a83 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8a85 jne 0x11cd8a90 */
  if (!C.zf) goto L_11cd8a90;
  /* 11cd8a87 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11cd8a8e jmp 0x11cd8afb */
  goto L_11cd8afb;
L_11cd8a90:;
  /* 11cd8a90 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8a94 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 11cd8a9a mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 11cd8aa0 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8aa3 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 11cd8aa9 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8ab0 ja 0x11cd8aeb */
  if ((!C.cf&&!C.zf)) goto L_11cd8aeb;
  /* 11cd8ab2 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 11cd8ab8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd8aba mov cl, byte ptr [edx + 0x11cd932a] */
  CL = (r8((uint32_t)(EDX + 0x11cd932a)));
  /* 11cd8ac0 jmp dword ptr [ecx*4 + 0x11cd931a] */
  switch (ECX) {
    case 0: goto L_11cd8ad9;
    case 1: goto L_11cd8ac7;
    case 2: goto L_11cd8ad0;
    case 3: goto L_11cd8aeb;
    default: x86_unimpl("switch@0x11cd8ac0 out of table"); return;
  }
L_11cd8ac7:;
  /* 11cd8ac7 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11cd8ace jmp 0x11cd8afb */
  goto L_11cd8afb;
L_11cd8ad0:;
  /* 11cd8ad0 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11cd8ad7 jmp 0x11cd8afb */
  goto L_11cd8afb;
L_11cd8ad9:;
  /* 11cd8ad9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8adc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8adf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd8ae2 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11cd8ae9 jmp 0x11cd8afb */
  goto L_11cd8afb;
L_11cd8aeb:;
  /* 11cd8aeb mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11cd8af2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8af5 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8af8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd8afb:;
  /* 11cd8afb jmp 0x11cd90d3 */
  goto L_11cd90d3;
L_11cd8b00:;
  /* 11cd8b00 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8b04 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8b07 jl 0x11cd8b24 */
  if ((C.sf!=C.of)) goto L_11cd8b24;
  /* 11cd8b09 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8b0d cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8b10 jg 0x11cd8b24 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd8b24;
  /* 11cd8b12 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11cd8b19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8b1c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8b1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd8b22 jmp 0x11cd8b66 */
  goto L_11cd8b66;
L_11cd8b24:;
  /* 11cd8b24 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8b28 movsx eax, byte ptr [0x11cfd004] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11cfd004))));
  /* 11cd8b2f cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8b31 jne 0x11cd8b3c */
  if (!C.zf) goto L_11cd8b3c;
  /* 11cd8b33 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11cd8b3a jmp 0x11cd8b66 */
  goto L_11cd8b66;
L_11cd8b3c:;
  /* 11cd8b3c mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11cd8b3f mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 11cd8b45 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd8b4c je 0x11cd8b50 */
  if (C.zf) goto L_11cd8b50;
  /* 11cd8b4e jmp 0x11cd8b59 */
  goto L_11cd8b59;
L_11cd8b50:;
  /* 11cd8b50 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11cd8b57 jmp 0x11cd8b66 */
  goto L_11cd8b66;
L_11cd8b59:;
  /* 11cd8b59 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11cd8b60 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11cd8b63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd8b66:;
  /* 11cd8b66 jmp 0x11cd90d3 */
  goto L_11cd90d3;
L_11cd8b6b:;
  /* 11cd8b6b mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11cd8b72 jmp 0x11cd8b85 */
  goto L_11cd8b85;
L_11cd8b74:;
  /* 11cd8b74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8b77 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cd8b79 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11cd8b7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8b7f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8b82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd8b85:;
  /* 11cd8b85 cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8b8c jle 0x11cd8ba9 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd8ba9;
  /* 11cd8b8e push 4 */
  push32((uint32_t)(0x4u));
  /* 11cd8b90 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd8b93 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd8b98 push eax */
  push32((uint32_t)(EAX));
  /* 11cd8b99 call 0x11cd1b90 */
  push32(0x11cd8b9eu); f_11cd1b90();
  /* 11cd8b9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8ba1 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11cd8ba7 jmp 0x11cd8bc7 */
  goto L_11cd8bc7;
L_11cd8ba9:;
  /* 11cd8ba9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd8bac and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd8bb2 mov edx, dword ptr [0x11cfd00c] */
  EDX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cd8bb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd8bba mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11cd8bbe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd8bc1 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_11cd8bc7:;
  /* 11cd8bc7 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8bce je 0x11cd8c04 */
  if (C.zf) goto L_11cd8c04;
  /* 11cd8bd0 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8bd4 jae 0x11cd8bf6 */
  if (!C.cf) goto L_11cd8bf6;
  /* 11cd8bd6 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 11cd8bd9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8bdc mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 11cd8bdf movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8be3 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8be6 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11cd8be9 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11cd8beb mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11cd8bee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8bf1 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11cd8bf4 jmp 0x11cd8bff */
  goto L_11cd8bff;
L_11cd8bf6:;
  /* 11cd8bf6 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11cd8bf9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8bfc mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11cd8bff:;
  /* 11cd8bff jmp 0x11cd8b74 */
  goto L_11cd8b74;
L_11cd8c04:;
  /* 11cd8c04 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8c08 movsx ecx, byte ptr [0x11cfd004] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11cfd004))));
  /* 11cd8c0f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8c11 jne 0x11cd8c1c */
  if (!C.zf) goto L_11cd8c1c;
  /* 11cd8c13 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11cd8c1a jmp 0x11cd8c7e */
  goto L_11cd8c7e;
L_11cd8c1c:;
  /* 11cd8c1c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8c20 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 11cd8c26 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11cd8c2c sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8c2f mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11cd8c35 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8c3c ja 0x11cd8c6e */
  if ((!C.cf&&!C.zf)) goto L_11cd8c6e;
  /* 11cd8c3e mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11cd8c44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd8c46 mov cl, byte ptr [edx + 0x11cd9371] */
  CL = (r8((uint32_t)(EDX + 0x11cd9371)));
  /* 11cd8c4c jmp dword ptr [ecx*4 + 0x11cd9365] */
  switch (ECX) {
    case 0: goto L_11cd8c5c;
    case 1: goto L_11cd8c53;
    case 2: goto L_11cd8c6e;
    default: x86_unimpl("switch@0x11cd8c4c out of table"); return;
  }
L_11cd8c53:;
  /* 11cd8c53 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11cd8c5a jmp 0x11cd8c7e */
  goto L_11cd8c7e;
L_11cd8c5c:;
  /* 11cd8c5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8c5f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8c62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd8c65 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11cd8c6c jmp 0x11cd8c7e */
  goto L_11cd8c7e;
L_11cd8c6e:;
  /* 11cd8c6e mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11cd8c75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8c78 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8c7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd8c7e:;
  /* 11cd8c7e jmp 0x11cd90d3 */
  goto L_11cd90d3;
L_11cd8c83:;
  /* 11cd8c83 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11cd8c8a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11cd8c91 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8c95 jne 0x11cd8cbe */
  if (!C.zf) goto L_11cd8cbe;
  /* 11cd8c97 jmp 0x11cd8caa */
  goto L_11cd8caa;
L_11cd8c99:;
  /* 11cd8c99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8c9c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cd8c9e mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11cd8ca1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8ca4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8ca7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd8caa:;
  /* 11cd8caa movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8cae cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8cb1 jne 0x11cd8cbe */
  if (!C.zf) goto L_11cd8cbe;
  /* 11cd8cb3 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11cd8cb6 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8cb9 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11cd8cbc jmp 0x11cd8c99 */
  goto L_11cd8c99;
L_11cd8cbe:;
  /* 11cd8cbe jmp 0x11cd8cd1 */
  goto L_11cd8cd1;
L_11cd8cc0:;
  /* 11cd8cc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8cc3 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cd8cc5 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11cd8cc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8ccb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8cce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd8cd1:;
  /* 11cd8cd1 cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8cd8 jle 0x11cd8cf6 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd8cf6;
  /* 11cd8cda push 4 */
  push32((uint32_t)(0x4u));
  /* 11cd8cdc mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd8cdf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd8ce5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8ce6 call 0x11cd1b90 */
  push32(0x11cd8cebu); f_11cd1b90();
  /* 11cd8ceb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8cee mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 11cd8cf4 jmp 0x11cd8d13 */
  goto L_11cd8d13;
L_11cd8cf6:;
  /* 11cd8cf6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd8cf9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd8cff mov eax, dword ptr [0x11cfd00c] */
  EAX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cd8d04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd8d06 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11cd8d0a and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd8d0d mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_11cd8d13:;
  /* 11cd8d13 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8d1a je 0x11cd8d4e */
  if (C.zf) goto L_11cd8d4e;
  /* 11cd8d1c cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8d20 jae 0x11cd8d49 */
  if (!C.cf) goto L_11cd8d49;
  /* 11cd8d22 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11cd8d25 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8d28 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11cd8d2b movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8d2f sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8d32 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11cd8d35 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11cd8d37 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11cd8d3a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8d3d mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11cd8d40 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11cd8d43 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8d46 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11cd8d49:;
  /* 11cd8d49 jmp 0x11cd8cc0 */
  goto L_11cd8cc0;
L_11cd8d4e:;
  /* 11cd8d4e movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8d52 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11cd8d58 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11cd8d5e sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8d61 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 11cd8d67 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8d6e ja 0x11cd8da0 */
  if ((!C.cf&&!C.zf)) goto L_11cd8da0;
  /* 11cd8d70 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11cd8d76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd8d78 mov al, byte ptr [ecx + 0x11cd93b8] */
  AL = (r8((uint32_t)(ECX + 0x11cd93b8)));
  /* 11cd8d7e jmp dword ptr [eax*4 + 0x11cd93ac] */
  switch (EAX) {
    case 0: goto L_11cd8d8e;
    case 1: goto L_11cd8d85;
    case 2: goto L_11cd8da0;
    default: x86_unimpl("switch@0x11cd8d7e out of table"); return;
  }
L_11cd8d85:;
  /* 11cd8d85 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11cd8d8c jmp 0x11cd8db0 */
  goto L_11cd8db0;
L_11cd8d8e:;
  /* 11cd8d8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8d91 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8d94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd8d97 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11cd8d9e jmp 0x11cd8db0 */
  goto L_11cd8db0;
L_11cd8da0:;
  /* 11cd8da0 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11cd8da7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8daa sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8dad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd8db0:;
  /* 11cd8db0 jmp 0x11cd90d3 */
  goto L_11cd90d3;
L_11cd8db5:;
  /* 11cd8db5 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11cd8dbc cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8dc3 jle 0x11cd8de1 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd8de1;
  /* 11cd8dc5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cd8dc7 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd8dca and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd8dd0 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd8dd1 call 0x11cd1b90 */
  push32(0x11cd8dd6u); f_11cd1b90();
  /* 11cd8dd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8dd9 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11cd8ddf jmp 0x11cd8dfe */
  goto L_11cd8dfe;
L_11cd8de1:;
  /* 11cd8de1 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd8de4 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd8dea mov eax, dword ptr [0x11cfd00c] */
  EAX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cd8def xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd8df1 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11cd8df5 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd8df8 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_11cd8dfe:;
  /* 11cd8dfe cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8e05 je 0x11cd8e19 */
  if (C.zf) goto L_11cd8e19;
  /* 11cd8e07 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11cd8e0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8e11 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8e14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd8e17 jmp 0x11cd8e26 */
  goto L_11cd8e26;
L_11cd8e19:;
  /* 11cd8e19 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11cd8e20 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11cd8e23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd8e26:;
  /* 11cd8e26 jmp 0x11cd90d3 */
  goto L_11cd90d3;
L_11cd8e2b:;
  /* 11cd8e2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8e2e sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8e31 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11cd8e34 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8e38 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8e3b jl 0x11cd8e58 */
  if ((C.sf!=C.of)) goto L_11cd8e58;
  /* 11cd8e3d movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8e41 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8e44 jg 0x11cd8e58 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd8e58;
  /* 11cd8e46 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11cd8e4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8e50 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8e53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd8e56 jmp 0x11cd8ead */
  goto L_11cd8ead;
L_11cd8e58:;
  /* 11cd8e58 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11cd8e5b mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 11cd8e61 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd8e68 je 0x11cd8e97 */
  if (C.zf) goto L_11cd8e97;
  /* 11cd8e6a cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd8e71 je 0x11cd8e87 */
  if (C.zf) goto L_11cd8e87;
  /* 11cd8e73 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd8e7a je 0x11cd8e7e */
  if (C.zf) goto L_11cd8e7e;
  /* 11cd8e7c jmp 0x11cd8ea0 */
  goto L_11cd8ea0;
L_11cd8e7e:;
  /* 11cd8e7e mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11cd8e85 jmp 0x11cd8ead */
  goto L_11cd8ead;
L_11cd8e87:;
  /* 11cd8e87 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11cd8e8e mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11cd8e95 jmp 0x11cd8ead */
  goto L_11cd8ead;
L_11cd8e97:;
  /* 11cd8e97 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11cd8e9e jmp 0x11cd8ead */
  goto L_11cd8ead;
L_11cd8ea0:;
  /* 11cd8ea0 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11cd8ea7 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11cd8eaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd8ead:;
  /* 11cd8ead jmp 0x11cd90d3 */
  goto L_11cd90d3;
L_11cd8eb2:;
  /* 11cd8eb2 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11cd8eb9 jmp 0x11cd8ecc */
  goto L_11cd8ecc;
L_11cd8ebb:;
  /* 11cd8ebb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8ebe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cd8ec0 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11cd8ec3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8ec6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8ec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd8ecc:;
  /* 11cd8ecc movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8ed0 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8ed3 jne 0x11cd8ed7 */
  if (!C.zf) goto L_11cd8ed7;
  /* 11cd8ed5 jmp 0x11cd8ebb */
  goto L_11cd8ebb;
L_11cd8ed7:;
  /* 11cd8ed7 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8edb cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8ede jl 0x11cd8efb */
  if ((C.sf!=C.of)) goto L_11cd8efb;
  /* 11cd8ee0 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8ee4 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8ee7 jg 0x11cd8efb */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd8efb;
  /* 11cd8ee9 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11cd8ef0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8ef3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8ef6 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd8ef9 jmp 0x11cd8f0b */
  goto L_11cd8f0b;
L_11cd8efb:;
  /* 11cd8efb mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11cd8f02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8f05 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8f08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd8f0b:;
  /* 11cd8f0b jmp 0x11cd90d3 */
  goto L_11cd90d3;
L_11cd8f10:;
  /* 11cd8f10 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8f14 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8f17 jl 0x11cd8f34 */
  if ((C.sf!=C.of)) goto L_11cd8f34;
  /* 11cd8f19 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8f1d cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8f20 jg 0x11cd8f34 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd8f34;
  /* 11cd8f22 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11cd8f29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8f2c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd8f2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd8f32 jmp 0x11cd8f5e */
  goto L_11cd8f5e;
L_11cd8f34:;
  /* 11cd8f34 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11cd8f37 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 11cd8f3d cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd8f44 je 0x11cd8f48 */
  if (C.zf) goto L_11cd8f48;
  /* 11cd8f46 jmp 0x11cd8f51 */
  goto L_11cd8f51;
L_11cd8f48:;
  /* 11cd8f48 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11cd8f4f jmp 0x11cd8f5e */
  goto L_11cd8f5e;
L_11cd8f51:;
  /* 11cd8f51 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11cd8f58 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11cd8f5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd8f5e:;
  /* 11cd8f5e jmp 0x11cd90d3 */
  goto L_11cd90d3;
L_11cd8f63:;
  /* 11cd8f63 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11cd8f6a mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 11cd8f71 jmp 0x11cd8f84 */
  goto L_11cd8f84;
L_11cd8f73:;
  /* 11cd8f73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8f76 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cd8f78 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11cd8f7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd8f7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8f81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd8f84:;
  /* 11cd8f84 cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8f8b jle 0x11cd8fa9 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd8fa9;
  /* 11cd8f8d push 4 */
  push32((uint32_t)(0x4u));
  /* 11cd8f8f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd8f92 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd8f98 push edx */
  push32((uint32_t)(EDX));
  /* 11cd8f99 call 0x11cd1b90 */
  push32(0x11cd8f9eu); f_11cd1b90();
  /* 11cd8f9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd8fa1 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11cd8fa7 jmp 0x11cd8fc6 */
  goto L_11cd8fc6;
L_11cd8fa9:;
  /* 11cd8fa9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd8fac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd8fb1 mov ecx, dword ptr [0x11cfd00c] */
  ECX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cd8fb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd8fb9 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11cd8fbd and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd8fc0 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_11cd8fc6:;
  /* 11cd8fc6 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8fcd je 0x11cd8ff7 */
  if (C.zf) goto L_11cd8ff7;
  /* 11cd8fcf mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cd8fd2 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd8fd5 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11cd8fd9 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11cd8fdd mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 11cd8fe0 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd8fe7 jle 0x11cd8ff2 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd8ff2;
  /* 11cd8fe9 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 11cd8ff0 jmp 0x11cd8ff7 */
  goto L_11cd8ff7;
L_11cd8ff2:;
  /* 11cd8ff2 jmp 0x11cd8f73 */
  goto L_11cd8f73;
L_11cd8ff7:;
  /* 11cd8ff7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cd8ffa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cd8ffd jmp 0x11cd9010 */
  goto L_11cd9010;
L_11cd8fff:;
  /* 11cd8fff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9002 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cd9004 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11cd9007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd900a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd900d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd9010:;
  /* 11cd9010 cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9017 jle 0x11cd9035 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd9035;
  /* 11cd9019 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cd901b mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd901e and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd9024 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd9025 call 0x11cd1b90 */
  push32(0x11cd902au); f_11cd1b90();
  /* 11cd902a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd902d mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11cd9033 jmp 0x11cd9052 */
  goto L_11cd9052;
L_11cd9035:;
  /* 11cd9035 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd9038 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd903e mov eax, dword ptr [0x11cfd00c] */
  EAX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cd9043 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd9045 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11cd9049 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd904c mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_11cd9052:;
  /* 11cd9052 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9059 je 0x11cd905d */
  if (C.zf) goto L_11cd905d;
  /* 11cd905b jmp 0x11cd8fff */
  goto L_11cd8fff;
L_11cd905d:;
  /* 11cd905d mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11cd9064 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9067 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd906a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd906d jmp 0x11cd90d3 */
  goto L_11cd90d3;
L_11cd906f:;
  /* 11cd906f cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9073 je 0x11cd90c3 */
  if (C.zf) goto L_11cd90c3;
  /* 11cd9075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9078 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd907b mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 11cd907e mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11cd9081 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 11cd9087 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd908e je 0x11cd90ab */
  if (C.zf) goto L_11cd90ab;
  /* 11cd9090 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd9097 je 0x11cd909b */
  if (C.zf) goto L_11cd909b;
  /* 11cd9099 jmp 0x11cd90b4 */
  goto L_11cd90b4;
L_11cd909b:;
  /* 11cd909b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11cd90a2 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11cd90a9 jmp 0x11cd90c1 */
  goto L_11cd90c1;
L_11cd90ab:;
  /* 11cd90ab mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11cd90b2 jmp 0x11cd90c1 */
  goto L_11cd90c1;
L_11cd90b4:;
  /* 11cd90b4 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11cd90bb mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11cd90be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd90c1:;
  /* 11cd90c1 jmp 0x11cd90d3 */
  goto L_11cd90d3;
L_11cd90c3:;
  /* 11cd90c3 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11cd90ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd90cd sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd90d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd90d3:;
  /* 11cd90d3 jmp 0x11cd8977 */
  goto L_11cd8977;
L_11cd90d8:;
  /* 11cd90d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd90db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd90de mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11cd90e0 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd90e4 je 0x11cd9227 */
  if (C.zf) goto L_11cd9227;
  /* 11cd90ea cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd90ee jne 0x11cd9227 */
  if (!C.zf) goto L_11cd9227;
  /* 11cd90f4 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd90f8 jne 0x11cd9227 */
  if (!C.zf) goto L_11cd9227;
  /* 11cd90fe cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9102 jbe 0x11cd912f */
  if ((C.cf||C.zf)) goto L_11cd912f;
  /* 11cd9104 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 11cd9108 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd910b jl 0x11cd9116 */
  if ((C.sf!=C.of)) goto L_11cd9116;
  /* 11cd910d mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 11cd9110 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cd9113 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_11cd9116:;
  /* 11cd9116 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 11cd911d mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11cd9120 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd9123 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11cd9126 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11cd9129 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd912c mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11cd912f:;
  /* 11cd912f cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9133 jbe 0x11cd920a */
  if ((C.cf||C.zf)) goto L_11cd920a;
  /* 11cd9139 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11cd913c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd913f mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11cd9142 jmp 0x11cd914d */
  goto L_11cd914d;
L_11cd9144:;
  /* 11cd9144 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11cd9147 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd914a mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_11cd914d:;
  /* 11cd914d mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11cd9150 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cd9153 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd9155 jne 0x11cd916b */
  if (!C.zf) goto L_11cd916b;
  /* 11cd9157 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11cd915a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd915d mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11cd9160 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11cd9163 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9166 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11cd9169 jmp 0x11cd9144 */
  goto L_11cd9144;
L_11cd916b:;
  /* 11cd916b lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11cd916e push ecx */
  push32((uint32_t)(ECX));
  /* 11cd916f mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11cd9172 push edx */
  push32((uint32_t)(EDX));
  /* 11cd9173 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11cd9176 push eax */
  push32((uint32_t)(EAX));
  /* 11cd9177 call 0x11cd8790 */
  push32(0x11cd917cu); f_11cd8790();
  /* 11cd917c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd917f cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9183 jge 0x11cd918d */
  if ((C.sf==C.of)) goto L_11cd918d;
  /* 11cd9185 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd9188 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd918a mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11cd918d:;
  /* 11cd918d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd9190 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9193 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11cd9196 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd919a jne 0x11cd91a5 */
  if (!C.zf) goto L_11cd91a5;
  /* 11cd919c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd919f add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd91a2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11cd91a5:;
  /* 11cd91a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd91a9 jne 0x11cd91b4 */
  if (!C.zf) goto L_11cd91b4;
  /* 11cd91ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd91ae sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd91b1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11cd91b4:;
  /* 11cd91b4 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd91bb jle 0x11cd91c6 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd91c6;
  /* 11cd91bd mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 11cd91c4 jmp 0x11cd9208 */
  goto L_11cd9208;
L_11cd91c6:;
  /* 11cd91c6 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd91cd jge 0x11cd91d8 */
  if ((C.sf==C.of)) goto L_11cd91d8;
  /* 11cd91cf mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 11cd91d6 jmp 0x11cd9208 */
  goto L_11cd9208;
L_11cd91d8:;
  /* 11cd91d8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd91db push edx */
  push32((uint32_t)(EDX));
  /* 11cd91dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd91df push eax */
  push32((uint32_t)(EAX));
  /* 11cd91e0 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11cd91e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd91e4 call 0x11cdcce0 */
  push32(0x11cd91e9u); f_11cdcce0();
  /* 11cd91e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd91ec mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 11cd91f0 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 11cd91f4 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 11cd91f7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd91fa mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 11cd91fd mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cd9200 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 11cd9204 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_11cd9208:;
  /* 11cd9208 jmp 0x11cd9227 */
  goto L_11cd9227;
L_11cd920a:;
  /* 11cd920a mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11cd9210 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11cd9216 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11cd9219 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd921e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd9221 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd9224 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11cd9227:;
  /* 11cd9227 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd922b jne 0x11cd9256 */
  if (!C.zf) goto L_11cd9256;
  /* 11cd922d mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11cd9233 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11cd9239 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11cd923c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd9242 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11cd9245 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd9248 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd924b mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11cd924e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd9251 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11cd9254 jmp 0x11cd92ad */
  goto L_11cd92ad;
L_11cd9256:;
  /* 11cd9256 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd925a je 0x11cd9281 */
  if (C.zf) goto L_11cd9281;
  /* 11cd925c mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 11cd9262 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11cd9269 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cd9270 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11cd9276 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11cd9279 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd927c mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 11cd927f jmp 0x11cd92ad */
  goto L_11cd92ad;
L_11cd9281:;
  /* 11cd9281 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9285 je 0x11cd92ad */
  if (C.zf) goto L_11cd92ad;
  /* 11cd9287 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11cd928d mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11cd9293 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11cd9296 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd929b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd929e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd92a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd92a4 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11cd92a7 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd92aa mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_11cd92ad:;
  /* 11cd92ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd92b0 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 11cd92b4 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11cd92b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd92ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd92bd mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11cd92c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd92c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd92c6 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11cd92c9 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11cd92cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd92d1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd92d4 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd92da or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd92dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd92df mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 11cd92e3 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11cd92e6 mov esp, ebp */
  ESP = (EBP);
  /* 11cd92e8 pop ebp */
  EBP = (pop32());
  /* 11cd92e9 ret  */
  ESPCHK(0x11cd88d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019400 @ 0x11cd9400 (79 bytes, 33 insns) */
void f_11cd9400(void) {
  FTRACE(0x11cd9400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd9400 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd9401 mov ebp, esp */
  EBP = (ESP);
  /* 11cd9403 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd9406 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd9408 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd940a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd940c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd940f push eax */
  push32((uint32_t)(EAX));
  /* 11cd9410 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd9413 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd9414 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd9417 push edx */
  push32((uint32_t)(EDX));
  /* 11cd9418 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11cd941b push eax */
  push32((uint32_t)(EAX));
  /* 11cd941c call 0x11cd88d0 */
  push32(0x11cd9421u); f_11cd88d0();
  /* 11cd9421 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9424 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cd9427 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd942a push ecx */
  push32((uint32_t)(ECX));
  /* 11cd942b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11cd942e push edx */
  push32((uint32_t)(EDX));
  /* 11cd942f call 0x11cd2490 */
  push32(0x11cd9434u); f_11cd2490();
  /* 11cd9434 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9437 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd943a cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd943e jne 0x11cd9448 */
  if (!C.zf) goto L_11cd9448;
  /* 11cd9440 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd9443 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11cd9445 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11cd9448:;
  /* 11cd9448 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd944b mov esp, ebp */
  ESP = (EBP);
  /* 11cd944d pop ebp */
  EBP = (pop32());
  /* 11cd944e ret  */
  ESPCHK(0x11cd9400u, _esp0);
  ESP += 4; return;
}

/* FUN_10019450 @ 0x11cd9450 (1302 bytes, 386 insns) */
void f_11cd9450(void) {
  FTRACE(0x11cd9450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd9450 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd9451 mov ebp, esp */
  EBP = (ESP);
  /* 11cd9453 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd9456 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 11cd945c mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 11cd9462 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 11cd9468 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 11cd946f mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 11cd9473 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 11cd9477 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 11cd947b mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 11cd947f mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 11cd9483 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 11cd9487 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 11cd948b mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 11cd948f mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 11cd9493 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 11cd9497 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 11cd949b mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 11cd949f mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 11cd94a6 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 11cd94aa mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 11cd94ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd94b1 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11cd94b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd94b7 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 11cd94ba mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11cd94bd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd94c2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd94c7 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 11cd94cb mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 11cd94cf and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11cd94d4 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 11cd94d8 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11cd94db and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd94e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd94e3 je 0x11cd94ee */
  if (C.zf) goto L_11cd94ee;
  /* 11cd94e5 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd94e8 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 11cd94ec jmp 0x11cd94f5 */
  goto L_11cd94f5;
L_11cd94ee:;
  /* 11cd94ee mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd94f1 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_11cd94f5:;
  /* 11cd94f5 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11cd94f8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd94fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd9500 jne 0x11cd953c */
  if (!C.zf) goto L_11cd953c;
  /* 11cd9502 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9506 jne 0x11cd953c */
  if (!C.zf) goto L_11cd953c;
  /* 11cd9508 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd950c jne 0x11cd953c */
  if (!C.zf) goto L_11cd953c;
  /* 11cd950e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9511 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11cd9516 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9519 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 11cd951d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9520 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 11cd9524 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9527 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 11cd952b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd952e mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 11cd9532 mov eax, 1 */
  EAX = (0x1u);
  /* 11cd9537 jmp 0x11cd9962 */
  goto L_11cd9962;
L_11cd953c:;
  /* 11cd953c mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11cd953f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd9545 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd954b jne 0x11cd9636 */
  if (!C.zf) goto L_11cd9636;
  /* 11cd9551 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9554 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 11cd9559 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9560 jne 0x11cd9568 */
  if (!C.zf) goto L_11cd9568;
  /* 11cd9562 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9566 je 0x11cd959c */
  if (C.zf) goto L_11cd959c;
L_11cd9568:;
  /* 11cd9568 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd956b and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd9571 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd9573 jne 0x11cd959c */
  if (!C.zf) goto L_11cd959c;
  /* 11cd9575 push 0x11cfa4c8 */
  push32((uint32_t)(0x11cfa4c8u));
  /* 11cd957a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd957d add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9580 push edx */
  push32((uint32_t)(EDX));
  /* 11cd9581 call 0x11cd0c00 */
  push32(0x11cd9586u); f_11cd0c00();
  /* 11cd9586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9589 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd958c mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 11cd9590 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11cd9597 jmp 0x11cd9631 */
  goto L_11cd9631;
L_11cd959c:;
  /* 11cd959c mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11cd959f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd95a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd95a7 je 0x11cd95dc */
  if (C.zf) goto L_11cd95dc;
  /* 11cd95a9 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd95b0 jne 0x11cd95dc */
  if (!C.zf) goto L_11cd95dc;
  /* 11cd95b2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd95b6 jne 0x11cd95dc */
  if (!C.zf) goto L_11cd95dc;
  /* 11cd95b8 push 0x11cfa4c0 */
  push32((uint32_t)(0x11cfa4c0u));
  /* 11cd95bd mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd95c0 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd95c3 push edx */
  push32((uint32_t)(EDX));
  /* 11cd95c4 call 0x11cd0c00 */
  push32(0x11cd95c9u); f_11cd0c00();
  /* 11cd95c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd95cc mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd95cf mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 11cd95d3 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11cd95da jmp 0x11cd9631 */
  goto L_11cd9631;
L_11cd95dc:;
  /* 11cd95dc cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd95e3 jne 0x11cd960f */
  if (!C.zf) goto L_11cd960f;
  /* 11cd95e5 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd95e9 jne 0x11cd960f */
  if (!C.zf) goto L_11cd960f;
  /* 11cd95eb push 0x11cfa4b8 */
  push32((uint32_t)(0x11cfa4b8u));
  /* 11cd95f0 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd95f3 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd95f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd95f7 call 0x11cd0c00 */
  push32(0x11cd95fcu); f_11cd0c00();
  /* 11cd95fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd95ff mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9602 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 11cd9606 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11cd960d jmp 0x11cd9631 */
  goto L_11cd9631;
L_11cd960f:;
  /* 11cd960f push 0x11cfa4b0 */
  push32((uint32_t)(0x11cfa4b0u));
  /* 11cd9614 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9617 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd961a push eax */
  push32((uint32_t)(EAX));
  /* 11cd961b call 0x11cd0c00 */
  push32(0x11cd9620u); f_11cd0c00();
  /* 11cd9620 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9623 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9626 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 11cd962a mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_11cd9631:;
  /* 11cd9631 jmp 0x11cd995f */
  goto L_11cd995f;
L_11cd9636:;
  /* 11cd9636 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11cd9639 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd963f sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11cd9642 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 11cd9646 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11cd9649 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd964e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd9653 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 11cd9657 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd965a shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11cd965d mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 11cd9661 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11cd9664 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd966a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11cd966d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd9672 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd9675 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd9678 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd967e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11cd9681 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd9686 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd9689 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd968b mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11cd968e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd9694 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11cd9697 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd969c imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd969f add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd96a1 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd96a4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cd96a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd96aa sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11cd96ad mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 11cd96b1 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 11cd96b5 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 11cd96b9 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd96bc mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 11cd96bf mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11cd96c2 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 11cd96c5 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 11cd96cb push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd96cd movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11cd96d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd96d3 push edx */
  push32((uint32_t)(EDX));
  /* 11cd96d4 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11cd96d7 push eax */
  push32((uint32_t)(EAX));
  /* 11cd96d8 call 0x11cdcce0 */
  push32(0x11cd96ddu); f_11cdcce0();
  /* 11cd96dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd96e0 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11cd96e3 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd96e9 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd96ef jl 0x11cd970d */
  if ((C.sf!=C.of)) goto L_11cd970d;
  /* 11cd96f1 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11cd96f5 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11cd96f9 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 11cd96fd lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 11cd9700 push eax */
  push32((uint32_t)(EAX));
  /* 11cd9701 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11cd9704 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd9705 call 0x11cdc8a0 */
  push32(0x11cd970au); f_11cdc8a0();
  /* 11cd970a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd970d:;
  /* 11cd970d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9710 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11cd9714 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11cd9717 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd971a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd971d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd971f je 0x11cd9761 */
  if (C.zf) goto L_11cd9761;
  /* 11cd9721 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11cd9725 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd9728 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd972a mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11cd972d cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9731 jg 0x11cd9761 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd9761;
  /* 11cd9733 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9736 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11cd973b mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd973e mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11cd9742 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9745 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11cd9749 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd974c mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11cd9750 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9753 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11cd9757 mov eax, 1 */
  EAX = (0x1u);
  /* 11cd975c jmp 0x11cd9962 */
  goto L_11cd9962;
L_11cd9761:;
  /* 11cd9761 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9765 jle 0x11cd976e */
  if ((C.zf||C.sf!=C.of)) goto L_11cd976e;
  /* 11cd9767 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_11cd976e:;
  /* 11cd976e mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11cd9771 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd9776 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd977b mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11cd977e mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 11cd9784 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11cd978b jmp 0x11cd9796 */
  goto L_11cd9796;
L_11cd978d:;
  /* 11cd978d mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11cd9790 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9793 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_11cd9796:;
  /* 11cd9796 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd979a jge 0x11cd97aa */
  if ((C.sf==C.of)) goto L_11cd97aa;
  /* 11cd979c lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11cd979f push edx */
  push32((uint32_t)(EDX));
  /* 11cd97a0 call 0x11cd86c0 */
  push32(0x11cd97a5u); f_11cd86c0();
  /* 11cd97a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd97a8 jmp 0x11cd978d */
  goto L_11cd978d;
L_11cd97aa:;
  /* 11cd97aa cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd97ae jge 0x11cd97dc */
  if ((C.sf==C.of)) goto L_11cd97dc;
  /* 11cd97b0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd97b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd97b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd97ba mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 11cd97bd jmp 0x11cd97c8 */
  goto L_11cd97c8;
L_11cd97bf:;
  /* 11cd97bf mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 11cd97c2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd97c5 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_11cd97c8:;
  /* 11cd97c8 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd97cc jle 0x11cd97dc */
  if ((C.zf||C.sf!=C.of)) goto L_11cd97dc;
  /* 11cd97ce lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11cd97d1 push edx */
  push32((uint32_t)(EDX));
  /* 11cd97d2 call 0x11cd8720 */
  push32(0x11cd97d7u); f_11cd8720();
  /* 11cd97d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd97da jmp 0x11cd97bf */
  goto L_11cd97bf;
L_11cd97dc:;
  /* 11cd97dc mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd97df add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd97e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd97e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd97e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd97eb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cd97ee jmp 0x11cd97f9 */
  goto L_11cd97f9;
L_11cd97f0:;
  /* 11cd97f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd97f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd97f6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11cd97f9:;
  /* 11cd97f9 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd97fd jle 0x11cd9865 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd9865;
  /* 11cd97ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd9802 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11cd9805 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd9808 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11cd980b mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd980e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11cd9811 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11cd9814 push eax */
  push32((uint32_t)(EAX));
  /* 11cd9815 call 0x11cd86c0 */
  push32(0x11cd981au); f_11cd86c0();
  /* 11cd981a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd981d lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11cd9820 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd9821 call 0x11cd86c0 */
  push32(0x11cd9826u); f_11cd86c0();
  /* 11cd9826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9829 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 11cd982c push edx */
  push32((uint32_t)(EDX));
  /* 11cd982d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11cd9830 push eax */
  push32((uint32_t)(EAX));
  /* 11cd9831 call 0x11cd8610 */
  push32(0x11cd9836u); f_11cd8610();
  /* 11cd9836 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9839 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11cd983c push ecx */
  push32((uint32_t)(ECX));
  /* 11cd983d call 0x11cd86c0 */
  push32(0x11cd9842u); f_11cd86c0();
  /* 11cd9842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9845 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 11cd9848 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd984e add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9851 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9854 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11cd9856 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9859 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd985c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd985f mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 11cd9863 jmp 0x11cd97f0 */
  goto L_11cd97f0;
L_11cd9865:;
  /* 11cd9865 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9868 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd986b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd986e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9871 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cd9873 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11cd9876 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9879 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd987c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd987f movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11cd9883 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9886 jl 0x11cd98e3 */
  if ((C.sf!=C.of)) goto L_11cd98e3;
  /* 11cd9888 jmp 0x11cd9893 */
  goto L_11cd9893;
L_11cd988a:;
  /* 11cd988a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd988d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd9890 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd9893:;
  /* 11cd9893 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9896 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9899 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd989c jb 0x11cd98b1 */
  if (C.cf) goto L_11cd98b1;
  /* 11cd989e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd98a1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cd98a4 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd98a7 jne 0x11cd98b1 */
  if (!C.zf) goto L_11cd98b1;
  /* 11cd98a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd98ac mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11cd98af jmp 0x11cd988a */
  goto L_11cd988a;
L_11cd98b1:;
  /* 11cd98b1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd98b4 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd98b7 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd98ba jae 0x11cd98d5 */
  if (!C.cf) goto L_11cd98d5;
  /* 11cd98bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd98bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd98c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd98c5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd98c8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11cd98cb add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11cd98cf mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd98d2 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_11cd98d5:;
  /* 11cd98d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd98d8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cd98da add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cd98dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd98df mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11cd98e1 jmp 0x11cd993c */
  goto L_11cd993c;
L_11cd98e3:;
  /* 11cd98e3 jmp 0x11cd98ee */
  goto L_11cd98ee;
L_11cd98e5:;
  /* 11cd98e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd98e8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd98eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd98ee:;
  /* 11cd98ee mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd98f1 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd98f4 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd98f7 jb 0x11cd9906 */
  if (C.cf) goto L_11cd9906;
  /* 11cd98f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd98fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cd98ff cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9902 jne 0x11cd9906 */
  if (!C.zf) goto L_11cd9906;
  /* 11cd9904 jmp 0x11cd98e5 */
  goto L_11cd98e5;
L_11cd9906:;
  /* 11cd9906 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9909 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd990c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd990f jae 0x11cd993c */
  if (!C.cf) goto L_11cd993c;
  /* 11cd9911 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9914 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11cd9919 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd991c mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11cd9920 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9923 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11cd9927 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd992a mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11cd992e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9931 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11cd9935 mov eax, 1 */
  EAX = (0x1u);
  /* 11cd993a jmp 0x11cd9962 */
  goto L_11cd9962;
L_11cd993c:;
  /* 11cd993c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd993f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9942 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9945 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd9947 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd994a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd994d mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 11cd9950 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd9953 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 11cd9957 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cd995a mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_11cd995f:;
  /* 11cd995f mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_11cd9962:;
  /* 11cd9962 mov esp, ebp */
  ESP = (EBP);
  /* 11cd9964 pop ebp */
  EBP = (pop32());
  /* 11cd9965 ret  */
  ESPCHK(0x11cd9450u, _esp0);
  ESP += 4; return;
}

/* FUN_10019970 @ 0x11cd9970 (482 bytes, 138 insns) */
void f_11cd9970(void) {
  FTRACE(0x11cd9970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd9970 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd9971 mov ebp, esp */
  EBP = (ESP);
  /* 11cd9973 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd9976 push esi */
  push32((uint32_t)(ESI));
  /* 11cd9977 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11cd997e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11cd9980 call 0x11ccb3c0 */
  push32(0x11cd9985u); f_11ccb3c0();
  /* 11cd9985 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9988 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cd998f jmp 0x11cd999a */
  goto L_11cd999a;
L_11cd9991:;
  /* 11cd9991 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd9994 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9997 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11cd999a:;
  /* 11cd999a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd999e jge 0x11cd9b40 */
  if ((C.sf==C.of)) goto L_11cd9b40;
  /* 11cd99a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd99a7 cmp dword ptr [ecx*4 + 0x11d00e20], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11d00e20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd99af je 0x11cd9aa6 */
  if (C.zf) goto L_11cd9aa6;
  /* 11cd99b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd99b8 mov eax, dword ptr [edx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11d00e20)));
  /* 11cd99bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd99c2 jmp 0x11cd99cd */
  goto L_11cd99cd;
L_11cd99c4:;
  /* 11cd99c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd99c7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd99ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd99cd:;
  /* 11cd99cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd99d0 mov eax, dword ptr [edx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11d00e20)));
  /* 11cd99d7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd99dc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd99df jae 0x11cd9a96 */
  if (!C.cf) goto L_11cd9a96;
  /* 11cd99e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd99e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11cd99ec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd99ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd99f1 jne 0x11cd9a91 */
  if (!C.zf) goto L_11cd9a91;
  /* 11cd99f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd99fa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd99fe jne 0x11cd9a39 */
  if (!C.zf) goto L_11cd9a39;
  /* 11cd9a00 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11cd9a02 call 0x11ccb3c0 */
  push32(0x11cd9a07u); f_11ccb3c0();
  /* 11cd9a07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9a0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9a0d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9a11 jne 0x11cd9a2f */
  if (!C.zf) goto L_11cd9a2f;
  /* 11cd9a13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9a16 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9a19 push edx */
  push32((uint32_t)(EDX));
  /* 11cd9a1a call dword ptr [0x11d012f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d012f8))), 0x11cd9a20u);
  /* 11cd9a20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9a23 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd9a26 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9a29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9a2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11cd9a2f:;
  /* 11cd9a2f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11cd9a31 call 0x11ccb460 */
  push32(0x11cd9a36u); f_11ccb460();
  /* 11cd9a36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd9a39:;
  /* 11cd9a39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9a3c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9a3f push eax */
  push32((uint32_t)(EAX));
  /* 11cd9a40 call dword ptr [0x11d013fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013fc))), 0x11cd9a46u);
  /* 11cd9a46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9a49 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11cd9a4d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd9a50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd9a52 je 0x11cd9a66 */
  if (C.zf) goto L_11cd9a66;
  /* 11cd9a54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9a57 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9a5a push eax */
  push32((uint32_t)(EAX));
  /* 11cd9a5b call dword ptr [0x11d01400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01400))), 0x11cd9a61u);
  /* 11cd9a61 jmp 0x11cd99c4 */
  goto L_11cd99c4;
L_11cd9a66:;
  /* 11cd9a66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9a69 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11cd9a6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd9a72 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cd9a75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd9a78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9a7b sub eax, dword ptr [edx*4 + 0x11d00e20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11d00e20))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd9a82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cd9a83 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11cd9a88 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cd9a8a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9a8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd9a8f jmp 0x11cd9a96 */
  goto L_11cd9a96;
L_11cd9a91:;
  /* 11cd9a91 jmp 0x11cd99c4 */
  goto L_11cd99c4;
L_11cd9a96:;
  /* 11cd9a96 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9a9a je 0x11cd9aa1 */
  if (C.zf) goto L_11cd9aa1;
  /* 11cd9a9c jmp 0x11cd9b40 */
  goto L_11cd9b40;
L_11cd9aa1:;
  /* 11cd9aa1 jmp 0x11cd9b3b */
  goto L_11cd9b3b;
L_11cd9aa6:;
  /* 11cd9aa6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11cd9aa8 push 0x11cfa4d0 */
  push32((uint32_t)(0x11cfa4d0u));
  /* 11cd9aad push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd9aaf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11cd9ab4 call 0x11ccb4c0 */
  push32(0x11cd9ab9u); f_11ccb4c0();
  /* 11cd9ab9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9abc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd9abf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9ac3 je 0x11cd9b39 */
  if (C.zf) goto L_11cd9b39;
  /* 11cd9ac5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd9ac8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9acb mov dword ptr [eax*4 + 0x11d00e20], ecx */
  w32((uint32_t)(EAX*4 + 0x11d00e20), (ECX));
  /* 11cd9ad2 mov edx, dword ptr [0x11d00f5c] */
  EDX = (r32((uint32_t)(0x11d00f5c)));
  /* 11cd9ad8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9adb mov dword ptr [0x11d00f5c], edx */
  w32((uint32_t)(0x11d00f5c), (EDX));
  /* 11cd9ae1 jmp 0x11cd9aec */
  goto L_11cd9aec;
L_11cd9ae3:;
  /* 11cd9ae3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9ae6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9ae9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd9aec:;
  /* 11cd9aec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd9aef mov edx, dword ptr [ecx*4 + 0x11d00e20] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d00e20)));
  /* 11cd9af6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9afc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9aff jae 0x11cd9b24 */
  if (!C.cf) goto L_11cd9b24;
  /* 11cd9b01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9b04 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11cd9b08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9b0b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11cd9b11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9b14 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11cd9b18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9b1b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11cd9b22 jmp 0x11cd9ae3 */
  goto L_11cd9ae3;
L_11cd9b24:;
  /* 11cd9b24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd9b27 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cd9b2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd9b2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd9b30 push edx */
  push32((uint32_t)(EDX));
  /* 11cd9b31 call 0x11cd9e80 */
  push32(0x11cd9b36u); f_11cd9e80();
  /* 11cd9b36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd9b39:;
  /* 11cd9b39 jmp 0x11cd9b40 */
  goto L_11cd9b40;
L_11cd9b3b:;
  /* 11cd9b3b jmp 0x11cd9991 */
  goto L_11cd9991;
L_11cd9b40:;
  /* 11cd9b40 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11cd9b42 call 0x11ccb460 */
  push32(0x11cd9b47u); f_11ccb460();
  /* 11cd9b47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9b4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd9b4d pop esi */
  ESI = (pop32());
  /* 11cd9b4e mov esp, ebp */
  ESP = (EBP);
  /* 11cd9b50 pop ebp */
  EBP = (pop32());
  /* 11cd9b51 ret  */
  ESPCHK(0x11cd9970u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11cd9b60 (183 bytes, 57 insns) */
void f_11cd9b60(void) {
  FTRACE(0x11cd9b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd9b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd9b61 mov ebp, esp */
  EBP = (ESP);
  /* 11cd9b63 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd9b64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9b67 cmp eax, dword ptr [0x11d00f5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d00f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9b6d jae 0x11cd9bfa */
  if (!C.cf) goto L_11cd9bfa;
  /* 11cd9b73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9b76 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cd9b79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9b7c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd9b7f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd9b82 mov eax, dword ptr [ecx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d00e20)));
  /* 11cd9b89 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9b8d jne 0x11cd9bfa */
  if (!C.zf) goto L_11cd9bfa;
  /* 11cd9b8f cmp dword ptr [0x11cff444], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff444))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9b96 jne 0x11cd9bda */
  if (!C.zf) goto L_11cd9bda;
  /* 11cd9b98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9b9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd9b9e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9ba2 je 0x11cd9bb2 */
  if (C.zf) goto L_11cd9bb2;
  /* 11cd9ba4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9ba8 je 0x11cd9bc0 */
  if (C.zf) goto L_11cd9bc0;
  /* 11cd9baa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9bae je 0x11cd9bce */
  if (C.zf) goto L_11cd9bce;
  /* 11cd9bb0 jmp 0x11cd9bda */
  goto L_11cd9bda;
L_11cd9bb2:;
  /* 11cd9bb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd9bb5 push edx */
  push32((uint32_t)(EDX));
  /* 11cd9bb6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11cd9bb8 call dword ptr [0x11d0132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0132c))), 0x11cd9bbeu);
  /* 11cd9bbe jmp 0x11cd9bda */
  goto L_11cd9bda;
L_11cd9bc0:;
  /* 11cd9bc0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd9bc3 push eax */
  push32((uint32_t)(EAX));
  /* 11cd9bc4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11cd9bc6 call dword ptr [0x11d0132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0132c))), 0x11cd9bccu);
  /* 11cd9bcc jmp 0x11cd9bda */
  goto L_11cd9bda;
L_11cd9bce:;
  /* 11cd9bce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd9bd1 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd9bd2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11cd9bd4 call dword ptr [0x11d0132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0132c))), 0x11cd9bdau);
L_11cd9bda:;
  /* 11cd9bda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9bdd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11cd9be0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9be3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd9be6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd9be9 mov ecx, dword ptr [edx*4 + 0x11d00e20] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11d00e20)));
  /* 11cd9bf0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd9bf3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11cd9bf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd9bf8 jmp 0x11cd9c13 */
  goto L_11cd9c13;
L_11cd9bfa:;
  /* 11cd9bfa call 0x11cd68e0 */
  push32(0x11cd9bffu); f_11cd68e0();
  /* 11cd9bff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11cd9c05 call 0x11cd68f0 */
  push32(0x11cd9c0au); f_11cd68f0();
  /* 11cd9c0a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11cd9c10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11cd9c13:;
  /* 11cd9c13 mov esp, ebp */
  ESP = (EBP);
  /* 11cd9c15 pop ebp */
  EBP = (pop32());
  /* 11cd9c16 ret  */
  ESPCHK(0x11cd9b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10019c20 @ 0x11cd9c20 (216 bytes, 63 insns) */
void f_11cd9c20(void) {
  FTRACE(0x11cd9c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd9c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd9c21 mov ebp, esp */
  EBP = (ESP);
  /* 11cd9c23 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd9c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9c27 cmp eax, dword ptr [0x11d00f5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d00f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9c2d jae 0x11cd9cdb */
  if (!C.cf) goto L_11cd9cdb;
  /* 11cd9c33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9c36 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cd9c39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9c3c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd9c3f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd9c42 mov eax, dword ptr [ecx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d00e20)));
  /* 11cd9c49 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11cd9c4e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd9c51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd9c53 je 0x11cd9cdb */
  if (C.zf) goto L_11cd9cdb;
  /* 11cd9c59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9c5c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11cd9c5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9c62 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd9c65 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd9c68 mov ecx, dword ptr [edx*4 + 0x11d00e20] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11d00e20)));
  /* 11cd9c6f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9c73 je 0x11cd9cdb */
  if (C.zf) goto L_11cd9cdb;
  /* 11cd9c75 cmp dword ptr [0x11cff444], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff444))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9c7c jne 0x11cd9cba */
  if (!C.zf) goto L_11cd9cba;
  /* 11cd9c7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9c81 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd9c84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9c88 je 0x11cd9c98 */
  if (C.zf) goto L_11cd9c98;
  /* 11cd9c8a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9c8e je 0x11cd9ca4 */
  if (C.zf) goto L_11cd9ca4;
  /* 11cd9c90 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9c94 je 0x11cd9cb0 */
  if (C.zf) goto L_11cd9cb0;
  /* 11cd9c96 jmp 0x11cd9cba */
  goto L_11cd9cba;
L_11cd9c98:;
  /* 11cd9c98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd9c9a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11cd9c9c call dword ptr [0x11d0132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0132c))), 0x11cd9ca2u);
  /* 11cd9ca2 jmp 0x11cd9cba */
  goto L_11cd9cba;
L_11cd9ca4:;
  /* 11cd9ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd9ca6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11cd9ca8 call dword ptr [0x11d0132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0132c))), 0x11cd9caeu);
  /* 11cd9cae jmp 0x11cd9cba */
  goto L_11cd9cba;
L_11cd9cb0:;
  /* 11cd9cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd9cb2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11cd9cb4 call dword ptr [0x11d0132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0132c))), 0x11cd9cbau);
L_11cd9cba:;
  /* 11cd9cba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9cbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd9cc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9cc3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd9cc6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd9cc9 mov edx, dword ptr [eax*4 + 0x11d00e20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d00e20)));
  /* 11cd9cd0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11cd9cd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd9cd9 jmp 0x11cd9cf4 */
  goto L_11cd9cf4;
L_11cd9cdb:;
  /* 11cd9cdb call 0x11cd68e0 */
  push32(0x11cd9ce0u); f_11cd68e0();
  /* 11cd9ce0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11cd9ce6 call 0x11cd68f0 */
  push32(0x11cd9cebu); f_11cd68f0();
  /* 11cd9ceb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11cd9cf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11cd9cf4:;
  /* 11cd9cf4 mov esp, ebp */
  ESP = (EBP);
  /* 11cd9cf6 pop ebp */
  EBP = (pop32());
  /* 11cd9cf7 ret  */
  ESPCHK(0x11cd9c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10019d00 @ 0x11cd9d00 (102 bytes, 30 insns) */
void f_11cd9d00(void) {
  FTRACE(0x11cd9d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd9d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd9d01 mov ebp, esp */
  EBP = (ESP);
  /* 11cd9d03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9d06 cmp eax, dword ptr [0x11d00f5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d00f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9d0c jae 0x11cd9d4b */
  if (!C.cf) goto L_11cd9d4b;
  /* 11cd9d0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9d11 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cd9d14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9d17 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd9d1a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd9d1d mov eax, dword ptr [ecx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d00e20)));
  /* 11cd9d24 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11cd9d29 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd9d2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd9d2e je 0x11cd9d4b */
  if (C.zf) goto L_11cd9d4b;
  /* 11cd9d30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9d33 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11cd9d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9d39 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd9d3c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd9d3f mov ecx, dword ptr [edx*4 + 0x11d00e20] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11d00e20)));
  /* 11cd9d46 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11cd9d49 jmp 0x11cd9d64 */
  goto L_11cd9d64;
L_11cd9d4b:;
  /* 11cd9d4b call 0x11cd68e0 */
  push32(0x11cd9d50u); f_11cd68e0();
  /* 11cd9d50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11cd9d56 call 0x11cd68f0 */
  push32(0x11cd9d5bu); f_11cd68f0();
  /* 11cd9d5b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11cd9d61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11cd9d64:;
  /* 11cd9d64 pop ebp */
  EBP = (pop32());
  /* 11cd9d65 ret  */
  ESPCHK(0x11cd9d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10019d70 @ 0x11cd9d70 (260 bytes, 83 insns) */
void f_11cd9d70(void) {
  FTRACE(0x11cd9d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd9d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd9d71 mov ebp, esp */
  EBP = (ESP);
  /* 11cd9d73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd9d76 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cd9d7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd9d7d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd9d80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd9d82 je 0x11cd9d8d */
  if (C.zf) goto L_11cd9d8d;
  /* 11cd9d84 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11cd9d87 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11cd9d8a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11cd9d8d:;
  /* 11cd9d8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd9d90 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd9d96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd9d98 je 0x11cd9da2 */
  if (C.zf) goto L_11cd9da2;
  /* 11cd9d9a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11cd9d9d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11cd9d9f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11cd9da2:;
  /* 11cd9da2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd9da5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd9dab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd9dad je 0x11cd9db8 */
  if (C.zf) goto L_11cd9db8;
  /* 11cd9daf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11cd9db2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11cd9db5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11cd9db8:;
  /* 11cd9db8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9dbb push eax */
  push32((uint32_t)(EAX));
  /* 11cd9dbc call dword ptr [0x11d013a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013a0))), 0x11cd9dc2u);
  /* 11cd9dc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd9dc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9dc9 jne 0x11cd9de2 */
  if (!C.zf) goto L_11cd9de2;
  /* 11cd9dcb call dword ptr [0x11d013f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f4))), 0x11cd9dd1u);
  /* 11cd9dd1 push eax */
  push32((uint32_t)(EAX));
  /* 11cd9dd2 call 0x11cd6840 */
  push32(0x11cd9dd7u); f_11cd6840();
  /* 11cd9dd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9dda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd9ddd jmp 0x11cd9e70 */
  goto L_11cd9e70;
L_11cd9de2:;
  /* 11cd9de2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9de6 jne 0x11cd9df3 */
  if (!C.zf) goto L_11cd9df3;
  /* 11cd9de8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11cd9deb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11cd9dee mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11cd9df1 jmp 0x11cd9e02 */
  goto L_11cd9e02;
L_11cd9df3:;
  /* 11cd9df3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9df7 jne 0x11cd9e02 */
  if (!C.zf) goto L_11cd9e02;
  /* 11cd9df9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11cd9dfc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11cd9dff mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11cd9e02:;
  /* 11cd9e02 call 0x11cd9970 */
  push32(0x11cd9e07u); f_11cd9970();
  /* 11cd9e07 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd9e0a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9e0e jne 0x11cd9e2b */
  if (!C.zf) goto L_11cd9e2b;
  /* 11cd9e10 call 0x11cd68e0 */
  push32(0x11cd9e15u); f_11cd68e0();
  /* 11cd9e15 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11cd9e1b call 0x11cd68f0 */
  push32(0x11cd9e20u); f_11cd68f0();
  /* 11cd9e20 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11cd9e26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd9e29 jmp 0x11cd9e70 */
  goto L_11cd9e70;
L_11cd9e2b:;
  /* 11cd9e2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9e2e push eax */
  push32((uint32_t)(EAX));
  /* 11cd9e2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd9e32 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd9e33 call 0x11cd9b60 */
  push32(0x11cd9e38u); f_11cd9b60();
  /* 11cd9e38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9e3b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11cd9e3e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11cd9e41 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11cd9e44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd9e47 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd9e4a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd9e4d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd9e50 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd9e53 mov edx, dword ptr [eax*4 + 0x11d00e20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d00e20)));
  /* 11cd9e5a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11cd9e5d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11cd9e61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd9e64 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd9e65 call 0x11cd9f10 */
  push32(0x11cd9e6au); f_11cd9f10();
  /* 11cd9e6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9e6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11cd9e70:;
  /* 11cd9e70 mov esp, ebp */
  ESP = (EBP);
  /* 11cd9e72 pop ebp */
  EBP = (pop32());
  /* 11cd9e73 ret  */
  ESPCHK(0x11cd9d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10019e80 @ 0x11cd9e80 (134 bytes, 44 insns) */
void f_11cd9e80(void) {
  FTRACE(0x11cd9e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd9e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd9e81 mov ebp, esp */
  EBP = (ESP);
  /* 11cd9e83 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd9e84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9e87 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd9e8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9e8d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd9e90 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd9e93 mov edx, dword ptr [eax*4 + 0x11d00e20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d00e20)));
  /* 11cd9e9a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9e9c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd9e9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9ea2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9ea6 jne 0x11cd9ee1 */
  if (!C.zf) goto L_11cd9ee1;
  /* 11cd9ea8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11cd9eaa call 0x11ccb3c0 */
  push32(0x11cd9eafu); f_11ccb3c0();
  /* 11cd9eaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9eb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9eb5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9eb9 jne 0x11cd9ed7 */
  if (!C.zf) goto L_11cd9ed7;
  /* 11cd9ebb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9ebe add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9ec1 push edx */
  push32((uint32_t)(EDX));
  /* 11cd9ec2 call dword ptr [0x11d012f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d012f8))), 0x11cd9ec8u);
  /* 11cd9ec8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9ecb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd9ece add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9ed1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9ed4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11cd9ed7:;
  /* 11cd9ed7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11cd9ed9 call 0x11ccb460 */
  push32(0x11cd9edeu); f_11ccb460();
  /* 11cd9ede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd9ee1:;
  /* 11cd9ee1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9ee4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd9ee7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9eea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd9eed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd9ef0 mov edx, dword ptr [eax*4 + 0x11d00e20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d00e20)));
  /* 11cd9ef7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11cd9efb push eax */
  push32((uint32_t)(EAX));
  /* 11cd9efc call dword ptr [0x11d013fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013fc))), 0x11cd9f02u);
  /* 11cd9f02 mov esp, ebp */
  ESP = (EBP);
  /* 11cd9f04 pop ebp */
  EBP = (pop32());
  /* 11cd9f05 ret  */
  ESPCHK(0x11cd9e80u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11cd9f10 (38 bytes, 13 insns) */
void f_11cd9f10(void) {
  FTRACE(0x11cd9f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd9f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd9f11 mov ebp, esp */
  EBP = (ESP);
  /* 11cd9f13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9f16 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd9f19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd9f1c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd9f1f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd9f22 mov edx, dword ptr [eax*4 + 0x11d00e20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d00e20)));
  /* 11cd9f29 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11cd9f2d push eax */
  push32((uint32_t)(EAX));
  /* 11cd9f2e call dword ptr [0x11d01400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01400))), 0x11cd9f34u);
  /* 11cd9f34 pop ebp */
  EBP = (pop32());
  /* 11cd9f35 ret  */
  ESPCHK(0x11cd9f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10019f40 @ 0x11cd9f40 (218 bytes, 63 insns) */
void f_11cd9f40(void) {
  FTRACE(0x11cd9f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd9f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd9f41 mov ebp, esp */
  EBP = (ESP);
  /* 11cd9f43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd9f46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd9f4d push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd9f4f call 0x11ccb3c0 */
  push32(0x11cd9f54u); f_11ccb3c0();
  /* 11cd9f54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9f57 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11cd9f5e jmp 0x11cd9f69 */
  goto L_11cd9f69;
L_11cd9f60:;
  /* 11cd9f60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd9f63 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9f66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11cd9f69:;
  /* 11cd9f69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd9f6c cmp ecx, dword ptr [0x11d00de0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d00de0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9f72 jge 0x11cda009 */
  if ((C.sf==C.of)) goto L_11cda009;
  /* 11cd9f78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd9f7b mov eax, dword ptr [0x11cffa88] */
  EAX = (r32((uint32_t)(0x11cffa88)));
  /* 11cd9f80 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9f84 je 0x11cda004 */
  if (C.zf) goto L_11cda004;
  /* 11cd9f86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd9f89 mov edx, dword ptr [0x11cffa88] */
  EDX = (r32((uint32_t)(0x11cffa88)));
  /* 11cd9f8f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11cd9f92 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cd9f95 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd9f9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd9f9d je 0x11cd9fc1 */
  if (C.zf) goto L_11cd9fc1;
  /* 11cd9f9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd9fa2 mov eax, dword ptr [0x11cffa88] */
  EAX = (r32((uint32_t)(0x11cffa88)));
  /* 11cd9fa7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11cd9faa push ecx */
  push32((uint32_t)(ECX));
  /* 11cd9fab call 0x11cdcdb0 */
  push32(0x11cd9fb0u); f_11cdcdb0();
  /* 11cd9fb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9fb3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9fb6 je 0x11cd9fc1 */
  if (C.zf) goto L_11cd9fc1;
  /* 11cd9fb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd9fbb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9fbe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd9fc1:;
  /* 11cd9fc1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd9fc5 jl 0x11cda004 */
  if ((C.sf!=C.of)) goto L_11cda004;
  /* 11cd9fc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd9fca mov ecx, dword ptr [0x11cffa88] */
  ECX = (r32((uint32_t)(0x11cffa88)));
  /* 11cd9fd0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11cd9fd3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9fd6 push edx */
  push32((uint32_t)(EDX));
  /* 11cd9fd7 call dword ptr [0x11d013f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f8))), 0x11cd9fddu);
  /* 11cd9fdd push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd9fdf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd9fe2 mov ecx, dword ptr [0x11cffa88] */
  ECX = (r32((uint32_t)(0x11cffa88)));
  /* 11cd9fe8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11cd9feb push edx */
  push32((uint32_t)(EDX));
  /* 11cd9fec call 0x11ccbf50 */
  push32(0x11cd9ff1u); f_11ccbf50();
  /* 11cd9ff1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd9ff4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd9ff7 mov ecx, dword ptr [0x11cffa88] */
  ECX = (r32((uint32_t)(0x11cffa88)));
  /* 11cd9ffd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11cda004:;
  /* 11cda004 jmp 0x11cd9f60 */
  goto L_11cd9f60;
L_11cda009:;
  /* 11cda009 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cda00b call 0x11ccb460 */
  push32(0x11cda010u); f_11ccb460();
  /* 11cda010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda013 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda016 mov esp, ebp */
  ESP = (EBP);
  /* 11cda018 pop ebp */
  EBP = (pop32());
  /* 11cda019 ret  */
  ESPCHK(0x11cd9f40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a020 @ 0x11cda020 (68 bytes, 26 insns) */
void f_11cda020(void) {
  FTRACE(0x11cda020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cda020 push ebp */
  push32((uint32_t)(EBP));
  /* 11cda021 mov ebp, esp */
  EBP = (ESP);
  /* 11cda023 push ecx */
  push32((uint32_t)(ECX));
  /* 11cda024 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda028 jne 0x11cda036 */
  if (!C.zf) goto L_11cda036;
  /* 11cda02a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cda02c call 0x11cda190 */
  push32(0x11cda031u); f_11cda190();
  /* 11cda031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda034 jmp 0x11cda060 */
  goto L_11cda060;
L_11cda036:;
  /* 11cda036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda039 push eax */
  push32((uint32_t)(EAX));
  /* 11cda03a call 0x11cd5a00 */
  push32(0x11cda03fu); f_11cd5a00();
  /* 11cda03f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda042 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda045 push ecx */
  push32((uint32_t)(ECX));
  /* 11cda046 call 0x11cda070 */
  push32(0x11cda04bu); f_11cda070();
  /* 11cda04b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda04e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cda051 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda054 push edx */
  push32((uint32_t)(EDX));
  /* 11cda055 call 0x11cd5a70 */
  push32(0x11cda05au); f_11cd5a70();
  /* 11cda05a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda05d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11cda060:;
  /* 11cda060 mov esp, ebp */
  ESP = (EBP);
  /* 11cda062 pop ebp */
  EBP = (pop32());
  /* 11cda063 ret  */
  ESPCHK(0x11cda020u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a070 @ 0x11cda070 (65 bytes, 26 insns) */
void f_11cda070(void) {
  FTRACE(0x11cda070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cda070 push ebp */
  push32((uint32_t)(EBP));
  /* 11cda071 mov ebp, esp */
  EBP = (ESP);
  /* 11cda073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda076 push eax */
  push32((uint32_t)(EAX));
  /* 11cda077 call 0x11cda0c0 */
  push32(0x11cda07cu); f_11cda0c0();
  /* 11cda07c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda07f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cda081 je 0x11cda088 */
  if (C.zf) goto L_11cda088;
  /* 11cda083 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cda086 jmp 0x11cda0af */
  goto L_11cda0af;
L_11cda088:;
  /* 11cda088 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda08b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cda08e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11cda094 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cda096 je 0x11cda0ad */
  if (C.zf) goto L_11cda0ad;
  /* 11cda098 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda09b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cda09e push ecx */
  push32((uint32_t)(ECX));
  /* 11cda09f call 0x11cdcf00 */
  push32(0x11cda0a4u); f_11cdcf00();
  /* 11cda0a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda0a7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cda0a9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cda0ab jmp 0x11cda0af */
  goto L_11cda0af;
L_11cda0ad:;
  /* 11cda0ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cda0af:;
  /* 11cda0af pop ebp */
  EBP = (pop32());
  /* 11cda0b0 ret  */
  ESPCHK(0x11cda070u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a0c0 @ 0x11cda0c0 (183 bytes, 62 insns) */
void f_11cda0c0(void) {
  FTRACE(0x11cda0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cda0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cda0c1 mov ebp, esp */
  EBP = (ESP);
  /* 11cda0c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cda0c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cda0cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda0d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cda0d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cda0d6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cda0d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11cda0dc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda0df jne 0x11cda15b */
  if (!C.zf) goto L_11cda15b;
  /* 11cda0e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cda0e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cda0e7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11cda0ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cda0ef je 0x11cda15b */
  if (C.zf) goto L_11cda15b;
  /* 11cda0f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cda0f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cda0f7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11cda0f9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cda0fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda0ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda103 jle 0x11cda15b */
  if ((C.zf||C.sf!=C.of)) goto L_11cda15b;
  /* 11cda105 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda108 push edx */
  push32((uint32_t)(EDX));
  /* 11cda109 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cda10c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cda10f push ecx */
  push32((uint32_t)(ECX));
  /* 11cda110 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cda113 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11cda116 push eax */
  push32((uint32_t)(EAX));
  /* 11cda117 call 0x11cd5490 */
  push32(0x11cda11cu); f_11cd5490();
  /* 11cda11c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda11f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda122 jne 0x11cda145 */
  if (!C.zf) goto L_11cda145;
  /* 11cda124 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cda127 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cda12a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11cda130 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cda132 je 0x11cda143 */
  if (C.zf) goto L_11cda143;
  /* 11cda134 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cda137 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cda13a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11cda13d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cda140 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11cda143:;
  /* 11cda143 jmp 0x11cda15b */
  goto L_11cda15b;
L_11cda145:;
  /* 11cda145 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cda148 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cda14b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11cda14e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cda151 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11cda154 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11cda15b:;
  /* 11cda15b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cda15e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cda161 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cda164 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cda166 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cda169 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11cda170 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda173 mov esp, ebp */
  ESP = (EBP);
  /* 11cda175 pop ebp */
  EBP = (pop32());
  /* 11cda176 ret  */
  ESPCHK(0x11cda0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a180 @ 0x11cda180 (15 bytes, 7 insns) */
void f_11cda180(void) {
  FTRACE(0x11cda180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cda180 push ebp */
  push32((uint32_t)(EBP));
  /* 11cda181 mov ebp, esp */
  EBP = (ESP);
  /* 11cda183 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda185 call 0x11cda190 */
  push32(0x11cda18au); f_11cda190();
  /* 11cda18a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda18d pop ebp */
  EBP = (pop32());
  /* 11cda18e ret  */
  ESPCHK(0x11cda180u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a190 @ 0x11cda190 (319 bytes, 94 insns) */
void f_11cda190(void) {
  FTRACE(0x11cda190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cda190 push ebp */
  push32((uint32_t)(EBP));
  /* 11cda191 mov ebp, esp */
  EBP = (ESP);
  /* 11cda193 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cda196 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cda19d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cda1a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cda1a6 call 0x11ccb3c0 */
  push32(0x11cda1abu); f_11ccb3c0();
  /* 11cda1ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda1ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cda1b5 jmp 0x11cda1c0 */
  goto L_11cda1c0;
L_11cda1b7:;
  /* 11cda1b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda1ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda1bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11cda1c0:;
  /* 11cda1c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda1c3 cmp ecx, dword ptr [0x11d00de0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d00de0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda1c9 jge 0x11cda2b3 */
  if ((C.sf==C.of)) goto L_11cda2b3;
  /* 11cda1cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda1d2 mov eax, dword ptr [0x11cffa88] */
  EAX = (r32((uint32_t)(0x11cffa88)));
  /* 11cda1d7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda1db je 0x11cda2ae */
  if (C.zf) goto L_11cda2ae;
  /* 11cda1e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda1e4 mov edx, dword ptr [0x11cffa88] */
  EDX = (r32((uint32_t)(0x11cffa88)));
  /* 11cda1ea mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11cda1ed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cda1f0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11cda1f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cda1f8 je 0x11cda2ae */
  if (C.zf) goto L_11cda2ae;
  /* 11cda1fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda201 mov eax, dword ptr [0x11cffa88] */
  EAX = (r32((uint32_t)(0x11cffa88)));
  /* 11cda206 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11cda209 push ecx */
  push32((uint32_t)(ECX));
  /* 11cda20a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda20d push edx */
  push32((uint32_t)(EDX));
  /* 11cda20e call 0x11cd5a40 */
  push32(0x11cda213u); f_11cd5a40();
  /* 11cda213 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda216 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda219 mov ecx, dword ptr [0x11cffa88] */
  ECX = (r32((uint32_t)(0x11cffa88)));
  /* 11cda21f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11cda222 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11cda225 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11cda22a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cda22c je 0x11cda295 */
  if (C.zf) goto L_11cda295;
  /* 11cda22e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda232 jne 0x11cda259 */
  if (!C.zf) goto L_11cda259;
  /* 11cda234 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda237 mov edx, dword ptr [0x11cffa88] */
  EDX = (r32((uint32_t)(0x11cffa88)));
  /* 11cda23d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11cda240 push eax */
  push32((uint32_t)(EAX));
  /* 11cda241 call 0x11cda070 */
  push32(0x11cda246u); f_11cda070();
  /* 11cda246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda249 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda24c je 0x11cda257 */
  if (C.zf) goto L_11cda257;
  /* 11cda24e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda251 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda254 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cda257:;
  /* 11cda257 jmp 0x11cda295 */
  goto L_11cda295;
L_11cda259:;
  /* 11cda259 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda25d jne 0x11cda295 */
  if (!C.zf) goto L_11cda295;
  /* 11cda25f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda262 mov eax, dword ptr [0x11cffa88] */
  EAX = (r32((uint32_t)(0x11cffa88)));
  /* 11cda267 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11cda26a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cda26d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11cda270 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cda272 je 0x11cda295 */
  if (C.zf) goto L_11cda295;
  /* 11cda274 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda277 mov ecx, dword ptr [0x11cffa88] */
  ECX = (r32((uint32_t)(0x11cffa88)));
  /* 11cda27d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11cda280 push edx */
  push32((uint32_t)(EDX));
  /* 11cda281 call 0x11cda070 */
  push32(0x11cda286u); f_11cda070();
  /* 11cda286 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda289 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda28c jne 0x11cda295 */
  if (!C.zf) goto L_11cda295;
  /* 11cda28e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11cda295:;
  /* 11cda295 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda298 mov ecx, dword ptr [0x11cffa88] */
  ECX = (r32((uint32_t)(0x11cffa88)));
  /* 11cda29e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11cda2a1 push edx */
  push32((uint32_t)(EDX));
  /* 11cda2a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda2a5 push eax */
  push32((uint32_t)(EAX));
  /* 11cda2a6 call 0x11cd5ab0 */
  push32(0x11cda2abu); f_11cd5ab0();
  /* 11cda2ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cda2ae:;
  /* 11cda2ae jmp 0x11cda1b7 */
  goto L_11cda1b7;
L_11cda2b3:;
  /* 11cda2b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cda2b5 call 0x11ccb460 */
  push32(0x11cda2bau); f_11ccb460();
  /* 11cda2ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda2bd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda2c1 jne 0x11cda2c8 */
  if (!C.zf) goto L_11cda2c8;
  /* 11cda2c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda2c6 jmp 0x11cda2cb */
  goto L_11cda2cb;
L_11cda2c8:;
  /* 11cda2c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11cda2cb:;
  /* 11cda2cb mov esp, ebp */
  ESP = (EBP);
  /* 11cda2cd pop ebp */
  EBP = (pop32());
  /* 11cda2ce ret  */
  ESPCHK(0x11cda190u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a2d0 @ 0x11cda2d0 (62 bytes, 21 insns) */
void f_11cda2d0(void) {
  FTRACE(0x11cda2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cda2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cda2d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cda2d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cda2d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda2d9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cda2dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cda2df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cda2e2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cda2e5 add edx, 0x3fe */
  { uint32_t _a=(EDX),_b=(0x3feu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda2eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cda2ee mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11cda2f1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cda2f6 and eax, 0x800f */
  { uint32_t _r=(EAX)&(0x800fu); EAX = (_r); fl_logic(_r,32); }
  /* 11cda2fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda2fe shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11cda301 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11cda303 mov word ptr [ebp - 6], ax */
  w16((uint32_t)(EBP + -0x6), (AX));
  /* 11cda307 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 11cda30a mov esp, ebp */
  ESP = (EBP);
  /* 11cda30c pop ebp */
  EBP = (pop32());
  /* 11cda30d ret  */
  ESPCHK(0x11cda2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a310 @ 0x11cda310 (45 bytes, 15 insns) */
void f_11cda310(void) {
  FTRACE(0x11cda310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cda310 push ebp */
  push32((uint32_t)(EBP));
  /* 11cda311 mov ebp, esp */
  EBP = (ESP);
  /* 11cda313 push ecx */
  push32((uint32_t)(ECX));
  /* 11cda314 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11cda317 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cda31c and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11cda321 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11cda324 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11cda328 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cda32c sub cx, 0x3fe */
  { uint32_t _a=(CX),_b=(0x3feu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11cda331 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11cda335 movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11cda339 mov esp, ebp */
  ESP = (EBP);
  /* 11cda33b pop ebp */
  EBP = (pop32());
  /* 11cda33c ret  */
  ESPCHK(0x11cda310u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a340 @ 0x11cda340 (51 bytes, 18 insns) */
void f_11cda340(void) {
  FTRACE(0x11cda340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cda340 push ebp */
  push32((uint32_t)(EBP));
  /* 11cda341 mov ebp, esp */
  EBP = (ESP);
  /* 11cda343 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11cda346 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cda34b and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11cda350 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11cda353 movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11cda356 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cda359 lea eax, [ecx + edx - 0x3fe] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x3fe));
  /* 11cda360 push eax */
  push32((uint32_t)(EAX));
  /* 11cda361 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cda364 push ecx */
  push32((uint32_t)(ECX));
  /* 11cda365 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda368 push edx */
  push32((uint32_t)(EDX));
  /* 11cda369 call 0x11cda2d0 */
  push32(0x11cda36eu); f_11cda2d0();
  /* 11cda36e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda371 pop ebp */
  EBP = (pop32());
  /* 11cda372 ret  */
  ESPCHK(0x11cda340u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a380 @ 0x11cda380 (52 bytes, 18 insns) */
void f_11cda380(void) {
  FTRACE(0x11cda380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cda380 push ebp */
  push32((uint32_t)(EBP));
  /* 11cda381 mov ebp, esp */
  EBP = (ESP);
  /* 11cda383 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cda386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda389 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cda38c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cda38f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cda392 mov edx, dword ptr [ebp + 0xe] */
  EDX = (r32((uint32_t)(EBP + 0xe)));
  /* 11cda395 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cda39b and edx, 0x800f */
  { uint32_t _r=(EDX)&(0x800fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cda3a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cda3a4 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11cda3a7 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cda3a9 mov word ptr [ebp - 2], dx */
  w16((uint32_t)(EBP + -0x2), (DX));
  /* 11cda3ad fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11cda3b0 mov esp, ebp */
  ESP = (EBP);
  /* 11cda3b2 pop ebp */
  EBP = (pop32());
  /* 11cda3b3 ret  */
  ESPCHK(0x11cda380u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a3c0 @ 0x11cda3c0 (124 bytes, 37 insns) */
void f_11cda3c0(void) {
  FTRACE(0x11cda3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cda3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cda3c1 mov ebp, esp */
  EBP = (ESP);
  /* 11cda3c3 cmp dword ptr [ebp + 0xc], 0x7ff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda3ca jne 0x11cda3d9 */
  if (!C.zf) goto L_11cda3d9;
  /* 11cda3cc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda3d0 jne 0x11cda3d9 */
  if (!C.zf) goto L_11cda3d9;
  /* 11cda3d2 mov eax, 1 */
  EAX = (0x1u);
  /* 11cda3d7 jmp 0x11cda43a */
  goto L_11cda43a;
L_11cda3d9:;
  /* 11cda3d9 cmp dword ptr [ebp + 0xc], 0xfff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda3e0 jne 0x11cda3ef */
  if (!C.zf) goto L_11cda3ef;
  /* 11cda3e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda3e6 jne 0x11cda3ef */
  if (!C.zf) goto L_11cda3ef;
  /* 11cda3e8 mov eax, 2 */
  EAX = (0x2u);
  /* 11cda3ed jmp 0x11cda43a */
  goto L_11cda43a;
L_11cda3ef:;
  /* 11cda3ef mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11cda3f2 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cda3f7 and eax, 0x7ff8 */
  { uint32_t _r=(EAX)&(0x7ff8u); EAX = (_r); fl_logic(_r,32); }
  /* 11cda3fc cmp eax, 0x7ff8 */
  { uint32_t _a=(EAX),_b=(0x7ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda401 jne 0x11cda40a */
  if (!C.zf) goto L_11cda40a;
  /* 11cda403 mov eax, 3 */
  EAX = (0x3u);
  /* 11cda408 jmp 0x11cda43a */
  goto L_11cda43a;
L_11cda40a:;
  /* 11cda40a mov ecx, dword ptr [ebp + 0xe] */
  ECX = (r32((uint32_t)(EBP + 0xe)));
  /* 11cda40d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cda413 and ecx, 0x7ff8 */
  { uint32_t _r=(ECX)&(0x7ff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11cda419 cmp ecx, 0x7ff0 */
  { uint32_t _a=(ECX),_b=(0x7ff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda41f jne 0x11cda438 */
  if (!C.zf) goto L_11cda438;
  /* 11cda421 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cda424 shl edx, 0xd */
  EDX = (sh_shl((uint32_t)(EDX), (0xdu)&0x1f, 32));
  /* 11cda427 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cda429 jne 0x11cda431 */
  if (!C.zf) goto L_11cda431;
  /* 11cda42b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda42f je 0x11cda438 */
  if (C.zf) goto L_11cda438;
L_11cda431:;
  /* 11cda431 mov eax, 4 */
  EAX = (0x4u);
  /* 11cda436 jmp 0x11cda43a */
  goto L_11cda43a;
L_11cda438:;
  /* 11cda438 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cda43a:;
  /* 11cda43a pop ebp */
  EBP = (pop32());
  /* 11cda43b ret  */
  ESPCHK(0x11cda3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a440 @ 0x11cda440 (313 bytes, 95 insns) */
void f_11cda440(void) {
  FTRACE(0x11cda440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cda440 push ebp */
  push32((uint32_t)(EBP));
  /* 11cda441 mov ebp, esp */
  EBP = (ESP);
  /* 11cda443 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cda446 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 11cda449 fcomp qword ptr [0x11cf9788] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11cf9788)));
  (void)fpu_pop();
  /* 11cda44f fnstsw ax */
  AX = fpu_status();
  /* 11cda451 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11cda454 je 0x11cda470 */
  if (C.zf) goto L_11cda470;
  /* 11cda456 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cda45d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cda464 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cda46b jmp 0x11cda56a */
  goto L_11cda56a;
L_11cda470:;
  /* 11cda470 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11cda473 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cda478 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11cda47d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cda47f jne 0x11cda539 */
  if (!C.zf) goto L_11cda539;
  /* 11cda485 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cda488 shl ecx, 0xc */
  ECX = (sh_shl((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11cda48b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cda48d jne 0x11cda499 */
  if (!C.zf) goto L_11cda499;
  /* 11cda48f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda493 je 0x11cda539 */
  if (C.zf) goto L_11cda539;
L_11cda499:;
  /* 11cda499 mov dword ptr [ebp - 4], 0xfffffc03 */
  w32((uint32_t)(EBP + -0x4), (0xfffffc03u));
  /* 11cda4a0 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 11cda4a3 fcomp qword ptr [0x11cf9788] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11cf9788)));
  (void)fpu_pop();
  /* 11cda4a9 fnstsw ax */
  AX = fpu_status();
  /* 11cda4ab test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11cda4ae je 0x11cda4b9 */
  if (C.zf) goto L_11cda4b9;
  /* 11cda4b0 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11cda4b7 jmp 0x11cda4c0 */
  goto L_11cda4c0;
L_11cda4b9:;
  /* 11cda4b9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11cda4c0:;
  /* 11cda4c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cda4c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11cda4c6:;
  /* 11cda4c6 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11cda4c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cda4ce and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11cda4d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cda4d3 jne 0x11cda505 */
  if (!C.zf) goto L_11cda505;
  /* 11cda4d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cda4d8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11cda4da mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11cda4dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda4e0 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11cda4e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cda4e8 je 0x11cda4f2 */
  if (C.zf) goto L_11cda4f2;
  /* 11cda4ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cda4ed or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11cda4ef mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11cda4f2:;
  /* 11cda4f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda4f5 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11cda4f7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11cda4fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda4fd sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cda500 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cda503 jmp 0x11cda4c6 */
  goto L_11cda4c6;
L_11cda505:;
  /* 11cda505 mov ax, word ptr [ebp + 0xe] */
  AX = (r16((uint32_t)(EBP + 0xe)));
  /* 11cda509 and ax, 0xffef */
  { uint32_t _r=(AX)&(0xffefu); AX = (_r); fl_logic(_r,16); }
  /* 11cda50d mov word ptr [ebp + 0xe], ax */
  w16((uint32_t)(EBP + 0xe), (AX));
  /* 11cda511 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda515 je 0x11cda522 */
  if (C.zf) goto L_11cda522;
  /* 11cda517 mov cx, word ptr [ebp + 0xe] */
  CX = (r16((uint32_t)(EBP + 0xe)));
  /* 11cda51b or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11cda51e mov word ptr [ebp + 0xe], cx */
  w16((uint32_t)(EBP + 0xe), (CX));
L_11cda522:;
  /* 11cda522 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cda524 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cda527 push edx */
  push32((uint32_t)(EDX));
  /* 11cda528 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda52b push eax */
  push32((uint32_t)(EAX));
  /* 11cda52c call 0x11cda2d0 */
  push32(0x11cda531u); f_11cda2d0();
  /* 11cda531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda534 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 11cda537 jmp 0x11cda56a */
  goto L_11cda56a;
L_11cda539:;
  /* 11cda539 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cda53b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cda53e push ecx */
  push32((uint32_t)(ECX));
  /* 11cda53f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda542 push edx */
  push32((uint32_t)(EDX));
  /* 11cda543 call 0x11cda2d0 */
  push32(0x11cda548u); f_11cda2d0();
  /* 11cda548 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda54b fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 11cda54e mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11cda551 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cda556 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11cda55b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11cda55e movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11cda561 sub ecx, 0x3fe */
  { uint32_t _a=(ECX),_b=(0x3feu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cda567 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cda56a:;
  /* 11cda56a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cda56d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda570 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11cda572 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 11cda575 mov esp, ebp */
  ESP = (EBP);
  /* 11cda577 pop ebp */
  EBP = (pop32());
  /* 11cda578 ret  */
  ESPCHK(0x11cda440u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11cda580 (219 bytes, 64 insns) */
void f_11cda580(void) {
  FTRACE(0x11cda580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cda580 push ebp */
  push32((uint32_t)(EBP));
  /* 11cda581 mov ebp, esp */
  EBP = (ESP);
  /* 11cda583 push ecx */
  push32((uint32_t)(ECX));
  /* 11cda584 cmp dword ptr [0x11cff670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda58b je 0x11cda621 */
  if (C.zf) goto L_11cda621;
  /* 11cda591 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11cda593 push 0x11cfa4dc */
  push32((uint32_t)(0x11cfa4dcu));
  /* 11cda598 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cda59a push 0xac */
  push32((uint32_t)(0xacu));
  /* 11cda59f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda5a1 call 0x11ccb8d0 */
  push32(0x11cda5a6u); f_11ccb8d0();
  /* 11cda5a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda5a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cda5ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda5b0 jne 0x11cda5bc */
  if (!C.zf) goto L_11cda5bc;
  /* 11cda5b2 mov eax, 1 */
  EAX = (0x1u);
  /* 11cda5b7 jmp 0x11cda657 */
  goto L_11cda657;
L_11cda5bc:;
  /* 11cda5bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda5bf push eax */
  push32((uint32_t)(EAX));
  /* 11cda5c0 call 0x11cda660 */
  push32(0x11cda5c5u); f_11cda660();
  /* 11cda5c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda5c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cda5ca je 0x11cda5ed */
  if (C.zf) goto L_11cda5ed;
  /* 11cda5cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda5cf push ecx */
  push32((uint32_t)(ECX));
  /* 11cda5d0 call 0x11cdabf0 */
  push32(0x11cda5d5u); f_11cdabf0();
  /* 11cda5d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda5d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cda5da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda5dd push edx */
  push32((uint32_t)(EDX));
  /* 11cda5de call 0x11ccbf50 */
  push32(0x11cda5e3u); f_11ccbf50();
  /* 11cda5e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda5e6 mov eax, 1 */
  EAX = (0x1u);
  /* 11cda5eb jmp 0x11cda657 */
  goto L_11cda657;
L_11cda5ed:;
  /* 11cda5ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda5f0 mov dword ptr [0x11cfe1c8], eax */
  w32((uint32_t)(0x11cfe1c8), (EAX));
  /* 11cda5f5 mov ecx, dword ptr [0x11cff680] */
  ECX = (r32((uint32_t)(0x11cff680)));
  /* 11cda5fb push ecx */
  push32((uint32_t)(ECX));
  /* 11cda5fc call 0x11cdabf0 */
  push32(0x11cda601u); f_11cdabf0();
  /* 11cda601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda604 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cda606 mov edx, dword ptr [0x11cff680] */
  EDX = (r32((uint32_t)(0x11cff680)));
  /* 11cda60c push edx */
  push32((uint32_t)(EDX));
  /* 11cda60d call 0x11ccbf50 */
  push32(0x11cda612u); f_11ccbf50();
  /* 11cda612 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda615 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda618 mov dword ptr [0x11cff680], eax */
  w32((uint32_t)(0x11cff680), (EAX));
  /* 11cda61d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cda61f jmp 0x11cda657 */
  goto L_11cda657;
L_11cda621:;
  /* 11cda621 mov dword ptr [0x11cfe1c8], 0x11cfe1d0 */
  w32((uint32_t)(0x11cfe1c8), (0x11cfe1d0u));
  /* 11cda62b mov ecx, dword ptr [0x11cff680] */
  ECX = (r32((uint32_t)(0x11cff680)));
  /* 11cda631 push ecx */
  push32((uint32_t)(ECX));
  /* 11cda632 call 0x11cdabf0 */
  push32(0x11cda637u); f_11cdabf0();
  /* 11cda637 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda63a push 2 */
  push32((uint32_t)(0x2u));
  /* 11cda63c mov edx, dword ptr [0x11cff680] */
  EDX = (r32((uint32_t)(0x11cff680)));
  /* 11cda642 push edx */
  push32((uint32_t)(EDX));
  /* 11cda643 call 0x11ccbf50 */
  push32(0x11cda648u); f_11ccbf50();
  /* 11cda648 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda64b mov dword ptr [0x11cff680], 0 */
  w32((uint32_t)(0x11cff680), (0x0u));
  /* 11cda655 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cda657:;
  /* 11cda657 mov esp, ebp */
  ESP = (EBP);
  /* 11cda659 pop ebp */
  EBP = (pop32());
  /* 11cda65a ret  */
  ESPCHK(0x11cda580u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a660 @ 0x11cda660 (1423 bytes, 533 insns) */
void f_11cda660(void) {
  FTRACE(0x11cda660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cda660 push ebp */
  push32((uint32_t)(EBP));
  /* 11cda661 mov ebp, esp */
  EBP = (ESP);
  /* 11cda663 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cda666 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cda66d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cda66f mov ax, word ptr [0x11cff6ba] */
  AX = (r16((uint32_t)(0x11cff6ba)));
  /* 11cda675 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cda678 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda67a mov cx, word ptr [0x11cff6bc] */
  CX = (r16((uint32_t)(0x11cff6bc)));
  /* 11cda681 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cda684 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cda688 jne 0x11cda692 */
  if (!C.zf) goto L_11cda692;
  /* 11cda68a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cda68d jmp 0x11cdabeb */
  goto L_11cdabeb;
L_11cda692:;
  /* 11cda692 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda695 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda698 push edx */
  push32((uint32_t)(EDX));
  /* 11cda699 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11cda69b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda69e push eax */
  push32((uint32_t)(EAX));
  /* 11cda69f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda6a1 call 0x11cde450 */
  push32(0x11cda6a6u); f_11cde450();
  /* 11cda6a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda6a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda6ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda6ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda6b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda6b4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda6b7 push edx */
  push32((uint32_t)(EDX));
  /* 11cda6b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11cda6ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda6bd push eax */
  push32((uint32_t)(EAX));
  /* 11cda6be push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda6c0 call 0x11cde450 */
  push32(0x11cda6c5u); f_11cde450();
  /* 11cda6c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda6c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda6cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda6cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda6d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda6d3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda6d6 push edx */
  push32((uint32_t)(EDX));
  /* 11cda6d7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11cda6d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda6dc push eax */
  push32((uint32_t)(EAX));
  /* 11cda6dd push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda6df call 0x11cde450 */
  push32(0x11cda6e4u); f_11cde450();
  /* 11cda6e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda6e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda6ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda6ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda6ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda6f2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda6f5 push edx */
  push32((uint32_t)(EDX));
  /* 11cda6f6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11cda6f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda6fb push eax */
  push32((uint32_t)(EAX));
  /* 11cda6fc push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda6fe call 0x11cde450 */
  push32(0x11cda703u); f_11cde450();
  /* 11cda703 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda706 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda709 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda70b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda70e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda711 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda714 push edx */
  push32((uint32_t)(EDX));
  /* 11cda715 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11cda717 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda71a push eax */
  push32((uint32_t)(EAX));
  /* 11cda71b push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda71d call 0x11cde450 */
  push32(0x11cda722u); f_11cde450();
  /* 11cda722 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda725 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda728 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda72a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda72d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda730 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda733 push edx */
  push32((uint32_t)(EDX));
  /* 11cda734 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11cda736 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda739 push eax */
  push32((uint32_t)(EAX));
  /* 11cda73a push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda73c call 0x11cde450 */
  push32(0x11cda741u); f_11cde450();
  /* 11cda741 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda744 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda747 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda749 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda74c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda74f push edx */
  push32((uint32_t)(EDX));
  /* 11cda750 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11cda752 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda755 push eax */
  push32((uint32_t)(EAX));
  /* 11cda756 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda758 call 0x11cde450 */
  push32(0x11cda75du); f_11cde450();
  /* 11cda75d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda760 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda763 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda765 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda768 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda76b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda76e push edx */
  push32((uint32_t)(EDX));
  /* 11cda76f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11cda771 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda774 push eax */
  push32((uint32_t)(EAX));
  /* 11cda775 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda777 call 0x11cde450 */
  push32(0x11cda77cu); f_11cde450();
  /* 11cda77c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda77f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda782 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda784 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda787 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda78a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda78d push edx */
  push32((uint32_t)(EDX));
  /* 11cda78e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11cda790 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda793 push eax */
  push32((uint32_t)(EAX));
  /* 11cda794 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda796 call 0x11cde450 */
  push32(0x11cda79bu); f_11cde450();
  /* 11cda79b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda79e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda7a1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda7a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda7a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda7a9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda7ac push edx */
  push32((uint32_t)(EDX));
  /* 11cda7ad push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11cda7af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda7b2 push eax */
  push32((uint32_t)(EAX));
  /* 11cda7b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda7b5 call 0x11cde450 */
  push32(0x11cda7bau); f_11cde450();
  /* 11cda7ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda7bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda7c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda7c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda7c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda7c8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda7cb push edx */
  push32((uint32_t)(EDX));
  /* 11cda7cc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11cda7ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda7d1 push eax */
  push32((uint32_t)(EAX));
  /* 11cda7d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda7d4 call 0x11cde450 */
  push32(0x11cda7d9u); f_11cde450();
  /* 11cda7d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda7dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda7df or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda7e1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda7e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda7e7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda7ea push edx */
  push32((uint32_t)(EDX));
  /* 11cda7eb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11cda7ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda7f0 push eax */
  push32((uint32_t)(EAX));
  /* 11cda7f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda7f3 call 0x11cde450 */
  push32(0x11cda7f8u); f_11cde450();
  /* 11cda7f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda7fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda7fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda800 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda803 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda806 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda809 push edx */
  push32((uint32_t)(EDX));
  /* 11cda80a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11cda80c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda80f push eax */
  push32((uint32_t)(EAX));
  /* 11cda810 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda812 call 0x11cde450 */
  push32(0x11cda817u); f_11cde450();
  /* 11cda817 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda81a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda81d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda81f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda822 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda825 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda828 push edx */
  push32((uint32_t)(EDX));
  /* 11cda829 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11cda82b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda82e push eax */
  push32((uint32_t)(EAX));
  /* 11cda82f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda831 call 0x11cde450 */
  push32(0x11cda836u); f_11cde450();
  /* 11cda836 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda839 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda83c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda83e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda841 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda844 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda847 push edx */
  push32((uint32_t)(EDX));
  /* 11cda848 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11cda84a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda84d push eax */
  push32((uint32_t)(EAX));
  /* 11cda84e push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda850 call 0x11cde450 */
  push32(0x11cda855u); f_11cde450();
  /* 11cda855 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda858 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda85b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda85d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda860 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda863 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda866 push edx */
  push32((uint32_t)(EDX));
  /* 11cda867 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11cda869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda86c push eax */
  push32((uint32_t)(EAX));
  /* 11cda86d push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda86f call 0x11cde450 */
  push32(0x11cda874u); f_11cde450();
  /* 11cda874 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda877 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda87a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda87c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda87f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda882 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda885 push edx */
  push32((uint32_t)(EDX));
  /* 11cda886 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11cda888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda88b push eax */
  push32((uint32_t)(EAX));
  /* 11cda88c push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda88e call 0x11cde450 */
  push32(0x11cda893u); f_11cde450();
  /* 11cda893 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda896 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda899 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda89b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda89e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda8a1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda8a4 push edx */
  push32((uint32_t)(EDX));
  /* 11cda8a5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11cda8a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda8aa push eax */
  push32((uint32_t)(EAX));
  /* 11cda8ab push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda8ad call 0x11cde450 */
  push32(0x11cda8b2u); f_11cde450();
  /* 11cda8b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda8b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda8b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda8ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda8bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda8c0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda8c3 push edx */
  push32((uint32_t)(EDX));
  /* 11cda8c4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11cda8c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda8c9 push eax */
  push32((uint32_t)(EAX));
  /* 11cda8ca push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda8cc call 0x11cde450 */
  push32(0x11cda8d1u); f_11cde450();
  /* 11cda8d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda8d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda8d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda8d9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda8dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda8df add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda8e2 push edx */
  push32((uint32_t)(EDX));
  /* 11cda8e3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11cda8e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda8e8 push eax */
  push32((uint32_t)(EAX));
  /* 11cda8e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda8eb call 0x11cde450 */
  push32(0x11cda8f0u); f_11cde450();
  /* 11cda8f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda8f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda8f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda8f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda8fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda8fe add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda901 push edx */
  push32((uint32_t)(EDX));
  /* 11cda902 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11cda904 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda907 push eax */
  push32((uint32_t)(EAX));
  /* 11cda908 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda90a call 0x11cde450 */
  push32(0x11cda90fu); f_11cde450();
  /* 11cda90f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda912 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda915 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda917 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda91a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda91d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda920 push edx */
  push32((uint32_t)(EDX));
  /* 11cda921 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11cda923 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda926 push eax */
  push32((uint32_t)(EAX));
  /* 11cda927 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda929 call 0x11cde450 */
  push32(0x11cda92eu); f_11cde450();
  /* 11cda92e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda931 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda934 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda936 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda939 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda93c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda93f push edx */
  push32((uint32_t)(EDX));
  /* 11cda940 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11cda942 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda945 push eax */
  push32((uint32_t)(EAX));
  /* 11cda946 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda948 call 0x11cde450 */
  push32(0x11cda94du); f_11cde450();
  /* 11cda94d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda950 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda953 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda955 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda958 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda95b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda95e push edx */
  push32((uint32_t)(EDX));
  /* 11cda95f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11cda961 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda964 push eax */
  push32((uint32_t)(EAX));
  /* 11cda965 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda967 call 0x11cde450 */
  push32(0x11cda96cu); f_11cde450();
  /* 11cda96c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda96f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda972 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda974 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda977 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda97a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda97d push edx */
  push32((uint32_t)(EDX));
  /* 11cda97e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11cda980 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda983 push eax */
  push32((uint32_t)(EAX));
  /* 11cda984 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda986 call 0x11cde450 */
  push32(0x11cda98bu); f_11cde450();
  /* 11cda98b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda98e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda991 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda993 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda996 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda999 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda99c push edx */
  push32((uint32_t)(EDX));
  /* 11cda99d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11cda99f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda9a2 push eax */
  push32((uint32_t)(EAX));
  /* 11cda9a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda9a5 call 0x11cde450 */
  push32(0x11cda9aau); f_11cde450();
  /* 11cda9aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda9ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda9b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda9b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda9b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda9b8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda9bb push edx */
  push32((uint32_t)(EDX));
  /* 11cda9bc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11cda9be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda9c1 push eax */
  push32((uint32_t)(EAX));
  /* 11cda9c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda9c4 call 0x11cde450 */
  push32(0x11cda9c9u); f_11cde450();
  /* 11cda9c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda9cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda9cf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda9d1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda9d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda9d7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda9da push edx */
  push32((uint32_t)(EDX));
  /* 11cda9db push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11cda9dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda9e0 push eax */
  push32((uint32_t)(EAX));
  /* 11cda9e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cda9e3 call 0x11cde450 */
  push32(0x11cda9e8u); f_11cde450();
  /* 11cda9e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda9eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cda9ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cda9f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cda9f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cda9f6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cda9f9 push edx */
  push32((uint32_t)(EDX));
  /* 11cda9fa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11cda9fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cda9ff push eax */
  push32((uint32_t)(EAX));
  /* 11cdaa00 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdaa02 call 0x11cde450 */
  push32(0x11cdaa07u); f_11cde450();
  /* 11cdaa07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaa0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdaa0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdaa0f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdaa12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdaa15 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaa18 push edx */
  push32((uint32_t)(EDX));
  /* 11cdaa19 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11cdaa1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdaa1e push eax */
  push32((uint32_t)(EAX));
  /* 11cdaa1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdaa21 call 0x11cde450 */
  push32(0x11cdaa26u); f_11cde450();
  /* 11cdaa26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaa29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdaa2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdaa2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdaa31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdaa34 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaa37 push edx */
  push32((uint32_t)(EDX));
  /* 11cdaa38 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11cdaa3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdaa3d push eax */
  push32((uint32_t)(EAX));
  /* 11cdaa3e push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdaa40 call 0x11cde450 */
  push32(0x11cdaa45u); f_11cde450();
  /* 11cdaa45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaa48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdaa4b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdaa4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdaa50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdaa53 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaa56 push edx */
  push32((uint32_t)(EDX));
  /* 11cdaa57 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11cdaa59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdaa5c push eax */
  push32((uint32_t)(EAX));
  /* 11cdaa5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdaa5f call 0x11cde450 */
  push32(0x11cdaa64u); f_11cde450();
  /* 11cdaa64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaa67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdaa6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdaa6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdaa6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdaa72 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaa78 push edx */
  push32((uint32_t)(EDX));
  /* 11cdaa79 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11cdaa7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdaa7e push eax */
  push32((uint32_t)(EAX));
  /* 11cdaa7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdaa81 call 0x11cde450 */
  push32(0x11cdaa86u); f_11cde450();
  /* 11cdaa86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaa89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdaa8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdaa8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdaa91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdaa94 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaa9a push edx */
  push32((uint32_t)(EDX));
  /* 11cdaa9b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11cdaa9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdaaa0 push eax */
  push32((uint32_t)(EAX));
  /* 11cdaaa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdaaa3 call 0x11cde450 */
  push32(0x11cdaaa8u); f_11cde450();
  /* 11cdaaa8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaaab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdaaae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdaab0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdaab3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdaab6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaabc push edx */
  push32((uint32_t)(EDX));
  /* 11cdaabd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11cdaabf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdaac2 push eax */
  push32((uint32_t)(EAX));
  /* 11cdaac3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdaac5 call 0x11cde450 */
  push32(0x11cdaacau); f_11cde450();
  /* 11cdaaca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaacd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdaad0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdaad2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdaad5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdaad8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaade push edx */
  push32((uint32_t)(EDX));
  /* 11cdaadf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11cdaae1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdaae4 push eax */
  push32((uint32_t)(EAX));
  /* 11cdaae5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdaae7 call 0x11cde450 */
  push32(0x11cdaaecu); f_11cde450();
  /* 11cdaaec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaaef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdaaf2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdaaf4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdaaf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdaafa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdab00 push edx */
  push32((uint32_t)(EDX));
  /* 11cdab01 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11cdab03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdab06 push eax */
  push32((uint32_t)(EAX));
  /* 11cdab07 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdab09 call 0x11cde450 */
  push32(0x11cdab0eu); f_11cde450();
  /* 11cdab0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdab11 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdab14 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdab16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdab19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdab1c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdab22 push edx */
  push32((uint32_t)(EDX));
  /* 11cdab23 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11cdab25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdab28 push eax */
  push32((uint32_t)(EAX));
  /* 11cdab29 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdab2b call 0x11cde450 */
  push32(0x11cdab30u); f_11cde450();
  /* 11cdab30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdab33 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdab36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdab38 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdab3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdab3e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdab44 push edx */
  push32((uint32_t)(EDX));
  /* 11cdab45 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11cdab47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdab4a push eax */
  push32((uint32_t)(EAX));
  /* 11cdab4b push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdab4d call 0x11cde450 */
  push32(0x11cdab52u); f_11cde450();
  /* 11cdab52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdab55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdab58 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdab5a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdab5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdab60 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdab66 push edx */
  push32((uint32_t)(EDX));
  /* 11cdab67 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11cdab69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdab6c push eax */
  push32((uint32_t)(EAX));
  /* 11cdab6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdab6f call 0x11cde450 */
  push32(0x11cdab74u); f_11cde450();
  /* 11cdab74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdab77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdab7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdab7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdab7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdab82 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdab88 push edx */
  push32((uint32_t)(EDX));
  /* 11cdab89 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11cdab8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdab8e push eax */
  push32((uint32_t)(EAX));
  /* 11cdab8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdab91 call 0x11cde450 */
  push32(0x11cdab96u); f_11cde450();
  /* 11cdab96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdab99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdab9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdab9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdaba1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdaba4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdabaa push edx */
  push32((uint32_t)(EDX));
  /* 11cdabab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11cdabad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdabb0 push eax */
  push32((uint32_t)(EAX));
  /* 11cdabb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdabb3 call 0x11cde450 */
  push32(0x11cdabb8u); f_11cde450();
  /* 11cdabb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdabbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdabbe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdabc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdabc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdabc6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdabcc push edx */
  push32((uint32_t)(EDX));
  /* 11cdabcd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11cdabd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdabd5 push eax */
  push32((uint32_t)(EAX));
  /* 11cdabd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdabd8 call 0x11cde450 */
  push32(0x11cdabddu); f_11cde450();
  /* 11cdabdd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdabe0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdabe3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdabe5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdabe8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11cdabeb:;
  /* 11cdabeb mov esp, ebp */
  ESP = (EBP);
  /* 11cdabed pop ebp */
  EBP = (pop32());
  /* 11cdabee ret  */
  ESPCHK(0x11cda660u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11cdabf0 (779 bytes, 265 insns) */
void f_11cdabf0(void) {
  FTRACE(0x11cdabf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdabf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdabf1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdabf3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdabf7 jne 0x11cdabfe */
  if (!C.zf) goto L_11cdabfe;
  /* 11cdabf9 jmp 0x11cdaef9 */
  goto L_11cdaef9;
L_11cdabfe:;
  /* 11cdabfe push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdac00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdac03 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cdac06 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdac07 call 0x11ccbf50 */
  push32(0x11cdac0cu); f_11ccbf50();
  /* 11cdac0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdac0f push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdac11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdac14 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cdac17 push eax */
  push32((uint32_t)(EAX));
  /* 11cdac18 call 0x11ccbf50 */
  push32(0x11cdac1du); f_11ccbf50();
  /* 11cdac1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdac20 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdac22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdac25 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cdac28 push edx */
  push32((uint32_t)(EDX));
  /* 11cdac29 call 0x11ccbf50 */
  push32(0x11cdac2eu); f_11ccbf50();
  /* 11cdac2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdac31 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdac33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdac36 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cdac39 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdac3a call 0x11ccbf50 */
  push32(0x11cdac3fu); f_11ccbf50();
  /* 11cdac3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdac42 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdac44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdac47 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11cdac4a push eax */
  push32((uint32_t)(EAX));
  /* 11cdac4b call 0x11ccbf50 */
  push32(0x11cdac50u); f_11ccbf50();
  /* 11cdac50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdac53 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdac55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdac58 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11cdac5b push edx */
  push32((uint32_t)(EDX));
  /* 11cdac5c call 0x11ccbf50 */
  push32(0x11cdac61u); f_11ccbf50();
  /* 11cdac61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdac64 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdac66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdac69 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cdac6b push ecx */
  push32((uint32_t)(ECX));
  /* 11cdac6c call 0x11ccbf50 */
  push32(0x11cdac71u); f_11ccbf50();
  /* 11cdac71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdac74 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdac76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdac79 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11cdac7c push eax */
  push32((uint32_t)(EAX));
  /* 11cdac7d call 0x11ccbf50 */
  push32(0x11cdac82u); f_11ccbf50();
  /* 11cdac82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdac85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdac87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdac8a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11cdac8d push edx */
  push32((uint32_t)(EDX));
  /* 11cdac8e call 0x11ccbf50 */
  push32(0x11cdac93u); f_11ccbf50();
  /* 11cdac93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdac96 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdac98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdac9b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11cdac9e push ecx */
  push32((uint32_t)(ECX));
  /* 11cdac9f call 0x11ccbf50 */
  push32(0x11cdaca4u); f_11ccbf50();
  /* 11cdaca4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaca7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdaca9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdacac mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11cdacaf push eax */
  push32((uint32_t)(EAX));
  /* 11cdacb0 call 0x11ccbf50 */
  push32(0x11cdacb5u); f_11ccbf50();
  /* 11cdacb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdacb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdacba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdacbd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11cdacc0 push edx */
  push32((uint32_t)(EDX));
  /* 11cdacc1 call 0x11ccbf50 */
  push32(0x11cdacc6u); f_11ccbf50();
  /* 11cdacc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdacc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdaccb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdacce mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11cdacd1 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdacd2 call 0x11ccbf50 */
  push32(0x11cdacd7u); f_11ccbf50();
  /* 11cdacd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdacda push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdacdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdacdf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11cdace2 push eax */
  push32((uint32_t)(EAX));
  /* 11cdace3 call 0x11ccbf50 */
  push32(0x11cdace8u); f_11ccbf50();
  /* 11cdace8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaceb push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdaced mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdacf0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11cdacf3 push edx */
  push32((uint32_t)(EDX));
  /* 11cdacf4 call 0x11ccbf50 */
  push32(0x11cdacf9u); f_11ccbf50();
  /* 11cdacf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdacfc push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdacfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdad01 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11cdad04 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdad05 call 0x11ccbf50 */
  push32(0x11cdad0au); f_11ccbf50();
  /* 11cdad0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdad0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdad0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdad12 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11cdad15 push eax */
  push32((uint32_t)(EAX));
  /* 11cdad16 call 0x11ccbf50 */
  push32(0x11cdad1bu); f_11ccbf50();
  /* 11cdad1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdad1e push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdad20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdad23 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11cdad26 push edx */
  push32((uint32_t)(EDX));
  /* 11cdad27 call 0x11ccbf50 */
  push32(0x11cdad2cu); f_11ccbf50();
  /* 11cdad2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdad2f push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdad31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdad34 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11cdad37 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdad38 call 0x11ccbf50 */
  push32(0x11cdad3du); f_11ccbf50();
  /* 11cdad3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdad40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdad42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdad45 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11cdad48 push eax */
  push32((uint32_t)(EAX));
  /* 11cdad49 call 0x11ccbf50 */
  push32(0x11cdad4eu); f_11ccbf50();
  /* 11cdad4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdad51 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdad53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdad56 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11cdad59 push edx */
  push32((uint32_t)(EDX));
  /* 11cdad5a call 0x11ccbf50 */
  push32(0x11cdad5fu); f_11ccbf50();
  /* 11cdad5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdad62 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdad64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdad67 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11cdad6a push ecx */
  push32((uint32_t)(ECX));
  /* 11cdad6b call 0x11ccbf50 */
  push32(0x11cdad70u); f_11ccbf50();
  /* 11cdad70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdad73 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdad75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdad78 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11cdad7b push eax */
  push32((uint32_t)(EAX));
  /* 11cdad7c call 0x11ccbf50 */
  push32(0x11cdad81u); f_11ccbf50();
  /* 11cdad81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdad84 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdad86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdad89 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11cdad8c push edx */
  push32((uint32_t)(EDX));
  /* 11cdad8d call 0x11ccbf50 */
  push32(0x11cdad92u); f_11ccbf50();
  /* 11cdad92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdad95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdad97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdad9a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11cdad9d push ecx */
  push32((uint32_t)(ECX));
  /* 11cdad9e call 0x11ccbf50 */
  push32(0x11cdada3u); f_11ccbf50();
  /* 11cdada3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdada6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdada8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdadab mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11cdadae push eax */
  push32((uint32_t)(EAX));
  /* 11cdadaf call 0x11ccbf50 */
  push32(0x11cdadb4u); f_11ccbf50();
  /* 11cdadb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdadb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdadb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdadbc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11cdadbf push edx */
  push32((uint32_t)(EDX));
  /* 11cdadc0 call 0x11ccbf50 */
  push32(0x11cdadc5u); f_11ccbf50();
  /* 11cdadc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdadc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdadca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdadcd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11cdadd0 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdadd1 call 0x11ccbf50 */
  push32(0x11cdadd6u); f_11ccbf50();
  /* 11cdadd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdadd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdaddb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdadde mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11cdade1 push eax */
  push32((uint32_t)(EAX));
  /* 11cdade2 call 0x11ccbf50 */
  push32(0x11cdade7u); f_11ccbf50();
  /* 11cdade7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdadea push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdadec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdadef mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11cdadf2 push edx */
  push32((uint32_t)(EDX));
  /* 11cdadf3 call 0x11ccbf50 */
  push32(0x11cdadf8u); f_11ccbf50();
  /* 11cdadf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdadfb push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdadfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdae00 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11cdae03 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdae04 call 0x11ccbf50 */
  push32(0x11cdae09u); f_11ccbf50();
  /* 11cdae09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdae0c push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdae0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdae11 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11cdae14 push eax */
  push32((uint32_t)(EAX));
  /* 11cdae15 call 0x11ccbf50 */
  push32(0x11cdae1au); f_11ccbf50();
  /* 11cdae1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdae1d push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdae1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdae22 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11cdae28 push edx */
  push32((uint32_t)(EDX));
  /* 11cdae29 call 0x11ccbf50 */
  push32(0x11cdae2eu); f_11ccbf50();
  /* 11cdae2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdae31 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdae33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdae36 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11cdae3c push ecx */
  push32((uint32_t)(ECX));
  /* 11cdae3d call 0x11ccbf50 */
  push32(0x11cdae42u); f_11ccbf50();
  /* 11cdae42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdae45 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdae47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdae4a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11cdae50 push eax */
  push32((uint32_t)(EAX));
  /* 11cdae51 call 0x11ccbf50 */
  push32(0x11cdae56u); f_11ccbf50();
  /* 11cdae56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdae59 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdae5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdae5e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11cdae64 push edx */
  push32((uint32_t)(EDX));
  /* 11cdae65 call 0x11ccbf50 */
  push32(0x11cdae6au); f_11ccbf50();
  /* 11cdae6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdae6d push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdae6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdae72 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11cdae78 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdae79 call 0x11ccbf50 */
  push32(0x11cdae7eu); f_11ccbf50();
  /* 11cdae7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdae81 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdae83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdae86 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11cdae8c push eax */
  push32((uint32_t)(EAX));
  /* 11cdae8d call 0x11ccbf50 */
  push32(0x11cdae92u); f_11ccbf50();
  /* 11cdae92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdae95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdae97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdae9a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11cdaea0 push edx */
  push32((uint32_t)(EDX));
  /* 11cdaea1 call 0x11ccbf50 */
  push32(0x11cdaea6u); f_11ccbf50();
  /* 11cdaea6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaea9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdaeab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdaeae mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11cdaeb4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdaeb5 call 0x11ccbf50 */
  push32(0x11cdaebau); f_11ccbf50();
  /* 11cdaeba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaebd push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdaebf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdaec2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11cdaec8 push eax */
  push32((uint32_t)(EAX));
  /* 11cdaec9 call 0x11ccbf50 */
  push32(0x11cdaeceu); f_11ccbf50();
  /* 11cdaece add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaed1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdaed3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdaed6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11cdaedc push edx */
  push32((uint32_t)(EDX));
  /* 11cdaedd call 0x11ccbf50 */
  push32(0x11cdaee2u); f_11ccbf50();
  /* 11cdaee2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaee5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdaee7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdaeea mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11cdaef0 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdaef1 call 0x11ccbf50 */
  push32(0x11cdaef6u); f_11ccbf50();
  /* 11cdaef6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdaef9:;
  /* 11cdaef9 pop ebp */
  EBP = (pop32());
  /* 11cdaefa ret  */
  ESPCHK(0x11cdabf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001af00 @ 0x11cdaf00 (678 bytes, 180 insns) */
void f_11cdaf00(void) {
  FTRACE(0x11cdaf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdaf00 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdaf01 mov ebp, esp */
  EBP = (ESP);
  /* 11cdaf03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdaf06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cdaf0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdaf0f mov ax, word ptr [0x11cff6b6] */
  AX = (r16((uint32_t)(0x11cff6b6)));
  /* 11cdaf15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdaf18 cmp dword ptr [0x11cff66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdaf1f je 0x11cdb07a */
  if (C.zf) goto L_11cdb07a;
  /* 11cdaf25 push 0x11cff684 */
  push32((uint32_t)(0x11cff684u));
  /* 11cdaf2a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11cdaf2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdaf2f push ecx */
  push32((uint32_t)(ECX));
  /* 11cdaf30 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdaf32 call 0x11cde450 */
  push32(0x11cdaf37u); f_11cde450();
  /* 11cdaf37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaf3a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdaf3d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdaf3f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cdaf42 push 0x11cff688 */
  push32((uint32_t)(0x11cff688u));
  /* 11cdaf47 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11cdaf49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdaf4c push eax */
  push32((uint32_t)(EAX));
  /* 11cdaf4d push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdaf4f call 0x11cde450 */
  push32(0x11cdaf54u); f_11cde450();
  /* 11cdaf54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaf57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdaf5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdaf5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdaf5f push 0x11cff68c */
  push32((uint32_t)(0x11cff68cu));
  /* 11cdaf64 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11cdaf66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdaf69 push edx */
  push32((uint32_t)(EDX));
  /* 11cdaf6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdaf6c call 0x11cde450 */
  push32(0x11cdaf71u); f_11cde450();
  /* 11cdaf71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaf74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdaf77 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdaf79 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdaf7c mov edx, dword ptr [0x11cff68c] */
  EDX = (r32((uint32_t)(0x11cff68c)));
  /* 11cdaf82 push edx */
  push32((uint32_t)(EDX));
  /* 11cdaf83 call 0x11cdb1b0 */
  push32(0x11cdaf88u); f_11cdb1b0();
  /* 11cdaf88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdaf8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdaf8f je 0x11cdafe9 */
  if (C.zf) goto L_11cdafe9;
  /* 11cdaf91 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdaf93 mov eax, dword ptr [0x11cff684] */
  EAX = (r32((uint32_t)(0x11cff684)));
  /* 11cdaf98 push eax */
  push32((uint32_t)(EAX));
  /* 11cdaf99 call 0x11ccbf50 */
  push32(0x11cdaf9eu); f_11ccbf50();
  /* 11cdaf9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdafa1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdafa3 mov ecx, dword ptr [0x11cff688] */
  ECX = (r32((uint32_t)(0x11cff688)));
  /* 11cdafa9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdafaa call 0x11ccbf50 */
  push32(0x11cdafafu); f_11ccbf50();
  /* 11cdafaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdafb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdafb4 mov edx, dword ptr [0x11cff68c] */
  EDX = (r32((uint32_t)(0x11cff68c)));
  /* 11cdafba push edx */
  push32((uint32_t)(EDX));
  /* 11cdafbb call 0x11ccbf50 */
  push32(0x11cdafc0u); f_11ccbf50();
  /* 11cdafc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdafc3 mov dword ptr [0x11cff684], 0 */
  w32((uint32_t)(0x11cff684), (0x0u));
  /* 11cdafcd mov dword ptr [0x11cff688], 0 */
  w32((uint32_t)(0x11cff688), (0x0u));
  /* 11cdafd7 mov dword ptr [0x11cff68c], 0 */
  w32((uint32_t)(0x11cff68c), (0x0u));
  /* 11cdafe1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdafe4 jmp 0x11cdb1a2 */
  goto L_11cdb1a2;
L_11cdafe9:;
  /* 11cdafe9 mov eax, dword ptr [0x11cfe2b8] */
  EAX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdafee cmp dword ptr [eax], 0x11cfe280 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11cfe280u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdaff4 je 0x11cdb030 */
  if (C.zf) goto L_11cdb030;
  /* 11cdaff6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdaff8 mov ecx, dword ptr [0x11cfe2b8] */
  ECX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdaffe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cdb000 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb001 call 0x11ccbf50 */
  push32(0x11cdb006u); f_11ccbf50();
  /* 11cdb006 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb009 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb00b mov eax, dword ptr [0x11cfe2b8] */
  EAX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb010 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cdb013 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb014 call 0x11ccbf50 */
  push32(0x11cdb019u); f_11ccbf50();
  /* 11cdb019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb01c push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb01e mov edx, dword ptr [0x11cfe2b8] */
  EDX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb024 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cdb027 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb028 call 0x11ccbf50 */
  push32(0x11cdb02du); f_11ccbf50();
  /* 11cdb02d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdb030:;
  /* 11cdb030 mov ecx, dword ptr [0x11cfe2b8] */
  ECX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb036 mov edx, dword ptr [0x11cff684] */
  EDX = (r32((uint32_t)(0x11cff684)));
  /* 11cdb03c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11cdb03e mov eax, dword ptr [0x11cfe2b8] */
  EAX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb043 mov ecx, dword ptr [0x11cff688] */
  ECX = (r32((uint32_t)(0x11cff688)));
  /* 11cdb049 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11cdb04c mov edx, dword ptr [0x11cfe2b8] */
  EDX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb052 mov eax, dword ptr [0x11cff68c] */
  EAX = (r32((uint32_t)(0x11cff68c)));
  /* 11cdb057 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11cdb05a mov ecx, dword ptr [0x11cfe2b8] */
  ECX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb060 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cdb062 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cdb064 mov byte ptr [0x11cfd004], al */
  w8((uint32_t)(0x11cfd004), (AL));
  /* 11cdb069 mov dword ptr [0x11cfd008], 1 */
  w32((uint32_t)(0x11cfd008), (0x1u));
  /* 11cdb073 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdb075 jmp 0x11cdb1a2 */
  goto L_11cdb1a2;
L_11cdb07a:;
  /* 11cdb07a push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb07c mov ecx, dword ptr [0x11cff684] */
  ECX = (r32((uint32_t)(0x11cff684)));
  /* 11cdb082 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb083 call 0x11ccbf50 */
  push32(0x11cdb088u); f_11ccbf50();
  /* 11cdb088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb08b push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb08d mov edx, dword ptr [0x11cff688] */
  EDX = (r32((uint32_t)(0x11cff688)));
  /* 11cdb093 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb094 call 0x11ccbf50 */
  push32(0x11cdb099u); f_11ccbf50();
  /* 11cdb099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb09c push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb09e mov eax, dword ptr [0x11cff68c] */
  EAX = (r32((uint32_t)(0x11cff68c)));
  /* 11cdb0a3 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb0a4 call 0x11ccbf50 */
  push32(0x11cdb0a9u); f_11ccbf50();
  /* 11cdb0a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb0ac mov dword ptr [0x11cff684], 0 */
  w32((uint32_t)(0x11cff684), (0x0u));
  /* 11cdb0b6 mov dword ptr [0x11cff688], 0 */
  w32((uint32_t)(0x11cff688), (0x0u));
  /* 11cdb0c0 mov dword ptr [0x11cff68c], 0 */
  w32((uint32_t)(0x11cff68c), (0x0u));
  /* 11cdb0ca push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11cdb0cf push 0x11cfa4e8 */
  push32((uint32_t)(0x11cfa4e8u));
  /* 11cdb0d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb0d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb0d8 call 0x11ccb4c0 */
  push32(0x11cdb0ddu); f_11ccb4c0();
  /* 11cdb0dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb0e0 mov ecx, dword ptr [0x11cfe2b8] */
  ECX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb0e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cdb0e8 mov edx, dword ptr [0x11cfe2b8] */
  EDX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb0ee cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb0f1 jne 0x11cdb0fb */
  if (!C.zf) goto L_11cdb0fb;
  /* 11cdb0f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdb0f6 jmp 0x11cdb1a2 */
  goto L_11cdb1a2;
L_11cdb0fb:;
  /* 11cdb0fb push 0x11cfa490 */
  push32((uint32_t)(0x11cfa490u));
  /* 11cdb100 mov eax, dword ptr [0x11cfe2b8] */
  EAX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb105 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cdb107 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb108 call 0x11cd0c00 */
  push32(0x11cdb10du); f_11cd0c00();
  /* 11cdb10d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb110 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11cdb115 push 0x11cfa4e8 */
  push32((uint32_t)(0x11cfa4e8u));
  /* 11cdb11a push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb11c push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb11e call 0x11ccb4c0 */
  push32(0x11cdb123u); f_11ccb4c0();
  /* 11cdb123 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb126 mov edx, dword ptr [0x11cfe2b8] */
  EDX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb12c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11cdb12f mov eax, dword ptr [0x11cfe2b8] */
  EAX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb134 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb138 jne 0x11cdb13f */
  if (!C.zf) goto L_11cdb13f;
  /* 11cdb13a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdb13d jmp 0x11cdb1a2 */
  goto L_11cdb1a2;
L_11cdb13f:;
  /* 11cdb13f mov ecx, dword ptr [0x11cfe2b8] */
  ECX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb145 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cdb148 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11cdb14b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11cdb150 push 0x11cfa4e8 */
  push32((uint32_t)(0x11cfa4e8u));
  /* 11cdb155 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb157 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb159 call 0x11ccb4c0 */
  push32(0x11cdb15eu); f_11ccb4c0();
  /* 11cdb15e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb161 mov ecx, dword ptr [0x11cfe2b8] */
  ECX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb167 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11cdb16a mov edx, dword ptr [0x11cfe2b8] */
  EDX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb170 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb174 jne 0x11cdb17b */
  if (!C.zf) goto L_11cdb17b;
  /* 11cdb176 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdb179 jmp 0x11cdb1a2 */
  goto L_11cdb1a2;
L_11cdb17b:;
  /* 11cdb17b mov eax, dword ptr [0x11cfe2b8] */
  EAX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb180 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cdb183 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11cdb186 mov edx, dword ptr [0x11cfe2b8] */
  EDX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb18c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cdb18e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cdb190 mov byte ptr [0x11cfd004], cl */
  w8((uint32_t)(0x11cfd004), (CL));
  /* 11cdb196 mov dword ptr [0x11cfd008], 1 */
  w32((uint32_t)(0x11cfd008), (0x1u));
  /* 11cdb1a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cdb1a2:;
  /* 11cdb1a2 mov esp, ebp */
  ESP = (EBP);
  /* 11cdb1a4 pop ebp */
  EBP = (pop32());
  /* 11cdb1a5 ret  */
  ESPCHK(0x11cdaf00u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11cdb1b0 (125 bytes, 49 insns) */
void f_11cdb1b0(void) {
  FTRACE(0x11cdb1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdb1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdb1b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdb1b3 push ecx */
  push32((uint32_t)(ECX));
L_11cdb1b4:;
  /* 11cdb1b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb1b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cdb1ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdb1bc je 0x11cdb229 */
  if (C.zf) goto L_11cdb229;
  /* 11cdb1be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb1c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cdb1c4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb1c7 jl 0x11cdb1ed */
  if ((C.sf!=C.of)) goto L_11cdb1ed;
  /* 11cdb1c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb1cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cdb1cf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb1d2 jg 0x11cdb1ed */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdb1ed;
  /* 11cdb1d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb1d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cdb1da sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdb1dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb1e0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11cdb1e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb1e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb1e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cdb1eb jmp 0x11cdb227 */
  goto L_11cdb227;
L_11cdb1ed:;
  /* 11cdb1ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb1f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cdb1f3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb1f6 jne 0x11cdb21e */
  if (!C.zf) goto L_11cdb21e;
  /* 11cdb1f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb1fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cdb1fe:;
  /* 11cdb1fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb201 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb204 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11cdb207 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11cdb209 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb20c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb20f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cdb212 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb215 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cdb218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdb21a jne 0x11cdb1fe */
  if (!C.zf) goto L_11cdb1fe;
  /* 11cdb21c jmp 0x11cdb227 */
  goto L_11cdb227;
L_11cdb21e:;
  /* 11cdb21e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb221 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb224 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11cdb227:;
  /* 11cdb227 jmp 0x11cdb1b4 */
  goto L_11cdb1b4;
L_11cdb229:;
  /* 11cdb229 mov esp, ebp */
  ESP = (EBP);
  /* 11cdb22b pop ebp */
  EBP = (pop32());
  /* 11cdb22c ret  */
  ESPCHK(0x11cdb1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b230 @ 0x11cdb230 (304 bytes, 85 insns) */
void f_11cdb230(void) {
  FTRACE(0x11cdb230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdb230 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdb231 mov ebp, esp */
  EBP = (ESP);
  /* 11cdb233 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb234 cmp dword ptr [0x11cff668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb23b je 0x11cdb2fc */
  if (C.zf) goto L_11cdb2fc;
  /* 11cdb241 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11cdb243 push 0x11cfa4f4 */
  push32((uint32_t)(0x11cfa4f4u));
  /* 11cdb248 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb24a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11cdb24c push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdb24e call 0x11ccb8d0 */
  push32(0x11cdb253u); f_11ccb8d0();
  /* 11cdb253 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb256 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdb259 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb25d jne 0x11cdb269 */
  if (!C.zf) goto L_11cdb269;
  /* 11cdb25f mov eax, 1 */
  EAX = (0x1u);
  /* 11cdb264 jmp 0x11cdb35c */
  goto L_11cdb35c;
L_11cdb269:;
  /* 11cdb269 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb26c push eax */
  push32((uint32_t)(EAX));
  /* 11cdb26d call 0x11cdb360 */
  push32(0x11cdb272u); f_11cdb360();
  /* 11cdb272 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdb277 je 0x11cdb29d */
  if (C.zf) goto L_11cdb29d;
  /* 11cdb279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb27c push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb27d call 0x11cdb5f0 */
  push32(0x11cdb282u); f_11cdb5f0();
  /* 11cdb282 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb285 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb287 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb28a push edx */
  push32((uint32_t)(EDX));
  /* 11cdb28b call 0x11ccbf50 */
  push32(0x11cdb290u); f_11ccbf50();
  /* 11cdb290 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb293 mov eax, 1 */
  EAX = (0x1u);
  /* 11cdb298 jmp 0x11cdb35c */
  goto L_11cdb35c;
L_11cdb29d:;
  /* 11cdb29d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb2a0 mov ecx, dword ptr [0x11cfe2b8] */
  ECX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb2a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cdb2a8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cdb2aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb2ad mov ecx, dword ptr [0x11cfe2b8] */
  ECX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb2b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cdb2b6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11cdb2b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb2bc mov ecx, dword ptr [0x11cfe2b8] */
  ECX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb2c2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cdb2c5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11cdb2c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb2cb mov dword ptr [0x11cfe2b8], eax */
  w32((uint32_t)(0x11cfe2b8), (EAX));
  /* 11cdb2d0 mov ecx, dword ptr [0x11cff690] */
  ECX = (r32((uint32_t)(0x11cff690)));
  /* 11cdb2d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb2d7 call 0x11cdb5f0 */
  push32(0x11cdb2dcu); f_11cdb5f0();
  /* 11cdb2dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb2df push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb2e1 mov edx, dword ptr [0x11cff690] */
  EDX = (r32((uint32_t)(0x11cff690)));
  /* 11cdb2e7 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb2e8 call 0x11ccbf50 */
  push32(0x11cdb2edu); f_11ccbf50();
  /* 11cdb2ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb2f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb2f3 mov dword ptr [0x11cff690], eax */
  w32((uint32_t)(0x11cff690), (EAX));
  /* 11cdb2f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdb2fa jmp 0x11cdb35c */
  goto L_11cdb35c;
L_11cdb2fc:;
  /* 11cdb2fc mov ecx, dword ptr [0x11cfe2b8] */
  ECX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb302 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cdb304 mov dword ptr [0x11cfe288], edx */
  w32((uint32_t)(0x11cfe288), (EDX));
  /* 11cdb30a mov eax, dword ptr [0x11cfe2b8] */
  EAX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb30f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cdb312 mov dword ptr [0x11cfe28c], ecx */
  w32((uint32_t)(0x11cfe28c), (ECX));
  /* 11cdb318 mov edx, dword ptr [0x11cfe2b8] */
  EDX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cdb31e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cdb321 mov dword ptr [0x11cfe290], eax */
  w32((uint32_t)(0x11cfe290), (EAX));
  /* 11cdb326 mov dword ptr [0x11cfe2b8], 0x11cfe288 */
  w32((uint32_t)(0x11cfe2b8), (0x11cfe288u));
  /* 11cdb330 mov ecx, dword ptr [0x11cff690] */
  ECX = (r32((uint32_t)(0x11cff690)));
  /* 11cdb336 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb337 call 0x11cdb5f0 */
  push32(0x11cdb33cu); f_11cdb5f0();
  /* 11cdb33c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb33f push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb341 mov edx, dword ptr [0x11cff690] */
  EDX = (r32((uint32_t)(0x11cff690)));
  /* 11cdb347 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb348 call 0x11ccbf50 */
  push32(0x11cdb34du); f_11ccbf50();
  /* 11cdb34d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb350 mov dword ptr [0x11cff690], 0 */
  w32((uint32_t)(0x11cff690), (0x0u));
  /* 11cdb35a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cdb35c:;
  /* 11cdb35c mov esp, ebp */
  ESP = (EBP);
  /* 11cdb35e pop ebp */
  EBP = (pop32());
  /* 11cdb35f ret  */
  ESPCHK(0x11cdb230u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b360 @ 0x11cdb360 (525 bytes, 200 insns) */
void f_11cdb360(void) {
  FTRACE(0x11cdb360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdb360 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdb361 mov ebp, esp */
  EBP = (ESP);
  /* 11cdb363 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdb366 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cdb36d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdb36f mov ax, word ptr [0x11cff6b0] */
  AX = (r16((uint32_t)(0x11cff6b0)));
  /* 11cdb375 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdb378 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb37c jne 0x11cdb386 */
  if (!C.zf) goto L_11cdb386;
  /* 11cdb37e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdb381 jmp 0x11cdb569 */
  goto L_11cdb569;
L_11cdb386:;
  /* 11cdb386 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb389 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb38c push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb38d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11cdb38f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb392 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb393 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdb395 call 0x11cde450 */
  push32(0x11cdb39au); f_11cde450();
  /* 11cdb39a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb39d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb3a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb3a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb3a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb3a8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb3ab push edx */
  push32((uint32_t)(EDX));
  /* 11cdb3ac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11cdb3ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb3b1 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb3b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdb3b4 call 0x11cde450 */
  push32(0x11cdb3b9u); f_11cde450();
  /* 11cdb3b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb3bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb3bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb3c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb3c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb3c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb3ca push edx */
  push32((uint32_t)(EDX));
  /* 11cdb3cb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11cdb3cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb3d0 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb3d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdb3d3 call 0x11cde450 */
  push32(0x11cdb3d8u); f_11cde450();
  /* 11cdb3d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb3db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb3de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb3e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb3e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb3e6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb3e9 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb3ea push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11cdb3ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb3ef push eax */
  push32((uint32_t)(EAX));
  /* 11cdb3f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdb3f2 call 0x11cde450 */
  push32(0x11cdb3f7u); f_11cde450();
  /* 11cdb3f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb3fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb3fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb3ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb402 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb405 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb408 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb409 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11cdb40b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb40e push eax */
  push32((uint32_t)(EAX));
  /* 11cdb40f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdb411 call 0x11cde450 */
  push32(0x11cdb416u); f_11cde450();
  /* 11cdb416 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb419 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb41c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb41e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb421 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb424 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11cdb427 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb428 call 0x11cdb570 */
  push32(0x11cdb42du); f_11cdb570();
  /* 11cdb42d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb430 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb433 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb436 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb437 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11cdb439 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb43c push edx */
  push32((uint32_t)(EDX));
  /* 11cdb43d push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdb43f call 0x11cde450 */
  push32(0x11cdb444u); f_11cde450();
  /* 11cdb444 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb447 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb44a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb44c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb44f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb452 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb455 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb456 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11cdb458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb45b push eax */
  push32((uint32_t)(EAX));
  /* 11cdb45c push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdb45e call 0x11cde450 */
  push32(0x11cdb463u); f_11cde450();
  /* 11cdb463 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb466 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb469 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb46b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb46e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb471 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb474 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb475 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11cdb477 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb47a push eax */
  push32((uint32_t)(EAX));
  /* 11cdb47b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdb47d call 0x11cde450 */
  push32(0x11cdb482u); f_11cde450();
  /* 11cdb482 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb485 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb488 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb48a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb48d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb490 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb493 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb494 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11cdb496 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb499 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb49a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdb49c call 0x11cde450 */
  push32(0x11cdb4a1u); f_11cde450();
  /* 11cdb4a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb4a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb4a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb4a9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb4ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb4af add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb4b2 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb4b3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11cdb4b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb4b8 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb4b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdb4bb call 0x11cde450 */
  push32(0x11cdb4c0u); f_11cde450();
  /* 11cdb4c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb4c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb4c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb4c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb4cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb4ce add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb4d1 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb4d2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11cdb4d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb4d7 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb4d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdb4da call 0x11cde450 */
  push32(0x11cdb4dfu); f_11cde450();
  /* 11cdb4df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb4e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb4e5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb4e7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb4ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb4ed add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb4f0 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb4f1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11cdb4f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb4f6 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb4f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdb4f9 call 0x11cde450 */
  push32(0x11cdb4feu); f_11cde450();
  /* 11cdb4fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb501 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb504 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb506 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb509 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb50c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb50f push edx */
  push32((uint32_t)(EDX));
  /* 11cdb510 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11cdb512 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb515 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb516 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdb518 call 0x11cde450 */
  push32(0x11cdb51du); f_11cde450();
  /* 11cdb51d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb520 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb523 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb525 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb528 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb52b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb52e push edx */
  push32((uint32_t)(EDX));
  /* 11cdb52f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11cdb531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb534 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb535 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdb537 call 0x11cde450 */
  push32(0x11cdb53cu); f_11cde450();
  /* 11cdb53c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb53f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb542 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb544 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb547 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb54a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb54d push edx */
  push32((uint32_t)(EDX));
  /* 11cdb54e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11cdb550 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb553 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb554 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdb556 call 0x11cde450 */
  push32(0x11cdb55bu); f_11cde450();
  /* 11cdb55b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb55e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdb561 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb563 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdb566 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11cdb569:;
  /* 11cdb569 mov esp, ebp */
  ESP = (EBP);
  /* 11cdb56b pop ebp */
  EBP = (pop32());
  /* 11cdb56c ret  */
  ESPCHK(0x11cdb360u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11cdb570 (125 bytes, 49 insns) */
void f_11cdb570(void) {
  FTRACE(0x11cdb570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdb570 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdb571 mov ebp, esp */
  EBP = (ESP);
  /* 11cdb573 push ecx */
  push32((uint32_t)(ECX));
L_11cdb574:;
  /* 11cdb574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb577 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cdb57a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdb57c je 0x11cdb5e9 */
  if (C.zf) goto L_11cdb5e9;
  /* 11cdb57e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb581 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cdb584 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb587 jl 0x11cdb5ad */
  if ((C.sf!=C.of)) goto L_11cdb5ad;
  /* 11cdb589 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb58c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cdb58f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb592 jg 0x11cdb5ad */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdb5ad;
  /* 11cdb594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb597 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cdb59a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdb59d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb5a0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11cdb5a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb5a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb5a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cdb5ab jmp 0x11cdb5e7 */
  goto L_11cdb5e7;
L_11cdb5ad:;
  /* 11cdb5ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb5b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cdb5b3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb5b6 jne 0x11cdb5de */
  if (!C.zf) goto L_11cdb5de;
  /* 11cdb5b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb5bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cdb5be:;
  /* 11cdb5be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb5c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb5c4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11cdb5c7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11cdb5c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb5cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb5cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cdb5d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdb5d5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cdb5d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdb5da jne 0x11cdb5be */
  if (!C.zf) goto L_11cdb5be;
  /* 11cdb5dc jmp 0x11cdb5e7 */
  goto L_11cdb5e7;
L_11cdb5de:;
  /* 11cdb5de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb5e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb5e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11cdb5e7:;
  /* 11cdb5e7 jmp 0x11cdb574 */
  goto L_11cdb574;
L_11cdb5e9:;
  /* 11cdb5e9 mov esp, ebp */
  ESP = (EBP);
  /* 11cdb5eb pop ebp */
  EBP = (pop32());
  /* 11cdb5ec ret  */
  ESPCHK(0x11cdb570u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b5f0 @ 0x11cdb5f0 (147 bytes, 52 insns) */
void f_11cdb5f0(void) {
  FTRACE(0x11cdb5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdb5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdb5f1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdb5f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb5f7 jne 0x11cdb5fe */
  if (!C.zf) goto L_11cdb5fe;
  /* 11cdb5f9 jmp 0x11cdb681 */
  goto L_11cdb681;
L_11cdb5fe:;
  /* 11cdb5fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb601 cmp dword ptr [eax + 0xc], 0x11cff6ec */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11cff6ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb608 je 0x11cdb681 */
  if (C.zf) goto L_11cdb681;
  /* 11cdb60a push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb60c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb60f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cdb612 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb613 call 0x11ccbf50 */
  push32(0x11cdb618u); f_11ccbf50();
  /* 11cdb618 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb61b push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb61d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb620 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cdb623 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb624 call 0x11ccbf50 */
  push32(0x11cdb629u); f_11ccbf50();
  /* 11cdb629 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb62c push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb62e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb631 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11cdb634 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb635 call 0x11ccbf50 */
  push32(0x11cdb63au); f_11ccbf50();
  /* 11cdb63a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb63d push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb63f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb642 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11cdb645 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb646 call 0x11ccbf50 */
  push32(0x11cdb64bu); f_11ccbf50();
  /* 11cdb64b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb64e push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb653 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11cdb656 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb657 call 0x11ccbf50 */
  push32(0x11cdb65cu); f_11ccbf50();
  /* 11cdb65c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb65f push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb661 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb664 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11cdb667 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb668 call 0x11ccbf50 */
  push32(0x11cdb66du); f_11ccbf50();
  /* 11cdb66d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb670 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdb675 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11cdb678 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb679 call 0x11ccbf50 */
  push32(0x11cdb67eu); f_11ccbf50();
  /* 11cdb67e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdb681:;
  /* 11cdb681 pop ebp */
  EBP = (pop32());
  /* 11cdb682 ret  */
  ESPCHK(0x11cdb5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b690 @ 0x11cdb690 (928 bytes, 284 insns) */
void f_11cdb690(void) {
  FTRACE(0x11cdb690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdb690 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdb691 mov ebp, esp */
  EBP = (ESP);
  /* 11cdb693 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdb696 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11cdb69d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11cdb6a4 cmp dword ptr [0x11cff664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb6ab je 0x11cdb9e1 */
  if (C.zf) goto L_11cdb9e1;
  /* 11cdb6b1 cmp dword ptr [0x11cff674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb6b8 jne 0x11cdb6e0 */
  if (!C.zf) goto L_11cdb6e0;
  /* 11cdb6ba push 0x11cff674 */
  push32((uint32_t)(0x11cff674u));
  /* 11cdb6bf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11cdb6c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdb6c6 mov ax, word ptr [0x11cff6a8] */
  AX = (r16((uint32_t)(0x11cff6a8)));
  /* 11cdb6cc push eax */
  push32((uint32_t)(EAX));
  /* 11cdb6cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdb6cf call 0x11cde450 */
  push32(0x11cdb6d4u); f_11cde450();
  /* 11cdb6d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb6d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdb6d9 je 0x11cdb6e0 */
  if (C.zf) goto L_11cdb6e0;
  /* 11cdb6db jmp 0x11cdb9a2 */
  goto L_11cdb9a2;
L_11cdb6e0:;
  /* 11cdb6e0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11cdb6e2 push 0x11cfa500 */
  push32((uint32_t)(0x11cfa500u));
  /* 11cdb6e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb6e9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11cdb6ee call 0x11ccb4c0 */
  push32(0x11cdb6f3u); f_11ccb4c0();
  /* 11cdb6f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb6f6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11cdb6f9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11cdb6fb push 0x11cfa500 */
  push32((uint32_t)(0x11cfa500u));
  /* 11cdb700 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb702 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11cdb707 call 0x11ccb4c0 */
  push32(0x11cdb70cu); f_11ccb4c0();
  /* 11cdb70c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb70f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11cdb712 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11cdb714 push 0x11cfa500 */
  push32((uint32_t)(0x11cfa500u));
  /* 11cdb719 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb71b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11cdb720 call 0x11ccb4c0 */
  push32(0x11cdb725u); f_11ccb4c0();
  /* 11cdb725 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb728 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11cdb72b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11cdb72d push 0x11cfa500 */
  push32((uint32_t)(0x11cfa500u));
  /* 11cdb732 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb734 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11cdb739 call 0x11ccb4c0 */
  push32(0x11cdb73eu); f_11ccb4c0();
  /* 11cdb73e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb741 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11cdb744 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb748 je 0x11cdb75c */
  if (C.zf) goto L_11cdb75c;
  /* 11cdb74a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb74e je 0x11cdb75c */
  if (C.zf) goto L_11cdb75c;
  /* 11cdb750 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb754 je 0x11cdb75c */
  if (C.zf) goto L_11cdb75c;
  /* 11cdb756 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb75a jne 0x11cdb761 */
  if (!C.zf) goto L_11cdb761;
L_11cdb75c:;
  /* 11cdb75c jmp 0x11cdb9a2 */
  goto L_11cdb9a2;
L_11cdb761:;
  /* 11cdb761 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cdb764 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11cdb767 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11cdb76e jmp 0x11cdb779 */
  goto L_11cdb779;
L_11cdb770:;
  /* 11cdb770 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdb773 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb776 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11cdb779:;
  /* 11cdb779 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb780 jge 0x11cdb795 */
  if ((C.sf==C.of)) goto L_11cdb795;
  /* 11cdb782 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdb785 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11cdb788 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11cdb78a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdb78d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb790 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11cdb793 jmp 0x11cdb770 */
  goto L_11cdb770;
L_11cdb795:;
  /* 11cdb795 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11cdb798 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb799 mov ecx, dword ptr [0x11cff674] */
  ECX = (r32((uint32_t)(0x11cff674)));
  /* 11cdb79f push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb7a0 call dword ptr [0x11d01360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01360))), 0x11cdb7a6u);
  /* 11cdb7a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdb7a8 jne 0x11cdb7af */
  if (!C.zf) goto L_11cdb7af;
  /* 11cdb7aa jmp 0x11cdb9a2 */
  goto L_11cdb9a2;
L_11cdb7af:;
  /* 11cdb7af cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb7b3 jbe 0x11cdb7ba */
  if ((C.cf||C.zf)) goto L_11cdb7ba;
  /* 11cdb7b5 jmp 0x11cdb9a2 */
  goto L_11cdb9a2;
L_11cdb7ba:;
  /* 11cdb7ba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdb7bd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cdb7c3 mov dword ptr [0x11cfd000], edx */
  w32((uint32_t)(0x11cfd000), (EDX));
  /* 11cdb7c9 cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb7d0 jle 0x11cdb829 */
  if ((C.zf||C.sf!=C.of)) goto L_11cdb829;
  /* 11cdb7d2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11cdb7d5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cdb7d8 jmp 0x11cdb7e3 */
  goto L_11cdb7e3;
L_11cdb7da:;
  /* 11cdb7da mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdb7dd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb7e0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11cdb7e3:;
  /* 11cdb7e3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdb7e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdb7e8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cdb7ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdb7ec je 0x11cdb829 */
  if (C.zf) goto L_11cdb829;
  /* 11cdb7ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdb7f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdb7f3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11cdb7f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cdb7f8 je 0x11cdb829 */
  if (C.zf) goto L_11cdb829;
  /* 11cdb7fa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdb7fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb7ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cdb801 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11cdb804 jmp 0x11cdb80f */
  goto L_11cdb80f;
L_11cdb806:;
  /* 11cdb806 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdb809 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb80c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11cdb80f:;
  /* 11cdb80f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdb812 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb814 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11cdb817 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb81a jg 0x11cdb827 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdb827;
  /* 11cdb81c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cdb81f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb822 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11cdb825 jmp 0x11cdb806 */
  goto L_11cdb806;
L_11cdb827:;
  /* 11cdb827 jmp 0x11cdb7da */
  goto L_11cdb7da;
L_11cdb829:;
  /* 11cdb829 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdb82b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdb82d push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdb82f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cdb832 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb835 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb836 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11cdb83b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cdb83e push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb83f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdb841 call 0x11cd7660 */
  push32(0x11cdb846u); f_11cd7660();
  /* 11cdb846 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdb84b jne 0x11cdb852 */
  if (!C.zf) goto L_11cdb852;
  /* 11cdb84d jmp 0x11cdb9a2 */
  goto L_11cdb9a2;
L_11cdb852:;
  /* 11cdb852 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cdb855 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11cdb85a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cdb85d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11cdb860 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11cdb867 jmp 0x11cdb872 */
  goto L_11cdb872;
L_11cdb869:;
  /* 11cdb869 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdb86c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb86f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11cdb872:;
  /* 11cdb872 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb879 jge 0x11cdb890 */
  if ((C.sf==C.of)) goto L_11cdb890;
  /* 11cdb87b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cdb87e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11cdb882 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11cdb885 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cdb888 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb88b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11cdb88e jmp 0x11cdb869 */
  goto L_11cdb869;
L_11cdb890:;
  /* 11cdb890 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdb892 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdb894 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cdb897 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb89a push edx */
  push32((uint32_t)(EDX));
  /* 11cdb89b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11cdb8a0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cdb8a3 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb8a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdb8a6 call 0x11cde6f0 */
  push32(0x11cdb8abu); f_11cde6f0();
  /* 11cdb8ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb8ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdb8b0 jne 0x11cdb8b7 */
  if (!C.zf) goto L_11cdb8b7;
  /* 11cdb8b2 jmp 0x11cdb9a2 */
  goto L_11cdb9a2;
L_11cdb8b7:;
  /* 11cdb8b7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cdb8ba mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11cdb8bf cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb8c6 jle 0x11cdb923 */
  if ((C.zf||C.sf!=C.of)) goto L_11cdb923;
  /* 11cdb8c8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11cdb8cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11cdb8ce jmp 0x11cdb8d9 */
  goto L_11cdb8d9;
L_11cdb8d0:;
  /* 11cdb8d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdb8d3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb8d6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11cdb8d9:;
  /* 11cdb8d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdb8dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdb8de mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cdb8e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cdb8e2 je 0x11cdb923 */
  if (C.zf) goto L_11cdb923;
  /* 11cdb8e4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdb8e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdb8e9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11cdb8ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdb8ee je 0x11cdb923 */
  if (C.zf) goto L_11cdb923;
  /* 11cdb8f0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdb8f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdb8f5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cdb8f7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11cdb8fa jmp 0x11cdb905 */
  goto L_11cdb905;
L_11cdb8fc:;
  /* 11cdb8fc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdb8ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb902 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11cdb905:;
  /* 11cdb905 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdb908 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdb90a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11cdb90d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb910 jg 0x11cdb921 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdb921;
  /* 11cdb912 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdb915 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cdb918 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11cdb91f jmp 0x11cdb8fc */
  goto L_11cdb8fc;
L_11cdb921:;
  /* 11cdb921 jmp 0x11cdb8d0 */
  goto L_11cdb8d0;
L_11cdb923:;
  /* 11cdb923 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cdb926 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb929 mov dword ptr [0x11cfd00c], eax */
  w32((uint32_t)(0x11cfd00c), (EAX));
  /* 11cdb92e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cdb931 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb934 mov dword ptr [0x11cfd010], ecx */
  w32((uint32_t)(0x11cfd010), (ECX));
  /* 11cdb93a cmp dword ptr [0x11cff694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb941 je 0x11cdb954 */
  if (C.zf) goto L_11cdb954;
  /* 11cdb943 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb945 mov edx, dword ptr [0x11cff694] */
  EDX = (r32((uint32_t)(0x11cff694)));
  /* 11cdb94b push edx */
  push32((uint32_t)(EDX));
  /* 11cdb94c call 0x11ccbf50 */
  push32(0x11cdb951u); f_11ccbf50();
  /* 11cdb951 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdb954:;
  /* 11cdb954 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cdb957 mov dword ptr [0x11cff694], eax */
  w32((uint32_t)(0x11cff694), (EAX));
  /* 11cdb95c cmp dword ptr [0x11cff698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdb963 je 0x11cdb976 */
  if (C.zf) goto L_11cdb976;
  /* 11cdb965 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb967 mov ecx, dword ptr [0x11cff698] */
  ECX = (r32((uint32_t)(0x11cff698)));
  /* 11cdb96d push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb96e call 0x11ccbf50 */
  push32(0x11cdb973u); f_11ccbf50();
  /* 11cdb973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdb976:;
  /* 11cdb976 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cdb979 mov dword ptr [0x11cff698], edx */
  w32((uint32_t)(0x11cff698), (EDX));
  /* 11cdb97f push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb981 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cdb984 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb985 call 0x11ccbf50 */
  push32(0x11cdb98au); f_11ccbf50();
  /* 11cdb98a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb98d push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb98f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cdb992 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb993 call 0x11ccbf50 */
  push32(0x11cdb998u); f_11ccbf50();
  /* 11cdb998 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb99b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdb99d jmp 0x11cdba2c */
  goto L_11cdba2c;
L_11cdb9a2:;
  /* 11cdb9a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb9a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cdb9a7 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb9a8 call 0x11ccbf50 */
  push32(0x11cdb9adu); f_11ccbf50();
  /* 11cdb9ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb9b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb9b2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cdb9b5 push eax */
  push32((uint32_t)(EAX));
  /* 11cdb9b6 call 0x11ccbf50 */
  push32(0x11cdb9bbu); f_11ccbf50();
  /* 11cdb9bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb9be push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb9c0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cdb9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdb9c4 call 0x11ccbf50 */
  push32(0x11cdb9c9u); f_11ccbf50();
  /* 11cdb9c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb9cc push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb9ce mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cdb9d1 push edx */
  push32((uint32_t)(EDX));
  /* 11cdb9d2 call 0x11ccbf50 */
  push32(0x11cdb9d7u); f_11ccbf50();
  /* 11cdb9d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdb9da mov eax, 1 */
  EAX = (0x1u);
  /* 11cdb9df jmp 0x11cdba2c */
  goto L_11cdba2c;
L_11cdb9e1:;
  /* 11cdb9e1 mov dword ptr [0x11cfd00c], 0x11cfd016 */
  w32((uint32_t)(0x11cfd00c), (0x11cfd016u));
  /* 11cdb9eb mov dword ptr [0x11cfd010], 0x11cfd016 */
  w32((uint32_t)(0x11cfd010), (0x11cfd016u));
  /* 11cdb9f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdb9f7 mov eax, dword ptr [0x11cff694] */
  EAX = (r32((uint32_t)(0x11cff694)));
  /* 11cdb9fc push eax */
  push32((uint32_t)(EAX));
  /* 11cdb9fd call 0x11ccbf50 */
  push32(0x11cdba02u); f_11ccbf50();
  /* 11cdba02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdba05 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdba07 mov ecx, dword ptr [0x11cff698] */
  ECX = (r32((uint32_t)(0x11cff698)));
  /* 11cdba0d push ecx */
  push32((uint32_t)(ECX));
  /* 11cdba0e call 0x11ccbf50 */
  push32(0x11cdba13u); f_11ccbf50();
  /* 11cdba13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdba16 mov dword ptr [0x11cff694], 0 */
  w32((uint32_t)(0x11cff694), (0x0u));
  /* 11cdba20 mov dword ptr [0x11cff698], 0 */
  w32((uint32_t)(0x11cff698), (0x0u));
  /* 11cdba2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cdba2c:;
  /* 11cdba2c mov esp, ebp */
  ESP = (EBP);
  /* 11cdba2e pop ebp */
  EBP = (pop32());
  /* 11cdba2f ret  */
  ESPCHK(0x11cdb690u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ba30 @ 0x11cdba30 (7 bytes, 5 insns) */
void f_11cdba30(void) {
  FTRACE(0x11cdba30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdba30 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdba31 mov ebp, esp */
  EBP = (ESP);
  /* 11cdba33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdba35 pop ebp */
  EBP = (pop32());
  /* 11cdba36 ret  */
  ESPCHK(0x11cdba30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ba40 @ 0x11cdba40 (62 bytes, 35 insns) */
void f_11cdba40(void) {
  FTRACE(0x11cdba40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdba40 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdba41 mov ebp, esp */
  EBP = (ESP);
  /* 11cdba43 push esi */
  push32((uint32_t)(ESI));
  /* 11cdba44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdba46 push eax */
  push32((uint32_t)(EAX));
  /* 11cdba47 push eax */
  push32((uint32_t)(EAX));
  /* 11cdba48 push eax */
  push32((uint32_t)(EAX));
  /* 11cdba49 push eax */
  push32((uint32_t)(EAX));
  /* 11cdba4a push eax */
  push32((uint32_t)(EAX));
  /* 11cdba4b push eax */
  push32((uint32_t)(EAX));
  /* 11cdba4c push eax */
  push32((uint32_t)(EAX));
  /* 11cdba4d push eax */
  push32((uint32_t)(EAX));
  /* 11cdba4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdba51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cdba54:;
  /* 11cdba54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cdba56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11cdba58 je 0x11cdba61 */
  if (C.zf) goto L_11cdba61;
  /* 11cdba5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11cdba5b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11cdba5b");
  /* 11cdba5f jmp 0x11cdba54 */
  goto L_11cdba54;
L_11cdba61:;
  /* 11cdba61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdba64 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cdba67 nop  */
  /* nop */
L_11cdba68:;
  /* 11cdba68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cdba69 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cdba6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11cdba6d je 0x11cdba76 */
  if (C.zf) goto L_11cdba76;
  /* 11cdba6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cdba70 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11cdba70");
  /* 11cdba74 jae 0x11cdba68 */
  if (!C.cf) goto L_11cdba68;
L_11cdba76:;
  /* 11cdba76 mov eax, ecx */
  EAX = (ECX);
  /* 11cdba78 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdba7b pop esi */
  ESI = (pop32());
  /* 11cdba7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cdba7d ret  */
  ESPCHK(0x11cdba40u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11cdba80 (56 bytes, 31 insns) */
void f_11cdba80(void) {
  FTRACE(0x11cdba80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdba80 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdba81 mov ebp, esp */
  EBP = (ESP);
  /* 11cdba83 push edi */
  push32((uint32_t)(EDI));
  /* 11cdba84 push esi */
  push32((uint32_t)(ESI));
  /* 11cdba85 push ebx */
  push32((uint32_t)(EBX));
  /* 11cdba86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdba89 jecxz 0x11cdbab1 */
  x86_unimpl("jecxz @ 0x11cdba89");
  /* 11cdba8b mov ebx, ecx */
  EBX = (ECX);
  /* 11cdba8d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdba90 mov esi, edi */
  ESI = (EDI);
  /* 11cdba92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdba94 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11cdba96 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdba98 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdba9a mov edi, esi */
  EDI = (ESI);
  /* 11cdba9c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdba9f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11cdbaa1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11cdbaa4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdbaa6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cdbaa9 ja 0x11cdbaaf */
  if ((!C.cf&&!C.zf)) goto L_11cdbaaf;
  /* 11cdbaab je 0x11cdbab1 */
  if (C.zf) goto L_11cdbab1;
  /* 11cdbaad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cdbaae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11cdbaaf:;
  /* 11cdbaaf not ecx */
  ECX = (~(ECX));
L_11cdbab1:;
  /* 11cdbab1 mov eax, ecx */
  EAX = (ECX);
  /* 11cdbab3 pop ebx */
  EBX = (pop32());
  /* 11cdbab4 pop esi */
  ESI = (pop32());
  /* 11cdbab5 pop edi */
  EDI = (pop32());
  /* 11cdbab6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cdbab7 ret  */
  ESPCHK(0x11cdba80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bac0 @ 0x11cdbac0 (58 bytes, 32 insns) */
void f_11cdbac0(void) {
  FTRACE(0x11cdbac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdbac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdbac1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdbac3 push esi */
  push32((uint32_t)(ESI));
  /* 11cdbac4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdbac6 push eax */
  push32((uint32_t)(EAX));
  /* 11cdbac7 push eax */
  push32((uint32_t)(EAX));
  /* 11cdbac8 push eax */
  push32((uint32_t)(EAX));
  /* 11cdbac9 push eax */
  push32((uint32_t)(EAX));
  /* 11cdbaca push eax */
  push32((uint32_t)(EAX));
  /* 11cdbacb push eax */
  push32((uint32_t)(EAX));
  /* 11cdbacc push eax */
  push32((uint32_t)(EAX));
  /* 11cdbacd push eax */
  push32((uint32_t)(EAX));
  /* 11cdbace mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdbad1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cdbad4:;
  /* 11cdbad4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cdbad6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11cdbad8 je 0x11cdbae1 */
  if (C.zf) goto L_11cdbae1;
  /* 11cdbada inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11cdbadb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11cdbadb");
  /* 11cdbadf jmp 0x11cdbad4 */
  goto L_11cdbad4;
L_11cdbae1:;
  /* 11cdbae1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11cdbae4:;
  /* 11cdbae4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cdbae6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11cdbae8 je 0x11cdbaf4 */
  if (C.zf) goto L_11cdbaf4;
  /* 11cdbaea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cdbaeb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11cdbaeb");
  /* 11cdbaef jae 0x11cdbae4 */
  if (!C.cf) goto L_11cdbae4;
  /* 11cdbaf1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11cdbaf4:;
  /* 11cdbaf4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbaf7 pop esi */
  ESI = (pop32());
  /* 11cdbaf8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cdbaf9 ret  */
  ESPCHK(0x11cdbac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bb00 @ 0x11cdbb00 (512 bytes, 147 insns) */
void f_11cdbb00(void) {
  FTRACE(0x11cdbb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdbb00 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdbb01 mov ebp, esp */
  EBP = (ESP);
  /* 11cdbb03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdbb06 cmp dword ptr [0x11cff6e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbb0d jne 0x11cdbb32 */
  if (!C.zf) goto L_11cdbb32;
  /* 11cdbb0f call 0x11cdc5d0 */
  push32(0x11cdbb14u); f_11cdc5d0();
  /* 11cdbb14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdbb16 je 0x11cdbb22 */
  if (C.zf) goto L_11cdbb22;
  /* 11cdbb18 mov eax, dword ptr [0x11d01320] */
  EAX = (r32((uint32_t)(0x11d01320)));
  /* 11cdbb1d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cdbb20 jmp 0x11cdbb29 */
  goto L_11cdbb29;
L_11cdbb22:;
  /* 11cdbb22 mov dword ptr [ebp - 8], 0x11cdc620 */
  w32((uint32_t)(EBP + -0x8), (0x11cdc620u));
L_11cdbb29:;
  /* 11cdbb29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdbb2c mov dword ptr [0x11cff6e0], ecx */
  w32((uint32_t)(0x11cff6e0), (ECX));
L_11cdbb32:;
  /* 11cdbb32 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbb36 jne 0x11cdbb42 */
  if (!C.zf) goto L_11cdbb42;
  /* 11cdbb38 call 0x11cdc420 */
  push32(0x11cdbb3du); f_11cdc420();
  /* 11cdbb3d jmp 0x11cdbc0e */
  goto L_11cdbc0e;
L_11cdbb42:;
  /* 11cdbb42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdbb45 mov dword ptr [0x11cff6d0], edx */
  w32((uint32_t)(0x11cff6d0), (EDX));
  /* 11cdbb4b cmp dword ptr [0x11cff6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbb52 je 0x11cdbb74 */
  if (C.zf) goto L_11cdbb74;
  /* 11cdbb54 mov eax, dword ptr [0x11cff6d0] */
  EAX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdbb59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cdbb5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdbb5e je 0x11cdbb74 */
  if (C.zf) goto L_11cdbb74;
  /* 11cdbb60 push 0x11cff6d0 */
  push32((uint32_t)(0x11cff6d0u));
  /* 11cdbb65 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11cdbb67 push 0x11cfdfc0 */
  push32((uint32_t)(0x11cfdfc0u));
  /* 11cdbb6c call 0x11cdbd00 */
  push32(0x11cdbb71u); f_11cdbd00();
  /* 11cdbb71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdbb74:;
  /* 11cdbb74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdbb77 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbb7a mov dword ptr [0x11cff6d4], edx */
  w32((uint32_t)(0x11cff6d4), (EDX));
  /* 11cdbb80 cmp dword ptr [0x11cff6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbb87 je 0x11cdbba9 */
  if (C.zf) goto L_11cdbba9;
  /* 11cdbb89 mov eax, dword ptr [0x11cff6d4] */
  EAX = (r32((uint32_t)(0x11cff6d4)));
  /* 11cdbb8e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cdbb91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdbb93 je 0x11cdbba9 */
  if (C.zf) goto L_11cdbba9;
  /* 11cdbb95 push 0x11cff6d4 */
  push32((uint32_t)(0x11cff6d4u));
  /* 11cdbb9a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11cdbb9c push 0x11cfdf08 */
  push32((uint32_t)(0x11cfdf08u));
  /* 11cdbba1 call 0x11cdbd00 */
  push32(0x11cdbba6u); f_11cdbd00();
  /* 11cdbba6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdbba9:;
  /* 11cdbba9 mov dword ptr [0x11cff6d8], 0 */
  w32((uint32_t)(0x11cff6d8), (0x0u));
  /* 11cdbbb3 cmp dword ptr [0x11cff6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbbba je 0x11cdbbed */
  if (C.zf) goto L_11cdbbed;
  /* 11cdbbbc mov edx, dword ptr [0x11cff6d0] */
  EDX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdbbc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cdbbc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdbbc7 je 0x11cdbbed */
  if (C.zf) goto L_11cdbbed;
  /* 11cdbbc9 cmp dword ptr [0x11cff6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbbd0 je 0x11cdbbe6 */
  if (C.zf) goto L_11cdbbe6;
  /* 11cdbbd2 mov ecx, dword ptr [0x11cff6d4] */
  ECX = (r32((uint32_t)(0x11cff6d4)));
  /* 11cdbbd8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cdbbdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cdbbdd je 0x11cdbbe6 */
  if (C.zf) goto L_11cdbbe6;
  /* 11cdbbdf call 0x11cdbd90 */
  push32(0x11cdbbe4u); f_11cdbd90();
  /* 11cdbbe4 jmp 0x11cdbbeb */
  goto L_11cdbbeb;
L_11cdbbe6:;
  /* 11cdbbe6 call 0x11cdc180 */
  push32(0x11cdbbebu); f_11cdc180();
L_11cdbbeb:;
  /* 11cdbbeb jmp 0x11cdbc0e */
  goto L_11cdbc0e;
L_11cdbbed:;
  /* 11cdbbed cmp dword ptr [0x11cff6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbbf4 je 0x11cdbc09 */
  if (C.zf) goto L_11cdbc09;
  /* 11cdbbf6 mov eax, dword ptr [0x11cff6d4] */
  EAX = (r32((uint32_t)(0x11cff6d4)));
  /* 11cdbbfb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cdbbfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdbc00 je 0x11cdbc09 */
  if (C.zf) goto L_11cdbc09;
  /* 11cdbc02 call 0x11cdc320 */
  push32(0x11cdbc07u); f_11cdc320();
  /* 11cdbc07 jmp 0x11cdbc0e */
  goto L_11cdbc0e;
L_11cdbc09:;
  /* 11cdbc09 call 0x11cdc420 */
  push32(0x11cdbc0eu); f_11cdc420();
L_11cdbc0e:;
  /* 11cdbc0e cmp dword ptr [0x11cff6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbc15 jne 0x11cdbc1e */
  if (!C.zf) goto L_11cdbc1e;
  /* 11cdbc17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdbc19 jmp 0x11cdbcfc */
  goto L_11cdbcfc;
L_11cdbc1e:;
  /* 11cdbc1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdbc21 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbc27 push edx */
  push32((uint32_t)(EDX));
  /* 11cdbc28 call 0x11cdc450 */
  push32(0x11cdbc2du); f_11cdc450();
  /* 11cdbc2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbc30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdbc33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbc37 je 0x11cdbc4c */
  if (C.zf) goto L_11cdbc4c;
  /* 11cdbc39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdbc3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdbc41 push eax */
  push32((uint32_t)(EAX));
  /* 11cdbc42 call dword ptr [0x11d01330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01330))), 0x11cdbc48u);
  /* 11cdbc48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdbc4a jne 0x11cdbc53 */
  if (!C.zf) goto L_11cdbc53;
L_11cdbc4c:;
  /* 11cdbc4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdbc4e jmp 0x11cdbcfc */
  goto L_11cdbcfc;
L_11cdbc53:;
  /* 11cdbc53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdbc55 mov ecx, dword ptr [0x11cff6c0] */
  ECX = (r32((uint32_t)(0x11cff6c0)));
  /* 11cdbc5b push ecx */
  push32((uint32_t)(ECX));
  /* 11cdbc5c call dword ptr [0x11d01328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01328))), 0x11cdbc62u);
  /* 11cdbc62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdbc64 jne 0x11cdbc6d */
  if (!C.zf) goto L_11cdbc6d;
  /* 11cdbc66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdbc68 jmp 0x11cdbcfc */
  goto L_11cdbcfc;
L_11cdbc6d:;
  /* 11cdbc6d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbc71 je 0x11cdbc98 */
  if (C.zf) goto L_11cdbc98;
  /* 11cdbc73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdbc76 mov ax, word ptr [0x11cff6c0] */
  AX = (r16((uint32_t)(0x11cff6c0)));
  /* 11cdbc7c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11cdbc7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdbc82 mov dx, word ptr [0x11cff6dc] */
  DX = (r16((uint32_t)(0x11cff6dc)));
  /* 11cdbc89 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11cdbc8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdbc90 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cdbc94 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11cdbc98:;
  /* 11cdbc98 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbc9c je 0x11cdbcf7 */
  if (C.zf) goto L_11cdbcf7;
  /* 11cdbc9e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11cdbca0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdbca3 push edx */
  push32((uint32_t)(EDX));
  /* 11cdbca4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11cdbca9 mov eax, dword ptr [0x11cff6c0] */
  EAX = (r32((uint32_t)(0x11cff6c0)));
  /* 11cdbcae push eax */
  push32((uint32_t)(EAX));
  /* 11cdbcaf call dword ptr [0x11cff6e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff6e0))), 0x11cdbcb5u);
  /* 11cdbcb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdbcb7 jne 0x11cdbcbd */
  if (!C.zf) goto L_11cdbcbd;
  /* 11cdbcb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdbcbb jmp 0x11cdbcfc */
  goto L_11cdbcfc;
L_11cdbcbd:;
  /* 11cdbcbd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11cdbcbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdbcc2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbcc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdbcc6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11cdbccb mov edx, dword ptr [0x11cff6dc] */
  EDX = (r32((uint32_t)(0x11cff6dc)));
  /* 11cdbcd1 push edx */
  push32((uint32_t)(EDX));
  /* 11cdbcd2 call dword ptr [0x11cff6e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff6e0))), 0x11cdbcd8u);
  /* 11cdbcd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdbcda jne 0x11cdbce0 */
  if (!C.zf) goto L_11cdbce0;
  /* 11cdbcdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdbcde jmp 0x11cdbcfc */
  goto L_11cdbcfc;
L_11cdbce0:;
  /* 11cdbce0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11cdbce2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdbce5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbcea push eax */
  push32((uint32_t)(EAX));
  /* 11cdbceb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdbcee push ecx */
  push32((uint32_t)(ECX));
  /* 11cdbcef call 0x11cd0790 */
  push32(0x11cdbcf4u); f_11cd0790();
  /* 11cdbcf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdbcf7:;
  /* 11cdbcf7 mov eax, 1 */
  EAX = (0x1u);
L_11cdbcfc:;
  /* 11cdbcfc mov esp, ebp */
  ESP = (EBP);
  /* 11cdbcfe pop ebp */
  EBP = (pop32());
  /* 11cdbcff ret  */
  ESPCHK(0x11cdbb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bd00 @ 0x11cdbd00 (130 bytes, 47 insns) */
void f_11cdbd00(void) {
  FTRACE(0x11cdbd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdbd00 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdbd01 mov ebp, esp */
  EBP = (ESP);
  /* 11cdbd03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdbd06 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11cdbd0d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11cdbd14:;
  /* 11cdbd14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdbd17 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbd1a jg 0x11cdbd7e */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdbd7e;
  /* 11cdbd1c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbd20 je 0x11cdbd7e */
  if (C.zf) goto L_11cdbd7e;
  /* 11cdbd22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdbd25 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbd28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cdbd29 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdbd2b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cdbd2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdbd30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdbd33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdbd36 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11cdbd39 push eax */
  push32((uint32_t)(EAX));
  /* 11cdbd3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdbd3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cdbd3f push edx */
  push32((uint32_t)(EDX));
  /* 11cdbd40 call 0x11cde960 */
  push32(0x11cdbd45u); f_11cde960();
  /* 11cdbd45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbd48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cdbd4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbd4f jne 0x11cdbd62 */
  if (!C.zf) goto L_11cdbd62;
  /* 11cdbd51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdbd54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdbd57 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11cdbd5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdbd5e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cdbd60 jmp 0x11cdbd7c */
  goto L_11cdbd7c;
L_11cdbd62:;
  /* 11cdbd62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbd66 jge 0x11cdbd73 */
  if ((C.sf==C.of)) goto L_11cdbd73;
  /* 11cdbd68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdbd6b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdbd6e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11cdbd71 jmp 0x11cdbd7c */
  goto L_11cdbd7c;
L_11cdbd73:;
  /* 11cdbd73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdbd76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbd79 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11cdbd7c:;
  /* 11cdbd7c jmp 0x11cdbd14 */
  goto L_11cdbd14;
L_11cdbd7e:;
  /* 11cdbd7e mov esp, ebp */
  ESP = (EBP);
  /* 11cdbd80 pop ebp */
  EBP = (pop32());
  /* 11cdbd81 ret  */
  ESPCHK(0x11cdbd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bd90 @ 0x11cdbd90 (186 bytes, 50 insns) */
void f_11cdbd90(void) {
  FTRACE(0x11cdbd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdbd90 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdbd91 mov ebp, esp */
  EBP = (ESP);
  /* 11cdbd93 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdbd94 mov eax, dword ptr [0x11cff6d0] */
  EAX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdbd99 push eax */
  push32((uint32_t)(EAX));
  /* 11cdbd9a call 0x11cd0a80 */
  push32(0x11cdbd9fu); f_11cd0a80();
  /* 11cdbd9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbda2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdbda4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbda7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11cdbdaa mov dword ptr [0x11cff6cc], ecx */
  w32((uint32_t)(0x11cff6cc), (ECX));
  /* 11cdbdb0 mov edx, dword ptr [0x11cff6d4] */
  EDX = (r32((uint32_t)(0x11cff6d4)));
  /* 11cdbdb6 push edx */
  push32((uint32_t)(EDX));
  /* 11cdbdb7 call 0x11cd0a80 */
  push32(0x11cdbdbcu); f_11cd0a80();
  /* 11cdbdbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbdbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdbdc1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbdc4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11cdbdc7 mov dword ptr [0x11cff6c4], ecx */
  w32((uint32_t)(0x11cff6c4), (ECX));
  /* 11cdbdcd mov dword ptr [0x11cff6c0], 0 */
  w32((uint32_t)(0x11cff6c0), (0x0u));
  /* 11cdbdd7 cmp dword ptr [0x11cff6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbdde je 0x11cdbde9 */
  if (C.zf) goto L_11cdbde9;
  /* 11cdbde0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11cdbde7 jmp 0x11cdbdfb */
  goto L_11cdbdfb;
L_11cdbde9:;
  /* 11cdbde9 mov edx, dword ptr [0x11cff6d0] */
  EDX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdbdef push edx */
  push32((uint32_t)(EDX));
  /* 11cdbdf0 call 0x11cdc830 */
  push32(0x11cdbdf5u); f_11cdc830();
  /* 11cdbdf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbdf8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cdbdfb:;
  /* 11cdbdfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdbdfe mov dword ptr [0x11cff6c8], eax */
  w32((uint32_t)(0x11cff6c8), (EAX));
  /* 11cdbe03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdbe05 push 0x11cdbe50 */
  push32((uint32_t)(0x11cdbe50u));
  /* 11cdbe0a call dword ptr [0x11d0131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0131c))), 0x11cdbe10u);
  /* 11cdbe10 mov ecx, dword ptr [0x11cff6d8] */
  ECX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdbe16 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11cdbe1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdbe1e je 0x11cdbe3c */
  if (C.zf) goto L_11cdbe3c;
  /* 11cdbe20 mov edx, dword ptr [0x11cff6d8] */
  EDX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdbe26 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdbe2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cdbe2e je 0x11cdbe3c */
  if (C.zf) goto L_11cdbe3c;
  /* 11cdbe30 mov eax, dword ptr [0x11cff6d8] */
  EAX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdbe35 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11cdbe38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdbe3a jne 0x11cdbe46 */
  if (!C.zf) goto L_11cdbe46;
L_11cdbe3c:;
  /* 11cdbe3c mov dword ptr [0x11cff6d8], 0 */
  w32((uint32_t)(0x11cff6d8), (0x0u));
L_11cdbe46:;
  /* 11cdbe46 mov esp, ebp */
  ESP = (EBP);
  /* 11cdbe48 pop ebp */
  EBP = (pop32());
  /* 11cdbe49 ret  */
  ESPCHK(0x11cdbd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001be50 @ 0x11cdbe50 (804 bytes, 220 insns) */
void f_11cdbe50(void) {
  FTRACE(0x11cdbe50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdbe50 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdbe51 mov ebp, esp */
  EBP = (ESP);
  /* 11cdbe53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdbe56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdbe59 push eax */
  push32((uint32_t)(EAX));
  /* 11cdbe5a call 0x11cdc7b0 */
  push32(0x11cdbe5fu); f_11cdc7b0();
  /* 11cdbe5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbe62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11cdbe65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11cdbe67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11cdbe6a push ecx */
  push32((uint32_t)(ECX));
  /* 11cdbe6b mov edx, dword ptr [0x11cff6c4] */
  EDX = (r32((uint32_t)(0x11cff6c4)));
  /* 11cdbe71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdbe73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdbe75 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdbe7b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbe81 push edx */
  push32((uint32_t)(EDX));
  /* 11cdbe82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdbe85 push eax */
  push32((uint32_t)(EAX));
  /* 11cdbe86 call dword ptr [0x11cff6e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff6e0))), 0x11cdbe8cu);
  /* 11cdbe8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdbe8e jne 0x11cdbea4 */
  if (!C.zf) goto L_11cdbea4;
  /* 11cdbe90 mov dword ptr [0x11cff6d8], 0 */
  w32((uint32_t)(0x11cff6d8), (0x0u));
  /* 11cdbe9a mov eax, 1 */
  EAX = (0x1u);
  /* 11cdbe9f jmp 0x11cdc16e */
  goto L_11cdc16e;
L_11cdbea4:;
  /* 11cdbea4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11cdbea7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdbea8 mov edx, dword ptr [0x11cff6d4] */
  EDX = (r32((uint32_t)(0x11cff6d4)));
  /* 11cdbeae push edx */
  push32((uint32_t)(EDX));
  /* 11cdbeaf call 0x11cde960 */
  push32(0x11cdbeb4u); f_11cde960();
  /* 11cdbeb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbeb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdbeb9 jne 0x11cdbfdf */
  if (!C.zf) goto L_11cdbfdf;
  /* 11cdbebf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11cdbec1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11cdbec4 push eax */
  push32((uint32_t)(EAX));
  /* 11cdbec5 mov ecx, dword ptr [0x11cff6cc] */
  ECX = (r32((uint32_t)(0x11cff6cc)));
  /* 11cdbecb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdbecd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdbecf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11cdbed5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbedb push ecx */
  push32((uint32_t)(ECX));
  /* 11cdbedc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdbedf push edx */
  push32((uint32_t)(EDX));
  /* 11cdbee0 call dword ptr [0x11cff6e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff6e0))), 0x11cdbee6u);
  /* 11cdbee6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdbee8 jne 0x11cdbefe */
  if (!C.zf) goto L_11cdbefe;
  /* 11cdbeea mov dword ptr [0x11cff6d8], 0 */
  w32((uint32_t)(0x11cff6d8), (0x0u));
  /* 11cdbef4 mov eax, 1 */
  EAX = (0x1u);
  /* 11cdbef9 jmp 0x11cdc16e */
  goto L_11cdc16e;
L_11cdbefe:;
  /* 11cdbefe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11cdbf01 push eax */
  push32((uint32_t)(EAX));
  /* 11cdbf02 mov ecx, dword ptr [0x11cff6d0] */
  ECX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdbf08 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdbf09 call 0x11cde960 */
  push32(0x11cdbf0eu); f_11cde960();
  /* 11cdbf0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbf11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdbf13 jne 0x11cdbf40 */
  if (!C.zf) goto L_11cdbf40;
  /* 11cdbf15 mov edx, dword ptr [0x11cff6d8] */
  EDX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdbf1b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdbf21 mov dword ptr [0x11cff6d8], edx */
  w32((uint32_t)(0x11cff6d8), (EDX));
  /* 11cdbf27 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdbf2a mov dword ptr [0x11cff6dc], eax */
  w32((uint32_t)(0x11cff6dc), (EAX));
  /* 11cdbf2f mov ecx, dword ptr [0x11cff6dc] */
  ECX = (r32((uint32_t)(0x11cff6dc)));
  /* 11cdbf35 mov dword ptr [0x11cff6c0], ecx */
  w32((uint32_t)(0x11cff6c0), (ECX));
  /* 11cdbf3b jmp 0x11cdbfdf */
  goto L_11cdbfdf;
L_11cdbf40:;
  /* 11cdbf40 mov edx, dword ptr [0x11cff6d8] */
  EDX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdbf46 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdbf49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cdbf4b jne 0x11cdbfdf */
  if (!C.zf) goto L_11cdbfdf;
  /* 11cdbf51 cmp dword ptr [0x11cff6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbf58 je 0x11cdbfad */
  if (C.zf) goto L_11cdbfad;
  /* 11cdbf5a mov eax, dword ptr [0x11cff6c8] */
  EAX = (r32((uint32_t)(0x11cff6c8)));
  /* 11cdbf5f push eax */
  push32((uint32_t)(EAX));
  /* 11cdbf60 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11cdbf63 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdbf64 mov edx, dword ptr [0x11cff6d0] */
  EDX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdbf6a push edx */
  push32((uint32_t)(EDX));
  /* 11cdbf6b call 0x11cdea30 */
  push32(0x11cdbf70u); f_11cdea30();
  /* 11cdbf70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbf73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdbf75 jne 0x11cdbfad */
  if (!C.zf) goto L_11cdbfad;
  /* 11cdbf77 mov eax, dword ptr [0x11cff6d8] */
  EAX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdbf7c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11cdbf7e mov dword ptr [0x11cff6d8], eax */
  w32((uint32_t)(0x11cff6d8), (EAX));
  /* 11cdbf83 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdbf86 mov dword ptr [0x11cff6dc], ecx */
  w32((uint32_t)(0x11cff6dc), (ECX));
  /* 11cdbf8c mov edx, dword ptr [0x11cff6d0] */
  EDX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdbf92 push edx */
  push32((uint32_t)(EDX));
  /* 11cdbf93 call 0x11cd0a80 */
  push32(0x11cdbf98u); f_11cd0a80();
  /* 11cdbf98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbf9b cmp eax, dword ptr [0x11cff6c8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cff6c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbfa1 jne 0x11cdbfab */
  if (!C.zf) goto L_11cdbfab;
  /* 11cdbfa3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdbfa6 mov dword ptr [0x11cff6c0], eax */
  w32((uint32_t)(0x11cff6c0), (EAX));
L_11cdbfab:;
  /* 11cdbfab jmp 0x11cdbfdf */
  goto L_11cdbfdf;
L_11cdbfad:;
  /* 11cdbfad mov ecx, dword ptr [0x11cff6d8] */
  ECX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdbfb3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cdbfb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdbfb8 jne 0x11cdbfdf */
  if (!C.zf) goto L_11cdbfdf;
  /* 11cdbfba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdbfbd push edx */
  push32((uint32_t)(EDX));
  /* 11cdbfbe call 0x11cdc4f0 */
  push32(0x11cdbfc3u); f_11cdc4f0();
  /* 11cdbfc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdbfc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdbfc8 je 0x11cdbfdf */
  if (C.zf) goto L_11cdbfdf;
  /* 11cdbfca mov eax, dword ptr [0x11cff6d8] */
  EAX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdbfcf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11cdbfd1 mov dword ptr [0x11cff6d8], eax */
  w32((uint32_t)(0x11cff6d8), (EAX));
  /* 11cdbfd6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdbfd9 mov dword ptr [0x11cff6dc], ecx */
  w32((uint32_t)(0x11cff6dc), (ECX));
L_11cdbfdf:;
  /* 11cdbfdf mov edx, dword ptr [0x11cff6d8] */
  EDX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdbfe5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdbfeb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdbff1 je 0x11cdc161 */
  if (C.zf) goto L_11cdc161;
  /* 11cdbff7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11cdbff9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11cdbffc push eax */
  push32((uint32_t)(EAX));
  /* 11cdbffd mov ecx, dword ptr [0x11cff6cc] */
  ECX = (r32((uint32_t)(0x11cff6cc)));
  /* 11cdc003 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdc005 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc007 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11cdc00d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc013 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc014 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc017 push edx */
  push32((uint32_t)(EDX));
  /* 11cdc018 call dword ptr [0x11cff6e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff6e0))), 0x11cdc01eu);
  /* 11cdc01e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc020 jne 0x11cdc036 */
  if (!C.zf) goto L_11cdc036;
  /* 11cdc022 mov dword ptr [0x11cff6d8], 0 */
  w32((uint32_t)(0x11cff6d8), (0x0u));
  /* 11cdc02c mov eax, 1 */
  EAX = (0x1u);
  /* 11cdc031 jmp 0x11cdc16e */
  goto L_11cdc16e;
L_11cdc036:;
  /* 11cdc036 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11cdc039 push eax */
  push32((uint32_t)(EAX));
  /* 11cdc03a mov ecx, dword ptr [0x11cff6d0] */
  ECX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdc040 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc041 call 0x11cde960 */
  push32(0x11cdc046u); f_11cde960();
  /* 11cdc046 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc04b jne 0x11cdc100 */
  if (!C.zf) goto L_11cdc100;
  /* 11cdc051 mov edx, dword ptr [0x11cff6d8] */
  EDX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdc057 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11cdc05a mov dword ptr [0x11cff6d8], edx */
  w32((uint32_t)(0x11cff6d8), (EDX));
  /* 11cdc060 cmp dword ptr [0x11cff6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc067 je 0x11cdc08a */
  if (C.zf) goto L_11cdc08a;
  /* 11cdc069 mov eax, dword ptr [0x11cff6d8] */
  EAX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdc06e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11cdc071 mov dword ptr [0x11cff6d8], eax */
  w32((uint32_t)(0x11cff6d8), (EAX));
  /* 11cdc076 cmp dword ptr [0x11cff6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc07d jne 0x11cdc088 */
  if (!C.zf) goto L_11cdc088;
  /* 11cdc07f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc082 mov dword ptr [0x11cff6c0], ecx */
  w32((uint32_t)(0x11cff6c0), (ECX));
L_11cdc088:;
  /* 11cdc088 jmp 0x11cdc0fe */
  goto L_11cdc0fe;
L_11cdc08a:;
  /* 11cdc08a cmp dword ptr [0x11cff6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc091 je 0x11cdc0df */
  if (C.zf) goto L_11cdc0df;
  /* 11cdc093 mov edx, dword ptr [0x11cff6d0] */
  EDX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdc099 push edx */
  push32((uint32_t)(EDX));
  /* 11cdc09a call 0x11cd0a80 */
  push32(0x11cdc09fu); f_11cd0a80();
  /* 11cdc09f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc0a2 cmp eax, dword ptr [0x11cff6c8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cff6c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc0a8 jne 0x11cdc0df */
  if (!C.zf) goto L_11cdc0df;
  /* 11cdc0aa push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdc0ac mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc0af push eax */
  push32((uint32_t)(EAX));
  /* 11cdc0b0 call 0x11cdc540 */
  push32(0x11cdc0b5u); f_11cdc540();
  /* 11cdc0b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc0b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc0ba je 0x11cdc0dd */
  if (C.zf) goto L_11cdc0dd;
  /* 11cdc0bc mov ecx, dword ptr [0x11cff6d8] */
  ECX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdc0c2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11cdc0c5 mov dword ptr [0x11cff6d8], ecx */
  w32((uint32_t)(0x11cff6d8), (ECX));
  /* 11cdc0cb cmp dword ptr [0x11cff6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc0d2 jne 0x11cdc0dd */
  if (!C.zf) goto L_11cdc0dd;
  /* 11cdc0d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc0d7 mov dword ptr [0x11cff6c0], edx */
  w32((uint32_t)(0x11cff6c0), (EDX));
L_11cdc0dd:;
  /* 11cdc0dd jmp 0x11cdc0fe */
  goto L_11cdc0fe;
L_11cdc0df:;
  /* 11cdc0df mov eax, dword ptr [0x11cff6d8] */
  EAX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdc0e4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11cdc0e7 mov dword ptr [0x11cff6d8], eax */
  w32((uint32_t)(0x11cff6d8), (EAX));
  /* 11cdc0ec cmp dword ptr [0x11cff6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc0f3 jne 0x11cdc0fe */
  if (!C.zf) goto L_11cdc0fe;
  /* 11cdc0f5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc0f8 mov dword ptr [0x11cff6c0], ecx */
  w32((uint32_t)(0x11cff6c0), (ECX));
L_11cdc0fe:;
  /* 11cdc0fe jmp 0x11cdc161 */
  goto L_11cdc161;
L_11cdc100:;
  /* 11cdc100 cmp dword ptr [0x11cff6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc107 jne 0x11cdc161 */
  if (!C.zf) goto L_11cdc161;
  /* 11cdc109 cmp dword ptr [0x11cff6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc110 je 0x11cdc161 */
  if (C.zf) goto L_11cdc161;
  /* 11cdc112 mov edx, dword ptr [0x11cff6c8] */
  EDX = (r32((uint32_t)(0x11cff6c8)));
  /* 11cdc118 push edx */
  push32((uint32_t)(EDX));
  /* 11cdc119 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11cdc11c push eax */
  push32((uint32_t)(EAX));
  /* 11cdc11d mov ecx, dword ptr [0x11cff6d0] */
  ECX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdc123 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc124 call 0x11cdea30 */
  push32(0x11cdc129u); f_11cdea30();
  /* 11cdc129 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc12c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc12e jne 0x11cdc161 */
  if (!C.zf) goto L_11cdc161;
  /* 11cdc130 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdc132 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc135 push edx */
  push32((uint32_t)(EDX));
  /* 11cdc136 call 0x11cdc540 */
  push32(0x11cdc13bu); f_11cdc540();
  /* 11cdc13b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc13e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc140 je 0x11cdc161 */
  if (C.zf) goto L_11cdc161;
  /* 11cdc142 mov eax, dword ptr [0x11cff6d8] */
  EAX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdc147 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11cdc14a mov dword ptr [0x11cff6d8], eax */
  w32((uint32_t)(0x11cff6d8), (EAX));
  /* 11cdc14f cmp dword ptr [0x11cff6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc156 jne 0x11cdc161 */
  if (!C.zf) goto L_11cdc161;
  /* 11cdc158 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc15b mov dword ptr [0x11cff6c0], ecx */
  w32((uint32_t)(0x11cff6c0), (ECX));
L_11cdc161:;
  /* 11cdc161 mov eax, dword ptr [0x11cff6d8] */
  EAX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdc166 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc169 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdc16b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc16d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11cdc16e:;
  /* 11cdc16e mov esp, ebp */
  ESP = (EBP);
  /* 11cdc170 pop ebp */
  EBP = (pop32());
  /* 11cdc171 ret 4 */
  ESPCHK(0x11cdbe50u, _esp0);
  ESP += 8; return;
}

/* FUN_1001c180 @ 0x11cdc180 (116 bytes, 33 insns) */
void f_11cdc180(void) {
  FTRACE(0x11cdc180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdc180 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdc181 mov ebp, esp */
  EBP = (ESP);
  /* 11cdc183 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc184 mov eax, dword ptr [0x11cff6d0] */
  EAX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdc189 push eax */
  push32((uint32_t)(EAX));
  /* 11cdc18a call 0x11cd0a80 */
  push32(0x11cdc18fu); f_11cd0a80();
  /* 11cdc18f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc192 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdc194 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc197 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11cdc19a mov dword ptr [0x11cff6cc], ecx */
  w32((uint32_t)(0x11cff6cc), (ECX));
  /* 11cdc1a0 cmp dword ptr [0x11cff6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc1a7 je 0x11cdc1b2 */
  if (C.zf) goto L_11cdc1b2;
  /* 11cdc1a9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11cdc1b0 jmp 0x11cdc1c4 */
  goto L_11cdc1c4;
L_11cdc1b2:;
  /* 11cdc1b2 mov edx, dword ptr [0x11cff6d0] */
  EDX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdc1b8 push edx */
  push32((uint32_t)(EDX));
  /* 11cdc1b9 call 0x11cdc830 */
  push32(0x11cdc1beu); f_11cdc830();
  /* 11cdc1be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc1c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cdc1c4:;
  /* 11cdc1c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdc1c7 mov dword ptr [0x11cff6c8], eax */
  w32((uint32_t)(0x11cff6c8), (EAX));
  /* 11cdc1cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdc1ce push 0x11cdc200 */
  push32((uint32_t)(0x11cdc200u));
  /* 11cdc1d3 call dword ptr [0x11d0131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0131c))), 0x11cdc1d9u);
  /* 11cdc1d9 mov ecx, dword ptr [0x11cff6d8] */
  ECX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdc1df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cdc1e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdc1e4 jne 0x11cdc1f0 */
  if (!C.zf) goto L_11cdc1f0;
  /* 11cdc1e6 mov dword ptr [0x11cff6d8], 0 */
  w32((uint32_t)(0x11cff6d8), (0x0u));
L_11cdc1f0:;
  /* 11cdc1f0 mov esp, ebp */
  ESP = (EBP);
  /* 11cdc1f2 pop ebp */
  EBP = (pop32());
  /* 11cdc1f3 ret  */
  ESPCHK(0x11cdc180u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c200 @ 0x11cdc200 (287 bytes, 86 insns) */
void f_11cdc200(void) {
  FTRACE(0x11cdc200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdc200 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdc201 mov ebp, esp */
  EBP = (ESP);
  /* 11cdc203 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc209 push eax */
  push32((uint32_t)(EAX));
  /* 11cdc20a call 0x11cdc7b0 */
  push32(0x11cdc20fu); f_11cdc7b0();
  /* 11cdc20f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc212 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11cdc215 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11cdc217 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11cdc21a push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc21b mov edx, dword ptr [0x11cff6cc] */
  EDX = (r32((uint32_t)(0x11cff6cc)));
  /* 11cdc221 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdc223 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc225 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdc22b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc231 push edx */
  push32((uint32_t)(EDX));
  /* 11cdc232 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc235 push eax */
  push32((uint32_t)(EAX));
  /* 11cdc236 call dword ptr [0x11cff6e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff6e0))), 0x11cdc23cu);
  /* 11cdc23c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc23e jne 0x11cdc254 */
  if (!C.zf) goto L_11cdc254;
  /* 11cdc240 mov dword ptr [0x11cff6d8], 0 */
  w32((uint32_t)(0x11cff6d8), (0x0u));
  /* 11cdc24a mov eax, 1 */
  EAX = (0x1u);
  /* 11cdc24f jmp 0x11cdc319 */
  goto L_11cdc319;
L_11cdc254:;
  /* 11cdc254 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11cdc257 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc258 mov edx, dword ptr [0x11cff6d0] */
  EDX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdc25e push edx */
  push32((uint32_t)(EDX));
  /* 11cdc25f call 0x11cde960 */
  push32(0x11cdc264u); f_11cde960();
  /* 11cdc264 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc267 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc269 jne 0x11cdc2a9 */
  if (!C.zf) goto L_11cdc2a9;
  /* 11cdc26b cmp dword ptr [0x11cff6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc272 jne 0x11cdc286 */
  if (!C.zf) goto L_11cdc286;
  /* 11cdc274 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdc276 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc279 push eax */
  push32((uint32_t)(EAX));
  /* 11cdc27a call 0x11cdc540 */
  push32(0x11cdc27fu); f_11cdc540();
  /* 11cdc27f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc282 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc284 je 0x11cdc2a7 */
  if (C.zf) goto L_11cdc2a7;
L_11cdc286:;
  /* 11cdc286 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc289 mov dword ptr [0x11cff6dc], ecx */
  w32((uint32_t)(0x11cff6dc), (ECX));
  /* 11cdc28f mov edx, dword ptr [0x11cff6dc] */
  EDX = (r32((uint32_t)(0x11cff6dc)));
  /* 11cdc295 mov dword ptr [0x11cff6c0], edx */
  w32((uint32_t)(0x11cff6c0), (EDX));
  /* 11cdc29b mov eax, dword ptr [0x11cff6d8] */
  EAX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdc2a0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11cdc2a2 mov dword ptr [0x11cff6d8], eax */
  w32((uint32_t)(0x11cff6d8), (EAX));
L_11cdc2a7:;
  /* 11cdc2a7 jmp 0x11cdc30c */
  goto L_11cdc30c;
L_11cdc2a9:;
  /* 11cdc2a9 cmp dword ptr [0x11cff6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc2b0 jne 0x11cdc30c */
  if (!C.zf) goto L_11cdc30c;
  /* 11cdc2b2 cmp dword ptr [0x11cff6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc2b9 je 0x11cdc30c */
  if (C.zf) goto L_11cdc30c;
  /* 11cdc2bb mov ecx, dword ptr [0x11cff6c8] */
  ECX = (r32((uint32_t)(0x11cff6c8)));
  /* 11cdc2c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc2c2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11cdc2c5 push edx */
  push32((uint32_t)(EDX));
  /* 11cdc2c6 mov eax, dword ptr [0x11cff6d0] */
  EAX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdc2cb push eax */
  push32((uint32_t)(EAX));
  /* 11cdc2cc call 0x11cdea30 */
  push32(0x11cdc2d1u); f_11cdea30();
  /* 11cdc2d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc2d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc2d6 jne 0x11cdc30c */
  if (!C.zf) goto L_11cdc30c;
  /* 11cdc2d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdc2da mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc2dd push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc2de call 0x11cdc540 */
  push32(0x11cdc2e3u); f_11cdc540();
  /* 11cdc2e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc2e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc2e8 je 0x11cdc30c */
  if (C.zf) goto L_11cdc30c;
  /* 11cdc2ea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc2ed mov dword ptr [0x11cff6dc], edx */
  w32((uint32_t)(0x11cff6dc), (EDX));
  /* 11cdc2f3 mov eax, dword ptr [0x11cff6dc] */
  EAX = (r32((uint32_t)(0x11cff6dc)));
  /* 11cdc2f8 mov dword ptr [0x11cff6c0], eax */
  w32((uint32_t)(0x11cff6c0), (EAX));
  /* 11cdc2fd mov ecx, dword ptr [0x11cff6d8] */
  ECX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdc303 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cdc306 mov dword ptr [0x11cff6d8], ecx */
  w32((uint32_t)(0x11cff6d8), (ECX));
L_11cdc30c:;
  /* 11cdc30c mov eax, dword ptr [0x11cff6d8] */
  EAX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdc311 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc314 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdc316 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc318 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11cdc319:;
  /* 11cdc319 mov esp, ebp */
  ESP = (EBP);
  /* 11cdc31b pop ebp */
  EBP = (pop32());
  /* 11cdc31c ret 4 */
  ESPCHK(0x11cdc200u, _esp0);
  ESP += 8; return;
}

/* FUN_1001c320 @ 0x11cdc320 (69 bytes, 20 insns) */
void f_11cdc320(void) {
  FTRACE(0x11cdc320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdc320 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdc321 mov ebp, esp */
  EBP = (ESP);
  /* 11cdc323 mov eax, dword ptr [0x11cff6d4] */
  EAX = (r32((uint32_t)(0x11cff6d4)));
  /* 11cdc328 push eax */
  push32((uint32_t)(EAX));
  /* 11cdc329 call 0x11cd0a80 */
  push32(0x11cdc32eu); f_11cd0a80();
  /* 11cdc32e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc331 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdc333 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc336 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11cdc339 mov dword ptr [0x11cff6c4], ecx */
  w32((uint32_t)(0x11cff6c4), (ECX));
  /* 11cdc33f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdc341 push 0x11cdc370 */
  push32((uint32_t)(0x11cdc370u));
  /* 11cdc346 call dword ptr [0x11d0131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0131c))), 0x11cdc34cu);
  /* 11cdc34c mov edx, dword ptr [0x11cff6d8] */
  EDX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdc352 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdc355 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cdc357 jne 0x11cdc363 */
  if (!C.zf) goto L_11cdc363;
  /* 11cdc359 mov dword ptr [0x11cff6d8], 0 */
  w32((uint32_t)(0x11cff6d8), (0x0u));
L_11cdc363:;
  /* 11cdc363 pop ebp */
  EBP = (pop32());
  /* 11cdc364 ret  */
  ESPCHK(0x11cdc320u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c370 @ 0x11cdc370 (172 bytes, 54 insns) */
void f_11cdc370(void) {
  FTRACE(0x11cdc370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdc370 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdc371 mov ebp, esp */
  EBP = (ESP);
  /* 11cdc373 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc379 push eax */
  push32((uint32_t)(EAX));
  /* 11cdc37a call 0x11cdc7b0 */
  push32(0x11cdc37fu); f_11cdc7b0();
  /* 11cdc37f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc382 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11cdc385 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11cdc387 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11cdc38a push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc38b mov edx, dword ptr [0x11cff6c4] */
  EDX = (r32((uint32_t)(0x11cff6c4)));
  /* 11cdc391 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdc393 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc395 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdc39b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc3a1 push edx */
  push32((uint32_t)(EDX));
  /* 11cdc3a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc3a5 push eax */
  push32((uint32_t)(EAX));
  /* 11cdc3a6 call dword ptr [0x11cff6e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff6e0))), 0x11cdc3acu);
  /* 11cdc3ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc3ae jne 0x11cdc3c1 */
  if (!C.zf) goto L_11cdc3c1;
  /* 11cdc3b0 mov dword ptr [0x11cff6d8], 0 */
  w32((uint32_t)(0x11cff6d8), (0x0u));
  /* 11cdc3ba mov eax, 1 */
  EAX = (0x1u);
  /* 11cdc3bf jmp 0x11cdc416 */
  goto L_11cdc416;
L_11cdc3c1:;
  /* 11cdc3c1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11cdc3c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc3c5 mov edx, dword ptr [0x11cff6d4] */
  EDX = (r32((uint32_t)(0x11cff6d4)));
  /* 11cdc3cb push edx */
  push32((uint32_t)(EDX));
  /* 11cdc3cc call 0x11cde960 */
  push32(0x11cdc3d1u); f_11cde960();
  /* 11cdc3d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc3d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc3d6 jne 0x11cdc409 */
  if (!C.zf) goto L_11cdc409;
  /* 11cdc3d8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc3db push eax */
  push32((uint32_t)(EAX));
  /* 11cdc3dc call 0x11cdc4f0 */
  push32(0x11cdc3e1u); f_11cdc4f0();
  /* 11cdc3e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc3e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc3e6 je 0x11cdc409 */
  if (C.zf) goto L_11cdc409;
  /* 11cdc3e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11cdc3eb mov dword ptr [0x11cff6dc], ecx */
  w32((uint32_t)(0x11cff6dc), (ECX));
  /* 11cdc3f1 mov edx, dword ptr [0x11cff6dc] */
  EDX = (r32((uint32_t)(0x11cff6dc)));
  /* 11cdc3f7 mov dword ptr [0x11cff6c0], edx */
  w32((uint32_t)(0x11cff6c0), (EDX));
  /* 11cdc3fd mov eax, dword ptr [0x11cff6d8] */
  EAX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdc402 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11cdc404 mov dword ptr [0x11cff6d8], eax */
  w32((uint32_t)(0x11cff6d8), (EAX));
L_11cdc409:;
  /* 11cdc409 mov eax, dword ptr [0x11cff6d8] */
  EAX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdc40e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc411 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdc413 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc415 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11cdc416:;
  /* 11cdc416 mov esp, ebp */
  ESP = (EBP);
  /* 11cdc418 pop ebp */
  EBP = (pop32());
  /* 11cdc419 ret 4 */
  ESPCHK(0x11cdc370u, _esp0);
  ESP += 8; return;
}

/* FUN_1001c420 @ 0x11cdc420 (43 bytes, 11 insns) */
void f_11cdc420(void) {
  FTRACE(0x11cdc420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdc420 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdc421 mov ebp, esp */
  EBP = (ESP);
  /* 11cdc423 mov eax, dword ptr [0x11cff6d8] */
  EAX = (r32((uint32_t)(0x11cff6d8)));
  /* 11cdc428 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc42d mov dword ptr [0x11cff6d8], eax */
  w32((uint32_t)(0x11cff6d8), (EAX));
  /* 11cdc432 call dword ptr [0x11d01324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01324))), 0x11cdc438u);
  /* 11cdc438 mov dword ptr [0x11cff6dc], eax */
  w32((uint32_t)(0x11cff6dc), (EAX));
  /* 11cdc43d mov ecx, dword ptr [0x11cff6dc] */
  ECX = (r32((uint32_t)(0x11cff6dc)));
  /* 11cdc443 mov dword ptr [0x11cff6c0], ecx */
  w32((uint32_t)(0x11cff6c0), (ECX));
  /* 11cdc449 pop ebp */
  EBP = (pop32());
  /* 11cdc44a ret  */
  ESPCHK(0x11cdc420u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c450 @ 0x11cdc450 (155 bytes, 57 insns) */
void f_11cdc450(void) {
  FTRACE(0x11cdc450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdc450 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdc451 mov ebp, esp */
  EBP = (ESP);
  /* 11cdc453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc456 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc45a je 0x11cdc47b */
  if (C.zf) goto L_11cdc47b;
  /* 11cdc45c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc45f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cdc462 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdc464 je 0x11cdc47b */
  if (C.zf) goto L_11cdc47b;
  /* 11cdc466 push 0x11cfab90 */
  push32((uint32_t)(0x11cfab90u));
  /* 11cdc46b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc46e push edx */
  push32((uint32_t)(EDX));
  /* 11cdc46f call 0x11cd4f90 */
  push32(0x11cdc474u); f_11cd4f90();
  /* 11cdc474 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc477 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc479 jne 0x11cdc4a3 */
  if (!C.zf) goto L_11cdc4a3;
L_11cdc47b:;
  /* 11cdc47b push 8 */
  push32((uint32_t)(0x8u));
  /* 11cdc47d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11cdc480 push eax */
  push32((uint32_t)(EAX));
  /* 11cdc481 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11cdc486 mov ecx, dword ptr [0x11cff6dc] */
  ECX = (r32((uint32_t)(0x11cff6dc)));
  /* 11cdc48c push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc48d call dword ptr [0x11cff6e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff6e0))), 0x11cdc493u);
  /* 11cdc493 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc495 jne 0x11cdc49b */
  if (!C.zf) goto L_11cdc49b;
  /* 11cdc497 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc499 jmp 0x11cdc4e7 */
  goto L_11cdc4e7;
L_11cdc49b:;
  /* 11cdc49b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11cdc49e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11cdc4a1 jmp 0x11cdc4db */
  goto L_11cdc4db;
L_11cdc4a3:;
  /* 11cdc4a3 push 0x11cfab8c */
  push32((uint32_t)(0x11cfab8cu));
  /* 11cdc4a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc4ab push eax */
  push32((uint32_t)(EAX));
  /* 11cdc4ac call 0x11cd4f90 */
  push32(0x11cdc4b1u); f_11cd4f90();
  /* 11cdc4b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc4b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc4b6 jne 0x11cdc4db */
  if (!C.zf) goto L_11cdc4db;
  /* 11cdc4b8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11cdc4ba lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11cdc4bd push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc4be push 0xb */
  push32((uint32_t)(0xbu));
  /* 11cdc4c0 mov edx, dword ptr [0x11cff6dc] */
  EDX = (r32((uint32_t)(0x11cff6dc)));
  /* 11cdc4c6 push edx */
  push32((uint32_t)(EDX));
  /* 11cdc4c7 call dword ptr [0x11cff6e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff6e0))), 0x11cdc4cdu);
  /* 11cdc4cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc4cf jne 0x11cdc4d5 */
  if (!C.zf) goto L_11cdc4d5;
  /* 11cdc4d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc4d3 jmp 0x11cdc4e7 */
  goto L_11cdc4e7;
L_11cdc4d5:;
  /* 11cdc4d5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11cdc4d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11cdc4db:;
  /* 11cdc4db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc4de push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc4df call 0x11cdeb40 */
  push32(0x11cdc4e4u); f_11cdeb40();
  /* 11cdc4e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdc4e7:;
  /* 11cdc4e7 mov esp, ebp */
  ESP = (EBP);
  /* 11cdc4e9 pop ebp */
  EBP = (pop32());
  /* 11cdc4ea ret  */
  ESPCHK(0x11cdc450u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c4f0 @ 0x11cdc4f0 (79 bytes, 26 insns) */
void f_11cdc4f0(void) {
  FTRACE(0x11cdc4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdc4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdc4f1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdc4f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc4f6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11cdc4fa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11cdc4fe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cdc505 jmp 0x11cdc510 */
  goto L_11cdc510;
L_11cdc507:;
  /* 11cdc507 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdc50a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc50d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11cdc510:;
  /* 11cdc510 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc514 jae 0x11cdc536 */
  if (!C.cf) goto L_11cdc536;
  /* 11cdc516 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdc519 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cdc51f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdc522 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdc524 mov cx, word ptr [eax*2 + 0x11cfdef4] */
  CX = (r16((uint32_t)(EAX*2 + 0x11cfdef4)));
  /* 11cdc52c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc52e jne 0x11cdc534 */
  if (!C.zf) goto L_11cdc534;
  /* 11cdc530 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc532 jmp 0x11cdc53b */
  goto L_11cdc53b;
L_11cdc534:;
  /* 11cdc534 jmp 0x11cdc507 */
  goto L_11cdc507;
L_11cdc536:;
  /* 11cdc536 mov eax, 1 */
  EAX = (0x1u);
L_11cdc53b:;
  /* 11cdc53b mov esp, ebp */
  ESP = (EBP);
  /* 11cdc53d pop ebp */
  EBP = (pop32());
  /* 11cdc53e ret  */
  ESPCHK(0x11cdc4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c540 @ 0x11cdc540 (135 bytes, 48 insns) */
void f_11cdc540(void) {
  FTRACE(0x11cdc540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdc540 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdc541 mov ebp, esp */
  EBP = (ESP);
  /* 11cdc543 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc546 push esi */
  push32((uint32_t)(ESI));
  /* 11cdc547 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc54a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc54f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc554 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc559 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11cdc55c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc561 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdc564 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11cdc566 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11cdc569 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc56a push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdc56c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdc56f push edx */
  push32((uint32_t)(EDX));
  /* 11cdc570 call dword ptr [0x11cff6e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff6e0))), 0x11cdc576u);
  /* 11cdc576 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc578 jne 0x11cdc57e */
  if (!C.zf) goto L_11cdc57e;
  /* 11cdc57a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc57c jmp 0x11cdc5c2 */
  goto L_11cdc5c2;
L_11cdc57e:;
  /* 11cdc57e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11cdc581 push eax */
  push32((uint32_t)(EAX));
  /* 11cdc582 call 0x11cdc7b0 */
  push32(0x11cdc587u); f_11cdc7b0();
  /* 11cdc587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc58a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc58d je 0x11cdc5bd */
  if (C.zf) goto L_11cdc5bd;
  /* 11cdc58f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc593 je 0x11cdc5bd */
  if (C.zf) goto L_11cdc5bd;
  /* 11cdc595 mov ecx, dword ptr [0x11cff6d0] */
  ECX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdc59b push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc59c call 0x11cdc830 */
  push32(0x11cdc5a1u); f_11cdc830();
  /* 11cdc5a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc5a4 mov esi, eax */
  ESI = (EAX);
  /* 11cdc5a6 mov edx, dword ptr [0x11cff6d0] */
  EDX = (r32((uint32_t)(0x11cff6d0)));
  /* 11cdc5ac push edx */
  push32((uint32_t)(EDX));
  /* 11cdc5ad call 0x11cd0a80 */
  push32(0x11cdc5b2u); f_11cd0a80();
  /* 11cdc5b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc5b5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc5b7 jne 0x11cdc5bd */
  if (!C.zf) goto L_11cdc5bd;
  /* 11cdc5b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc5bb jmp 0x11cdc5c2 */
  goto L_11cdc5c2;
L_11cdc5bd:;
  /* 11cdc5bd mov eax, 1 */
  EAX = (0x1u);
L_11cdc5c2:;
  /* 11cdc5c2 pop esi */
  ESI = (pop32());
  /* 11cdc5c3 mov esp, ebp */
  ESP = (EBP);
  /* 11cdc5c5 pop ebp */
  EBP = (pop32());
  /* 11cdc5c6 ret  */
  ESPCHK(0x11cdc540u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c5d0 @ 0x11cdc5d0 (77 bytes, 18 insns) */
void f_11cdc5d0(void) {
  FTRACE(0x11cdc5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdc5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdc5d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdc5d3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc5d9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11cdc5e3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11cdc5e9 push eax */
  push32((uint32_t)(EAX));
  /* 11cdc5ea call dword ptr [0x11d01314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01314))), 0x11cdc5f0u);
  /* 11cdc5f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc5f2 je 0x11cdc609 */
  if (C.zf) goto L_11cdc609;
  /* 11cdc5f4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc5fb jne 0x11cdc609 */
  if (!C.zf) goto L_11cdc609;
  /* 11cdc5fd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11cdc607 jmp 0x11cdc613 */
  goto L_11cdc613;
L_11cdc609:;
  /* 11cdc609 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11cdc613:;
  /* 11cdc613 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11cdc619 mov esp, ebp */
  ESP = (EBP);
  /* 11cdc61b pop ebp */
  EBP = (pop32());
  /* 11cdc61c ret  */
  ESPCHK(0x11cdc5d0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11cdc620 (388 bytes, 118 insns) */
void f_11cdc620(void) {
  FTRACE(0x11cdc620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdc620 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdc621 mov ebp, esp */
  EBP = (ESP);
  /* 11cdc623 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc626 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11cdc62d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11cdc634 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11cdc63b:;
  /* 11cdc63b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdc63e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc641 jg 0x11cdc788 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdc788;
  /* 11cdc647 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdc64a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc64d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cdc64e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc650 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cdc652 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cdc655 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdc658 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdc65b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc65e cmp edx, dword ptr [ecx + 0x11cfda50] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11cfda50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc664 jne 0x11cdc75e */
  if (!C.zf) goto L_11cdc75e;
  /* 11cdc66a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdc66d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cdc670 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc674 ja 0x11cdc697 */
  if ((!C.cf&&!C.zf)) goto L_11cdc697;
  /* 11cdc676 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc67a je 0x11cdc709 */
  if (C.zf) goto L_11cdc709;
  /* 11cdc680 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc684 je 0x11cdc6b4 */
  if (C.zf) goto L_11cdc6b4;
  /* 11cdc686 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc68a je 0x11cdc6d6 */
  if (C.zf) goto L_11cdc6d6;
  /* 11cdc68c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc690 je 0x11cdc6f8 */
  if (C.zf) goto L_11cdc6f8;
  /* 11cdc692 jmp 0x11cdc728 */
  goto L_11cdc728;
L_11cdc697:;
  /* 11cdc697 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc69e je 0x11cdc6c5 */
  if (C.zf) goto L_11cdc6c5;
  /* 11cdc6a0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc6a7 je 0x11cdc6e7 */
  if (C.zf) goto L_11cdc6e7;
  /* 11cdc6a9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc6b0 je 0x11cdc71a */
  if (C.zf) goto L_11cdc71a;
  /* 11cdc6b2 jmp 0x11cdc728 */
  goto L_11cdc728;
L_11cdc6b4:;
  /* 11cdc6b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdc6b7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdc6ba add ecx, 0x11cfda54 */
  { uint32_t _a=(ECX),_b=(0x11cfda54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc6c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdc6c3 jmp 0x11cdc728 */
  goto L_11cdc728;
L_11cdc6c5:;
  /* 11cdc6c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdc6c8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdc6cb mov eax, dword ptr [edx + 0x11cfda5c] */
  EAX = (r32((uint32_t)(EDX + 0x11cfda5c)));
  /* 11cdc6d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cdc6d4 jmp 0x11cdc728 */
  goto L_11cdc728;
L_11cdc6d6:;
  /* 11cdc6d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdc6d9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdc6dc add ecx, 0x11cfda60 */
  { uint32_t _a=(ECX),_b=(0x11cfda60u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc6e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdc6e5 jmp 0x11cdc728 */
  goto L_11cdc728;
L_11cdc6e7:;
  /* 11cdc6e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdc6ea imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdc6ed mov eax, dword ptr [edx + 0x11cfda64] */
  EAX = (r32((uint32_t)(EDX + 0x11cfda64)));
  /* 11cdc6f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cdc6f6 jmp 0x11cdc728 */
  goto L_11cdc728;
L_11cdc6f8:;
  /* 11cdc6f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdc6fb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdc6fe add ecx, 0x11cfda68 */
  { uint32_t _a=(ECX),_b=(0x11cfda68u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc704 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdc707 jmp 0x11cdc728 */
  goto L_11cdc728;
L_11cdc709:;
  /* 11cdc709 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdc70c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdc70f add edx, 0x11cfda6c */
  { uint32_t _a=(EDX),_b=(0x11cfda6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc715 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cdc718 jmp 0x11cdc728 */
  goto L_11cdc728;
L_11cdc71a:;
  /* 11cdc71a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdc71d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdc720 add eax, 0x11cfda74 */
  { uint32_t _a=(EAX),_b=(0x11cfda74u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc725 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11cdc728:;
  /* 11cdc728 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc72c je 0x11cdc734 */
  if (C.zf) goto L_11cdc734;
  /* 11cdc72e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc732 jge 0x11cdc736 */
  if ((C.sf==C.of)) goto L_11cdc736;
L_11cdc734:;
  /* 11cdc734 jmp 0x11cdc788 */
  goto L_11cdc788;
L_11cdc736:;
  /* 11cdc736 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdc739 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc73c push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc73d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdc740 push edx */
  push32((uint32_t)(EDX));
  /* 11cdc741 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdc744 push eax */
  push32((uint32_t)(EAX));
  /* 11cdc745 call 0x11cd1470 */
  push32(0x11cdc74au); f_11cd1470();
  /* 11cdc74a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc74d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdc750 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc753 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11cdc757 mov eax, 1 */
  EAX = (0x1u);
  /* 11cdc75c jmp 0x11cdc79e */
  goto L_11cdc79e;
L_11cdc75e:;
  /* 11cdc75e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdc761 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdc764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc767 cmp eax, dword ptr [edx + 0x11cfda50] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11cfda50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc76d jae 0x11cdc77a */
  if (!C.cf) goto L_11cdc77a;
  /* 11cdc76f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdc772 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc775 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cdc778 jmp 0x11cdc783 */
  goto L_11cdc783;
L_11cdc77a:;
  /* 11cdc77a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdc77d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc780 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11cdc783:;
  /* 11cdc783 jmp 0x11cdc63b */
  goto L_11cdc63b;
L_11cdc788:;
  /* 11cdc788 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdc78b push eax */
  push32((uint32_t)(EAX));
  /* 11cdc78c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdc78f push ecx */
  push32((uint32_t)(ECX));
  /* 11cdc790 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdc793 push edx */
  push32((uint32_t)(EDX));
  /* 11cdc794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc797 push eax */
  push32((uint32_t)(EAX));
  /* 11cdc798 call dword ptr [0x11d01320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01320))), 0x11cdc79eu);
L_11cdc79e:;
  /* 11cdc79e mov esp, ebp */
  ESP = (EBP);
  /* 11cdc7a0 pop ebp */
  EBP = (pop32());
  /* 11cdc7a1 ret 0x10 */
  ESPCHK(0x11cdc620u, _esp0);
  ESP += 20; return;
}

/* FUN_1001c7b0 @ 0x11cdc7b0 (118 bytes, 42 insns) */
void f_11cdc7b0(void) {
  FTRACE(0x11cdc7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdc7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdc7b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdc7b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc7b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cdc7bd:;
  /* 11cdc7bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc7c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cdc7c2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11cdc7c5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11cdc7c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc7cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc7cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cdc7d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cdc7d4 je 0x11cdc81f */
  if (C.zf) goto L_11cdc81f;
  /* 11cdc7d6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11cdc7da cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc7dd jl 0x11cdc7f2 */
  if ((C.sf!=C.of)) goto L_11cdc7f2;
  /* 11cdc7df movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11cdc7e3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc7e6 jg 0x11cdc7f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdc7f2;
  /* 11cdc7e8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cdc7eb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cdc7ed mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11cdc7f0 jmp 0x11cdc80c */
  goto L_11cdc80c;
L_11cdc7f2:;
  /* 11cdc7f2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11cdc7f6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc7f9 jl 0x11cdc80c */
  if ((C.sf!=C.of)) goto L_11cdc80c;
  /* 11cdc7fb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11cdc7ff cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc802 jg 0x11cdc80c */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdc80c;
  /* 11cdc804 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cdc807 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cdc809 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11cdc80c:;
  /* 11cdc80c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdc80f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11cdc812 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11cdc816 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11cdc81a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdc81d jmp 0x11cdc7bd */
  goto L_11cdc7bd;
L_11cdc81f:;
  /* 11cdc81f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdc822 mov esp, ebp */
  ESP = (EBP);
  /* 11cdc824 pop ebp */
  EBP = (pop32());
  /* 11cdc825 ret  */
  ESPCHK(0x11cdc7b0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11cdc830 (101 bytes, 36 insns) */
void f_11cdc830(void) {
  FTRACE(0x11cdc830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdc830 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdc831 mov ebp, esp */
  EBP = (ESP);
  /* 11cdc833 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc836 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cdc83d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc840 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cdc842 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11cdc845 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc848 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc84b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11cdc84e:;
  /* 11cdc84e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11cdc852 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc855 jl 0x11cdc860 */
  if ((C.sf!=C.of)) goto L_11cdc860;
  /* 11cdc857 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11cdc85b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc85e jle 0x11cdc872 */
  if ((C.zf||C.sf!=C.of)) goto L_11cdc872;
L_11cdc860:;
  /* 11cdc860 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11cdc864 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc867 jl 0x11cdc88e */
  if ((C.sf!=C.of)) goto L_11cdc88e;
  /* 11cdc869 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11cdc86d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc870 jg 0x11cdc88e */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdc88e;
L_11cdc872:;
  /* 11cdc872 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdc875 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc878 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdc87b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc87e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cdc880 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11cdc883 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc886 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc889 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11cdc88c jmp 0x11cdc84e */
  goto L_11cdc84e;
L_11cdc88e:;
  /* 11cdc88e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdc891 mov esp, ebp */
  ESP = (EBP);
  /* 11cdc893 pop ebp */
  EBP = (pop32());
  /* 11cdc894 ret  */
  ESPCHK(0x11cdc830u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c8a0 @ 0x11cdc8a0 (1085 bytes, 299 insns) */
void f_11cdc8a0(void) {
  FTRACE(0x11cdc8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdc8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdc8a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdc8a3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc8a6 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11cdc8ac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cdc8b3 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11cdc8ba mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11cdc8c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cdc8c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc8cb mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11cdc8cf mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 11cdc8d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdc8d6 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11cdc8da mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 11cdc8de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdc8e1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cdc8e7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdc8ea and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cdc8f0 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdc8f2 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11cdc8f8 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 11cdc8fc mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11cdc900 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 11cdc904 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11cdc908 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 11cdc90c and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11cdc911 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 11cdc915 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdc918 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cdc91e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdc921 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc926 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc928 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11cdc92c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdc92f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cdc935 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc93b jge 0x11cdc95d */
  if ((C.sf==C.of)) goto L_11cdc95d;
  /* 11cdc93d mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdc940 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cdc946 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc94c jge 0x11cdc95d */
  if ((C.sf==C.of)) goto L_11cdc95d;
  /* 11cdc94e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cdc951 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc956 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc95b jle 0x11cdc994 */
  if ((C.zf||C.sf!=C.of)) goto L_11cdc994;
L_11cdc95d:;
  /* 11cdc95d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cdc960 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cdc966 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdc968 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdc96a and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11cdc970 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdc976 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc979 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11cdc97c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc97f mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11cdc986 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc989 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11cdc98f jmp 0x11cdccd9 */
  goto L_11cdccd9;
L_11cdc994:;
  /* 11cdc994 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cdc997 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cdc99d cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc9a3 jg 0x11cdc9c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdc9c7;
  /* 11cdc9a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc9a8 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11cdc9af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc9b2 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11cdc9b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc9bc mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11cdc9c2 jmp 0x11cdccd9 */
  goto L_11cdccd9;
L_11cdc9c7:;
  /* 11cdc9c7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdc9ca and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc9cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc9d1 jne 0x11cdca0d */
  if (!C.zf) goto L_11cdca0d;
  /* 11cdc9d3 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11cdc9d7 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11cdc9db mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11cdc9df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc9e2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cdc9e5 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdc9ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdc9ec jne 0x11cdca0d */
  if (!C.zf) goto L_11cdca0d;
  /* 11cdc9ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc9f1 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc9f5 jne 0x11cdca0d */
  if (!C.zf) goto L_11cdca0d;
  /* 11cdc9f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdc9fa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdc9fd jne 0x11cdca0d */
  if (!C.zf) goto L_11cdca0d;
  /* 11cdc9ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdca02 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 11cdca08 jmp 0x11cdccd9 */
  goto L_11cdccd9;
L_11cdca0d:;
  /* 11cdca0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdca10 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cdca16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdca18 jne 0x11cdca69 */
  if (!C.zf) goto L_11cdca69;
  /* 11cdca1a mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11cdca1e add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11cdca22 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11cdca26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdca29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cdca2c and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cdca32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdca34 jne 0x11cdca69 */
  if (!C.zf) goto L_11cdca69;
  /* 11cdca36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdca39 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdca3d jne 0x11cdca69 */
  if (!C.zf) goto L_11cdca69;
  /* 11cdca3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdca42 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdca45 jne 0x11cdca69 */
  if (!C.zf) goto L_11cdca69;
  /* 11cdca47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdca4a mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11cdca51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdca54 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11cdca5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdca5e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11cdca64 jmp 0x11cdccd9 */
  goto L_11cdccd9;
L_11cdca69:;
  /* 11cdca69 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11cdca70 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11cdca77 jmp 0x11cdca82 */
  goto L_11cdca82;
L_11cdca79:;
  /* 11cdca79 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cdca7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdca7f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11cdca82:;
  /* 11cdca82 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdca86 jge 0x11cdcb41 */
  if ((C.sf==C.of)) goto L_11cdcb41;
  /* 11cdca8c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cdca8f shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11cdca91 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11cdca94 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 11cdca9b mov eax, 5 */
  EAX = (0x5u);
  /* 11cdcaa0 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdcaa3 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11cdcaa6 jmp 0x11cdcab1 */
  goto L_11cdcab1;
L_11cdcaa8:;
  /* 11cdcaa8 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cdcaab sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdcaae mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_11cdcab1:;
  /* 11cdcab1 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcab5 jle 0x11cdcb33 */
  if ((C.zf||C.sf!=C.of)) goto L_11cdcb33;
  /* 11cdcab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcaba add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcabd mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11cdcac0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdcac3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcac6 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11cdcac9 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cdcacc lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 11cdcad0 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11cdcad3 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cdcad6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdcad8 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11cdcadb mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cdcade xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdcae0 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11cdcae3 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdcae6 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11cdcae9 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11cdcaec push ecx */
  push32((uint32_t)(ECX));
  /* 11cdcaed mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11cdcaf0 push edx */
  push32((uint32_t)(EDX));
  /* 11cdcaf1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11cdcaf4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cdcaf6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdcaf7 call 0x11cd85d0 */
  push32(0x11cdcafcu); f_11cd85d0();
  /* 11cdcafc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcaff mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 11cdcb02 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcb06 je 0x11cdcb1c */
  if (C.zf) goto L_11cdcb1c;
  /* 11cdcb08 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cdcb0b mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 11cdcb10 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11cdcb14 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cdcb17 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_11cdcb1c:;
  /* 11cdcb1c mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cdcb1f add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcb22 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11cdcb25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdcb28 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdcb2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cdcb2e jmp 0x11cdcaa8 */
  goto L_11cdcaa8;
L_11cdcb33:;
  /* 11cdcb33 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cdcb36 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcb39 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11cdcb3c jmp 0x11cdca79 */
  goto L_11cdca79;
L_11cdcb41:;
  /* 11cdcb41 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11cdcb45 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11cdcb4a mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11cdcb4e:;
  /* 11cdcb4e movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11cdcb52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdcb54 jle 0x11cdcb7d */
  if ((C.zf||C.sf!=C.of)) goto L_11cdcb7d;
  /* 11cdcb56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdcb59 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11cdcb5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdcb61 jne 0x11cdcb7d */
  if (!C.zf) goto L_11cdcb7d;
  /* 11cdcb63 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11cdcb66 push edx */
  push32((uint32_t)(EDX));
  /* 11cdcb67 call 0x11cd86c0 */
  push32(0x11cdcb6cu); f_11cd86c0();
  /* 11cdcb6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcb6f mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11cdcb73 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11cdcb77 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11cdcb7b jmp 0x11cdcb4e */
  goto L_11cdcb4e;
L_11cdcb7d:;
  /* 11cdcb7d movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11cdcb81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdcb83 jg 0x11cdcbdd */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdcbdd;
  /* 11cdcb85 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11cdcb89 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11cdcb8d mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11cdcb91:;
  /* 11cdcb91 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11cdcb95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdcb97 jge 0x11cdcbcc */
  if ((C.sf==C.of)) goto L_11cdcbcc;
  /* 11cdcb99 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdcb9c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cdcba2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cdcba5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdcba7 je 0x11cdcbb2 */
  if (C.zf) goto L_11cdcbb2;
  /* 11cdcba9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdcbac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcbaf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cdcbb2:;
  /* 11cdcbb2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11cdcbb5 push eax */
  push32((uint32_t)(EAX));
  /* 11cdcbb6 call 0x11cd8720 */
  push32(0x11cdcbbbu); f_11cd8720();
  /* 11cdcbbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcbbe mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11cdcbc2 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11cdcbc6 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11cdcbca jmp 0x11cdcb91 */
  goto L_11cdcb91;
L_11cdcbcc:;
  /* 11cdcbcc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcbd0 je 0x11cdcbdd */
  if (C.zf) goto L_11cdcbdd;
  /* 11cdcbd2 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 11cdcbd6 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11cdcbd9 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_11cdcbdd:;
  /* 11cdcbdd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdcbe0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdcbe5 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcbea jg 0x11cdcbfd */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdcbfd;
  /* 11cdcbec mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdcbef and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cdcbf5 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcbfb jne 0x11cdcc5e */
  if (!C.zf) goto L_11cdcc5e;
L_11cdcbfd:;
  /* 11cdcbfd cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcc01 jne 0x11cdcc55 */
  if (!C.zf) goto L_11cdcc55;
  /* 11cdcc03 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 11cdcc0a cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcc0e jne 0x11cdcc4a */
  if (!C.zf) goto L_11cdcc4a;
  /* 11cdcc10 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 11cdcc17 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 11cdcc1a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cdcc20 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcc26 jne 0x11cdcc3c */
  if (!C.zf) goto L_11cdcc3c;
  /* 11cdcc28 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 11cdcc2e mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11cdcc32 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11cdcc36 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11cdcc3a jmp 0x11cdcc48 */
  goto L_11cdcc48;
L_11cdcc3c:;
  /* 11cdcc3c mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11cdcc40 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11cdcc44 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11cdcc48:;
  /* 11cdcc48 jmp 0x11cdcc53 */
  goto L_11cdcc53;
L_11cdcc4a:;
  /* 11cdcc4a mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 11cdcc4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcc50 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_11cdcc53:;
  /* 11cdcc53 jmp 0x11cdcc5e */
  goto L_11cdcc5e;
L_11cdcc55:;
  /* 11cdcc55 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11cdcc58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcc5b mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_11cdcc5e:;
  /* 11cdcc5e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cdcc61 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cdcc67 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcc6d jl 0x11cdcca3 */
  if ((C.sf!=C.of)) goto L_11cdcca3;
  /* 11cdcc6f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cdcc72 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cdcc78 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdcc7a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdcc7c and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdcc82 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcc88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcc8b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11cdcc8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcc91 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11cdcc98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcc9b mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11cdcca1 jmp 0x11cdccd9 */
  goto L_11cdccd9;
L_11cdcca3:;
  /* 11cdcca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcca6 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 11cdccaa mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11cdccad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdccb0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdccb3 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11cdccb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdccb9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdccbc mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11cdccbf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cdccc2 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdccc7 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cdccca and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cdccd0 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdccd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdccd5 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_11cdccd9:;
  /* 11cdccd9 mov esp, ebp */
  ESP = (EBP);
  /* 11cdccdb pop ebp */
  EBP = (pop32());
  /* 11cdccdc ret  */
  ESPCHK(0x11cdc8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cce0 @ 0x11cdcce0 (195 bytes, 67 insns) */
void f_11cdcce0(void) {
  FTRACE(0x11cdcce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdcce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdcce1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdcce3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdcce6 mov eax, 0x11cfe2c0 */
  EAX = (0x11cfe2c0u);
  /* 11cdcceb sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdccee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdccf1 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdccf5 jne 0x11cdccfc */
  if (!C.zf) goto L_11cdccfc;
  /* 11cdccf7 jmp 0x11cdcd9f */
  goto L_11cdcd9f;
L_11cdccfc:;
  /* 11cdccfc cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcd00 jge 0x11cdcd15 */
  if ((C.sf==C.of)) goto L_11cdcd15;
  /* 11cdcd02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdcd05 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdcd07 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11cdcd0a mov edx, 0x11cfe420 */
  EDX = (0x11cfe420u);
  /* 11cdcd0f sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdcd12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cdcd15:;
  /* 11cdcd15 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcd19 jne 0x11cdcd23 */
  if (!C.zf) goto L_11cdcd23;
  /* 11cdcd1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcd1e mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_11cdcd23:;
  /* 11cdcd23 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcd27 je 0x11cdcd9f */
  if (C.zf) goto L_11cdcd9f;
  /* 11cdcd29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdcd2c add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcd2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cdcd32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdcd35 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdcd38 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11cdcd3b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdcd3e sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11cdcd41 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11cdcd44 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcd48 jne 0x11cdcd4c */
  if (!C.zf) goto L_11cdcd4c;
  /* 11cdcd4a jmp 0x11cdcd23 */
  goto L_11cdcd23;
L_11cdcd4c:;
  /* 11cdcd4c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdcd4f imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdcd52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdcd55 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcd57 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cdcd5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdcd5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdcd5f mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11cdcd62 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcd68 jl 0x11cdcd8d */
  if ((C.sf!=C.of)) goto L_11cdcd8d;
  /* 11cdcd6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdcd6d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cdcd6f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cdcd72 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cdcd75 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cdcd78 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cdcd7b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cdcd7e mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11cdcd81 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdcd84 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 11cdcd87 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11cdcd8a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11cdcd8d:;
  /* 11cdcd8d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdcd90 push edx */
  push32((uint32_t)(EDX));
  /* 11cdcd91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcd94 push eax */
  push32((uint32_t)(EAX));
  /* 11cdcd95 call 0x11cdc8a0 */
  push32(0x11cdcd9au); f_11cdc8a0();
  /* 11cdcd9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcd9d jmp 0x11cdcd23 */
  goto L_11cdcd23;
L_11cdcd9f:;
  /* 11cdcd9f mov esp, ebp */
  ESP = (EBP);
  /* 11cdcda1 pop ebp */
  EBP = (pop32());
  /* 11cdcda2 ret  */
  ESPCHK(0x11cdcce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cdb0 @ 0x11cdcdb0 (130 bytes, 50 insns) */
void f_11cdcdb0(void) {
  FTRACE(0x11cdcdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdcdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdcdb1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdcdb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdcdb4 push ebx */
  push32((uint32_t)(EBX));
  /* 11cdcdb5 push esi */
  push32((uint32_t)(ESI));
  /* 11cdcdb6 push edi */
  push32((uint32_t)(EDI));
  /* 11cdcdb7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11cdcdbe:;
  /* 11cdcdbe cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcdc2 jne 0x11cdcde2 */
  if (!C.zf) goto L_11cdcde2;
  /* 11cdcdc4 push 0x11cfaba0 */
  push32((uint32_t)(0x11cfaba0u));
  /* 11cdcdc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdcdcb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11cdcdcd push 0x11cfab94 */
  push32((uint32_t)(0x11cfab94u));
  /* 11cdcdd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdcdd4 call 0x11cca080 */
  push32(0x11cdcdd9u); f_11cca080();
  /* 11cdcdd9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcddc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcddf jne 0x11cdcde2 */
  if (!C.zf) goto L_11cdcde2;
  /* 11cdcde1 int3  */
  x86_unimpl("int3 @ 0x11cdcde1");
L_11cdcde2:;
  /* 11cdcde2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdcde4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdcde6 jne 0x11cdcdbe */
  if (!C.zf) goto L_11cdcdbe;
  /* 11cdcde8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcdeb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cdcdee and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdcdf1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cdcdf3 je 0x11cdce01 */
  if (C.zf) goto L_11cdce01;
  /* 11cdcdf5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcdf8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11cdcdff jmp 0x11cdce28 */
  goto L_11cdce28;
L_11cdce01:;
  /* 11cdce01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdce04 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdce05 call 0x11cd5a00 */
  push32(0x11cdce0au); f_11cd5a00();
  /* 11cdce0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdce0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdce10 push edx */
  push32((uint32_t)(EDX));
  /* 11cdce11 call 0x11cdce40 */
  push32(0x11cdce16u); f_11cdce40();
  /* 11cdce16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdce19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdce1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdce1f push eax */
  push32((uint32_t)(EAX));
  /* 11cdce20 call 0x11cd5a70 */
  push32(0x11cdce25u); f_11cd5a70();
  /* 11cdce25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdce28:;
  /* 11cdce28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdce2b pop edi */
  EDI = (pop32());
  /* 11cdce2c pop esi */
  ESI = (pop32());
  /* 11cdce2d pop ebx */
  EBX = (pop32());
  /* 11cdce2e mov esp, ebp */
  ESP = (EBP);
  /* 11cdce30 pop ebp */
  EBP = (pop32());
  /* 11cdce31 ret  */
  ESPCHK(0x11cdcdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ce40 @ 0x11cdce40 (190 bytes, 67 insns) */
void f_11cdce40(void) {
  FTRACE(0x11cdce40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdce40 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdce41 mov ebp, esp */
  EBP = (ESP);
  /* 11cdce43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdce46 push ebx */
  push32((uint32_t)(EBX));
  /* 11cdce47 push esi */
  push32((uint32_t)(ESI));
  /* 11cdce48 push edi */
  push32((uint32_t)(EDI));
  /* 11cdce49 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11cdce50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdce53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11cdce56:;
  /* 11cdce56 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdce5a jne 0x11cdce7a */
  if (!C.zf) goto L_11cdce7a;
  /* 11cdce5c push 0x11cf9f74 */
  push32((uint32_t)(0x11cf9f74u));
  /* 11cdce61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdce63 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11cdce65 push 0x11cfab94 */
  push32((uint32_t)(0x11cfab94u));
  /* 11cdce6a push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdce6c call 0x11cca080 */
  push32(0x11cdce71u); f_11cca080();
  /* 11cdce71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdce74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdce77 jne 0x11cdce7a */
  if (!C.zf) goto L_11cdce7a;
  /* 11cdce79 int3  */
  x86_unimpl("int3 @ 0x11cdce79");
L_11cdce7a:;
  /* 11cdce7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdce7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdce7e jne 0x11cdce56 */
  if (!C.zf) goto L_11cdce56;
  /* 11cdce80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdce83 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11cdce86 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11cdce8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdce8d je 0x11cdceea */
  if (C.zf) goto L_11cdceea;
  /* 11cdce8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdce92 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdce93 call 0x11cda0c0 */
  push32(0x11cdce98u); f_11cda0c0();
  /* 11cdce98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdce9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdce9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdcea1 push edx */
  push32((uint32_t)(EDX));
  /* 11cdcea2 call 0x11cdeec0 */
  push32(0x11cdcea7u); f_11cdeec0();
  /* 11cdcea7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdceaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdcead mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cdceb0 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdceb1 call 0x11cded90 */
  push32(0x11cdceb6u); f_11cded90();
  /* 11cdceb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdceb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdcebb jge 0x11cdcec6 */
  if ((C.sf==C.of)) goto L_11cdcec6;
  /* 11cdcebd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11cdcec4 jmp 0x11cdceea */
  goto L_11cdceea;
L_11cdcec6:;
  /* 11cdcec6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdcec9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcecd je 0x11cdceea */
  if (C.zf) goto L_11cdceea;
  /* 11cdcecf push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdced1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdced4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11cdced7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdced8 call 0x11ccbf50 */
  push32(0x11cdceddu); f_11ccbf50();
  /* 11cdcedd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcee0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdcee3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11cdceea:;
  /* 11cdceea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdceed mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11cdcef4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdcef7 pop edi */
  EDI = (pop32());
  /* 11cdcef8 pop esi */
  ESI = (pop32());
  /* 11cdcef9 pop ebx */
  EBX = (pop32());
  /* 11cdcefa mov esp, ebp */
  ESP = (EBP);
  /* 11cdcefc pop ebp */
  EBP = (pop32());
  /* 11cdcefd ret  */
  ESPCHK(0x11cdce40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cf00 @ 0x11cdcf00 (210 bytes, 63 insns) */
void f_11cdcf00(void) {
  FTRACE(0x11cdcf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdcf00 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdcf01 mov ebp, esp */
  EBP = (ESP);
  /* 11cdcf03 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdcf04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcf07 cmp eax, dword ptr [0x11d00f5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d00f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcf0d jae 0x11cdcf31 */
  if (!C.cf) goto L_11cdcf31;
  /* 11cdcf0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcf12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cdcf15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcf18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cdcf1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdcf1e mov eax, dword ptr [ecx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d00e20)));
  /* 11cdcf25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11cdcf2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cdcf2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdcf2f jne 0x11cdcf44 */
  if (!C.zf) goto L_11cdcf44;
L_11cdcf31:;
  /* 11cdcf31 call 0x11cd68e0 */
  push32(0x11cdcf36u); f_11cd68e0();
  /* 11cdcf36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11cdcf3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdcf3f jmp 0x11cdcfce */
  goto L_11cdcfce;
L_11cdcf44:;
  /* 11cdcf44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcf47 push edx */
  push32((uint32_t)(EDX));
  /* 11cdcf48 call 0x11cd9e80 */
  push32(0x11cdcf4du); f_11cd9e80();
  /* 11cdcf4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcf50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcf53 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cdcf56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcf59 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11cdcf5c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdcf5f mov edx, dword ptr [eax*4 + 0x11d00e20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d00e20)));
  /* 11cdcf66 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11cdcf6b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11cdcf6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdcf70 je 0x11cdcfad */
  if (C.zf) goto L_11cdcfad;
  /* 11cdcf72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcf75 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdcf76 call 0x11cd9d00 */
  push32(0x11cdcf7bu); f_11cd9d00();
  /* 11cdcf7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcf7e push eax */
  push32((uint32_t)(EAX));
  /* 11cdcf7f call dword ptr [0x11d01310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01310))), 0x11cdcf85u);
  /* 11cdcf85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdcf87 jne 0x11cdcf94 */
  if (!C.zf) goto L_11cdcf94;
  /* 11cdcf89 call dword ptr [0x11d013f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f4))), 0x11cdcf8fu);
  /* 11cdcf8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdcf92 jmp 0x11cdcf9b */
  goto L_11cdcf9b;
L_11cdcf94:;
  /* 11cdcf94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cdcf9b:;
  /* 11cdcf9b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdcf9f jne 0x11cdcfa3 */
  if (!C.zf) goto L_11cdcfa3;
  /* 11cdcfa1 jmp 0x11cdcfbf */
  goto L_11cdcfbf;
L_11cdcfa3:;
  /* 11cdcfa3 call 0x11cd68f0 */
  push32(0x11cdcfa8u); f_11cd68f0();
  /* 11cdcfa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdcfab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11cdcfad:;
  /* 11cdcfad call 0x11cd68e0 */
  push32(0x11cdcfb2u); f_11cd68e0();
  /* 11cdcfb2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11cdcfb8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11cdcfbf:;
  /* 11cdcfbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdcfc2 push eax */
  push32((uint32_t)(EAX));
  /* 11cdcfc3 call 0x11cd9f10 */
  push32(0x11cdcfc8u); f_11cd9f10();
  /* 11cdcfc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdcfcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11cdcfce:;
  /* 11cdcfce mov esp, ebp */
  ESP = (EBP);
  /* 11cdcfd0 pop ebp */
  EBP = (pop32());
  /* 11cdcfd1 ret  */
  ESPCHK(0x11cdcf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cfe0 @ 0x11cdcfe0 (289 bytes, 97 insns) */
void f_11cdcfe0(void) {
  FTRACE(0x11cdcfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdcfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdcfe1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdcfe3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdcfe6 push esi */
  push32((uint32_t)(ESI));
  /* 11cdcfe7 mov eax, dword ptr [0x11cfe1c8] */
  EAX = (r32((uint32_t)(0x11cfe1c8)));
  /* 11cdcfec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cdcfef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cdcff6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11cdcffd jmp 0x11cdd008 */
  goto L_11cdd008;
L_11cdcfff:;
  /* 11cdcfff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd002 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd005 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11cdd008:;
  /* 11cdd008 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd00c jae 0x11cdd041 */
  if (!C.cf) goto L_11cdd041;
  /* 11cdd00e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd011 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd014 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11cdd017 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd018 call 0x11cd0a80 */
  push32(0x11cdd01du); f_11cd0a80();
  /* 11cdd01d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd020 mov esi, eax */
  ESI = (EAX);
  /* 11cdd022 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd025 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd028 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11cdd02c push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd02d call 0x11cd0a80 */
  push32(0x11cdd032u); f_11cd0a80();
  /* 11cdd032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd035 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd038 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11cdd03c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cdd03f jmp 0x11cdcfff */
  goto L_11cdcfff;
L_11cdd041:;
  /* 11cdd041 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdd044 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd047 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd048 call 0x11ccb4a0 */
  push32(0x11cdd04du); f_11ccb4a0();
  /* 11cdd04d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd050 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdd053 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd057 je 0x11cdd0f9 */
  if (C.zf) goto L_11cdd0f9;
  /* 11cdd05d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdd060 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cdd063 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11cdd06a jmp 0x11cdd075 */
  goto L_11cdd075;
L_11cdd06c:;
  /* 11cdd06c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd06f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd072 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11cdd075:;
  /* 11cdd075 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd079 jae 0x11cdd0ea */
  if (!C.cf) goto L_11cdd0ea;
  /* 11cdd07b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd07e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11cdd081 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd084 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd087 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cdd08a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd08d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd090 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11cdd093 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd094 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd097 push edx */
  push32((uint32_t)(EDX));
  /* 11cdd098 call 0x11cd0c00 */
  push32(0x11cdd09du); f_11cd0c00();
  /* 11cdd09d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd0a0 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd0a1 call 0x11cd0a80 */
  push32(0x11cdd0a6u); f_11cd0a80();
  /* 11cdd0a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd0a9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd0ac add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd0ae mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cdd0b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd0b4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11cdd0b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd0ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd0bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cdd0c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd0c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd0c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11cdd0ca push eax */
  push32((uint32_t)(EAX));
  /* 11cdd0cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd0ce push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd0cf call 0x11cd0c00 */
  push32(0x11cdd0d4u); f_11cd0c00();
  /* 11cdd0d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd0d7 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd0d8 call 0x11cd0a80 */
  push32(0x11cdd0ddu); f_11cd0a80();
  /* 11cdd0dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd0e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd0e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd0e5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11cdd0e8 jmp 0x11cdd06c */
  goto L_11cdd06c;
L_11cdd0ea:;
  /* 11cdd0ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd0ed mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11cdd0f0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd0f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd0f6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11cdd0f9:;
  /* 11cdd0f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdd0fc pop esi */
  ESI = (pop32());
  /* 11cdd0fd mov esp, ebp */
  ESP = (EBP);
  /* 11cdd0ff pop ebp */
  EBP = (pop32());
  /* 11cdd100 ret  */
  ESPCHK(0x11cdcfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d110 @ 0x11cdd110 (291 bytes, 97 insns) */
void f_11cdd110(void) {
  FTRACE(0x11cdd110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdd110 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdd111 mov ebp, esp */
  EBP = (ESP);
  /* 11cdd113 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdd116 push esi */
  push32((uint32_t)(ESI));
  /* 11cdd117 mov eax, dword ptr [0x11cfe1c8] */
  EAX = (r32((uint32_t)(0x11cfe1c8)));
  /* 11cdd11c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cdd11f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cdd126 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11cdd12d jmp 0x11cdd138 */
  goto L_11cdd138;
L_11cdd12f:;
  /* 11cdd12f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd132 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd135 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11cdd138:;
  /* 11cdd138 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd13c jae 0x11cdd172 */
  if (!C.cf) goto L_11cdd172;
  /* 11cdd13e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd141 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd144 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11cdd148 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd149 call 0x11cd0a80 */
  push32(0x11cdd14eu); f_11cd0a80();
  /* 11cdd14e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd151 mov esi, eax */
  ESI = (EAX);
  /* 11cdd153 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd156 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd159 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11cdd15d push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd15e call 0x11cd0a80 */
  push32(0x11cdd163u); f_11cd0a80();
  /* 11cdd163 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd166 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd169 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11cdd16d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cdd170 jmp 0x11cdd12f */
  goto L_11cdd12f;
L_11cdd172:;
  /* 11cdd172 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdd175 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd178 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd179 call 0x11ccb4a0 */
  push32(0x11cdd17eu); f_11ccb4a0();
  /* 11cdd17e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd181 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdd184 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd188 je 0x11cdd22b */
  if (C.zf) goto L_11cdd22b;
  /* 11cdd18e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdd191 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cdd194 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11cdd19b jmp 0x11cdd1a6 */
  goto L_11cdd1a6;
L_11cdd19d:;
  /* 11cdd19d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd1a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd1a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11cdd1a6:;
  /* 11cdd1a6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd1aa jae 0x11cdd21c */
  if (!C.cf) goto L_11cdd21c;
  /* 11cdd1ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd1af mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11cdd1b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd1b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd1b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cdd1bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd1be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd1c1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11cdd1c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd1c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd1c9 push edx */
  push32((uint32_t)(EDX));
  /* 11cdd1ca call 0x11cd0c00 */
  push32(0x11cdd1cfu); f_11cd0c00();
  /* 11cdd1cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd1d2 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd1d3 call 0x11cd0a80 */
  push32(0x11cdd1d8u); f_11cd0a80();
  /* 11cdd1d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd1db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd1de add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd1e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cdd1e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd1e6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11cdd1e9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd1ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd1ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cdd1f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd1f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd1f8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11cdd1fc push eax */
  push32((uint32_t)(EAX));
  /* 11cdd1fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd200 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd201 call 0x11cd0c00 */
  push32(0x11cdd206u); f_11cd0c00();
  /* 11cdd206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd209 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd20a call 0x11cd0a80 */
  push32(0x11cdd20fu); f_11cd0a80();
  /* 11cdd20f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd212 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd215 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd217 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11cdd21a jmp 0x11cdd19d */
  goto L_11cdd19d;
L_11cdd21c:;
  /* 11cdd21c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd21f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11cdd222 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd225 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd228 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11cdd22b:;
  /* 11cdd22b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdd22e pop esi */
  ESI = (pop32());
  /* 11cdd22f mov esp, ebp */
  ESP = (EBP);
  /* 11cdd231 pop ebp */
  EBP = (pop32());
  /* 11cdd232 ret  */
  ESPCHK(0x11cdd110u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d240 @ 0x11cdd240 (878 bytes, 273 insns) */
void f_11cdd240(void) {
  FTRACE(0x11cdd240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdd240 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdd241 mov ebp, esp */
  EBP = (ESP);
  /* 11cdd243 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdd246 push esi */
  push32((uint32_t)(ESI));
  /* 11cdd247 mov eax, dword ptr [0x11cfe1c8] */
  EAX = (r32((uint32_t)(0x11cfe1c8)));
  /* 11cdd24c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cdd24f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cdd256 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11cdd25d jmp 0x11cdd268 */
  goto L_11cdd268;
L_11cdd25f:;
  /* 11cdd25f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd262 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd265 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11cdd268:;
  /* 11cdd268 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd26c jae 0x11cdd2a1 */
  if (!C.cf) goto L_11cdd2a1;
  /* 11cdd26e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd271 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd274 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11cdd277 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd278 call 0x11cd0a80 */
  push32(0x11cdd27du); f_11cd0a80();
  /* 11cdd27d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd280 mov esi, eax */
  ESI = (EAX);
  /* 11cdd282 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd285 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd288 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11cdd28c push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd28d call 0x11cd0a80 */
  push32(0x11cdd292u); f_11cd0a80();
  /* 11cdd292 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd295 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd298 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11cdd29c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cdd29f jmp 0x11cdd25f */
  goto L_11cdd25f;
L_11cdd2a1:;
  /* 11cdd2a1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11cdd2a8 jmp 0x11cdd2b3 */
  goto L_11cdd2b3;
L_11cdd2aa:;
  /* 11cdd2aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd2ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd2b0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11cdd2b3:;
  /* 11cdd2b3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd2b7 jae 0x11cdd2ed */
  if (!C.cf) goto L_11cdd2ed;
  /* 11cdd2b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd2bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd2bf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11cdd2c3 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd2c4 call 0x11cd0a80 */
  push32(0x11cdd2c9u); f_11cd0a80();
  /* 11cdd2c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd2cc mov esi, eax */
  ESI = (EAX);
  /* 11cdd2ce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd2d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd2d4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11cdd2d8 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd2d9 call 0x11cd0a80 */
  push32(0x11cdd2deu); f_11cd0a80();
  /* 11cdd2de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd2e1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd2e4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11cdd2e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdd2eb jmp 0x11cdd2aa */
  goto L_11cdd2aa;
L_11cdd2ed:;
  /* 11cdd2ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd2f0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11cdd2f6 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd2f7 call 0x11cd0a80 */
  push32(0x11cdd2fcu); f_11cd0a80();
  /* 11cdd2fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd2ff mov esi, eax */
  ESI = (EAX);
  /* 11cdd301 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd304 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11cdd30a push edx */
  push32((uint32_t)(EDX));
  /* 11cdd30b call 0x11cd0a80 */
  push32(0x11cdd310u); f_11cd0a80();
  /* 11cdd310 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd313 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd316 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11cdd31a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cdd31d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd320 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11cdd326 push edx */
  push32((uint32_t)(EDX));
  /* 11cdd327 call 0x11cd0a80 */
  push32(0x11cdd32cu); f_11cd0a80();
  /* 11cdd32c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd32f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdd332 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11cdd336 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cdd339 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd33c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11cdd342 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd343 call 0x11cd0a80 */
  push32(0x11cdd348u); f_11cd0a80();
  /* 11cdd348 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd34b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdd34e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11cdd352 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cdd355 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd358 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11cdd35e push edx */
  push32((uint32_t)(EDX));
  /* 11cdd35f call 0x11cd0a80 */
  push32(0x11cdd364u); f_11cd0a80();
  /* 11cdd364 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd367 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdd36a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11cdd36e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cdd371 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdd374 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd379 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd37a call 0x11ccb4a0 */
  push32(0x11cdd37fu); f_11ccb4a0();
  /* 11cdd37f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd382 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdd385 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd389 je 0x11cdd5a6 */
  if (C.zf) goto L_11cdd5a6;
  /* 11cdd38f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdd392 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11cdd395 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdd398 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd39e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11cdd3a1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11cdd3a6 mov eax, dword ptr [0x11cfe1c8] */
  EAX = (r32((uint32_t)(0x11cfe1c8)));
  /* 11cdd3ab push eax */
  push32((uint32_t)(EAX));
  /* 11cdd3ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdd3af push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd3b0 call 0x11cd6500 */
  push32(0x11cdd3b5u); f_11cd6500();
  /* 11cdd3b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd3b8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11cdd3bf jmp 0x11cdd3ca */
  goto L_11cdd3ca;
L_11cdd3c1:;
  /* 11cdd3c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd3c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd3c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11cdd3ca:;
  /* 11cdd3ca cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd3ce jae 0x11cdd43e */
  if (!C.cf) goto L_11cdd43e;
  /* 11cdd3d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd3d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdd3d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd3d9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11cdd3dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd3df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd3e2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11cdd3e5 push edx */
  push32((uint32_t)(EDX));
  /* 11cdd3e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd3e9 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd3ea call 0x11cd0c00 */
  push32(0x11cdd3efu); f_11cd0c00();
  /* 11cdd3ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd3f2 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd3f3 call 0x11cd0a80 */
  push32(0x11cdd3f8u); f_11cd0a80();
  /* 11cdd3f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd3fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd3fe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11cdd402 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11cdd405 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd408 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdd40b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd40e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11cdd412 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd415 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd418 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11cdd41c push edx */
  push32((uint32_t)(EDX));
  /* 11cdd41d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd420 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd421 call 0x11cd0c00 */
  push32(0x11cdd426u); f_11cd0c00();
  /* 11cdd426 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd429 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd42a call 0x11cd0a80 */
  push32(0x11cdd42fu); f_11cd0a80();
  /* 11cdd42f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd432 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd435 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11cdd439 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11cdd43c jmp 0x11cdd3c1 */
  goto L_11cdd3c1;
L_11cdd43e:;
  /* 11cdd43e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11cdd445 jmp 0x11cdd450 */
  goto L_11cdd450;
L_11cdd447:;
  /* 11cdd447 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd44a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd44d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11cdd450:;
  /* 11cdd450 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd454 jae 0x11cdd4c6 */
  if (!C.cf) goto L_11cdd4c6;
  /* 11cdd456 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd459 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdd45c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd45f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11cdd463 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd466 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd469 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11cdd46d push eax */
  push32((uint32_t)(EAX));
  /* 11cdd46e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd471 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd472 call 0x11cd0c00 */
  push32(0x11cdd477u); f_11cd0c00();
  /* 11cdd477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd47a push eax */
  push32((uint32_t)(EAX));
  /* 11cdd47b call 0x11cd0a80 */
  push32(0x11cdd480u); f_11cd0a80();
  /* 11cdd480 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd483 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd486 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11cdd48a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cdd48d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd490 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdd493 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd496 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11cdd49a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd49d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd4a0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11cdd4a4 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd4a5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd4a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd4a9 call 0x11cd0c00 */
  push32(0x11cdd4aeu); f_11cd0c00();
  /* 11cdd4ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd4b1 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd4b2 call 0x11cd0a80 */
  push32(0x11cdd4b7u); f_11cd0a80();
  /* 11cdd4b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd4ba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd4bd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11cdd4c1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cdd4c4 jmp 0x11cdd447 */
  goto L_11cdd447;
L_11cdd4c6:;
  /* 11cdd4c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdd4c9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd4cc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11cdd4d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd4d5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11cdd4db push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd4dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd4df push edx */
  push32((uint32_t)(EDX));
  /* 11cdd4e0 call 0x11cd0c00 */
  push32(0x11cdd4e5u); f_11cd0c00();
  /* 11cdd4e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd4e8 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd4e9 call 0x11cd0a80 */
  push32(0x11cdd4eeu); f_11cd0a80();
  /* 11cdd4ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd4f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd4f4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11cdd4f8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11cdd4fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdd4fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd501 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11cdd507 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd50a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11cdd510 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd511 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd514 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd515 call 0x11cd0c00 */
  push32(0x11cdd51au); f_11cd0c00();
  /* 11cdd51a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd51d push eax */
  push32((uint32_t)(EAX));
  /* 11cdd51e call 0x11cd0a80 */
  push32(0x11cdd523u); f_11cd0a80();
  /* 11cdd523 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd526 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd529 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11cdd52d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cdd530 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdd533 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd536 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11cdd53c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd53f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11cdd545 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd546 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd549 push edx */
  push32((uint32_t)(EDX));
  /* 11cdd54a call 0x11cd0c00 */
  push32(0x11cdd54fu); f_11cd0c00();
  /* 11cdd54f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd552 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd553 call 0x11cd0a80 */
  push32(0x11cdd558u); f_11cd0a80();
  /* 11cdd558 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd55b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd55e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11cdd562 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11cdd565 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdd568 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd56b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11cdd571 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd574 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11cdd57a push eax */
  push32((uint32_t)(EAX));
  /* 11cdd57b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd57e push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd57f call 0x11cd0c00 */
  push32(0x11cdd584u); f_11cd0c00();
  /* 11cdd584 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd587 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd588 call 0x11cd0a80 */
  push32(0x11cdd58du); f_11cd0a80();
  /* 11cdd58d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd590 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd593 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11cdd597 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cdd59a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdd59d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdd5a0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11cdd5a6:;
  /* 11cdd5a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdd5a9 pop esi */
  ESI = (pop32());
  /* 11cdd5aa mov esp, ebp */
  ESP = (EBP);
  /* 11cdd5ac pop ebp */
  EBP = (pop32());
  /* 11cdd5ad ret  */
  ESPCHK(0x11cdd240u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d5b0 @ 0x11cdd5b0 (31 bytes, 15 insns) */
void f_11cdd5b0(void) {
  FTRACE(0x11cdd5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdd5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdd5b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdd5b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdd5b5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd5b8 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd5b9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd5bc push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd5bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd5c0 push edx */
  push32((uint32_t)(EDX));
  /* 11cdd5c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdd5c4 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd5c5 call 0x11cdd5d0 */
  push32(0x11cdd5cau); f_11cdd5d0();
  /* 11cdd5ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd5cd pop ebp */
  EBP = (pop32());
  /* 11cdd5ce ret  */
  ESPCHK(0x11cdd5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d5d0 @ 0x11cdd5d0 (393 bytes, 123 insns) */
void f_11cdd5d0(void) {
  FTRACE(0x11cdd5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdd5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdd5d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdd5d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdd5d6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd5da jne 0x11cdd5e6 */
  if (!C.zf) goto L_11cdd5e6;
  /* 11cdd5dc mov eax, dword ptr [0x11cfe1c8] */
  EAX = (r32((uint32_t)(0x11cfe1c8)));
  /* 11cdd5e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cdd5e4 jmp 0x11cdd5ec */
  goto L_11cdd5ec;
L_11cdd5e6:;
  /* 11cdd5e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdd5e9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11cdd5ec:;
  /* 11cdd5ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdd5ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cdd5f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd5f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cdd5f8 push 0x11cff7e4 */
  push32((uint32_t)(0x11cff7e4u));
  /* 11cdd5fd call dword ptr [0x11d013e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013e8))), 0x11cdd603u);
  /* 11cdd603 cmp dword ptr [0x11cff7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd60a je 0x11cdd62a */
  if (C.zf) goto L_11cdd62a;
  /* 11cdd60c push 0x11cff7e4 */
  push32((uint32_t)(0x11cff7e4u));
  /* 11cdd611 call dword ptr [0x11d013d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d8))), 0x11cdd617u);
  /* 11cdd617 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11cdd619 call 0x11ccb3c0 */
  push32(0x11cdd61eu); f_11ccb3c0();
  /* 11cdd61e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd621 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11cdd628 jmp 0x11cdd631 */
  goto L_11cdd631;
L_11cdd62a:;
  /* 11cdd62a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11cdd631:;
  /* 11cdd631 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd635 jbe 0x11cdd722 */
  if ((C.cf||C.zf)) goto L_11cdd722;
  /* 11cdd63b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd63e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cdd640 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11cdd643 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cdd647 je 0x11cdd651 */
  if (C.zf) goto L_11cdd651;
  /* 11cdd649 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cdd64d je 0x11cdd656 */
  if (C.zf) goto L_11cdd656;
  /* 11cdd64f jmp 0x11cdd6b0 */
  goto L_11cdd6b0;
L_11cdd651:;
  /* 11cdd651 jmp 0x11cdd722 */
  goto L_11cdd722;
L_11cdd656:;
  /* 11cdd656 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd659 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd65c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11cdd65f mov dword ptr [0x11cff7c0], 0 */
  w32((uint32_t)(0x11cff7c0), (0x0u));
  /* 11cdd669 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd66c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cdd66f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd672 jne 0x11cdd687 */
  if (!C.zf) goto L_11cdd687;
  /* 11cdd674 mov dword ptr [0x11cff7c0], 1 */
  w32((uint32_t)(0x11cff7c0), (0x1u));
  /* 11cdd67e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd681 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd684 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11cdd687:;
  /* 11cdd687 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdd68a push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd68b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11cdd68e push edx */
  push32((uint32_t)(EDX));
  /* 11cdd68f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11cdd692 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd693 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd696 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd697 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd69a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cdd69c push eax */
  push32((uint32_t)(EAX));
  /* 11cdd69d call 0x11cdd760 */
  push32(0x11cdd6a2u); f_11cdd760();
  /* 11cdd6a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd6a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd6a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd6ab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11cdd6ae jmp 0x11cdd71d */
  goto L_11cdd71d;
L_11cdd6b0:;
  /* 11cdd6b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd6b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdd6b5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cdd6b7 mov ecx, dword ptr [0x11cfd00c] */
  ECX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cdd6bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdd6bf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11cdd6c3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdd6c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cdd6cb je 0x11cdd6f8 */
  if (C.zf) goto L_11cdd6f8;
  /* 11cdd6cd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd6d1 jbe 0x11cdd6f8 */
  if ((C.cf||C.zf)) goto L_11cdd6f8;
  /* 11cdd6d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdd6d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd6d9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cdd6db mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11cdd6dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdd6e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd6e3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cdd6e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd6e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd6ec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11cdd6ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd6f2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdd6f5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11cdd6f8:;
  /* 11cdd6f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdd6fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd6fe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cdd700 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11cdd702 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdd705 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd708 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cdd70b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd70e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd711 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11cdd714 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd717 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdd71a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11cdd71d:;
  /* 11cdd71d jmp 0x11cdd631 */
  goto L_11cdd631;
L_11cdd722:;
  /* 11cdd722 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd726 je 0x11cdd734 */
  if (C.zf) goto L_11cdd734;
  /* 11cdd728 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11cdd72a call 0x11ccb460 */
  push32(0x11cdd72fu); f_11ccb460();
  /* 11cdd72f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd732 jmp 0x11cdd73f */
  goto L_11cdd73f;
L_11cdd734:;
  /* 11cdd734 push 0x11cff7e4 */
  push32((uint32_t)(0x11cff7e4u));
  /* 11cdd739 call dword ptr [0x11d013d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d8))), 0x11cdd73fu);
L_11cdd73f:;
  /* 11cdd73f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd743 jbe 0x11cdd753 */
  if ((C.cf||C.zf)) goto L_11cdd753;
  /* 11cdd745 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdd748 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11cdd74b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd74e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdd751 jmp 0x11cdd755 */
  goto L_11cdd755;
L_11cdd753:;
  /* 11cdd753 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cdd755:;
  /* 11cdd755 mov esp, ebp */
  ESP = (EBP);
  /* 11cdd757 pop ebp */
  EBP = (pop32());
  /* 11cdd758 ret  */
  ESPCHK(0x11cdd5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d760 @ 0x11cdd760 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11cdd760(void) {
  FTRACE(0x11cdd760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdd760 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdd761 mov ebp, esp */
  EBP = (ESP);
  /* 11cdd763 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdd766 push esi */
  push32((uint32_t)(ESI));
  /* 11cdd767 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11cdd76b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cdd76e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd771 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdd774 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdd777 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd77b ja 0x11cddcc8 */
  if ((!C.cf&&!C.zf)) goto L_11cddcc8;
  /* 11cdd781 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdd784 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdd786 mov dl, byte ptr [eax + 0x11cddd29] */
  DL = (r8((uint32_t)(EAX + 0x11cddd29)));
  /* 11cdd78c jmp dword ptr [edx*4 + 0x11cddccd] */
  switch (EDX) {
    case 0: goto L_11cddca6;
    case 1: goto L_11cdd7b5;
    case 2: goto L_11cdd7fb;
    case 3: goto L_11cdd948;
    case 4: goto L_11cdd970;
    case 5: goto L_11cdda0f;
    case 6: goto L_11cdda7b;
    case 7: goto L_11cddaa4;
    case 8: goto L_11cddae5;
    case 9: goto L_11cddbc7;
    case 10: goto L_11cddc2e;
    case 11: goto L_11cddc7b;
    case 12: goto L_11cdd793;
    case 13: goto L_11cdd7d8;
    case 14: goto L_11cdd81e;
    case 15: goto L_11cdd91e;
    case 16: goto L_11cdd9b5;
    case 17: goto L_11cdd9e2;
    case 18: goto L_11cdda37;
    case 19: goto L_11cddabb;
    case 20: goto L_11cddb69;
    case 21: goto L_11cddbf8;
    case 22: goto L_11cddcc8;
    default: x86_unimpl("switch@0x11cdd78c out of table"); return;
  }
L_11cdd793:;
  /* 11cdd793 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd796 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd797 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd79a push edx */
  push32((uint32_t)(EDX));
  /* 11cdd79b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd79e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11cdd7a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdd7a4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11cdd7a7 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd7a8 call 0x11cddd80 */
  push32(0x11cdd7adu); f_11cddd80();
  /* 11cdd7ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd7b0 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cdd7b5:;
  /* 11cdd7b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd7b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd7b9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd7bc push edx */
  push32((uint32_t)(EDX));
  /* 11cdd7bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd7c0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11cdd7c3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdd7c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11cdd7ca push eax */
  push32((uint32_t)(EAX));
  /* 11cdd7cb call 0x11cddd80 */
  push32(0x11cdd7d0u); f_11cddd80();
  /* 11cdd7d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd7d3 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cdd7d8:;
  /* 11cdd7d8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd7db push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd7dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd7df push edx */
  push32((uint32_t)(EDX));
  /* 11cdd7e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd7e3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cdd7e6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdd7e9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11cdd7ed push eax */
  push32((uint32_t)(EAX));
  /* 11cdd7ee call 0x11cddd80 */
  push32(0x11cdd7f3u); f_11cddd80();
  /* 11cdd7f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd7f6 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cdd7fb:;
  /* 11cdd7fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd7fe push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd7ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd802 push edx */
  push32((uint32_t)(EDX));
  /* 11cdd803 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd806 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cdd809 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdd80c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11cdd810 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd811 call 0x11cddd80 */
  push32(0x11cdd816u); f_11cddd80();
  /* 11cdd816 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd819 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cdd81e:;
  /* 11cdd81e cmp dword ptr [0x11cff7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd825 je 0x11cdd8a6 */
  if (C.zf) goto L_11cdd8a6;
  /* 11cdd827 mov dword ptr [0x11cff7c0], 0 */
  w32((uint32_t)(0x11cff7c0), (0x0u));
  /* 11cdd831 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdd834 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd835 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd838 push edx */
  push32((uint32_t)(EDX));
  /* 11cdd839 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd83c push eax */
  push32((uint32_t)(EAX));
  /* 11cdd83d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd840 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd841 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdd844 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11cdd84a push eax */
  push32((uint32_t)(EAX));
  /* 11cdd84b call 0x11cddf30 */
  push32(0x11cdd850u); f_11cddf30();
  /* 11cdd850 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd853 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd856 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd859 jne 0x11cdd860 */
  if (!C.zf) goto L_11cdd860;
  /* 11cdd85b jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cdd860:;
  /* 11cdd860 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd863 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cdd865 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11cdd868 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd86b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cdd86d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd870 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd873 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cdd875 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd878 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cdd87a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdd87d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd880 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cdd882 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdd885 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd886 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd889 push edx */
  push32((uint32_t)(EDX));
  /* 11cdd88a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd88d push eax */
  push32((uint32_t)(EAX));
  /* 11cdd88e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd891 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd892 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdd895 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11cdd89b push eax */
  push32((uint32_t)(EAX));
  /* 11cdd89c call 0x11cddf30 */
  push32(0x11cdd8a1u); f_11cddf30();
  /* 11cdd8a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd8a4 jmp 0x11cdd919 */
  goto L_11cdd919;
L_11cdd8a6:;
  /* 11cdd8a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdd8a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd8aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd8ad push edx */
  push32((uint32_t)(EDX));
  /* 11cdd8ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd8b1 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd8b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd8b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd8b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdd8b9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11cdd8bf push eax */
  push32((uint32_t)(EAX));
  /* 11cdd8c0 call 0x11cddf30 */
  push32(0x11cdd8c5u); f_11cddf30();
  /* 11cdd8c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd8c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd8cb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd8ce jne 0x11cdd8d5 */
  if (!C.zf) goto L_11cdd8d5;
  /* 11cdd8d0 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cdd8d5:;
  /* 11cdd8d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd8d8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cdd8da mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11cdd8dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd8e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cdd8e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd8e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd8e8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cdd8ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd8ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cdd8ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdd8f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd8f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cdd8f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdd8fa push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd8fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd8fe push edx */
  push32((uint32_t)(EDX));
  /* 11cdd8ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd902 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd903 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd906 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd907 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdd90a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11cdd910 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd911 call 0x11cddf30 */
  push32(0x11cdd916u); f_11cddf30();
  /* 11cdd916 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdd919:;
  /* 11cdd919 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cdd91e:;
  /* 11cdd91e mov ecx, dword ptr [0x11cff7c0] */
  ECX = (r32((uint32_t)(0x11cff7c0)));
  /* 11cdd924 mov dword ptr [0x11cff7d0], ecx */
  w32((uint32_t)(0x11cff7d0), (ECX));
  /* 11cdd92a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd92d push edx */
  push32((uint32_t)(EDX));
  /* 11cdd92e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd931 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd932 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdd934 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd937 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cdd93a push edx */
  push32((uint32_t)(EDX));
  /* 11cdd93b call 0x11cdddd0 */
  push32(0x11cdd940u); f_11cdddd0();
  /* 11cdd940 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd943 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cdd948:;
  /* 11cdd948 mov eax, dword ptr [0x11cff7c0] */
  EAX = (r32((uint32_t)(0x11cff7c0)));
  /* 11cdd94d mov dword ptr [0x11cff7d0], eax */
  w32((uint32_t)(0x11cff7d0), (EAX));
  /* 11cdd952 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd955 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd956 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd959 push edx */
  push32((uint32_t)(EDX));
  /* 11cdd95a push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdd95c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd95f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cdd962 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd963 call 0x11cdddd0 */
  push32(0x11cdd968u); f_11cdddd0();
  /* 11cdd968 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd96b jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cdd970:;
  /* 11cdd970 mov edx, dword ptr [0x11cff7c0] */
  EDX = (r32((uint32_t)(0x11cff7c0)));
  /* 11cdd976 mov dword ptr [0x11cff7d0], edx */
  w32((uint32_t)(0x11cff7d0), (EDX));
  /* 11cdd97c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd97f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cdd982 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cdd983 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11cdd988 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cdd98a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cdd98d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdd991 jne 0x11cdd99a */
  if (!C.zf) goto L_11cdd99a;
  /* 11cdd993 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11cdd99a:;
  /* 11cdd99a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd99d push edx */
  push32((uint32_t)(EDX));
  /* 11cdd99e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd9a1 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd9a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdd9a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdd9a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd9a8 call 0x11cdddd0 */
  push32(0x11cdd9adu); f_11cdddd0();
  /* 11cdd9ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd9b0 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cdd9b5:;
  /* 11cdd9b5 mov edx, dword ptr [0x11cff7c0] */
  EDX = (r32((uint32_t)(0x11cff7c0)));
  /* 11cdd9bb mov dword ptr [0x11cff7d0], edx */
  w32((uint32_t)(0x11cff7d0), (EDX));
  /* 11cdd9c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd9c4 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd9c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd9c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdd9c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cdd9cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd9ce mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11cdd9d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd9d4 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd9d5 call 0x11cdddd0 */
  push32(0x11cdd9dau); f_11cdddd0();
  /* 11cdd9da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdd9dd jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cdd9e2:;
  /* 11cdd9e2 mov ecx, dword ptr [0x11cff7c0] */
  ECX = (r32((uint32_t)(0x11cff7c0)));
  /* 11cdd9e8 mov dword ptr [0x11cff7d0], ecx */
  w32((uint32_t)(0x11cff7d0), (ECX));
  /* 11cdd9ee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdd9f1 push edx */
  push32((uint32_t)(EDX));
  /* 11cdd9f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdd9f5 push eax */
  push32((uint32_t)(EAX));
  /* 11cdd9f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdd9f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdd9fb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11cdd9fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdda01 push edx */
  push32((uint32_t)(EDX));
  /* 11cdda02 call 0x11cdddd0 */
  push32(0x11cdda07u); f_11cdddd0();
  /* 11cdda07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdda0a jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cdda0f:;
  /* 11cdda0f mov eax, dword ptr [0x11cff7c0] */
  EAX = (r32((uint32_t)(0x11cff7c0)));
  /* 11cdda14 mov dword ptr [0x11cff7d0], eax */
  w32((uint32_t)(0x11cff7d0), (EAX));
  /* 11cdda19 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdda1c push ecx */
  push32((uint32_t)(ECX));
  /* 11cdda1d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdda20 push edx */
  push32((uint32_t)(EDX));
  /* 11cdda21 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdda23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdda26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cdda29 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdda2a call 0x11cdddd0 */
  push32(0x11cdda2fu); f_11cdddd0();
  /* 11cdda2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdda32 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cdda37:;
  /* 11cdda37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdda3a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdda3e jg 0x11cdda5c */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdda5c;
  /* 11cdda40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdda43 push eax */
  push32((uint32_t)(EAX));
  /* 11cdda44 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdda47 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdda48 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdda4b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11cdda51 push eax */
  push32((uint32_t)(EAX));
  /* 11cdda52 call 0x11cddd80 */
  push32(0x11cdda57u); f_11cddd80();
  /* 11cdda57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdda5a jmp 0x11cdda76 */
  goto L_11cdda76;
L_11cdda5c:;
  /* 11cdda5c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdda5f push ecx */
  push32((uint32_t)(ECX));
  /* 11cdda60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdda63 push edx */
  push32((uint32_t)(EDX));
  /* 11cdda64 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdda67 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11cdda6d push ecx */
  push32((uint32_t)(ECX));
  /* 11cdda6e call 0x11cddd80 */
  push32(0x11cdda73u); f_11cddd80();
  /* 11cdda73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdda76:;
  /* 11cdda76 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cdda7b:;
  /* 11cdda7b mov edx, dword ptr [0x11cff7c0] */
  EDX = (r32((uint32_t)(0x11cff7c0)));
  /* 11cdda81 mov dword ptr [0x11cff7d0], edx */
  w32((uint32_t)(0x11cff7d0), (EDX));
  /* 11cdda87 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdda8a push eax */
  push32((uint32_t)(EAX));
  /* 11cdda8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdda8e push ecx */
  push32((uint32_t)(ECX));
  /* 11cdda8f push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdda91 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdda94 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cdda96 push eax */
  push32((uint32_t)(EAX));
  /* 11cdda97 call 0x11cdddd0 */
  push32(0x11cdda9cu); f_11cdddd0();
  /* 11cdda9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdda9f jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cddaa4:;
  /* 11cddaa4 mov ecx, dword ptr [0x11cff7c0] */
  ECX = (r32((uint32_t)(0x11cff7c0)));
  /* 11cddaaa mov dword ptr [0x11cff7d0], ecx */
  w32((uint32_t)(0x11cff7d0), (ECX));
  /* 11cddab0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddab3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11cddab6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cddab9 jmp 0x11cddb0d */
  goto L_11cddb0d;
L_11cddabb:;
  /* 11cddabb mov ecx, dword ptr [0x11cff7c0] */
  ECX = (r32((uint32_t)(0x11cff7c0)));
  /* 11cddac1 mov dword ptr [0x11cff7d0], ecx */
  w32((uint32_t)(0x11cff7d0), (ECX));
  /* 11cddac7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cddaca push edx */
  push32((uint32_t)(EDX));
  /* 11cddacb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cddace push eax */
  push32((uint32_t)(EAX));
  /* 11cddacf push 1 */
  push32((uint32_t)(0x1u));
  /* 11cddad1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddad4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11cddad7 push edx */
  push32((uint32_t)(EDX));
  /* 11cddad8 call 0x11cdddd0 */
  push32(0x11cddaddu); f_11cdddd0();
  /* 11cddadd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddae0 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cddae5:;
  /* 11cddae5 mov eax, dword ptr [0x11cff7c0] */
  EAX = (r32((uint32_t)(0x11cff7c0)));
  /* 11cddaea mov dword ptr [0x11cff7d0], eax */
  w32((uint32_t)(0x11cff7d0), (EAX));
  /* 11cddaef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddaf2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cddaf6 jne 0x11cddb01 */
  if (!C.zf) goto L_11cddb01;
  /* 11cddaf8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11cddaff jmp 0x11cddb0d */
  goto L_11cddb0d;
L_11cddb01:;
  /* 11cddb01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddb04 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11cddb07 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cddb0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11cddb0d:;
  /* 11cddb0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddb10 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11cddb13 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cddb16 jge 0x11cddb21 */
  if ((C.sf==C.of)) goto L_11cddb21;
  /* 11cddb18 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cddb1f jmp 0x11cddb4e */
  goto L_11cddb4e;
L_11cddb21:;
  /* 11cddb21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddb24 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11cddb27 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cddb28 mov ecx, 7 */
  ECX = (0x7u);
  /* 11cddb2d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cddb2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cddb32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddb35 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11cddb38 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cddb39 mov ecx, 7 */
  ECX = (0x7u);
  /* 11cddb3e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cddb40 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cddb43 jl 0x11cddb4e */
  if ((C.sf!=C.of)) goto L_11cddb4e;
  /* 11cddb45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cddb48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddb4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cddb4e:;
  /* 11cddb4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cddb51 push eax */
  push32((uint32_t)(EAX));
  /* 11cddb52 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cddb55 push ecx */
  push32((uint32_t)(ECX));
  /* 11cddb56 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cddb58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cddb5b push edx */
  push32((uint32_t)(EDX));
  /* 11cddb5c call 0x11cdddd0 */
  push32(0x11cddb61u); f_11cdddd0();
  /* 11cddb61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddb64 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cddb69:;
  /* 11cddb69 cmp dword ptr [0x11cff7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cddb70 je 0x11cddba0 */
  if (C.zf) goto L_11cddba0;
  /* 11cddb72 mov dword ptr [0x11cff7c0], 0 */
  w32((uint32_t)(0x11cff7c0), (0x0u));
  /* 11cddb7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cddb7f push eax */
  push32((uint32_t)(EAX));
  /* 11cddb80 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cddb83 push ecx */
  push32((uint32_t)(ECX));
  /* 11cddb84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cddb87 push edx */
  push32((uint32_t)(EDX));
  /* 11cddb88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddb8b push eax */
  push32((uint32_t)(EAX));
  /* 11cddb8c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cddb8f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11cddb95 push edx */
  push32((uint32_t)(EDX));
  /* 11cddb96 call 0x11cddf30 */
  push32(0x11cddb9bu); f_11cddf30();
  /* 11cddb9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddb9e jmp 0x11cddbc2 */
  goto L_11cddbc2;
L_11cddba0:;
  /* 11cddba0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cddba3 push eax */
  push32((uint32_t)(EAX));
  /* 11cddba4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cddba7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cddba8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cddbab push edx */
  push32((uint32_t)(EDX));
  /* 11cddbac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddbaf push eax */
  push32((uint32_t)(EAX));
  /* 11cddbb0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cddbb3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11cddbb9 push edx */
  push32((uint32_t)(EDX));
  /* 11cddbba call 0x11cddf30 */
  push32(0x11cddbbfu); f_11cddf30();
  /* 11cddbbf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cddbc2:;
  /* 11cddbc2 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cddbc7:;
  /* 11cddbc7 mov dword ptr [0x11cff7c0], 0 */
  w32((uint32_t)(0x11cff7c0), (0x0u));
  /* 11cddbd1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cddbd4 push eax */
  push32((uint32_t)(EAX));
  /* 11cddbd5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cddbd8 push ecx */
  push32((uint32_t)(ECX));
  /* 11cddbd9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cddbdc push edx */
  push32((uint32_t)(EDX));
  /* 11cddbdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddbe0 push eax */
  push32((uint32_t)(EAX));
  /* 11cddbe1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cddbe4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11cddbea push edx */
  push32((uint32_t)(EDX));
  /* 11cddbeb call 0x11cddf30 */
  push32(0x11cddbf0u); f_11cddf30();
  /* 11cddbf0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddbf3 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cddbf8:;
  /* 11cddbf8 mov eax, dword ptr [0x11cff7c0] */
  EAX = (r32((uint32_t)(0x11cff7c0)));
  /* 11cddbfd mov dword ptr [0x11cff7d0], eax */
  w32((uint32_t)(0x11cff7d0), (EAX));
  /* 11cddc02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddc05 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11cddc08 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cddc09 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11cddc0e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cddc10 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cddc13 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cddc16 push edx */
  push32((uint32_t)(EDX));
  /* 11cddc17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cddc1a push eax */
  push32((uint32_t)(EAX));
  /* 11cddc1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11cddc1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cddc20 push ecx */
  push32((uint32_t)(ECX));
  /* 11cddc21 call 0x11cdddd0 */
  push32(0x11cddc26u); f_11cdddd0();
  /* 11cddc26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddc29 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cddc2e:;
  /* 11cddc2e mov edx, dword ptr [0x11cff7c0] */
  EDX = (r32((uint32_t)(0x11cff7c0)));
  /* 11cddc34 mov dword ptr [0x11cff7d0], edx */
  w32((uint32_t)(0x11cff7d0), (EDX));
  /* 11cddc3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddc3d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11cddc40 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cddc41 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11cddc46 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cddc48 mov ecx, eax */
  ECX = (EAX);
  /* 11cddc4a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddc4d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cddc50 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddc53 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11cddc56 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cddc57 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11cddc5c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cddc5e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddc60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cddc63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cddc66 push eax */
  push32((uint32_t)(EAX));
  /* 11cddc67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cddc6a push ecx */
  push32((uint32_t)(ECX));
  /* 11cddc6b push 4 */
  push32((uint32_t)(0x4u));
  /* 11cddc6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cddc70 push edx */
  push32((uint32_t)(EDX));
  /* 11cddc71 call 0x11cdddd0 */
  push32(0x11cddc76u); f_11cdddd0();
  /* 11cddc76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddc79 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cddc7b:;
  /* 11cddc7b call 0x11cdef60 */
  push32(0x11cddc80u); f_11cdef60();
  /* 11cddc80 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cddc83 push eax */
  push32((uint32_t)(EAX));
  /* 11cddc84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cddc87 push ecx */
  push32((uint32_t)(ECX));
  /* 11cddc88 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddc8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cddc8d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cddc91 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11cddc94 mov ecx, dword ptr [eax*4 + 0x11cfe608] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11cfe608)));
  /* 11cddc9b push ecx */
  push32((uint32_t)(ECX));
  /* 11cddc9c call 0x11cddd80 */
  push32(0x11cddca1u); f_11cddd80();
  /* 11cddca1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddca4 jmp 0x11cddcc8 */
  goto L_11cddcc8;
L_11cddca6:;
  /* 11cddca6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cddca9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cddcab mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11cddcae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cddcb1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cddcb3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddcb6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cddcb9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cddcbb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cddcbe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cddcc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cddcc3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cddcc6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11cddcc8:;
  /* 11cddcc8 pop esi */
  ESI = (pop32());
  /* 11cddcc9 mov esp, ebp */
  ESP = (EBP);
  /* 11cddccb pop ebp */
  EBP = (pop32());
  /* 11cddccc ret  */
  ESPCHK(0x11cdd760u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11cddd80 (72 bytes, 30 insns) */
void f_11cddd80(void) {
  FTRACE(0x11cddd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cddd80 push ebp */
  push32((uint32_t)(EBP));
  /* 11cddd81 mov ebp, esp */
  EBP = (ESP);
L_11cddd83:;
  /* 11cddd83 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cddd86 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cddd89 je 0x11cdddc6 */
  if (C.zf) goto L_11cdddc6;
  /* 11cddd8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cddd8e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cddd91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cddd93 je 0x11cdddc6 */
  if (C.zf) goto L_11cdddc6;
  /* 11cddd95 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddd98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cddd9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cddd9d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cddd9f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11cddda1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddda4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cddda6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddda9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdddac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cdddae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdddb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdddb4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11cdddb7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdddba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cdddbc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdddbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdddc2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cdddc4 jmp 0x11cddd83 */
  goto L_11cddd83;
L_11cdddc6:;
  /* 11cdddc6 pop ebp */
  EBP = (pop32());
  /* 11cdddc7 ret  */
  ESPCHK(0x11cddd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ddd0 @ 0x11cdddd0 (173 bytes, 64 insns) */
void f_11cdddd0(void) {
  FTRACE(0x11cdddd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdddd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdddd1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdddd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdddd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cddddb cmp dword ptr [0x11cff7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cddde2 je 0x11cdddfa */
  if (C.zf) goto L_11cdddfa;
  /* 11cddde4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cddde7 push eax */
  push32((uint32_t)(EAX));
  /* 11cddde8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdddeb push ecx */
  push32((uint32_t)(ECX));
  /* 11cdddec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdddef push edx */
  push32((uint32_t)(EDX));
  /* 11cdddf0 call 0x11cdde80 */
  push32(0x11cdddf5u); f_11cdde80();
  /* 11cdddf5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdddf8 jmp 0x11cdde79 */
  goto L_11cdde79;
L_11cdddfa:;
  /* 11cdddfa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdddfd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdde00 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdde02 jae 0x11cdde70 */
  if (!C.cf) goto L_11cdde70;
  /* 11cdde04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdde07 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdde0a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11cdde0d jmp 0x11cdde18 */
  goto L_11cdde18;
L_11cdde0f:;
  /* 11cdde0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdde12 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdde15 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11cdde18:;
  /* 11cdde18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdde1b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdde1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdde20 je 0x11cdde54 */
  if (C.zf) goto L_11cdde54;
  /* 11cdde22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdde25 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cdde26 mov ecx, 0xa */
  ECX = (0xau);
  /* 11cdde2b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cdde2d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdde30 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdde33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cdde35 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdde38 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11cdde3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdde3e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cdde3f mov ecx, 0xa */
  ECX = (0xau);
  /* 11cdde44 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cdde46 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cdde49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdde4c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdde4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cdde52 jmp 0x11cdde0f */
  goto L_11cdde0f;
L_11cdde54:;
  /* 11cdde54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdde57 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cdde59 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdde5c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdde5f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11cdde61 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdde64 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cdde66 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdde69 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdde6c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11cdde6e jmp 0x11cdde79 */
  goto L_11cdde79;
L_11cdde70:;
  /* 11cdde70 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdde73 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11cdde79:;
  /* 11cdde79 mov esp, ebp */
  ESP = (EBP);
  /* 11cdde7b pop ebp */
  EBP = (pop32());
  /* 11cdde7c ret  */
  ESPCHK(0x11cdddd0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11cdde80 (172 bytes, 65 insns) */
void f_11cdde80(void) {
  FTRACE(0x11cdde80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdde80 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdde81 mov ebp, esp */
  EBP = (ESP);
  /* 11cdde83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdde86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdde89 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cdde8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cdde8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdde91 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdde94 jbe 0x11cddedb */
  if ((C.cf||C.zf)) goto L_11cddedb;
L_11cdde96:;
  /* 11cdde96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdde99 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cdde9a mov ecx, 0xa */
  ECX = (0xau);
  /* 11cdde9f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cddea1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddea4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cddea7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11cddea9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cddeac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddeaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cddeb2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cddeb5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cddeb7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cddeba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cddebd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cddebf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cddec2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cddec3 mov ecx, 0xa */
  ECX = (0xau);
  /* 11cddec8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cddeca mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cddecd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdded1 jle 0x11cddedb */
  if ((C.zf||C.sf!=C.of)) goto L_11cddedb;
  /* 11cdded3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdded6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdded9 ja 0x11cdde96 */
  if ((!C.cf&&!C.zf)) goto L_11cdde96;
L_11cddedb:;
  /* 11cddedb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddede mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cddee0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cddee3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cddee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cddee9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11cddeeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cddeee sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cddef1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cddef4:;
  /* 11cddef4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cddef7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cddef9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11cddefc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cddeff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cddf02 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cddf04 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11cddf06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cddf09 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cddf0c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cddf0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cddf12 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11cddf15 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11cddf17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cddf1a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddf1d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cddf20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cddf23 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cddf26 jb 0x11cddef4 */
  if (C.cf) goto L_11cddef4;
  /* 11cddf28 mov esp, ebp */
  ESP = (EBP);
  /* 11cddf2a pop ebp */
  EBP = (pop32());
  /* 11cddf2b ret  */
  ESPCHK(0x11cdde80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001df30 @ 0x11cddf30 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11cddf30(void) {
  FTRACE(0x11cddf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cddf30 push ebp */
  push32((uint32_t)(EBP));
  /* 11cddf31 mov ebp, esp */
  EBP = (ESP);
  /* 11cddf33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11cddf36:;
  /* 11cddf36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cddf39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cddf3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cddf3e je 0x11cde3ac */
  if (C.zf) goto L_11cde3ac;
  /* 11cddf44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cddf47 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cddf4a je 0x11cde3ac */
  if (C.zf) goto L_11cde3ac;
  /* 11cddf50 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cddf54 mov dword ptr [0x11cff7d0], 0 */
  w32((uint32_t)(0x11cff7d0), (0x0u));
  /* 11cddf5e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cddf65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cddf68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cddf6b jmp 0x11cddf76 */
  goto L_11cddf76;
L_11cddf6d:;
  /* 11cddf6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cddf70 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddf73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11cddf76:;
  /* 11cddf76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cddf79 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cddf7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cddf7f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cddf82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cddf85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cddf88 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cddf8b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cddf8d jne 0x11cddf91 */
  if (!C.zf) goto L_11cddf91;
  /* 11cddf8f jmp 0x11cddf6d */
  goto L_11cddf6d;
L_11cddf91:;
  /* 11cddf91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cddf94 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cddf97 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cddf9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cddf9d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cddfa0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cddfa3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cddfa6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cddfa9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11cddfac cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cddfb0 ja 0x11cde300 */
  if ((!C.cf&&!C.zf)) goto L_11cde300;
  /* 11cddfb6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cddfb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cddfbb mov al, byte ptr [ecx + 0x11cde3dc] */
  AL = (r8((uint32_t)(ECX + 0x11cde3dc)));
  /* 11cddfc1 jmp dword ptr [eax*4 + 0x11cde3b0] */
  switch (EAX) {
    case 0: goto L_11cde21f;
    case 1: goto L_11cde103;
    case 2: goto L_11cde08e;
    case 3: goto L_11cddfc8;
    case 4: goto L_11cde006;
    case 5: goto L_11cde067;
    case 6: goto L_11cde0b5;
    case 7: goto L_11cde0dc;
    case 8: goto L_11cde14a;
    case 9: goto L_11cde044;
    case 10: goto L_11cde300;
    default: x86_unimpl("switch@0x11cddfc1 out of table"); return;
  }
L_11cddfc8:;
  /* 11cddfc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cddfcb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11cddfce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cddfd1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cddfd4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cddfd7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cddfdb ja 0x11cde001 */
  if ((!C.cf&&!C.zf)) goto L_11cde001;
  /* 11cddfdd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cddfe0 jmp dword ptr [ecx*4 + 0x11cde42f] */
  switch (ECX) {
    case 0: goto L_11cddfe7;
    case 1: goto L_11cddff1;
    case 2: goto L_11cddff7;
    case 3: goto L_11cddffd;
    case 4: goto L_11cde025;
    case 5: goto L_11cde02f;
    case 6: goto L_11cde035;
    case 7: goto L_11cde03b;
    default: x86_unimpl("switch@0x11cddfe0 out of table"); return;
  }
L_11cddfe7:;
  /* 11cddfe7 mov dword ptr [0x11cff7d0], 1 */
  w32((uint32_t)(0x11cff7d0), (0x1u));
L_11cddff1:;
  /* 11cddff1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11cddff5 jmp 0x11cde001 */
  goto L_11cde001;
L_11cddff7:;
  /* 11cddff7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11cddffb jmp 0x11cde001 */
  goto L_11cde001;
L_11cddffd:;
  /* 11cddffd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11cde001:;
  /* 11cde001 jmp 0x11cde300 */
  goto L_11cde300;
L_11cde006:;
  /* 11cde006 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cde009 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11cde00c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cde00f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cde012 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11cde015 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde019 ja 0x11cde03f */
  if ((!C.cf&&!C.zf)) goto L_11cde03f;
  /* 11cde01b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cde01e jmp dword ptr [ecx*4 + 0x11cde43f] */
  switch (ECX) {
    case 0: goto L_11cde025;
    case 1: goto L_11cde02f;
    case 2: goto L_11cde035;
    case 3: goto L_11cde03b;
    default: x86_unimpl("switch@0x11cde01e out of table"); return;
  }
L_11cde025:;
  /* 11cde025 mov dword ptr [0x11cff7d0], 1 */
  w32((uint32_t)(0x11cff7d0), (0x1u));
L_11cde02f:;
  /* 11cde02f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11cde033 jmp 0x11cde03f */
  goto L_11cde03f;
L_11cde035:;
  /* 11cde035 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11cde039 jmp 0x11cde03f */
  goto L_11cde03f;
L_11cde03b:;
  /* 11cde03b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11cde03f:;
  /* 11cde03f jmp 0x11cde300 */
  goto L_11cde300;
L_11cde044:;
  /* 11cde044 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cde047 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11cde04a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde04e je 0x11cde058 */
  if (C.zf) goto L_11cde058;
  /* 11cde050 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde054 je 0x11cde05e */
  if (C.zf) goto L_11cde05e;
  /* 11cde056 jmp 0x11cde062 */
  goto L_11cde062;
L_11cde058:;
  /* 11cde058 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11cde05c jmp 0x11cde062 */
  goto L_11cde062;
L_11cde05e:;
  /* 11cde05e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11cde062:;
  /* 11cde062 jmp 0x11cde300 */
  goto L_11cde300;
L_11cde067:;
  /* 11cde067 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cde06a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11cde06d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde071 je 0x11cde07b */
  if (C.zf) goto L_11cde07b;
  /* 11cde073 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde077 je 0x11cde085 */
  if (C.zf) goto L_11cde085;
  /* 11cde079 jmp 0x11cde089 */
  goto L_11cde089;
L_11cde07b:;
  /* 11cde07b mov dword ptr [0x11cff7d0], 1 */
  w32((uint32_t)(0x11cff7d0), (0x1u));
L_11cde085:;
  /* 11cde085 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11cde089:;
  /* 11cde089 jmp 0x11cde300 */
  goto L_11cde300;
L_11cde08e:;
  /* 11cde08e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cde091 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11cde094 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde098 je 0x11cde0a2 */
  if (C.zf) goto L_11cde0a2;
  /* 11cde09a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde09e je 0x11cde0ac */
  if (C.zf) goto L_11cde0ac;
  /* 11cde0a0 jmp 0x11cde0b0 */
  goto L_11cde0b0;
L_11cde0a2:;
  /* 11cde0a2 mov dword ptr [0x11cff7d0], 1 */
  w32((uint32_t)(0x11cff7d0), (0x1u));
L_11cde0ac:;
  /* 11cde0ac mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11cde0b0:;
  /* 11cde0b0 jmp 0x11cde300 */
  goto L_11cde300;
L_11cde0b5:;
  /* 11cde0b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cde0b8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11cde0bb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde0bf je 0x11cde0c9 */
  if (C.zf) goto L_11cde0c9;
  /* 11cde0c1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde0c5 je 0x11cde0d3 */
  if (C.zf) goto L_11cde0d3;
  /* 11cde0c7 jmp 0x11cde0d7 */
  goto L_11cde0d7;
L_11cde0c9:;
  /* 11cde0c9 mov dword ptr [0x11cff7d0], 1 */
  w32((uint32_t)(0x11cff7d0), (0x1u));
L_11cde0d3:;
  /* 11cde0d3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11cde0d7:;
  /* 11cde0d7 jmp 0x11cde300 */
  goto L_11cde300;
L_11cde0dc:;
  /* 11cde0dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cde0df mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11cde0e2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde0e6 je 0x11cde0f0 */
  if (C.zf) goto L_11cde0f0;
  /* 11cde0e8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde0ec je 0x11cde0fa */
  if (C.zf) goto L_11cde0fa;
  /* 11cde0ee jmp 0x11cde0fe */
  goto L_11cde0fe;
L_11cde0f0:;
  /* 11cde0f0 mov dword ptr [0x11cff7d0], 1 */
  w32((uint32_t)(0x11cff7d0), (0x1u));
L_11cde0fa:;
  /* 11cde0fa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11cde0fe:;
  /* 11cde0fe jmp 0x11cde300 */
  goto L_11cde300;
L_11cde103:;
  /* 11cde103 push 0x11cfacd8 */
  push32((uint32_t)(0x11cfacd8u));
  /* 11cde108 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde10b push ecx */
  push32((uint32_t)(ECX));
  /* 11cde10c call 0x11cde960 */
  push32(0x11cde111u); f_11cde960();
  /* 11cde111 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde114 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cde116 jne 0x11cde123 */
  if (!C.zf) goto L_11cde123;
  /* 11cde118 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde11b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde11e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cde121 jmp 0x11cde141 */
  goto L_11cde141;
L_11cde123:;
  /* 11cde123 push 0x11cfacd4 */
  push32((uint32_t)(0x11cfacd4u));
  /* 11cde128 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde12b push eax */
  push32((uint32_t)(EAX));
  /* 11cde12c call 0x11cde960 */
  push32(0x11cde131u); f_11cde960();
  /* 11cde131 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde134 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cde136 jne 0x11cde141 */
  if (!C.zf) goto L_11cde141;
  /* 11cde138 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde13b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde13e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cde141:;
  /* 11cde141 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11cde145 jmp 0x11cde300 */
  goto L_11cde300;
L_11cde14a:;
  /* 11cde14a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cde14d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde151 jg 0x11cde161 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cde161;
  /* 11cde153 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cde156 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11cde15c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cde15f jmp 0x11cde16d */
  goto L_11cde16d;
L_11cde161:;
  /* 11cde161 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cde164 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11cde16a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11cde16d:;
  /* 11cde16d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde171 jle 0x11cde214 */
  if ((C.zf||C.sf!=C.of)) goto L_11cde214;
  /* 11cde177 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde17a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde17d jbe 0x11cde214 */
  if ((C.cf||C.zf)) goto L_11cde214;
  /* 11cde183 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cde186 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cde188 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cde18a mov ecx, dword ptr [0x11cfd00c] */
  ECX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cde190 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cde192 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11cde196 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11cde19c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cde19e je 0x11cde1d7 */
  if (C.zf) goto L_11cde1d7;
  /* 11cde1a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde1a3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde1a6 jbe 0x11cde1d7 */
  if ((C.cf||C.zf)) goto L_11cde1d7;
  /* 11cde1a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde1ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cde1ad mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cde1b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cde1b2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11cde1b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde1b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cde1b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde1bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde1bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cde1c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cde1c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde1c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11cde1ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde1cd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cde1cf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cde1d2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde1d5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cde1d7:;
  /* 11cde1d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde1da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cde1dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cde1df mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cde1e1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11cde1e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde1e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cde1e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde1eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde1ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cde1f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cde1f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde1f6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cde1f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde1fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cde1fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cde201 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde204 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cde206 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cde209 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cde20c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cde20f jmp 0x11cde16d */
  goto L_11cde16d;
L_11cde214:;
  /* 11cde214 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cde217 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cde21a jmp 0x11cddf36 */
  goto L_11cddf36;
L_11cde21f:;
  /* 11cde21f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cde222 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cde225 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cde227 je 0x11cde2f2 */
  if (C.zf) goto L_11cde2f2;
  /* 11cde22d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde230 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde233 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11cde236:;
  /* 11cde236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde239 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cde23c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cde23e je 0x11cde2f0 */
  if (C.zf) goto L_11cde2f0;
  /* 11cde244 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde247 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde24a je 0x11cde2f0 */
  if (C.zf) goto L_11cde2f0;
  /* 11cde250 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde253 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cde256 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde259 jne 0x11cde269 */
  if (!C.zf) goto L_11cde269;
  /* 11cde25b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde25e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde261 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11cde264 jmp 0x11cde2f0 */
  goto L_11cde2f0;
L_11cde269:;
  /* 11cde269 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde26c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cde26e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cde270 mov edx, dword ptr [0x11cfd00c] */
  EDX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cde276 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cde278 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11cde27c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cde281 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cde283 je 0x11cde2bc */
  if (C.zf) goto L_11cde2bc;
  /* 11cde285 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde288 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde28b jbe 0x11cde2bc */
  if ((C.cf||C.zf)) goto L_11cde2bc;
  /* 11cde28d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde290 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cde292 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde295 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cde297 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11cde299 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde29c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cde29e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde2a1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde2a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11cde2a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde2a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde2ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cde2af mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde2b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cde2b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cde2b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde2ba mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11cde2bc:;
  /* 11cde2bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde2bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cde2c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde2c4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cde2c6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11cde2c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde2cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cde2cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde2d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde2d3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cde2d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde2d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde2db mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11cde2de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde2e1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cde2e3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cde2e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde2e9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11cde2eb jmp 0x11cde236 */
  goto L_11cde236;
L_11cde2f0:;
  /* 11cde2f0 jmp 0x11cde2fb */
  goto L_11cde2fb;
L_11cde2f2:;
  /* 11cde2f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde2f5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde2f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11cde2fb:;
  /* 11cde2fb jmp 0x11cddf36 */
  goto L_11cddf36;
L_11cde300:;
  /* 11cde300 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11cde304 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cde306 je 0x11cde32c */
  if (C.zf) goto L_11cde32c;
  /* 11cde308 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cde30b push edx */
  push32((uint32_t)(EDX));
  /* 11cde30c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde30f push eax */
  push32((uint32_t)(EAX));
  /* 11cde310 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde313 push ecx */
  push32((uint32_t)(ECX));
  /* 11cde314 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cde317 push edx */
  push32((uint32_t)(EDX));
  /* 11cde318 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cde31b push eax */
  push32((uint32_t)(EAX));
  /* 11cde31c call 0x11cdd760 */
  push32(0x11cde321u); f_11cdd760();
  /* 11cde321 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde324 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cde327 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11cde32a jmp 0x11cde3a7 */
  goto L_11cde3a7;
L_11cde32c:;
  /* 11cde32c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde32f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cde331 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cde333 mov ecx, dword ptr [0x11cfd00c] */
  ECX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cde339 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cde33b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11cde33f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11cde345 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cde347 je 0x11cde378 */
  if (C.zf) goto L_11cde378;
  /* 11cde349 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde34c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cde34e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde351 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cde353 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11cde355 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde358 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cde35a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde35d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde360 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cde362 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde365 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde368 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11cde36b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde36e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cde370 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cde373 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde376 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11cde378:;
  /* 11cde378 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde37b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cde37d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde380 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cde382 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11cde384 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde387 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cde389 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde38c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde38f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11cde391 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde394 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde397 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cde39a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde39d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cde39f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cde3a2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde3a5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11cde3a7:;
  /* 11cde3a7 jmp 0x11cddf36 */
  goto L_11cddf36;
L_11cde3ac:;
  /* 11cde3ac mov esp, ebp */
  ESP = (EBP);
  /* 11cde3ae pop ebp */
  EBP = (pop32());
  /* 11cde3af ret  */
  ESPCHK(0x11cddf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e450 @ 0x11cde450 (650 bytes, 178 insns) */
void f_11cde450(void) {
  FTRACE(0x11cde450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cde450 push ebp */
  push32((uint32_t)(EBP));
  /* 11cde451 mov ebp, esp */
  EBP = (ESP);
  /* 11cde453 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cde459 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde45d jne 0x11cde5b9 */
  if (!C.zf) goto L_11cde5b9;
  /* 11cde463 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde466 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11cde46c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11cde472 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cde475 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cde47c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11cde486 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde488 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11cde48e push edx */
  push32((uint32_t)(EDX));
  /* 11cde48f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cde492 push eax */
  push32((uint32_t)(EAX));
  /* 11cde493 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde496 push ecx */
  push32((uint32_t)(ECX));
  /* 11cde497 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cde49a push edx */
  push32((uint32_t)(EDX));
  /* 11cde49b call 0x11cdfa40 */
  push32(0x11cde4a0u); f_11cdfa40();
  /* 11cde4a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde4a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cde4a6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde4aa jne 0x11cde53f */
  if (!C.zf) goto L_11cde53f;
  /* 11cde4b0 call dword ptr [0x11d013f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f4))), 0x11cde4b6u);
  /* 11cde4b6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde4b9 je 0x11cde4c0 */
  if (C.zf) goto L_11cde4c0;
  /* 11cde4bb jmp 0x11cde59d */
  goto L_11cde59d;
L_11cde4c0:;
  /* 11cde4c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde4c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde4c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde4c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde4c9 push eax */
  push32((uint32_t)(EAX));
  /* 11cde4ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cde4cd push ecx */
  push32((uint32_t)(ECX));
  /* 11cde4ce call 0x11cdfa40 */
  push32(0x11cde4d3u); f_11cdfa40();
  /* 11cde4d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde4d6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11cde4dc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde4e3 jne 0x11cde4ea */
  if (!C.zf) goto L_11cde4ea;
  /* 11cde4e5 jmp 0x11cde59d */
  goto L_11cde59d;
L_11cde4ea:;
  /* 11cde4ea push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11cde4ec push 0x11cface0 */
  push32((uint32_t)(0x11cface0u));
  /* 11cde4f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cde4f3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11cde4f9 push edx */
  push32((uint32_t)(EDX));
  /* 11cde4fa call 0x11ccb4c0 */
  push32(0x11cde4ffu); f_11ccb4c0();
  /* 11cde4ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde502 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cde505 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde509 jne 0x11cde510 */
  if (!C.zf) goto L_11cde510;
  /* 11cde50b jmp 0x11cde59d */
  goto L_11cde59d;
L_11cde510:;
  /* 11cde510 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cde517 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde519 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11cde51f push eax */
  push32((uint32_t)(EAX));
  /* 11cde520 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cde523 push ecx */
  push32((uint32_t)(ECX));
  /* 11cde524 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde527 push edx */
  push32((uint32_t)(EDX));
  /* 11cde528 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cde52b push eax */
  push32((uint32_t)(EAX));
  /* 11cde52c call 0x11cdfa40 */
  push32(0x11cde531u); f_11cdfa40();
  /* 11cde531 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde534 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cde537 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde53b jne 0x11cde53f */
  if (!C.zf) goto L_11cde53f;
  /* 11cde53d jmp 0x11cde59d */
  goto L_11cde59d;
L_11cde53f:;
  /* 11cde53f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11cde541 push 0x11cface0 */
  push32((uint32_t)(0x11cface0u));
  /* 11cde546 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cde548 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cde54b push ecx */
  push32((uint32_t)(ECX));
  /* 11cde54c call 0x11ccb4c0 */
  push32(0x11cde551u); f_11ccb4c0();
  /* 11cde551 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde554 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11cde55a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11cde55c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11cde562 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde565 jne 0x11cde569 */
  if (!C.zf) goto L_11cde569;
  /* 11cde567 jmp 0x11cde59d */
  goto L_11cde59d;
L_11cde569:;
  /* 11cde569 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cde56c push ecx */
  push32((uint32_t)(ECX));
  /* 11cde56d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cde570 push edx */
  push32((uint32_t)(EDX));
  /* 11cde571 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11cde577 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cde579 push ecx */
  push32((uint32_t)(ECX));
  /* 11cde57a call 0x11cd1470 */
  push32(0x11cde57fu); f_11cd1470();
  /* 11cde57f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde582 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde586 je 0x11cde596 */
  if (C.zf) goto L_11cde596;
  /* 11cde588 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cde58a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cde58d push edx */
  push32((uint32_t)(EDX));
  /* 11cde58e call 0x11ccbf50 */
  push32(0x11cde593u); f_11ccbf50();
  /* 11cde593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cde596:;
  /* 11cde596 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cde598 jmp 0x11cde6d6 */
  goto L_11cde6d6;
L_11cde59d:;
  /* 11cde59d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde5a1 je 0x11cde5b1 */
  if (C.zf) goto L_11cde5b1;
  /* 11cde5a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cde5a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cde5a8 push eax */
  push32((uint32_t)(EAX));
  /* 11cde5a9 call 0x11ccbf50 */
  push32(0x11cde5aeu); f_11ccbf50();
  /* 11cde5ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cde5b1:;
  /* 11cde5b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cde5b4 jmp 0x11cde6d6 */
  goto L_11cde6d6;
L_11cde5b9:;
  /* 11cde5b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde5bd jne 0x11cde6d3 */
  if (!C.zf) goto L_11cde6d3;
  /* 11cde5c3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11cde5cd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde5d0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11cde5d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde5d8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11cde5de push edx */
  push32((uint32_t)(EDX));
  /* 11cde5df push 0x11cff6e4 */
  push32((uint32_t)(0x11cff6e4u));
  /* 11cde5e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde5e7 push eax */
  push32((uint32_t)(EAX));
  /* 11cde5e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cde5eb push ecx */
  push32((uint32_t)(ECX));
  /* 11cde5ec call 0x11cdf8a0 */
  push32(0x11cde5f1u); f_11cdf8a0();
  /* 11cde5f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde5f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cde5f6 jne 0x11cde600 */
  if (!C.zf) goto L_11cde600;
  /* 11cde5f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cde5fb jmp 0x11cde6d6 */
  goto L_11cde6d6;
L_11cde600:;
  /* 11cde600 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11cde606 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11cde609 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11cde613 jmp 0x11cde624 */
  goto L_11cde624;
L_11cde615:;
  /* 11cde615 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11cde61b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde61e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11cde624:;
  /* 11cde624 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde62b jge 0x11cde6cf */
  if ((C.sf==C.of)) goto L_11cde6cf;
  /* 11cde631 cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde638 jle 0x11cde66b */
  if ((C.zf||C.sf!=C.of)) goto L_11cde66b;
  /* 11cde63a push 4 */
  push32((uint32_t)(0x4u));
  /* 11cde63c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11cde642 mov dl, byte ptr [ecx*2 + 0x11cff6e4] */
  DL = (r8((uint32_t)(ECX*2 + 0x11cff6e4)));
  /* 11cde649 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11cde64f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11cde655 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cde65a push eax */
  push32((uint32_t)(EAX));
  /* 11cde65b call 0x11cd1b90 */
  push32(0x11cde660u); f_11cd1b90();
  /* 11cde660 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde663 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11cde669 jmp 0x11cde69e */
  goto L_11cde69e;
L_11cde66b:;
  /* 11cde66b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11cde671 mov dl, byte ptr [ecx*2 + 0x11cff6e4] */
  DL = (r8((uint32_t)(ECX*2 + 0x11cff6e4)));
  /* 11cde678 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11cde67e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11cde684 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cde689 mov ecx, dword ptr [0x11cfd00c] */
  ECX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cde68f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cde691 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11cde695 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11cde698 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11cde69e:;
  /* 11cde69e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde6a5 je 0x11cde6c8 */
  if (C.zf) goto L_11cde6c8;
  /* 11cde6a7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11cde6ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cde6b0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cde6b3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11cde6ba lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11cde6be mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11cde6c4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11cde6c6 jmp 0x11cde6ca */
  goto L_11cde6ca;
L_11cde6c8:;
  /* 11cde6c8 jmp 0x11cde6cf */
  goto L_11cde6cf;
L_11cde6ca:;
  /* 11cde6ca jmp 0x11cde615 */
  goto L_11cde615;
L_11cde6cf:;
  /* 11cde6cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cde6d1 jmp 0x11cde6d6 */
  goto L_11cde6d6;
L_11cde6d3:;
  /* 11cde6d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11cde6d6:;
  /* 11cde6d6 mov esp, ebp */
  ESP = (EBP);
  /* 11cde6d8 pop ebp */
  EBP = (pop32());
  /* 11cde6d9 ret  */
  ESPCHK(0x11cde450u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e6e0 @ 0x11cde6e0 (10 bytes, 5 insns) */
void f_11cde6e0(void) {
  FTRACE(0x11cde6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cde6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cde6e1 mov ebp, esp */
  EBP = (ESP);
  /* 11cde6e3 mov eax, dword ptr [0x11cfe2b8] */
  EAX = (r32((uint32_t)(0x11cfe2b8)));
  /* 11cde6e8 pop ebp */
  EBP = (pop32());
  /* 11cde6e9 ret  */
  ESPCHK(0x11cde6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e6f0 @ 0x11cde6f0 (575 bytes, 196 insns) */
void f_11cde6f0(void) {
  FTRACE(0x11cde6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cde6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cde6f1 mov ebp, esp */
  EBP = (ESP);
  /* 11cde6f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cde6f5 push 0x11cfacf0 */
  push32((uint32_t)(0x11cfacf0u));
  /* 11cde6fa push 0x11cd501c */
  push32((uint32_t)(0x11cd501cu));
  /* 11cde6ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11cde705 push eax */
  push32((uint32_t)(EAX));
  /* 11cde706 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11cde70d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde710 push ebx */
  push32((uint32_t)(EBX));
  /* 11cde711 push esi */
  push32((uint32_t)(ESI));
  /* 11cde712 push edi */
  push32((uint32_t)(EDI));
  /* 11cde713 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cde716 cmp dword ptr [0x11cff6f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde71d jne 0x11cde76e */
  if (!C.zf) goto L_11cde76e;
  /* 11cde71f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11cde722 push eax */
  push32((uint32_t)(EAX));
  /* 11cde723 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cde725 push 0x11cfa420 */
  push32((uint32_t)(0x11cfa420u));
  /* 11cde72a push 1 */
  push32((uint32_t)(0x1u));
  /* 11cde72c call dword ptr [0x11d01348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01348))), 0x11cde732u);
  /* 11cde732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cde734 je 0x11cde742 */
  if (C.zf) goto L_11cde742;
  /* 11cde736 mov dword ptr [0x11cff6f0], 1 */
  w32((uint32_t)(0x11cff6f0), (0x1u));
  /* 11cde740 jmp 0x11cde76e */
  goto L_11cde76e;
L_11cde742:;
  /* 11cde742 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11cde745 push ecx */
  push32((uint32_t)(ECX));
  /* 11cde746 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cde748 push 0x11cfa41c */
  push32((uint32_t)(0x11cfa41cu));
  /* 11cde74d push 1 */
  push32((uint32_t)(0x1u));
  /* 11cde74f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde751 call dword ptr [0x11d01340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01340))), 0x11cde757u);
  /* 11cde757 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cde759 je 0x11cde767 */
  if (C.zf) goto L_11cde767;
  /* 11cde75b mov dword ptr [0x11cff6f0], 2 */
  w32((uint32_t)(0x11cff6f0), (0x2u));
  /* 11cde765 jmp 0x11cde76e */
  goto L_11cde76e;
L_11cde767:;
  /* 11cde767 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cde769 jmp 0x11cde949 */
  goto L_11cde949;
L_11cde76e:;
  /* 11cde76e cmp dword ptr [0x11cff6f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde775 jne 0x11cde792 */
  if (!C.zf) goto L_11cde792;
  /* 11cde777 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde77a push edx */
  push32((uint32_t)(EDX));
  /* 11cde77b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde77e push eax */
  push32((uint32_t)(EAX));
  /* 11cde77f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cde782 push ecx */
  push32((uint32_t)(ECX));
  /* 11cde783 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde786 push edx */
  push32((uint32_t)(EDX));
  /* 11cde787 call dword ptr [0x11d01348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01348))), 0x11cde78du);
  /* 11cde78d jmp 0x11cde949 */
  goto L_11cde949;
L_11cde792:;
  /* 11cde792 cmp dword ptr [0x11cff6f0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6f0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde799 jne 0x11cde947 */
  if (!C.zf) goto L_11cde947;
  /* 11cde79f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde7a3 jne 0x11cde7ad */
  if (!C.zf) goto L_11cde7ad;
  /* 11cde7a5 mov eax, dword ptr [0x11cff674] */
  EAX = (r32((uint32_t)(0x11cff674)));
  /* 11cde7aa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11cde7ad:;
  /* 11cde7ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde7af push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde7b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde7b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde7b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde7b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11cde7b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cde7bc push edx */
  push32((uint32_t)(EDX));
  /* 11cde7bd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11cde7c2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cde7c5 push eax */
  push32((uint32_t)(EAX));
  /* 11cde7c6 call dword ptr [0x11d0139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0139c))), 0x11cde7ccu);
  /* 11cde7cc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11cde7cf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde7d3 jne 0x11cde7dc */
  if (!C.zf) goto L_11cde7dc;
  /* 11cde7d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cde7d7 jmp 0x11cde949 */
  goto L_11cde949;
L_11cde7dc:;
  /* 11cde7dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cde7e3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cde7e6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde7e9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11cde7eb call 0x11cd0df0 */
  push32(0x11cde7f0u); f_11cd0df0();
  /* 11cde7f0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11cde7f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cde7f6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cde7f9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11cde7fc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cde7ff push edx */
  push32((uint32_t)(EDX));
  /* 11cde800 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde802 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cde805 push eax */
  push32((uint32_t)(EAX));
  /* 11cde806 call 0x11cd2900 */
  push32(0x11cde80bu); f_11cd2900();
  /* 11cde80b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde80e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11cde815 jmp 0x11cde82e */
  goto L_11cde82e;
  /* 11cde817 mov eax, 1 */
  EAX = (0x1u);
  /* 11cde81c ret  */
  ESPCHK(0x11cde6f0u, _esp0);
  ESP += 4; return;
  /* 11cde81d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11cde820 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11cde827 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11cde82e:;
  /* 11cde82e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde832 jne 0x11cde83b */
  if (!C.zf) goto L_11cde83b;
  /* 11cde834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cde836 jmp 0x11cde949 */
  goto L_11cde949;
L_11cde83b:;
  /* 11cde83b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde83d push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde83f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cde842 push ecx */
  push32((uint32_t)(ECX));
  /* 11cde843 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cde846 push edx */
  push32((uint32_t)(EDX));
  /* 11cde847 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde84a push eax */
  push32((uint32_t)(EAX));
  /* 11cde84b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cde84e push ecx */
  push32((uint32_t)(ECX));
  /* 11cde84f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11cde854 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cde857 push edx */
  push32((uint32_t)(EDX));
  /* 11cde858 call dword ptr [0x11d0139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0139c))), 0x11cde85eu);
  /* 11cde85e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cde860 jne 0x11cde869 */
  if (!C.zf) goto L_11cde869;
  /* 11cde862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cde864 jmp 0x11cde949 */
  goto L_11cde949;
L_11cde869:;
  /* 11cde869 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cde870 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cde873 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11cde877 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde87a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11cde87c call 0x11cd0df0 */
  push32(0x11cde881u); f_11cd0df0();
  /* 11cde881 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11cde884 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cde887 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cde88a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11cde88d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11cde894 jmp 0x11cde8ad */
  goto L_11cde8ad;
  /* 11cde896 mov eax, 1 */
  EAX = (0x1u);
  /* 11cde89b ret  */
  ESPCHK(0x11cde6f0u, _esp0);
  ESP += 4; return;
  /* 11cde89c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11cde89f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11cde8a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11cde8ad:;
  /* 11cde8ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde8b1 jne 0x11cde8ba */
  if (!C.zf) goto L_11cde8ba;
  /* 11cde8b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cde8b5 jmp 0x11cde949 */
  goto L_11cde949;
L_11cde8ba:;
  /* 11cde8ba cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde8be jne 0x11cde8c9 */
  if (!C.zf) goto L_11cde8c9;
  /* 11cde8c0 mov edx, dword ptr [0x11cff664] */
  EDX = (r32((uint32_t)(0x11cff664)));
  /* 11cde8c6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11cde8c9:;
  /* 11cde8c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde8cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cde8cf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11cde8d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde8d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cde8db mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11cde8e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cde8e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cde8e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cde8e9 push edx */
  push32((uint32_t)(EDX));
  /* 11cde8ea mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cde8ed push eax */
  push32((uint32_t)(EAX));
  /* 11cde8ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde8f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11cde8f2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cde8f5 push edx */
  push32((uint32_t)(EDX));
  /* 11cde8f6 call dword ptr [0x11d01340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01340))), 0x11cde8fcu);
  /* 11cde8fc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11cde8ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde902 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cde905 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cde907 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11cde90c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde912 je 0x11cde928 */
  if (C.zf) goto L_11cde928;
  /* 11cde914 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde917 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cde91a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cde91c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11cde920 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde926 je 0x11cde92c */
  if (C.zf) goto L_11cde92c;
L_11cde928:;
  /* 11cde928 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cde92a jmp 0x11cde949 */
  goto L_11cde949;
L_11cde92c:;
  /* 11cde92c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cde92f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cde931 push eax */
  push32((uint32_t)(EAX));
  /* 11cde932 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cde935 push ecx */
  push32((uint32_t)(ECX));
  /* 11cde936 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cde939 push edx */
  push32((uint32_t)(EDX));
  /* 11cde93a call 0x11cd2960 */
  push32(0x11cde93fu); f_11cd2960();
  /* 11cde93f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde942 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cde945 jmp 0x11cde949 */
  goto L_11cde949;
L_11cde947:;
  /* 11cde947 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cde949:;
  /* 11cde949 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11cde94c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cde94f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11cde956 pop edi */
  EDI = (pop32());
  /* 11cde957 pop esi */
  ESI = (pop32());
  /* 11cde958 pop ebx */
  EBX = (pop32());
  /* 11cde959 mov esp, ebp */
  ESP = (EBP);
  /* 11cde95b pop ebp */
  EBP = (pop32());
  /* 11cde95c ret  */
  ESPCHK(0x11cde6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e960 @ 0x11cde960 (208 bytes, 85 insns) */
void f_11cde960(void) {
  FTRACE(0x11cde960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cde960 push ebp */
  push32((uint32_t)(EBP));
  /* 11cde961 mov ebp, esp */
  EBP = (ESP);
  /* 11cde963 push edi */
  push32((uint32_t)(EDI));
  /* 11cde964 push esi */
  push32((uint32_t)(ESI));
  /* 11cde965 push ebx */
  push32((uint32_t)(EBX));
  /* 11cde966 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11cde969 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11cde96c lea eax, [0x11cff65c] */
  EAX = ((uint32_t)(0x11cff65c));
  /* 11cde972 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde976 jne 0x11cde9b3 */
  if (!C.zf) goto L_11cde9b3;
  /* 11cde978 mov al, 0xff */
  AL = (0xffu);
  /* 11cde97a mov edi, edi */
  EDI = (EDI);
L_11cde97c:;
  /* 11cde97c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11cde97e je 0x11cde9ae */
  if (C.zf) goto L_11cde9ae;
  /* 11cde980 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cde982 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cde983 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11cde985 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cde986 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cde988 je 0x11cde97c */
  if (C.zf) goto L_11cde97c;
  /* 11cde98a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cde98c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cde98e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cde990 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11cde993 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cde995 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cde997 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11cde999 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cde99b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cde99d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cde99f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11cde9a2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cde9a4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cde9a6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cde9a8 je 0x11cde97c */
  if (C.zf) goto L_11cde97c;
  /* 11cde9aa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cde9ac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11cde9ae:;
  /* 11cde9ae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11cde9b1 jmp 0x11cdea2b */
  goto L_11cdea2b;
L_11cde9b3:;
  /* 11cde9b3 lock inc dword ptr [0x11cff7e4] */
  x86_unimpl("lock inc @ 0x11cde9b3");
  /* 11cde9ba cmp dword ptr [0x11cff7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cde9c1 jg 0x11cde9c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cde9c7;
  /* 11cde9c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cde9c5 jmp 0x11cde9dc */
  goto L_11cde9dc;
L_11cde9c7:;
  /* 11cde9c7 lock dec dword ptr [0x11cff7e4] */
  x86_unimpl("lock dec @ 0x11cde9c7");
  /* 11cde9ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11cde9d0 call 0x11ccb3c0 */
  push32(0x11cde9d5u); f_11ccb3c0();
  /* 11cde9d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11cde9dc:;
  /* 11cde9dc mov eax, 0xff */
  EAX = (0xffu);
  /* 11cde9e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11cde9e3 nop  */
  /* nop */
L_11cde9e4:;
  /* 11cde9e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11cde9e6 je 0x11cdea0f */
  if (C.zf) goto L_11cdea0f;
  /* 11cde9e8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cde9ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cde9eb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11cde9ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cde9ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cde9f0 je 0x11cde9e4 */
  if (C.zf) goto L_11cde9e4;
  /* 11cde9f2 push eax */
  push32((uint32_t)(EAX));
  /* 11cde9f3 push ebx */
  push32((uint32_t)(EBX));
  /* 11cde9f4 call 0x11cd1d00 */
  push32(0x11cde9f9u); f_11cd1d00();
  /* 11cde9f9 mov ebx, eax */
  EBX = (EAX);
  /* 11cde9fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cde9fe call 0x11cd1d00 */
  push32(0x11cdea03u); f_11cd1d00();
  /* 11cdea03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdea06 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cdea08 je 0x11cde9e4 */
  if (C.zf) goto L_11cde9e4;
  /* 11cdea0a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdea0c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11cdea0f:;
  /* 11cdea0f mov ebx, eax */
  EBX = (EAX);
  /* 11cdea11 pop eax */
  EAX = (pop32());
  /* 11cdea12 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdea14 jne 0x11cdea1f */
  if (!C.zf) goto L_11cdea1f;
  /* 11cdea16 lock dec dword ptr [0x11cff7e4] */
  x86_unimpl("lock dec @ 0x11cdea16");
  /* 11cdea1d jmp 0x11cdea29 */
  goto L_11cdea29;
L_11cdea1f:;
  /* 11cdea1f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11cdea21 call 0x11ccb460 */
  push32(0x11cdea26u); f_11ccb460();
  /* 11cdea26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdea29:;
  /* 11cdea29 mov eax, ebx */
  EAX = (EBX);
L_11cdea2b:;
  /* 11cdea2b pop ebx */
  EBX = (pop32());
  /* 11cdea2c pop esi */
  ESI = (pop32());
  /* 11cdea2d pop edi */
  EDI = (pop32());
  /* 11cdea2e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cdea2f ret  */
  ESPCHK(0x11cde960u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ea30 @ 0x11cdea30 (257 bytes, 103 insns) */
void f_11cdea30(void) {
  FTRACE(0x11cdea30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdea30 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdea31 mov ebp, esp */
  EBP = (ESP);
  /* 11cdea33 push edi */
  push32((uint32_t)(EDI));
  /* 11cdea34 push esi */
  push32((uint32_t)(ESI));
  /* 11cdea35 push ebx */
  push32((uint32_t)(EBX));
  /* 11cdea36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdea39 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdea3b je 0x11cdeb2a */
  if (C.zf) goto L_11cdeb2a;
  /* 11cdea41 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdea44 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdea47 lea eax, [0x11cff65c] */
  EAX = ((uint32_t)(0x11cff65c));
  /* 11cdea4d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdea51 jne 0x11cdeaa1 */
  if (!C.zf) goto L_11cdeaa1;
  /* 11cdea53 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11cdea55 mov bl, 0x5a */
  BL = (0x5au);
  /* 11cdea57 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11cdea59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cdea5c:;
  /* 11cdea5c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11cdea5e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11cdea60 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11cdea62 je 0x11cdea85 */
  if (C.zf) goto L_11cdea85;
  /* 11cdea64 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11cdea66 je 0x11cdea85 */
  if (C.zf) goto L_11cdea85;
  /* 11cdea68 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cdea69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cdea6a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cdea6c jb 0x11cdea74 */
  if (C.cf) goto L_11cdea74;
  /* 11cdea6e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cdea70 ja 0x11cdea74 */
  if ((!C.cf&&!C.zf)) goto L_11cdea74;
  /* 11cdea72 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11cdea74:;
  /* 11cdea74 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cdea76 jb 0x11cdea7e */
  if (C.cf) goto L_11cdea7e;
  /* 11cdea78 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cdea7a ja 0x11cdea7e */
  if ((!C.cf&&!C.zf)) goto L_11cdea7e;
  /* 11cdea7c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11cdea7e:;
  /* 11cdea7e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cdea80 jne 0x11cdea8f */
  if (!C.zf) goto L_11cdea8f;
  /* 11cdea82 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cdea83 jne 0x11cdea5c */
  if (!C.zf) goto L_11cdea5c;
L_11cdea85:;
  /* 11cdea85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdea87 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cdea89 je 0x11cdeb2a */
  if (C.zf) goto L_11cdeb2a;
L_11cdea8f:;
  /* 11cdea8f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11cdea94 jb 0x11cdeb2a */
  if (C.cf) goto L_11cdeb2a;
  /* 11cdea9a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdea9c jmp 0x11cdeb2a */
  goto L_11cdeb2a;
L_11cdeaa1:;
  /* 11cdeaa1 lock inc dword ptr [0x11cff7e4] */
  x86_unimpl("lock inc @ 0x11cdeaa1");
  /* 11cdeaa8 cmp dword ptr [0x11cff7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdeaaf jg 0x11cdeab5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdeab5;
  /* 11cdeab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdeab3 jmp 0x11cdeace */
  goto L_11cdeace;
L_11cdeab5:;
  /* 11cdeab5 lock dec dword ptr [0x11cff7e4] */
  x86_unimpl("lock dec @ 0x11cdeab5");
  /* 11cdeabc mov ebx, ecx */
  EBX = (ECX);
  /* 11cdeabe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11cdeac0 call 0x11ccb3c0 */
  push32(0x11cdeac5u); f_11ccb3c0();
  /* 11cdeac5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11cdeacc mov ecx, ebx */
  ECX = (EBX);
L_11cdeace:;
  /* 11cdeace xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdead0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11cdead2 mov edi, edi */
  EDI = (EDI);
L_11cdead4:;
  /* 11cdead4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cdead6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdead8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11cdeada je 0x11cdeaff */
  if (C.zf) goto L_11cdeaff;
  /* 11cdeadc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11cdeade je 0x11cdeaff */
  if (C.zf) goto L_11cdeaff;
  /* 11cdeae0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cdeae1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cdeae2 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdeae3 push eax */
  push32((uint32_t)(EAX));
  /* 11cdeae4 push ebx */
  push32((uint32_t)(EBX));
  /* 11cdeae5 call 0x11cd1d00 */
  push32(0x11cdeaeau); f_11cd1d00();
  /* 11cdeaea mov ebx, eax */
  EBX = (EAX);
  /* 11cdeaec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdeaef call 0x11cd1d00 */
  push32(0x11cdeaf4u); f_11cd1d00();
  /* 11cdeaf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdeaf7 pop ecx */
  ECX = (pop32());
  /* 11cdeaf8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdeafa jne 0x11cdeb05 */
  if (!C.zf) goto L_11cdeb05;
  /* 11cdeafc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cdeafd jne 0x11cdead4 */
  if (!C.zf) goto L_11cdead4;
L_11cdeaff:;
  /* 11cdeaff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdeb01 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdeb03 je 0x11cdeb0e */
  if (C.zf) goto L_11cdeb0e;
L_11cdeb05:;
  /* 11cdeb05 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11cdeb0a jb 0x11cdeb0e */
  if (C.cf) goto L_11cdeb0e;
  /* 11cdeb0c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11cdeb0e:;
  /* 11cdeb0e pop eax */
  EAX = (pop32());
  /* 11cdeb0f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdeb11 jne 0x11cdeb1c */
  if (!C.zf) goto L_11cdeb1c;
  /* 11cdeb13 lock dec dword ptr [0x11cff7e4] */
  x86_unimpl("lock dec @ 0x11cdeb13");
  /* 11cdeb1a jmp 0x11cdeb2a */
  goto L_11cdeb2a;
L_11cdeb1c:;
  /* 11cdeb1c mov ebx, ecx */
  EBX = (ECX);
  /* 11cdeb1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11cdeb20 call 0x11ccb460 */
  push32(0x11cdeb25u); f_11ccb460();
  /* 11cdeb25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdeb28 mov ecx, ebx */
  ECX = (EBX);
L_11cdeb2a:;
  /* 11cdeb2a mov eax, ecx */
  EAX = (ECX);
  /* 11cdeb2c pop ebx */
  EBX = (pop32());
  /* 11cdeb2d pop esi */
  ESI = (pop32());
  /* 11cdeb2e pop edi */
  EDI = (pop32());
  /* 11cdeb2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cdeb30 ret  */
  ESPCHK(0x11cdea30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001eb40 @ 0x11cdeb40 (255 bytes, 88 insns) */
void f_11cdeb40(void) {
  FTRACE(0x11cdeb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdeb40 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdeb41 mov ebp, esp */
  EBP = (ESP);
  /* 11cdeb43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11cdeb46:;
  /* 11cdeb46 cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdeb4d jle 0x11cdeb66 */
  if ((C.zf||C.sf!=C.of)) goto L_11cdeb66;
  /* 11cdeb4f push 8 */
  push32((uint32_t)(0x8u));
  /* 11cdeb51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdeb54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdeb56 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cdeb58 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdeb59 call 0x11cd1b90 */
  push32(0x11cdeb5eu); f_11cd1b90();
  /* 11cdeb5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdeb61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cdeb64 jmp 0x11cdeb7f */
  goto L_11cdeb7f;
L_11cdeb66:;
  /* 11cdeb66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdeb69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdeb6b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cdeb6d mov ecx, dword ptr [0x11cfd00c] */
  ECX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cdeb73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdeb75 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11cdeb79 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdeb7c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11cdeb7f:;
  /* 11cdeb7f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdeb83 je 0x11cdeb90 */
  if (C.zf) goto L_11cdeb90;
  /* 11cdeb85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdeb88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdeb8b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cdeb8e jmp 0x11cdeb46 */
  goto L_11cdeb46;
L_11cdeb90:;
  /* 11cdeb90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdeb93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdeb95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cdeb97 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cdeb9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdeb9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdeba0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cdeba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdeba6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdeba9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdebad je 0x11cdebb5 */
  if (C.zf) goto L_11cdebb5;
  /* 11cdebaf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdebb3 jne 0x11cdebc8 */
  if (!C.zf) goto L_11cdebc8;
L_11cdebb5:;
  /* 11cdebb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdebb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdebba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cdebbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdebbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdebc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdebc5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11cdebc8:;
  /* 11cdebc8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11cdebcf:;
  /* 11cdebcf cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdebd6 jle 0x11cdebeb */
  if ((C.zf||C.sf!=C.of)) goto L_11cdebeb;
  /* 11cdebd8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cdebda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdebdd push edx */
  push32((uint32_t)(EDX));
  /* 11cdebde call 0x11cd1b90 */
  push32(0x11cdebe3u); f_11cd1b90();
  /* 11cdebe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdebe6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cdebe9 jmp 0x11cdec00 */
  goto L_11cdec00;
L_11cdebeb:;
  /* 11cdebeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdebee mov ecx, dword ptr [0x11cfd00c] */
  ECX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cdebf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdebf6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11cdebfa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdebfd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11cdec00:;
  /* 11cdec00 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdec04 je 0x11cdec2b */
  if (C.zf) goto L_11cdec2b;
  /* 11cdec06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdec09 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdec0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdec0f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11cdec13 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cdec16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdec19 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdec1b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cdec1d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cdec20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdec23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdec26 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11cdec29 jmp 0x11cdebcf */
  goto L_11cdebcf;
L_11cdec2b:;
  /* 11cdec2b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdec2f jne 0x11cdec38 */
  if (!C.zf) goto L_11cdec38;
  /* 11cdec31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdec34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdec36 jmp 0x11cdec3b */
  goto L_11cdec3b;
L_11cdec38:;
  /* 11cdec38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11cdec3b:;
  /* 11cdec3b mov esp, ebp */
  ESP = (EBP);
  /* 11cdec3d pop ebp */
  EBP = (pop32());
  /* 11cdec3e ret  */
  ESPCHK(0x11cdeb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ec40 @ 0x11cdec40 (17 bytes, 8 insns) */
void f_11cdec40(void) {
  FTRACE(0x11cdec40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdec40 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdec41 mov ebp, esp */
  EBP = (ESP);
  /* 11cdec43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdec46 push eax */
  push32((uint32_t)(EAX));
  /* 11cdec47 call 0x11cdeb40 */
  push32(0x11cdec4cu); f_11cdeb40();
  /* 11cdec4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdec4f pop ebp */
  EBP = (pop32());
  /* 11cdec50 ret  */
  ESPCHK(0x11cdec40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ec60 @ 0x11cdec60 (297 bytes, 106 insns) */
void f_11cdec60(void) {
  FTRACE(0x11cdec60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdec60 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdec61 mov ebp, esp */
  EBP = (ESP);
  /* 11cdec63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdec66 push esi */
  push32((uint32_t)(ESI));
L_11cdec67:;
  /* 11cdec67 cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdec6e jle 0x11cdec87 */
  if ((C.zf||C.sf!=C.of)) goto L_11cdec87;
  /* 11cdec70 push 8 */
  push32((uint32_t)(0x8u));
  /* 11cdec72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdec75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdec77 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cdec79 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdec7a call 0x11cd1b90 */
  push32(0x11cdec7fu); f_11cd1b90();
  /* 11cdec7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdec82 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cdec85 jmp 0x11cdeca0 */
  goto L_11cdeca0;
L_11cdec87:;
  /* 11cdec87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdec8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdec8c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cdec8e mov ecx, dword ptr [0x11cfd00c] */
  ECX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cdec94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdec96 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11cdec9a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdec9d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11cdeca0:;
  /* 11cdeca0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdeca4 je 0x11cdecb1 */
  if (C.zf) goto L_11cdecb1;
  /* 11cdeca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdeca9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdecac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cdecaf jmp 0x11cdec67 */
  goto L_11cdec67;
L_11cdecb1:;
  /* 11cdecb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdecb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdecb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cdecb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cdecbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdecbe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdecc1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cdecc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdecc7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cdecca cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdecce je 0x11cdecd6 */
  if (C.zf) goto L_11cdecd6;
  /* 11cdecd0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdecd4 jne 0x11cdece9 */
  if (!C.zf) goto L_11cdece9;
L_11cdecd6:;
  /* 11cdecd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdecd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdecdb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cdecdd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdece0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdece3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdece6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11cdece9:;
  /* 11cdece9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cdecf0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11cdecf7:;
  /* 11cdecf7 cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdecfe jle 0x11cded13 */
  if ((C.zf||C.sf!=C.of)) goto L_11cded13;
  /* 11cded00 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cded02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cded05 push edx */
  push32((uint32_t)(EDX));
  /* 11cded06 call 0x11cd1b90 */
  push32(0x11cded0bu); f_11cd1b90();
  /* 11cded0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cded0e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cded11 jmp 0x11cded28 */
  goto L_11cded28;
L_11cded13:;
  /* 11cded13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cded16 mov ecx, dword ptr [0x11cfd00c] */
  ECX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cded1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cded1e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11cded22 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11cded25 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11cded28:;
  /* 11cded28 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cded2c je 0x11cded69 */
  if (C.zf) goto L_11cded69;
  /* 11cded2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11cded30 push 0xa */
  push32((uint32_t)(0xau));
  /* 11cded32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cded35 push eax */
  push32((uint32_t)(EAX));
  /* 11cded36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cded39 push ecx */
  push32((uint32_t)(ECX));
  /* 11cded3a call 0x11cdfbf0 */
  push32(0x11cded3fu); f_11cdfbf0();
  /* 11cded3f mov ecx, eax */
  ECX = (EAX);
  /* 11cded41 mov esi, edx */
  ESI = (EDX);
  /* 11cded43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cded46 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cded49 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cded4a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cded4c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cded4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cded51 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11cded54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cded57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cded59 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cded5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cded5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cded61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cded64 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11cded67 jmp 0x11cdecf7 */
  goto L_11cdecf7;
L_11cded69:;
  /* 11cded69 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cded6d jne 0x11cded7e */
  if (!C.zf) goto L_11cded7e;
  /* 11cded6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cded72 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cded74 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cded77 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cded7a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cded7c jmp 0x11cded84 */
  goto L_11cded84;
L_11cded7e:;
  /* 11cded7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cded81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11cded84:;
  /* 11cded84 pop esi */
  ESI = (pop32());
  /* 11cded85 mov esp, ebp */
  ESP = (EBP);
  /* 11cded87 pop ebp */
  EBP = (pop32());
  /* 11cded88 ret  */
  ESPCHK(0x11cdec60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ed90 @ 0x11cded90 (122 bytes, 39 insns) */
void f_11cded90(void) {
  FTRACE(0x11cded90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cded90 push ebp */
  push32((uint32_t)(EBP));
  /* 11cded91 mov ebp, esp */
  EBP = (ESP);
  /* 11cded93 push ecx */
  push32((uint32_t)(ECX));
  /* 11cded94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cded97 cmp eax, dword ptr [0x11d00f5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d00f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cded9d jae 0x11cdedc1 */
  if (!C.cf) goto L_11cdedc1;
  /* 11cded9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdeda2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cdeda5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdeda8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cdedab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdedae mov eax, dword ptr [ecx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d00e20)));
  /* 11cdedb5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11cdedba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cdedbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdedbf jne 0x11cdeddc */
  if (!C.zf) goto L_11cdeddc;
L_11cdedc1:;
  /* 11cdedc1 call 0x11cd68e0 */
  push32(0x11cdedc6u); f_11cd68e0();
  /* 11cdedc6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11cdedcc call 0x11cd68f0 */
  push32(0x11cdedd1u); f_11cd68f0();
  /* 11cdedd1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11cdedd7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdedda jmp 0x11cdee06 */
  goto L_11cdee06;
L_11cdeddc:;
  /* 11cdeddc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdeddf push edx */
  push32((uint32_t)(EDX));
  /* 11cdede0 call 0x11cd9e80 */
  push32(0x11cdede5u); f_11cd9e80();
  /* 11cdede5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdede8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdedeb push eax */
  push32((uint32_t)(EAX));
  /* 11cdedec call 0x11cdee10 */
  push32(0x11cdedf1u); f_11cdee10();
  /* 11cdedf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdedf4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdedf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdedfa push ecx */
  push32((uint32_t)(ECX));
  /* 11cdedfb call 0x11cd9f10 */
  push32(0x11cdee00u); f_11cd9f10();
  /* 11cdee00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdee03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11cdee06:;
  /* 11cdee06 mov esp, ebp */
  ESP = (EBP);
  /* 11cdee08 pop ebp */
  EBP = (pop32());
  /* 11cdee09 ret  */
  ESPCHK(0x11cded90u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11cdee10 (170 bytes, 59 insns) */
void f_11cdee10(void) {
  FTRACE(0x11cdee10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdee10 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdee11 mov ebp, esp */
  EBP = (ESP);
  /* 11cdee13 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdee14 push esi */
  push32((uint32_t)(ESI));
  /* 11cdee15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdee18 push eax */
  push32((uint32_t)(EAX));
  /* 11cdee19 call 0x11cd9d00 */
  push32(0x11cdee1eu); f_11cd9d00();
  /* 11cdee1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdee21 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdee24 je 0x11cdee63 */
  if (C.zf) goto L_11cdee63;
  /* 11cdee26 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdee2a je 0x11cdee32 */
  if (C.zf) goto L_11cdee32;
  /* 11cdee2c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdee30 jne 0x11cdee4c */
  if (!C.zf) goto L_11cdee4c;
L_11cdee32:;
  /* 11cdee32 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdee34 call 0x11cd9d00 */
  push32(0x11cdee39u); f_11cd9d00();
  /* 11cdee39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdee3c mov esi, eax */
  ESI = (EAX);
  /* 11cdee3e push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdee40 call 0x11cd9d00 */
  push32(0x11cdee45u); f_11cd9d00();
  /* 11cdee45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdee48 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdee4a je 0x11cdee63 */
  if (C.zf) goto L_11cdee63;
L_11cdee4c:;
  /* 11cdee4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdee4f push ecx */
  push32((uint32_t)(ECX));
  /* 11cdee50 call 0x11cd9d00 */
  push32(0x11cdee55u); f_11cd9d00();
  /* 11cdee55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdee58 push eax */
  push32((uint32_t)(EAX));
  /* 11cdee59 call dword ptr [0x11d01318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01318))), 0x11cdee5fu);
  /* 11cdee5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdee61 je 0x11cdee6c */
  if (C.zf) goto L_11cdee6c;
L_11cdee63:;
  /* 11cdee63 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cdee6a jmp 0x11cdee75 */
  goto L_11cdee75;
L_11cdee6c:;
  /* 11cdee6c call dword ptr [0x11d013f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f4))), 0x11cdee72u);
  /* 11cdee72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cdee75:;
  /* 11cdee75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdee78 push edx */
  push32((uint32_t)(EDX));
  /* 11cdee79 call 0x11cd9c20 */
  push32(0x11cdee7eu); f_11cd9c20();
  /* 11cdee7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdee81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdee84 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cdee87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdee8a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11cdee8d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdee90 mov edx, dword ptr [eax*4 + 0x11d00e20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d00e20)));
  /* 11cdee97 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11cdee9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdeea0 je 0x11cdeeb3 */
  if (C.zf) goto L_11cdeeb3;
  /* 11cdeea2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdeea5 push eax */
  push32((uint32_t)(EAX));
  /* 11cdeea6 call 0x11cd6840 */
  push32(0x11cdeeabu); f_11cd6840();
  /* 11cdeeab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdeeae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdeeb1 jmp 0x11cdeeb5 */
  goto L_11cdeeb5;
L_11cdeeb3:;
  /* 11cdeeb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cdeeb5:;
  /* 11cdeeb5 pop esi */
  ESI = (pop32());
  /* 11cdeeb6 mov esp, ebp */
  ESP = (EBP);
  /* 11cdeeb8 pop ebp */
  EBP = (pop32());
  /* 11cdeeb9 ret  */
  ESPCHK(0x11cdee10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001eec0 @ 0x11cdeec0 (146 bytes, 52 insns) */
void f_11cdeec0(void) {
  FTRACE(0x11cdeec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdeec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdeec1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdeec3 push ebx */
  push32((uint32_t)(EBX));
  /* 11cdeec4 push esi */
  push32((uint32_t)(ESI));
  /* 11cdeec5 push edi */
  push32((uint32_t)(EDI));
L_11cdeec6:;
  /* 11cdeec6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdeeca jne 0x11cdeeea */
  if (!C.zf) goto L_11cdeeea;
  /* 11cdeecc push 0x11cfaba0 */
  push32((uint32_t)(0x11cfaba0u));
  /* 11cdeed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdeed3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11cdeed5 push 0x11cfad08 */
  push32((uint32_t)(0x11cfad08u));
  /* 11cdeeda push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdeedc call 0x11cca080 */
  push32(0x11cdeee1u); f_11cca080();
  /* 11cdeee1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdeee4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdeee7 jne 0x11cdeeea */
  if (!C.zf) goto L_11cdeeea;
  /* 11cdeee9 int3  */
  x86_unimpl("int3 @ 0x11cdeee9");
L_11cdeeea:;
  /* 11cdeeea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdeeec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdeeee jne 0x11cdeec6 */
  if (!C.zf) goto L_11cdeec6;
  /* 11cdeef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdeef3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cdeef6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdeefc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cdeefe je 0x11cdef4d */
  if (C.zf) goto L_11cdef4d;
  /* 11cdef00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdef03 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cdef06 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11cdef09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdef0b je 0x11cdef4d */
  if (C.zf) goto L_11cdef4d;
  /* 11cdef0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdef0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdef12 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cdef15 push eax */
  push32((uint32_t)(EAX));
  /* 11cdef16 call 0x11ccbf50 */
  push32(0x11cdef1bu); f_11ccbf50();
  /* 11cdef1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdef1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdef21 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cdef24 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdef2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdef2d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11cdef30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdef33 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11cdef39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdef3c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11cdef43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdef46 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11cdef4d:;
  /* 11cdef4d pop edi */
  EDI = (pop32());
  /* 11cdef4e pop esi */
  ESI = (pop32());
  /* 11cdef4f pop ebx */
  EBX = (pop32());
  /* 11cdef50 pop ebp */
  EBP = (pop32());
  /* 11cdef51 ret  */
  ESPCHK(0x11cdeec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ef60 @ 0x11cdef60 (61 bytes, 18 insns) */
void f_11cdef60(void) {
  FTRACE(0x11cdef60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdef60 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdef61 mov ebp, esp */
  EBP = (ESP);
  /* 11cdef63 cmp dword ptr [0x11cff7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdef6a jne 0x11cdef9b */
  if (!C.zf) goto L_11cdef9b;
  /* 11cdef6c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11cdef6e call 0x11ccb3c0 */
  push32(0x11cdef73u); f_11ccb3c0();
  /* 11cdef73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdef76 cmp dword ptr [0x11cff7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdef7d jne 0x11cdef91 */
  if (!C.zf) goto L_11cdef91;
  /* 11cdef7f call 0x11cdefc0 */
  push32(0x11cdef84u); f_11cdefc0();
  /* 11cdef84 mov eax, dword ptr [0x11cff7b0] */
  EAX = (r32((uint32_t)(0x11cff7b0)));
  /* 11cdef89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdef8c mov dword ptr [0x11cff7b0], eax */
  w32((uint32_t)(0x11cff7b0), (EAX));
L_11cdef91:;
  /* 11cdef91 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11cdef93 call 0x11ccb460 */
  push32(0x11cdef98u); f_11ccb460();
  /* 11cdef98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdef9b:;
  /* 11cdef9b pop ebp */
  EBP = (pop32());
  /* 11cdef9c ret  */
  ESPCHK(0x11cdef60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001efa0 @ 0x11cdefa0 (30 bytes, 11 insns) */
void f_11cdefa0(void) {
  FTRACE(0x11cdefa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdefa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdefa1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdefa3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11cdefa5 call 0x11ccb3c0 */
  push32(0x11cdefaau); f_11ccb3c0();
  /* 11cdefaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdefad call 0x11cdefc0 */
  push32(0x11cdefb2u); f_11cdefc0();
  /* 11cdefb2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11cdefb4 call 0x11ccb460 */
  push32(0x11cdefb9u); f_11ccb460();
  /* 11cdefb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdefbc pop ebp */
  EBP = (pop32());
  /* 11cdefbd ret  */
  ESPCHK(0x11cdefa0u, _esp0);
  ESP += 4; return;
}

