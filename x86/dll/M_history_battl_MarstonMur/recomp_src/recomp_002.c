#include "recomp.h"

/* FUN_1000f120 @ 0x12d9f120 (287 bytes, 86 insns) */
void f_12d9f120(void) {
  FTRACE(0x12d9f120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f120 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f121 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f123 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f129 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f12a call 0x12d9f6d0 */
  push32(0x12d9f12fu); f_12d9f6d0();
  /* 12d9f12f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f132 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12d9f135 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d9f137 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d9f13a push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f13b mov edx, dword ptr [0x12dad798] */
  EDX = (r32((uint32_t)(0x12dad798)));
  /* 12d9f141 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9f143 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f145 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9f14b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f151 push edx */
  push32((uint32_t)(EDX));
  /* 12d9f152 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9f155 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f156 call dword ptr [0x12dad7ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad7ac))), 0x12d9f15cu);
  /* 12d9f15c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f15e jne 0x12d9f174 */
  if (!C.zf) goto L_12d9f174;
  /* 12d9f160 mov dword ptr [0x12dad7a4], 0 */
  w32((uint32_t)(0x12dad7a4), (0x0u));
  /* 12d9f16a mov eax, 1 */
  EAX = (0x1u);
  /* 12d9f16f jmp 0x12d9f239 */
  goto L_12d9f239;
L_12d9f174:;
  /* 12d9f174 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d9f177 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f178 mov edx, dword ptr [0x12dad79c] */
  EDX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9f17e push edx */
  push32((uint32_t)(EDX));
  /* 12d9f17f call 0x12da1310 */
  push32(0x12d9f184u); f_12da1310();
  /* 12d9f184 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f187 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f189 jne 0x12d9f1c9 */
  if (!C.zf) goto L_12d9f1c9;
  /* 12d9f18b cmp dword ptr [0x12dad798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f192 jne 0x12d9f1a6 */
  if (!C.zf) goto L_12d9f1a6;
  /* 12d9f194 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9f196 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9f199 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f19a call 0x12d9f460 */
  push32(0x12d9f19fu); f_12d9f460();
  /* 12d9f19f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f1a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f1a4 je 0x12d9f1c7 */
  if (C.zf) goto L_12d9f1c7;
L_12d9f1a6:;
  /* 12d9f1a6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9f1a9 mov dword ptr [0x12dad7a8], ecx */
  w32((uint32_t)(0x12dad7a8), (ECX));
  /* 12d9f1af mov edx, dword ptr [0x12dad7a8] */
  EDX = (r32((uint32_t)(0x12dad7a8)));
  /* 12d9f1b5 mov dword ptr [0x12dad78c], edx */
  w32((uint32_t)(0x12dad78c), (EDX));
  /* 12d9f1bb mov eax, dword ptr [0x12dad7a4] */
  EAX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9f1c0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12d9f1c2 mov dword ptr [0x12dad7a4], eax */
  w32((uint32_t)(0x12dad7a4), (EAX));
L_12d9f1c7:;
  /* 12d9f1c7 jmp 0x12d9f22c */
  goto L_12d9f22c;
L_12d9f1c9:;
  /* 12d9f1c9 cmp dword ptr [0x12dad798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f1d0 jne 0x12d9f22c */
  if (!C.zf) goto L_12d9f22c;
  /* 12d9f1d2 cmp dword ptr [0x12dad794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f1d9 je 0x12d9f22c */
  if (C.zf) goto L_12d9f22c;
  /* 12d9f1db mov ecx, dword ptr [0x12dad794] */
  ECX = (r32((uint32_t)(0x12dad794)));
  /* 12d9f1e1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f1e2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12d9f1e5 push edx */
  push32((uint32_t)(EDX));
  /* 12d9f1e6 mov eax, dword ptr [0x12dad79c] */
  EAX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9f1eb push eax */
  push32((uint32_t)(EAX));
  /* 12d9f1ec call 0x12da13e0 */
  push32(0x12d9f1f1u); f_12da13e0();
  /* 12d9f1f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f1f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f1f6 jne 0x12d9f22c */
  if (!C.zf) goto L_12d9f22c;
  /* 12d9f1f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9f1fa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9f1fd push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f1fe call 0x12d9f460 */
  push32(0x12d9f203u); f_12d9f460();
  /* 12d9f203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f208 je 0x12d9f22c */
  if (C.zf) goto L_12d9f22c;
  /* 12d9f20a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9f20d mov dword ptr [0x12dad7a8], edx */
  w32((uint32_t)(0x12dad7a8), (EDX));
  /* 12d9f213 mov eax, dword ptr [0x12dad7a8] */
  EAX = (r32((uint32_t)(0x12dad7a8)));
  /* 12d9f218 mov dword ptr [0x12dad78c], eax */
  w32((uint32_t)(0x12dad78c), (EAX));
  /* 12d9f21d mov ecx, dword ptr [0x12dad7a4] */
  ECX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9f223 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9f226 mov dword ptr [0x12dad7a4], ecx */
  w32((uint32_t)(0x12dad7a4), (ECX));
L_12d9f22c:;
  /* 12d9f22c mov eax, dword ptr [0x12dad7a4] */
  EAX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9f231 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f234 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9f236 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f238 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12d9f239:;
  /* 12d9f239 mov esp, ebp */
  ESP = (EBP);
  /* 12d9f23b pop ebp */
  EBP = (pop32());
  /* 12d9f23c ret 4 */
  ESPCHK(0x12d9f120u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f240 @ 0x12d9f240 (69 bytes, 20 insns) */
void f_12d9f240(void) {
  FTRACE(0x12d9f240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f240 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f241 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f243 mov eax, dword ptr [0x12dad7a0] */
  EAX = (r32((uint32_t)(0x12dad7a0)));
  /* 12d9f248 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f249 call 0x12d95a70 */
  push32(0x12d9f24eu); f_12d95a70();
  /* 12d9f24e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f251 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9f253 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f256 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d9f259 mov dword ptr [0x12dad790], ecx */
  w32((uint32_t)(0x12dad790), (ECX));
  /* 12d9f25f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9f261 push 0x12d9f290 */
  push32((uint32_t)(0x12d9f290u));
  /* 12d9f266 call dword ptr [0x12db0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0268))), 0x12d9f26cu);
  /* 12d9f26c mov edx, dword ptr [0x12dad7a4] */
  EDX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9f272 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9f275 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9f277 jne 0x12d9f283 */
  if (!C.zf) goto L_12d9f283;
  /* 12d9f279 mov dword ptr [0x12dad7a4], 0 */
  w32((uint32_t)(0x12dad7a4), (0x0u));
L_12d9f283:;
  /* 12d9f283 pop ebp */
  EBP = (pop32());
  /* 12d9f284 ret  */
  ESPCHK(0x12d9f240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f290 @ 0x12d9f290 (172 bytes, 54 insns) */
void f_12d9f290(void) {
  FTRACE(0x12d9f290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f290 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f291 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f293 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f299 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f29a call 0x12d9f6d0 */
  push32(0x12d9f29fu); f_12d9f6d0();
  /* 12d9f29f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f2a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12d9f2a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d9f2a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d9f2aa push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f2ab mov edx, dword ptr [0x12dad790] */
  EDX = (r32((uint32_t)(0x12dad790)));
  /* 12d9f2b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9f2b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f2b5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9f2bb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f2c1 push edx */
  push32((uint32_t)(EDX));
  /* 12d9f2c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9f2c5 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f2c6 call dword ptr [0x12dad7ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad7ac))), 0x12d9f2ccu);
  /* 12d9f2cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f2ce jne 0x12d9f2e1 */
  if (!C.zf) goto L_12d9f2e1;
  /* 12d9f2d0 mov dword ptr [0x12dad7a4], 0 */
  w32((uint32_t)(0x12dad7a4), (0x0u));
  /* 12d9f2da mov eax, 1 */
  EAX = (0x1u);
  /* 12d9f2df jmp 0x12d9f336 */
  goto L_12d9f336;
L_12d9f2e1:;
  /* 12d9f2e1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d9f2e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f2e5 mov edx, dword ptr [0x12dad7a0] */
  EDX = (r32((uint32_t)(0x12dad7a0)));
  /* 12d9f2eb push edx */
  push32((uint32_t)(EDX));
  /* 12d9f2ec call 0x12da1310 */
  push32(0x12d9f2f1u); f_12da1310();
  /* 12d9f2f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f2f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f2f6 jne 0x12d9f329 */
  if (!C.zf) goto L_12d9f329;
  /* 12d9f2f8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9f2fb push eax */
  push32((uint32_t)(EAX));
  /* 12d9f2fc call 0x12d9f410 */
  push32(0x12d9f301u); f_12d9f410();
  /* 12d9f301 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f304 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f306 je 0x12d9f329 */
  if (C.zf) goto L_12d9f329;
  /* 12d9f308 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9f30b mov dword ptr [0x12dad7a8], ecx */
  w32((uint32_t)(0x12dad7a8), (ECX));
  /* 12d9f311 mov edx, dword ptr [0x12dad7a8] */
  EDX = (r32((uint32_t)(0x12dad7a8)));
  /* 12d9f317 mov dword ptr [0x12dad78c], edx */
  w32((uint32_t)(0x12dad78c), (EDX));
  /* 12d9f31d mov eax, dword ptr [0x12dad7a4] */
  EAX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9f322 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12d9f324 mov dword ptr [0x12dad7a4], eax */
  w32((uint32_t)(0x12dad7a4), (EAX));
L_12d9f329:;
  /* 12d9f329 mov eax, dword ptr [0x12dad7a4] */
  EAX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9f32e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f331 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9f333 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f335 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12d9f336:;
  /* 12d9f336 mov esp, ebp */
  ESP = (EBP);
  /* 12d9f338 pop ebp */
  EBP = (pop32());
  /* 12d9f339 ret 4 */
  ESPCHK(0x12d9f290u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f340 @ 0x12d9f340 (43 bytes, 11 insns) */
void f_12d9f340(void) {
  FTRACE(0x12d9f340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f340 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f341 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f343 mov eax, dword ptr [0x12dad7a4] */
  EAX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9f348 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f34d mov dword ptr [0x12dad7a4], eax */
  w32((uint32_t)(0x12dad7a4), (EAX));
  /* 12d9f352 call dword ptr [0x12db0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0264))), 0x12d9f358u);
  /* 12d9f358 mov dword ptr [0x12dad7a8], eax */
  w32((uint32_t)(0x12dad7a8), (EAX));
  /* 12d9f35d mov ecx, dword ptr [0x12dad7a8] */
  ECX = (r32((uint32_t)(0x12dad7a8)));
  /* 12d9f363 mov dword ptr [0x12dad78c], ecx */
  w32((uint32_t)(0x12dad78c), (ECX));
  /* 12d9f369 pop ebp */
  EBP = (pop32());
  /* 12d9f36a ret  */
  ESPCHK(0x12d9f340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f370 @ 0x12d9f370 (155 bytes, 57 insns) */
void f_12d9f370(void) {
  FTRACE(0x12d9f370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f370 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f371 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f373 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f376 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f37a je 0x12d9f39b */
  if (C.zf) goto L_12d9f39b;
  /* 12d9f37c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f37f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d9f382 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9f384 je 0x12d9f39b */
  if (C.zf) goto L_12d9f39b;
  /* 12d9f386 push 0x12daa644 */
  push32((uint32_t)(0x12daa644u));
  /* 12d9f38b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f38e push edx */
  push32((uint32_t)(EDX));
  /* 12d9f38f call 0x12d9e8d0 */
  push32(0x12d9f394u); f_12d9e8d0();
  /* 12d9f394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f397 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f399 jne 0x12d9f3c3 */
  if (!C.zf) goto L_12d9f3c3;
L_12d9f39b:;
  /* 12d9f39b push 8 */
  push32((uint32_t)(0x8u));
  /* 12d9f39d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12d9f3a0 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f3a1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12d9f3a6 mov ecx, dword ptr [0x12dad7a8] */
  ECX = (r32((uint32_t)(0x12dad7a8)));
  /* 12d9f3ac push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f3ad call dword ptr [0x12dad7ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad7ac))), 0x12d9f3b3u);
  /* 12d9f3b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f3b5 jne 0x12d9f3bb */
  if (!C.zf) goto L_12d9f3bb;
  /* 12d9f3b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f3b9 jmp 0x12d9f407 */
  goto L_12d9f407;
L_12d9f3bb:;
  /* 12d9f3bb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12d9f3be mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d9f3c1 jmp 0x12d9f3fb */
  goto L_12d9f3fb;
L_12d9f3c3:;
  /* 12d9f3c3 push 0x12daa640 */
  push32((uint32_t)(0x12daa640u));
  /* 12d9f3c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f3cb push eax */
  push32((uint32_t)(EAX));
  /* 12d9f3cc call 0x12d9e8d0 */
  push32(0x12d9f3d1u); f_12d9e8d0();
  /* 12d9f3d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f3d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f3d6 jne 0x12d9f3fb */
  if (!C.zf) goto L_12d9f3fb;
  /* 12d9f3d8 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d9f3da lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12d9f3dd push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f3de push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d9f3e0 mov edx, dword ptr [0x12dad7a8] */
  EDX = (r32((uint32_t)(0x12dad7a8)));
  /* 12d9f3e6 push edx */
  push32((uint32_t)(EDX));
  /* 12d9f3e7 call dword ptr [0x12dad7ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad7ac))), 0x12d9f3edu);
  /* 12d9f3ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f3ef jne 0x12d9f3f5 */
  if (!C.zf) goto L_12d9f3f5;
  /* 12d9f3f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f3f3 jmp 0x12d9f407 */
  goto L_12d9f407;
L_12d9f3f5:;
  /* 12d9f3f5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12d9f3f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d9f3fb:;
  /* 12d9f3fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f3fe push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f3ff call 0x12da14f0 */
  push32(0x12d9f404u); f_12da14f0();
  /* 12d9f404 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9f407:;
  /* 12d9f407 mov esp, ebp */
  ESP = (EBP);
  /* 12d9f409 pop ebp */
  EBP = (pop32());
  /* 12d9f40a ret  */
  ESPCHK(0x12d9f370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f410 @ 0x12d9f410 (79 bytes, 26 insns) */
void f_12d9f410(void) {
  FTRACE(0x12d9f410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f410 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f411 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f416 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12d9f41a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12d9f41e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d9f425 jmp 0x12d9f430 */
  goto L_12d9f430;
L_12d9f427:;
  /* 12d9f427 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9f42a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f42d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d9f430:;
  /* 12d9f430 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f434 jae 0x12d9f456 */
  if (!C.cf) goto L_12d9f456;
  /* 12d9f436 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9f439 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9f43f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9f442 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9f444 mov cx, word ptr [eax*2 + 0x12daca84] */
  CX = (r16((uint32_t)(EAX*2 + 0x12daca84)));
  /* 12d9f44c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f44e jne 0x12d9f454 */
  if (!C.zf) goto L_12d9f454;
  /* 12d9f450 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f452 jmp 0x12d9f45b */
  goto L_12d9f45b;
L_12d9f454:;
  /* 12d9f454 jmp 0x12d9f427 */
  goto L_12d9f427;
L_12d9f456:;
  /* 12d9f456 mov eax, 1 */
  EAX = (0x1u);
L_12d9f45b:;
  /* 12d9f45b mov esp, ebp */
  ESP = (EBP);
  /* 12d9f45d pop ebp */
  EBP = (pop32());
  /* 12d9f45e ret  */
  ESPCHK(0x12d9f410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f460 @ 0x12d9f460 (135 bytes, 48 insns) */
void f_12d9f460(void) {
  FTRACE(0x12d9f460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f460 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f461 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f463 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f466 push esi */
  push32((uint32_t)(ESI));
  /* 12d9f467 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f46a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f46f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f474 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f479 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12d9f47c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f481 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9f484 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d9f486 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12d9f489 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f48a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9f48c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9f48f push edx */
  push32((uint32_t)(EDX));
  /* 12d9f490 call dword ptr [0x12dad7ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad7ac))), 0x12d9f496u);
  /* 12d9f496 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f498 jne 0x12d9f49e */
  if (!C.zf) goto L_12d9f49e;
  /* 12d9f49a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f49c jmp 0x12d9f4e2 */
  goto L_12d9f4e2;
L_12d9f49e:;
  /* 12d9f49e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12d9f4a1 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f4a2 call 0x12d9f6d0 */
  push32(0x12d9f4a7u); f_12d9f6d0();
  /* 12d9f4a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f4aa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f4ad je 0x12d9f4dd */
  if (C.zf) goto L_12d9f4dd;
  /* 12d9f4af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f4b3 je 0x12d9f4dd */
  if (C.zf) goto L_12d9f4dd;
  /* 12d9f4b5 mov ecx, dword ptr [0x12dad79c] */
  ECX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9f4bb push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f4bc call 0x12d9f750 */
  push32(0x12d9f4c1u); f_12d9f750();
  /* 12d9f4c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f4c4 mov esi, eax */
  ESI = (EAX);
  /* 12d9f4c6 mov edx, dword ptr [0x12dad79c] */
  EDX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9f4cc push edx */
  push32((uint32_t)(EDX));
  /* 12d9f4cd call 0x12d95a70 */
  push32(0x12d9f4d2u); f_12d95a70();
  /* 12d9f4d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f4d5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f4d7 jne 0x12d9f4dd */
  if (!C.zf) goto L_12d9f4dd;
  /* 12d9f4d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f4db jmp 0x12d9f4e2 */
  goto L_12d9f4e2;
L_12d9f4dd:;
  /* 12d9f4dd mov eax, 1 */
  EAX = (0x1u);
L_12d9f4e2:;
  /* 12d9f4e2 pop esi */
  ESI = (pop32());
  /* 12d9f4e3 mov esp, ebp */
  ESP = (EBP);
  /* 12d9f4e5 pop ebp */
  EBP = (pop32());
  /* 12d9f4e6 ret  */
  ESPCHK(0x12d9f460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4f0 @ 0x12d9f4f0 (77 bytes, 18 insns) */
void f_12d9f4f0(void) {
  FTRACE(0x12d9f4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f4f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f4f3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f4f9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12d9f503 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12d9f509 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f50a call dword ptr [0x12db0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0260))), 0x12d9f510u);
  /* 12d9f510 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f512 je 0x12d9f529 */
  if (C.zf) goto L_12d9f529;
  /* 12d9f514 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f51b jne 0x12d9f529 */
  if (!C.zf) goto L_12d9f529;
  /* 12d9f51d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12d9f527 jmp 0x12d9f533 */
  goto L_12d9f533;
L_12d9f529:;
  /* 12d9f529 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12d9f533:;
  /* 12d9f533 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12d9f539 mov esp, ebp */
  ESP = (EBP);
  /* 12d9f53b pop ebp */
  EBP = (pop32());
  /* 12d9f53c ret  */
  ESPCHK(0x12d9f4f0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12d9f540 (388 bytes, 118 insns) */
void f_12d9f540(void) {
  FTRACE(0x12d9f540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f540 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f541 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f543 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f546 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d9f54d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12d9f554 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d9f55b:;
  /* 12d9f55b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9f55e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f561 jg 0x12d9f6a8 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9f6a8;
  /* 12d9f567 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9f56a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f56d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d9f56e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f570 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d9f572 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d9f575 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9f578 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9f57b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f57e cmp edx, dword ptr [ecx + 0x12dac5e0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12dac5e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f584 jne 0x12d9f67e */
  if (!C.zf) goto L_12d9f67e;
  /* 12d9f58a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9f58d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d9f590 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f594 ja 0x12d9f5b7 */
  if ((!C.cf&&!C.zf)) goto L_12d9f5b7;
  /* 12d9f596 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f59a je 0x12d9f629 */
  if (C.zf) goto L_12d9f629;
  /* 12d9f5a0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f5a4 je 0x12d9f5d4 */
  if (C.zf) goto L_12d9f5d4;
  /* 12d9f5a6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f5aa je 0x12d9f5f6 */
  if (C.zf) goto L_12d9f5f6;
  /* 12d9f5ac cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f5b0 je 0x12d9f618 */
  if (C.zf) goto L_12d9f618;
  /* 12d9f5b2 jmp 0x12d9f648 */
  goto L_12d9f648;
L_12d9f5b7:;
  /* 12d9f5b7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f5be je 0x12d9f5e5 */
  if (C.zf) goto L_12d9f5e5;
  /* 12d9f5c0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f5c7 je 0x12d9f607 */
  if (C.zf) goto L_12d9f607;
  /* 12d9f5c9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f5d0 je 0x12d9f63a */
  if (C.zf) goto L_12d9f63a;
  /* 12d9f5d2 jmp 0x12d9f648 */
  goto L_12d9f648;
L_12d9f5d4:;
  /* 12d9f5d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9f5d7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9f5da add ecx, 0x12dac5e4 */
  { uint32_t _a=(ECX),_b=(0x12dac5e4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f5e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9f5e3 jmp 0x12d9f648 */
  goto L_12d9f648;
L_12d9f5e5:;
  /* 12d9f5e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9f5e8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9f5eb mov eax, dword ptr [edx + 0x12dac5ec] */
  EAX = (r32((uint32_t)(EDX + 0x12dac5ec)));
  /* 12d9f5f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9f5f4 jmp 0x12d9f648 */
  goto L_12d9f648;
L_12d9f5f6:;
  /* 12d9f5f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9f5f9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9f5fc add ecx, 0x12dac5f0 */
  { uint32_t _a=(ECX),_b=(0x12dac5f0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f602 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9f605 jmp 0x12d9f648 */
  goto L_12d9f648;
L_12d9f607:;
  /* 12d9f607 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9f60a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9f60d mov eax, dword ptr [edx + 0x12dac5f4] */
  EAX = (r32((uint32_t)(EDX + 0x12dac5f4)));
  /* 12d9f613 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9f616 jmp 0x12d9f648 */
  goto L_12d9f648;
L_12d9f618:;
  /* 12d9f618 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9f61b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9f61e add ecx, 0x12dac5f8 */
  { uint32_t _a=(ECX),_b=(0x12dac5f8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f624 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9f627 jmp 0x12d9f648 */
  goto L_12d9f648;
L_12d9f629:;
  /* 12d9f629 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9f62c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9f62f add edx, 0x12dac5fc */
  { uint32_t _a=(EDX),_b=(0x12dac5fcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f635 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d9f638 jmp 0x12d9f648 */
  goto L_12d9f648;
L_12d9f63a:;
  /* 12d9f63a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9f63d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9f640 add eax, 0x12dac604 */
  { uint32_t _a=(EAX),_b=(0x12dac604u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f645 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d9f648:;
  /* 12d9f648 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f64c je 0x12d9f654 */
  if (C.zf) goto L_12d9f654;
  /* 12d9f64e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f652 jge 0x12d9f656 */
  if ((C.sf==C.of)) goto L_12d9f656;
L_12d9f654:;
  /* 12d9f654 jmp 0x12d9f6a8 */
  goto L_12d9f6a8;
L_12d9f656:;
  /* 12d9f656 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9f659 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f65c push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f65d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9f660 push edx */
  push32((uint32_t)(EDX));
  /* 12d9f661 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9f664 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f665 call 0x12d96460 */
  push32(0x12d9f66au); f_12d96460();
  /* 12d9f66a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f66d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9f670 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f673 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12d9f677 mov eax, 1 */
  EAX = (0x1u);
  /* 12d9f67c jmp 0x12d9f6be */
  goto L_12d9f6be;
L_12d9f67e:;
  /* 12d9f67e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9f681 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9f684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f687 cmp eax, dword ptr [edx + 0x12dac5e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12dac5e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f68d jae 0x12d9f69a */
  if (!C.cf) goto L_12d9f69a;
  /* 12d9f68f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9f692 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f695 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d9f698 jmp 0x12d9f6a3 */
  goto L_12d9f6a3;
L_12d9f69a:;
  /* 12d9f69a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9f69d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f6a0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d9f6a3:;
  /* 12d9f6a3 jmp 0x12d9f55b */
  goto L_12d9f55b;
L_12d9f6a8:;
  /* 12d9f6a8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9f6ab push eax */
  push32((uint32_t)(EAX));
  /* 12d9f6ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9f6af push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f6b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9f6b3 push edx */
  push32((uint32_t)(EDX));
  /* 12d9f6b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f6b7 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f6b8 call dword ptr [0x12db026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db026c))), 0x12d9f6beu);
L_12d9f6be:;
  /* 12d9f6be mov esp, ebp */
  ESP = (EBP);
  /* 12d9f6c0 pop ebp */
  EBP = (pop32());
  /* 12d9f6c1 ret 0x10 */
  ESPCHK(0x12d9f540u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f6d0 @ 0x12d9f6d0 (118 bytes, 42 insns) */
void f_12d9f6d0(void) {
  FTRACE(0x12d9f6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f6d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f6d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f6d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d9f6dd:;
  /* 12d9f6dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f6e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d9f6e2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12d9f6e5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d9f6e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f6ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f6ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d9f6f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9f6f4 je 0x12d9f73f */
  if (C.zf) goto L_12d9f73f;
  /* 12d9f6f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d9f6fa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f6fd jl 0x12d9f712 */
  if ((C.sf!=C.of)) goto L_12d9f712;
  /* 12d9f6ff movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d9f703 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f706 jg 0x12d9f712 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9f712;
  /* 12d9f708 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12d9f70b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d9f70d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12d9f710 jmp 0x12d9f72c */
  goto L_12d9f72c;
L_12d9f712:;
  /* 12d9f712 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d9f716 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f719 jl 0x12d9f72c */
  if ((C.sf!=C.of)) goto L_12d9f72c;
  /* 12d9f71b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d9f71f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f722 jg 0x12d9f72c */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9f72c;
  /* 12d9f724 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12d9f727 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d9f729 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12d9f72c:;
  /* 12d9f72c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9f72f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12d9f732 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d9f736 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12d9f73a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9f73d jmp 0x12d9f6dd */
  goto L_12d9f6dd;
L_12d9f73f:;
  /* 12d9f73f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9f742 mov esp, ebp */
  ESP = (EBP);
  /* 12d9f744 pop ebp */
  EBP = (pop32());
  /* 12d9f745 ret  */
  ESPCHK(0x12d9f6d0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12d9f750 (101 bytes, 36 insns) */
void f_12d9f750(void) {
  FTRACE(0x12d9f750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f750 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f751 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f756 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d9f75d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f760 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d9f762 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12d9f765 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f768 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f76b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12d9f76e:;
  /* 12d9f76e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d9f772 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f775 jl 0x12d9f780 */
  if ((C.sf!=C.of)) goto L_12d9f780;
  /* 12d9f777 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d9f77b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f77e jle 0x12d9f792 */
  if ((C.zf||C.sf!=C.of)) goto L_12d9f792;
L_12d9f780:;
  /* 12d9f780 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d9f784 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f787 jl 0x12d9f7ae */
  if ((C.sf!=C.of)) goto L_12d9f7ae;
  /* 12d9f789 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d9f78d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f790 jg 0x12d9f7ae */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9f7ae;
L_12d9f792:;
  /* 12d9f792 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9f795 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f798 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9f79b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f79e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d9f7a0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12d9f7a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f7a6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f7a9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d9f7ac jmp 0x12d9f76e */
  goto L_12d9f76e;
L_12d9f7ae:;
  /* 12d9f7ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9f7b1 mov esp, ebp */
  ESP = (EBP);
  /* 12d9f7b3 pop ebp */
  EBP = (pop32());
  /* 12d9f7b4 ret  */
  ESPCHK(0x12d9f750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7c0 @ 0x12d9f7c0 (122 bytes, 39 insns) */
void f_12d9f7c0(void) {
  FTRACE(0x12d9f7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f7c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f7c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f7c7 cmp eax, dword ptr [0x12daf03c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12daf03c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f7cd jae 0x12d9f7f1 */
  if (!C.cf) goto L_12d9f7f1;
  /* 12d9f7cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f7d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9f7d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f7d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9f7db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9f7de mov eax, dword ptr [ecx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12daef00)));
  /* 12d9f7e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d9f7ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9f7ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9f7ef jne 0x12d9f80c */
  if (!C.zf) goto L_12d9f80c;
L_12d9f7f1:;
  /* 12d9f7f1 call 0x12d9ab10 */
  push32(0x12d9f7f6u); f_12d9ab10();
  /* 12d9f7f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d9f7fc call 0x12d9ab20 */
  push32(0x12d9f801u); f_12d9ab20();
  /* 12d9f801 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d9f807 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f80a jmp 0x12d9f836 */
  goto L_12d9f836;
L_12d9f80c:;
  /* 12d9f80c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f80f push edx */
  push32((uint32_t)(EDX));
  /* 12d9f810 call 0x12d9c330 */
  push32(0x12d9f815u); f_12d9c330();
  /* 12d9f815 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f818 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f81b push eax */
  push32((uint32_t)(EAX));
  /* 12d9f81c call 0x12d9f840 */
  push32(0x12d9f821u); f_12d9f840();
  /* 12d9f821 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f824 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9f827 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f82a push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f82b call 0x12d9c3c0 */
  push32(0x12d9f830u); f_12d9c3c0();
  /* 12d9f830 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f833 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d9f836:;
  /* 12d9f836 mov esp, ebp */
  ESP = (EBP);
  /* 12d9f838 pop ebp */
  EBP = (pop32());
  /* 12d9f839 ret  */
  ESPCHK(0x12d9f7c0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12d9f840 (170 bytes, 59 insns) */
void f_12d9f840(void) {
  FTRACE(0x12d9f840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f840 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f841 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f843 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f844 push esi */
  push32((uint32_t)(ESI));
  /* 12d9f845 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f848 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f849 call 0x12d9c1b0 */
  push32(0x12d9f84eu); f_12d9c1b0();
  /* 12d9f84e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f851 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f854 je 0x12d9f893 */
  if (C.zf) goto L_12d9f893;
  /* 12d9f856 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f85a je 0x12d9f862 */
  if (C.zf) goto L_12d9f862;
  /* 12d9f85c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f860 jne 0x12d9f87c */
  if (!C.zf) goto L_12d9f87c;
L_12d9f862:;
  /* 12d9f862 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9f864 call 0x12d9c1b0 */
  push32(0x12d9f869u); f_12d9c1b0();
  /* 12d9f869 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f86c mov esi, eax */
  ESI = (EAX);
  /* 12d9f86e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9f870 call 0x12d9c1b0 */
  push32(0x12d9f875u); f_12d9c1b0();
  /* 12d9f875 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f878 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f87a je 0x12d9f893 */
  if (C.zf) goto L_12d9f893;
L_12d9f87c:;
  /* 12d9f87c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f87f push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f880 call 0x12d9c1b0 */
  push32(0x12d9f885u); f_12d9c1b0();
  /* 12d9f885 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f888 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f889 call dword ptr [0x12db025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db025c))), 0x12d9f88fu);
  /* 12d9f88f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f891 je 0x12d9f89c */
  if (C.zf) goto L_12d9f89c;
L_12d9f893:;
  /* 12d9f893 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d9f89a jmp 0x12d9f8a5 */
  goto L_12d9f8a5;
L_12d9f89c:;
  /* 12d9f89c call dword ptr [0x12db02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02d8))), 0x12d9f8a2u);
  /* 12d9f8a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d9f8a5:;
  /* 12d9f8a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f8a8 push edx */
  push32((uint32_t)(EDX));
  /* 12d9f8a9 call 0x12d9c0d0 */
  push32(0x12d9f8aeu); f_12d9c0d0();
  /* 12d9f8ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f8b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f8b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d9f8b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f8ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9f8bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9f8c0 mov edx, dword ptr [eax*4 + 0x12daef00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12daef00)));
  /* 12d9f8c7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12d9f8cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f8d0 je 0x12d9f8e3 */
  if (C.zf) goto L_12d9f8e3;
  /* 12d9f8d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9f8d5 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f8d6 call 0x12d9aa70 */
  push32(0x12d9f8dbu); f_12d9aa70();
  /* 12d9f8db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f8de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f8e1 jmp 0x12d9f8e5 */
  goto L_12d9f8e5;
L_12d9f8e3:;
  /* 12d9f8e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d9f8e5:;
  /* 12d9f8e5 pop esi */
  ESI = (pop32());
  /* 12d9f8e6 mov esp, ebp */
  ESP = (EBP);
  /* 12d9f8e8 pop ebp */
  EBP = (pop32());
  /* 12d9f8e9 ret  */
  ESPCHK(0x12d9f840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8f0 @ 0x12d9f8f0 (146 bytes, 52 insns) */
void f_12d9f8f0(void) {
  FTRACE(0x12d9f8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f8f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f8f3 push ebx */
  push32((uint32_t)(EBX));
  /* 12d9f8f4 push esi */
  push32((uint32_t)(ESI));
  /* 12d9f8f5 push edi */
  push32((uint32_t)(EDI));
L_12d9f8f6:;
  /* 12d9f8f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f8fa jne 0x12d9f91a */
  if (!C.zf) goto L_12d9f91a;
  /* 12d9f8fc push 0x12da9f80 */
  push32((uint32_t)(0x12da9f80u));
  /* 12d9f901 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9f903 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12d9f905 push 0x12daa648 */
  push32((uint32_t)(0x12daa648u));
  /* 12d9f90a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9f90c call 0x12d91d00 */
  push32(0x12d9f911u); f_12d91d00();
  /* 12d9f911 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f914 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f917 jne 0x12d9f91a */
  if (!C.zf) goto L_12d9f91a;
  /* 12d9f919 int3  */
  x86_unimpl("int3 @ 0x12d9f919");
L_12d9f91a:;
  /* 12d9f91a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f91c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f91e jne 0x12d9f8f6 */
  if (!C.zf) goto L_12d9f8f6;
  /* 12d9f920 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f923 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d9f926 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9f92c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9f92e je 0x12d9f97d */
  if (C.zf) goto L_12d9f97d;
  /* 12d9f930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f933 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d9f936 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9f939 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9f93b je 0x12d9f97d */
  if (C.zf) goto L_12d9f97d;
  /* 12d9f93d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9f93f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f942 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d9f945 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f946 call 0x12d936d0 */
  push32(0x12d9f94bu); f_12d936d0();
  /* 12d9f94b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f94e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f951 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d9f954 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9f95a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f95d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d9f960 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f963 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12d9f969 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f96c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12d9f973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9f976 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12d9f97d:;
  /* 12d9f97d pop edi */
  EDI = (pop32());
  /* 12d9f97e pop esi */
  ESI = (pop32());
  /* 12d9f97f pop ebx */
  EBX = (pop32());
  /* 12d9f980 pop ebp */
  EBP = (pop32());
  /* 12d9f981 ret  */
  ESPCHK(0x12d9f8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f990 @ 0x12d9f990 (289 bytes, 97 insns) */
void f_12d9f990(void) {
  FTRACE(0x12d9f990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f990 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f991 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f993 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f996 push esi */
  push32((uint32_t)(ESI));
  /* 12d9f997 mov eax, dword ptr [0x12dacd58] */
  EAX = (r32((uint32_t)(0x12dacd58)));
  /* 12d9f99c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d9f99f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d9f9a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d9f9ad jmp 0x12d9f9b8 */
  goto L_12d9f9b8;
L_12d9f9af:;
  /* 12d9f9af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9f9b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f9b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d9f9b8:;
  /* 12d9f9b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f9bc jae 0x12d9f9f1 */
  if (!C.cf) goto L_12d9f9f1;
  /* 12d9f9be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9f9c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9f9c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d9f9c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f9c8 call 0x12d95a70 */
  push32(0x12d9f9cdu); f_12d95a70();
  /* 12d9f9cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f9d0 mov esi, eax */
  ESI = (EAX);
  /* 12d9f9d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9f9d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9f9d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12d9f9dc push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f9dd call 0x12d95a70 */
  push32(0x12d9f9e2u); f_12d95a70();
  /* 12d9f9e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f9e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f9e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d9f9ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d9f9ef jmp 0x12d9f9af */
  goto L_12d9f9af;
L_12d9f9f1:;
  /* 12d9f9f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9f9f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f9f7 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f9f8 call 0x12d92c20 */
  push32(0x12d9f9fdu); f_12d92c20();
  /* 12d9f9fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fa00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9fa03 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9fa07 je 0x12d9faa9 */
  if (C.zf) goto L_12d9faa9;
  /* 12d9fa0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9fa10 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d9fa13 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d9fa1a jmp 0x12d9fa25 */
  goto L_12d9fa25;
L_12d9fa1c:;
  /* 12d9fa1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fa1f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fa22 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d9fa25:;
  /* 12d9fa25 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9fa29 jae 0x12d9fa9a */
  if (!C.cf) goto L_12d9fa9a;
  /* 12d9fa2b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fa2e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12d9fa31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fa34 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fa37 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d9fa3a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fa3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fa40 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d9fa43 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9fa44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fa47 push edx */
  push32((uint32_t)(EDX));
  /* 12d9fa48 call 0x12d95bf0 */
  push32(0x12d9fa4du); f_12d95bf0();
  /* 12d9fa4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fa50 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fa51 call 0x12d95a70 */
  push32(0x12d9fa56u); f_12d95a70();
  /* 12d9fa56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fa59 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fa5c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fa5e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d9fa61 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fa64 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12d9fa67 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fa6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fa6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d9fa70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fa73 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fa76 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12d9fa7a push eax */
  push32((uint32_t)(EAX));
  /* 12d9fa7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fa7e push ecx */
  push32((uint32_t)(ECX));
  /* 12d9fa7f call 0x12d95bf0 */
  push32(0x12d9fa84u); f_12d95bf0();
  /* 12d9fa84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fa87 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fa88 call 0x12d95a70 */
  push32(0x12d9fa8du); f_12d95a70();
  /* 12d9fa8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fa90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fa93 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fa95 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d9fa98 jmp 0x12d9fa1c */
  goto L_12d9fa1c;
L_12d9fa9a:;
  /* 12d9fa9a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fa9d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d9faa0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9faa3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9faa6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12d9faa9:;
  /* 12d9faa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9faac pop esi */
  ESI = (pop32());
  /* 12d9faad mov esp, ebp */
  ESP = (EBP);
  /* 12d9faaf pop ebp */
  EBP = (pop32());
  /* 12d9fab0 ret  */
  ESPCHK(0x12d9f990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fac0 @ 0x12d9fac0 (291 bytes, 97 insns) */
void f_12d9fac0(void) {
  FTRACE(0x12d9fac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9fac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9fac1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9fac3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9fac6 push esi */
  push32((uint32_t)(ESI));
  /* 12d9fac7 mov eax, dword ptr [0x12dacd58] */
  EAX = (r32((uint32_t)(0x12dacd58)));
  /* 12d9facc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d9facf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d9fad6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d9fadd jmp 0x12d9fae8 */
  goto L_12d9fae8;
L_12d9fadf:;
  /* 12d9fadf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fae2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fae5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d9fae8:;
  /* 12d9fae8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9faec jae 0x12d9fb22 */
  if (!C.cf) goto L_12d9fb22;
  /* 12d9faee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9faf1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9faf4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12d9faf8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9faf9 call 0x12d95a70 */
  push32(0x12d9fafeu); f_12d95a70();
  /* 12d9fafe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fb01 mov esi, eax */
  ESI = (EAX);
  /* 12d9fb03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fb06 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fb09 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12d9fb0d push ecx */
  push32((uint32_t)(ECX));
  /* 12d9fb0e call 0x12d95a70 */
  push32(0x12d9fb13u); f_12d95a70();
  /* 12d9fb13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fb16 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fb19 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d9fb1d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d9fb20 jmp 0x12d9fadf */
  goto L_12d9fadf;
L_12d9fb22:;
  /* 12d9fb22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9fb25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fb28 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fb29 call 0x12d92c20 */
  push32(0x12d9fb2eu); f_12d92c20();
  /* 12d9fb2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fb31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9fb34 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9fb38 je 0x12d9fbdb */
  if (C.zf) goto L_12d9fbdb;
  /* 12d9fb3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9fb41 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d9fb44 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d9fb4b jmp 0x12d9fb56 */
  goto L_12d9fb56;
L_12d9fb4d:;
  /* 12d9fb4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fb50 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fb53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d9fb56:;
  /* 12d9fb56 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9fb5a jae 0x12d9fbcc */
  if (!C.cf) goto L_12d9fbcc;
  /* 12d9fb5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fb5f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12d9fb62 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fb65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fb68 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d9fb6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fb6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fb71 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12d9fb75 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9fb76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fb79 push edx */
  push32((uint32_t)(EDX));
  /* 12d9fb7a call 0x12d95bf0 */
  push32(0x12d9fb7fu); f_12d95bf0();
  /* 12d9fb7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fb82 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fb83 call 0x12d95a70 */
  push32(0x12d9fb88u); f_12d95a70();
  /* 12d9fb88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fb8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fb8e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fb90 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d9fb93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fb96 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12d9fb99 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fb9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fb9f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d9fba2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fba5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fba8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d9fbac push eax */
  push32((uint32_t)(EAX));
  /* 12d9fbad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fbb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9fbb1 call 0x12d95bf0 */
  push32(0x12d9fbb6u); f_12d95bf0();
  /* 12d9fbb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fbb9 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fbba call 0x12d95a70 */
  push32(0x12d9fbbfu); f_12d95a70();
  /* 12d9fbbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fbc2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fbc5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fbc7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d9fbca jmp 0x12d9fb4d */
  goto L_12d9fb4d;
L_12d9fbcc:;
  /* 12d9fbcc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fbcf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d9fbd2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fbd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fbd8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12d9fbdb:;
  /* 12d9fbdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9fbde pop esi */
  ESI = (pop32());
  /* 12d9fbdf mov esp, ebp */
  ESP = (EBP);
  /* 12d9fbe1 pop ebp */
  EBP = (pop32());
  /* 12d9fbe2 ret  */
  ESPCHK(0x12d9fac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbf0 @ 0x12d9fbf0 (878 bytes, 273 insns) */
void f_12d9fbf0(void) {
  FTRACE(0x12d9fbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9fbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9fbf1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9fbf3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9fbf6 push esi */
  push32((uint32_t)(ESI));
  /* 12d9fbf7 mov eax, dword ptr [0x12dacd58] */
  EAX = (r32((uint32_t)(0x12dacd58)));
  /* 12d9fbfc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d9fbff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d9fc06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d9fc0d jmp 0x12d9fc18 */
  goto L_12d9fc18;
L_12d9fc0f:;
  /* 12d9fc0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fc12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fc15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d9fc18:;
  /* 12d9fc18 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9fc1c jae 0x12d9fc51 */
  if (!C.cf) goto L_12d9fc51;
  /* 12d9fc1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fc21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fc24 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d9fc27 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9fc28 call 0x12d95a70 */
  push32(0x12d9fc2du); f_12d95a70();
  /* 12d9fc2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fc30 mov esi, eax */
  ESI = (EAX);
  /* 12d9fc32 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fc35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fc38 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12d9fc3c push ecx */
  push32((uint32_t)(ECX));
  /* 12d9fc3d call 0x12d95a70 */
  push32(0x12d9fc42u); f_12d95a70();
  /* 12d9fc42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fc45 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fc48 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d9fc4c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d9fc4f jmp 0x12d9fc0f */
  goto L_12d9fc0f;
L_12d9fc51:;
  /* 12d9fc51 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d9fc58 jmp 0x12d9fc63 */
  goto L_12d9fc63;
L_12d9fc5a:;
  /* 12d9fc5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fc5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fc60 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d9fc63:;
  /* 12d9fc63 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9fc67 jae 0x12d9fc9d */
  if (!C.cf) goto L_12d9fc9d;
  /* 12d9fc69 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fc6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fc6f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12d9fc73 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fc74 call 0x12d95a70 */
  push32(0x12d9fc79u); f_12d95a70();
  /* 12d9fc79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fc7c mov esi, eax */
  ESI = (EAX);
  /* 12d9fc7e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fc81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fc84 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d9fc88 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fc89 call 0x12d95a70 */
  push32(0x12d9fc8eu); f_12d95a70();
  /* 12d9fc8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fc91 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fc94 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d9fc98 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9fc9b jmp 0x12d9fc5a */
  goto L_12d9fc5a;
L_12d9fc9d:;
  /* 12d9fc9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fca0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12d9fca6 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fca7 call 0x12d95a70 */
  push32(0x12d9fcacu); f_12d95a70();
  /* 12d9fcac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fcaf mov esi, eax */
  ESI = (EAX);
  /* 12d9fcb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fcb4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12d9fcba push edx */
  push32((uint32_t)(EDX));
  /* 12d9fcbb call 0x12d95a70 */
  push32(0x12d9fcc0u); f_12d95a70();
  /* 12d9fcc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fcc3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fcc6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d9fcca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9fccd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fcd0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12d9fcd6 push edx */
  push32((uint32_t)(EDX));
  /* 12d9fcd7 call 0x12d95a70 */
  push32(0x12d9fcdcu); f_12d95a70();
  /* 12d9fcdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fcdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9fce2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d9fce6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d9fce9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fcec mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12d9fcf2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9fcf3 call 0x12d95a70 */
  push32(0x12d9fcf8u); f_12d95a70();
  /* 12d9fcf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fcfb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9fcfe lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d9fd02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9fd05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fd08 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12d9fd0e push edx */
  push32((uint32_t)(EDX));
  /* 12d9fd0f call 0x12d95a70 */
  push32(0x12d9fd14u); f_12d95a70();
  /* 12d9fd14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fd17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9fd1a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d9fd1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d9fd21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9fd24 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fd29 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fd2a call 0x12d92c20 */
  push32(0x12d9fd2fu); f_12d92c20();
  /* 12d9fd2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fd32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9fd35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9fd39 je 0x12d9ff56 */
  if (C.zf) goto L_12d9ff56;
  /* 12d9fd3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9fd42 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d9fd45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9fd48 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fd4e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d9fd51 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12d9fd56 mov eax, dword ptr [0x12dacd58] */
  EAX = (r32((uint32_t)(0x12dacd58)));
  /* 12d9fd5b push eax */
  push32((uint32_t)(EAX));
  /* 12d9fd5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9fd5f push ecx */
  push32((uint32_t)(ECX));
  /* 12d9fd60 call 0x12d99520 */
  push32(0x12d9fd65u); f_12d99520();
  /* 12d9fd65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fd68 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d9fd6f jmp 0x12d9fd7a */
  goto L_12d9fd7a;
L_12d9fd71:;
  /* 12d9fd71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fd74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fd77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d9fd7a:;
  /* 12d9fd7a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9fd7e jae 0x12d9fdee */
  if (!C.cf) goto L_12d9fdee;
  /* 12d9fd80 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fd83 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9fd86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fd89 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12d9fd8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fd8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fd92 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d9fd95 push edx */
  push32((uint32_t)(EDX));
  /* 12d9fd96 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fd99 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fd9a call 0x12d95bf0 */
  push32(0x12d9fd9fu); f_12d95bf0();
  /* 12d9fd9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fda2 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fda3 call 0x12d95a70 */
  push32(0x12d9fda8u); f_12d95a70();
  /* 12d9fda8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fdab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fdae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d9fdb2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d9fdb5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fdb8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9fdbb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fdbe mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12d9fdc2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fdc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fdc8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12d9fdcc push edx */
  push32((uint32_t)(EDX));
  /* 12d9fdcd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fdd0 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fdd1 call 0x12d95bf0 */
  push32(0x12d9fdd6u); f_12d95bf0();
  /* 12d9fdd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fdd9 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fdda call 0x12d95a70 */
  push32(0x12d9fddfu); f_12d95a70();
  /* 12d9fddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fde2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fde5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d9fde9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d9fdec jmp 0x12d9fd71 */
  goto L_12d9fd71;
L_12d9fdee:;
  /* 12d9fdee mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d9fdf5 jmp 0x12d9fe00 */
  goto L_12d9fe00;
L_12d9fdf7:;
  /* 12d9fdf7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fdfa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fdfd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d9fe00:;
  /* 12d9fe00 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9fe04 jae 0x12d9fe76 */
  if (!C.cf) goto L_12d9fe76;
  /* 12d9fe06 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fe09 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9fe0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fe0f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12d9fe13 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fe16 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fe19 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12d9fe1d push eax */
  push32((uint32_t)(EAX));
  /* 12d9fe1e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fe21 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9fe22 call 0x12d95bf0 */
  push32(0x12d9fe27u); f_12d95bf0();
  /* 12d9fe27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fe2a push eax */
  push32((uint32_t)(EAX));
  /* 12d9fe2b call 0x12d95a70 */
  push32(0x12d9fe30u); f_12d95a70();
  /* 12d9fe30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fe33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fe36 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d9fe3a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d9fe3d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fe40 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9fe43 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fe46 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12d9fe4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9fe4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fe50 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d9fe54 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fe55 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fe58 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9fe59 call 0x12d95bf0 */
  push32(0x12d9fe5eu); f_12d95bf0();
  /* 12d9fe5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fe61 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fe62 call 0x12d95a70 */
  push32(0x12d9fe67u); f_12d95a70();
  /* 12d9fe67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fe6a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fe6d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d9fe71 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d9fe74 jmp 0x12d9fdf7 */
  goto L_12d9fdf7;
L_12d9fe76:;
  /* 12d9fe76 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9fe79 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fe7c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12d9fe82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9fe85 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12d9fe8b push ecx */
  push32((uint32_t)(ECX));
  /* 12d9fe8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fe8f push edx */
  push32((uint32_t)(EDX));
  /* 12d9fe90 call 0x12d95bf0 */
  push32(0x12d9fe95u); f_12d95bf0();
  /* 12d9fe95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fe98 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fe99 call 0x12d95a70 */
  push32(0x12d9fe9eu); f_12d95a70();
  /* 12d9fe9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fea1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fea4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d9fea8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d9feab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9feae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9feb1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12d9feb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9feba mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12d9fec0 push eax */
  push32((uint32_t)(EAX));
  /* 12d9fec1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fec4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9fec5 call 0x12d95bf0 */
  push32(0x12d9fecau); f_12d95bf0();
  /* 12d9feca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fecd push eax */
  push32((uint32_t)(EAX));
  /* 12d9fece call 0x12d95a70 */
  push32(0x12d9fed3u); f_12d95a70();
  /* 12d9fed3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9fed6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fed9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d9fedd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d9fee0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9fee3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fee6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12d9feec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9feef mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12d9fef5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9fef6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9fef9 push edx */
  push32((uint32_t)(EDX));
  /* 12d9fefa call 0x12d95bf0 */
  push32(0x12d9feffu); f_12d95bf0();
  /* 12d9feff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ff02 push eax */
  push32((uint32_t)(EAX));
  /* 12d9ff03 call 0x12d95a70 */
  push32(0x12d9ff08u); f_12d95a70();
  /* 12d9ff08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ff0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9ff0e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d9ff12 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d9ff15 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9ff18 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9ff1b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12d9ff21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9ff24 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12d9ff2a push eax */
  push32((uint32_t)(EAX));
  /* 12d9ff2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9ff2e push ecx */
  push32((uint32_t)(ECX));
  /* 12d9ff2f call 0x12d95bf0 */
  push32(0x12d9ff34u); f_12d95bf0();
  /* 12d9ff34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ff37 push eax */
  push32((uint32_t)(EAX));
  /* 12d9ff38 call 0x12d95a70 */
  push32(0x12d9ff3du); f_12d95a70();
  /* 12d9ff3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ff40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9ff43 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d9ff47 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d9ff4a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9ff4d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9ff50 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12d9ff56:;
  /* 12d9ff56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9ff59 pop esi */
  ESI = (pop32());
  /* 12d9ff5a mov esp, ebp */
  ESP = (EBP);
  /* 12d9ff5c pop ebp */
  EBP = (pop32());
  /* 12d9ff5d ret  */
  ESPCHK(0x12d9fbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff60 @ 0x12d9ff60 (31 bytes, 15 insns) */
void f_12d9ff60(void) {
  FTRACE(0x12d9ff60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9ff60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9ff61 mov ebp, esp */
  EBP = (ESP);
  /* 12d9ff63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9ff65 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9ff68 push eax */
  push32((uint32_t)(EAX));
  /* 12d9ff69 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9ff6c push ecx */
  push32((uint32_t)(ECX));
  /* 12d9ff6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9ff70 push edx */
  push32((uint32_t)(EDX));
  /* 12d9ff71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ff74 push eax */
  push32((uint32_t)(EAX));
  /* 12d9ff75 call 0x12d9ff80 */
  push32(0x12d9ff7au); f_12d9ff80();
  /* 12d9ff7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ff7d pop ebp */
  EBP = (pop32());
  /* 12d9ff7e ret  */
  ESPCHK(0x12d9ff60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff80 @ 0x12d9ff80 (394 bytes, 123 insns) */
void f_12d9ff80(void) {
  FTRACE(0x12d9ff80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9ff80 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9ff81 mov ebp, esp */
  EBP = (ESP);
  /* 12d9ff83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ff86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9ff89 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d9ff8c push 0x12dad8ac */
  push32((uint32_t)(0x12dad8acu));
  /* 12d9ff91 call dword ptr [0x12db02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02ac))), 0x12d9ff97u);
  /* 12d9ff97 cmp dword ptr [0x12dad89c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad89c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ff9e je 0x12d9ffbe */
  if (C.zf) goto L_12d9ffbe;
  /* 12d9ffa0 push 0x12dad8ac */
  push32((uint32_t)(0x12dad8acu));
  /* 12d9ffa5 call dword ptr [0x12db029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db029c))), 0x12d9ffabu);
  /* 12d9ffab push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d9ffad call 0x12d96640 */
  push32(0x12d9ffb2u); f_12d96640();
  /* 12d9ffb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ffb5 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d9ffbc jmp 0x12d9ffc5 */
  goto L_12d9ffc5;
L_12d9ffbe:;
  /* 12d9ffbe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d9ffc5:;
  /* 12d9ffc5 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ffc9 jne 0x12d9ffd6 */
  if (!C.zf) goto L_12d9ffd6;
  /* 12d9ffcb mov ecx, dword ptr [0x12dacd58] */
  ECX = (r32((uint32_t)(0x12dacd58)));
  /* 12d9ffd1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d9ffd4 jmp 0x12d9ffdc */
  goto L_12d9ffdc;
L_12d9ffd6:;
  /* 12d9ffd6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d9ffd9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d9ffdc:;
  /* 12d9ffdc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9ffdf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d9ffe2:;
  /* 12d9ffe2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ffe6 jbe 0x12da00d3 */
  if ((C.cf||C.zf)) goto L_12da00d3;
  /* 12d9ffec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9ffef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d9fff1 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12d9fff4 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d9fff8 je 0x12da0002 */
  if (C.zf) goto L_12da0002;
  /* 12d9fffa cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d9fffe je 0x12da0007 */
  if (C.zf) goto L_12da0007;
  /* 12da0000 jmp 0x12da0061 */
  goto L_12da0061;
L_12da0002:;
  /* 12da0002 jmp 0x12da00d3 */
  goto L_12da00d3;
L_12da0007:;
  /* 12da0007 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da000a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da000d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12da0010 mov dword ptr [0x12dad888], 0 */
  w32((uint32_t)(0x12dad888), (0x0u));
  /* 12da001a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da001d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12da0020 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0023 jne 0x12da0038 */
  if (!C.zf) goto L_12da0038;
  /* 12da0025 mov dword ptr [0x12dad888], 1 */
  w32((uint32_t)(0x12dad888), (0x1u));
  /* 12da002f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0032 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0035 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12da0038:;
  /* 12da0038 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da003b push ecx */
  push32((uint32_t)(ECX));
  /* 12da003c lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12da003f push edx */
  push32((uint32_t)(EDX));
  /* 12da0040 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12da0043 push eax */
  push32((uint32_t)(EAX));
  /* 12da0044 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0047 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0048 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da004b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da004d push eax */
  push32((uint32_t)(EAX));
  /* 12da004e call 0x12da0110 */
  push32(0x12da0053u); f_12da0110();
  /* 12da0053 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0056 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0059 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da005c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12da005f jmp 0x12da00ce */
  goto L_12da00ce;
L_12da0061:;
  /* 12da0061 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da0066 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da0068 mov ecx, dword ptr [0x12dabd58] */
  ECX = (r32((uint32_t)(0x12dabd58)));
  /* 12da006e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da0070 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12da0074 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12da007a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da007c je 0x12da00a9 */
  if (C.zf) goto L_12da00a9;
  /* 12da007e cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0082 jbe 0x12da00a9 */
  if ((C.cf||C.zf)) goto L_12da00a9;
  /* 12da0084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0087 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da008a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12da008c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12da008e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0091 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0094 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12da0097 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da009a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da009d mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12da00a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da00a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da00a6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12da00a9:;
  /* 12da00a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da00ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da00af mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12da00b1 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12da00b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da00b6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da00b9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12da00bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da00bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da00c2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12da00c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da00c8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da00cb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12da00ce:;
  /* 12da00ce jmp 0x12d9ffe2 */
  goto L_12d9ffe2;
L_12da00d3:;
  /* 12da00d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da00d7 je 0x12da00e5 */
  if (C.zf) goto L_12da00e5;
  /* 12da00d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12da00db call 0x12d966e0 */
  push32(0x12da00e0u); f_12d966e0();
  /* 12da00e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da00e3 jmp 0x12da00f0 */
  goto L_12da00f0;
L_12da00e5:;
  /* 12da00e5 push 0x12dad8ac */
  push32((uint32_t)(0x12dad8acu));
  /* 12da00ea call dword ptr [0x12db029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db029c))), 0x12da00f0u);
L_12da00f0:;
  /* 12da00f0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da00f4 jbe 0x12da0104 */
  if ((C.cf||C.zf)) goto L_12da0104;
  /* 12da00f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da00f9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12da00fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da00ff sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0102 jmp 0x12da0106 */
  goto L_12da0106;
L_12da0104:;
  /* 12da0104 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12da0106:;
  /* 12da0106 mov esp, ebp */
  ESP = (EBP);
  /* 12da0108 pop ebp */
  EBP = (pop32());
  /* 12da0109 ret  */
  ESPCHK(0x12d9ff80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010110 @ 0x12da0110 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12da0110(void) {
  FTRACE(0x12da0110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da0110 push ebp */
  push32((uint32_t)(EBP));
  /* 12da0111 mov ebp, esp */
  EBP = (ESP);
  /* 12da0113 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0116 push esi */
  push32((uint32_t)(ESI));
  /* 12da0117 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12da011b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12da011e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da0121 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0124 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12da0127 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da012b ja 0x12da0678 */
  if ((!C.cf&&!C.zf)) goto L_12da0678;
  /* 12da0131 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da0134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da0136 mov dl, byte ptr [eax + 0x12da06d9] */
  DL = (r8((uint32_t)(EAX + 0x12da06d9)));
  /* 12da013c jmp dword ptr [edx*4 + 0x12da067d] */
  switch (EDX) {
    case 0: goto L_12da0656;
    case 1: goto L_12da0165;
    case 2: goto L_12da01ab;
    case 3: goto L_12da02f8;
    case 4: goto L_12da0320;
    case 5: goto L_12da03bf;
    case 6: goto L_12da042b;
    case 7: goto L_12da0454;
    case 8: goto L_12da0495;
    case 9: goto L_12da0577;
    case 10: goto L_12da05de;
    case 11: goto L_12da062b;
    case 12: goto L_12da0143;
    case 13: goto L_12da0188;
    case 14: goto L_12da01ce;
    case 15: goto L_12da02ce;
    case 16: goto L_12da0365;
    case 17: goto L_12da0392;
    case 18: goto L_12da03e7;
    case 19: goto L_12da046b;
    case 20: goto L_12da0519;
    case 21: goto L_12da05a8;
    case 22: goto L_12da0678;
    default: x86_unimpl("switch@0x12da013c out of table"); return;
  }
L_12da0143:;
  /* 12da0143 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0146 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0147 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da014a push edx */
  push32((uint32_t)(EDX));
  /* 12da014b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da014e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12da0151 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0154 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12da0157 push eax */
  push32((uint32_t)(EAX));
  /* 12da0158 call 0x12da0730 */
  push32(0x12da015du); f_12da0730();
  /* 12da015d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0160 jmp 0x12da0678 */
  goto L_12da0678;
L_12da0165:;
  /* 12da0165 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0168 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0169 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da016c push edx */
  push32((uint32_t)(EDX));
  /* 12da016d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0170 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12da0173 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0176 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12da017a push eax */
  push32((uint32_t)(EAX));
  /* 12da017b call 0x12da0730 */
  push32(0x12da0180u); f_12da0730();
  /* 12da0180 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0183 jmp 0x12da0678 */
  goto L_12da0678;
L_12da0188:;
  /* 12da0188 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da018b push ecx */
  push32((uint32_t)(ECX));
  /* 12da018c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da018f push edx */
  push32((uint32_t)(EDX));
  /* 12da0190 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0193 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12da0196 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0199 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12da019d push eax */
  push32((uint32_t)(EAX));
  /* 12da019e call 0x12da0730 */
  push32(0x12da01a3u); f_12da0730();
  /* 12da01a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da01a6 jmp 0x12da0678 */
  goto L_12da0678;
L_12da01ab:;
  /* 12da01ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da01ae push ecx */
  push32((uint32_t)(ECX));
  /* 12da01af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da01b2 push edx */
  push32((uint32_t)(EDX));
  /* 12da01b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da01b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12da01b9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da01bc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12da01c0 push eax */
  push32((uint32_t)(EAX));
  /* 12da01c1 call 0x12da0730 */
  push32(0x12da01c6u); f_12da0730();
  /* 12da01c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da01c9 jmp 0x12da0678 */
  goto L_12da0678;
L_12da01ce:;
  /* 12da01ce cmp dword ptr [0x12dad888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da01d5 je 0x12da0256 */
  if (C.zf) goto L_12da0256;
  /* 12da01d7 mov dword ptr [0x12dad888], 0 */
  w32((uint32_t)(0x12dad888), (0x0u));
  /* 12da01e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da01e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12da01e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da01e8 push edx */
  push32((uint32_t)(EDX));
  /* 12da01e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da01ec push eax */
  push32((uint32_t)(EAX));
  /* 12da01ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da01f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12da01f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da01f4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12da01fa push eax */
  push32((uint32_t)(EAX));
  /* 12da01fb call 0x12da08e0 */
  push32(0x12da0200u); f_12da08e0();
  /* 12da0200 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0203 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0206 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0209 jne 0x12da0210 */
  if (!C.zf) goto L_12da0210;
  /* 12da020b jmp 0x12da0678 */
  goto L_12da0678;
L_12da0210:;
  /* 12da0210 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0213 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da0215 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12da0218 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da021b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da021d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0220 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0223 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12da0225 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0228 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da022a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da022d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0230 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12da0232 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0235 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0236 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0239 push edx */
  push32((uint32_t)(EDX));
  /* 12da023a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da023d push eax */
  push32((uint32_t)(EAX));
  /* 12da023e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0241 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0242 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0245 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12da024b push eax */
  push32((uint32_t)(EAX));
  /* 12da024c call 0x12da08e0 */
  push32(0x12da0251u); f_12da08e0();
  /* 12da0251 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0254 jmp 0x12da02c9 */
  goto L_12da02c9;
L_12da0256:;
  /* 12da0256 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0259 push ecx */
  push32((uint32_t)(ECX));
  /* 12da025a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da025d push edx */
  push32((uint32_t)(EDX));
  /* 12da025e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0261 push eax */
  push32((uint32_t)(EAX));
  /* 12da0262 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0265 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0266 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0269 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12da026f push eax */
  push32((uint32_t)(EAX));
  /* 12da0270 call 0x12da08e0 */
  push32(0x12da0275u); f_12da08e0();
  /* 12da0275 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0278 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da027b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da027e jne 0x12da0285 */
  if (!C.zf) goto L_12da0285;
  /* 12da0280 jmp 0x12da0678 */
  goto L_12da0678;
L_12da0285:;
  /* 12da0285 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0288 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da028a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12da028d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0290 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da0292 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0295 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0298 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12da029a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da029d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da029f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da02a2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da02a5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12da02a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da02aa push ecx */
  push32((uint32_t)(ECX));
  /* 12da02ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da02ae push edx */
  push32((uint32_t)(EDX));
  /* 12da02af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da02b2 push eax */
  push32((uint32_t)(EAX));
  /* 12da02b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da02b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12da02b7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da02ba mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12da02c0 push eax */
  push32((uint32_t)(EAX));
  /* 12da02c1 call 0x12da08e0 */
  push32(0x12da02c6u); f_12da08e0();
  /* 12da02c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12da02c9:;
  /* 12da02c9 jmp 0x12da0678 */
  goto L_12da0678;
L_12da02ce:;
  /* 12da02ce mov ecx, dword ptr [0x12dad888] */
  ECX = (r32((uint32_t)(0x12dad888)));
  /* 12da02d4 mov dword ptr [0x12dad898], ecx */
  w32((uint32_t)(0x12dad898), (ECX));
  /* 12da02da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da02dd push edx */
  push32((uint32_t)(EDX));
  /* 12da02de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da02e1 push eax */
  push32((uint32_t)(EAX));
  /* 12da02e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da02e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da02e7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12da02ea push edx */
  push32((uint32_t)(EDX));
  /* 12da02eb call 0x12da0780 */
  push32(0x12da02f0u); f_12da0780();
  /* 12da02f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da02f3 jmp 0x12da0678 */
  goto L_12da0678;
L_12da02f8:;
  /* 12da02f8 mov eax, dword ptr [0x12dad888] */
  EAX = (r32((uint32_t)(0x12dad888)));
  /* 12da02fd mov dword ptr [0x12dad898], eax */
  w32((uint32_t)(0x12dad898), (EAX));
  /* 12da0302 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0305 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0306 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0309 push edx */
  push32((uint32_t)(EDX));
  /* 12da030a push 2 */
  push32((uint32_t)(0x2u));
  /* 12da030c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da030f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12da0312 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0313 call 0x12da0780 */
  push32(0x12da0318u); f_12da0780();
  /* 12da0318 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da031b jmp 0x12da0678 */
  goto L_12da0678;
L_12da0320:;
  /* 12da0320 mov edx, dword ptr [0x12dad888] */
  EDX = (r32((uint32_t)(0x12dad888)));
  /* 12da0326 mov dword ptr [0x12dad898], edx */
  w32((uint32_t)(0x12dad898), (EDX));
  /* 12da032c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da032f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12da0332 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12da0333 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12da0338 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12da033a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12da033d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0341 jne 0x12da034a */
  if (!C.zf) goto L_12da034a;
  /* 12da0343 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12da034a:;
  /* 12da034a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da034d push edx */
  push32((uint32_t)(EDX));
  /* 12da034e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0351 push eax */
  push32((uint32_t)(EAX));
  /* 12da0352 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da0354 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da0357 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0358 call 0x12da0780 */
  push32(0x12da035du); f_12da0780();
  /* 12da035d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0360 jmp 0x12da0678 */
  goto L_12da0678;
L_12da0365:;
  /* 12da0365 mov edx, dword ptr [0x12dad888] */
  EDX = (r32((uint32_t)(0x12dad888)));
  /* 12da036b mov dword ptr [0x12dad898], edx */
  w32((uint32_t)(0x12dad898), (EDX));
  /* 12da0371 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0374 push eax */
  push32((uint32_t)(EAX));
  /* 12da0375 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0378 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0379 push 3 */
  push32((uint32_t)(0x3u));
  /* 12da037b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da037e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12da0381 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0384 push eax */
  push32((uint32_t)(EAX));
  /* 12da0385 call 0x12da0780 */
  push32(0x12da038au); f_12da0780();
  /* 12da038a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da038d jmp 0x12da0678 */
  goto L_12da0678;
L_12da0392:;
  /* 12da0392 mov ecx, dword ptr [0x12dad888] */
  ECX = (r32((uint32_t)(0x12dad888)));
  /* 12da0398 mov dword ptr [0x12dad898], ecx */
  w32((uint32_t)(0x12dad898), (ECX));
  /* 12da039e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da03a1 push edx */
  push32((uint32_t)(EDX));
  /* 12da03a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da03a5 push eax */
  push32((uint32_t)(EAX));
  /* 12da03a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da03a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da03ab mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12da03ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da03b1 push edx */
  push32((uint32_t)(EDX));
  /* 12da03b2 call 0x12da0780 */
  push32(0x12da03b7u); f_12da0780();
  /* 12da03b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da03ba jmp 0x12da0678 */
  goto L_12da0678;
L_12da03bf:;
  /* 12da03bf mov eax, dword ptr [0x12dad888] */
  EAX = (r32((uint32_t)(0x12dad888)));
  /* 12da03c4 mov dword ptr [0x12dad898], eax */
  w32((uint32_t)(0x12dad898), (EAX));
  /* 12da03c9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da03cc push ecx */
  push32((uint32_t)(ECX));
  /* 12da03cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da03d0 push edx */
  push32((uint32_t)(EDX));
  /* 12da03d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da03d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da03d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12da03d9 push ecx */
  push32((uint32_t)(ECX));
  /* 12da03da call 0x12da0780 */
  push32(0x12da03dfu); f_12da0780();
  /* 12da03df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da03e2 jmp 0x12da0678 */
  goto L_12da0678;
L_12da03e7:;
  /* 12da03e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da03ea cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da03ee jg 0x12da040c */
  if ((!C.zf&&C.sf==C.of)) goto L_12da040c;
  /* 12da03f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da03f3 push eax */
  push32((uint32_t)(EAX));
  /* 12da03f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da03f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12da03f8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da03fb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12da0401 push eax */
  push32((uint32_t)(EAX));
  /* 12da0402 call 0x12da0730 */
  push32(0x12da0407u); f_12da0730();
  /* 12da0407 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da040a jmp 0x12da0426 */
  goto L_12da0426;
L_12da040c:;
  /* 12da040c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da040f push ecx */
  push32((uint32_t)(ECX));
  /* 12da0410 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0413 push edx */
  push32((uint32_t)(EDX));
  /* 12da0414 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0417 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12da041d push ecx */
  push32((uint32_t)(ECX));
  /* 12da041e call 0x12da0730 */
  push32(0x12da0423u); f_12da0730();
  /* 12da0423 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12da0426:;
  /* 12da0426 jmp 0x12da0678 */
  goto L_12da0678;
L_12da042b:;
  /* 12da042b mov edx, dword ptr [0x12dad888] */
  EDX = (r32((uint32_t)(0x12dad888)));
  /* 12da0431 mov dword ptr [0x12dad898], edx */
  w32((uint32_t)(0x12dad898), (EDX));
  /* 12da0437 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da043a push eax */
  push32((uint32_t)(EAX));
  /* 12da043b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da043e push ecx */
  push32((uint32_t)(ECX));
  /* 12da043f push 2 */
  push32((uint32_t)(0x2u));
  /* 12da0441 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0444 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da0446 push eax */
  push32((uint32_t)(EAX));
  /* 12da0447 call 0x12da0780 */
  push32(0x12da044cu); f_12da0780();
  /* 12da044c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da044f jmp 0x12da0678 */
  goto L_12da0678;
L_12da0454:;
  /* 12da0454 mov ecx, dword ptr [0x12dad888] */
  ECX = (r32((uint32_t)(0x12dad888)));
  /* 12da045a mov dword ptr [0x12dad898], ecx */
  w32((uint32_t)(0x12dad898), (ECX));
  /* 12da0460 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0463 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12da0466 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12da0469 jmp 0x12da04bd */
  goto L_12da04bd;
L_12da046b:;
  /* 12da046b mov ecx, dword ptr [0x12dad888] */
  ECX = (r32((uint32_t)(0x12dad888)));
  /* 12da0471 mov dword ptr [0x12dad898], ecx */
  w32((uint32_t)(0x12dad898), (ECX));
  /* 12da0477 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da047a push edx */
  push32((uint32_t)(EDX));
  /* 12da047b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da047e push eax */
  push32((uint32_t)(EAX));
  /* 12da047f push 1 */
  push32((uint32_t)(0x1u));
  /* 12da0481 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0484 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12da0487 push edx */
  push32((uint32_t)(EDX));
  /* 12da0488 call 0x12da0780 */
  push32(0x12da048du); f_12da0780();
  /* 12da048d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0490 jmp 0x12da0678 */
  goto L_12da0678;
L_12da0495:;
  /* 12da0495 mov eax, dword ptr [0x12dad888] */
  EAX = (r32((uint32_t)(0x12dad888)));
  /* 12da049a mov dword ptr [0x12dad898], eax */
  w32((uint32_t)(0x12dad898), (EAX));
  /* 12da049f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da04a2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da04a6 jne 0x12da04b1 */
  if (!C.zf) goto L_12da04b1;
  /* 12da04a8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12da04af jmp 0x12da04bd */
  goto L_12da04bd;
L_12da04b1:;
  /* 12da04b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da04b4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12da04b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da04ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12da04bd:;
  /* 12da04bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da04c0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12da04c3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da04c6 jge 0x12da04d1 */
  if ((C.sf==C.of)) goto L_12da04d1;
  /* 12da04c8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12da04cf jmp 0x12da04fe */
  goto L_12da04fe;
L_12da04d1:;
  /* 12da04d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da04d4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12da04d7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12da04d8 mov ecx, 7 */
  ECX = (0x7u);
  /* 12da04dd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12da04df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12da04e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da04e5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12da04e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12da04e9 mov ecx, 7 */
  ECX = (0x7u);
  /* 12da04ee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12da04f0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da04f3 jl 0x12da04fe */
  if ((C.sf!=C.of)) goto L_12da04fe;
  /* 12da04f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da04f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da04fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12da04fe:;
  /* 12da04fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0501 push eax */
  push32((uint32_t)(EAX));
  /* 12da0502 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0505 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0506 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da0508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da050b push edx */
  push32((uint32_t)(EDX));
  /* 12da050c call 0x12da0780 */
  push32(0x12da0511u); f_12da0780();
  /* 12da0511 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0514 jmp 0x12da0678 */
  goto L_12da0678;
L_12da0519:;
  /* 12da0519 cmp dword ptr [0x12dad888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0520 je 0x12da0550 */
  if (C.zf) goto L_12da0550;
  /* 12da0522 mov dword ptr [0x12dad888], 0 */
  w32((uint32_t)(0x12dad888), (0x0u));
  /* 12da052c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da052f push eax */
  push32((uint32_t)(EAX));
  /* 12da0530 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0533 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0534 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0537 push edx */
  push32((uint32_t)(EDX));
  /* 12da0538 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da053b push eax */
  push32((uint32_t)(EAX));
  /* 12da053c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da053f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12da0545 push edx */
  push32((uint32_t)(EDX));
  /* 12da0546 call 0x12da08e0 */
  push32(0x12da054bu); f_12da08e0();
  /* 12da054b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da054e jmp 0x12da0572 */
  goto L_12da0572;
L_12da0550:;
  /* 12da0550 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0553 push eax */
  push32((uint32_t)(EAX));
  /* 12da0554 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0557 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0558 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da055b push edx */
  push32((uint32_t)(EDX));
  /* 12da055c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da055f push eax */
  push32((uint32_t)(EAX));
  /* 12da0560 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0563 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12da0569 push edx */
  push32((uint32_t)(EDX));
  /* 12da056a call 0x12da08e0 */
  push32(0x12da056fu); f_12da08e0();
  /* 12da056f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12da0572:;
  /* 12da0572 jmp 0x12da0678 */
  goto L_12da0678;
L_12da0577:;
  /* 12da0577 mov dword ptr [0x12dad888], 0 */
  w32((uint32_t)(0x12dad888), (0x0u));
  /* 12da0581 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0584 push eax */
  push32((uint32_t)(EAX));
  /* 12da0585 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0588 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0589 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da058c push edx */
  push32((uint32_t)(EDX));
  /* 12da058d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0590 push eax */
  push32((uint32_t)(EAX));
  /* 12da0591 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0594 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12da059a push edx */
  push32((uint32_t)(EDX));
  /* 12da059b call 0x12da08e0 */
  push32(0x12da05a0u); f_12da08e0();
  /* 12da05a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da05a3 jmp 0x12da0678 */
  goto L_12da0678;
L_12da05a8:;
  /* 12da05a8 mov eax, dword ptr [0x12dad888] */
  EAX = (r32((uint32_t)(0x12dad888)));
  /* 12da05ad mov dword ptr [0x12dad898], eax */
  w32((uint32_t)(0x12dad898), (EAX));
  /* 12da05b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da05b5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12da05b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12da05b9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12da05be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12da05c0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12da05c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da05c6 push edx */
  push32((uint32_t)(EDX));
  /* 12da05c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da05ca push eax */
  push32((uint32_t)(EAX));
  /* 12da05cb push 2 */
  push32((uint32_t)(0x2u));
  /* 12da05cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da05d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12da05d1 call 0x12da0780 */
  push32(0x12da05d6u); f_12da0780();
  /* 12da05d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da05d9 jmp 0x12da0678 */
  goto L_12da0678;
L_12da05de:;
  /* 12da05de mov edx, dword ptr [0x12dad888] */
  EDX = (r32((uint32_t)(0x12dad888)));
  /* 12da05e4 mov dword ptr [0x12dad898], edx */
  w32((uint32_t)(0x12dad898), (EDX));
  /* 12da05ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da05ed mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12da05f0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12da05f1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12da05f6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12da05f8 mov ecx, eax */
  ECX = (EAX);
  /* 12da05fa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da05fd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da0600 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0603 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12da0606 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12da0607 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12da060c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12da060e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0610 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12da0613 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0616 push eax */
  push32((uint32_t)(EAX));
  /* 12da0617 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da061a push ecx */
  push32((uint32_t)(ECX));
  /* 12da061b push 4 */
  push32((uint32_t)(0x4u));
  /* 12da061d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da0620 push edx */
  push32((uint32_t)(EDX));
  /* 12da0621 call 0x12da0780 */
  push32(0x12da0626u); f_12da0780();
  /* 12da0626 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0629 jmp 0x12da0678 */
  goto L_12da0678;
L_12da062b:;
  /* 12da062b call 0x12da1740 */
  push32(0x12da0630u); f_12da1740();
  /* 12da0630 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0633 push eax */
  push32((uint32_t)(EAX));
  /* 12da0634 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0637 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0638 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da063b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da063d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0641 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12da0644 mov ecx, dword ptr [eax*4 + 0x12dacedc] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12dacedc)));
  /* 12da064b push ecx */
  push32((uint32_t)(ECX));
  /* 12da064c call 0x12da0730 */
  push32(0x12da0651u); f_12da0730();
  /* 12da0651 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0654 jmp 0x12da0678 */
  goto L_12da0678;
L_12da0656:;
  /* 12da0656 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0659 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da065b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12da065e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0661 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da0663 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0666 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0669 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12da066b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da066e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da0670 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0673 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0676 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12da0678:;
  /* 12da0678 pop esi */
  ESI = (pop32());
  /* 12da0679 mov esp, ebp */
  ESP = (EBP);
  /* 12da067b pop ebp */
  EBP = (pop32());
  /* 12da067c ret  */
  ESPCHK(0x12da0110u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12da0730 (72 bytes, 30 insns) */
void f_12da0730(void) {
  FTRACE(0x12da0730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da0730 push ebp */
  push32((uint32_t)(EBP));
  /* 12da0731 mov ebp, esp */
  EBP = (ESP);
L_12da0733:;
  /* 12da0733 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0736 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0739 je 0x12da0776 */
  if (C.zf) goto L_12da0776;
  /* 12da073b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da073e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12da0741 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da0743 je 0x12da0776 */
  if (C.zf) goto L_12da0776;
  /* 12da0745 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0748 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da074a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da074d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da074f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12da0751 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0754 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da0756 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0759 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da075c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12da075e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0761 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0764 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12da0767 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da076a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da076c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da076f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0772 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12da0774 jmp 0x12da0733 */
  goto L_12da0733;
L_12da0776:;
  /* 12da0776 pop ebp */
  EBP = (pop32());
  /* 12da0777 ret  */
  ESPCHK(0x12da0730u, _esp0);
  ESP += 4; return;
}

/* FUN_10010780 @ 0x12da0780 (173 bytes, 64 insns) */
void f_12da0780(void) {
  FTRACE(0x12da0780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da0780 push ebp */
  push32((uint32_t)(EBP));
  /* 12da0781 mov ebp, esp */
  EBP = (ESP);
  /* 12da0783 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0784 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12da078b cmp dword ptr [0x12dad898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0792 je 0x12da07aa */
  if (C.zf) goto L_12da07aa;
  /* 12da0794 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0797 push eax */
  push32((uint32_t)(EAX));
  /* 12da0798 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da079b push ecx */
  push32((uint32_t)(ECX));
  /* 12da079c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da079f push edx */
  push32((uint32_t)(EDX));
  /* 12da07a0 call 0x12da0830 */
  push32(0x12da07a5u); f_12da0830();
  /* 12da07a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da07a8 jmp 0x12da0829 */
  goto L_12da0829;
L_12da07aa:;
  /* 12da07aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da07ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da07b0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da07b2 jae 0x12da0820 */
  if (!C.cf) goto L_12da0820;
  /* 12da07b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da07b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da07ba mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12da07bd jmp 0x12da07c8 */
  goto L_12da07c8;
L_12da07bf:;
  /* 12da07bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da07c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da07c5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12da07c8:;
  /* 12da07c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da07cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da07ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12da07d0 je 0x12da0804 */
  if (C.zf) goto L_12da0804;
  /* 12da07d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da07d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12da07d6 mov ecx, 0xa */
  ECX = (0xau);
  /* 12da07db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12da07dd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da07e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da07e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da07e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da07e8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12da07eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da07ee cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12da07ef mov ecx, 0xa */
  ECX = (0xau);
  /* 12da07f4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12da07f6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12da07f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da07fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da07ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12da0802 jmp 0x12da07bf */
  goto L_12da07bf;
L_12da0804:;
  /* 12da0804 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0807 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da0809 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da080c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da080f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12da0811 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0814 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da0816 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0819 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da081c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12da081e jmp 0x12da0829 */
  goto L_12da0829;
L_12da0820:;
  /* 12da0820 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0823 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12da0829:;
  /* 12da0829 mov esp, ebp */
  ESP = (EBP);
  /* 12da082b pop ebp */
  EBP = (pop32());
  /* 12da082c ret  */
  ESPCHK(0x12da0780u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12da0830 (172 bytes, 65 insns) */
void f_12da0830(void) {
  FTRACE(0x12da0830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da0830 push ebp */
  push32((uint32_t)(EBP));
  /* 12da0831 mov ebp, esp */
  EBP = (ESP);
  /* 12da0833 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0836 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0839 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da083b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12da083e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0841 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0844 jbe 0x12da088b */
  if ((C.cf||C.zf)) goto L_12da088b;
L_12da0846:;
  /* 12da0846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0849 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12da084a mov ecx, 0xa */
  ECX = (0xau);
  /* 12da084f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12da0851 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0854 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da0857 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12da0859 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da085c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da085f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12da0862 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0865 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da0867 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da086a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da086d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12da086f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0872 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12da0873 mov ecx, 0xa */
  ECX = (0xau);
  /* 12da0878 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12da087a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12da087d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0881 jle 0x12da088b */
  if ((C.zf||C.sf!=C.of)) goto L_12da088b;
  /* 12da0883 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0886 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0889 ja 0x12da0846 */
  if ((!C.cf&&!C.zf)) goto L_12da0846;
L_12da088b:;
  /* 12da088b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da088e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da0890 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12da0893 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0896 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da0899 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12da089b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da089e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da08a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12da08a4:;
  /* 12da08a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da08a7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da08a9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12da08ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da08af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da08b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da08b4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12da08b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da08b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da08bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12da08bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da08c2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12da08c5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12da08c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da08ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da08cd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12da08d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da08d3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da08d6 jb 0x12da08a4 */
  if (C.cf) goto L_12da08a4;
  /* 12da08d8 mov esp, ebp */
  ESP = (EBP);
  /* 12da08da pop ebp */
  EBP = (pop32());
  /* 12da08db ret  */
  ESPCHK(0x12da0830u, _esp0);
  ESP += 4; return;
}

/* FUN_100108e0 @ 0x12da08e0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12da08e0(void) {
  FTRACE(0x12da08e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da08e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12da08e1 mov ebp, esp */
  EBP = (ESP);
  /* 12da08e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12da08e6:;
  /* 12da08e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da08e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12da08ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12da08ee je 0x12da0d5c */
  if (C.zf) goto L_12da0d5c;
  /* 12da08f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da08f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da08fa je 0x12da0d5c */
  if (C.zf) goto L_12da0d5c;
  /* 12da0900 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12da0904 mov dword ptr [0x12dad898], 0 */
  w32((uint32_t)(0x12dad898), (0x0u));
  /* 12da090e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12da0915 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0918 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12da091b jmp 0x12da0926 */
  goto L_12da0926;
L_12da091d:;
  /* 12da091d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da0920 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0923 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12da0926:;
  /* 12da0926 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da0929 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12da092c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da092f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12da0932 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da0935 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0938 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12da093b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da093d jne 0x12da0941 */
  if (!C.zf) goto L_12da0941;
  /* 12da093f jmp 0x12da091d */
  goto L_12da091d;
L_12da0941:;
  /* 12da0941 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da0944 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0947 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12da094a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da094d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12da0950 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12da0953 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12da0956 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0959 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12da095c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0960 ja 0x12da0cb0 */
  if ((!C.cf&&!C.zf)) goto L_12da0cb0;
  /* 12da0966 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12da0969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da096b mov al, byte ptr [ecx + 0x12da0d8c] */
  AL = (r8((uint32_t)(ECX + 0x12da0d8c)));
  /* 12da0971 jmp dword ptr [eax*4 + 0x12da0d60] */
  switch (EAX) {
    case 0: goto L_12da0bcf;
    case 1: goto L_12da0ab3;
    case 2: goto L_12da0a3e;
    case 3: goto L_12da0978;
    case 4: goto L_12da09b6;
    case 5: goto L_12da0a17;
    case 6: goto L_12da0a65;
    case 7: goto L_12da0a8c;
    case 8: goto L_12da0afa;
    case 9: goto L_12da09f4;
    case 10: goto L_12da0cb0;
    default: x86_unimpl("switch@0x12da0971 out of table"); return;
  }
L_12da0978:;
  /* 12da0978 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da097b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12da097e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12da0981 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0984 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12da0987 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da098b ja 0x12da09b1 */
  if ((!C.cf&&!C.zf)) goto L_12da09b1;
  /* 12da098d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12da0990 jmp dword ptr [ecx*4 + 0x12da0ddf] */
  switch (ECX) {
    case 0: goto L_12da0997;
    case 1: goto L_12da09a1;
    case 2: goto L_12da09a7;
    case 3: goto L_12da09ad;
    case 4: goto L_12da09d5;
    case 5: goto L_12da09df;
    case 6: goto L_12da09e5;
    case 7: goto L_12da09eb;
    default: x86_unimpl("switch@0x12da0990 out of table"); return;
  }
L_12da0997:;
  /* 12da0997 mov dword ptr [0x12dad898], 1 */
  w32((uint32_t)(0x12dad898), (0x1u));
L_12da09a1:;
  /* 12da09a1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12da09a5 jmp 0x12da09b1 */
  goto L_12da09b1;
L_12da09a7:;
  /* 12da09a7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12da09ab jmp 0x12da09b1 */
  goto L_12da09b1;
L_12da09ad:;
  /* 12da09ad mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12da09b1:;
  /* 12da09b1 jmp 0x12da0cb0 */
  goto L_12da0cb0;
L_12da09b6:;
  /* 12da09b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da09b9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12da09bc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12da09bf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da09c2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12da09c5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da09c9 ja 0x12da09ef */
  if ((!C.cf&&!C.zf)) goto L_12da09ef;
  /* 12da09cb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12da09ce jmp dword ptr [ecx*4 + 0x12da0def] */
  switch (ECX) {
    case 0: goto L_12da09d5;
    case 1: goto L_12da09df;
    case 2: goto L_12da09e5;
    case 3: goto L_12da09eb;
    default: x86_unimpl("switch@0x12da09ce out of table"); return;
  }
L_12da09d5:;
  /* 12da09d5 mov dword ptr [0x12dad898], 1 */
  w32((uint32_t)(0x12dad898), (0x1u));
L_12da09df:;
  /* 12da09df mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12da09e3 jmp 0x12da09ef */
  goto L_12da09ef;
L_12da09e5:;
  /* 12da09e5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12da09e9 jmp 0x12da09ef */
  goto L_12da09ef;
L_12da09eb:;
  /* 12da09eb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12da09ef:;
  /* 12da09ef jmp 0x12da0cb0 */
  goto L_12da0cb0;
L_12da09f4:;
  /* 12da09f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da09f7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12da09fa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da09fe je 0x12da0a08 */
  if (C.zf) goto L_12da0a08;
  /* 12da0a00 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0a04 je 0x12da0a0e */
  if (C.zf) goto L_12da0a0e;
  /* 12da0a06 jmp 0x12da0a12 */
  goto L_12da0a12;
L_12da0a08:;
  /* 12da0a08 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12da0a0c jmp 0x12da0a12 */
  goto L_12da0a12;
L_12da0a0e:;
  /* 12da0a0e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12da0a12:;
  /* 12da0a12 jmp 0x12da0cb0 */
  goto L_12da0cb0;
L_12da0a17:;
  /* 12da0a17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da0a1a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12da0a1d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0a21 je 0x12da0a2b */
  if (C.zf) goto L_12da0a2b;
  /* 12da0a23 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0a27 je 0x12da0a35 */
  if (C.zf) goto L_12da0a35;
  /* 12da0a29 jmp 0x12da0a39 */
  goto L_12da0a39;
L_12da0a2b:;
  /* 12da0a2b mov dword ptr [0x12dad898], 1 */
  w32((uint32_t)(0x12dad898), (0x1u));
L_12da0a35:;
  /* 12da0a35 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12da0a39:;
  /* 12da0a39 jmp 0x12da0cb0 */
  goto L_12da0cb0;
L_12da0a3e:;
  /* 12da0a3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da0a41 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12da0a44 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0a48 je 0x12da0a52 */
  if (C.zf) goto L_12da0a52;
  /* 12da0a4a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0a4e je 0x12da0a5c */
  if (C.zf) goto L_12da0a5c;
  /* 12da0a50 jmp 0x12da0a60 */
  goto L_12da0a60;
L_12da0a52:;
  /* 12da0a52 mov dword ptr [0x12dad898], 1 */
  w32((uint32_t)(0x12dad898), (0x1u));
L_12da0a5c:;
  /* 12da0a5c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12da0a60:;
  /* 12da0a60 jmp 0x12da0cb0 */
  goto L_12da0cb0;
L_12da0a65:;
  /* 12da0a65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da0a68 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12da0a6b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0a6f je 0x12da0a79 */
  if (C.zf) goto L_12da0a79;
  /* 12da0a71 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0a75 je 0x12da0a83 */
  if (C.zf) goto L_12da0a83;
  /* 12da0a77 jmp 0x12da0a87 */
  goto L_12da0a87;
L_12da0a79:;
  /* 12da0a79 mov dword ptr [0x12dad898], 1 */
  w32((uint32_t)(0x12dad898), (0x1u));
L_12da0a83:;
  /* 12da0a83 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12da0a87:;
  /* 12da0a87 jmp 0x12da0cb0 */
  goto L_12da0cb0;
L_12da0a8c:;
  /* 12da0a8c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da0a8f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12da0a92 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0a96 je 0x12da0aa0 */
  if (C.zf) goto L_12da0aa0;
  /* 12da0a98 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0a9c je 0x12da0aaa */
  if (C.zf) goto L_12da0aaa;
  /* 12da0a9e jmp 0x12da0aae */
  goto L_12da0aae;
L_12da0aa0:;
  /* 12da0aa0 mov dword ptr [0x12dad898], 1 */
  w32((uint32_t)(0x12dad898), (0x1u));
L_12da0aaa:;
  /* 12da0aaa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12da0aae:;
  /* 12da0aae jmp 0x12da0cb0 */
  goto L_12da0cb0;
L_12da0ab3:;
  /* 12da0ab3 push 0x12daa77c */
  push32((uint32_t)(0x12daa77cu));
  /* 12da0ab8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0abb push ecx */
  push32((uint32_t)(ECX));
  /* 12da0abc call 0x12da1310 */
  push32(0x12da0ac1u); f_12da1310();
  /* 12da0ac1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0ac4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da0ac6 jne 0x12da0ad3 */
  if (!C.zf) goto L_12da0ad3;
  /* 12da0ac8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0acb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0ace mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12da0ad1 jmp 0x12da0af1 */
  goto L_12da0af1;
L_12da0ad3:;
  /* 12da0ad3 push 0x12daa778 */
  push32((uint32_t)(0x12daa778u));
  /* 12da0ad8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0adb push eax */
  push32((uint32_t)(EAX));
  /* 12da0adc call 0x12da1310 */
  push32(0x12da0ae1u); f_12da1310();
  /* 12da0ae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0ae4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da0ae6 jne 0x12da0af1 */
  if (!C.zf) goto L_12da0af1;
  /* 12da0ae8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0aeb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0aee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12da0af1:;
  /* 12da0af1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12da0af5 jmp 0x12da0cb0 */
  goto L_12da0cb0;
L_12da0afa:;
  /* 12da0afa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0afd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0b01 jg 0x12da0b11 */
  if ((!C.zf&&C.sf==C.of)) goto L_12da0b11;
  /* 12da0b03 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0b06 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12da0b0c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12da0b0f jmp 0x12da0b1d */
  goto L_12da0b1d;
L_12da0b11:;
  /* 12da0b11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0b14 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12da0b1a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12da0b1d:;
  /* 12da0b1d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0b21 jle 0x12da0bc4 */
  if ((C.zf||C.sf!=C.of)) goto L_12da0bc4;
  /* 12da0b27 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0b2a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0b2d jbe 0x12da0bc4 */
  if ((C.cf||C.zf)) goto L_12da0bc4;
  /* 12da0b33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da0b36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da0b38 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da0b3a mov ecx, dword ptr [0x12dabd58] */
  ECX = (r32((uint32_t)(0x12dabd58)));
  /* 12da0b40 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da0b42 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12da0b46 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12da0b4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da0b4e je 0x12da0b87 */
  if (C.zf) goto L_12da0b87;
  /* 12da0b50 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0b53 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0b56 jbe 0x12da0b87 */
  if ((C.cf||C.zf)) goto L_12da0b87;
  /* 12da0b58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0b5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da0b5d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da0b60 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12da0b62 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12da0b64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0b67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da0b69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0b6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0b6f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12da0b71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da0b74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0b77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12da0b7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0b7d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da0b7f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0b82 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0b85 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12da0b87:;
  /* 12da0b87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0b8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da0b8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da0b8f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da0b91 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12da0b93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0b96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da0b98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0b9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0b9e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12da0ba0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da0ba3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0ba6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12da0ba9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0bac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da0bae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0bb1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0bb4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12da0bb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da0bb9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0bbc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12da0bbf jmp 0x12da0b1d */
  goto L_12da0b1d;
L_12da0bc4:;
  /* 12da0bc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da0bc7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12da0bca jmp 0x12da08e6 */
  goto L_12da08e6;
L_12da0bcf:;
  /* 12da0bcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da0bd2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12da0bd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12da0bd7 je 0x12da0ca2 */
  if (C.zf) goto L_12da0ca2;
  /* 12da0bdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0be0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0be3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12da0be6:;
  /* 12da0be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0be9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12da0bec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12da0bee je 0x12da0ca0 */
  if (C.zf) goto L_12da0ca0;
  /* 12da0bf4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0bf7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0bfa je 0x12da0ca0 */
  if (C.zf) goto L_12da0ca0;
  /* 12da0c00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0c03 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12da0c06 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0c09 jne 0x12da0c19 */
  if (!C.zf) goto L_12da0c19;
  /* 12da0c0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0c0e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0c11 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12da0c14 jmp 0x12da0ca0 */
  goto L_12da0ca0;
L_12da0c19:;
  /* 12da0c19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0c1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da0c1e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12da0c20 mov edx, dword ptr [0x12dabd58] */
  EDX = (r32((uint32_t)(0x12dabd58)));
  /* 12da0c26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da0c28 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12da0c2c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12da0c31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da0c33 je 0x12da0c6c */
  if (C.zf) goto L_12da0c6c;
  /* 12da0c35 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0c38 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0c3b jbe 0x12da0c6c */
  if ((C.cf||C.zf)) goto L_12da0c6c;
  /* 12da0c3d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0c40 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da0c42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0c45 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12da0c47 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12da0c49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0c4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da0c4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0c51 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0c54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12da0c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0c59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0c5c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12da0c5f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0c62 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da0c64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0c67 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0c6a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12da0c6c:;
  /* 12da0c6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0c6f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da0c71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0c74 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12da0c76 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12da0c78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0c7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da0c7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0c80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0c83 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12da0c85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0c88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0c8b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12da0c8e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0c91 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da0c93 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0c96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0c99 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12da0c9b jmp 0x12da0be6 */
  goto L_12da0be6;
L_12da0ca0:;
  /* 12da0ca0 jmp 0x12da0cab */
  goto L_12da0cab;
L_12da0ca2:;
  /* 12da0ca2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0ca5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0ca8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12da0cab:;
  /* 12da0cab jmp 0x12da08e6 */
  goto L_12da08e6;
L_12da0cb0:;
  /* 12da0cb0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12da0cb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12da0cb6 je 0x12da0cdc */
  if (C.zf) goto L_12da0cdc;
  /* 12da0cb8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da0cbb push edx */
  push32((uint32_t)(EDX));
  /* 12da0cbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0cbf push eax */
  push32((uint32_t)(EAX));
  /* 12da0cc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0cc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0cc7 push edx */
  push32((uint32_t)(EDX));
  /* 12da0cc8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12da0ccb push eax */
  push32((uint32_t)(EAX));
  /* 12da0ccc call 0x12da0110 */
  push32(0x12da0cd1u); f_12da0110();
  /* 12da0cd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0cd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da0cd7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12da0cda jmp 0x12da0d57 */
  goto L_12da0d57;
L_12da0cdc:;
  /* 12da0cdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0cdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da0ce1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da0ce3 mov ecx, dword ptr [0x12dabd58] */
  ECX = (r32((uint32_t)(0x12dabd58)));
  /* 12da0ce9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da0ceb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12da0cef and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12da0cf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da0cf7 je 0x12da0d28 */
  if (C.zf) goto L_12da0d28;
  /* 12da0cf9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0cfc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da0cfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0d01 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da0d03 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12da0d05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0d08 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da0d0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0d0d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0d10 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12da0d12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0d15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0d18 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12da0d1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0d1e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da0d20 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0d23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0d26 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12da0d28:;
  /* 12da0d28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0d2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da0d2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0d30 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12da0d32 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12da0d34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0d37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da0d39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0d3c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0d3f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12da0d41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da0d44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0d47 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12da0d4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0d4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da0d4f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0d52 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0d55 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12da0d57:;
  /* 12da0d57 jmp 0x12da08e6 */
  goto L_12da08e6;
L_12da0d5c:;
  /* 12da0d5c mov esp, ebp */
  ESP = (EBP);
  /* 12da0d5e pop ebp */
  EBP = (pop32());
  /* 12da0d5f ret  */
  ESPCHK(0x12da08e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e00 @ 0x12da0e00 (650 bytes, 178 insns) */
void f_12da0e00(void) {
  FTRACE(0x12da0e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da0e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12da0e01 mov ebp, esp */
  EBP = (ESP);
  /* 12da0e03 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da0e09 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0e0d jne 0x12da0f69 */
  if (!C.zf) goto L_12da0f69;
  /* 12da0e13 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0e16 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12da0e1c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12da0e22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12da0e25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12da0e2c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12da0e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da0e38 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12da0e3e push edx */
  push32((uint32_t)(EDX));
  /* 12da0e3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da0e42 push eax */
  push32((uint32_t)(EAX));
  /* 12da0e43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0e46 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0e47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0e4a push edx */
  push32((uint32_t)(EDX));
  /* 12da0e4b call 0x12da2220 */
  push32(0x12da0e50u); f_12da2220();
  /* 12da0e50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0e53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12da0e56 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0e5a jne 0x12da0eef */
  if (!C.zf) goto L_12da0eef;
  /* 12da0e60 call dword ptr [0x12db02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02d8))), 0x12da0e66u);
  /* 12da0e66 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0e69 je 0x12da0e70 */
  if (C.zf) goto L_12da0e70;
  /* 12da0e6b jmp 0x12da0f4d */
  goto L_12da0f4d;
L_12da0e70:;
  /* 12da0e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da0e72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da0e74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da0e76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0e79 push eax */
  push32((uint32_t)(EAX));
  /* 12da0e7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0e7d push ecx */
  push32((uint32_t)(ECX));
  /* 12da0e7e call 0x12da2220 */
  push32(0x12da0e83u); f_12da2220();
  /* 12da0e83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0e86 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12da0e8c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0e93 jne 0x12da0e9a */
  if (!C.zf) goto L_12da0e9a;
  /* 12da0e95 jmp 0x12da0f4d */
  goto L_12da0f4d;
L_12da0e9a:;
  /* 12da0e9a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12da0e9c push 0x12daa784 */
  push32((uint32_t)(0x12daa784u));
  /* 12da0ea1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da0ea3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12da0ea9 push edx */
  push32((uint32_t)(EDX));
  /* 12da0eaa call 0x12d92c40 */
  push32(0x12da0eafu); f_12d92c40();
  /* 12da0eaf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0eb2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12da0eb5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0eb9 jne 0x12da0ec0 */
  if (!C.zf) goto L_12da0ec0;
  /* 12da0ebb jmp 0x12da0f4d */
  goto L_12da0f4d;
L_12da0ec0:;
  /* 12da0ec0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12da0ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da0ec9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12da0ecf push eax */
  push32((uint32_t)(EAX));
  /* 12da0ed0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da0ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0ed4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0ed7 push edx */
  push32((uint32_t)(EDX));
  /* 12da0ed8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0edb push eax */
  push32((uint32_t)(EAX));
  /* 12da0edc call 0x12da2220 */
  push32(0x12da0ee1u); f_12da2220();
  /* 12da0ee1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0ee4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12da0ee7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0eeb jne 0x12da0eef */
  if (!C.zf) goto L_12da0eef;
  /* 12da0eed jmp 0x12da0f4d */
  goto L_12da0f4d;
L_12da0eef:;
  /* 12da0eef push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12da0ef1 push 0x12daa784 */
  push32((uint32_t)(0x12daa784u));
  /* 12da0ef6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da0ef8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da0efb push ecx */
  push32((uint32_t)(ECX));
  /* 12da0efc call 0x12d92c40 */
  push32(0x12da0f01u); f_12d92c40();
  /* 12da0f01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0f04 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12da0f0a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12da0f0c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12da0f12 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0f15 jne 0x12da0f19 */
  if (!C.zf) goto L_12da0f19;
  /* 12da0f17 jmp 0x12da0f4d */
  goto L_12da0f4d;
L_12da0f19:;
  /* 12da0f19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da0f1c push ecx */
  push32((uint32_t)(ECX));
  /* 12da0f1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da0f20 push edx */
  push32((uint32_t)(EDX));
  /* 12da0f21 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12da0f27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da0f29 push ecx */
  push32((uint32_t)(ECX));
  /* 12da0f2a call 0x12d96460 */
  push32(0x12da0f2fu); f_12d96460();
  /* 12da0f2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0f32 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0f36 je 0x12da0f46 */
  if (C.zf) goto L_12da0f46;
  /* 12da0f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da0f3a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da0f3d push edx */
  push32((uint32_t)(EDX));
  /* 12da0f3e call 0x12d936d0 */
  push32(0x12da0f43u); f_12d936d0();
  /* 12da0f43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12da0f46:;
  /* 12da0f46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da0f48 jmp 0x12da1086 */
  goto L_12da1086;
L_12da0f4d:;
  /* 12da0f4d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0f51 je 0x12da0f61 */
  if (C.zf) goto L_12da0f61;
  /* 12da0f53 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da0f55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da0f58 push eax */
  push32((uint32_t)(EAX));
  /* 12da0f59 call 0x12d936d0 */
  push32(0x12da0f5eu); f_12d936d0();
  /* 12da0f5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12da0f61:;
  /* 12da0f61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da0f64 jmp 0x12da1086 */
  goto L_12da1086;
L_12da0f69:;
  /* 12da0f69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0f6d jne 0x12da1083 */
  if (!C.zf) goto L_12da1083;
  /* 12da0f73 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12da0f7d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da0f80 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12da0f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da0f88 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12da0f8e push edx */
  push32((uint32_t)(EDX));
  /* 12da0f8f push 0x12dad7b0 */
  push32((uint32_t)(0x12dad7b0u));
  /* 12da0f94 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da0f97 push eax */
  push32((uint32_t)(EAX));
  /* 12da0f98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da0f9b push ecx */
  push32((uint32_t)(ECX));
  /* 12da0f9c call 0x12da2080 */
  push32(0x12da0fa1u); f_12da2080();
  /* 12da0fa1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0fa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da0fa6 jne 0x12da0fb0 */
  if (!C.zf) goto L_12da0fb0;
  /* 12da0fa8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da0fab jmp 0x12da1086 */
  goto L_12da1086;
L_12da0fb0:;
  /* 12da0fb0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12da0fb6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12da0fb9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12da0fc3 jmp 0x12da0fd4 */
  goto L_12da0fd4;
L_12da0fc5:;
  /* 12da0fc5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12da0fcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da0fce mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12da0fd4:;
  /* 12da0fd4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0fdb jge 0x12da107f */
  if ((C.sf==C.of)) goto L_12da107f;
  /* 12da0fe1 cmp dword ptr [0x12dabf64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dabf64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da0fe8 jle 0x12da101b */
  if ((C.zf||C.sf!=C.of)) goto L_12da101b;
  /* 12da0fea push 4 */
  push32((uint32_t)(0x4u));
  /* 12da0fec mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12da0ff2 mov dl, byte ptr [ecx*2 + 0x12dad7b0] */
  DL = (r8((uint32_t)(ECX*2 + 0x12dad7b0)));
  /* 12da0ff9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12da0fff mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12da1005 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da100a push eax */
  push32((uint32_t)(EAX));
  /* 12da100b call 0x12d98c50 */
  push32(0x12da1010u); f_12d98c50();
  /* 12da1010 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1013 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12da1019 jmp 0x12da104e */
  goto L_12da104e;
L_12da101b:;
  /* 12da101b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12da1021 mov dl, byte ptr [ecx*2 + 0x12dad7b0] */
  DL = (r8((uint32_t)(ECX*2 + 0x12dad7b0)));
  /* 12da1028 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12da102e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12da1034 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da1039 mov ecx, dword ptr [0x12dabd58] */
  ECX = (r32((uint32_t)(0x12dabd58)));
  /* 12da103f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1041 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12da1045 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12da1048 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12da104e:;
  /* 12da104e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1055 je 0x12da1078 */
  if (C.zf) goto L_12da1078;
  /* 12da1057 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12da105d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12da1060 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1063 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12da106a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12da106e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12da1074 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12da1076 jmp 0x12da107a */
  goto L_12da107a;
L_12da1078:;
  /* 12da1078 jmp 0x12da107f */
  goto L_12da107f;
L_12da107a:;
  /* 12da107a jmp 0x12da0fc5 */
  goto L_12da0fc5;
L_12da107f:;
  /* 12da107f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1081 jmp 0x12da1086 */
  goto L_12da1086;
L_12da1083:;
  /* 12da1083 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12da1086:;
  /* 12da1086 mov esp, ebp */
  ESP = (EBP);
  /* 12da1088 pop ebp */
  EBP = (pop32());
  /* 12da1089 ret  */
  ESPCHK(0x12da0e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011090 @ 0x12da1090 (10 bytes, 5 insns) */
void f_12da1090(void) {
  FTRACE(0x12da1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da1090 push ebp */
  push32((uint32_t)(EBP));
  /* 12da1091 mov ebp, esp */
  EBP = (ESP);
  /* 12da1093 mov eax, dword ptr [0x12dace48] */
  EAX = (r32((uint32_t)(0x12dace48)));
  /* 12da1098 pop ebp */
  EBP = (pop32());
  /* 12da1099 ret  */
  ESPCHK(0x12da1090u, _esp0);
  ESP += 4; return;
}

/* FUN_100110a0 @ 0x12da10a0 (575 bytes, 196 insns) */
void f_12da10a0(void) {
  FTRACE(0x12da10a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da10a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12da10a1 mov ebp, esp */
  EBP = (ESP);
  /* 12da10a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12da10a5 push 0x12daa790 */
  push32((uint32_t)(0x12daa790u));
  /* 12da10aa push 0x12d9bd48 */
  push32((uint32_t)(0x12d9bd48u));
  /* 12da10af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12da10b5 push eax */
  push32((uint32_t)(EAX));
  /* 12da10b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12da10bd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da10c0 push ebx */
  push32((uint32_t)(EBX));
  /* 12da10c1 push esi */
  push32((uint32_t)(ESI));
  /* 12da10c2 push edi */
  push32((uint32_t)(EDI));
  /* 12da10c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12da10c6 cmp dword ptr [0x12dad7bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad7bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da10cd jne 0x12da111e */
  if (!C.zf) goto L_12da111e;
  /* 12da10cf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12da10d2 push eax */
  push32((uint32_t)(EAX));
  /* 12da10d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12da10d5 push 0x12da9ec0 */
  push32((uint32_t)(0x12da9ec0u));
  /* 12da10da push 1 */
  push32((uint32_t)(0x1u));
  /* 12da10dc call dword ptr [0x12db0354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0354))), 0x12da10e2u);
  /* 12da10e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da10e4 je 0x12da10f2 */
  if (C.zf) goto L_12da10f2;
  /* 12da10e6 mov dword ptr [0x12dad7bc], 1 */
  w32((uint32_t)(0x12dad7bc), (0x1u));
  /* 12da10f0 jmp 0x12da111e */
  goto L_12da111e;
L_12da10f2:;
  /* 12da10f2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12da10f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12da10f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12da10f8 push 0x12da9ebc */
  push32((uint32_t)(0x12da9ebcu));
  /* 12da10fd push 1 */
  push32((uint32_t)(0x1u));
  /* 12da10ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1101 call dword ptr [0x12db0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0350))), 0x12da1107u);
  /* 12da1107 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da1109 je 0x12da1117 */
  if (C.zf) goto L_12da1117;
  /* 12da110b mov dword ptr [0x12dad7bc], 2 */
  w32((uint32_t)(0x12dad7bc), (0x2u));
  /* 12da1115 jmp 0x12da111e */
  goto L_12da111e;
L_12da1117:;
  /* 12da1117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1119 jmp 0x12da12f9 */
  goto L_12da12f9;
L_12da111e:;
  /* 12da111e cmp dword ptr [0x12dad7bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad7bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1125 jne 0x12da1142 */
  if (!C.zf) goto L_12da1142;
  /* 12da1127 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da112a push edx */
  push32((uint32_t)(EDX));
  /* 12da112b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da112e push eax */
  push32((uint32_t)(EAX));
  /* 12da112f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da1132 push ecx */
  push32((uint32_t)(ECX));
  /* 12da1133 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1136 push edx */
  push32((uint32_t)(EDX));
  /* 12da1137 call dword ptr [0x12db0354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0354))), 0x12da113du);
  /* 12da113d jmp 0x12da12f9 */
  goto L_12da12f9;
L_12da1142:;
  /* 12da1142 cmp dword ptr [0x12dad7bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12dad7bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1149 jne 0x12da12f7 */
  if (!C.zf) goto L_12da12f7;
  /* 12da114f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1153 jne 0x12da115d */
  if (!C.zf) goto L_12da115d;
  /* 12da1155 mov eax, dword ptr [0x12dad730] */
  EAX = (r32((uint32_t)(0x12dad730)));
  /* 12da115a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12da115d:;
  /* 12da115d push 0 */
  push32((uint32_t)(0x0u));
  /* 12da115f push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1161 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1163 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1165 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da1168 push ecx */
  push32((uint32_t)(ECX));
  /* 12da1169 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da116c push edx */
  push32((uint32_t)(EDX));
  /* 12da116d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12da1172 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da1175 push eax */
  push32((uint32_t)(EAX));
  /* 12da1176 call dword ptr [0x12db0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0304))), 0x12da117cu);
  /* 12da117c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12da117f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1183 jne 0x12da118c */
  if (!C.zf) goto L_12da118c;
  /* 12da1185 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1187 jmp 0x12da12f9 */
  goto L_12da12f9;
L_12da118c:;
  /* 12da118c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12da1193 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12da1196 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1199 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12da119b call 0x12d95de0 */
  push32(0x12da11a0u); f_12d95de0();
  /* 12da11a0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12da11a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12da11a6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12da11a9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12da11ac mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12da11af push edx */
  push32((uint32_t)(EDX));
  /* 12da11b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da11b2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12da11b5 push eax */
  push32((uint32_t)(EAX));
  /* 12da11b6 call 0x12d969b0 */
  push32(0x12da11bbu); f_12d969b0();
  /* 12da11bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da11be mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12da11c5 jmp 0x12da11de */
  goto L_12da11de;
  /* 12da11c7 mov eax, 1 */
  EAX = (0x1u);
  /* 12da11cc ret  */
  ESPCHK(0x12da10a0u, _esp0);
  ESP += 4; return;
  /* 12da11cd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12da11d0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12da11d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12da11de:;
  /* 12da11de cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da11e2 jne 0x12da11eb */
  if (!C.zf) goto L_12da11eb;
  /* 12da11e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da11e6 jmp 0x12da12f9 */
  goto L_12da12f9;
L_12da11eb:;
  /* 12da11eb push 0 */
  push32((uint32_t)(0x0u));
  /* 12da11ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12da11ef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12da11f2 push ecx */
  push32((uint32_t)(ECX));
  /* 12da11f3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12da11f6 push edx */
  push32((uint32_t)(EDX));
  /* 12da11f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da11fa push eax */
  push32((uint32_t)(EAX));
  /* 12da11fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da11fe push ecx */
  push32((uint32_t)(ECX));
  /* 12da11ff push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12da1204 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da1207 push edx */
  push32((uint32_t)(EDX));
  /* 12da1208 call dword ptr [0x12db0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0304))), 0x12da120eu);
  /* 12da120e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da1210 jne 0x12da1219 */
  if (!C.zf) goto L_12da1219;
  /* 12da1212 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1214 jmp 0x12da12f9 */
  goto L_12da12f9;
L_12da1219:;
  /* 12da1219 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12da1220 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12da1223 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12da1227 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da122a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12da122c call 0x12d95de0 */
  push32(0x12da1231u); f_12d95de0();
  /* 12da1231 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12da1234 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12da1237 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12da123a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12da123d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12da1244 jmp 0x12da125d */
  goto L_12da125d;
  /* 12da1246 mov eax, 1 */
  EAX = (0x1u);
  /* 12da124b ret  */
  ESPCHK(0x12da10a0u, _esp0);
  ESP += 4; return;
  /* 12da124c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12da124f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12da1256 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12da125d:;
  /* 12da125d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1261 jne 0x12da126a */
  if (!C.zf) goto L_12da126a;
  /* 12da1263 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1265 jmp 0x12da12f9 */
  goto L_12da12f9;
L_12da126a:;
  /* 12da126a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da126e jne 0x12da1279 */
  if (!C.zf) goto L_12da1279;
  /* 12da1270 mov edx, dword ptr [0x12dad720] */
  EDX = (r32((uint32_t)(0x12dad720)));
  /* 12da1276 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12da1279:;
  /* 12da1279 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da127c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12da127f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12da1285 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da1288 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12da128b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12da1292 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12da1295 push ecx */
  push32((uint32_t)(ECX));
  /* 12da1296 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12da1299 push edx */
  push32((uint32_t)(EDX));
  /* 12da129a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12da129d push eax */
  push32((uint32_t)(EAX));
  /* 12da129e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da12a1 push ecx */
  push32((uint32_t)(ECX));
  /* 12da12a2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12da12a5 push edx */
  push32((uint32_t)(EDX));
  /* 12da12a6 call dword ptr [0x12db0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0350))), 0x12da12acu);
  /* 12da12ac mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12da12af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da12b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12da12b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da12b7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12da12bc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da12c2 je 0x12da12d8 */
  if (C.zf) goto L_12da12d8;
  /* 12da12c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da12c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12da12ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da12cc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12da12d0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da12d6 je 0x12da12dc */
  if (C.zf) goto L_12da12dc;
L_12da12d8:;
  /* 12da12d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da12da jmp 0x12da12f9 */
  goto L_12da12f9;
L_12da12dc:;
  /* 12da12dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da12df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12da12e1 push eax */
  push32((uint32_t)(EAX));
  /* 12da12e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12da12e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12da12e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da12e9 push edx */
  push32((uint32_t)(EDX));
  /* 12da12ea call 0x12d9ab30 */
  push32(0x12da12efu); f_12d9ab30();
  /* 12da12ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da12f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12da12f5 jmp 0x12da12f9 */
  goto L_12da12f9;
L_12da12f7:;
  /* 12da12f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12da12f9:;
  /* 12da12f9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12da12fc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da12ff mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12da1306 pop edi */
  EDI = (pop32());
  /* 12da1307 pop esi */
  ESI = (pop32());
  /* 12da1308 pop ebx */
  EBX = (pop32());
  /* 12da1309 mov esp, ebp */
  ESP = (EBP);
  /* 12da130b pop ebp */
  EBP = (pop32());
  /* 12da130c ret  */
  ESPCHK(0x12da10a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011310 @ 0x12da1310 (208 bytes, 85 insns) */
void f_12da1310(void) {
  FTRACE(0x12da1310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da1310 push ebp */
  push32((uint32_t)(EBP));
  /* 12da1311 mov ebp, esp */
  EBP = (ESP);
  /* 12da1313 push edi */
  push32((uint32_t)(EDI));
  /* 12da1314 push esi */
  push32((uint32_t)(ESI));
  /* 12da1315 push ebx */
  push32((uint32_t)(EBX));
  /* 12da1316 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12da1319 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12da131c lea eax, [0x12dad718] */
  EAX = ((uint32_t)(0x12dad718));
  /* 12da1322 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1326 jne 0x12da1363 */
  if (!C.zf) goto L_12da1363;
  /* 12da1328 mov al, 0xff */
  AL = (0xffu);
  /* 12da132a mov edi, edi */
  EDI = (EDI);
L_12da132c:;
  /* 12da132c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12da132e je 0x12da135e */
  if (C.zf) goto L_12da135e;
  /* 12da1330 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12da1332 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12da1333 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12da1335 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12da1336 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da1338 je 0x12da132c */
  if (C.zf) goto L_12da132c;
  /* 12da133a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12da133c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da133e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12da1340 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12da1343 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12da1345 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12da1347 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12da1349 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12da134b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da134d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12da134f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12da1352 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12da1354 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12da1356 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da1358 je 0x12da132c */
  if (C.zf) goto L_12da132c;
  /* 12da135a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12da135c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12da135e:;
  /* 12da135e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12da1361 jmp 0x12da13db */
  goto L_12da13db;
L_12da1363:;
  /* 12da1363 lock inc dword ptr [0x12dad8ac] */
  x86_unimpl("lock inc @ 0x12da1363");
  /* 12da136a cmp dword ptr [0x12dad89c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad89c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1371 jg 0x12da1377 */
  if ((!C.zf&&C.sf==C.of)) goto L_12da1377;
  /* 12da1373 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1375 jmp 0x12da138c */
  goto L_12da138c;
L_12da1377:;
  /* 12da1377 lock dec dword ptr [0x12dad8ac] */
  x86_unimpl("lock dec @ 0x12da1377");
  /* 12da137e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12da1380 call 0x12d96640 */
  push32(0x12da1385u); f_12d96640();
  /* 12da1385 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12da138c:;
  /* 12da138c mov eax, 0xff */
  EAX = (0xffu);
  /* 12da1391 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12da1393 nop  */
  /* nop */
L_12da1394:;
  /* 12da1394 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12da1396 je 0x12da13bf */
  if (C.zf) goto L_12da13bf;
  /* 12da1398 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12da139a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12da139b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12da139d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12da139e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da13a0 je 0x12da1394 */
  if (C.zf) goto L_12da1394;
  /* 12da13a2 push eax */
  push32((uint32_t)(EAX));
  /* 12da13a3 push ebx */
  push32((uint32_t)(EBX));
  /* 12da13a4 call 0x12da2480 */
  push32(0x12da13a9u); f_12da2480();
  /* 12da13a9 mov ebx, eax */
  EBX = (EAX);
  /* 12da13ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da13ae call 0x12da2480 */
  push32(0x12da13b3u); f_12da2480();
  /* 12da13b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da13b6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da13b8 je 0x12da1394 */
  if (C.zf) goto L_12da1394;
  /* 12da13ba sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da13bc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12da13bf:;
  /* 12da13bf mov ebx, eax */
  EBX = (EAX);
  /* 12da13c1 pop eax */
  EAX = (pop32());
  /* 12da13c2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da13c4 jne 0x12da13cf */
  if (!C.zf) goto L_12da13cf;
  /* 12da13c6 lock dec dword ptr [0x12dad8ac] */
  x86_unimpl("lock dec @ 0x12da13c6");
  /* 12da13cd jmp 0x12da13d9 */
  goto L_12da13d9;
L_12da13cf:;
  /* 12da13cf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12da13d1 call 0x12d966e0 */
  push32(0x12da13d6u); f_12d966e0();
  /* 12da13d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12da13d9:;
  /* 12da13d9 mov eax, ebx */
  EAX = (EBX);
L_12da13db:;
  /* 12da13db pop ebx */
  EBX = (pop32());
  /* 12da13dc pop esi */
  ESI = (pop32());
  /* 12da13dd pop edi */
  EDI = (pop32());
  /* 12da13de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12da13df ret  */
  ESPCHK(0x12da1310u, _esp0);
  ESP += 4; return;
}

/* FUN_100113e0 @ 0x12da13e0 (257 bytes, 103 insns) */
void f_12da13e0(void) {
  FTRACE(0x12da13e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da13e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12da13e1 mov ebp, esp */
  EBP = (ESP);
  /* 12da13e3 push edi */
  push32((uint32_t)(EDI));
  /* 12da13e4 push esi */
  push32((uint32_t)(ESI));
  /* 12da13e5 push ebx */
  push32((uint32_t)(EBX));
  /* 12da13e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da13e9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da13eb je 0x12da14da */
  if (C.zf) goto L_12da14da;
  /* 12da13f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12da13f4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12da13f7 lea eax, [0x12dad718] */
  EAX = ((uint32_t)(0x12dad718));
  /* 12da13fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1401 jne 0x12da1451 */
  if (!C.zf) goto L_12da1451;
  /* 12da1403 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12da1405 mov bl, 0x5a */
  BL = (0x5au);
  /* 12da1407 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12da1409 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12da140c:;
  /* 12da140c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12da140e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12da1410 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12da1412 je 0x12da1435 */
  if (C.zf) goto L_12da1435;
  /* 12da1414 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12da1416 je 0x12da1435 */
  if (C.zf) goto L_12da1435;
  /* 12da1418 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12da1419 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12da141a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da141c jb 0x12da1424 */
  if (C.cf) goto L_12da1424;
  /* 12da141e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da1420 ja 0x12da1424 */
  if ((!C.cf&&!C.zf)) goto L_12da1424;
  /* 12da1422 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12da1424:;
  /* 12da1424 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da1426 jb 0x12da142e */
  if (C.cf) goto L_12da142e;
  /* 12da1428 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da142a ja 0x12da142e */
  if ((!C.cf&&!C.zf)) goto L_12da142e;
  /* 12da142c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12da142e:;
  /* 12da142e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da1430 jne 0x12da143f */
  if (!C.zf) goto L_12da143f;
  /* 12da1432 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12da1433 jne 0x12da140c */
  if (!C.zf) goto L_12da140c;
L_12da1435:;
  /* 12da1435 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da1437 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da1439 je 0x12da14da */
  if (C.zf) goto L_12da14da;
L_12da143f:;
  /* 12da143f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12da1444 jb 0x12da14da */
  if (C.cf) goto L_12da14da;
  /* 12da144a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12da144c jmp 0x12da14da */
  goto L_12da14da;
L_12da1451:;
  /* 12da1451 lock inc dword ptr [0x12dad8ac] */
  x86_unimpl("lock inc @ 0x12da1451");
  /* 12da1458 cmp dword ptr [0x12dad89c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad89c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da145f jg 0x12da1465 */
  if ((!C.zf&&C.sf==C.of)) goto L_12da1465;
  /* 12da1461 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1463 jmp 0x12da147e */
  goto L_12da147e;
L_12da1465:;
  /* 12da1465 lock dec dword ptr [0x12dad8ac] */
  x86_unimpl("lock dec @ 0x12da1465");
  /* 12da146c mov ebx, ecx */
  EBX = (ECX);
  /* 12da146e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12da1470 call 0x12d96640 */
  push32(0x12da1475u); f_12d96640();
  /* 12da1475 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12da147c mov ecx, ebx */
  ECX = (EBX);
L_12da147e:;
  /* 12da147e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1480 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12da1482 mov edi, edi */
  EDI = (EDI);
L_12da1484:;
  /* 12da1484 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12da1486 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1488 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12da148a je 0x12da14af */
  if (C.zf) goto L_12da14af;
  /* 12da148c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12da148e je 0x12da14af */
  if (C.zf) goto L_12da14af;
  /* 12da1490 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12da1491 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12da1492 push ecx */
  push32((uint32_t)(ECX));
  /* 12da1493 push eax */
  push32((uint32_t)(EAX));
  /* 12da1494 push ebx */
  push32((uint32_t)(EBX));
  /* 12da1495 call 0x12da2480 */
  push32(0x12da149au); f_12da2480();
  /* 12da149a mov ebx, eax */
  EBX = (EAX);
  /* 12da149c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da149f call 0x12da2480 */
  push32(0x12da14a4u); f_12da2480();
  /* 12da14a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da14a7 pop ecx */
  ECX = (pop32());
  /* 12da14a8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da14aa jne 0x12da14b5 */
  if (!C.zf) goto L_12da14b5;
  /* 12da14ac dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12da14ad jne 0x12da1484 */
  if (!C.zf) goto L_12da1484;
L_12da14af:;
  /* 12da14af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da14b1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da14b3 je 0x12da14be */
  if (C.zf) goto L_12da14be;
L_12da14b5:;
  /* 12da14b5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12da14ba jb 0x12da14be */
  if (C.cf) goto L_12da14be;
  /* 12da14bc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12da14be:;
  /* 12da14be pop eax */
  EAX = (pop32());
  /* 12da14bf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da14c1 jne 0x12da14cc */
  if (!C.zf) goto L_12da14cc;
  /* 12da14c3 lock dec dword ptr [0x12dad8ac] */
  x86_unimpl("lock dec @ 0x12da14c3");
  /* 12da14ca jmp 0x12da14da */
  goto L_12da14da;
L_12da14cc:;
  /* 12da14cc mov ebx, ecx */
  EBX = (ECX);
  /* 12da14ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12da14d0 call 0x12d966e0 */
  push32(0x12da14d5u); f_12d966e0();
  /* 12da14d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da14d8 mov ecx, ebx */
  ECX = (EBX);
L_12da14da:;
  /* 12da14da mov eax, ecx */
  EAX = (ECX);
  /* 12da14dc pop ebx */
  EBX = (pop32());
  /* 12da14dd pop esi */
  ESI = (pop32());
  /* 12da14de pop edi */
  EDI = (pop32());
  /* 12da14df leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12da14e0 ret  */
  ESPCHK(0x12da13e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100114f0 @ 0x12da14f0 (255 bytes, 88 insns) */
void f_12da14f0(void) {
  FTRACE(0x12da14f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da14f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12da14f1 mov ebp, esp */
  EBP = (ESP);
  /* 12da14f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12da14f6:;
  /* 12da14f6 cmp dword ptr [0x12dabf64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dabf64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da14fd jle 0x12da1516 */
  if ((C.zf||C.sf!=C.of)) goto L_12da1516;
  /* 12da14ff push 8 */
  push32((uint32_t)(0x8u));
  /* 12da1501 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1504 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da1506 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12da1508 push ecx */
  push32((uint32_t)(ECX));
  /* 12da1509 call 0x12d98c50 */
  push32(0x12da150eu); f_12d98c50();
  /* 12da150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1511 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12da1514 jmp 0x12da152f */
  goto L_12da152f;
L_12da1516:;
  /* 12da1516 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1519 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da151b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da151d mov ecx, dword ptr [0x12dabd58] */
  ECX = (r32((uint32_t)(0x12dabd58)));
  /* 12da1523 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1525 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12da1529 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12da152c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12da152f:;
  /* 12da152f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1533 je 0x12da1540 */
  if (C.zf) goto L_12da1540;
  /* 12da1535 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1538 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da153b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12da153e jmp 0x12da14f6 */
  goto L_12da14f6;
L_12da1540:;
  /* 12da1540 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1543 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1545 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12da1547 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12da154a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da154d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1550 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12da1553 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da1556 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12da1559 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da155d je 0x12da1565 */
  if (C.zf) goto L_12da1565;
  /* 12da155f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1563 jne 0x12da1578 */
  if (!C.zf) goto L_12da1578;
L_12da1565:;
  /* 12da1565 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1568 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da156a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da156c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12da156f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1572 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1575 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12da1578:;
  /* 12da1578 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12da157f:;
  /* 12da157f cmp dword ptr [0x12dabf64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dabf64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1586 jle 0x12da159b */
  if ((C.zf||C.sf!=C.of)) goto L_12da159b;
  /* 12da1588 push 4 */
  push32((uint32_t)(0x4u));
  /* 12da158a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da158d push edx */
  push32((uint32_t)(EDX));
  /* 12da158e call 0x12d98c50 */
  push32(0x12da1593u); f_12d98c50();
  /* 12da1593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1596 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12da1599 jmp 0x12da15b0 */
  goto L_12da15b0;
L_12da159b:;
  /* 12da159b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da159e mov ecx, dword ptr [0x12dabd58] */
  ECX = (r32((uint32_t)(0x12dabd58)));
  /* 12da15a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da15a6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12da15aa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12da15ad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12da15b0:;
  /* 12da15b0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da15b4 je 0x12da15db */
  if (C.zf) goto L_12da15db;
  /* 12da15b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da15b9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da15bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da15bf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12da15c3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12da15c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da15c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da15cb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12da15cd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12da15d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da15d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da15d6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12da15d9 jmp 0x12da157f */
  goto L_12da157f;
L_12da15db:;
  /* 12da15db cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da15df jne 0x12da15e8 */
  if (!C.zf) goto L_12da15e8;
  /* 12da15e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da15e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12da15e6 jmp 0x12da15eb */
  goto L_12da15eb;
L_12da15e8:;
  /* 12da15e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12da15eb:;
  /* 12da15eb mov esp, ebp */
  ESP = (EBP);
  /* 12da15ed pop ebp */
  EBP = (pop32());
  /* 12da15ee ret  */
  ESPCHK(0x12da14f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100115f0 @ 0x12da15f0 (17 bytes, 8 insns) */
void f_12da15f0(void) {
  FTRACE(0x12da15f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da15f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12da15f1 mov ebp, esp */
  EBP = (ESP);
  /* 12da15f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da15f6 push eax */
  push32((uint32_t)(EAX));
  /* 12da15f7 call 0x12da14f0 */
  push32(0x12da15fcu); f_12da14f0();
  /* 12da15fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da15ff pop ebp */
  EBP = (pop32());
  /* 12da1600 ret  */
  ESPCHK(0x12da15f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011610 @ 0x12da1610 (297 bytes, 106 insns) */
void f_12da1610(void) {
  FTRACE(0x12da1610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da1610 push ebp */
  push32((uint32_t)(EBP));
  /* 12da1611 mov ebp, esp */
  EBP = (ESP);
  /* 12da1613 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da1616 push esi */
  push32((uint32_t)(ESI));
L_12da1617:;
  /* 12da1617 cmp dword ptr [0x12dabf64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dabf64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da161e jle 0x12da1637 */
  if ((C.zf||C.sf!=C.of)) goto L_12da1637;
  /* 12da1620 push 8 */
  push32((uint32_t)(0x8u));
  /* 12da1622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1625 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da1627 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12da1629 push ecx */
  push32((uint32_t)(ECX));
  /* 12da162a call 0x12d98c50 */
  push32(0x12da162fu); f_12d98c50();
  /* 12da162f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1632 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12da1635 jmp 0x12da1650 */
  goto L_12da1650;
L_12da1637:;
  /* 12da1637 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da163a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da163c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da163e mov ecx, dword ptr [0x12dabd58] */
  ECX = (r32((uint32_t)(0x12dabd58)));
  /* 12da1644 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1646 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12da164a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12da164d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12da1650:;
  /* 12da1650 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1654 je 0x12da1661 */
  if (C.zf) goto L_12da1661;
  /* 12da1656 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1659 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da165c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12da165f jmp 0x12da1617 */
  goto L_12da1617;
L_12da1661:;
  /* 12da1661 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1664 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1666 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12da1668 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12da166b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da166e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1671 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12da1674 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da1677 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12da167a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da167e je 0x12da1686 */
  if (C.zf) goto L_12da1686;
  /* 12da1680 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1684 jne 0x12da1699 */
  if (!C.zf) goto L_12da1699;
L_12da1686:;
  /* 12da1686 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da168b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da168d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12da1690 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1693 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1696 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12da1699:;
  /* 12da1699 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12da16a0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12da16a7:;
  /* 12da16a7 cmp dword ptr [0x12dabf64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dabf64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da16ae jle 0x12da16c3 */
  if ((C.zf||C.sf!=C.of)) goto L_12da16c3;
  /* 12da16b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12da16b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da16b5 push edx */
  push32((uint32_t)(EDX));
  /* 12da16b6 call 0x12d98c50 */
  push32(0x12da16bbu); f_12d98c50();
  /* 12da16bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da16be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12da16c1 jmp 0x12da16d8 */
  goto L_12da16d8;
L_12da16c3:;
  /* 12da16c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da16c6 mov ecx, dword ptr [0x12dabd58] */
  ECX = (r32((uint32_t)(0x12dabd58)));
  /* 12da16cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da16ce mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12da16d2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12da16d5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12da16d8:;
  /* 12da16d8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da16dc je 0x12da1719 */
  if (C.zf) goto L_12da1719;
  /* 12da16de push 0 */
  push32((uint32_t)(0x0u));
  /* 12da16e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12da16e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da16e5 push eax */
  push32((uint32_t)(EAX));
  /* 12da16e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da16e9 push ecx */
  push32((uint32_t)(ECX));
  /* 12da16ea call 0x12da25b0 */
  push32(0x12da16efu); f_12da25b0();
  /* 12da16ef mov ecx, eax */
  ECX = (EAX);
  /* 12da16f1 mov esi, edx */
  ESI = (EDX);
  /* 12da16f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da16f6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da16f9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12da16fa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da16fc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12da16fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12da1701 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12da1704 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1707 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1709 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da170b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12da170e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1711 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1714 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12da1717 jmp 0x12da16a7 */
  goto L_12da16a7;
L_12da1719:;
  /* 12da1719 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da171d jne 0x12da172e */
  if (!C.zf) goto L_12da172e;
  /* 12da171f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1722 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12da1724 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da1727 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da172a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12da172c jmp 0x12da1734 */
  goto L_12da1734;
L_12da172e:;
  /* 12da172e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1731 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12da1734:;
  /* 12da1734 pop esi */
  ESI = (pop32());
  /* 12da1735 mov esp, ebp */
  ESP = (EBP);
  /* 12da1737 pop ebp */
  EBP = (pop32());
  /* 12da1738 ret  */
  ESPCHK(0x12da1610u, _esp0);
  ESP += 4; return;
}

/* FUN_10011740 @ 0x12da1740 (61 bytes, 18 insns) */
void f_12da1740(void) {
  FTRACE(0x12da1740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da1740 push ebp */
  push32((uint32_t)(EBP));
  /* 12da1741 mov ebp, esp */
  EBP = (ESP);
  /* 12da1743 cmp dword ptr [0x12dad878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da174a jne 0x12da177b */
  if (!C.zf) goto L_12da177b;
  /* 12da174c push 0xb */
  push32((uint32_t)(0xbu));
  /* 12da174e call 0x12d96640 */
  push32(0x12da1753u); f_12d96640();
  /* 12da1753 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1756 cmp dword ptr [0x12dad878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da175d jne 0x12da1771 */
  if (!C.zf) goto L_12da1771;
  /* 12da175f call 0x12da17a0 */
  push32(0x12da1764u); f_12da17a0();
  /* 12da1764 mov eax, dword ptr [0x12dad878] */
  EAX = (r32((uint32_t)(0x12dad878)));
  /* 12da1769 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da176c mov dword ptr [0x12dad878], eax */
  w32((uint32_t)(0x12dad878), (EAX));
L_12da1771:;
  /* 12da1771 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12da1773 call 0x12d966e0 */
  push32(0x12da1778u); f_12d966e0();
  /* 12da1778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12da177b:;
  /* 12da177b pop ebp */
  EBP = (pop32());
  /* 12da177c ret  */
  ESPCHK(0x12da1740u, _esp0);
  ESP += 4; return;
}

/* FUN_10011780 @ 0x12da1780 (30 bytes, 11 insns) */
void f_12da1780(void) {
  FTRACE(0x12da1780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da1780 push ebp */
  push32((uint32_t)(EBP));
  /* 12da1781 mov ebp, esp */
  EBP = (ESP);
  /* 12da1783 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12da1785 call 0x12d96640 */
  push32(0x12da178au); f_12d96640();
  /* 12da178a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da178d call 0x12da17a0 */
  push32(0x12da1792u); f_12da17a0();
  /* 12da1792 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12da1794 call 0x12d966e0 */
  push32(0x12da1799u); f_12d966e0();
  /* 12da1799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da179c pop ebp */
  EBP = (pop32());
  /* 12da179d ret  */
  ESPCHK(0x12da1780u, _esp0);
  ESP += 4; return;
}

/* FUN_100117a0 @ 0x12da17a0 (939 bytes, 266 insns) */
void f_12da17a0(void) {
  FTRACE(0x12da17a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da17a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12da17a1 mov ebp, esp */
  EBP = (ESP);
  /* 12da17a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da17a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12da17ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 12da17af call 0x12d96640 */
  push32(0x12da17b4u); f_12d96640();
  /* 12da17b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da17b7 mov dword ptr [0x12dad7c0], 0 */
  w32((uint32_t)(0x12dad7c0), (0x0u));
  /* 12da17c1 mov dword ptr [0x12dacef8], 0xffffffff */
  w32((uint32_t)(0x12dacef8), (0xffffffffu));
  /* 12da17cb mov eax, dword ptr [0x12dacef8] */
  EAX = (r32((uint32_t)(0x12dacef8)));
  /* 12da17d0 mov dword ptr [0x12dacee8], eax */
  w32((uint32_t)(0x12dacee8), (EAX));
  /* 12da17d5 push 0x12daa7f0 */
  push32((uint32_t)(0x12daa7f0u));
  /* 12da17da call 0x12da2620 */
  push32(0x12da17dfu); f_12da2620();
  /* 12da17df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da17e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12da17e5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da17e9 jne 0x12da1923 */
  if (!C.zf) goto L_12da1923;
  /* 12da17ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 12da17f1 call 0x12d966e0 */
  push32(0x12da17f6u); f_12d966e0();
  /* 12da17f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da17f9 push 0x12dad7c8 */
  push32((uint32_t)(0x12dad7c8u));
  /* 12da17fe call dword ptr [0x12db0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0258))), 0x12da1804u);
  /* 12da1804 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1807 je 0x12da191e */
  if (C.zf) goto L_12da191e;
  /* 12da180d mov dword ptr [0x12dad7c0], 1 */
  w32((uint32_t)(0x12dad7c0), (0x1u));
  /* 12da1817 mov ecx, dword ptr [0x12dad7c8] */
  ECX = (r32((uint32_t)(0x12dad7c8)));
  /* 12da181d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1820 mov dword ptr [0x12dace50], ecx */
  w32((uint32_t)(0x12dace50), (ECX));
  /* 12da1826 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1828 mov dx, word ptr [0x12dad80e] */
  DX = (r16((uint32_t)(0x12dad80e)));
  /* 12da182f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da1831 je 0x12da1849 */
  if (C.zf) goto L_12da1849;
  /* 12da1833 mov eax, dword ptr [0x12dad81c] */
  EAX = (r32((uint32_t)(0x12dad81c)));
  /* 12da1838 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da183b mov ecx, dword ptr [0x12dace50] */
  ECX = (r32((uint32_t)(0x12dace50)));
  /* 12da1841 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1843 mov dword ptr [0x12dace50], ecx */
  w32((uint32_t)(0x12dace50), (ECX));
L_12da1849:;
  /* 12da1849 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da184b mov dx, word ptr [0x12dad862] */
  DX = (r16((uint32_t)(0x12dad862)));
  /* 12da1852 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da1854 je 0x12da187e */
  if (C.zf) goto L_12da187e;
  /* 12da1856 cmp dword ptr [0x12dad870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da185d je 0x12da187e */
  if (C.zf) goto L_12da187e;
  /* 12da185f mov dword ptr [0x12dace54], 1 */
  w32((uint32_t)(0x12dace54), (0x1u));
  /* 12da1869 mov eax, dword ptr [0x12dad870] */
  EAX = (r32((uint32_t)(0x12dad870)));
  /* 12da186e sub eax, dword ptr [0x12dad81c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dad81c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da1874 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1877 mov dword ptr [0x12dace58], eax */
  w32((uint32_t)(0x12dace58), (EAX));
  /* 12da187c jmp 0x12da1892 */
  goto L_12da1892;
L_12da187e:;
  /* 12da187e mov dword ptr [0x12dace54], 0 */
  w32((uint32_t)(0x12dace54), (0x0u));
  /* 12da1888 mov dword ptr [0x12dace58], 0 */
  w32((uint32_t)(0x12dace58), (0x0u));
L_12da1892:;
  /* 12da1892 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12da1895 push ecx */
  push32((uint32_t)(ECX));
  /* 12da1896 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1898 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12da189a mov edx, dword ptr [0x12dacedc] */
  EDX = (r32((uint32_t)(0x12dacedc)));
  /* 12da18a0 push edx */
  push32((uint32_t)(EDX));
  /* 12da18a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12da18a3 push 0x12dad7cc */
  push32((uint32_t)(0x12dad7ccu));
  /* 12da18a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12da18ad mov eax, dword ptr [0x12dad730] */
  EAX = (r32((uint32_t)(0x12dad730)));
  /* 12da18b2 push eax */
  push32((uint32_t)(EAX));
  /* 12da18b3 call dword ptr [0x12db0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0304))), 0x12da18b9u);
  /* 12da18b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da18bb je 0x12da18cf */
  if (C.zf) goto L_12da18cf;
  /* 12da18bd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da18c1 jne 0x12da18cf */
  if (!C.zf) goto L_12da18cf;
  /* 12da18c3 mov ecx, dword ptr [0x12dacedc] */
  ECX = (r32((uint32_t)(0x12dacedc)));
  /* 12da18c9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12da18cd jmp 0x12da18d8 */
  goto L_12da18d8;
L_12da18cf:;
  /* 12da18cf mov edx, dword ptr [0x12dacedc] */
  EDX = (r32((uint32_t)(0x12dacedc)));
  /* 12da18d5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12da18d8:;
  /* 12da18d8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12da18db push eax */
  push32((uint32_t)(EAX));
  /* 12da18dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12da18de push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12da18e0 mov ecx, dword ptr [0x12dacee0] */
  ECX = (r32((uint32_t)(0x12dacee0)));
  /* 12da18e6 push ecx */
  push32((uint32_t)(ECX));
  /* 12da18e7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12da18e9 push 0x12dad820 */
  push32((uint32_t)(0x12dad820u));
  /* 12da18ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12da18f3 mov edx, dword ptr [0x12dad730] */
  EDX = (r32((uint32_t)(0x12dad730)));
  /* 12da18f9 push edx */
  push32((uint32_t)(EDX));
  /* 12da18fa call dword ptr [0x12db0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0304))), 0x12da1900u);
  /* 12da1900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da1902 je 0x12da1915 */
  if (C.zf) goto L_12da1915;
  /* 12da1904 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1908 jne 0x12da1915 */
  if (!C.zf) goto L_12da1915;
  /* 12da190a mov eax, dword ptr [0x12dacee0] */
  EAX = (r32((uint32_t)(0x12dacee0)));
  /* 12da190f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12da1913 jmp 0x12da191e */
  goto L_12da191e;
L_12da1915:;
  /* 12da1915 mov ecx, dword ptr [0x12dacee0] */
  ECX = (r32((uint32_t)(0x12dacee0)));
  /* 12da191b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12da191e:;
  /* 12da191e jmp 0x12da1b47 */
  goto L_12da1b47;
L_12da1923:;
  /* 12da1923 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1926 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12da1929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da192b je 0x12da194d */
  if (C.zf) goto L_12da194d;
  /* 12da192d cmp dword ptr [0x12dad874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1934 je 0x12da195c */
  if (C.zf) goto L_12da195c;
  /* 12da1936 mov ecx, dword ptr [0x12dad874] */
  ECX = (r32((uint32_t)(0x12dad874)));
  /* 12da193c push ecx */
  push32((uint32_t)(ECX));
  /* 12da193d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1940 push edx */
  push32((uint32_t)(EDX));
  /* 12da1941 call 0x12d9e8d0 */
  push32(0x12da1946u); f_12d9e8d0();
  /* 12da1946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da194b jne 0x12da195c */
  if (!C.zf) goto L_12da195c;
L_12da194d:;
  /* 12da194d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12da194f call 0x12d966e0 */
  push32(0x12da1954u); f_12d966e0();
  /* 12da1954 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1957 jmp 0x12da1b47 */
  goto L_12da1b47;
L_12da195c:;
  /* 12da195c push 2 */
  push32((uint32_t)(0x2u));
  /* 12da195e mov eax, dword ptr [0x12dad874] */
  EAX = (r32((uint32_t)(0x12dad874)));
  /* 12da1963 push eax */
  push32((uint32_t)(EAX));
  /* 12da1964 call 0x12d936d0 */
  push32(0x12da1969u); f_12d936d0();
  /* 12da1969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da196c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12da1971 push 0x12daa7e8 */
  push32((uint32_t)(0x12daa7e8u));
  /* 12da1976 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da1978 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da197b push ecx */
  push32((uint32_t)(ECX));
  /* 12da197c call 0x12d95a70 */
  push32(0x12da1981u); f_12d95a70();
  /* 12da1981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1984 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1987 push eax */
  push32((uint32_t)(EAX));
  /* 12da1988 call 0x12d92c40 */
  push32(0x12da198du); f_12d92c40();
  /* 12da198d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1990 mov dword ptr [0x12dad874], eax */
  w32((uint32_t)(0x12dad874), (EAX));
  /* 12da1995 cmp dword ptr [0x12dad874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da199c jne 0x12da19ad */
  if (!C.zf) goto L_12da19ad;
  /* 12da199e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12da19a0 call 0x12d966e0 */
  push32(0x12da19a5u); f_12d966e0();
  /* 12da19a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da19a8 jmp 0x12da1b47 */
  goto L_12da1b47;
L_12da19ad:;
  /* 12da19ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da19b0 push edx */
  push32((uint32_t)(EDX));
  /* 12da19b1 mov eax, dword ptr [0x12dad874] */
  EAX = (r32((uint32_t)(0x12dad874)));
  /* 12da19b6 push eax */
  push32((uint32_t)(EAX));
  /* 12da19b7 call 0x12d95bf0 */
  push32(0x12da19bcu); f_12d95bf0();
  /* 12da19bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da19bf push 0xc */
  push32((uint32_t)(0xcu));
  /* 12da19c1 call 0x12d966e0 */
  push32(0x12da19c6u); f_12d966e0();
  /* 12da19c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da19c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12da19cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da19ce push ecx */
  push32((uint32_t)(ECX));
  /* 12da19cf mov edx, dword ptr [0x12dacedc] */
  EDX = (r32((uint32_t)(0x12dacedc)));
  /* 12da19d5 push edx */
  push32((uint32_t)(EDX));
  /* 12da19d6 call 0x12d96460 */
  push32(0x12da19dbu); f_12d96460();
  /* 12da19db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da19de mov eax, dword ptr [0x12dacedc] */
  EAX = (r32((uint32_t)(0x12dacedc)));
  /* 12da19e3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12da19e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da19ea add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da19ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12da19f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da19f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12da19f6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da19f9 jne 0x12da1a0d */
  if (!C.zf) goto L_12da1a0d;
  /* 12da19fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da19fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1a01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12da1a04 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1a07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1a0a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12da1a0d:;
  /* 12da1a0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1a10 push eax */
  push32((uint32_t)(EAX));
  /* 12da1a11 call 0x12da14f0 */
  push32(0x12da1a16u); f_12da14f0();
  /* 12da1a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1a19 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1a1f mov dword ptr [0x12dace50], eax */
  w32((uint32_t)(0x12dace50), (EAX));
L_12da1a24:;
  /* 12da1a24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1a27 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12da1a2a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1a2d je 0x12da1a45 */
  if (C.zf) goto L_12da1a45;
  /* 12da1a2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1a32 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12da1a35 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1a38 jl 0x12da1a50 */
  if ((C.sf!=C.of)) goto L_12da1a50;
  /* 12da1a3a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1a3d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12da1a40 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1a43 jg 0x12da1a50 */
  if ((!C.zf&&C.sf==C.of)) goto L_12da1a50;
L_12da1a45:;
  /* 12da1a45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1a48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1a4b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12da1a4e jmp 0x12da1a24 */
  goto L_12da1a24;
L_12da1a50:;
  /* 12da1a50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1a53 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12da1a56 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1a59 jne 0x12da1af5 */
  if (!C.zf) goto L_12da1af5;
  /* 12da1a5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1a62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1a65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12da1a68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1a6b push edx */
  push32((uint32_t)(EDX));
  /* 12da1a6c call 0x12da14f0 */
  push32(0x12da1a71u); f_12da14f0();
  /* 12da1a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1a74 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1a77 mov ecx, dword ptr [0x12dace50] */
  ECX = (r32((uint32_t)(0x12dace50)));
  /* 12da1a7d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1a7f mov dword ptr [0x12dace50], ecx */
  w32((uint32_t)(0x12dace50), (ECX));
L_12da1a85:;
  /* 12da1a85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1a88 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12da1a8b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1a8e jl 0x12da1aa6 */
  if ((C.sf!=C.of)) goto L_12da1aa6;
  /* 12da1a90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1a93 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12da1a96 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1a99 jg 0x12da1aa6 */
  if ((!C.zf&&C.sf==C.of)) goto L_12da1aa6;
  /* 12da1a9b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1a9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1aa1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12da1aa4 jmp 0x12da1a85 */
  goto L_12da1a85;
L_12da1aa6:;
  /* 12da1aa6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1aa9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12da1aac cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1aaf jne 0x12da1af5 */
  if (!C.zf) goto L_12da1af5;
  /* 12da1ab1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1ab4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1ab7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12da1aba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1abd push ecx */
  push32((uint32_t)(ECX));
  /* 12da1abe call 0x12da14f0 */
  push32(0x12da1ac3u); f_12da14f0();
  /* 12da1ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1ac6 mov edx, dword ptr [0x12dace50] */
  EDX = (r32((uint32_t)(0x12dace50)));
  /* 12da1acc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1ace mov dword ptr [0x12dace50], edx */
  w32((uint32_t)(0x12dace50), (EDX));
L_12da1ad4:;
  /* 12da1ad4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1ad7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12da1ada cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1add jl 0x12da1af5 */
  if ((C.sf!=C.of)) goto L_12da1af5;
  /* 12da1adf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1ae2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12da1ae5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1ae8 jg 0x12da1af5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12da1af5;
  /* 12da1aea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1aed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1af0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12da1af3 jmp 0x12da1ad4 */
  goto L_12da1ad4;
L_12da1af5:;
  /* 12da1af5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1af9 je 0x12da1b09 */
  if (C.zf) goto L_12da1b09;
  /* 12da1afb mov edx, dword ptr [0x12dace50] */
  EDX = (r32((uint32_t)(0x12dace50)));
  /* 12da1b01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12da1b03 mov dword ptr [0x12dace50], edx */
  w32((uint32_t)(0x12dace50), (EDX));
L_12da1b09:;
  /* 12da1b09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1b0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12da1b0f mov dword ptr [0x12dace54], ecx */
  w32((uint32_t)(0x12dace54), (ECX));
  /* 12da1b15 cmp dword ptr [0x12dace54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dace54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1b1c je 0x12da1b3e */
  if (C.zf) goto L_12da1b3e;
  /* 12da1b1e push 3 */
  push32((uint32_t)(0x3u));
  /* 12da1b20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1b23 push edx */
  push32((uint32_t)(EDX));
  /* 12da1b24 mov eax, dword ptr [0x12dacee0] */
  EAX = (r32((uint32_t)(0x12dacee0)));
  /* 12da1b29 push eax */
  push32((uint32_t)(EAX));
  /* 12da1b2a call 0x12d96460 */
  push32(0x12da1b2fu); f_12d96460();
  /* 12da1b2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1b32 mov ecx, dword ptr [0x12dacee0] */
  ECX = (r32((uint32_t)(0x12dacee0)));
  /* 12da1b38 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12da1b3c jmp 0x12da1b47 */
  goto L_12da1b47;
L_12da1b3e:;
  /* 12da1b3e mov edx, dword ptr [0x12dacee0] */
  EDX = (r32((uint32_t)(0x12dacee0)));
  /* 12da1b44 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12da1b47:;
  /* 12da1b47 mov esp, ebp */
  ESP = (EBP);
  /* 12da1b49 pop ebp */
  EBP = (pop32());
  /* 12da1b4a ret  */
  ESPCHK(0x12da17a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b50 @ 0x12da1b50 (46 bytes, 18 insns) */
void f_12da1b50(void) {
  FTRACE(0x12da1b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da1b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12da1b51 mov ebp, esp */
  EBP = (ESP);
  /* 12da1b53 push ecx */
  push32((uint32_t)(ECX));
  /* 12da1b54 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12da1b56 call 0x12d96640 */
  push32(0x12da1b5bu); f_12d96640();
  /* 12da1b5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1b5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1b61 push eax */
  push32((uint32_t)(EAX));
  /* 12da1b62 call 0x12da1b80 */
  push32(0x12da1b67u); f_12da1b80();
  /* 12da1b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1b6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12da1b6d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12da1b6f call 0x12d966e0 */
  push32(0x12da1b74u); f_12d966e0();
  /* 12da1b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1b77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da1b7a mov esp, ebp */
  ESP = (EBP);
  /* 12da1b7c pop ebp */
  EBP = (pop32());
  /* 12da1b7d ret  */
  ESPCHK(0x12da1b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b80 @ 0x12da1b80 (762 bytes, 246 insns) */
void f_12da1b80(void) {
  FTRACE(0x12da1b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da1b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12da1b81 mov ebp, esp */
  EBP = (ESP);
  /* 12da1b83 push ecx */
  push32((uint32_t)(ECX));
  /* 12da1b84 cmp dword ptr [0x12dace54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dace54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1b8b jne 0x12da1b94 */
  if (!C.zf) goto L_12da1b94;
  /* 12da1b8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1b8f jmp 0x12da1e76 */
  goto L_12da1e76;
L_12da1b94:;
  /* 12da1b94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1b97 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12da1b9a cmp ecx, dword ptr [0x12dacee8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12dacee8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1ba0 jne 0x12da1bb4 */
  if (!C.zf) goto L_12da1bb4;
  /* 12da1ba2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1ba5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12da1ba8 cmp eax, dword ptr [0x12dacef8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dacef8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1bae je 0x12da1d7b */
  if (C.zf) goto L_12da1d7b;
L_12da1bb4:;
  /* 12da1bb4 cmp dword ptr [0x12dad7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1bbb je 0x12da1d35 */
  if (C.zf) goto L_12da1d35;
  /* 12da1bc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da1bc3 mov cx, word ptr [0x12dad860] */
  CX = (r16((uint32_t)(0x12dad860)));
  /* 12da1bca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12da1bcc jne 0x12da1c29 */
  if (!C.zf) goto L_12da1c29;
  /* 12da1bce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1bd0 mov dx, word ptr [0x12dad86e] */
  DX = (r16((uint32_t)(0x12dad86e)));
  /* 12da1bd7 push edx */
  push32((uint32_t)(EDX));
  /* 12da1bd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1bda mov ax, word ptr [0x12dad86c] */
  AX = (r16((uint32_t)(0x12dad86c)));
  /* 12da1be0 push eax */
  push32((uint32_t)(EAX));
  /* 12da1be1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da1be3 mov cx, word ptr [0x12dad86a] */
  CX = (r16((uint32_t)(0x12dad86a)));
  /* 12da1bea push ecx */
  push32((uint32_t)(ECX));
  /* 12da1beb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1bed mov dx, word ptr [0x12dad868] */
  DX = (r16((uint32_t)(0x12dad868)));
  /* 12da1bf4 push edx */
  push32((uint32_t)(EDX));
  /* 12da1bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1bf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1bf9 mov ax, word ptr [0x12dad864] */
  AX = (r16((uint32_t)(0x12dad864)));
  /* 12da1bff push eax */
  push32((uint32_t)(EAX));
  /* 12da1c00 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da1c02 mov cx, word ptr [0x12dad866] */
  CX = (r16((uint32_t)(0x12dad866)));
  /* 12da1c09 push ecx */
  push32((uint32_t)(ECX));
  /* 12da1c0a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1c0c mov dx, word ptr [0x12dad862] */
  DX = (r16((uint32_t)(0x12dad862)));
  /* 12da1c13 push edx */
  push32((uint32_t)(EDX));
  /* 12da1c14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1c17 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12da1c1a push ecx */
  push32((uint32_t)(ECX));
  /* 12da1c1b push 1 */
  push32((uint32_t)(0x1u));
  /* 12da1c1d push 1 */
  push32((uint32_t)(0x1u));
  /* 12da1c1f call 0x12da1e80 */
  push32(0x12da1c24u); f_12da1e80();
  /* 12da1c24 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1c27 jmp 0x12da1c7a */
  goto L_12da1c7a;
L_12da1c29:;
  /* 12da1c29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1c2b mov dx, word ptr [0x12dad86e] */
  DX = (r16((uint32_t)(0x12dad86e)));
  /* 12da1c32 push edx */
  push32((uint32_t)(EDX));
  /* 12da1c33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1c35 mov ax, word ptr [0x12dad86c] */
  AX = (r16((uint32_t)(0x12dad86c)));
  /* 12da1c3b push eax */
  push32((uint32_t)(EAX));
  /* 12da1c3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da1c3e mov cx, word ptr [0x12dad86a] */
  CX = (r16((uint32_t)(0x12dad86a)));
  /* 12da1c45 push ecx */
  push32((uint32_t)(ECX));
  /* 12da1c46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1c48 mov dx, word ptr [0x12dad868] */
  DX = (r16((uint32_t)(0x12dad868)));
  /* 12da1c4f push edx */
  push32((uint32_t)(EDX));
  /* 12da1c50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1c52 mov ax, word ptr [0x12dad866] */
  AX = (r16((uint32_t)(0x12dad866)));
  /* 12da1c58 push eax */
  push32((uint32_t)(EAX));
  /* 12da1c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1c5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1c5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da1c5f mov cx, word ptr [0x12dad862] */
  CX = (r16((uint32_t)(0x12dad862)));
  /* 12da1c66 push ecx */
  push32((uint32_t)(ECX));
  /* 12da1c67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1c6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12da1c6d push eax */
  push32((uint32_t)(EAX));
  /* 12da1c6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1c70 push 1 */
  push32((uint32_t)(0x1u));
  /* 12da1c72 call 0x12da1e80 */
  push32(0x12da1c77u); f_12da1e80();
  /* 12da1c77 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12da1c7a:;
  /* 12da1c7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da1c7c mov cx, word ptr [0x12dad80c] */
  CX = (r16((uint32_t)(0x12dad80c)));
  /* 12da1c83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12da1c85 jne 0x12da1ce2 */
  if (!C.zf) goto L_12da1ce2;
  /* 12da1c87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1c89 mov dx, word ptr [0x12dad81a] */
  DX = (r16((uint32_t)(0x12dad81a)));
  /* 12da1c90 push edx */
  push32((uint32_t)(EDX));
  /* 12da1c91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1c93 mov ax, word ptr [0x12dad818] */
  AX = (r16((uint32_t)(0x12dad818)));
  /* 12da1c99 push eax */
  push32((uint32_t)(EAX));
  /* 12da1c9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da1c9c mov cx, word ptr [0x12dad816] */
  CX = (r16((uint32_t)(0x12dad816)));
  /* 12da1ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 12da1ca4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1ca6 mov dx, word ptr [0x12dad814] */
  DX = (r16((uint32_t)(0x12dad814)));
  /* 12da1cad push edx */
  push32((uint32_t)(EDX));
  /* 12da1cae push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1cb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1cb2 mov ax, word ptr [0x12dad810] */
  AX = (r16((uint32_t)(0x12dad810)));
  /* 12da1cb8 push eax */
  push32((uint32_t)(EAX));
  /* 12da1cb9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da1cbb mov cx, word ptr [0x12dad812] */
  CX = (r16((uint32_t)(0x12dad812)));
  /* 12da1cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 12da1cc3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1cc5 mov dx, word ptr [0x12dad80e] */
  DX = (r16((uint32_t)(0x12dad80e)));
  /* 12da1ccc push edx */
  push32((uint32_t)(EDX));
  /* 12da1ccd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1cd0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12da1cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12da1cd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12da1cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1cd8 call 0x12da1e80 */
  push32(0x12da1cddu); f_12da1e80();
  /* 12da1cdd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1ce0 jmp 0x12da1d33 */
  goto L_12da1d33;
L_12da1ce2:;
  /* 12da1ce2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1ce4 mov dx, word ptr [0x12dad81a] */
  DX = (r16((uint32_t)(0x12dad81a)));
  /* 12da1ceb push edx */
  push32((uint32_t)(EDX));
  /* 12da1cec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1cee mov ax, word ptr [0x12dad818] */
  AX = (r16((uint32_t)(0x12dad818)));
  /* 12da1cf4 push eax */
  push32((uint32_t)(EAX));
  /* 12da1cf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da1cf7 mov cx, word ptr [0x12dad816] */
  CX = (r16((uint32_t)(0x12dad816)));
  /* 12da1cfe push ecx */
  push32((uint32_t)(ECX));
  /* 12da1cff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da1d01 mov dx, word ptr [0x12dad814] */
  DX = (r16((uint32_t)(0x12dad814)));
  /* 12da1d08 push edx */
  push32((uint32_t)(EDX));
  /* 12da1d09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1d0b mov ax, word ptr [0x12dad812] */
  AX = (r16((uint32_t)(0x12dad812)));
  /* 12da1d11 push eax */
  push32((uint32_t)(EAX));
  /* 12da1d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da1d18 mov cx, word ptr [0x12dad80e] */
  CX = (r16((uint32_t)(0x12dad80e)));
  /* 12da1d1f push ecx */
  push32((uint32_t)(ECX));
  /* 12da1d20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1d23 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12da1d26 push eax */
  push32((uint32_t)(EAX));
  /* 12da1d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d2b call 0x12da1e80 */
  push32(0x12da1d30u); f_12da1e80();
  /* 12da1d30 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12da1d33:;
  /* 12da1d33 jmp 0x12da1d7b */
  goto L_12da1d7b;
L_12da1d35:;
  /* 12da1d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d3b push 2 */
  push32((uint32_t)(0x2u));
  /* 12da1d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d41 push 1 */
  push32((uint32_t)(0x1u));
  /* 12da1d43 push 4 */
  push32((uint32_t)(0x4u));
  /* 12da1d45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1d48 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12da1d4b push edx */
  push32((uint32_t)(EDX));
  /* 12da1d4c push 1 */
  push32((uint32_t)(0x1u));
  /* 12da1d4e push 1 */
  push32((uint32_t)(0x1u));
  /* 12da1d50 call 0x12da1e80 */
  push32(0x12da1d55u); f_12da1e80();
  /* 12da1d55 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d5e push 2 */
  push32((uint32_t)(0x2u));
  /* 12da1d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d64 push 5 */
  push32((uint32_t)(0x5u));
  /* 12da1d66 push 0xa */
  push32((uint32_t)(0xau));
  /* 12da1d68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1d6b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12da1d6e push ecx */
  push32((uint32_t)(ECX));
  /* 12da1d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 12da1d71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da1d73 call 0x12da1e80 */
  push32(0x12da1d78u); f_12da1e80();
  /* 12da1d78 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12da1d7b:;
  /* 12da1d7b mov edx, dword ptr [0x12daceec] */
  EDX = (r32((uint32_t)(0x12daceec)));
  /* 12da1d81 cmp edx, dword ptr [0x12dacefc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12dacefc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1d87 jge 0x12da1dd4 */
  if ((C.sf==C.of)) goto L_12da1dd4;
  /* 12da1d89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1d8c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12da1d8f cmp ecx, dword ptr [0x12daceec] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12daceec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1d95 jl 0x12da1da5 */
  if ((C.sf!=C.of)) goto L_12da1da5;
  /* 12da1d97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1d9a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12da1d9d cmp eax, dword ptr [0x12dacefc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dacefc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1da3 jle 0x12da1dac */
  if ((C.zf||C.sf!=C.of)) goto L_12da1dac;
L_12da1da5:;
  /* 12da1da5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1da7 jmp 0x12da1e76 */
  goto L_12da1e76;
L_12da1dac:;
  /* 12da1dac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1daf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12da1db2 cmp edx, dword ptr [0x12daceec] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12daceec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1db8 jle 0x12da1dd2 */
  if ((C.zf||C.sf!=C.of)) goto L_12da1dd2;
  /* 12da1dba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1dbd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12da1dc0 cmp ecx, dword ptr [0x12dacefc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12dacefc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1dc6 jge 0x12da1dd2 */
  if ((C.sf==C.of)) goto L_12da1dd2;
  /* 12da1dc8 mov eax, 1 */
  EAX = (0x1u);
  /* 12da1dcd jmp 0x12da1e76 */
  goto L_12da1e76;
L_12da1dd2:;
  /* 12da1dd2 jmp 0x12da1e17 */
  goto L_12da1e17;
L_12da1dd4:;
  /* 12da1dd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1dd7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12da1dda cmp eax, dword ptr [0x12dacefc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dacefc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1de0 jl 0x12da1df0 */
  if ((C.sf!=C.of)) goto L_12da1df0;
  /* 12da1de2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1de5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12da1de8 cmp edx, dword ptr [0x12daceec] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12daceec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1dee jle 0x12da1df7 */
  if ((C.zf||C.sf!=C.of)) goto L_12da1df7;
L_12da1df0:;
  /* 12da1df0 mov eax, 1 */
  EAX = (0x1u);
  /* 12da1df5 jmp 0x12da1e76 */
  goto L_12da1e76;
L_12da1df7:;
  /* 12da1df7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1dfa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12da1dfd cmp ecx, dword ptr [0x12dacefc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12dacefc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1e03 jle 0x12da1e17 */
  if ((C.zf||C.sf!=C.of)) goto L_12da1e17;
  /* 12da1e05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1e08 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12da1e0b cmp eax, dword ptr [0x12daceec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12daceec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1e11 jge 0x12da1e17 */
  if ((C.sf==C.of)) goto L_12da1e17;
  /* 12da1e13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1e15 jmp 0x12da1e76 */
  goto L_12da1e76;
L_12da1e17:;
  /* 12da1e17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1e1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12da1e1d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1e20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1e23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da1e25 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1e27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1e2a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12da1e2d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1e33 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1e35 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1e3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12da1e3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da1e41 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12da1e44 cmp edx, dword ptr [0x12daceec] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12daceec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1e4a jne 0x12da1e62 */
  if (!C.zf) goto L_12da1e62;
  /* 12da1e4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da1e4f cmp eax, dword ptr [0x12dacef0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dacef0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1e55 jl 0x12da1e5e */
  if ((C.sf!=C.of)) goto L_12da1e5e;
  /* 12da1e57 mov eax, 1 */
  EAX = (0x1u);
  /* 12da1e5c jmp 0x12da1e76 */
  goto L_12da1e76;
L_12da1e5e:;
  /* 12da1e5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da1e60 jmp 0x12da1e76 */
  goto L_12da1e76;
L_12da1e62:;
  /* 12da1e62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da1e65 cmp ecx, dword ptr [0x12dacf00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12dacf00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1e6b jge 0x12da1e74 */
  if ((C.sf==C.of)) goto L_12da1e74;
  /* 12da1e6d mov eax, 1 */
  EAX = (0x1u);
  /* 12da1e72 jmp 0x12da1e76 */
  goto L_12da1e76;
L_12da1e74:;
  /* 12da1e74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12da1e76:;
  /* 12da1e76 mov esp, ebp */
  ESP = (EBP);
  /* 12da1e78 pop ebp */
  EBP = (pop32());
  /* 12da1e79 ret  */
  ESPCHK(0x12da1b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e80 @ 0x12da1e80 (504 bytes, 145 insns) */
void f_12da1e80(void) {
  FTRACE(0x12da1e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da1e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12da1e81 mov ebp, esp */
  EBP = (ESP);
  /* 12da1e83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da1e86 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1e8a jne 0x12da1f5c */
  if (!C.zf) goto L_12da1f5c;
  /* 12da1e90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da1e93 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12da1e96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da1e98 jne 0x12da1ea9 */
  if (!C.zf) goto L_12da1ea9;
  /* 12da1e9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da1e9d mov edx, dword ptr [ecx*4 + 0x12dacf0c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12dacf0c)));
  /* 12da1ea4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12da1ea7 jmp 0x12da1eb6 */
  goto L_12da1eb6;
L_12da1ea9:;
  /* 12da1ea9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da1eac mov ecx, dword ptr [eax*4 + 0x12dacf40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12dacf40)));
  /* 12da1eb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12da1eb6:;
  /* 12da1eb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da1eb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1ebc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12da1ebf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da1ec2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da1ec5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1ecb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da1ece add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1ed0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da1ed3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da1ed6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12da1ed9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12da1edd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12da1ede mov ecx, 7 */
  ECX = (0x7u);
  /* 12da1ee3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12da1ee5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12da1ee8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da1eeb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1eee jg 0x12da1f09 */
  if ((!C.zf&&C.sf==C.of)) goto L_12da1f09;
  /* 12da1ef0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12da1ef3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da1ef6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da1ef9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da1efc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1eff add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1f02 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1f04 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12da1f07 jmp 0x12da1f1d */
  goto L_12da1f1d;
L_12da1f09:;
  /* 12da1f09 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12da1f0c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da1f0f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da1f12 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1f15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1f18 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1f1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12da1f1d:;
  /* 12da1f1d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1f21 jne 0x12da1f5a */
  if (!C.zf) goto L_12da1f5a;
  /* 12da1f23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da1f26 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12da1f29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12da1f2b jne 0x12da1f3c */
  if (!C.zf) goto L_12da1f3c;
  /* 12da1f2d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da1f30 mov eax, dword ptr [edx*4 + 0x12dacf10] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12dacf10)));
  /* 12da1f37 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12da1f3a jmp 0x12da1f49 */
  goto L_12da1f49;
L_12da1f3c:;
  /* 12da1f3c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da1f3f mov edx, dword ptr [ecx*4 + 0x12dacf44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12dacf44)));
  /* 12da1f46 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12da1f49:;
  /* 12da1f49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da1f4c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1f4f jle 0x12da1f5a */
  if ((C.zf||C.sf!=C.of)) goto L_12da1f5a;
  /* 12da1f51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da1f54 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da1f57 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12da1f5a:;
  /* 12da1f5a jmp 0x12da1f91 */
  goto L_12da1f91;
L_12da1f5c:;
  /* 12da1f5c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da1f5f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12da1f62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da1f64 jne 0x12da1f75 */
  if (!C.zf) goto L_12da1f75;
  /* 12da1f66 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da1f69 mov ecx, dword ptr [eax*4 + 0x12dacf0c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12dacf0c)));
  /* 12da1f70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12da1f73 jmp 0x12da1f82 */
  goto L_12da1f82;
L_12da1f75:;
  /* 12da1f75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da1f78 mov eax, dword ptr [edx*4 + 0x12dacf40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12dacf40)));
  /* 12da1f7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12da1f82:;
  /* 12da1f82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12da1f85 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12da1f88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da1f8b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1f8e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12da1f91:;
  /* 12da1f91 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da1f95 jne 0x12da1fd1 */
  if (!C.zf) goto L_12da1fd1;
  /* 12da1f97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da1f9a mov dword ptr [0x12daceec], eax */
  w32((uint32_t)(0x12daceec), (EAX));
  /* 12da1f9f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12da1fa2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1fa5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12da1fa8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1faa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1fad mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12da1fb0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1fb2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1fb8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12da1fbb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1fbd mov dword ptr [0x12dacef0], ecx */
  w32((uint32_t)(0x12dacef0), (ECX));
  /* 12da1fc3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da1fc6 mov dword ptr [0x12dacee8], edx */
  w32((uint32_t)(0x12dacee8), (EDX));
  /* 12da1fcc jmp 0x12da2074 */
  goto L_12da2074;
L_12da1fd1:;
  /* 12da1fd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da1fd4 mov dword ptr [0x12dacefc], eax */
  w32((uint32_t)(0x12dacefc), (EAX));
  /* 12da1fd9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12da1fdc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1fdf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12da1fe2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1fe4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1fe7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12da1fea add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1fec imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da1ff2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12da1ff5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da1ff7 mov dword ptr [0x12dacf00], ecx */
  w32((uint32_t)(0x12dacf00), (ECX));
  /* 12da1ffd mov edx, dword ptr [0x12dace58] */
  EDX = (r32((uint32_t)(0x12dace58)));
  /* 12da2003 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12da2009 mov eax, dword ptr [0x12dacf00] */
  EAX = (r32((uint32_t)(0x12dacf00)));
  /* 12da200e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2010 mov dword ptr [0x12dacf00], eax */
  w32((uint32_t)(0x12dacf00), (EAX));
  /* 12da2015 cmp dword ptr [0x12dacf00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dacf00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da201c jge 0x12da2041 */
  if ((C.sf==C.of)) goto L_12da2041;
  /* 12da201e mov ecx, dword ptr [0x12dacf00] */
  ECX = (r32((uint32_t)(0x12dacf00)));
  /* 12da2024 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da202a mov dword ptr [0x12dacf00], ecx */
  w32((uint32_t)(0x12dacf00), (ECX));
  /* 12da2030 mov edx, dword ptr [0x12dacefc] */
  EDX = (r32((uint32_t)(0x12dacefc)));
  /* 12da2036 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2039 mov dword ptr [0x12dacefc], edx */
  w32((uint32_t)(0x12dacefc), (EDX));
  /* 12da203f jmp 0x12da206b */
  goto L_12da206b;
L_12da2041:;
  /* 12da2041 cmp dword ptr [0x12dacf00], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12dacf00))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da204b jl 0x12da206b */
  if ((C.sf!=C.of)) goto L_12da206b;
  /* 12da204d mov eax, dword ptr [0x12dacf00] */
  EAX = (r32((uint32_t)(0x12dacf00)));
  /* 12da2052 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2057 mov dword ptr [0x12dacf00], eax */
  w32((uint32_t)(0x12dacf00), (EAX));
  /* 12da205c mov ecx, dword ptr [0x12dacefc] */
  ECX = (r32((uint32_t)(0x12dacefc)));
  /* 12da2062 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2065 mov dword ptr [0x12dacefc], ecx */
  w32((uint32_t)(0x12dacefc), (ECX));
L_12da206b:;
  /* 12da206b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da206e mov dword ptr [0x12dacef8], edx */
  w32((uint32_t)(0x12dacef8), (EDX));
L_12da2074:;
  /* 12da2074 mov esp, ebp */
  ESP = (EBP);
  /* 12da2076 pop ebp */
  EBP = (pop32());
  /* 12da2077 ret  */
  ESPCHK(0x12da1e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012080 @ 0x12da2080 (382 bytes, 135 insns) */
void f_12da2080(void) {
  FTRACE(0x12da2080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da2080 push ebp */
  push32((uint32_t)(EBP));
  /* 12da2081 mov ebp, esp */
  EBP = (ESP);
  /* 12da2083 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12da2085 push 0x12daa7f8 */
  push32((uint32_t)(0x12daa7f8u));
  /* 12da208a push 0x12d9bd48 */
  push32((uint32_t)(0x12d9bd48u));
  /* 12da208f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12da2095 push eax */
  push32((uint32_t)(EAX));
  /* 12da2096 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12da209d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da20a0 push ebx */
  push32((uint32_t)(EBX));
  /* 12da20a1 push esi */
  push32((uint32_t)(ESI));
  /* 12da20a2 push edi */
  push32((uint32_t)(EDI));
  /* 12da20a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12da20a6 cmp dword ptr [0x12dad87c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad87c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da20ad jne 0x12da20f2 */
  if (!C.zf) goto L_12da20f2;
  /* 12da20af push 0 */
  push32((uint32_t)(0x0u));
  /* 12da20b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da20b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12da20b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da20b7 call dword ptr [0x12db0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0254))), 0x12da20bdu);
  /* 12da20bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da20bf je 0x12da20cd */
  if (C.zf) goto L_12da20cd;
  /* 12da20c1 mov dword ptr [0x12dad87c], 1 */
  w32((uint32_t)(0x12dad87c), (0x1u));
  /* 12da20cb jmp 0x12da20f2 */
  goto L_12da20f2;
L_12da20cd:;
  /* 12da20cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12da20cf push 0 */
  push32((uint32_t)(0x0u));
  /* 12da20d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12da20d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da20d5 call dword ptr [0x12db026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db026c))), 0x12da20dbu);
  /* 12da20db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da20dd je 0x12da20eb */
  if (C.zf) goto L_12da20eb;
  /* 12da20df mov dword ptr [0x12dad87c], 2 */
  w32((uint32_t)(0x12dad87c), (0x2u));
  /* 12da20e9 jmp 0x12da20f2 */
  goto L_12da20f2;
L_12da20eb:;
  /* 12da20eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da20ed jmp 0x12da2201 */
  goto L_12da2201;
L_12da20f2:;
  /* 12da20f2 cmp dword ptr [0x12dad87c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad87c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da20f9 jne 0x12da2116 */
  if (!C.zf) goto L_12da2116;
  /* 12da20fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da20fe push eax */
  push32((uint32_t)(EAX));
  /* 12da20ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da2102 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2103 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da2106 push edx */
  push32((uint32_t)(EDX));
  /* 12da2107 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da210a push eax */
  push32((uint32_t)(EAX));
  /* 12da210b call dword ptr [0x12db0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0254))), 0x12da2111u);
  /* 12da2111 jmp 0x12da2201 */
  goto L_12da2201;
L_12da2116:;
  /* 12da2116 cmp dword ptr [0x12dad87c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12dad87c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da211d jne 0x12da21ff */
  if (!C.zf) goto L_12da21ff;
  /* 12da2123 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2127 jne 0x12da2132 */
  if (!C.zf) goto L_12da2132;
  /* 12da2129 mov ecx, dword ptr [0x12dad730] */
  ECX = (r32((uint32_t)(0x12dad730)));
  /* 12da212f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12da2132:;
  /* 12da2132 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2134 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2136 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da2139 push edx */
  push32((uint32_t)(EDX));
  /* 12da213a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da213d push eax */
  push32((uint32_t)(EAX));
  /* 12da213e call dword ptr [0x12db026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db026c))), 0x12da2144u);
  /* 12da2144 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12da2147 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da214b jne 0x12da2154 */
  if (!C.zf) goto L_12da2154;
  /* 12da214d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da214f jmp 0x12da2201 */
  goto L_12da2201;
L_12da2154:;
  /* 12da2154 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12da215b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12da215e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2161 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12da2163 call 0x12d95de0 */
  push32(0x12da2168u); f_12d95de0();
  /* 12da2168 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12da216b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12da216e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12da2171 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12da2174 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12da217b jmp 0x12da2194 */
  goto L_12da2194;
  /* 12da217d mov eax, 1 */
  EAX = (0x1u);
  /* 12da2182 ret  */
  ESPCHK(0x12da2080u, _esp0);
  ESP += 4; return;
  /* 12da2183 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12da2186 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12da218d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12da2194:;
  /* 12da2194 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2198 jne 0x12da219e */
  if (!C.zf) goto L_12da219e;
  /* 12da219a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da219c jmp 0x12da2201 */
  goto L_12da2201;
L_12da219e:;
  /* 12da219e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12da21a1 push edx */
  push32((uint32_t)(EDX));
  /* 12da21a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12da21a5 push eax */
  push32((uint32_t)(EAX));
  /* 12da21a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da21a9 push ecx */
  push32((uint32_t)(ECX));
  /* 12da21aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da21ad push edx */
  push32((uint32_t)(EDX));
  /* 12da21ae call dword ptr [0x12db026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db026c))), 0x12da21b4u);
  /* 12da21b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da21b6 jne 0x12da21bc */
  if (!C.zf) goto L_12da21bc;
  /* 12da21b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da21ba jmp 0x12da2201 */
  goto L_12da2201;
L_12da21bc:;
  /* 12da21bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da21c0 jne 0x12da21dd */
  if (!C.zf) goto L_12da21dd;
  /* 12da21c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da21c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da21c6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12da21c8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12da21cb push eax */
  push32((uint32_t)(EAX));
  /* 12da21cc push 1 */
  push32((uint32_t)(0x1u));
  /* 12da21ce mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da21d1 push ecx */
  push32((uint32_t)(ECX));
  /* 12da21d2 call dword ptr [0x12db034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db034c))), 0x12da21d8u);
  /* 12da21d8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12da21db jmp 0x12da21fa */
  goto L_12da21fa;
L_12da21dd:;
  /* 12da21dd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da21e0 push edx */
  push32((uint32_t)(EDX));
  /* 12da21e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da21e4 push eax */
  push32((uint32_t)(EAX));
  /* 12da21e5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12da21e7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12da21ea push ecx */
  push32((uint32_t)(ECX));
  /* 12da21eb push 1 */
  push32((uint32_t)(0x1u));
  /* 12da21ed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da21f0 push edx */
  push32((uint32_t)(EDX));
  /* 12da21f1 call dword ptr [0x12db034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db034c))), 0x12da21f7u);
  /* 12da21f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12da21fa:;
  /* 12da21fa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12da21fd jmp 0x12da2201 */
  goto L_12da2201;
L_12da21ff:;
  /* 12da21ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12da2201:;
  /* 12da2201 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12da2204 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da2207 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12da220e pop edi */
  EDI = (pop32());
  /* 12da220f pop esi */
  ESI = (pop32());
  /* 12da2210 pop ebx */
  EBX = (pop32());
  /* 12da2211 mov esp, ebp */
  ESP = (EBP);
  /* 12da2213 pop ebp */
  EBP = (pop32());
  /* 12da2214 ret  */
  ESPCHK(0x12da2080u, _esp0);
  ESP += 4; return;
}

/* FUN_10012220 @ 0x12da2220 (398 bytes, 140 insns) */
void f_12da2220(void) {
  FTRACE(0x12da2220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da2220 push ebp */
  push32((uint32_t)(EBP));
  /* 12da2221 mov ebp, esp */
  EBP = (ESP);
  /* 12da2223 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12da2225 push 0x12daa808 */
  push32((uint32_t)(0x12daa808u));
  /* 12da222a push 0x12d9bd48 */
  push32((uint32_t)(0x12d9bd48u));
  /* 12da222f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12da2235 push eax */
  push32((uint32_t)(EAX));
  /* 12da2236 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12da223d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2240 push ebx */
  push32((uint32_t)(EBX));
  /* 12da2241 push esi */
  push32((uint32_t)(ESI));
  /* 12da2242 push edi */
  push32((uint32_t)(EDI));
  /* 12da2243 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12da2246 cmp dword ptr [0x12dad880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da224d jne 0x12da2292 */
  if (!C.zf) goto L_12da2292;
  /* 12da224f push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2251 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2253 push 1 */
  push32((uint32_t)(0x1u));
  /* 12da2255 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2257 call dword ptr [0x12db0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0254))), 0x12da225du);
  /* 12da225d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da225f je 0x12da226d */
  if (C.zf) goto L_12da226d;
  /* 12da2261 mov dword ptr [0x12dad880], 1 */
  w32((uint32_t)(0x12dad880), (0x1u));
  /* 12da226b jmp 0x12da2292 */
  goto L_12da2292;
L_12da226d:;
  /* 12da226d push 0 */
  push32((uint32_t)(0x0u));
  /* 12da226f push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2271 push 1 */
  push32((uint32_t)(0x1u));
  /* 12da2273 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2275 call dword ptr [0x12db026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db026c))), 0x12da227bu);
  /* 12da227b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da227d je 0x12da228b */
  if (C.zf) goto L_12da228b;
  /* 12da227f mov dword ptr [0x12dad880], 2 */
  w32((uint32_t)(0x12dad880), (0x2u));
  /* 12da2289 jmp 0x12da2292 */
  goto L_12da2292;
L_12da228b:;
  /* 12da228b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da228d jmp 0x12da23b1 */
  goto L_12da23b1;
L_12da2292:;
  /* 12da2292 cmp dword ptr [0x12dad880], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12dad880))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2299 jne 0x12da22b6 */
  if (!C.zf) goto L_12da22b6;
  /* 12da229b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da229e push eax */
  push32((uint32_t)(EAX));
  /* 12da229f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da22a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12da22a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da22a6 push edx */
  push32((uint32_t)(EDX));
  /* 12da22a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da22aa push eax */
  push32((uint32_t)(EAX));
  /* 12da22ab call dword ptr [0x12db026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db026c))), 0x12da22b1u);
  /* 12da22b1 jmp 0x12da23b1 */
  goto L_12da23b1;
L_12da22b6:;
  /* 12da22b6 cmp dword ptr [0x12dad880], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad880))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da22bd jne 0x12da23af */
  if (!C.zf) goto L_12da23af;
  /* 12da22c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da22c7 jne 0x12da22d2 */
  if (!C.zf) goto L_12da22d2;
  /* 12da22c9 mov ecx, dword ptr [0x12dad730] */
  ECX = (r32((uint32_t)(0x12dad730)));
  /* 12da22cf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12da22d2:;
  /* 12da22d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da22d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da22d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da22d9 push edx */
  push32((uint32_t)(EDX));
  /* 12da22da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da22dd push eax */
  push32((uint32_t)(EAX));
  /* 12da22de call dword ptr [0x12db0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0254))), 0x12da22e4u);
  /* 12da22e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12da22e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da22eb jne 0x12da22f4 */
  if (!C.zf) goto L_12da22f4;
  /* 12da22ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da22ef jmp 0x12da23b1 */
  goto L_12da23b1;
L_12da22f4:;
  /* 12da22f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12da22fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12da22fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12da2300 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2303 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12da2305 call 0x12d95de0 */
  push32(0x12da230au); f_12d95de0();
  /* 12da230a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12da230d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12da2310 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12da2313 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12da2316 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12da231d jmp 0x12da2336 */
  goto L_12da2336;
  /* 12da231f mov eax, 1 */
  EAX = (0x1u);
  /* 12da2324 ret  */
  ESPCHK(0x12da2220u, _esp0);
  ESP += 4; return;
  /* 12da2325 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12da2328 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12da232f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12da2336:;
  /* 12da2336 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da233a jne 0x12da2340 */
  if (!C.zf) goto L_12da2340;
  /* 12da233c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da233e jmp 0x12da23b1 */
  goto L_12da23b1;
L_12da2340:;
  /* 12da2340 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12da2343 push edx */
  push32((uint32_t)(EDX));
  /* 12da2344 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12da2347 push eax */
  push32((uint32_t)(EAX));
  /* 12da2348 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da234b push ecx */
  push32((uint32_t)(ECX));
  /* 12da234c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da234f push edx */
  push32((uint32_t)(EDX));
  /* 12da2350 call dword ptr [0x12db0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0254))), 0x12da2356u);
  /* 12da2356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da2358 jne 0x12da235e */
  if (!C.zf) goto L_12da235e;
  /* 12da235a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da235c jmp 0x12da23b1 */
  goto L_12da23b1;
L_12da235e:;
  /* 12da235e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2362 jne 0x12da2386 */
  if (!C.zf) goto L_12da2386;
  /* 12da2364 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2366 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2368 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da236a push 0 */
  push32((uint32_t)(0x0u));
  /* 12da236c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12da236e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12da2371 push eax */
  push32((uint32_t)(EAX));
  /* 12da2372 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12da2377 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da237a push ecx */
  push32((uint32_t)(ECX));
  /* 12da237b call dword ptr [0x12db0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0304))), 0x12da2381u);
  /* 12da2381 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12da2384 jmp 0x12da23aa */
  goto L_12da23aa;
L_12da2386:;
  /* 12da2386 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2388 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da238a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da238d push edx */
  push32((uint32_t)(EDX));
  /* 12da238e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da2391 push eax */
  push32((uint32_t)(EAX));
  /* 12da2392 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12da2394 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12da2397 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2398 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12da239d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da23a0 push edx */
  push32((uint32_t)(EDX));
  /* 12da23a1 call dword ptr [0x12db0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0304))), 0x12da23a7u);
  /* 12da23a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12da23aa:;
  /* 12da23aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12da23ad jmp 0x12da23b1 */
  goto L_12da23b1;
L_12da23af:;
  /* 12da23af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12da23b1:;
  /* 12da23b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12da23b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da23b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12da23be pop edi */
  EDI = (pop32());
  /* 12da23bf pop esi */
  ESI = (pop32());
  /* 12da23c0 pop ebx */
  EBX = (pop32());
  /* 12da23c1 mov esp, ebp */
  ESP = (EBP);
  /* 12da23c3 pop ebp */
  EBP = (pop32());
  /* 12da23c4 ret  */
  ESPCHK(0x12da2220u, _esp0);
  ESP += 4; return;
}

/* FUN_100123d0 @ 0x12da23d0 (11 bytes, 6 insns) */
void f_12da23d0(void) {
  FTRACE(0x12da23d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da23d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12da23d1 mov ebp, esp */
  EBP = (ESP);
  /* 12da23d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da23d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da23d9 pop ebp */
  EBP = (pop32());
  /* 12da23da ret  */
  ESPCHK(0x12da23d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123e0 @ 0x12da23e0 (147 bytes, 43 insns) */
void f_12da23e0(void) {
  FTRACE(0x12da23e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da23e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12da23e1 mov ebp, esp */
  EBP = (ESP);
  /* 12da23e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12da23e4 cmp dword ptr [0x12dad720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da23eb jne 0x12da2407 */
  if (!C.zf) goto L_12da2407;
  /* 12da23ed cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da23f1 jl 0x12da2402 */
  if ((C.sf!=C.of)) goto L_12da2402;
  /* 12da23f3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da23f7 jg 0x12da2402 */
  if ((!C.zf&&C.sf==C.of)) goto L_12da2402;
  /* 12da23f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da23fc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da23ff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12da2402:;
  /* 12da2402 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2405 jmp 0x12da246f */
  goto L_12da246f;
L_12da2407:;
  /* 12da2407 push 0x12dad8ac */
  push32((uint32_t)(0x12dad8acu));
  /* 12da240c call dword ptr [0x12db02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02ac))), 0x12da2412u);
  /* 12da2412 cmp dword ptr [0x12dad89c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad89c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2419 je 0x12da2439 */
  if (C.zf) goto L_12da2439;
  /* 12da241b push 0x12dad8ac */
  push32((uint32_t)(0x12dad8acu));
  /* 12da2420 call dword ptr [0x12db029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db029c))), 0x12da2426u);
  /* 12da2426 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12da2428 call 0x12d96640 */
  push32(0x12da242du); f_12d96640();
  /* 12da242d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2430 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12da2437 jmp 0x12da2440 */
  goto L_12da2440;
L_12da2439:;
  /* 12da2439 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12da2440:;
  /* 12da2440 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2443 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2444 call 0x12da2480 */
  push32(0x12da2449u); f_12da2480();
  /* 12da2449 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da244c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12da244f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2453 je 0x12da2461 */
  if (C.zf) goto L_12da2461;
  /* 12da2455 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12da2457 call 0x12d966e0 */
  push32(0x12da245cu); f_12d966e0();
  /* 12da245c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da245f jmp 0x12da246c */
  goto L_12da246c;
L_12da2461:;
  /* 12da2461 push 0x12dad8ac */
  push32((uint32_t)(0x12dad8acu));
  /* 12da2466 call dword ptr [0x12db029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db029c))), 0x12da246cu);
L_12da246c:;
  /* 12da246c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12da246f:;
  /* 12da246f mov esp, ebp */
  ESP = (EBP);
  /* 12da2471 pop ebp */
  EBP = (pop32());
  /* 12da2472 ret  */
  ESPCHK(0x12da23e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012480 @ 0x12da2480 (299 bytes, 91 insns) */
void f_12da2480(void) {
  FTRACE(0x12da2480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da2480 push ebp */
  push32((uint32_t)(EBP));
  /* 12da2481 mov ebp, esp */
  EBP = (ESP);
  /* 12da2483 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2486 cmp dword ptr [0x12dad720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da248d jne 0x12da24ac */
  if (!C.zf) goto L_12da24ac;
  /* 12da248f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2493 jl 0x12da24a4 */
  if ((C.sf!=C.of)) goto L_12da24a4;
  /* 12da2495 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2499 jg 0x12da24a4 */
  if ((!C.zf&&C.sf==C.of)) goto L_12da24a4;
  /* 12da249b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da249e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da24a1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12da24a4:;
  /* 12da24a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da24a7 jmp 0x12da25a7 */
  goto L_12da25a7;
L_12da24ac:;
  /* 12da24ac cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da24b3 jge 0x12da24f3 */
  if ((C.sf==C.of)) goto L_12da24f3;
  /* 12da24b5 cmp dword ptr [0x12dabf64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dabf64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da24bc jle 0x12da24d1 */
  if ((C.zf||C.sf!=C.of)) goto L_12da24d1;
  /* 12da24be push 1 */
  push32((uint32_t)(0x1u));
  /* 12da24c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da24c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12da24c4 call 0x12d98c50 */
  push32(0x12da24c9u); f_12d98c50();
  /* 12da24c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da24cc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12da24cf jmp 0x12da24e5 */
  goto L_12da24e5;
L_12da24d1:;
  /* 12da24d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da24d4 mov eax, dword ptr [0x12dabd58] */
  EAX = (r32((uint32_t)(0x12dabd58)));
  /* 12da24d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da24db mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12da24df and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12da24e2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12da24e5:;
  /* 12da24e5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da24e9 jne 0x12da24f3 */
  if (!C.zf) goto L_12da24f3;
  /* 12da24eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da24ee jmp 0x12da25a7 */
  goto L_12da25a7;
L_12da24f3:;
  /* 12da24f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da24f6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12da24f9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12da24ff and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12da2505 mov eax, dword ptr [0x12dabd58] */
  EAX = (r32((uint32_t)(0x12dabd58)));
  /* 12da250a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da250c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12da2510 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12da2516 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12da2518 je 0x12da253c */
  if (C.zf) goto L_12da253c;
  /* 12da251a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da251d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12da2520 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12da2526 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12da2529 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12da252c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12da252f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12da2533 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12da253a jmp 0x12da254d */
  goto L_12da254d;
L_12da253c:;
  /* 12da253c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12da253f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12da2542 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12da2546 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12da254d:;
  /* 12da254d push 1 */
  push32((uint32_t)(0x1u));
  /* 12da254f push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2551 push 3 */
  push32((uint32_t)(0x3u));
  /* 12da2553 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12da2556 push edx */
  push32((uint32_t)(EDX));
  /* 12da2557 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da255a push eax */
  push32((uint32_t)(EAX));
  /* 12da255b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12da255e push ecx */
  push32((uint32_t)(ECX));
  /* 12da255f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12da2564 mov edx, dword ptr [0x12dad720] */
  EDX = (r32((uint32_t)(0x12dad720)));
  /* 12da256a push edx */
  push32((uint32_t)(EDX));
  /* 12da256b call 0x12d9b030 */
  push32(0x12da2570u); f_12d9b030();
  /* 12da2570 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2573 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12da2576 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da257a jne 0x12da2581 */
  if (!C.zf) goto L_12da2581;
  /* 12da257c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da257f jmp 0x12da25a7 */
  goto L_12da25a7;
L_12da2581:;
  /* 12da2581 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2585 jne 0x12da2591 */
  if (!C.zf) goto L_12da2591;
  /* 12da2587 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da258a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da258f jmp 0x12da25a7 */
  goto L_12da25a7;
L_12da2591:;
  /* 12da2591 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2594 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da2599 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12da259c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12da25a2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12da25a5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12da25a7:;
  /* 12da25a7 mov esp, ebp */
  ESP = (EBP);
  /* 12da25a9 pop ebp */
  EBP = (pop32());
  /* 12da25aa ret  */
  ESPCHK(0x12da2480u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12da25b0 (52 bytes, 19 insns) */
void f_12da25b0(void) {
  FTRACE(0x12da25b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da25b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12da25b4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12da25b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12da25ba mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12da25be jne 0x12da25c9 */
  if (!C.zf) goto L_12da25c9;
  /* 12da25c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12da25c4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12da25c6 ret 0x10 */
  ESPCHK(0x12da25b0u, _esp0);
  ESP += 20; return;
L_12da25c9:;
  /* 12da25c9 push ebx */
  push32((uint32_t)(EBX));
  /* 12da25ca mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12da25cc mov ebx, eax */
  EBX = (EAX);
  /* 12da25ce mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12da25d2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12da25d6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da25d8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12da25dc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12da25de add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da25e0 pop ebx */
  EBX = (pop32());
  /* 12da25e1 ret 0x10 */
  ESPCHK(0x12da25b0u, _esp0);
  ESP += 20; return;
}

/* FUN_100125f0 @ 0x12da25f0 (46 bytes, 18 insns) */
void f_12da25f0(void) {
  FTRACE(0x12da25f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da25f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12da25f1 mov ebp, esp */
  EBP = (ESP);
  /* 12da25f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12da25f4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12da25f6 call 0x12d96640 */
  push32(0x12da25fbu); f_12d96640();
  /* 12da25fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da25fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2601 push eax */
  push32((uint32_t)(EAX));
  /* 12da2602 call 0x12da2620 */
  push32(0x12da2607u); f_12da2620();
  /* 12da2607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da260a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12da260d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12da260f call 0x12d966e0 */
  push32(0x12da2614u); f_12d966e0();
  /* 12da2614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da261a mov esp, ebp */
  ESP = (EBP);
  /* 12da261c pop ebp */
  EBP = (pop32());
  /* 12da261d ret  */
  ESPCHK(0x12da25f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12da2620 (198 bytes, 69 insns) */
void f_12da2620(void) {
  FTRACE(0x12da2620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da2620 push ebp */
  push32((uint32_t)(EBP));
  /* 12da2621 mov ebp, esp */
  EBP = (ESP);
  /* 12da2623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2626 mov eax, dword ptr [0x12dad53c] */
  EAX = (r32((uint32_t)(0x12dad53c)));
  /* 12da262b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12da262e cmp dword ptr [0x12daf040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daf040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2635 jne 0x12da263e */
  if (!C.zf) goto L_12da263e;
  /* 12da2637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2639 jmp 0x12da26e2 */
  goto L_12da26e2;
L_12da263e:;
  /* 12da263e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2642 jne 0x12da2666 */
  if (!C.zf) goto L_12da2666;
  /* 12da2644 cmp dword ptr [0x12dad544], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad544))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da264b je 0x12da2666 */
  if (C.zf) goto L_12da2666;
  /* 12da264d call 0x12da2740 */
  push32(0x12da2652u); f_12da2740();
  /* 12da2652 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da2654 je 0x12da265d */
  if (C.zf) goto L_12da265d;
  /* 12da2656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2658 jmp 0x12da26e2 */
  goto L_12da26e2;
L_12da265d:;
  /* 12da265d mov ecx, dword ptr [0x12dad53c] */
  ECX = (r32((uint32_t)(0x12dad53c)));
  /* 12da2663 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12da2666:;
  /* 12da2666 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da266a je 0x12da26e0 */
  if (C.zf) goto L_12da26e0;
  /* 12da266c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2670 je 0x12da26e0 */
  if (C.zf) goto L_12da26e0;
  /* 12da2672 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2675 push edx */
  push32((uint32_t)(EDX));
  /* 12da2676 call 0x12d95a70 */
  push32(0x12da267bu); f_12d95a70();
  /* 12da267b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da267e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12da2681:;
  /* 12da2681 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da2684 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2687 je 0x12da26e0 */
  if (C.zf) goto L_12da26e0;
  /* 12da2689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da268c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da268e push edx */
  push32((uint32_t)(EDX));
  /* 12da268f call 0x12d95a70 */
  push32(0x12da2694u); f_12d95a70();
  /* 12da2694 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2697 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da269a jbe 0x12da26d5 */
  if ((C.cf||C.zf)) goto L_12da26d5;
  /* 12da269c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da269f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da26a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da26a4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12da26a8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da26ab jne 0x12da26d5 */
  if (!C.zf) goto L_12da26d5;
  /* 12da26ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da26b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12da26b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da26b4 push edx */
  push32((uint32_t)(EDX));
  /* 12da26b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da26b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da26ba push ecx */
  push32((uint32_t)(ECX));
  /* 12da26bb call 0x12da26f0 */
  push32(0x12da26c0u); f_12da26f0();
  /* 12da26c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da26c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da26c5 jne 0x12da26d5 */
  if (!C.zf) goto L_12da26d5;
  /* 12da26c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da26ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da26cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da26cf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12da26d3 jmp 0x12da26e2 */
  goto L_12da26e2;
L_12da26d5:;
  /* 12da26d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da26d8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da26db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12da26de jmp 0x12da2681 */
  goto L_12da2681;
L_12da26e0:;
  /* 12da26e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12da26e2:;
  /* 12da26e2 mov esp, ebp */
  ESP = (EBP);
  /* 12da26e4 pop ebp */
  EBP = (pop32());
  /* 12da26e5 ret  */
  ESPCHK(0x12da2620u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12da26f0 (79 bytes, 32 insns) */
void f_12da26f0(void) {
  FTRACE(0x12da26f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da26f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12da26f1 mov ebp, esp */
  EBP = (ESP);
  /* 12da26f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12da26f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da26f8 jne 0x12da26fe */
  if (!C.zf) goto L_12da26fe;
  /* 12da26fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da26fc jmp 0x12da273b */
  goto L_12da273b;
L_12da26fe:;
  /* 12da26fe mov eax, dword ptr [0x12daec04] */
  EAX = (r32((uint32_t)(0x12daec04)));
  /* 12da2703 push eax */
  push32((uint32_t)(EAX));
  /* 12da2704 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da2707 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2708 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da270b push edx */
  push32((uint32_t)(EDX));
  /* 12da270c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da270f push eax */
  push32((uint32_t)(EAX));
  /* 12da2710 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2713 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2714 push 1 */
  push32((uint32_t)(0x1u));
  /* 12da2716 mov edx, dword ptr [0x12daeea4] */
  EDX = (r32((uint32_t)(0x12daeea4)));
  /* 12da271c push edx */
  push32((uint32_t)(EDX));
  /* 12da271d call 0x12da27f0 */
  push32(0x12da2722u); f_12da27f0();
  /* 12da2722 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2725 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12da2728 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da272c jne 0x12da2735 */
  if (!C.zf) goto L_12da2735;
  /* 12da272e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12da2733 jmp 0x12da273b */
  goto L_12da273b;
L_12da2735:;
  /* 12da2735 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2738 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12da273b:;
  /* 12da273b mov esp, ebp */
  ESP = (EBP);
  /* 12da273d pop ebp */
  EBP = (pop32());
  /* 12da273e ret  */
  ESPCHK(0x12da26f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012740 @ 0x12da2740 (174 bytes, 66 insns) */
void f_12da2740(void) {
  FTRACE(0x12da2740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da2740 push ebp */
  push32((uint32_t)(EBP));
  /* 12da2741 mov ebp, esp */
  EBP = (ESP);
  /* 12da2743 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2746 mov eax, dword ptr [0x12dad544] */
  EAX = (r32((uint32_t)(0x12dad544)));
  /* 12da274b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12da274e:;
  /* 12da274e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2751 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2754 je 0x12da27e8 */
  if (C.zf) goto L_12da27e8;
  /* 12da275a push 0 */
  push32((uint32_t)(0x0u));
  /* 12da275c push 0 */
  push32((uint32_t)(0x0u));
  /* 12da275e push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2760 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2762 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12da2764 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2767 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da2769 push eax */
  push32((uint32_t)(EAX));
  /* 12da276a push 0 */
  push32((uint32_t)(0x0u));
  /* 12da276c push 1 */
  push32((uint32_t)(0x1u));
  /* 12da276e call dword ptr [0x12db0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0304))), 0x12da2774u);
  /* 12da2774 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12da2777 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da277b jne 0x12da2782 */
  if (!C.zf) goto L_12da2782;
  /* 12da277d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da2780 jmp 0x12da27ea */
  goto L_12da27ea;
L_12da2782:;
  /* 12da2782 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12da2784 push 0x12daa814 */
  push32((uint32_t)(0x12daa814u));
  /* 12da2789 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da278b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da278e push ecx */
  push32((uint32_t)(ECX));
  /* 12da278f call 0x12d92c40 */
  push32(0x12da2794u); f_12d92c40();
  /* 12da2794 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2797 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12da279a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da279e jne 0x12da27a5 */
  if (!C.zf) goto L_12da27a5;
  /* 12da27a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da27a3 jmp 0x12da27ea */
  goto L_12da27ea;
L_12da27a5:;
  /* 12da27a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da27a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da27a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da27ac push edx */
  push32((uint32_t)(EDX));
  /* 12da27ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da27b0 push eax */
  push32((uint32_t)(EAX));
  /* 12da27b1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12da27b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da27b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da27b8 push edx */
  push32((uint32_t)(EDX));
  /* 12da27b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da27bb push 1 */
  push32((uint32_t)(0x1u));
  /* 12da27bd call dword ptr [0x12db0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0304))), 0x12da27c3u);
  /* 12da27c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da27c5 jne 0x12da27cc */
  if (!C.zf) goto L_12da27cc;
  /* 12da27c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da27ca jmp 0x12da27ea */
  goto L_12da27ea;
L_12da27cc:;
  /* 12da27cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12da27ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da27d1 push eax */
  push32((uint32_t)(EAX));
  /* 12da27d2 call 0x12da2c40 */
  push32(0x12da27d7u); f_12da2c40();
  /* 12da27d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da27da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da27dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da27e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12da27e3 jmp 0x12da274e */
  goto L_12da274e;
L_12da27e8:;
  /* 12da27e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12da27ea:;
  /* 12da27ea mov esp, ebp */
  ESP = (EBP);
  /* 12da27ec pop ebp */
  EBP = (pop32());
  /* 12da27ed ret  */
  ESPCHK(0x12da2740u, _esp0);
  ESP += 4; return;
}

/* FUN_100127f0 @ 0x12da27f0 (970 bytes, 340 insns) */
void f_12da27f0(void) {
  FTRACE(0x12da27f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da27f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12da27f1 mov ebp, esp */
  EBP = (ESP);
  /* 12da27f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12da27f5 push 0x12daa868 */
  push32((uint32_t)(0x12daa868u));
  /* 12da27fa push 0x12d9bd48 */
  push32((uint32_t)(0x12d9bd48u));
  /* 12da27ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12da2805 push eax */
  push32((uint32_t)(EAX));
  /* 12da2806 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12da280d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2810 push ebx */
  push32((uint32_t)(EBX));
  /* 12da2811 push esi */
  push32((uint32_t)(ESI));
  /* 12da2812 push edi */
  push32((uint32_t)(EDI));
  /* 12da2813 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12da2816 cmp dword ptr [0x12dad884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da281d jne 0x12da2876 */
  if (!C.zf) goto L_12da2876;
  /* 12da281f push 1 */
  push32((uint32_t)(0x1u));
  /* 12da2821 push 0x12da9ec0 */
  push32((uint32_t)(0x12da9ec0u));
  /* 12da2826 push 1 */
  push32((uint32_t)(0x1u));
  /* 12da2828 push 0x12da9ec0 */
  push32((uint32_t)(0x12da9ec0u));
  /* 12da282d push 0 */
  push32((uint32_t)(0x0u));
  /* 12da282f push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2831 call dword ptr [0x12db024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db024c))), 0x12da2837u);
  /* 12da2837 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da2839 je 0x12da2847 */
  if (C.zf) goto L_12da2847;
  /* 12da283b mov dword ptr [0x12dad884], 1 */
  w32((uint32_t)(0x12dad884), (0x1u));
  /* 12da2845 jmp 0x12da2876 */
  goto L_12da2876;
L_12da2847:;
  /* 12da2847 push 1 */
  push32((uint32_t)(0x1u));
  /* 12da2849 push 0x12da9ebc */
  push32((uint32_t)(0x12da9ebcu));
  /* 12da284e push 1 */
  push32((uint32_t)(0x1u));
  /* 12da2850 push 0x12da9ebc */
  push32((uint32_t)(0x12da9ebcu));
  /* 12da2855 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2857 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2859 call dword ptr [0x12db0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0250))), 0x12da285fu);
  /* 12da285f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da2861 je 0x12da286f */
  if (C.zf) goto L_12da286f;
  /* 12da2863 mov dword ptr [0x12dad884], 2 */
  w32((uint32_t)(0x12dad884), (0x2u));
  /* 12da286d jmp 0x12da2876 */
  goto L_12da2876;
L_12da286f:;
  /* 12da286f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2871 jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2876:;
  /* 12da2876 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da287a jle 0x12da288f */
  if ((C.zf||C.sf!=C.of)) goto L_12da288f;
  /* 12da287c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da287f push eax */
  push32((uint32_t)(EAX));
  /* 12da2880 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da2883 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2884 call 0x12da2bf0 */
  push32(0x12da2889u); f_12da2bf0();
  /* 12da2889 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da288c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12da288f:;
  /* 12da288f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2893 jle 0x12da28a8 */
  if ((C.zf||C.sf!=C.of)) goto L_12da28a8;
  /* 12da2895 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12da2898 push edx */
  push32((uint32_t)(EDX));
  /* 12da2899 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da289c push eax */
  push32((uint32_t)(EAX));
  /* 12da289d call 0x12da2bf0 */
  push32(0x12da28a2u); f_12da2bf0();
  /* 12da28a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da28a5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12da28a8:;
  /* 12da28a8 cmp dword ptr [0x12dad884], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12dad884))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da28af jne 0x12da28d4 */
  if (!C.zf) goto L_12da28d4;
  /* 12da28b1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12da28b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12da28b5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da28b8 push edx */
  push32((uint32_t)(EDX));
  /* 12da28b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da28bc push eax */
  push32((uint32_t)(EAX));
  /* 12da28bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da28c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12da28c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da28c4 push edx */
  push32((uint32_t)(EDX));
  /* 12da28c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da28c8 push eax */
  push32((uint32_t)(EAX));
  /* 12da28c9 call dword ptr [0x12db0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0250))), 0x12da28cfu);
  /* 12da28cf jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da28d4:;
  /* 12da28d4 cmp dword ptr [0x12dad884], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad884))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da28db jne 0x12da2bd2 */
  if (!C.zf) goto L_12da2bd2;
  /* 12da28e1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da28e5 jne 0x12da28f0 */
  if (!C.zf) goto L_12da28f0;
  /* 12da28e7 mov ecx, dword ptr [0x12dad730] */
  ECX = (r32((uint32_t)(0x12dad730)));
  /* 12da28ed mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12da28f0:;
  /* 12da28f0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da28f4 je 0x12da2900 */
  if (C.zf) goto L_12da2900;
  /* 12da28f6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da28fa jne 0x12da2a7c */
  if (!C.zf) goto L_12da2a7c;
L_12da2900:;
  /* 12da2900 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da2903 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2906 jne 0x12da2912 */
  if (!C.zf) goto L_12da2912;
  /* 12da2908 mov eax, 2 */
  EAX = (0x2u);
  /* 12da290d jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2912:;
  /* 12da2912 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2916 jle 0x12da2922 */
  if ((C.zf||C.sf!=C.of)) goto L_12da2922;
  /* 12da2918 mov eax, 1 */
  EAX = (0x1u);
  /* 12da291d jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2922:;
  /* 12da2922 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2926 jle 0x12da2932 */
  if ((C.zf||C.sf!=C.of)) goto L_12da2932;
  /* 12da2928 mov eax, 3 */
  EAX = (0x3u);
  /* 12da292d jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2932:;
  /* 12da2932 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12da2935 push eax */
  push32((uint32_t)(EAX));
  /* 12da2936 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12da2939 push ecx */
  push32((uint32_t)(ECX));
  /* 12da293a call dword ptr [0x12db0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0344))), 0x12da2940u);
  /* 12da2940 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da2942 jne 0x12da294b */
  if (!C.zf) goto L_12da294b;
  /* 12da2944 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2946 jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da294b:;
  /* 12da294b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da294f jne 0x12da2957 */
  if (!C.zf) goto L_12da2957;
  /* 12da2951 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2955 je 0x12da2984 */
  if (C.zf) goto L_12da2984;
L_12da2957:;
  /* 12da2957 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da295b jne 0x12da2963 */
  if (!C.zf) goto L_12da2963;
  /* 12da295d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2961 je 0x12da2984 */
  if (C.zf) goto L_12da2984;
L_12da2963:;
  /* 12da2963 push 0x12daa828 */
  push32((uint32_t)(0x12daa828u));
  /* 12da2968 push 0 */
  push32((uint32_t)(0x0u));
  /* 12da296a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12da296f push 0x12daa820 */
  push32((uint32_t)(0x12daa820u));
  /* 12da2974 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da2976 call 0x12d91d00 */
  push32(0x12da297bu); f_12d91d00();
  /* 12da297b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da297e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2981 jne 0x12da2984 */
  if (!C.zf) goto L_12da2984;
  /* 12da2983 int3  */
  x86_unimpl("int3 @ 0x12da2983");
L_12da2984:;
  /* 12da2984 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da2986 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da2988 jne 0x12da294b */
  if (!C.zf) goto L_12da294b;
  /* 12da298a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da298e jle 0x12da2a03 */
  if ((C.zf||C.sf!=C.of)) goto L_12da2a03;
  /* 12da2990 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2994 jae 0x12da29a0 */
  if (!C.cf) goto L_12da29a0;
  /* 12da2996 mov eax, 3 */
  EAX = (0x3u);
  /* 12da299b jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da29a0:;
  /* 12da29a0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12da29a3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12da29a6 jmp 0x12da29b1 */
  goto L_12da29b1;
L_12da29a8:;
  /* 12da29a8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12da29ab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da29ae mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12da29b1:;
  /* 12da29b1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12da29b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da29b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da29b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da29ba je 0x12da29f9 */
  if (C.zf) goto L_12da29f9;
  /* 12da29bc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12da29bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da29c1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12da29c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da29c6 je 0x12da29f9 */
  if (C.zf) goto L_12da29f9;
  /* 12da29c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da29cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da29cd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12da29cf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12da29d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da29d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da29d6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da29d8 jl 0x12da29f7 */
  if ((C.sf!=C.of)) goto L_12da29f7;
  /* 12da29da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da29dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da29df mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12da29e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12da29e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da29e6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12da29e9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da29eb jg 0x12da29f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12da29f7;
  /* 12da29ed mov eax, 2 */
  EAX = (0x2u);
  /* 12da29f2 jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da29f7:;
  /* 12da29f7 jmp 0x12da29a8 */
  goto L_12da29a8;
L_12da29f9:;
  /* 12da29f9 mov eax, 3 */
  EAX = (0x3u);
  /* 12da29fe jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2a03:;
  /* 12da2a03 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2a07 jle 0x12da2a7c */
  if ((C.zf||C.sf!=C.of)) goto L_12da2a7c;
  /* 12da2a09 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2a0d jae 0x12da2a19 */
  if (!C.cf) goto L_12da2a19;
  /* 12da2a0f mov eax, 1 */
  EAX = (0x1u);
  /* 12da2a14 jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2a19:;
  /* 12da2a19 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12da2a1c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12da2a1f jmp 0x12da2a2a */
  goto L_12da2a2a;
L_12da2a21:;
  /* 12da2a21 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12da2a24 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2a27 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12da2a2a:;
  /* 12da2a2a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12da2a2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da2a2f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12da2a31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da2a33 je 0x12da2a72 */
  if (C.zf) goto L_12da2a72;
  /* 12da2a35 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12da2a38 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da2a3a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12da2a3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12da2a3f je 0x12da2a72 */
  if (C.zf) goto L_12da2a72;
  /* 12da2a41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da2a44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2a46 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12da2a48 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12da2a4b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12da2a4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12da2a4f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2a51 jl 0x12da2a70 */
  if ((C.sf!=C.of)) goto L_12da2a70;
  /* 12da2a53 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da2a56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da2a58 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12da2a5a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12da2a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2a5f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12da2a62 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2a64 jg 0x12da2a70 */
  if ((!C.zf&&C.sf==C.of)) goto L_12da2a70;
  /* 12da2a66 mov eax, 2 */
  EAX = (0x2u);
  /* 12da2a6b jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2a70:;
  /* 12da2a70 jmp 0x12da2a21 */
  goto L_12da2a21;
L_12da2a72:;
  /* 12da2a72 mov eax, 1 */
  EAX = (0x1u);
  /* 12da2a77 jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2a7c:;
  /* 12da2a7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2a7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2a80 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da2a83 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2a84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da2a87 push edx */
  push32((uint32_t)(EDX));
  /* 12da2a88 push 9 */
  push32((uint32_t)(0x9u));
  /* 12da2a8a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12da2a8d push eax */
  push32((uint32_t)(EAX));
  /* 12da2a8e call dword ptr [0x12db034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db034c))), 0x12da2a94u);
  /* 12da2a94 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12da2a97 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2a9b jne 0x12da2aa4 */
  if (!C.zf) goto L_12da2aa4;
  /* 12da2a9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2a9f jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2aa4:;
  /* 12da2aa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12da2aab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12da2aae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12da2ab0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2ab3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12da2ab5 call 0x12d95de0 */
  push32(0x12da2abau); f_12d95de0();
  /* 12da2aba mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12da2abd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12da2ac0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12da2ac3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12da2ac6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12da2acd jmp 0x12da2ae6 */
  goto L_12da2ae6;
  /* 12da2acf mov eax, 1 */
  EAX = (0x1u);
  /* 12da2ad4 ret  */
  ESPCHK(0x12da27f0u, _esp0);
  ESP += 4; return;
  /* 12da2ad5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12da2ad8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12da2adf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12da2ae6:;
  /* 12da2ae6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2aea jne 0x12da2af3 */
  if (!C.zf) goto L_12da2af3;
  /* 12da2aec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2aee jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2af3:;
  /* 12da2af3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12da2af6 push edx */
  push32((uint32_t)(EDX));
  /* 12da2af7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12da2afa push eax */
  push32((uint32_t)(EAX));
  /* 12da2afb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12da2afe push ecx */
  push32((uint32_t)(ECX));
  /* 12da2aff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12da2b02 push edx */
  push32((uint32_t)(EDX));
  /* 12da2b03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12da2b05 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12da2b08 push eax */
  push32((uint32_t)(EAX));
  /* 12da2b09 call dword ptr [0x12db034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db034c))), 0x12da2b0fu);
  /* 12da2b0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da2b11 jne 0x12da2b1a */
  if (!C.zf) goto L_12da2b1a;
  /* 12da2b13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2b15 jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2b1a:;
  /* 12da2b1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2b1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12da2b1e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12da2b21 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2b22 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da2b25 push edx */
  push32((uint32_t)(EDX));
  /* 12da2b26 push 9 */
  push32((uint32_t)(0x9u));
  /* 12da2b28 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12da2b2b push eax */
  push32((uint32_t)(EAX));
  /* 12da2b2c call dword ptr [0x12db034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db034c))), 0x12da2b32u);
  /* 12da2b32 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12da2b35 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2b39 jne 0x12da2b42 */
  if (!C.zf) goto L_12da2b42;
  /* 12da2b3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2b3d jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2b42:;
  /* 12da2b42 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12da2b49 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12da2b4c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12da2b4e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2b51 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12da2b53 call 0x12d95de0 */
  push32(0x12da2b58u); f_12d95de0();
  /* 12da2b58 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12da2b5b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12da2b5e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12da2b61 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12da2b64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12da2b6b jmp 0x12da2b84 */
  goto L_12da2b84;
  /* 12da2b6d mov eax, 1 */
  EAX = (0x1u);
  /* 12da2b72 ret  */
  ESPCHK(0x12da27f0u, _esp0);
  ESP += 4; return;
  /* 12da2b73 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12da2b76 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12da2b7d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12da2b84:;
  /* 12da2b84 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2b88 jne 0x12da2b8e */
  if (!C.zf) goto L_12da2b8e;
  /* 12da2b8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2b8c jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2b8e:;
  /* 12da2b8e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12da2b91 push edx */
  push32((uint32_t)(EDX));
  /* 12da2b92 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12da2b95 push eax */
  push32((uint32_t)(EAX));
  /* 12da2b96 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12da2b99 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2b9a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12da2b9d push edx */
  push32((uint32_t)(EDX));
  /* 12da2b9e push 1 */
  push32((uint32_t)(0x1u));
  /* 12da2ba0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12da2ba3 push eax */
  push32((uint32_t)(EAX));
  /* 12da2ba4 call dword ptr [0x12db034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db034c))), 0x12da2baau);
  /* 12da2baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da2bac jne 0x12da2bb2 */
  if (!C.zf) goto L_12da2bb2;
  /* 12da2bae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2bb0 jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2bb2:;
  /* 12da2bb2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12da2bb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2bb6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12da2bb9 push edx */
  push32((uint32_t)(EDX));
  /* 12da2bba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12da2bbd push eax */
  push32((uint32_t)(EAX));
  /* 12da2bbe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12da2bc1 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2bc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da2bc5 push edx */
  push32((uint32_t)(EDX));
  /* 12da2bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2bc9 push eax */
  push32((uint32_t)(EAX));
  /* 12da2bca call dword ptr [0x12db024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db024c))), 0x12da2bd0u);
  /* 12da2bd0 jmp 0x12da2bd4 */
  goto L_12da2bd4;
L_12da2bd2:;
  /* 12da2bd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12da2bd4:;
  /* 12da2bd4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12da2bd7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da2bda mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12da2be1 pop edi */
  EDI = (pop32());
  /* 12da2be2 pop esi */
  ESI = (pop32());
  /* 12da2be3 pop ebx */
  EBX = (pop32());
  /* 12da2be4 mov esp, ebp */
  ESP = (EBP);
  /* 12da2be6 pop ebp */
  EBP = (pop32());
  /* 12da2be7 ret  */
  ESPCHK(0x12da27f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bf0 @ 0x12da2bf0 (80 bytes, 32 insns) */
void f_12da2bf0(void) {
  FTRACE(0x12da2bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da2bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12da2bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12da2bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2bf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da2bf9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12da2bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2bff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12da2c02:;
  /* 12da2c02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da2c05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da2c08 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2c0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12da2c0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da2c10 je 0x12da2c27 */
  if (C.zf) goto L_12da2c27;
  /* 12da2c12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2c15 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12da2c18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da2c1a je 0x12da2c27 */
  if (C.zf) goto L_12da2c27;
  /* 12da2c1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2c1f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2c22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12da2c25 jmp 0x12da2c02 */
  goto L_12da2c02;
L_12da2c27:;
  /* 12da2c27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2c2a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12da2c2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da2c2f jne 0x12da2c39 */
  if (!C.zf) goto L_12da2c39;
  /* 12da2c31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2c34 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2c37 jmp 0x12da2c3c */
  goto L_12da2c3c;
L_12da2c39:;
  /* 12da2c39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12da2c3c:;
  /* 12da2c3c mov esp, ebp */
  ESP = (EBP);
  /* 12da2c3e pop ebp */
  EBP = (pop32());
  /* 12da2c3f ret  */
  ESPCHK(0x12da2bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c40 @ 0x12da2c40 (736 bytes, 224 insns) */
void f_12da2c40(void) {
  FTRACE(0x12da2c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da2c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12da2c41 mov ebp, esp */
  EBP = (ESP);
  /* 12da2c43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2c46 push esi */
  push32((uint32_t)(ESI));
  /* 12da2c47 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2c4b je 0x12da2c6c */
  if (C.zf) goto L_12da2c6c;
  /* 12da2c4d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12da2c4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2c52 push eax */
  push32((uint32_t)(EAX));
  /* 12da2c53 call 0x12da3090 */
  push32(0x12da2c58u); f_12da3090();
  /* 12da2c58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2c5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12da2c5e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2c62 je 0x12da2c6c */
  if (C.zf) goto L_12da2c6c;
  /* 12da2c64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2c67 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2c6a jne 0x12da2c74 */
  if (!C.zf) goto L_12da2c74;
L_12da2c6c:;
  /* 12da2c6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da2c6f jmp 0x12da2f1b */
  goto L_12da2f1b;
L_12da2c74:;
  /* 12da2c74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12da2c77 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12da2c7b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12da2c7d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2c7f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12da2c80 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12da2c83 mov ecx, dword ptr [0x12dad53c] */
  ECX = (r32((uint32_t)(0x12dad53c)));
  /* 12da2c89 cmp ecx, dword ptr [0x12dad540] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12dad540))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2c8f jne 0x12da2ca5 */
  if (!C.zf) goto L_12da2ca5;
  /* 12da2c91 mov edx, dword ptr [0x12dad53c] */
  EDX = (r32((uint32_t)(0x12dad53c)));
  /* 12da2c97 push edx */
  push32((uint32_t)(EDX));
  /* 12da2c98 call 0x12da2fa0 */
  push32(0x12da2c9du); f_12da2fa0();
  /* 12da2c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2ca0 mov dword ptr [0x12dad53c], eax */
  w32((uint32_t)(0x12dad53c), (EAX));
L_12da2ca5:;
  /* 12da2ca5 cmp dword ptr [0x12dad53c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad53c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2cac jne 0x12da2d65 */
  if (!C.zf) goto L_12da2d65;
  /* 12da2cb2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2cb6 je 0x12da2cd7 */
  if (C.zf) goto L_12da2cd7;
  /* 12da2cb8 cmp dword ptr [0x12dad544], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad544))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2cbf je 0x12da2cd7 */
  if (C.zf) goto L_12da2cd7;
  /* 12da2cc1 call 0x12da2740 */
  push32(0x12da2cc6u); f_12da2740();
  /* 12da2cc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da2cc8 je 0x12da2cd2 */
  if (C.zf) goto L_12da2cd2;
  /* 12da2cca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da2ccd jmp 0x12da2f1b */
  goto L_12da2f1b;
L_12da2cd2:;
  /* 12da2cd2 jmp 0x12da2d65 */
  goto L_12da2d65;
L_12da2cd7:;
  /* 12da2cd7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2cdb je 0x12da2ce4 */
  if (C.zf) goto L_12da2ce4;
  /* 12da2cdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2cdf jmp 0x12da2f1b */
  goto L_12da2f1b;
L_12da2ce4:;
  /* 12da2ce4 cmp dword ptr [0x12dad53c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad53c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2ceb jne 0x12da2d24 */
  if (!C.zf) goto L_12da2d24;
  /* 12da2ced push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12da2cf2 push 0x12daa880 */
  push32((uint32_t)(0x12daa880u));
  /* 12da2cf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da2cf9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12da2cfb call 0x12d92c40 */
  push32(0x12da2d00u); f_12d92c40();
  /* 12da2d00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2d03 mov dword ptr [0x12dad53c], eax */
  w32((uint32_t)(0x12dad53c), (EAX));
  /* 12da2d08 cmp dword ptr [0x12dad53c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad53c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2d0f jne 0x12da2d19 */
  if (!C.zf) goto L_12da2d19;
  /* 12da2d11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da2d14 jmp 0x12da2f1b */
  goto L_12da2f1b;
L_12da2d19:;
  /* 12da2d19 mov eax, dword ptr [0x12dad53c] */
  EAX = (r32((uint32_t)(0x12dad53c)));
  /* 12da2d1e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12da2d24:;
  /* 12da2d24 cmp dword ptr [0x12dad544], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad544))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2d2b jne 0x12da2d65 */
  if (!C.zf) goto L_12da2d65;
  /* 12da2d2d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12da2d32 push 0x12daa880 */
  push32((uint32_t)(0x12daa880u));
  /* 12da2d37 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da2d39 push 4 */
  push32((uint32_t)(0x4u));
  /* 12da2d3b call 0x12d92c40 */
  push32(0x12da2d40u); f_12d92c40();
  /* 12da2d40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2d43 mov dword ptr [0x12dad544], eax */
  w32((uint32_t)(0x12dad544), (EAX));
  /* 12da2d48 cmp dword ptr [0x12dad544], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad544))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2d4f jne 0x12da2d59 */
  if (!C.zf) goto L_12da2d59;
  /* 12da2d51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da2d54 jmp 0x12da2f1b */
  goto L_12da2f1b;
L_12da2d59:;
  /* 12da2d59 mov ecx, dword ptr [0x12dad544] */
  ECX = (r32((uint32_t)(0x12dad544)));
  /* 12da2d5f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12da2d65:;
  /* 12da2d65 mov edx, dword ptr [0x12dad53c] */
  EDX = (r32((uint32_t)(0x12dad53c)));
  /* 12da2d6b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12da2d6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12da2d71 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2d74 push eax */
  push32((uint32_t)(EAX));
  /* 12da2d75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2d78 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2d79 call 0x12da2f20 */
  push32(0x12da2d7eu); f_12da2f20();
  /* 12da2d7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2d81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12da2d84 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2d88 jl 0x12da2e21 */
  if ((C.sf!=C.of)) goto L_12da2e21;
  /* 12da2d8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2d91 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2d94 je 0x12da2e21 */
  if (C.zf) goto L_12da2e21;
  /* 12da2d9a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2d9e je 0x12da2e13 */
  if (C.zf) goto L_12da2e13;
  /* 12da2da0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da2da2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da2da5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2da8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12da2dab push edx */
  push32((uint32_t)(EDX));
  /* 12da2dac call 0x12d936d0 */
  push32(0x12da2db1u); f_12d936d0();
  /* 12da2db1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2db4 jmp 0x12da2dbf */
  goto L_12da2dbf;
L_12da2db6:;
  /* 12da2db6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da2db9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2dbc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12da2dbf:;
  /* 12da2dbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da2dc2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2dc5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2dc9 je 0x12da2de0 */
  if (C.zf) goto L_12da2de0;
  /* 12da2dcb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da2dce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2dd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da2dd4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2dd7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12da2ddb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12da2dde jmp 0x12da2db6 */
  goto L_12da2db6;
L_12da2de0:;
  /* 12da2de0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12da2de5 push 0x12daa880 */
  push32((uint32_t)(0x12daa880u));
  /* 12da2dea push 2 */
  push32((uint32_t)(0x2u));
  /* 12da2dec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da2def shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12da2df2 push eax */
  push32((uint32_t)(EAX));
  /* 12da2df3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2df6 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2df7 call 0x12d930d0 */
  push32(0x12da2dfcu); f_12d930d0();
  /* 12da2dfc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2dff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12da2e02 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2e06 je 0x12da2e11 */
  if (C.zf) goto L_12da2e11;
  /* 12da2e08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2e0b mov dword ptr [0x12dad53c], edx */
  w32((uint32_t)(0x12dad53c), (EDX));
L_12da2e11:;
  /* 12da2e11 jmp 0x12da2e1f */
  goto L_12da2e1f;
L_12da2e13:;
  /* 12da2e13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da2e16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2e19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2e1c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12da2e1f:;
  /* 12da2e1f jmp 0x12da2e94 */
  goto L_12da2e94;
L_12da2e21:;
  /* 12da2e21 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2e25 jne 0x12da2e8d */
  if (!C.zf) goto L_12da2e8d;
  /* 12da2e27 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2e2b jge 0x12da2e35 */
  if ((C.sf==C.of)) goto L_12da2e35;
  /* 12da2e2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da2e30 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12da2e32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12da2e35:;
  /* 12da2e35 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12da2e3a push 0x12daa880 */
  push32((uint32_t)(0x12daa880u));
  /* 12da2e3f push 2 */
  push32((uint32_t)(0x2u));
  /* 12da2e41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da2e44 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12da2e4b push edx */
  push32((uint32_t)(EDX));
  /* 12da2e4c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2e4f push eax */
  push32((uint32_t)(EAX));
  /* 12da2e50 call 0x12d930d0 */
  push32(0x12da2e55u); f_12d930d0();
  /* 12da2e55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2e58 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12da2e5b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2e5f jne 0x12da2e69 */
  if (!C.zf) goto L_12da2e69;
  /* 12da2e61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da2e64 jmp 0x12da2f1b */
  goto L_12da2f1b;
L_12da2e69:;
  /* 12da2e69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da2e6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2e6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2e72 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12da2e75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da2e78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2e7b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12da2e83 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2e86 mov dword ptr [0x12dad53c], eax */
  w32((uint32_t)(0x12dad53c), (EAX));
  /* 12da2e8b jmp 0x12da2e94 */
  goto L_12da2e94;
L_12da2e8d:;
  /* 12da2e8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2e8f jmp 0x12da2f1b */
  goto L_12da2f1b;
L_12da2e94:;
  /* 12da2e94 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2e98 je 0x12da2f19 */
  if (C.zf) goto L_12da2f19;
  /* 12da2e9a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12da2e9f push 0x12daa880 */
  push32((uint32_t)(0x12daa880u));
  /* 12da2ea4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da2ea6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2eaa call 0x12d95a70 */
  push32(0x12da2eafu); f_12d95a70();
  /* 12da2eaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2eb2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2eb5 push eax */
  push32((uint32_t)(EAX));
  /* 12da2eb6 call 0x12d92c40 */
  push32(0x12da2ebbu); f_12d92c40();
  /* 12da2ebb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2ebe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12da2ec1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2ec5 je 0x12da2f19 */
  if (C.zf) goto L_12da2f19;
  /* 12da2ec7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2eca push edx */
  push32((uint32_t)(EDX));
  /* 12da2ecb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da2ece push eax */
  push32((uint32_t)(EAX));
  /* 12da2ecf call 0x12d95bf0 */
  push32(0x12da2ed4u); f_12d95bf0();
  /* 12da2ed4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2ed7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12da2eda sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2edd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da2ee0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2ee2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12da2ee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2ee8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12da2eeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2eee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2ef1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12da2ef4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12da2ef7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12da2ef9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2efb not edx */
  EDX = (~(EDX));
  /* 12da2efd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12da2f00 push edx */
  push32((uint32_t)(EDX));
  /* 12da2f01 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da2f04 push eax */
  push32((uint32_t)(EAX));
  /* 12da2f05 call dword ptr [0x12db0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0248))), 0x12da2f0bu);
  /* 12da2f0b push 2 */
  push32((uint32_t)(0x2u));
  /* 12da2f0d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da2f10 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2f11 call 0x12d936d0 */
  push32(0x12da2f16u); f_12d936d0();
  /* 12da2f16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12da2f19:;
  /* 12da2f19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12da2f1b:;
  /* 12da2f1b pop esi */
  ESI = (pop32());
  /* 12da2f1c mov esp, ebp */
  ESP = (EBP);
  /* 12da2f1e pop ebp */
  EBP = (pop32());
  /* 12da2f1f ret  */
  ESPCHK(0x12da2c40u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12da2f20 (124 bytes, 47 insns) */
void f_12da2f20(void) {
  FTRACE(0x12da2f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da2f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12da2f21 mov ebp, esp */
  EBP = (ESP);
  /* 12da2f23 push ecx */
  push32((uint32_t)(ECX));
  /* 12da2f24 mov eax, dword ptr [0x12dad53c] */
  EAX = (r32((uint32_t)(0x12dad53c)));
  /* 12da2f29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12da2f2c jmp 0x12da2f37 */
  goto L_12da2f37;
L_12da2f2e:;
  /* 12da2f2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2f31 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2f34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12da2f37:;
  /* 12da2f37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2f3a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2f3d je 0x12da2f8a */
  if (C.zf) goto L_12da2f8a;
  /* 12da2f3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da2f42 push eax */
  push32((uint32_t)(EAX));
  /* 12da2f43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2f46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da2f48 push edx */
  push32((uint32_t)(EDX));
  /* 12da2f49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2f4c push eax */
  push32((uint32_t)(EAX));
  /* 12da2f4d call 0x12da26f0 */
  push32(0x12da2f52u); f_12da26f0();
  /* 12da2f52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2f55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12da2f57 jne 0x12da2f88 */
  if (!C.zf) goto L_12da2f88;
  /* 12da2f59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2f5c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da2f5e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da2f61 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12da2f65 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2f68 je 0x12da2f7a */
  if (C.zf) goto L_12da2f7a;
  /* 12da2f6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2f6d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da2f6f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da2f72 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12da2f76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da2f78 jne 0x12da2f88 */
  if (!C.zf) goto L_12da2f88;
L_12da2f7a:;
  /* 12da2f7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2f7d sub eax, dword ptr [0x12dad53c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dad53c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2f83 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12da2f86 jmp 0x12da2f98 */
  goto L_12da2f98;
L_12da2f88:;
  /* 12da2f88 jmp 0x12da2f2e */
  goto L_12da2f2e;
L_12da2f8a:;
  /* 12da2f8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da2f8d sub eax, dword ptr [0x12dad53c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dad53c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2f93 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12da2f96 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12da2f98:;
  /* 12da2f98 mov esp, ebp */
  ESP = (EBP);
  /* 12da2f9a pop ebp */
  EBP = (pop32());
  /* 12da2f9b ret  */
  ESPCHK(0x12da2f20u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12da2fa0 (238 bytes, 80 insns) */
void f_12da2fa0(void) {
  FTRACE(0x12da2fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da2fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12da2fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12da2fa3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da2fa6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12da2fad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da2fb0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12da2fb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da2fb7 jne 0x12da2fc0 */
  if (!C.zf) goto L_12da2fc0;
  /* 12da2fb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da2fbb jmp 0x12da308a */
  goto L_12da308a;
L_12da2fc0:;
  /* 12da2fc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2fc3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da2fc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da2fc8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2fcb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12da2fce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da2fd0 je 0x12da2fdd */
  if (C.zf) goto L_12da2fdd;
  /* 12da2fd2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da2fd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2fd8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12da2fdb jmp 0x12da2fc0 */
  goto L_12da2fc0;
L_12da2fdd:;
  /* 12da2fdd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12da2fe2 push 0x12daa880 */
  push32((uint32_t)(0x12daa880u));
  /* 12da2fe7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12da2fe9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12da2fec lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12da2ff3 push eax */
  push32((uint32_t)(EAX));
  /* 12da2ff4 call 0x12d92c40 */
  push32(0x12da2ff9u); f_12d92c40();
  /* 12da2ff9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da2ffc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12da2fff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da3002 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12da3005 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da3009 jne 0x12da3015 */
  if (!C.zf) goto L_12da3015;
  /* 12da300b push 9 */
  push32((uint32_t)(0x9u));
  /* 12da300d call 0x12d91bb0 */
  push32(0x12da3012u); f_12d91bb0();
  /* 12da3012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12da3015:;
  /* 12da3015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da3018 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12da301b:;
  /* 12da301b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da301e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da3021 je 0x12da307e */
  if (C.zf) goto L_12da307e;
  /* 12da3023 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12da3028 push 0x12daa880 */
  push32((uint32_t)(0x12daa880u));
  /* 12da302d push 2 */
  push32((uint32_t)(0x2u));
  /* 12da302f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da3032 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12da3034 push edx */
  push32((uint32_t)(EDX));
  /* 12da3035 call 0x12d95a70 */
  push32(0x12da303au); f_12d95a70();
  /* 12da303a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da303d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da3040 push eax */
  push32((uint32_t)(EAX));
  /* 12da3041 call 0x12d92c40 */
  push32(0x12da3046u); f_12d92c40();
  /* 12da3046 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da3049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da304c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12da304e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da3051 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da3054 je 0x12da306a */
  if (C.zf) goto L_12da306a;
  /* 12da3056 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da3059 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12da305b push ecx */
  push32((uint32_t)(ECX));
  /* 12da305c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da305f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12da3061 push eax */
  push32((uint32_t)(EAX));
  /* 12da3062 call 0x12d95bf0 */
  push32(0x12da3067u); f_12d95bf0();
  /* 12da3067 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12da306a:;
  /* 12da306a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12da306d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da3070 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12da3073 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da3076 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da3079 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12da307c jmp 0x12da301b */
  goto L_12da301b;
L_12da307e:;
  /* 12da307e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12da3081 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12da3087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12da308a:;
  /* 12da308a mov esp, ebp */
  ESP = (EBP);
  /* 12da308c pop ebp */
  EBP = (pop32());
  /* 12da308d ret  */
  ESPCHK(0x12da2fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013090 @ 0x12da3090 (237 bytes, 81 insns) */
void f_12da3090(void) {
  FTRACE(0x12da3090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da3090 push ebp */
  push32((uint32_t)(EBP));
  /* 12da3091 mov ebp, esp */
  EBP = (ESP);
  /* 12da3093 push ecx */
  push32((uint32_t)(ECX));
  /* 12da3094 cmp dword ptr [0x12daec8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daec8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da309b jne 0x12da30b2 */
  if (!C.zf) goto L_12da30b2;
  /* 12da309d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12da30a0 push eax */
  push32((uint32_t)(EAX));
  /* 12da30a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da30a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12da30a5 call 0x12da3190 */
  push32(0x12da30aau); f_12da3190();
  /* 12da30aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da30ad jmp 0x12da3179 */
  goto L_12da3179;
L_12da30b2:;
  /* 12da30b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12da30b4 call 0x12d96640 */
  push32(0x12da30b9u); f_12d96640();
  /* 12da30b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da30bc jmp 0x12da30c7 */
  goto L_12da30c7;
L_12da30be:;
  /* 12da30be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da30c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da30c4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12da30c7:;
  /* 12da30c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da30ca movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12da30ce mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12da30d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da30d5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12da30db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12da30dd je 0x12da315b */
  if (C.zf) goto L_12da315b;
  /* 12da30df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da30e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da30e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da30e9 mov cl, byte ptr [eax + 0x12daeda1] */
  CL = (r8((uint32_t)(EAX + 0x12daeda1)));
  /* 12da30ef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12da30f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12da30f4 je 0x12da3146 */
  if (C.zf) goto L_12da3146;
  /* 12da30f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da30f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da30fc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12da30ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da3102 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da3104 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12da3106 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12da3108 jne 0x12da3118 */
  if (!C.zf) goto L_12da3118;
  /* 12da310a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12da310c call 0x12d966e0 */
  push32(0x12da3111u); f_12d966e0();
  /* 12da3111 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da3114 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da3116 jmp 0x12da3179 */
  goto L_12da3179;
L_12da3118:;
  /* 12da3118 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da311b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12da3121 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12da3124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da3127 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12da3129 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12da312b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12da312d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da3130 jne 0x12da3144 */
  if (!C.zf) goto L_12da3144;
  /* 12da3132 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12da3134 call 0x12d966e0 */
  push32(0x12da3139u); f_12d966e0();
  /* 12da3139 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da313c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da313f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12da3142 jmp 0x12da3179 */
  goto L_12da3179;
L_12da3144:;
  /* 12da3144 jmp 0x12da3156 */
  goto L_12da3156;
L_12da3146:;
  /* 12da3146 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da3149 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12da314f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da3152 jne 0x12da3156 */
  if (!C.zf) goto L_12da3156;
  /* 12da3154 jmp 0x12da315b */
  goto L_12da315b;
L_12da3156:;
  /* 12da3156 jmp 0x12da30be */
  goto L_12da30be;
L_12da315b:;
  /* 12da315b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12da315d call 0x12d966e0 */
  push32(0x12da3162u); f_12d966e0();
  /* 12da3162 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12da3165 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12da3168 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da316d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12da3170 jne 0x12da3177 */
  if (!C.zf) goto L_12da3177;
  /* 12da3172 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12da3175 jmp 0x12da3179 */
  goto L_12da3179;
L_12da3177:;
  /* 12da3177 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12da3179:;
  /* 12da3179 mov esp, ebp */
  ESP = (EBP);
  /* 12da317b pop ebp */
  EBP = (pop32());
  /* 12da317c ret  */
  ESPCHK(0x12da3090u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12da3190 (193 bytes, 87 insns) */
void f_12da3190(void) {
  FTRACE(0x12da3190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da3190 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da3192 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12da3196 push ebx */
  push32((uint32_t)(EBX));
  /* 12da3197 mov ebx, eax */
  EBX = (EAX);
  /* 12da3199 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12da319c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12da31a0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12da31a6 je 0x12da31bb */
  if (C.zf) goto L_12da31bb;
L_12da31a8:;
  /* 12da31a8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12da31aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12da31ab cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da31ad je 0x12da3180 */
  if (C.zf) { jmp_ind(0x12da3180u); return; }
  /* 12da31af test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12da31b1 je 0x12da3204 */
  if (C.zf) goto L_12da3204;
  /* 12da31b3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12da31b9 jne 0x12da31a8 */
  if (!C.zf) goto L_12da31a8;
L_12da31bb:;
  /* 12da31bb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12da31bd push edi */
  push32((uint32_t)(EDI));
  /* 12da31be mov eax, ebx */
  EAX = (EBX);
  /* 12da31c0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12da31c3 push esi */
  push32((uint32_t)(ESI));
  /* 12da31c4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12da31c6:;
  /* 12da31c6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12da31c8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12da31cd mov eax, ecx */
  EAX = (ECX);
  /* 12da31cf mov esi, edi */
  ESI = (EDI);
  /* 12da31d1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12da31d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12da31d5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12da31d7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12da31da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12da31dd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12da31df xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12da31e1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12da31e4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12da31ea jne 0x12da3208 */
  if (!C.zf) goto L_12da3208;
  /* 12da31ec and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12da31f1 je 0x12da31c6 */
  if (C.zf) goto L_12da31c6;
  /* 12da31f3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12da31f8 jne 0x12da3202 */
  if (!C.zf) goto L_12da3202;
  /* 12da31fa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12da3200 jne 0x12da31c6 */
  if (!C.zf) goto L_12da31c6;
L_12da3202:;
  /* 12da3202 pop esi */
  ESI = (pop32());
  /* 12da3203 pop edi */
  EDI = (pop32());
L_12da3204:;
  /* 12da3204 pop ebx */
  EBX = (pop32());
  /* 12da3205 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12da3207 ret  */
  ESPCHK(0x12da3190u, _esp0);
  ESP += 4; return;
L_12da3208:;
  /* 12da3208 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12da320b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da320d je 0x12da3245 */
  if (C.zf) goto L_12da3245;
  /* 12da320f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12da3211 je 0x12da3202 */
  if (C.zf) goto L_12da3202;
  /* 12da3213 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da3215 je 0x12da323e */
  if (C.zf) goto L_12da323e;
  /* 12da3217 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12da3219 je 0x12da3202 */
  if (C.zf) goto L_12da3202;
  /* 12da321b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12da321e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da3220 je 0x12da3237 */
  if (C.zf) goto L_12da3237;
  /* 12da3222 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12da3224 je 0x12da3202 */
  if (C.zf) goto L_12da3202;
  /* 12da3226 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12da3228 je 0x12da3230 */
  if (C.zf) goto L_12da3230;
  /* 12da322a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12da322c je 0x12da3202 */
  if (C.zf) goto L_12da3202;
  /* 12da322e jmp 0x12da31c6 */
  goto L_12da31c6;
L_12da3230:;
  /* 12da3230 pop esi */
  ESI = (pop32());
  /* 12da3231 pop edi */
  EDI = (pop32());
  /* 12da3232 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12da3235 pop ebx */
  EBX = (pop32());
  /* 12da3236 ret  */
  ESPCHK(0x12da3190u, _esp0);
  ESP += 4; return;
L_12da3237:;
  /* 12da3237 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12da323a pop esi */
  ESI = (pop32());
  /* 12da323b pop edi */
  EDI = (pop32());
  /* 12da323c pop ebx */
  EBX = (pop32());
  /* 12da323d ret  */
  ESPCHK(0x12da3190u, _esp0);
  ESP += 4; return;
L_12da323e:;
  /* 12da323e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12da3241 pop esi */
  ESI = (pop32());
  /* 12da3242 pop edi */
  EDI = (pop32());
  /* 12da3243 pop ebx */
  EBX = (pop32());
  /* 12da3244 ret  */
  ESPCHK(0x12da3190u, _esp0);
  ESP += 4; return;
L_12da3245:;
  /* 12da3245 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12da3248 pop esi */
  ESI = (pop32());
  /* 12da3249 pop edi */
  EDI = (pop32());
  /* 12da324a pop ebx */
  EBX = (pop32());
  /* 12da324b ret  */
  ESPCHK(0x12da3190u, _esp0);
  ESP += 4; return;
  /* 12da324c jmp dword ptr [0x12db0288] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12db0288)))); return;
}

/* RtlUnwind @ 0x12da339c (6 bytes, 1 insns) */
void f_12da339c(void) {
  FTRACE(0x12da339cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12da339c jmp dword ptr [0x12db0284] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12db0284)))); return;
}

