#include "recomp.h"

/* FUN_1000c090 @ 0x125ac090 (490 bytes, 165 insns) */
void f_125ac090(void) {
  FTRACE(0x125ac090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ac090 push ebp */
  push32((uint32_t)(EBP));
  /* 125ac091 mov ebp, esp */
  EBP = (ESP);
  /* 125ac093 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac096 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac09a jne 0x125ac0ad */
  if (!C.zf) goto L_125ac0ad;
  /* 125ac09c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac09f push eax */
  push32((uint32_t)(EAX));
  /* 125ac0a0 call 0x125abee0 */
  push32(0x125ac0a5u); f_125abee0();
  /* 125ac0a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac0a8 jmp 0x125ac276 */
  goto L_125ac276;
L_125ac0ad:;
  /* 125ac0ad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac0b1 jne 0x125ac0c6 */
  if (!C.zf) goto L_125ac0c6;
  /* 125ac0b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac0b6 push ecx */
  push32((uint32_t)(ECX));
  /* 125ac0b7 call 0x125ac280 */
  push32(0x125ac0bcu); f_125ac280();
  /* 125ac0bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac0bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ac0c1 jmp 0x125ac276 */
  goto L_125ac276;
L_125ac0c6:;
  /* 125ac0c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125ac0cd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac0d1 ja 0x125ac249 */
  if ((!C.cf&&!C.zf)) goto L_125ac249;
  /* 125ac0d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 125ac0d9 call 0x125abb10 */
  push32(0x125ac0deu); f_125abb10();
  /* 125ac0de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac0e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac0e4 push edx */
  push32((uint32_t)(EDX));
  /* 125ac0e5 call 0x125ac410 */
  push32(0x125ac0eau); f_125ac410();
  /* 125ac0ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac0ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125ac0f0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac0f4 je 0x125ac20c */
  if (C.zf) goto L_125ac20c;
  /* 125ac0fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac0fd cmp eax, dword ptr [0x125d1c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac103 ja 0x125ac180 */
  if ((!C.cf&&!C.zf)) goto L_125ac180;
  /* 125ac105 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac108 push ecx */
  push32((uint32_t)(ECX));
  /* 125ac109 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac10c push edx */
  push32((uint32_t)(EDX));
  /* 125ac10d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ac110 push eax */
  push32((uint32_t)(EAX));
  /* 125ac111 call 0x125ad2e0 */
  push32(0x125ac116u); f_125ad2e0();
  /* 125ac116 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac119 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ac11b je 0x125ac125 */
  if (C.zf) goto L_125ac125;
  /* 125ac11d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac120 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125ac123 jmp 0x125ac180 */
  goto L_125ac180;
L_125ac125:;
  /* 125ac125 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac128 push edx */
  push32((uint32_t)(EDX));
  /* 125ac129 call 0x125acaa0 */
  push32(0x125ac12eu); f_125acaa0();
  /* 125ac12e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac131 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125ac134 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac138 je 0x125ac180 */
  if (C.zf) goto L_125ac180;
  /* 125ac13a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac13d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 125ac140 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac143 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125ac146 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac149 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac14c jae 0x125ac156 */
  if (!C.cf) goto L_125ac156;
  /* 125ac14e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac151 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125ac154 jmp 0x125ac15c */
  goto L_125ac15c;
L_125ac156:;
  /* 125ac156 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac159 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_125ac15c:;
  /* 125ac15c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ac15f push edx */
  push32((uint32_t)(EDX));
  /* 125ac160 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac163 push eax */
  push32((uint32_t)(EAX));
  /* 125ac164 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac167 push ecx */
  push32((uint32_t)(ECX));
  /* 125ac168 call 0x125ae9f0 */
  push32(0x125ac16du); f_125ae9f0();
  /* 125ac16d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac170 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac173 push edx */
  push32((uint32_t)(EDX));
  /* 125ac174 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ac177 push eax */
  push32((uint32_t)(EAX));
  /* 125ac178 call 0x125ac4d0 */
  push32(0x125ac17du); f_125ac4d0();
  /* 125ac17d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125ac180:;
  /* 125ac180 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac184 jne 0x125ac200 */
  if (!C.zf) goto L_125ac200;
  /* 125ac186 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac18a jne 0x125ac193 */
  if (!C.zf) goto L_125ac193;
  /* 125ac18c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_125ac193:;
  /* 125ac193 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac196 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac199 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 125ac19c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 125ac19f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac1a2 push edx */
  push32((uint32_t)(EDX));
  /* 125ac1a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ac1a5 mov eax, dword ptr [0x125d528c] */
  EAX = (r32((uint32_t)(0x125d528c)));
  /* 125ac1aa push eax */
  push32((uint32_t)(EAX));
  /* 125ac1ab call dword ptr [0x125d6328] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6328))), 0x125ac1b1u);
  /* 125ac1b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125ac1b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac1b8 je 0x125ac200 */
  if (C.zf) goto L_125ac200;
  /* 125ac1ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac1bd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 125ac1c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac1c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125ac1c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac1c9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac1cc jae 0x125ac1d6 */
  if (!C.cf) goto L_125ac1d6;
  /* 125ac1ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac1d1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125ac1d4 jmp 0x125ac1dc */
  goto L_125ac1dc;
L_125ac1d6:;
  /* 125ac1d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac1d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_125ac1dc:;
  /* 125ac1dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ac1df push eax */
  push32((uint32_t)(EAX));
  /* 125ac1e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125ac1e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac1e7 push edx */
  push32((uint32_t)(EDX));
  /* 125ac1e8 call 0x125ae9f0 */
  push32(0x125ac1edu); f_125ae9f0();
  /* 125ac1ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac1f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac1f3 push eax */
  push32((uint32_t)(EAX));
  /* 125ac1f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ac1f7 push ecx */
  push32((uint32_t)(ECX));
  /* 125ac1f8 call 0x125ac4d0 */
  push32(0x125ac1fdu); f_125ac4d0();
  /* 125ac1fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125ac200:;
  /* 125ac200 push 9 */
  push32((uint32_t)(0x9u));
  /* 125ac202 call 0x125abbb0 */
  push32(0x125ac207u); f_125abbb0();
  /* 125ac207 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac20a jmp 0x125ac249 */
  goto L_125ac249;
L_125ac20c:;
  /* 125ac20c push 9 */
  push32((uint32_t)(0x9u));
  /* 125ac20e call 0x125abbb0 */
  push32(0x125ac213u); f_125abbb0();
  /* 125ac213 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac216 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac21a jne 0x125ac223 */
  if (!C.zf) goto L_125ac223;
  /* 125ac21c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_125ac223:;
  /* 125ac223 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac226 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac229 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 125ac22c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 125ac22f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac232 push eax */
  push32((uint32_t)(EAX));
  /* 125ac233 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac236 push ecx */
  push32((uint32_t)(ECX));
  /* 125ac237 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ac239 mov edx, dword ptr [0x125d528c] */
  EDX = (r32((uint32_t)(0x125d528c)));
  /* 125ac23f push edx */
  push32((uint32_t)(EDX));
  /* 125ac240 call dword ptr [0x125d6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6330))), 0x125ac246u);
  /* 125ac246 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125ac249:;
  /* 125ac249 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac24d jne 0x125ac258 */
  if (!C.zf) goto L_125ac258;
  /* 125ac24f cmp dword ptr [0x125d3ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac256 jne 0x125ac25d */
  if (!C.zf) goto L_125ac25d;
L_125ac258:;
  /* 125ac258 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac25b jmp 0x125ac276 */
  goto L_125ac276;
L_125ac25d:;
  /* 125ac25d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac260 push eax */
  push32((uint32_t)(EAX));
  /* 125ac261 call 0x125abe50 */
  push32(0x125ac266u); f_125abe50();
  /* 125ac266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ac26b jne 0x125ac271 */
  if (!C.zf) goto L_125ac271;
  /* 125ac26d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ac26f jmp 0x125ac276 */
  goto L_125ac276;
L_125ac271:;
  /* 125ac271 jmp 0x125ac0c6 */
  goto L_125ac0c6;
L_125ac276:;
  /* 125ac276 mov esp, ebp */
  ESP = (EBP);
  /* 125ac278 pop ebp */
  EBP = (pop32());
  /* 125ac279 ret  */
  ESPCHK(0x125ac090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c280 @ 0x125ac280 (104 bytes, 38 insns) */
void f_125ac280(void) {
  FTRACE(0x125ac280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ac280 push ebp */
  push32((uint32_t)(EBP));
  /* 125ac281 mov ebp, esp */
  EBP = (ESP);
  /* 125ac283 push ecx */
  push32((uint32_t)(ECX));
  /* 125ac284 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac288 jne 0x125ac28c */
  if (!C.zf) goto L_125ac28c;
  /* 125ac28a jmp 0x125ac2e4 */
  goto L_125ac2e4;
L_125ac28c:;
  /* 125ac28c push 9 */
  push32((uint32_t)(0x9u));
  /* 125ac28e call 0x125abb10 */
  push32(0x125ac293u); f_125abb10();
  /* 125ac293 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac299 push eax */
  push32((uint32_t)(EAX));
  /* 125ac29a call 0x125ac410 */
  push32(0x125ac29fu); f_125ac410();
  /* 125ac29f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac2a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125ac2a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac2a9 je 0x125ac2c7 */
  if (C.zf) goto L_125ac2c7;
  /* 125ac2ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac2ae push ecx */
  push32((uint32_t)(ECX));
  /* 125ac2af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac2b2 push edx */
  push32((uint32_t)(EDX));
  /* 125ac2b3 call 0x125ac4d0 */
  push32(0x125ac2b8u); f_125ac4d0();
  /* 125ac2b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac2bb push 9 */
  push32((uint32_t)(0x9u));
  /* 125ac2bd call 0x125abbb0 */
  push32(0x125ac2c2u); f_125abbb0();
  /* 125ac2c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac2c5 jmp 0x125ac2e4 */
  goto L_125ac2e4;
L_125ac2c7:;
  /* 125ac2c7 push 9 */
  push32((uint32_t)(0x9u));
  /* 125ac2c9 call 0x125abbb0 */
  push32(0x125ac2ceu); f_125abbb0();
  /* 125ac2ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac2d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac2d4 push eax */
  push32((uint32_t)(EAX));
  /* 125ac2d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ac2d7 mov ecx, dword ptr [0x125d528c] */
  ECX = (r32((uint32_t)(0x125d528c)));
  /* 125ac2dd push ecx */
  push32((uint32_t)(ECX));
  /* 125ac2de call dword ptr [0x125d6354] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6354))), 0x125ac2e4u);
L_125ac2e4:;
  /* 125ac2e4 mov esp, ebp */
  ESP = (EBP);
  /* 125ac2e6 pop ebp */
  EBP = (pop32());
  /* 125ac2e7 ret  */
  ESPCHK(0x125ac280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2f0 @ 0x125ac2f0 (116 bytes, 34 insns) */
void f_125ac2f0(void) {
  FTRACE(0x125ac2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ac2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125ac2f1 mov ebp, esp */
  EBP = (ESP);
  /* 125ac2f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125ac2f4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 125ac2fb push 9 */
  push32((uint32_t)(0x9u));
  /* 125ac2fd call 0x125abb10 */
  push32(0x125ac302u); f_125abb10();
  /* 125ac302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac305 call 0x125ada00 */
  push32(0x125ac30au); f_125ada00();
  /* 125ac30a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ac30c jge 0x125ac315 */
  if ((C.sf==C.of)) goto L_125ac315;
  /* 125ac30e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_125ac315:;
  /* 125ac315 push 9 */
  push32((uint32_t)(0x9u));
  /* 125ac317 call 0x125abbb0 */
  push32(0x125ac31cu); f_125abbb0();
  /* 125ac31c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac31f push 0 */
  push32((uint32_t)(0x0u));
  /* 125ac321 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ac323 mov eax, dword ptr [0x125d528c] */
  EAX = (r32((uint32_t)(0x125d528c)));
  /* 125ac328 push eax */
  push32((uint32_t)(EAX));
  /* 125ac329 call dword ptr [0x125d63d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63d0))), 0x125ac32fu);
  /* 125ac32f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ac331 jne 0x125ac35d */
  if (!C.zf) goto L_125ac35d;
  /* 125ac333 call dword ptr [0x125d63b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63b4))), 0x125ac339u);
  /* 125ac339 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac33c jne 0x125ac356 */
  if (!C.zf) goto L_125ac356;
  /* 125ac33e call 0x125afff0 */
  push32(0x125ac343u); f_125afff0();
  /* 125ac343 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 125ac349 call 0x125affe0 */
  push32(0x125ac34eu); f_125affe0();
  /* 125ac34e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 125ac354 jmp 0x125ac35d */
  goto L_125ac35d;
L_125ac356:;
  /* 125ac356 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_125ac35d:;
  /* 125ac35d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac360 mov esp, ebp */
  ESP = (EBP);
  /* 125ac362 pop ebp */
  EBP = (pop32());
  /* 125ac363 ret  */
  ESPCHK(0x125ac2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c370 @ 0x125ac370 (10 bytes, 5 insns) */
void f_125ac370(void) {
  FTRACE(0x125ac370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ac370 push ebp */
  push32((uint32_t)(EBP));
  /* 125ac371 mov ebp, esp */
  EBP = (ESP);
  /* 125ac373 call 0x125ac2f0 */
  push32(0x125ac378u); f_125ac2f0();
  /* 125ac378 pop ebp */
  EBP = (pop32());
  /* 125ac379 ret  */
  ESPCHK(0x125ac370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c380 @ 0x125ac380 (10 bytes, 5 insns) */
void f_125ac380(void) {
  FTRACE(0x125ac380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ac380 push ebp */
  push32((uint32_t)(EBP));
  /* 125ac381 mov ebp, esp */
  EBP = (ESP);
  /* 125ac383 mov eax, dword ptr [0x125d1c94] */
  EAX = (r32((uint32_t)(0x125d1c94)));
  /* 125ac388 pop ebp */
  EBP = (pop32());
  /* 125ac389 ret  */
  ESPCHK(0x125ac380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c390 @ 0x125ac390 (31 bytes, 11 insns) */
void f_125ac390(void) {
  FTRACE(0x125ac390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ac390 push ebp */
  push32((uint32_t)(EBP));
  /* 125ac391 mov ebp, esp */
  EBP = (ESP);
  /* 125ac393 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac39a jbe 0x125ac3a0 */
  if ((C.cf||C.zf)) goto L_125ac3a0;
  /* 125ac39c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ac39e jmp 0x125ac3ad */
  goto L_125ac3ad;
L_125ac3a0:;
  /* 125ac3a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac3a3 mov dword ptr [0x125d1c94], eax */
  w32((uint32_t)(0x125d1c94), (EAX));
  /* 125ac3a8 mov eax, 1 */
  EAX = (0x1u);
L_125ac3ad:;
  /* 125ac3ad pop ebp */
  EBP = (pop32());
  /* 125ac3ae ret  */
  ESPCHK(0x125ac390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3b0 @ 0x125ac3b0 (89 bytes, 20 insns) */
void f_125ac3b0(void) {
  FTRACE(0x125ac3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ac3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125ac3b1 mov ebp, esp */
  EBP = (ESP);
  /* 125ac3b3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 125ac3b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ac3ba mov eax, dword ptr [0x125d528c] */
  EAX = (r32((uint32_t)(0x125d528c)));
  /* 125ac3bf push eax */
  push32((uint32_t)(EAX));
  /* 125ac3c0 call dword ptr [0x125d6328] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6328))), 0x125ac3c6u);
  /* 125ac3c6 mov dword ptr [0x125d5288], eax */
  w32((uint32_t)(0x125d5288), (EAX));
  /* 125ac3cb cmp dword ptr [0x125d5288], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d5288))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac3d2 jne 0x125ac3d8 */
  if (!C.zf) goto L_125ac3d8;
  /* 125ac3d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ac3d6 jmp 0x125ac407 */
  goto L_125ac407;
L_125ac3d8:;
  /* 125ac3d8 mov ecx, dword ptr [0x125d5288] */
  ECX = (r32((uint32_t)(0x125d5288)));
  /* 125ac3de mov dword ptr [0x125d527c], ecx */
  w32((uint32_t)(0x125d527c), (ECX));
  /* 125ac3e4 mov dword ptr [0x125d5280], 0 */
  w32((uint32_t)(0x125d5280), (0x0u));
  /* 125ac3ee mov dword ptr [0x125d5284], 0 */
  w32((uint32_t)(0x125d5284), (0x0u));
  /* 125ac3f8 mov dword ptr [0x125d5268], 0x10 */
  w32((uint32_t)(0x125d5268), (0x10u));
  /* 125ac402 mov eax, 1 */
  EAX = (0x1u);
L_125ac407:;
  /* 125ac407 pop ebp */
  EBP = (pop32());
  /* 125ac408 ret  */
  ESPCHK(0x125ac3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c410 @ 0x125ac410 (85 bytes, 29 insns) */
void f_125ac410(void) {
  FTRACE(0x125ac410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ac410 push ebp */
  push32((uint32_t)(EBP));
  /* 125ac411 mov ebp, esp */
  EBP = (ESP);
  /* 125ac413 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac416 mov eax, dword ptr [0x125d5284] */
  EAX = (r32((uint32_t)(0x125d5284)));
  /* 125ac41b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125ac41e mov ecx, dword ptr [0x125d5288] */
  ECX = (r32((uint32_t)(0x125d5288)));
  /* 125ac424 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac426 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125ac429 mov edx, dword ptr [0x125d5288] */
  EDX = (r32((uint32_t)(0x125d5288)));
  /* 125ac42f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125ac432:;
  /* 125ac432 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac435 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac438 jae 0x125ac45f */
  if (!C.cf) goto L_125ac45f;
  /* 125ac43a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac43d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac440 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac443 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125ac446 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac44d jae 0x125ac454 */
  if (!C.cf) goto L_125ac454;
  /* 125ac44f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac452 jmp 0x125ac461 */
  goto L_125ac461;
L_125ac454:;
  /* 125ac454 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac457 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac45a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125ac45d jmp 0x125ac432 */
  goto L_125ac432;
L_125ac45f:;
  /* 125ac45f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125ac461:;
  /* 125ac461 mov esp, ebp */
  ESP = (EBP);
  /* 125ac463 pop ebp */
  EBP = (pop32());
  /* 125ac464 ret  */
  ESPCHK(0x125ac410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c470 @ 0x125ac470 (95 bytes, 33 insns) */
void f_125ac470(void) {
  FTRACE(0x125ac470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ac470 push ebp */
  push32((uint32_t)(EBP));
  /* 125ac471 mov ebp, esp */
  EBP = (ESP);
  /* 125ac473 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac479 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac47c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac47f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125ac482 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac485 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 125ac488 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125ac48b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ac490 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac493 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ac495 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac498 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125ac49b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125ac49d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ac49f jne 0x125ac4c1 */
  if (!C.zf) goto L_125ac4c1;
  /* 125ac4a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac4a4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 125ac4a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ac4a9 jne 0x125ac4c1 */
  if (!C.zf) goto L_125ac4c1;
  /* 125ac4ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac4ae and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 125ac4b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ac4b6 je 0x125ac4c1 */
  if (C.zf) goto L_125ac4c1;
  /* 125ac4b8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 125ac4bf jmp 0x125ac4c8 */
  goto L_125ac4c8;
L_125ac4c1:;
  /* 125ac4c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_125ac4c8:;
  /* 125ac4c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ac4cb mov esp, ebp */
  ESP = (EBP);
  /* 125ac4cd pop ebp */
  EBP = (pop32());
  /* 125ac4ce ret  */
  ESPCHK(0x125ac470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4d0 @ 0x125ac4d0 (1485 bytes, 453 insns) */
void f_125ac4d0(void) {
  FTRACE(0x125ac4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ac4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125ac4d1 mov ebp, esp */
  EBP = (ESP);
  /* 125ac4d3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac4d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac4d9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125ac4dc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 125ac4df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac4e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac4e5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac4e8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125ac4eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ac4ee shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 125ac4f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125ac4f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac4f7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125ac4fd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac500 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 125ac507 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125ac50a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac50d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac510 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 125ac513 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ac516 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125ac518 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac51b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 125ac51e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ac521 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac524 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 125ac527 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125ac52a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125ac52c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125ac52f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ac532 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 125ac535 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125ac538 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ac53b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125ac53e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ac540 jne 0x125ac668 */
  if (!C.zf) goto L_125ac668;
  /* 125ac546 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ac549 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 125ac54c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac54f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125ac552 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac556 jbe 0x125ac55f */
  if ((C.cf||C.zf)) goto L_125ac55f;
  /* 125ac558 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_125ac55f:;
  /* 125ac55f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125ac562 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125ac565 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ac568 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac56b jne 0x125ac641 */
  if (!C.zf) goto L_125ac641;
  /* 125ac571 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac575 jae 0x125ac5d6 */
  if (!C.cf) goto L_125ac5d6;
  /* 125ac577 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ac57c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ac57f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ac581 not eax */
  EAX = (~(EAX));
  /* 125ac583 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac586 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac589 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 125ac58d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125ac58f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac592 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac595 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 125ac599 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac59c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac59f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 125ac5a2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125ac5a5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac5a8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac5ab mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 125ac5ae mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac5b1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac5b4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125ac5b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ac5ba jne 0x125ac5d4 */
  if (!C.zf) goto L_125ac5d4;
  /* 125ac5bc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ac5c1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ac5c4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ac5c6 not eax */
  EAX = (~(EAX));
  /* 125ac5c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac5cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125ac5cd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125ac5cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac5d2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125ac5d4:;
  /* 125ac5d4 jmp 0x125ac641 */
  goto L_125ac641;
L_125ac5d6:;
  /* 125ac5d6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ac5d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac5dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ac5e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ac5e3 not edx */
  EDX = (~(EDX));
  /* 125ac5e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac5e8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac5eb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 125ac5f2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125ac5f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac5f7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac5fa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 125ac601 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac604 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac607 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125ac60a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125ac60d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac610 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac613 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 125ac616 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac619 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac61c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125ac620 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ac622 jne 0x125ac641 */
  if (!C.zf) goto L_125ac641;
  /* 125ac624 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ac627 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac62a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ac62f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ac631 not edx */
  EDX = (~(EDX));
  /* 125ac633 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac636 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ac639 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125ac63b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac63e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_125ac641:;
  /* 125ac641 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125ac644 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125ac647 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125ac64a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125ac64d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 125ac650 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125ac653 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ac656 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125ac659 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125ac65c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125ac65f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ac662 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac665 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_125ac668:;
  /* 125ac668 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ac66b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 125ac66e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac671 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125ac674 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac678 jbe 0x125ac681 */
  if ((C.cf||C.zf)) goto L_125ac681;
  /* 125ac67a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_125ac681:;
  /* 125ac681 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ac684 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125ac687 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ac689 jne 0x125ac7e5 */
  if (!C.zf) goto L_125ac7e5;
  /* 125ac68f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ac692 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac695 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 125ac698 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ac69b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 125ac69e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac6a1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 125ac6a4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac6a8 jbe 0x125ac6b1 */
  if ((C.cf||C.zf)) goto L_125ac6b1;
  /* 125ac6aa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_125ac6b1:;
  /* 125ac6b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ac6b4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac6b7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 125ac6ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ac6bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 125ac6c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac6c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 125ac6c6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac6ca jbe 0x125ac6d3 */
  if ((C.cf||C.zf)) goto L_125ac6d3;
  /* 125ac6cc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_125ac6d3:;
  /* 125ac6d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ac6d6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac6d9 je 0x125ac7df */
  if (C.zf) goto L_125ac7df;
  /* 125ac6df mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 125ac6e2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 125ac6e5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ac6e8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac6eb jne 0x125ac7c1 */
  if (!C.zf) goto L_125ac7c1;
  /* 125ac6f1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac6f5 jae 0x125ac756 */
  if (!C.cf) goto L_125ac756;
  /* 125ac6f7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ac6fc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ac6ff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ac701 not edx */
  EDX = (~(EDX));
  /* 125ac703 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac706 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac709 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 125ac70d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125ac70f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac712 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac715 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 125ac719 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac71c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac71f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125ac722 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125ac725 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac728 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac72b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 125ac72e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac731 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac734 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125ac738 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ac73a jne 0x125ac754 */
  if (!C.zf) goto L_125ac754;
  /* 125ac73c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ac741 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ac744 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ac746 not edx */
  EDX = (~(EDX));
  /* 125ac748 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac74b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125ac74d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125ac74f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac752 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125ac754:;
  /* 125ac754 jmp 0x125ac7c1 */
  goto L_125ac7c1;
L_125ac756:;
  /* 125ac756 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ac759 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac75c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ac761 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ac763 not eax */
  EAX = (~(EAX));
  /* 125ac765 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac768 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac76b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 125ac772 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125ac774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac777 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac77a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 125ac781 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac784 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac787 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 125ac78a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125ac78d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac790 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac793 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 125ac796 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac799 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac79c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125ac7a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ac7a2 jne 0x125ac7c1 */
  if (!C.zf) goto L_125ac7c1;
  /* 125ac7a4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ac7a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac7aa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ac7af shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ac7b1 not eax */
  EAX = (~(EAX));
  /* 125ac7b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac7b6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ac7b9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125ac7bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac7be mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_125ac7c1:;
  /* 125ac7c1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 125ac7c4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125ac7c7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 125ac7ca mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ac7cd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 125ac7d0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 125ac7d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125ac7d6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 125ac7d9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125ac7dc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_125ac7df:;
  /* 125ac7df mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 125ac7e2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_125ac7e5:;
  /* 125ac7e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ac7e8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125ac7eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ac7ed jne 0x125ac7fb */
  if (!C.zf) goto L_125ac7fb;
  /* 125ac7ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ac7f2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac7f5 je 0x125ac90b */
  if (C.zf) goto L_125ac90b;
L_125ac7fb:;
  /* 125ac7fb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ac7fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac801 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 125ac804 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125ac807 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ac80a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ac80d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ac810 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125ac813 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ac816 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ac819 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 125ac81c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ac81f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ac822 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 125ac825 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ac828 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ac82b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ac82e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125ac831 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ac834 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ac837 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ac83a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac83d jne 0x125ac90b */
  if (!C.zf) goto L_125ac90b;
  /* 125ac843 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac847 jae 0x125ac8a4 */
  if (!C.cf) goto L_125ac8a4;
  /* 125ac849 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac84c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac84f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125ac853 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac856 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac859 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125ac85c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 125ac85f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac862 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac865 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 125ac868 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ac86a jne 0x125ac882 */
  if (!C.zf) goto L_125ac882;
  /* 125ac86c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ac871 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ac874 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ac876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac879 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125ac87b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125ac87d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac880 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125ac882:;
  /* 125ac882 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ac887 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ac88a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ac88c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac88f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac892 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 125ac896 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125ac898 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac89b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac89e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 125ac8a2 jmp 0x125ac90b */
  goto L_125ac90b;
L_125ac8a4:;
  /* 125ac8a4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac8a7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac8aa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125ac8ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac8b1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac8b4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125ac8b7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 125ac8ba mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac8bd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac8c0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 125ac8c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ac8c5 jne 0x125ac8e2 */
  if (!C.zf) goto L_125ac8e2;
  /* 125ac8c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ac8ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac8cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ac8d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ac8d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac8d7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ac8da or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125ac8dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac8df mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_125ac8e2:;
  /* 125ac8e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ac8e5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac8e8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ac8ed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ac8ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac8f2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac8f5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 125ac8fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125ac8fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac901 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125ac904 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_125ac90b:;
  /* 125ac90b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ac90e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ac911 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 125ac913 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ac916 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac919 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ac91c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 125ac91f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac922 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125ac924 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ac927 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac92a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125ac92c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac92f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac932 jne 0x125aca99 */
  if (!C.zf) goto L_125aca99;
  /* 125ac938 cmp dword ptr [0x125d5280], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d5280))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac93f je 0x125aca88 */
  if (C.zf) goto L_125aca88;
  /* 125ac945 mov eax, dword ptr [0x125d5278] */
  EAX = (r32((uint32_t)(0x125d5278)));
  /* 125ac94a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 125ac94d mov ecx, dword ptr [0x125d5280] */
  ECX = (r32((uint32_t)(0x125d5280)));
  /* 125ac953 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125ac956 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac958 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125ac95b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 125ac960 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 125ac965 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ac968 push eax */
  push32((uint32_t)(EAX));
  /* 125ac969 call dword ptr [0x125d6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6344))), 0x125ac96fu);
  /* 125ac96f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ac974 mov ecx, dword ptr [0x125d5278] */
  ECX = (r32((uint32_t)(0x125d5278)));
  /* 125ac97a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ac97c mov eax, dword ptr [0x125d5280] */
  EAX = (r32((uint32_t)(0x125d5280)));
  /* 125ac981 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125ac984 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125ac986 mov edx, dword ptr [0x125d5280] */
  EDX = (r32((uint32_t)(0x125d5280)));
  /* 125ac98c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125ac98f mov eax, dword ptr [0x125d5280] */
  EAX = (r32((uint32_t)(0x125d5280)));
  /* 125ac994 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125ac997 mov edx, dword ptr [0x125d5278] */
  EDX = (r32((uint32_t)(0x125d5278)));
  /* 125ac99d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 125ac9a8 mov eax, dword ptr [0x125d5280] */
  EAX = (r32((uint32_t)(0x125d5280)));
  /* 125ac9ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125ac9b0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 125ac9b3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125ac9b6 mov eax, dword ptr [0x125d5280] */
  EAX = (r32((uint32_t)(0x125d5280)));
  /* 125ac9bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125ac9be mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 125ac9c1 mov edx, dword ptr [0x125d5280] */
  EDX = (r32((uint32_t)(0x125d5280)));
  /* 125ac9c7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125ac9ca movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 125ac9ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ac9d0 jne 0x125ac9e6 */
  if (!C.zf) goto L_125ac9e6;
  /* 125ac9d2 mov edx, dword ptr [0x125d5280] */
  EDX = (r32((uint32_t)(0x125d5280)));
  /* 125ac9d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125ac9db and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 125ac9dd mov ecx, dword ptr [0x125d5280] */
  ECX = (r32((uint32_t)(0x125d5280)));
  /* 125ac9e3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_125ac9e6:;
  /* 125ac9e6 mov edx, dword ptr [0x125d5280] */
  EDX = (r32((uint32_t)(0x125d5280)));
  /* 125ac9ec cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac9f0 jne 0x125aca88 */
  if (!C.zf) goto L_125aca88;
  /* 125ac9f6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 125ac9fb push 0 */
  push32((uint32_t)(0x0u));
  /* 125ac9fd mov eax, dword ptr [0x125d5280] */
  EAX = (r32((uint32_t)(0x125d5280)));
  /* 125aca02 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125aca05 push ecx */
  push32((uint32_t)(ECX));
  /* 125aca06 call dword ptr [0x125d6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6344))), 0x125aca0cu);
  /* 125aca0c mov edx, dword ptr [0x125d5280] */
  EDX = (r32((uint32_t)(0x125d5280)));
  /* 125aca12 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125aca15 push eax */
  push32((uint32_t)(EAX));
  /* 125aca16 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aca18 mov ecx, dword ptr [0x125d528c] */
  ECX = (r32((uint32_t)(0x125d528c)));
  /* 125aca1e push ecx */
  push32((uint32_t)(ECX));
  /* 125aca1f call dword ptr [0x125d6354] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6354))), 0x125aca25u);
  /* 125aca25 mov edx, dword ptr [0x125d5284] */
  EDX = (r32((uint32_t)(0x125d5284)));
  /* 125aca2b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125aca2e mov eax, dword ptr [0x125d5288] */
  EAX = (r32((uint32_t)(0x125d5288)));
  /* 125aca33 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aca35 mov ecx, dword ptr [0x125d5280] */
  ECX = (r32((uint32_t)(0x125d5280)));
  /* 125aca3b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aca3e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aca40 push eax */
  push32((uint32_t)(EAX));
  /* 125aca41 mov edx, dword ptr [0x125d5280] */
  EDX = (r32((uint32_t)(0x125d5280)));
  /* 125aca47 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aca4a push edx */
  push32((uint32_t)(EDX));
  /* 125aca4b mov eax, dword ptr [0x125d5280] */
  EAX = (r32((uint32_t)(0x125d5280)));
  /* 125aca50 push eax */
  push32((uint32_t)(EAX));
  /* 125aca51 call 0x125b0000 */
  push32(0x125aca56u); f_125b0000();
  /* 125aca56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aca59 mov ecx, dword ptr [0x125d5284] */
  ECX = (r32((uint32_t)(0x125d5284)));
  /* 125aca5f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aca62 mov dword ptr [0x125d5284], ecx */
  w32((uint32_t)(0x125d5284), (ECX));
  /* 125aca68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aca6b cmp edx, dword ptr [0x125d5280] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x125d5280))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aca71 jbe 0x125aca7c */
  if ((C.cf||C.zf)) goto L_125aca7c;
  /* 125aca73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aca76 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aca79 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_125aca7c:;
  /* 125aca7c mov ecx, dword ptr [0x125d5288] */
  ECX = (r32((uint32_t)(0x125d5288)));
  /* 125aca82 mov dword ptr [0x125d527c], ecx */
  w32((uint32_t)(0x125d527c), (ECX));
L_125aca88:;
  /* 125aca88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aca8b mov dword ptr [0x125d5280], edx */
  w32((uint32_t)(0x125d5280), (EDX));
  /* 125aca91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aca94 mov dword ptr [0x125d5278], eax */
  w32((uint32_t)(0x125d5278), (EAX));
L_125aca99:;
  /* 125aca99 mov esp, ebp */
  ESP = (EBP);
  /* 125aca9b pop ebp */
  EBP = (pop32());
  /* 125aca9c ret  */
  ESPCHK(0x125ac4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caa0 @ 0x125acaa0 (1334 bytes, 427 insns) */
void f_125acaa0(void) {
  FTRACE(0x125acaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125acaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 125acaa1 mov ebp, esp */
  EBP = (ESP);
  /* 125acaa3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125acaa6 push esi */
  push32((uint32_t)(ESI));
  /* 125acaa7 mov eax, dword ptr [0x125d5284] */
  EAX = (r32((uint32_t)(0x125d5284)));
  /* 125acaac imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125acaaf mov ecx, dword ptr [0x125d5288] */
  ECX = (r32((uint32_t)(0x125d5288)));
  /* 125acab5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acab7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 125acaba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125acabd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acac0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 125acac3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 125acac6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125acac9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 125acacc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125acacf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125acad2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acad6 jge 0x125acaec */
  if ((C.sf==C.of)) goto L_125acaec;
  /* 125acad8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125acadb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125acade shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125acae0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125acae3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 125acaea jmp 0x125acb01 */
  goto L_125acb01;
L_125acaec:;
  /* 125acaec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125acaf3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125acaf6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125acaf9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125acafc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125acafe mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_125acb01:;
  /* 125acb01 mov ecx, dword ptr [0x125d527c] */
  ECX = (r32((uint32_t)(0x125d527c)));
  /* 125acb07 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_125acb0a:;
  /* 125acb0a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acb0d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acb10 jae 0x125acb36 */
  if (!C.cf) goto L_125acb36;
  /* 125acb12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acb15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125acb18 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 125acb1a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acb1d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 125acb20 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 125acb23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125acb25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125acb27 je 0x125acb2b */
  if (C.zf) goto L_125acb2b;
  /* 125acb29 jmp 0x125acb36 */
  goto L_125acb36;
L_125acb2b:;
  /* 125acb2b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acb2e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acb31 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125acb34 jmp 0x125acb0a */
  goto L_125acb0a;
L_125acb36:;
  /* 125acb36 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acb39 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acb3c jne 0x125acc1d */
  if (!C.zf) goto L_125acc1d;
  /* 125acb42 mov eax, dword ptr [0x125d5288] */
  EAX = (r32((uint32_t)(0x125d5288)));
  /* 125acb47 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_125acb4a:;
  /* 125acb4a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acb4d cmp ecx, dword ptr [0x125d527c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d527c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acb53 jae 0x125acb79 */
  if (!C.cf) goto L_125acb79;
  /* 125acb55 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acb58 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125acb5b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 125acb5d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acb60 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 125acb63 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 125acb66 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125acb68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125acb6a je 0x125acb6e */
  if (C.zf) goto L_125acb6e;
  /* 125acb6c jmp 0x125acb79 */
  goto L_125acb79;
L_125acb6e:;
  /* 125acb6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acb71 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acb74 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125acb77 jmp 0x125acb4a */
  goto L_125acb4a;
L_125acb79:;
  /* 125acb79 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acb7c cmp ecx, dword ptr [0x125d527c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d527c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acb82 jne 0x125acc1d */
  if (!C.zf) goto L_125acc1d;
L_125acb88:;
  /* 125acb88 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acb8b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acb8e jae 0x125acba6 */
  if (!C.cf) goto L_125acba6;
  /* 125acb90 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acb93 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acb97 je 0x125acb9b */
  if (C.zf) goto L_125acb9b;
  /* 125acb99 jmp 0x125acba6 */
  goto L_125acba6;
L_125acb9b:;
  /* 125acb9b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acb9e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acba1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125acba4 jmp 0x125acb88 */
  goto L_125acb88;
L_125acba6:;
  /* 125acba6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acba9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acbac jne 0x125acbf7 */
  if (!C.zf) goto L_125acbf7;
  /* 125acbae mov eax, dword ptr [0x125d5288] */
  EAX = (r32((uint32_t)(0x125d5288)));
  /* 125acbb3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_125acbb6:;
  /* 125acbb6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acbb9 cmp ecx, dword ptr [0x125d527c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d527c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acbbf jae 0x125acbd7 */
  if (!C.cf) goto L_125acbd7;
  /* 125acbc1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acbc4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acbc8 je 0x125acbcc */
  if (C.zf) goto L_125acbcc;
  /* 125acbca jmp 0x125acbd7 */
  goto L_125acbd7;
L_125acbcc:;
  /* 125acbcc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acbcf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acbd2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125acbd5 jmp 0x125acbb6 */
  goto L_125acbb6;
L_125acbd7:;
  /* 125acbd7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acbda cmp ecx, dword ptr [0x125d527c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d527c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acbe0 jne 0x125acbf7 */
  if (!C.zf) goto L_125acbf7;
  /* 125acbe2 call 0x125acfe0 */
  push32(0x125acbe7u); f_125acfe0();
  /* 125acbe7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125acbea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acbee jne 0x125acbf7 */
  if (!C.zf) goto L_125acbf7;
  /* 125acbf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125acbf2 jmp 0x125acfd1 */
  goto L_125acfd1;
L_125acbf7:;
  /* 125acbf7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acbfa push edx */
  push32((uint32_t)(EDX));
  /* 125acbfb call 0x125ad0f0 */
  push32(0x125acc00u); f_125ad0f0();
  /* 125acc00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125acc03 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acc06 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 125acc09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 125acc0b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acc0e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125acc11 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acc14 jne 0x125acc1d */
  if (!C.zf) goto L_125acc1d;
  /* 125acc16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125acc18 jmp 0x125acfd1 */
  goto L_125acfd1;
L_125acc1d:;
  /* 125acc1d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acc20 mov dword ptr [0x125d527c], edx */
  w32((uint32_t)(0x125d527c), (EDX));
  /* 125acc26 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acc29 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125acc2c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 125acc2f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acc32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125acc34 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 125acc37 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acc3b je 0x125acc60 */
  if (C.zf) goto L_125acc60;
  /* 125acc3d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acc40 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acc43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125acc46 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 125acc4a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acc4d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acc50 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 125acc53 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 125acc5a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 125acc5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125acc5e jne 0x125acc95 */
  if (!C.zf) goto L_125acc95;
L_125acc60:;
  /* 125acc60 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_125acc67:;
  /* 125acc67 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acc6a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acc6d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125acc70 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 125acc74 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acc77 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acc7a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 125acc7d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 125acc84 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 125acc86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125acc88 jne 0x125acc95 */
  if (!C.zf) goto L_125acc95;
  /* 125acc8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acc8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acc90 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 125acc93 jmp 0x125acc67 */
  goto L_125acc67;
L_125acc95:;
  /* 125acc95 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acc98 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125acc9e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acca1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 125acca8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125accab mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125accb2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125accb5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125accb8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125accbb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 125accbf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 125accc2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125accc6 jne 0x125acce2 */
  if (!C.zf) goto L_125acce2;
  /* 125accc8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 125acccf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125accd2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125accd5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 125accd8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 125accdf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_125acce2:;
  /* 125acce2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acce6 jl 0x125accfb */
  if ((C.sf!=C.of)) goto L_125accfb;
  /* 125acce8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125acceb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125acced mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125accf0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125accf3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125accf6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125accf9 jmp 0x125acce2 */
  goto L_125acce2;
L_125accfb:;
  /* 125accfb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125accfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125acd01 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 125acd05 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125acd08 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125acd0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125acd0d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125acd10 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125acd13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125acd16 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 125acd19 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125acd1c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125acd1f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acd23 jle 0x125acd2c */
  if ((C.zf||C.sf!=C.of)) goto L_125acd2c;
  /* 125acd25 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_125acd2c:;
  /* 125acd2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125acd2f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acd32 je 0x125acf50 */
  if (C.zf) goto L_125acf50;
  /* 125acd38 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125acd3b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125acd3e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 125acd41 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acd44 jne 0x125ace1a */
  if (!C.zf) goto L_125ace1a;
  /* 125acd4a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acd4e jge 0x125acdaf */
  if ((C.sf==C.of)) goto L_125acdaf;
  /* 125acd50 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125acd55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125acd58 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125acd5a not eax */
  EAX = (~(EAX));
  /* 125acd5c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acd5f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acd62 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 125acd66 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125acd68 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acd6b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acd6e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 125acd72 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acd75 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acd78 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 125acd7b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125acd7e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acd81 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acd84 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 125acd87 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acd8a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acd8d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125acd91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125acd93 jne 0x125acdad */
  if (!C.zf) goto L_125acdad;
  /* 125acd95 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125acd9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125acd9d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125acd9f not eax */
  EAX = (~(EAX));
  /* 125acda1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acda4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125acda6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125acda8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acdab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125acdad:;
  /* 125acdad jmp 0x125ace1a */
  goto L_125ace1a;
L_125acdaf:;
  /* 125acdaf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125acdb2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125acdb5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125acdba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125acdbc not edx */
  EDX = (~(EDX));
  /* 125acdbe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acdc1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acdc4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 125acdcb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125acdcd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acdd0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acdd3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 125acdda mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acddd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acde0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125acde3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125acde6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acde9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acdec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 125acdef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acdf2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acdf5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125acdf9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125acdfb jne 0x125ace1a */
  if (!C.zf) goto L_125ace1a;
  /* 125acdfd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ace00 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ace03 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ace08 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ace0a not edx */
  EDX = (~(EDX));
  /* 125ace0c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ace0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ace12 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125ace14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ace17 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_125ace1a:;
  /* 125ace1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ace1d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125ace20 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ace23 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125ace26 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 125ace29 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ace2c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ace2f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ace32 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125ace35 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125ace38 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ace3c je 0x125acf50 */
  if (C.zf) goto L_125acf50;
  /* 125ace42 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ace45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ace48 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 125ace4b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125ace4e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ace51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ace54 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ace57 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 125ace5a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ace5d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ace60 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125ace63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ace66 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ace69 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 125ace6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ace6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ace72 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ace75 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 125ace78 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ace7b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ace7e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ace81 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ace84 jne 0x125acf50 */
  if (!C.zf) goto L_125acf50;
  /* 125ace8a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ace8e jge 0x125aceea */
  if ((C.sf==C.of)) goto L_125aceea;
  /* 125ace90 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125ace93 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ace96 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125ace9a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125ace9d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acea0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 125acea3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125acea5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acea8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aceab mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 125aceae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125aceb0 jne 0x125acec8 */
  if (!C.zf) goto L_125acec8;
  /* 125aceb2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125aceb7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125aceba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125acebc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acebf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125acec1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125acec3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acec6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125acec8:;
  /* 125acec8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125acecd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125aced0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125aced2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125aced5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125aced8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 125acedc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125acede mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acee1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acee4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 125acee8 jmp 0x125acf50 */
  goto L_125acf50;
L_125aceea:;
  /* 125aceea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125aceed add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acef0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125acef4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acef7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acefa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 125acefd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125aceff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acf02 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acf05 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 125acf08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125acf0a jne 0x125acf27 */
  if (!C.zf) goto L_125acf27;
  /* 125acf0c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125acf0f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125acf12 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125acf17 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125acf19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acf1c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125acf1f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125acf21 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acf24 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_125acf27:;
  /* 125acf27 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125acf2a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125acf2d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125acf32 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125acf34 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acf37 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acf3a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 125acf41 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125acf43 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acf46 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acf49 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_125acf50:;
  /* 125acf50 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acf54 je 0x125acf6a */
  if (C.zf) goto L_125acf6a;
  /* 125acf56 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125acf59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125acf5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125acf5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125acf61 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acf64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125acf67 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_125acf6a:;
  /* 125acf6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125acf6d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acf70 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125acf73 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125acf76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acf79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125acf7c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125acf7e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125acf81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acf84 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125acf87 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acf8a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 125acf8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125acf90 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125acf92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125acf95 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125acf97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acf9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125acf9d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 125acf9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125acfa1 jne 0x125acfc3 */
  if (!C.zf) goto L_125acfc3;
  /* 125acfa3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125acfa6 cmp eax, dword ptr [0x125d5280] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d5280))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acfac jne 0x125acfc3 */
  if (!C.zf) goto L_125acfc3;
  /* 125acfae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acfb1 cmp ecx, dword ptr [0x125d5278] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d5278))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acfb7 jne 0x125acfc3 */
  if (!C.zf) goto L_125acfc3;
  /* 125acfb9 mov dword ptr [0x125d5280], 0 */
  w32((uint32_t)(0x125d5280), (0x0u));
L_125acfc3:;
  /* 125acfc3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125acfc6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125acfc9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 125acfcb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125acfce add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_125acfd1:;
  /* 125acfd1 pop esi */
  ESI = (pop32());
  /* 125acfd2 mov esp, ebp */
  ESP = (EBP);
  /* 125acfd4 pop ebp */
  EBP = (pop32());
  /* 125acfd5 ret  */
  ESPCHK(0x125acaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfe0 @ 0x125acfe0 (271 bytes, 78 insns) */
void f_125acfe0(void) {
  FTRACE(0x125acfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125acfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 125acfe1 mov ebp, esp */
  EBP = (ESP);
  /* 125acfe3 push ecx */
  push32((uint32_t)(ECX));
  /* 125acfe4 mov eax, dword ptr [0x125d5284] */
  EAX = (r32((uint32_t)(0x125d5284)));
  /* 125acfe9 cmp eax, dword ptr [0x125d5268] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d5268))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125acfef jne 0x125ad03b */
  if (!C.zf) goto L_125ad03b;
  /* 125acff1 mov ecx, dword ptr [0x125d5268] */
  ECX = (r32((uint32_t)(0x125d5268)));
  /* 125acff7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125acffa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125acffd push ecx */
  push32((uint32_t)(ECX));
  /* 125acffe mov edx, dword ptr [0x125d5288] */
  EDX = (r32((uint32_t)(0x125d5288)));
  /* 125ad004 push edx */
  push32((uint32_t)(EDX));
  /* 125ad005 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ad007 mov eax, dword ptr [0x125d528c] */
  EAX = (r32((uint32_t)(0x125d528c)));
  /* 125ad00c push eax */
  push32((uint32_t)(EAX));
  /* 125ad00d call dword ptr [0x125d6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6330))), 0x125ad013u);
  /* 125ad013 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125ad016 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad01a jne 0x125ad023 */
  if (!C.zf) goto L_125ad023;
  /* 125ad01c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ad01e jmp 0x125ad0eb */
  goto L_125ad0eb;
L_125ad023:;
  /* 125ad023 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad026 mov dword ptr [0x125d5288], ecx */
  w32((uint32_t)(0x125d5288), (ECX));
  /* 125ad02c mov edx, dword ptr [0x125d5268] */
  EDX = (r32((uint32_t)(0x125d5268)));
  /* 125ad032 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad035 mov dword ptr [0x125d5268], edx */
  w32((uint32_t)(0x125d5268), (EDX));
L_125ad03b:;
  /* 125ad03b mov eax, dword ptr [0x125d5284] */
  EAX = (r32((uint32_t)(0x125d5284)));
  /* 125ad040 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125ad043 mov ecx, dword ptr [0x125d5288] */
  ECX = (r32((uint32_t)(0x125d5288)));
  /* 125ad049 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad04b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125ad04e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 125ad053 push 8 */
  push32((uint32_t)(0x8u));
  /* 125ad055 mov edx, dword ptr [0x125d528c] */
  EDX = (r32((uint32_t)(0x125d528c)));
  /* 125ad05b push edx */
  push32((uint32_t)(EDX));
  /* 125ad05c call dword ptr [0x125d6328] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6328))), 0x125ad062u);
  /* 125ad062 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad065 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 125ad068 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad06b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad06f jne 0x125ad075 */
  if (!C.zf) goto L_125ad075;
  /* 125ad071 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ad073 jmp 0x125ad0eb */
  goto L_125ad0eb;
L_125ad075:;
  /* 125ad075 push 4 */
  push32((uint32_t)(0x4u));
  /* 125ad077 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 125ad07c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 125ad081 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ad083 call dword ptr [0x125d6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6320))), 0x125ad089u);
  /* 125ad089 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad08c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 125ad08f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad092 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad096 jne 0x125ad0b2 */
  if (!C.zf) goto L_125ad0b2;
  /* 125ad098 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad09b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125ad09e push ecx */
  push32((uint32_t)(ECX));
  /* 125ad09f push 0 */
  push32((uint32_t)(0x0u));
  /* 125ad0a1 mov edx, dword ptr [0x125d528c] */
  EDX = (r32((uint32_t)(0x125d528c)));
  /* 125ad0a7 push edx */
  push32((uint32_t)(EDX));
  /* 125ad0a8 call dword ptr [0x125d6354] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6354))), 0x125ad0aeu);
  /* 125ad0ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ad0b0 jmp 0x125ad0eb */
  goto L_125ad0eb;
L_125ad0b2:;
  /* 125ad0b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad0b5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125ad0bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad0be mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 125ad0c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad0c8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 125ad0cf mov eax, dword ptr [0x125d5284] */
  EAX = (r32((uint32_t)(0x125d5284)));
  /* 125ad0d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad0d7 mov dword ptr [0x125d5284], eax */
  w32((uint32_t)(0x125d5284), (EAX));
  /* 125ad0dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad0df mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 125ad0e2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 125ad0e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125ad0eb:;
  /* 125ad0eb mov esp, ebp */
  ESP = (EBP);
  /* 125ad0ed pop ebp */
  EBP = (pop32());
  /* 125ad0ee ret  */
  ESPCHK(0x125acfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0f0 @ 0x125ad0f0 (494 bytes, 149 insns) */
void f_125ad0f0(void) {
  FTRACE(0x125ad0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ad0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125ad0f1 mov ebp, esp */
  EBP = (ESP);
  /* 125ad0f3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad0f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad0f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125ad0fc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 125ad0ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad102 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125ad105 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125ad108 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_125ad10f:;
  /* 125ad10f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad113 jl 0x125ad128 */
  if ((C.sf!=C.of)) goto L_125ad128;
  /* 125ad115 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ad118 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 125ad11a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125ad11d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ad120 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad123 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 125ad126 jmp 0x125ad10f */
  goto L_125ad10f;
L_125ad128:;
  /* 125ad128 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ad12b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125ad131 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad134 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 125ad13b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125ad13e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125ad145 jmp 0x125ad150 */
  goto L_125ad150;
L_125ad147:;
  /* 125ad147 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad14a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad14d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_125ad150:;
  /* 125ad150 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad154 jge 0x125ad176 */
  if ((C.sf==C.of)) goto L_125ad176;
  /* 125ad156 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad159 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ad15c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 125ad15f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125ad162 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad165 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad168 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 125ad16b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad16e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad171 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 125ad174 jmp 0x125ad147 */
  goto L_125ad147;
L_125ad176:;
  /* 125ad176 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ad179 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 125ad17c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad17f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125ad182 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad184 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125ad187 push 4 */
  push32((uint32_t)(0x4u));
  /* 125ad189 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 125ad18e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 125ad193 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ad196 push edx */
  push32((uint32_t)(EDX));
  /* 125ad197 call dword ptr [0x125d6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6320))), 0x125ad19du);
  /* 125ad19d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ad19f jne 0x125ad1a9 */
  if (!C.zf) goto L_125ad1a9;
  /* 125ad1a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125ad1a4 jmp 0x125ad2da */
  goto L_125ad2da;
L_125ad1a9:;
  /* 125ad1a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ad1ac add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad1b1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125ad1b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ad1b7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125ad1ba jmp 0x125ad1c8 */
  goto L_125ad1c8;
L_125ad1bc:;
  /* 125ad1bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad1bf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad1c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125ad1c8:;
  /* 125ad1c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad1cb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad1ce ja 0x125ad22d */
  if ((!C.cf&&!C.zf)) goto L_125ad22d;
  /* 125ad1d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad1d3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 125ad1da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad1dd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 125ad1e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad1ea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad1ed mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125ad1f0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad1f3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 125ad1f9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad1fc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad202 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad205 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125ad208 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad20b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad211 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad214 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125ad217 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad21a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad21f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125ad222 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ad225 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 125ad22b jmp 0x125ad1bc */
  goto L_125ad1bc;
L_125ad22d:;
  /* 125ad22d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ad230 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad236 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125ad239 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ad23c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad23f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad242 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 125ad245 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad248 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125ad24b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125ad24e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad251 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad254 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 125ad257 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ad25a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad25d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad260 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 125ad263 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad266 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125ad269 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125ad26c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad26f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad272 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 125ad275 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ad278 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad27b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 125ad283 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ad286 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad289 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 125ad294 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad297 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 125ad29b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad29e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 125ad2a1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 125ad2a4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad2a7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 125ad2aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ad2ac jne 0x125ad2bd */
  if (!C.zf) goto L_125ad2bd;
  /* 125ad2ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad2b1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ad2b4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125ad2b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad2ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_125ad2bd:;
  /* 125ad2bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ad2c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ad2c5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ad2c7 not edx */
  EDX = (~(EDX));
  /* 125ad2c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad2cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125ad2cf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125ad2d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad2d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125ad2d7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_125ad2da:;
  /* 125ad2da mov esp, ebp */
  ESP = (EBP);
  /* 125ad2dc pop ebp */
  EBP = (pop32());
  /* 125ad2dd ret  */
  ESPCHK(0x125ad0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2e0 @ 0x125ad2e0 (1515 bytes, 489 insns) */
void f_125ad2e0(void) {
  FTRACE(0x125ad2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ad2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125ad2e1 mov ebp, esp */
  EBP = (ESP);
  /* 125ad2e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad2e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125ad2e9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad2ec and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 125ad2ee mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125ad2f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad2f4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 125ad2f7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 125ad2fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad2fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ad300 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad303 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125ad306 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ad309 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 125ad30c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125ad30f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad312 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125ad318 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad31b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 125ad322 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125ad325 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ad328 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad32b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125ad32e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad331 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125ad333 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad336 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 125ad339 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad33c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad33f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 125ad342 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad345 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125ad347 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125ad34a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ad34d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad350 jle 0x125ad606 */
  if ((C.zf||C.sf!=C.of)) goto L_125ad606;
  /* 125ad356 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ad359 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125ad35c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ad35e jne 0x125ad36b */
  if (!C.zf) goto L_125ad36b;
  /* 125ad360 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ad363 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad366 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad369 jle 0x125ad372 */
  if ((C.zf||C.sf!=C.of)) goto L_125ad372;
L_125ad36b:;
  /* 125ad36b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ad36d jmp 0x125ad8c7 */
  goto L_125ad8c7;
L_125ad372:;
  /* 125ad372 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ad375 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 125ad378 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad37b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125ad37e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad382 jbe 0x125ad38b */
  if ((C.cf||C.zf)) goto L_125ad38b;
  /* 125ad384 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_125ad38b:;
  /* 125ad38b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad38e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad391 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ad394 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad397 jne 0x125ad46d */
  if (!C.zf) goto L_125ad46d;
  /* 125ad39d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad3a1 jae 0x125ad402 */
  if (!C.cf) goto L_125ad402;
  /* 125ad3a3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ad3a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad3ab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ad3ad not edx */
  EDX = (~(EDX));
  /* 125ad3af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad3b2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad3b5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 125ad3b9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125ad3bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad3be mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad3c1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 125ad3c5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad3c8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad3cb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125ad3ce sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125ad3d1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad3d4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad3d7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 125ad3da mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad3dd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad3e0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125ad3e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ad3e6 jne 0x125ad400 */
  if (!C.zf) goto L_125ad400;
  /* 125ad3e8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ad3ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad3f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ad3f2 not edx */
  EDX = (~(EDX));
  /* 125ad3f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad3f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125ad3f9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125ad3fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad3fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125ad400:;
  /* 125ad400 jmp 0x125ad46d */
  goto L_125ad46d;
L_125ad402:;
  /* 125ad402 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad405 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad408 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ad40d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ad40f not eax */
  EAX = (~(EAX));
  /* 125ad411 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad414 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad417 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 125ad41e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125ad420 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad423 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad426 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 125ad42d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad430 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad433 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 125ad436 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125ad439 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad43c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad43f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 125ad442 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad445 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad448 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125ad44c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ad44e jne 0x125ad46d */
  if (!C.zf) goto L_125ad46d;
  /* 125ad450 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad453 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad456 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ad45b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ad45d not eax */
  EAX = (~(EAX));
  /* 125ad45f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad462 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ad465 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125ad467 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad46a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_125ad46d:;
  /* 125ad46d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad470 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125ad473 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad476 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ad479 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 125ad47c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad47f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125ad482 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad485 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125ad488 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 125ad48b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ad48e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad491 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad494 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125ad497 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad49b jle 0x125ad5e7 */
  if ((C.zf||C.sf!=C.of)) goto L_125ad5e7;
  /* 125ad4a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad4a4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad4a7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 125ad4aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ad4ad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 125ad4b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad4b3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125ad4b6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad4ba jbe 0x125ad4c3 */
  if ((C.cf||C.zf)) goto L_125ad4c3;
  /* 125ad4bc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_125ad4c3:;
  /* 125ad4c3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad4c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ad4c9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 125ad4cc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125ad4cf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad4d2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad4d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ad4d8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125ad4db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad4de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad4e1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 125ad4e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad4e7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad4ea mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 125ad4ed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad4f0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ad4f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad4f6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125ad4f9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad4fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad4ff mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ad502 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad505 jne 0x125ad5d3 */
  if (!C.zf) goto L_125ad5d3;
  /* 125ad50b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad50f jae 0x125ad56c */
  if (!C.cf) goto L_125ad56c;
  /* 125ad511 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad514 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad517 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125ad51b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad51e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad521 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125ad524 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 125ad527 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad52a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad52d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 125ad530 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ad532 jne 0x125ad54a */
  if (!C.zf) goto L_125ad54a;
  /* 125ad534 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ad539 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad53c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ad53e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad541 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125ad543 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125ad545 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad548 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125ad54a:;
  /* 125ad54a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ad54f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad552 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ad554 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad557 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad55a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 125ad55e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125ad560 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad563 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad566 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 125ad56a jmp 0x125ad5d3 */
  goto L_125ad5d3;
L_125ad56c:;
  /* 125ad56c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad56f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad572 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125ad576 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad579 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad57c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125ad57f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 125ad582 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad585 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad588 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 125ad58b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ad58d jne 0x125ad5aa */
  if (!C.zf) goto L_125ad5aa;
  /* 125ad58f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad592 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad595 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ad59a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ad59c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad59f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ad5a2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125ad5a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad5a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_125ad5aa:;
  /* 125ad5aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad5ad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad5b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ad5b5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ad5b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad5ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad5bd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 125ad5c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125ad5c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad5c9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad5cc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_125ad5d3:;
  /* 125ad5d3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad5d6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ad5d9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 125ad5db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad5de add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad5e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ad5e4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_125ad5e7:;
  /* 125ad5e7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ad5ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad5ed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad5f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125ad5f2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ad5f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad5f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad5fb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad5fe mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 125ad601 jmp 0x125ad8c2 */
  goto L_125ad8c2;
L_125ad606:;
  /* 125ad606 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ad609 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad60c jge 0x125ad8c2 */
  if ((C.sf==C.of)) goto L_125ad8c2;
  /* 125ad612 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ad615 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad618 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad61b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125ad61d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125ad620 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad623 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad626 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad629 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 125ad62c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad62f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad632 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125ad635 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ad638 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad63b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125ad63e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ad641 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 125ad644 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad647 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125ad64a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad64e jbe 0x125ad657 */
  if ((C.cf||C.zf)) goto L_125ad657;
  /* 125ad650 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_125ad657:;
  /* 125ad657 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ad65a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125ad65d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ad65f jne 0x125ad7a0 */
  if (!C.zf) goto L_125ad7a0;
  /* 125ad665 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ad668 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 125ad66b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad66e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125ad671 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad675 jbe 0x125ad67e */
  if ((C.cf||C.zf)) goto L_125ad67e;
  /* 125ad677 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_125ad67e:;
  /* 125ad67e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad681 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad684 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ad687 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad68a jne 0x125ad760 */
  if (!C.zf) goto L_125ad760;
  /* 125ad690 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad694 jae 0x125ad6f5 */
  if (!C.cf) goto L_125ad6f5;
  /* 125ad696 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ad69b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad69e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ad6a0 not edx */
  EDX = (~(EDX));
  /* 125ad6a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad6a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad6a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 125ad6ac and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125ad6ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad6b1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad6b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 125ad6b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad6bb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad6be mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125ad6c1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125ad6c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad6c7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad6ca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 125ad6cd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad6d0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad6d3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125ad6d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ad6d9 jne 0x125ad6f3 */
  if (!C.zf) goto L_125ad6f3;
  /* 125ad6db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ad6e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad6e3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ad6e5 not edx */
  EDX = (~(EDX));
  /* 125ad6e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad6ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125ad6ec and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125ad6ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad6f1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125ad6f3:;
  /* 125ad6f3 jmp 0x125ad760 */
  goto L_125ad760;
L_125ad6f5:;
  /* 125ad6f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad6f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad6fb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ad700 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ad702 not eax */
  EAX = (~(EAX));
  /* 125ad704 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad707 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad70a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 125ad711 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125ad713 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad716 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad719 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 125ad720 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad723 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad726 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 125ad729 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125ad72c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad72f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad732 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 125ad735 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad738 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad73b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125ad73f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ad741 jne 0x125ad760 */
  if (!C.zf) goto L_125ad760;
  /* 125ad743 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ad746 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad749 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ad74e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ad750 not eax */
  EAX = (~(EAX));
  /* 125ad752 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad755 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ad758 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125ad75a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad75d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_125ad760:;
  /* 125ad760 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad763 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125ad766 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad769 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ad76c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 125ad76f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad772 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125ad775 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ad778 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125ad77b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 125ad77e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ad781 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad784 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125ad787 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ad78a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 125ad78d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad790 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125ad793 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad797 jbe 0x125ad7a0 */
  if ((C.cf||C.zf)) goto L_125ad7a0;
  /* 125ad799 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_125ad7a0:;
  /* 125ad7a0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ad7a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ad7a6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 125ad7a9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125ad7ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad7af mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad7b2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ad7b5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 125ad7b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad7bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad7be mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125ad7c1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ad7c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad7c7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 125ad7ca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad7cd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ad7d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad7d3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 125ad7d6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad7d9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad7dc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ad7df cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad7e2 jne 0x125ad8ae */
  if (!C.zf) goto L_125ad8ae;
  /* 125ad7e8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad7ec jae 0x125ad848 */
  if (!C.cf) goto L_125ad848;
  /* 125ad7ee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad7f1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad7f4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125ad7f8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad7fb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad7fe mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 125ad801 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125ad803 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad806 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad809 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 125ad80c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ad80e jne 0x125ad826 */
  if (!C.zf) goto L_125ad826;
  /* 125ad810 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ad815 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ad818 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ad81a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad81d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125ad81f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125ad821 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad824 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125ad826:;
  /* 125ad826 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ad82b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ad82e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ad830 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad833 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad836 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 125ad83a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125ad83c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad83f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad842 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 125ad846 jmp 0x125ad8ae */
  goto L_125ad8ae;
L_125ad848:;
  /* 125ad848 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad84b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad84e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125ad852 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad855 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad858 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 125ad85b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125ad85d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad860 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad863 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 125ad866 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ad868 jne 0x125ad885 */
  if (!C.zf) goto L_125ad885;
  /* 125ad86a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ad86d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad870 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125ad875 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125ad877 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad87a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ad87d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125ad87f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ad882 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_125ad885:;
  /* 125ad885 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ad888 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad88b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ad890 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ad892 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad895 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad898 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 125ad89f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125ad8a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad8a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125ad8a7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_125ad8ae:;
  /* 125ad8ae mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad8b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ad8b4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125ad8b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ad8b9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad8bc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ad8bf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_125ad8c2:;
  /* 125ad8c2 mov eax, 1 */
  EAX = (0x1u);
L_125ad8c7:;
  /* 125ad8c7 mov esp, ebp */
  ESP = (EBP);
  /* 125ad8c9 pop ebp */
  EBP = (pop32());
  /* 125ad8ca ret  */
  ESPCHK(0x125ad2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8d0 @ 0x125ad8d0 (304 bytes, 79 insns) */
void f_125ad8d0(void) {
  FTRACE(0x125ad8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ad8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125ad8d1 mov ebp, esp */
  EBP = (ESP);
  /* 125ad8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 125ad8d4 cmp dword ptr [0x125d5280], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d5280))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad8db je 0x125ad9fc */
  if (C.zf) goto L_125ad9fc;
  /* 125ad8e1 mov eax, dword ptr [0x125d5278] */
  EAX = (r32((uint32_t)(0x125d5278)));
  /* 125ad8e6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 125ad8e9 mov ecx, dword ptr [0x125d5280] */
  ECX = (r32((uint32_t)(0x125d5280)));
  /* 125ad8ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125ad8f2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad8f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125ad8f7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 125ad8fc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 125ad901 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ad904 push eax */
  push32((uint32_t)(EAX));
  /* 125ad905 call dword ptr [0x125d6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6344))), 0x125ad90bu);
  /* 125ad90b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125ad910 mov ecx, dword ptr [0x125d5278] */
  ECX = (r32((uint32_t)(0x125d5278)));
  /* 125ad916 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125ad918 mov eax, dword ptr [0x125d5280] */
  EAX = (r32((uint32_t)(0x125d5280)));
  /* 125ad91d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125ad920 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125ad922 mov edx, dword ptr [0x125d5280] */
  EDX = (r32((uint32_t)(0x125d5280)));
  /* 125ad928 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125ad92b mov eax, dword ptr [0x125d5280] */
  EAX = (r32((uint32_t)(0x125d5280)));
  /* 125ad930 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125ad933 mov edx, dword ptr [0x125d5278] */
  EDX = (r32((uint32_t)(0x125d5278)));
  /* 125ad939 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 125ad944 mov eax, dword ptr [0x125d5280] */
  EAX = (r32((uint32_t)(0x125d5280)));
  /* 125ad949 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125ad94c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 125ad94f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125ad952 mov eax, dword ptr [0x125d5280] */
  EAX = (r32((uint32_t)(0x125d5280)));
  /* 125ad957 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125ad95a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 125ad95d mov edx, dword ptr [0x125d5280] */
  EDX = (r32((uint32_t)(0x125d5280)));
  /* 125ad963 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125ad966 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 125ad96a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ad96c jne 0x125ad982 */
  if (!C.zf) goto L_125ad982;
  /* 125ad96e mov edx, dword ptr [0x125d5280] */
  EDX = (r32((uint32_t)(0x125d5280)));
  /* 125ad974 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125ad977 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 125ad979 mov ecx, dword ptr [0x125d5280] */
  ECX = (r32((uint32_t)(0x125d5280)));
  /* 125ad97f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_125ad982:;
  /* 125ad982 mov edx, dword ptr [0x125d5280] */
  EDX = (r32((uint32_t)(0x125d5280)));
  /* 125ad988 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad98c jne 0x125ad9f2 */
  if (!C.zf) goto L_125ad9f2;
  /* 125ad98e cmp dword ptr [0x125d5284], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d5284))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ad995 jle 0x125ad9f2 */
  if ((C.zf||C.sf!=C.of)) goto L_125ad9f2;
  /* 125ad997 mov eax, dword ptr [0x125d5280] */
  EAX = (r32((uint32_t)(0x125d5280)));
  /* 125ad99c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125ad99f push ecx */
  push32((uint32_t)(ECX));
  /* 125ad9a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ad9a2 mov edx, dword ptr [0x125d528c] */
  EDX = (r32((uint32_t)(0x125d528c)));
  /* 125ad9a8 push edx */
  push32((uint32_t)(EDX));
  /* 125ad9a9 call dword ptr [0x125d6354] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6354))), 0x125ad9afu);
  /* 125ad9af mov eax, dword ptr [0x125d5284] */
  EAX = (r32((uint32_t)(0x125d5284)));
  /* 125ad9b4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125ad9b7 mov ecx, dword ptr [0x125d5288] */
  ECX = (r32((uint32_t)(0x125d5288)));
  /* 125ad9bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad9bf mov edx, dword ptr [0x125d5280] */
  EDX = (r32((uint32_t)(0x125d5280)));
  /* 125ad9c5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad9c8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad9ca push ecx */
  push32((uint32_t)(ECX));
  /* 125ad9cb mov eax, dword ptr [0x125d5280] */
  EAX = (r32((uint32_t)(0x125d5280)));
  /* 125ad9d0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad9d3 push eax */
  push32((uint32_t)(EAX));
  /* 125ad9d4 mov ecx, dword ptr [0x125d5280] */
  ECX = (r32((uint32_t)(0x125d5280)));
  /* 125ad9da push ecx */
  push32((uint32_t)(ECX));
  /* 125ad9db call 0x125b0000 */
  push32(0x125ad9e0u); f_125b0000();
  /* 125ad9e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ad9e3 mov edx, dword ptr [0x125d5284] */
  EDX = (r32((uint32_t)(0x125d5284)));
  /* 125ad9e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ad9ec mov dword ptr [0x125d5284], edx */
  w32((uint32_t)(0x125d5284), (EDX));
L_125ad9f2:;
  /* 125ad9f2 mov dword ptr [0x125d5280], 0 */
  w32((uint32_t)(0x125d5280), (0x0u));
L_125ad9fc:;
  /* 125ad9fc mov esp, ebp */
  ESP = (EBP);
  /* 125ad9fe pop ebp */
  EBP = (pop32());
  /* 125ad9ff ret  */
  ESPCHK(0x125ad8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da00 @ 0x125ada00 (1565 bytes, 343 insns) */
void f_125ada00(void) {
  FTRACE(0x125ada00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ada00 push ebp */
  push32((uint32_t)(EBP));
  /* 125ada01 mov ebp, esp */
  EBP = (ESP);
  /* 125ada03 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ada09 mov eax, dword ptr [0x125d5284] */
  EAX = (r32((uint32_t)(0x125d5284)));
  /* 125ada0e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125ada11 push eax */
  push32((uint32_t)(EAX));
  /* 125ada12 mov ecx, dword ptr [0x125d5288] */
  ECX = (r32((uint32_t)(0x125d5288)));
  /* 125ada18 push ecx */
  push32((uint32_t)(ECX));
  /* 125ada19 call dword ptr [0x125d63bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63bc))), 0x125ada1fu);
  /* 125ada1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ada21 je 0x125ada2b */
  if (C.zf) goto L_125ada2b;
  /* 125ada23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125ada26 jmp 0x125ae019 */
  goto L_125ae019;
L_125ada2b:;
  /* 125ada2b mov edx, dword ptr [0x125d5288] */
  EDX = (r32((uint32_t)(0x125d5288)));
  /* 125ada31 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 125ada37 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 125ada41 jmp 0x125ada52 */
  goto L_125ada52;
L_125ada43:;
  /* 125ada43 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 125ada49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ada4c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_125ada52:;
  /* 125ada52 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 125ada58 cmp ecx, dword ptr [0x125d5284] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d5284))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ada5e jge 0x125ae017 */
  if ((C.sf==C.of)) goto L_125ae017;
  /* 125ada64 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 125ada6a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125ada6d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 125ada73 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 125ada78 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 125ada7e push ecx */
  push32((uint32_t)(ECX));
  /* 125ada7f call dword ptr [0x125d63bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63bc))), 0x125ada85u);
  /* 125ada85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ada87 je 0x125ada93 */
  if (C.zf) goto L_125ada93;
  /* 125ada89 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 125ada8e jmp 0x125ae019 */
  goto L_125ae019;
L_125ada93:;
  /* 125ada93 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 125ada99 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125ada9c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 125adaa2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 125adaa8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125adaae mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125adab1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 125adab7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125adaba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125adabd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 125adac7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 125adad1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125adad8 jmp 0x125adae3 */
  goto L_125adae3;
L_125adada:;
  /* 125adada mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125adadd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125adae0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_125adae3:;
  /* 125adae3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adae7 jge 0x125adfdb */
  if ((C.sf==C.of)) goto L_125adfdb;
  /* 125adaed mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 125adaf7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 125adb01 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 125adb0b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 125adb15 jmp 0x125adb26 */
  goto L_125adb26;
L_125adb17:;
  /* 125adb17 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 125adb1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125adb20 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_125adb26:;
  /* 125adb26 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adb2d jge 0x125adb42 */
  if ((C.sf==C.of)) goto L_125adb42;
  /* 125adb2f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 125adb35 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 125adb40 jmp 0x125adb17 */
  goto L_125adb17;
L_125adb42:;
  /* 125adb42 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adb46 jl 0x125adf7d */
  if ((C.sf!=C.of)) goto L_125adf7d;
  /* 125adb4c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 125adb51 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 125adb57 push ecx */
  push32((uint32_t)(ECX));
  /* 125adb58 call dword ptr [0x125d63bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63bc))), 0x125adb5eu);
  /* 125adb5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125adb60 je 0x125adb6c */
  if (C.zf) goto L_125adb6c;
  /* 125adb62 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 125adb67 jmp 0x125ae019 */
  goto L_125ae019;
L_125adb6c:;
  /* 125adb6c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 125adb72 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125adb75 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 125adb7f jmp 0x125adb90 */
  goto L_125adb90;
L_125adb81:;
  /* 125adb81 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 125adb87 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125adb8a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_125adb90:;
  /* 125adb90 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adb97 jge 0x125add14 */
  if ((C.sf==C.of)) goto L_125add14;
  /* 125adb9d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125adba0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125adba3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 125adba9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 125adbaf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125adbb5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 125adbbb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 125adbc1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adbc5 jne 0x125adbd2 */
  if (!C.zf) goto L_125adbd2;
  /* 125adbc7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 125adbcd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adbd0 je 0x125adbdc */
  if (C.zf) goto L_125adbdc;
L_125adbd2:;
  /* 125adbd2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 125adbd7 jmp 0x125ae019 */
  goto L_125ae019;
L_125adbdc:;
  /* 125adbdc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 125adbe2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125adbe4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 125adbea mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 125adbf0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 125adbf6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 125adbfc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125adbff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125adc01 je 0x125adc39 */
  if (C.zf) goto L_125adc39;
  /* 125adc03 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 125adc09 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125adc0c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 125adc12 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adc1c jle 0x125adc28 */
  if ((C.zf||C.sf!=C.of)) goto L_125adc28;
  /* 125adc1e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 125adc23 jmp 0x125ae019 */
  goto L_125ae019;
L_125adc28:;
  /* 125adc28 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 125adc2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125adc31 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 125adc37 jmp 0x125adc7b */
  goto L_125adc7b;
L_125adc39:;
  /* 125adc39 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 125adc3f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 125adc42 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125adc45 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 125adc4b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adc52 jle 0x125adc5e */
  if ((C.zf||C.sf!=C.of)) goto L_125adc5e;
  /* 125adc54 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_125adc5e:;
  /* 125adc5e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 125adc64 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 125adc6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125adc6e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 125adc74 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_125adc7b:;
  /* 125adc7b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adc82 jl 0x125adc9d */
  if ((C.sf!=C.of)) goto L_125adc9d;
  /* 125adc84 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 125adc8a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 125adc8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125adc8f jne 0x125adc9d */
  if (!C.zf) goto L_125adc9d;
  /* 125adc91 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adc9b jle 0x125adca7 */
  if ((C.zf||C.sf!=C.of)) goto L_125adca7;
L_125adc9d:;
  /* 125adc9d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 125adca2 jmp 0x125ae019 */
  goto L_125ae019;
L_125adca7:;
  /* 125adca7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 125adcad add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125adcb3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 125adcb6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adcbc je 0x125adcc8 */
  if (C.zf) goto L_125adcc8;
  /* 125adcbe mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 125adcc3 jmp 0x125ae019 */
  goto L_125ae019;
L_125adcc8:;
  /* 125adcc8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 125adcce add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125adcd4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 125adcda mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 125adce0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adce6 jb 0x125adbdc */
  if (C.cf) goto L_125adbdc;
  /* 125adcec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 125adcf2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adcf8 je 0x125add04 */
  if (C.zf) goto L_125add04;
  /* 125adcfa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 125adcff jmp 0x125ae019 */
  goto L_125ae019;
L_125add04:;
  /* 125add04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125add07 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125add0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125add0f jmp 0x125adb81 */
  goto L_125adb81;
L_125add14:;
  /* 125add14 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125add17 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125add19 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125add1f je 0x125add2b */
  if (C.zf) goto L_125add2b;
  /* 125add21 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 125add26 jmp 0x125ae019 */
  goto L_125ae019;
L_125add2b:;
  /* 125add2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125add2e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 125add34 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 125add3b jmp 0x125add46 */
  goto L_125add46;
L_125add3d:;
  /* 125add3d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125add40 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125add43 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_125add46:;
  /* 125add46 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125add4a jge 0x125adf7d */
  if ((C.sf==C.of)) goto L_125adf7d;
  /* 125add50 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 125add5a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 125add60 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_125add66:;
  /* 125add66 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 125add6c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125add6f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 125add75 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 125add7b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125add81 je 0x125adeaa */
  if (C.zf) goto L_125adeaa;
  /* 125add87 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125add8a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 125add90 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125add97 je 0x125adeaa */
  if (C.zf) goto L_125adeaa;
  /* 125add9d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 125adda3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adda9 jb 0x125addbe */
  if (C.cf) goto L_125addbe;
  /* 125addab mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 125addb1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125addb6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125addbc jb 0x125addc8 */
  if (C.cf) goto L_125addc8;
L_125addbe:;
  /* 125addbe mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 125addc3 jmp 0x125ae019 */
  goto L_125ae019;
L_125addc8:;
  /* 125addc8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 125addce and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 125addd4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 125addda mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 125adde0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125adde3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125adde6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125adde9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125addee mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_125addf4:;
  /* 125addf4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125addf7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125addfd je 0x125ade1e */
  if (C.zf) goto L_125ade1e;
  /* 125addff mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ade02 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ade08 jne 0x125ade0c */
  if (!C.zf) goto L_125ade0c;
  /* 125ade0a jmp 0x125ade1e */
  goto L_125ade1e;
L_125ade0c:;
  /* 125ade0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ade0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125ade11 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 125ade14 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ade17 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ade19 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125ade1c jmp 0x125addf4 */
  goto L_125addf4;
L_125ade1e:;
  /* 125ade1e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ade21 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ade27 jne 0x125ade33 */
  if (!C.zf) goto L_125ade33;
  /* 125ade29 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 125ade2e jmp 0x125ae019 */
  goto L_125ae019;
L_125ade33:;
  /* 125ade33 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 125ade39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125ade3b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 125ade3e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ade41 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 125ade47 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ade4e jle 0x125ade5a */
  if ((C.zf||C.sf!=C.of)) goto L_125ade5a;
  /* 125ade50 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_125ade5a:;
  /* 125ade5a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 125ade60 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ade63 je 0x125ade6f */
  if (C.zf) goto L_125ade6f;
  /* 125ade65 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 125ade6a jmp 0x125ae019 */
  goto L_125ae019;
L_125ade6f:;
  /* 125ade6f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 125ade75 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125ade78 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ade7e je 0x125ade8a */
  if (C.zf) goto L_125ade8a;
  /* 125ade80 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 125ade85 jmp 0x125ae019 */
  goto L_125ae019;
L_125ade8a:;
  /* 125ade8a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 125ade90 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 125ade96 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 125ade9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ade9f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 125adea5 jmp 0x125add66 */
  goto L_125add66;
L_125adeaa:;
  /* 125adeaa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adeb1 je 0x125adf21 */
  if (C.zf) goto L_125adf21;
  /* 125adeb3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adeb7 jge 0x125adeeb */
  if ((C.sf==C.of)) goto L_125adeeb;
  /* 125adeb9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125adebe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125adec1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125adec3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 125adec9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125adecb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 125aded1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125aded6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125aded9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125adedb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 125adee1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125adee3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 125adee9 jmp 0x125adf21 */
  goto L_125adf21;
L_125adeeb:;
  /* 125adeeb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125adeee sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125adef1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125adef6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125adef8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 125adefe or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125adf00 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 125adf06 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125adf09 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125adf0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125adf11 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125adf13 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 125adf19 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125adf1b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_125adf21:;
  /* 125adf21 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 125adf27 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125adf2a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adf30 jne 0x125adf44 */
  if (!C.zf) goto L_125adf44;
  /* 125adf32 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125adf35 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 125adf3b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adf42 je 0x125adf4e */
  if (C.zf) goto L_125adf4e;
L_125adf44:;
  /* 125adf44 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 125adf49 jmp 0x125ae019 */
  goto L_125ae019;
L_125adf4e:;
  /* 125adf4e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 125adf54 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125adf57 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adf5d je 0x125adf69 */
  if (C.zf) goto L_125adf69;
  /* 125adf5f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 125adf64 jmp 0x125ae019 */
  goto L_125ae019;
L_125adf69:;
  /* 125adf69 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 125adf6f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125adf72 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 125adf78 jmp 0x125add3d */
  goto L_125add3d;
L_125adf7d:;
  /* 125adf7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125adf80 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 125adf86 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 125adf8c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adf90 jne 0x125adfaa */
  if (!C.zf) goto L_125adfaa;
  /* 125adf92 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125adf95 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 125adf9b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 125adfa1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adfa8 je 0x125adfb1 */
  if (C.zf) goto L_125adfb1;
L_125adfaa:;
  /* 125adfaa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 125adfaf jmp 0x125ae019 */
  goto L_125ae019;
L_125adfb1:;
  /* 125adfb1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 125adfb7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125adfbd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 125adfc3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125adfc6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125adfcb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125adfce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125adfd1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 125adfd3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125adfd6 jmp 0x125adada */
  goto L_125adada;
L_125adfdb:;
  /* 125adfdb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 125adfe1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 125adfe7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adfe9 jne 0x125adffc */
  if (!C.zf) goto L_125adffc;
  /* 125adfeb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 125adff1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 125adff7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125adffa je 0x125ae003 */
  if (C.zf) goto L_125ae003;
L_125adffc:;
  /* 125adffc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 125ae001 jmp 0x125ae019 */
  goto L_125ae019;
L_125ae003:;
  /* 125ae003 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 125ae009 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae00c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 125ae012 jmp 0x125ada43 */
  goto L_125ada43;
L_125ae017:;
  /* 125ae017 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125ae019:;
  /* 125ae019 mov esp, ebp */
  ESP = (EBP);
  /* 125ae01b pop ebp */
  EBP = (pop32());
  /* 125ae01c ret  */
  ESPCHK(0x125ada00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e020 @ 0x125ae020 (250 bytes, 92 insns) */
void f_125ae020(void) {
  FTRACE(0x125ae020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ae020 push ebp */
  push32((uint32_t)(EBP));
  /* 125ae021 mov ebp, esp */
  EBP = (ESP);
  /* 125ae023 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ae026 push ebx */
  push32((uint32_t)(EBX));
  /* 125ae027 push esi */
  push32((uint32_t)(ESI));
  /* 125ae028 push edi */
  push32((uint32_t)(EDI));
  /* 125ae029 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 125ae02c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125ae02f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 125ae032 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_125ae035:;
  /* 125ae035 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae039 jne 0x125ae059 */
  if (!C.zf) goto L_125ae059;
  /* 125ae03b push 0x125cf5a8 */
  push32((uint32_t)(0x125cf5a8u));
  /* 125ae040 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ae042 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 125ae044 push 0x125cf59c */
  push32((uint32_t)(0x125cf59cu));
  /* 125ae049 push 2 */
  push32((uint32_t)(0x2u));
  /* 125ae04b call 0x125a71d0 */
  push32(0x125ae050u); f_125a71d0();
  /* 125ae050 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae053 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae056 jne 0x125ae059 */
  if (!C.zf) goto L_125ae059;
  /* 125ae058 int3  */
  x86_unimpl("int3 @ 0x125ae058");
L_125ae059:;
  /* 125ae059 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125ae05b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ae05d jne 0x125ae035 */
  if (!C.zf) goto L_125ae035;
L_125ae05f:;
  /* 125ae05f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae063 jne 0x125ae083 */
  if (!C.zf) goto L_125ae083;
  /* 125ae065 push 0x125cf58c */
  push32((uint32_t)(0x125cf58cu));
  /* 125ae06a push 0 */
  push32((uint32_t)(0x0u));
  /* 125ae06c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 125ae06e push 0x125cf59c */
  push32((uint32_t)(0x125cf59cu));
  /* 125ae073 push 2 */
  push32((uint32_t)(0x2u));
  /* 125ae075 call 0x125a71d0 */
  push32(0x125ae07au); f_125a71d0();
  /* 125ae07a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae07d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae080 jne 0x125ae083 */
  if (!C.zf) goto L_125ae083;
  /* 125ae082 int3  */
  x86_unimpl("int3 @ 0x125ae082");
L_125ae083:;
  /* 125ae083 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ae085 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ae087 jne 0x125ae05f */
  if (!C.zf) goto L_125ae05f;
  /* 125ae089 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae08c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 125ae093 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ae099 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125ae09c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae09f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ae0a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 125ae0a4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae0a7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 125ae0ae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ae0b1 push ecx */
  push32((uint32_t)(ECX));
  /* 125ae0b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ae0b5 push edx */
  push32((uint32_t)(EDX));
  /* 125ae0b6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae0b9 push eax */
  push32((uint32_t)(EAX));
  /* 125ae0ba call 0x125af0a0 */
  push32(0x125ae0bfu); f_125af0a0();
  /* 125ae0bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae0c2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125ae0c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae0c8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ae0cb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ae0ce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae0d1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125ae0d4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae0d7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae0db jl 0x125ae0ff */
  if ((C.sf!=C.of)) goto L_125ae0ff;
  /* 125ae0dd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae0e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125ae0e2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125ae0e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125ae0e7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125ae0ed mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 125ae0f0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae0f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125ae0f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae0f8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae0fb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125ae0fd jmp 0x125ae110 */
  goto L_125ae110;
L_125ae0ff:;
  /* 125ae0ff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae102 push edx */
  push32((uint32_t)(EDX));
  /* 125ae103 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ae105 call 0x125aee20 */
  push32(0x125ae10au); f_125aee20();
  /* 125ae10a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae10d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_125ae110:;
  /* 125ae110 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ae113 pop edi */
  EDI = (pop32());
  /* 125ae114 pop esi */
  ESI = (pop32());
  /* 125ae115 pop ebx */
  EBX = (pop32());
  /* 125ae116 mov esp, ebp */
  ESP = (EBP);
  /* 125ae118 pop ebp */
  EBP = (pop32());
  /* 125ae119 ret  */
  ESPCHK(0x125ae020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e120 @ 0x125ae120 (183 bytes, 58 insns) */
void f_125ae120(void) {
  FTRACE(0x125ae120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ae120 push ebp */
  push32((uint32_t)(EBP));
  /* 125ae121 mov ebp, esp */
  EBP = (ESP);
  /* 125ae123 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ae126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ae129 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae12c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae131 ja 0x125ae14a */
  if ((!C.cf&&!C.zf)) goto L_125ae14a;
  /* 125ae133 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ae136 mov edx, dword ptr [0x125d1c98] */
  EDX = (r32((uint32_t)(0x125d1c98)));
  /* 125ae13c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ae13e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 125ae142 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 125ae145 jmp 0x125ae1d3 */
  goto L_125ae1d3;
L_125ae14a:;
  /* 125ae14a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ae14d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 125ae150 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125ae156 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125ae15c mov edx, dword ptr [0x125d1c98] */
  EDX = (r32((uint32_t)(0x125d1c98)));
  /* 125ae162 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ae164 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 125ae168 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 125ae16d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ae16f je 0x125ae193 */
  if (C.zf) goto L_125ae193;
  /* 125ae171 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ae174 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 125ae177 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125ae17d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 125ae180 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 125ae183 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 125ae186 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 125ae18a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 125ae191 jmp 0x125ae1a4 */
  goto L_125ae1a4;
L_125ae193:;
  /* 125ae193 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 125ae196 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 125ae199 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 125ae19d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_125ae1a4:;
  /* 125ae1a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125ae1a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ae1a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ae1aa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 125ae1ad push ecx */
  push32((uint32_t)(ECX));
  /* 125ae1ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ae1b1 push edx */
  push32((uint32_t)(EDX));
  /* 125ae1b2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 125ae1b5 push eax */
  push32((uint32_t)(EAX));
  /* 125ae1b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125ae1b8 call 0x125b0340 */
  push32(0x125ae1bdu); f_125b0340();
  /* 125ae1bd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae1c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ae1c2 jne 0x125ae1c8 */
  if (!C.zf) goto L_125ae1c8;
  /* 125ae1c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ae1c6 jmp 0x125ae1d3 */
  goto L_125ae1d3;
L_125ae1c8:;
  /* 125ae1c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae1cb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125ae1d0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_125ae1d3:;
  /* 125ae1d3 mov esp, ebp */
  ESP = (EBP);
  /* 125ae1d5 pop ebp */
  EBP = (pop32());
  /* 125ae1d6 ret  */
  ESPCHK(0x125ae120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1e0 @ 0x125ae1e0 (836 bytes, 238 insns) */
void f_125ae1e0(void) {
  FTRACE(0x125ae1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ae1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125ae1e1 mov ebp, esp */
  EBP = (ESP);
  /* 125ae1e3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ae1e6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125ae1e8 call 0x125abb10 */
  push32(0x125ae1edu); f_125abb10();
  /* 125ae1ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae1f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ae1f3 push eax */
  push32((uint32_t)(EAX));
  /* 125ae1f4 call 0x125ae530 */
  push32(0x125ae1f9u); f_125ae530();
  /* 125ae1f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae1fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125ae1ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ae202 cmp ecx, dword ptr [0x125d4fc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d4fc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae208 jne 0x125ae21b */
  if (!C.zf) goto L_125ae21b;
  /* 125ae20a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125ae20c call 0x125abbb0 */
  push32(0x125ae211u); f_125abbb0();
  /* 125ae211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae214 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ae216 jmp 0x125ae520 */
  goto L_125ae520;
L_125ae21b:;
  /* 125ae21b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae21f jne 0x125ae23c */
  if (!C.zf) goto L_125ae23c;
  /* 125ae221 call 0x125ae610 */
  push32(0x125ae226u); f_125ae610();
  /* 125ae226 call 0x125ae690 */
  push32(0x125ae22bu); f_125ae690();
  /* 125ae22b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125ae22d call 0x125abbb0 */
  push32(0x125ae232u); f_125abbb0();
  /* 125ae232 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae235 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ae237 jmp 0x125ae520 */
  goto L_125ae520;
L_125ae23c:;
  /* 125ae23c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125ae243 jmp 0x125ae24e */
  goto L_125ae24e;
L_125ae245:;
  /* 125ae245 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae248 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae24b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125ae24e:;
  /* 125ae24e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae252 jae 0x125ae39f */
  if (!C.cf) goto L_125ae39f;
  /* 125ae258 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae25b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125ae25e mov ecx, dword ptr [eax + 0x125d1eb8] */
  ECX = (r32((uint32_t)(EAX + 0x125d1eb8)));
  /* 125ae264 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae267 jne 0x125ae39a */
  if (!C.zf) goto L_125ae39a;
  /* 125ae26d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125ae274 jmp 0x125ae27f */
  goto L_125ae27f;
L_125ae276:;
  /* 125ae276 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae279 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae27c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_125ae27f:;
  /* 125ae27f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae286 jae 0x125ae294 */
  if (!C.cf) goto L_125ae294;
  /* 125ae288 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae28b mov byte ptr [eax + 0x125d5160], 0 */
  w8((uint32_t)(EAX + 0x125d5160), (0x0u));
  /* 125ae292 jmp 0x125ae276 */
  goto L_125ae276;
L_125ae294:;
  /* 125ae294 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125ae29b jmp 0x125ae2a6 */
  goto L_125ae2a6;
L_125ae29d:;
  /* 125ae29d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ae2a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae2a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_125ae2a6:;
  /* 125ae2a6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae2aa jae 0x125ae327 */
  if (!C.cf) goto L_125ae327;
  /* 125ae2ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae2af imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125ae2b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ae2b5 lea ecx, [edx + eax*8 + 0x125d1ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x125d1ec8));
  /* 125ae2bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125ae2bf jmp 0x125ae2ca */
  goto L_125ae2ca;
L_125ae2c1:;
  /* 125ae2c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ae2c4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae2c7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125ae2ca:;
  /* 125ae2ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ae2cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125ae2cf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125ae2d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ae2d3 je 0x125ae322 */
  if (C.zf) goto L_125ae322;
  /* 125ae2d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ae2d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ae2da mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125ae2dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ae2df je 0x125ae322 */
  if (C.zf) goto L_125ae322;
  /* 125ae2e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ae2e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125ae2e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125ae2e8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125ae2eb jmp 0x125ae2f6 */
  goto L_125ae2f6;
L_125ae2ed:;
  /* 125ae2ed mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae2f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae2f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125ae2f6:;
  /* 125ae2f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ae2f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125ae2fb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 125ae2fe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae301 ja 0x125ae320 */
  if ((!C.cf&&!C.zf)) goto L_125ae320;
  /* 125ae303 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae306 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ae309 mov dl, byte ptr [eax + 0x125d5161] */
  DL = (r8((uint32_t)(EAX + 0x125d5161)));
  /* 125ae30f or dl, byte ptr [ecx + 0x125d1eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x125d1eb0))); DL = (_r); fl_logic(_r,8); }
  /* 125ae315 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae318 mov byte ptr [eax + 0x125d5161], dl */
  w8((uint32_t)(EAX + 0x125d5161), (DL));
  /* 125ae31e jmp 0x125ae2ed */
  goto L_125ae2ed;
L_125ae320:;
  /* 125ae320 jmp 0x125ae2c1 */
  goto L_125ae2c1;
L_125ae322:;
  /* 125ae322 jmp 0x125ae29d */
  goto L_125ae29d;
L_125ae327:;
  /* 125ae327 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ae32a mov dword ptr [0x125d4fc4], ecx */
  w32((uint32_t)(0x125d4fc4), (ECX));
  /* 125ae330 mov dword ptr [0x125d504c], 1 */
  w32((uint32_t)(0x125d504c), (0x1u));
  /* 125ae33a mov edx, dword ptr [0x125d4fc4] */
  EDX = (r32((uint32_t)(0x125d4fc4)));
  /* 125ae340 push edx */
  push32((uint32_t)(EDX));
  /* 125ae341 call 0x125ae590 */
  push32(0x125ae346u); f_125ae590();
  /* 125ae346 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae349 mov dword ptr [0x125d5264], eax */
  w32((uint32_t)(0x125d5264), (EAX));
  /* 125ae34e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125ae355 jmp 0x125ae360 */
  goto L_125ae360;
L_125ae357:;
  /* 125ae357 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ae35a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae35d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125ae360:;
  /* 125ae360 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae364 jae 0x125ae384 */
  if (!C.cf) goto L_125ae384;
  /* 125ae366 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae369 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125ae36c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ae36f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ae372 mov cx, word ptr [ecx + eax*2 + 0x125d1ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x125d1ebc)));
  /* 125ae37a mov word ptr [edx*2 + 0x125d5040], cx */
  w16((uint32_t)(EDX*2 + 0x125d5040), (CX));
  /* 125ae382 jmp 0x125ae357 */
  goto L_125ae357;
L_125ae384:;
  /* 125ae384 call 0x125ae690 */
  push32(0x125ae389u); f_125ae690();
  /* 125ae389 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125ae38b call 0x125abbb0 */
  push32(0x125ae390u); f_125abbb0();
  /* 125ae390 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae393 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ae395 jmp 0x125ae520 */
  goto L_125ae520;
L_125ae39a:;
  /* 125ae39a jmp 0x125ae245 */
  goto L_125ae245;
L_125ae39f:;
  /* 125ae39f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 125ae3a2 push edx */
  push32((uint32_t)(EDX));
  /* 125ae3a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ae3a6 push eax */
  push32((uint32_t)(EAX));
  /* 125ae3a7 call dword ptr [0x125d631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d631c))), 0x125ae3adu);
  /* 125ae3ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae3b0 jne 0x125ae4f2 */
  if (!C.zf) goto L_125ae4f2;
  /* 125ae3b6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125ae3bd jmp 0x125ae3c8 */
  goto L_125ae3c8;
L_125ae3bf:;
  /* 125ae3bf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae3c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae3c5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_125ae3c8:;
  /* 125ae3c8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae3cf jae 0x125ae3dd */
  if (!C.cf) goto L_125ae3dd;
  /* 125ae3d1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae3d4 mov byte ptr [edx + 0x125d5160], 0 */
  w8((uint32_t)(EDX + 0x125d5160), (0x0u));
  /* 125ae3db jmp 0x125ae3bf */
  goto L_125ae3bf;
L_125ae3dd:;
  /* 125ae3dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ae3e0 mov dword ptr [0x125d4fc4], eax */
  w32((uint32_t)(0x125d4fc4), (EAX));
  /* 125ae3e5 mov dword ptr [0x125d5264], 0 */
  w32((uint32_t)(0x125d5264), (0x0u));
  /* 125ae3ef cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae3f3 jbe 0x125ae4ae */
  if ((C.cf||C.zf)) goto L_125ae4ae;
  /* 125ae3f9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 125ae3fc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 125ae3ff jmp 0x125ae40a */
  goto L_125ae40a;
L_125ae401:;
  /* 125ae401 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ae404 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae407 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_125ae40a:;
  /* 125ae40a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ae40d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125ae40f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125ae411 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ae413 je 0x125ae45c */
  if (C.zf) goto L_125ae45c;
  /* 125ae415 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ae418 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ae41a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125ae41d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ae41f je 0x125ae45c */
  if (C.zf) goto L_125ae45c;
  /* 125ae421 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ae424 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125ae426 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125ae428 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125ae42b jmp 0x125ae436 */
  goto L_125ae436;
L_125ae42d:;
  /* 125ae42d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae430 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae433 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125ae436:;
  /* 125ae436 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ae439 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125ae43b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 125ae43e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae441 ja 0x125ae45a */
  if ((!C.cf&&!C.zf)) goto L_125ae45a;
  /* 125ae443 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae446 mov cl, byte ptr [eax + 0x125d5161] */
  CL = (r8((uint32_t)(EAX + 0x125d5161)));
  /* 125ae44c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 125ae44f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae452 mov byte ptr [edx + 0x125d5161], cl */
  w8((uint32_t)(EDX + 0x125d5161), (CL));
  /* 125ae458 jmp 0x125ae42d */
  goto L_125ae42d;
L_125ae45a:;
  /* 125ae45a jmp 0x125ae401 */
  goto L_125ae401;
L_125ae45c:;
  /* 125ae45c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 125ae463 jmp 0x125ae46e */
  goto L_125ae46e;
L_125ae465:;
  /* 125ae465 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae468 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae46b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125ae46e:;
  /* 125ae46e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae475 jae 0x125ae48e */
  if (!C.cf) goto L_125ae48e;
  /* 125ae477 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae47a mov dl, byte ptr [ecx + 0x125d5161] */
  DL = (r8((uint32_t)(ECX + 0x125d5161)));
  /* 125ae480 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 125ae483 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ae486 mov byte ptr [eax + 0x125d5161], dl */
  w8((uint32_t)(EAX + 0x125d5161), (DL));
  /* 125ae48c jmp 0x125ae465 */
  goto L_125ae465;
L_125ae48e:;
  /* 125ae48e mov ecx, dword ptr [0x125d4fc4] */
  ECX = (r32((uint32_t)(0x125d4fc4)));
  /* 125ae494 push ecx */
  push32((uint32_t)(ECX));
  /* 125ae495 call 0x125ae590 */
  push32(0x125ae49au); f_125ae590();
  /* 125ae49a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae49d mov dword ptr [0x125d5264], eax */
  w32((uint32_t)(0x125d5264), (EAX));
  /* 125ae4a2 mov dword ptr [0x125d504c], 1 */
  w32((uint32_t)(0x125d504c), (0x1u));
  /* 125ae4ac jmp 0x125ae4b8 */
  goto L_125ae4b8;
L_125ae4ae:;
  /* 125ae4ae mov dword ptr [0x125d504c], 0 */
  w32((uint32_t)(0x125d504c), (0x0u));
L_125ae4b8:;
  /* 125ae4b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125ae4bf jmp 0x125ae4ca */
  goto L_125ae4ca;
L_125ae4c1:;
  /* 125ae4c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ae4c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae4c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125ae4ca:;
  /* 125ae4ca cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae4ce jae 0x125ae4df */
  if (!C.cf) goto L_125ae4df;
  /* 125ae4d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ae4d3 mov word ptr [eax*2 + 0x125d5040], 0 */
  w16((uint32_t)(EAX*2 + 0x125d5040), (0x0u));
  /* 125ae4dd jmp 0x125ae4c1 */
  goto L_125ae4c1;
L_125ae4df:;
  /* 125ae4df call 0x125ae690 */
  push32(0x125ae4e4u); f_125ae690();
  /* 125ae4e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125ae4e6 call 0x125abbb0 */
  push32(0x125ae4ebu); f_125abbb0();
  /* 125ae4eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae4ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ae4f0 jmp 0x125ae520 */
  goto L_125ae520;
L_125ae4f2:;
  /* 125ae4f2 cmp dword ptr [0x125d3ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae4f9 je 0x125ae513 */
  if (C.zf) goto L_125ae513;
  /* 125ae4fb call 0x125ae610 */
  push32(0x125ae500u); f_125ae610();
  /* 125ae500 call 0x125ae690 */
  push32(0x125ae505u); f_125ae690();
  /* 125ae505 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125ae507 call 0x125abbb0 */
  push32(0x125ae50cu); f_125abbb0();
  /* 125ae50c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae50f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ae511 jmp 0x125ae520 */
  goto L_125ae520;
L_125ae513:;
  /* 125ae513 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125ae515 call 0x125abbb0 */
  push32(0x125ae51au); f_125abbb0();
  /* 125ae51a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae51d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_125ae520:;
  /* 125ae520 mov esp, ebp */
  ESP = (EBP);
  /* 125ae522 pop ebp */
  EBP = (pop32());
  /* 125ae523 ret  */
  ESPCHK(0x125ae1e0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x125ae530 (89 bytes, 21 insns) */
void f_125ae530(void) {
  FTRACE(0x125ae530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ae530 push ebp */
  push32((uint32_t)(EBP));
  /* 125ae531 mov ebp, esp */
  EBP = (ESP);
  /* 125ae533 mov dword ptr [0x125d3ad0], 0 */
  w32((uint32_t)(0x125d3ad0), (0x0u));
  /* 125ae53d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae541 jne 0x125ae555 */
  if (!C.zf) goto L_125ae555;
  /* 125ae543 mov dword ptr [0x125d3ad0], 1 */
  w32((uint32_t)(0x125d3ad0), (0x1u));
  /* 125ae54d call dword ptr [0x125d6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6314))), 0x125ae553u);
  /* 125ae553 jmp 0x125ae587 */
  goto L_125ae587;
L_125ae555:;
  /* 125ae555 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae559 jne 0x125ae56d */
  if (!C.zf) goto L_125ae56d;
  /* 125ae55b mov dword ptr [0x125d3ad0], 1 */
  w32((uint32_t)(0x125d3ad0), (0x1u));
  /* 125ae565 call dword ptr [0x125d6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6324))), 0x125ae56bu);
  /* 125ae56b jmp 0x125ae587 */
  goto L_125ae587;
L_125ae56d:;
  /* 125ae56d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae571 jne 0x125ae584 */
  if (!C.zf) goto L_125ae584;
  /* 125ae573 mov dword ptr [0x125d3ad0], 1 */
  w32((uint32_t)(0x125d3ad0), (0x1u));
  /* 125ae57d mov eax, dword ptr [0x125d3af0] */
  EAX = (r32((uint32_t)(0x125d3af0)));
  /* 125ae582 jmp 0x125ae587 */
  goto L_125ae587;
L_125ae584:;
  /* 125ae584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_125ae587:;
  /* 125ae587 pop ebp */
  EBP = (pop32());
  /* 125ae588 ret  */
  ESPCHK(0x125ae530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e590 @ 0x125ae590 (80 bytes, 26 insns) [1 switch table(s)] */
void f_125ae590(void) {
  FTRACE(0x125ae590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ae590 push ebp */
  push32((uint32_t)(EBP));
  /* 125ae591 mov ebp, esp */
  EBP = (ESP);
  /* 125ae593 push ecx */
  push32((uint32_t)(ECX));
  /* 125ae594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ae597 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125ae59a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae59d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ae5a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125ae5a6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae5aa ja 0x125ae5da */
  if ((!C.cf&&!C.zf)) goto L_125ae5da;
  /* 125ae5ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae5af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125ae5b1 mov dl, byte ptr [eax + 0x125ae5f4] */
  DL = (r8((uint32_t)(EAX + 0x125ae5f4)));
  /* 125ae5b7 jmp dword ptr [edx*4 + 0x125ae5e0] */
  switch (EDX) {
    case 0: goto L_125ae5be;
    case 1: goto L_125ae5c5;
    case 2: goto L_125ae5cc;
    case 3: goto L_125ae5d3;
    case 4: goto L_125ae5da;
    default: x86_unimpl("switch@0x125ae5b7 out of table"); return;
  }
L_125ae5be:;
  /* 125ae5be mov eax, 0x411 */
  EAX = (0x411u);
  /* 125ae5c3 jmp 0x125ae5dc */
  goto L_125ae5dc;
L_125ae5c5:;
  /* 125ae5c5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 125ae5ca jmp 0x125ae5dc */
  goto L_125ae5dc;
L_125ae5cc:;
  /* 125ae5cc mov eax, 0x412 */
  EAX = (0x412u);
  /* 125ae5d1 jmp 0x125ae5dc */
  goto L_125ae5dc;
L_125ae5d3:;
  /* 125ae5d3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 125ae5d8 jmp 0x125ae5dc */
  goto L_125ae5dc;
L_125ae5da:;
  /* 125ae5da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125ae5dc:;
  /* 125ae5dc mov esp, ebp */
  ESP = (EBP);
  /* 125ae5de pop ebp */
  EBP = (pop32());
  /* 125ae5df ret  */
  ESPCHK(0x125ae590u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x125ae610 (116 bytes, 29 insns) */
void f_125ae610(void) {
  FTRACE(0x125ae610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ae610 push ebp */
  push32((uint32_t)(EBP));
  /* 125ae611 mov ebp, esp */
  EBP = (ESP);
  /* 125ae613 push ecx */
  push32((uint32_t)(ECX));
  /* 125ae614 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125ae61b jmp 0x125ae626 */
  goto L_125ae626;
L_125ae61d:;
  /* 125ae61d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae620 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae623 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125ae626:;
  /* 125ae626 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae62d jge 0x125ae63b */
  if ((C.sf==C.of)) goto L_125ae63b;
  /* 125ae62f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae632 mov byte ptr [ecx + 0x125d5160], 0 */
  w8((uint32_t)(ECX + 0x125d5160), (0x0u));
  /* 125ae639 jmp 0x125ae61d */
  goto L_125ae61d;
L_125ae63b:;
  /* 125ae63b mov dword ptr [0x125d4fc4], 0 */
  w32((uint32_t)(0x125d4fc4), (0x0u));
  /* 125ae645 mov dword ptr [0x125d504c], 0 */
  w32((uint32_t)(0x125d504c), (0x0u));
  /* 125ae64f mov dword ptr [0x125d5264], 0 */
  w32((uint32_t)(0x125d5264), (0x0u));
  /* 125ae659 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125ae660 jmp 0x125ae66b */
  goto L_125ae66b;
L_125ae662:;
  /* 125ae662 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae665 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae668 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125ae66b:;
  /* 125ae66b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae66f jge 0x125ae680 */
  if ((C.sf==C.of)) goto L_125ae680;
  /* 125ae671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae674 mov word ptr [eax*2 + 0x125d5040], 0 */
  w16((uint32_t)(EAX*2 + 0x125d5040), (0x0u));
  /* 125ae67e jmp 0x125ae662 */
  goto L_125ae662;
L_125ae680:;
  /* 125ae680 mov esp, ebp */
  ESP = (EBP);
  /* 125ae682 pop ebp */
  EBP = (pop32());
  /* 125ae683 ret  */
  ESPCHK(0x125ae610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e690 @ 0x125ae690 (770 bytes, 175 insns) */
void f_125ae690(void) {
  FTRACE(0x125ae690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ae690 push ebp */
  push32((uint32_t)(EBP));
  /* 125ae691 mov ebp, esp */
  EBP = (ESP);
  /* 125ae693 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ae699 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 125ae69f push eax */
  push32((uint32_t)(EAX));
  /* 125ae6a0 mov ecx, dword ptr [0x125d4fc4] */
  ECX = (r32((uint32_t)(0x125d4fc4)));
  /* 125ae6a6 push ecx */
  push32((uint32_t)(ECX));
  /* 125ae6a7 call dword ptr [0x125d631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d631c))), 0x125ae6adu);
  /* 125ae6ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae6b0 jne 0x125ae8c9 */
  if (!C.zf) goto L_125ae8c9;
  /* 125ae6b6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 125ae6c0 jmp 0x125ae6d1 */
  goto L_125ae6d1;
L_125ae6c2:;
  /* 125ae6c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae6c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae6cb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_125ae6d1:;
  /* 125ae6d1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae6db jae 0x125ae6f2 */
  if (!C.cf) goto L_125ae6f2;
  /* 125ae6dd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae6e3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 125ae6e9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 125ae6f0 jmp 0x125ae6c2 */
  goto L_125ae6c2;
L_125ae6f2:;
  /* 125ae6f2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 125ae6f9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 125ae6ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125ae702 jmp 0x125ae70d */
  goto L_125ae70d;
L_125ae704:;
  /* 125ae704 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae707 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae70a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125ae70d:;
  /* 125ae70d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae710 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125ae712 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125ae714 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ae716 je 0x125ae758 */
  if (C.zf) goto L_125ae758;
  /* 125ae718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae71b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125ae71d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125ae71f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 125ae725 jmp 0x125ae736 */
  goto L_125ae736;
L_125ae727:;
  /* 125ae727 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae72d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae730 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_125ae736:;
  /* 125ae736 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ae739 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125ae73b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 125ae73e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae744 ja 0x125ae756 */
  if ((!C.cf&&!C.zf)) goto L_125ae756;
  /* 125ae746 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae74c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 125ae754 jmp 0x125ae727 */
  goto L_125ae727;
L_125ae756:;
  /* 125ae756 jmp 0x125ae704 */
  goto L_125ae704;
L_125ae758:;
  /* 125ae758 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ae75a mov eax, dword ptr [0x125d5264] */
  EAX = (r32((uint32_t)(0x125d5264)));
  /* 125ae75f push eax */
  push32((uint32_t)(EAX));
  /* 125ae760 mov ecx, dword ptr [0x125d4fc4] */
  ECX = (r32((uint32_t)(0x125d4fc4)));
  /* 125ae766 push ecx */
  push32((uint32_t)(ECX));
  /* 125ae767 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 125ae76d push edx */
  push32((uint32_t)(EDX));
  /* 125ae76e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125ae773 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 125ae779 push eax */
  push32((uint32_t)(EAX));
  /* 125ae77a push 1 */
  push32((uint32_t)(0x1u));
  /* 125ae77c call 0x125b0340 */
  push32(0x125ae781u); f_125b0340();
  /* 125ae781 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae784 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ae786 mov ecx, dword ptr [0x125d4fc4] */
  ECX = (r32((uint32_t)(0x125d4fc4)));
  /* 125ae78c push ecx */
  push32((uint32_t)(ECX));
  /* 125ae78d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125ae792 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 125ae798 push edx */
  push32((uint32_t)(EDX));
  /* 125ae799 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125ae79e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 125ae7a4 push eax */
  push32((uint32_t)(EAX));
  /* 125ae7a5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125ae7aa mov ecx, dword ptr [0x125d5264] */
  ECX = (r32((uint32_t)(0x125d5264)));
  /* 125ae7b0 push ecx */
  push32((uint32_t)(ECX));
  /* 125ae7b1 call 0x125b0500 */
  push32(0x125ae7b6u); f_125b0500();
  /* 125ae7b6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae7b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ae7bb mov edx, dword ptr [0x125d4fc4] */
  EDX = (r32((uint32_t)(0x125d4fc4)));
  /* 125ae7c1 push edx */
  push32((uint32_t)(EDX));
  /* 125ae7c2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125ae7c7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 125ae7cd push eax */
  push32((uint32_t)(EAX));
  /* 125ae7ce push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125ae7d3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 125ae7d9 push ecx */
  push32((uint32_t)(ECX));
  /* 125ae7da push 0x200 */
  push32((uint32_t)(0x200u));
  /* 125ae7df mov edx, dword ptr [0x125d5264] */
  EDX = (r32((uint32_t)(0x125d5264)));
  /* 125ae7e5 push edx */
  push32((uint32_t)(EDX));
  /* 125ae7e6 call 0x125b0500 */
  push32(0x125ae7ebu); f_125b0500();
  /* 125ae7eb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae7ee mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 125ae7f8 jmp 0x125ae809 */
  goto L_125ae809;
L_125ae7fa:;
  /* 125ae7fa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae800 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae803 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_125ae809:;
  /* 125ae809 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae813 jae 0x125ae8c4 */
  if (!C.cf) goto L_125ae8c4;
  /* 125ae819 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae81f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125ae821 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 125ae829 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125ae82c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ae82e je 0x125ae866 */
  if (C.zf) goto L_125ae866;
  /* 125ae830 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae836 mov cl, byte ptr [eax + 0x125d5161] */
  CL = (r8((uint32_t)(EAX + 0x125d5161)));
  /* 125ae83c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 125ae83f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae845 mov byte ptr [edx + 0x125d5161], cl */
  w8((uint32_t)(EDX + 0x125d5161), (CL));
  /* 125ae84b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae851 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae857 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 125ae85e mov byte ptr [eax + 0x125d5060], dl */
  w8((uint32_t)(EAX + 0x125d5060), (DL));
  /* 125ae864 jmp 0x125ae8bf */
  goto L_125ae8bf;
L_125ae866:;
  /* 125ae866 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae86c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125ae86e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 125ae876 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 125ae879 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ae87b je 0x125ae8b2 */
  if (C.zf) goto L_125ae8b2;
  /* 125ae87d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae883 mov al, byte ptr [edx + 0x125d5161] */
  AL = (r8((uint32_t)(EDX + 0x125d5161)));
  /* 125ae889 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 125ae88b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae891 mov byte ptr [ecx + 0x125d5161], al */
  w8((uint32_t)(ECX + 0x125d5161), (AL));
  /* 125ae897 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae89d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae8a3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 125ae8aa mov byte ptr [edx + 0x125d5060], cl */
  w8((uint32_t)(EDX + 0x125d5060), (CL));
  /* 125ae8b0 jmp 0x125ae8bf */
  goto L_125ae8bf;
L_125ae8b2:;
  /* 125ae8b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae8b8 mov byte ptr [edx + 0x125d5060], 0 */
  w8((uint32_t)(EDX + 0x125d5060), (0x0u));
L_125ae8bf:;
  /* 125ae8bf jmp 0x125ae7fa */
  goto L_125ae7fa;
L_125ae8c4:;
  /* 125ae8c4 jmp 0x125ae98e */
  goto L_125ae98e;
L_125ae8c9:;
  /* 125ae8c9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 125ae8d3 jmp 0x125ae8e4 */
  goto L_125ae8e4;
L_125ae8d5:;
  /* 125ae8d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae8db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae8de mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_125ae8e4:;
  /* 125ae8e4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae8ee jae 0x125ae98e */
  if (!C.cf) goto L_125ae98e;
  /* 125ae8f4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae8fb jb 0x125ae938 */
  if (C.cf) goto L_125ae938;
  /* 125ae8fd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae904 ja 0x125ae938 */
  if ((!C.cf&&!C.zf)) goto L_125ae938;
  /* 125ae906 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae90c mov dl, byte ptr [ecx + 0x125d5161] */
  DL = (r8((uint32_t)(ECX + 0x125d5161)));
  /* 125ae912 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 125ae915 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae91b mov byte ptr [eax + 0x125d5161], dl */
  w8((uint32_t)(EAX + 0x125d5161), (DL));
  /* 125ae921 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae927 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae92a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae930 mov byte ptr [edx + 0x125d5060], cl */
  w8((uint32_t)(EDX + 0x125d5060), (CL));
  /* 125ae936 jmp 0x125ae989 */
  goto L_125ae989;
L_125ae938:;
  /* 125ae938 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae93f jb 0x125ae97c */
  if (C.cf) goto L_125ae97c;
  /* 125ae941 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae948 ja 0x125ae97c */
  if ((!C.cf&&!C.zf)) goto L_125ae97c;
  /* 125ae94a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae950 mov cl, byte ptr [eax + 0x125d5161] */
  CL = (r8((uint32_t)(EAX + 0x125d5161)));
  /* 125ae956 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 125ae959 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae95f mov byte ptr [edx + 0x125d5161], cl */
  w8((uint32_t)(EDX + 0x125d5161), (CL));
  /* 125ae965 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae96b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ae96e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae974 mov byte ptr [ecx + 0x125d5060], al */
  w8((uint32_t)(ECX + 0x125d5060), (AL));
  /* 125ae97a jmp 0x125ae989 */
  goto L_125ae989;
L_125ae97c:;
  /* 125ae97c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125ae982 mov byte ptr [edx + 0x125d5060], 0 */
  w8((uint32_t)(EDX + 0x125d5060), (0x0u));
L_125ae989:;
  /* 125ae989 jmp 0x125ae8d5 */
  goto L_125ae8d5;
L_125ae98e:;
  /* 125ae98e mov esp, ebp */
  ESP = (EBP);
  /* 125ae990 pop ebp */
  EBP = (pop32());
  /* 125ae991 ret  */
  ESPCHK(0x125ae690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9a0 @ 0x125ae9a0 (23 bytes, 9 insns) */
void f_125ae9a0(void) {
  FTRACE(0x125ae9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ae9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125ae9a1 mov ebp, esp */
  EBP = (ESP);
  /* 125ae9a3 cmp dword ptr [0x125d504c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d504c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae9aa je 0x125ae9b3 */
  if (C.zf) goto L_125ae9b3;
  /* 125ae9ac mov eax, dword ptr [0x125d4fc4] */
  EAX = (r32((uint32_t)(0x125d4fc4)));
  /* 125ae9b1 jmp 0x125ae9b5 */
  goto L_125ae9b5;
L_125ae9b3:;
  /* 125ae9b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125ae9b5:;
  /* 125ae9b5 pop ebp */
  EBP = (pop32());
  /* 125ae9b6 ret  */
  ESPCHK(0x125ae9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9c0 @ 0x125ae9c0 (34 bytes, 10 insns) */
void f_125ae9c0(void) {
  FTRACE(0x125ae9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ae9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125ae9c1 mov ebp, esp */
  EBP = (ESP);
  /* 125ae9c3 cmp dword ptr [0x125d5410], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d5410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ae9ca jne 0x125ae9e0 */
  if (!C.zf) goto L_125ae9e0;
  /* 125ae9cc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 125ae9ce call 0x125ae1e0 */
  push32(0x125ae9d3u); f_125ae1e0();
  /* 125ae9d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ae9d6 mov dword ptr [0x125d5410], 1 */
  w32((uint32_t)(0x125d5410), (0x1u));
L_125ae9e0:;
  /* 125ae9e0 pop ebp */
  EBP = (pop32());
  /* 125ae9e1 ret  */
  ESPCHK(0x125ae9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9f0 @ 0x125ae9f0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_125ae9f0(void) {
  FTRACE(0x125ae9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ae9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125ae9f1 mov ebp, esp */
  EBP = (ESP);
  /* 125ae9f3 push edi */
  push32((uint32_t)(EDI));
  /* 125ae9f4 push esi */
  push32((uint32_t)(ESI));
  /* 125ae9f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 125ae9f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125ae9fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 125ae9fe mov eax, ecx */
  EAX = (ECX);
  /* 125aea00 mov edx, ecx */
  EDX = (ECX);
  /* 125aea02 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aea04 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aea06 jbe 0x125aea10 */
  if ((C.cf||C.zf)) goto L_125aea10;
  /* 125aea08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aea0a jb 0x125aeb88 */
  if (C.cf) goto L_125aeb88;
L_125aea10:;
  /* 125aea10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 125aea16 jne 0x125aea2c */
  if (!C.zf) goto L_125aea2c;
  /* 125aea18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125aea1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125aea1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aea21 jb 0x125aea4c */
  if (C.cf) goto L_125aea4c;
  /* 125aea23 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125aea25 jmp dword ptr [edx*4 + 0x125aeb38] */
  switch (EDX) {
    case 0: goto L_125aeb48;
    case 1: goto L_125aeb50;
    case 2: goto L_125aeb5c;
    case 3: goto L_125aeb70;
    default: x86_unimpl("switch@0x125aea25 out of table"); return;
  }
L_125aea2c:;
  /* 125aea2c mov eax, edi */
  EAX = (EDI);
  /* 125aea2e mov edx, 3 */
  EDX = (0x3u);
  /* 125aea33 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aea36 jb 0x125aea44 */
  if (C.cf) goto L_125aea44;
  /* 125aea38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 125aea3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aea3d jmp dword ptr [eax*4 + 0x125aea50] */
  switch (EAX) {
    case 1: goto L_125aea60;
    case 2: goto L_125aea8c;
    case 3: goto L_125aeab0;
    default: x86_unimpl("switch@0x125aea3d out of table"); return;
  }
L_125aea44:;
  /* 125aea44 jmp dword ptr [ecx*4 + 0x125aeb48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x125aeb48)))); return;
  /* 125aea4b nop  */
  /* nop */
L_125aea4c:;
  /* 125aea4c jmp dword ptr [ecx*4 + 0x125aeacc] */
  switch (ECX) {
    case 0: goto L_125aeb2f;
    case 1: goto L_125aeb1c;
    case 2: goto L_125aeb14;
    case 3: goto L_125aeb0c;
    case 4: goto L_125aeb04;
    case 5: goto L_125aeafc;
    case 6: goto L_125aeaf4;
    case 7: goto L_125aeaec;
    default: x86_unimpl("switch@0x125aea4c out of table"); return;
  }
  /* 125aea53 nop  */
  /* nop */
L_125aea60:;
  /* 125aea60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125aea62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125aea64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125aea66 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125aea69 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125aea6c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125aea6f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125aea72 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125aea75 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125aea78 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 125aea7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aea7e jb 0x125aea4c */
  if (C.cf) goto L_125aea4c;
  /* 125aea80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125aea82 jmp dword ptr [edx*4 + 0x125aeb38] */
  switch (EDX) {
    case 0: goto L_125aeb48;
    case 1: goto L_125aeb50;
    case 2: goto L_125aeb5c;
    case 3: goto L_125aeb70;
    default: x86_unimpl("switch@0x125aea82 out of table"); return;
  }
  /* 125aea89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125aea8c:;
  /* 125aea8c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125aea8e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125aea90 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125aea92 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125aea95 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125aea98 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125aea9b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125aea9e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 125aeaa1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aeaa4 jb 0x125aea4c */
  if (C.cf) goto L_125aea4c;
  /* 125aeaa6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125aeaa8 jmp dword ptr [edx*4 + 0x125aeb38] */
  switch (EDX) {
    case 0: goto L_125aeb48;
    case 1: goto L_125aeb50;
    case 2: goto L_125aeb5c;
    case 3: goto L_125aeb70;
    default: x86_unimpl("switch@0x125aeaa8 out of table"); return;
  }
  /* 125aeaaf nop  */
  /* nop */
L_125aeab0:;
  /* 125aeab0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125aeab2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125aeab4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125aeab6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125aeab7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125aeaba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125aeabb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aeabe jb 0x125aea4c */
  if (C.cf) goto L_125aea4c;
  /* 125aeac0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125aeac2 jmp dword ptr [edx*4 + 0x125aeb38] */
  switch (EDX) {
    case 0: goto L_125aeb48;
    case 1: goto L_125aeb50;
    case 2: goto L_125aeb5c;
    case 3: goto L_125aeb70;
    default: x86_unimpl("switch@0x125aeac2 out of table"); return;
  }
  /* 125aeac9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125aeaec:;
  /* 125aeaec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 125aeaf0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_125aeaf4:;
  /* 125aeaf4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 125aeaf8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_125aeafc:;
  /* 125aeafc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 125aeb00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_125aeb04:;
  /* 125aeb04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 125aeb08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_125aeb0c:;
  /* 125aeb0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 125aeb10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_125aeb14:;
  /* 125aeb14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 125aeb18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_125aeb1c:;
  /* 125aeb1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 125aeb20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 125aeb24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 125aeb2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125aeb2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_125aeb2f:;
  /* 125aeb2f jmp dword ptr [edx*4 + 0x125aeb38] */
  switch (EDX) {
    case 0: goto L_125aeb48;
    case 1: goto L_125aeb50;
    case 2: goto L_125aeb5c;
    case 3: goto L_125aeb70;
    default: x86_unimpl("switch@0x125aeb2f out of table"); return;
  }
  /* 125aeb36 mov edi, edi */
  EDI = (EDI);
L_125aeb48:;
  /* 125aeb48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aeb4b pop esi */
  ESI = (pop32());
  /* 125aeb4c pop edi */
  EDI = (pop32());
  /* 125aeb4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125aeb4e ret  */
  ESPCHK(0x125ae9f0u, _esp0);
  ESP += 4; return;
  /* 125aeb4f nop  */
  /* nop */
L_125aeb50:;
  /* 125aeb50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125aeb52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125aeb54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aeb57 pop esi */
  ESI = (pop32());
  /* 125aeb58 pop edi */
  EDI = (pop32());
  /* 125aeb59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125aeb5a ret  */
  ESPCHK(0x125ae9f0u, _esp0);
  ESP += 4; return;
  /* 125aeb5b nop  */
  /* nop */
L_125aeb5c:;
  /* 125aeb5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125aeb5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125aeb60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125aeb63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125aeb66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aeb69 pop esi */
  ESI = (pop32());
  /* 125aeb6a pop edi */
  EDI = (pop32());
  /* 125aeb6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125aeb6c ret  */
  ESPCHK(0x125ae9f0u, _esp0);
  ESP += 4; return;
  /* 125aeb6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125aeb70:;
  /* 125aeb70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125aeb72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125aeb74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125aeb77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125aeb7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125aeb7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125aeb80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aeb83 pop esi */
  ESI = (pop32());
  /* 125aeb84 pop edi */
  EDI = (pop32());
  /* 125aeb85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125aeb86 ret  */
  ESPCHK(0x125ae9f0u, _esp0);
  ESP += 4; return;
  /* 125aeb87 nop  */
  /* nop */
L_125aeb88:;
  /* 125aeb88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 125aeb8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 125aeb90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 125aeb96 jne 0x125aebbc */
  if (!C.zf) goto L_125aebbc;
  /* 125aeb98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125aeb9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125aeb9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aeba1 jb 0x125aebb0 */
  if (C.cf) goto L_125aebb0;
  /* 125aeba3 std  */
  C.df=1;
  /* 125aeba4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125aeba6 cld  */
  C.df=0;
  /* 125aeba7 jmp dword ptr [edx*4 + 0x125aecd0] */
  switch (EDX) {
    case 0: goto L_125aece0;
    case 1: goto L_125aece8;
    case 2: goto L_125aecf8;
    case 3: goto L_125aed0c;
    default: x86_unimpl("switch@0x125aeba7 out of table"); return;
  }
  /* 125aebae mov edi, edi */
  EDI = (EDI);
L_125aebb0:;
  /* 125aebb0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125aebb2 jmp dword ptr [ecx*4 + 0x125aec80] */
  switch (ECX) {
    case 0: goto L_125aecc7;
    default: x86_unimpl("switch@0x125aebb2 out of table"); return;
  }
  /* 125aebb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125aebbc:;
  /* 125aebbc mov eax, edi */
  EAX = (EDI);
  /* 125aebbe mov edx, 3 */
  EDX = (0x3u);
  /* 125aebc3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aebc6 jb 0x125aebd4 */
  if (C.cf) goto L_125aebd4;
  /* 125aebc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 125aebcb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aebcd jmp dword ptr [eax*4 + 0x125aebd8] */
  switch (EAX) {
    case 1: goto L_125aebe8;
    case 2: goto L_125aec08;
    case 3: goto L_125aec30;
    default: x86_unimpl("switch@0x125aebcd out of table"); return;
  }
L_125aebd4:;
  /* 125aebd4 jmp dword ptr [ecx*4 + 0x125aecd0] */
  switch (ECX) {
    case 0: goto L_125aece0;
    case 1: goto L_125aece8;
    case 2: goto L_125aecf8;
    case 3: goto L_125aed0c;
    default: x86_unimpl("switch@0x125aebd4 out of table"); return;
  }
  /* 125aebdb nop  */
  /* nop */
L_125aebe8:;
  /* 125aebe8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125aebeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125aebed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125aebf0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 125aebf1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125aebf4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 125aebf5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aebf8 jb 0x125aebb0 */
  if (C.cf) goto L_125aebb0;
  /* 125aebfa std  */
  C.df=1;
  /* 125aebfb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125aebfd cld  */
  C.df=0;
  /* 125aebfe jmp dword ptr [edx*4 + 0x125aecd0] */
  switch (EDX) {
    case 0: goto L_125aece0;
    case 1: goto L_125aece8;
    case 2: goto L_125aecf8;
    case 3: goto L_125aed0c;
    default: x86_unimpl("switch@0x125aebfe out of table"); return;
  }
  /* 125aec05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125aec08:;
  /* 125aec08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125aec0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125aec0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125aec10 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125aec13 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125aec16 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125aec19 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aec1c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aec1f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aec22 jb 0x125aebb0 */
  if (C.cf) goto L_125aebb0;
  /* 125aec24 std  */
  C.df=1;
  /* 125aec25 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125aec27 cld  */
  C.df=0;
  /* 125aec28 jmp dword ptr [edx*4 + 0x125aecd0] */
  switch (EDX) {
    case 0: goto L_125aece0;
    case 1: goto L_125aece8;
    case 2: goto L_125aecf8;
    case 3: goto L_125aed0c;
    default: x86_unimpl("switch@0x125aec28 out of table"); return;
  }
  /* 125aec2f nop  */
  /* nop */
L_125aec30:;
  /* 125aec30 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125aec33 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125aec35 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125aec38 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125aec3b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125aec3e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125aec41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125aec44 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125aec47 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aec4a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aec4d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aec50 jb 0x125aebb0 */
  if (C.cf) goto L_125aebb0;
  /* 125aec56 std  */
  C.df=1;
  /* 125aec57 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125aec59 cld  */
  C.df=0;
  /* 125aec5a jmp dword ptr [edx*4 + 0x125aecd0] */
  switch (EDX) {
    case 0: goto L_125aece0;
    case 1: goto L_125aece8;
    case 2: goto L_125aecf8;
    case 3: goto L_125aed0c;
    default: x86_unimpl("switch@0x125aec5a out of table"); return;
  }
  /* 125aec61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 125aec64 test ah, ch */
  { uint32_t _r=(AH)&(C.c.b.h); fl_logic(_r,8); }
  /* 125aec66 pop edx */
  EDX = (pop32());
  /* 125aec67 adc cl, byte ptr [esp + ebp*8 - 0x136beda6] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(ESP + EBP*8 + -0x136beda6))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 125aec6e pop edx */
  EDX = (pop32());
  /* 125aec6f adc bl, byte ptr [esp + ebp*8 - 0x135beda6] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(ESP + EBP*8 + -0x135beda6))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 125aec76 pop edx */
  EDX = (pop32());
  /* 125aec77 adc ch, byte ptr [esp + ebp*8 - 0x134beda6] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(ESP + EBP*8 + -0x134beda6))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 125aec7e pop edx */
  EDX = (pop32());
  /* 125aec84 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 125aec88 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 125aec8c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 125aec90 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 125aec94 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 125aec98 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 125aec9c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 125aeca0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 125aeca4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 125aeca8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 125aecac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 125aecb0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 125aecb4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 125aecb8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 125aecbc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 125aecc3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125aecc5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_125aecc7:;
  /* 125aecc7 jmp dword ptr [edx*4 + 0x125aecd0] */
  switch (EDX) {
    case 0: goto L_125aece0;
    case 1: goto L_125aece8;
    case 2: goto L_125aecf8;
    case 3: goto L_125aed0c;
    default: x86_unimpl("switch@0x125aecc7 out of table"); return;
  }
  /* 125aecce mov edi, edi */
  EDI = (EDI);
L_125aece0:;
  /* 125aece0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aece3 pop esi */
  ESI = (pop32());
  /* 125aece4 pop edi */
  EDI = (pop32());
  /* 125aece5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125aece6 ret  */
  ESPCHK(0x125ae9f0u, _esp0);
  ESP += 4; return;
  /* 125aece7 nop  */
  /* nop */
L_125aece8:;
  /* 125aece8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125aeceb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125aecee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aecf1 pop esi */
  ESI = (pop32());
  /* 125aecf2 pop edi */
  EDI = (pop32());
  /* 125aecf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125aecf4 ret  */
  ESPCHK(0x125ae9f0u, _esp0);
  ESP += 4; return;
  /* 125aecf5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125aecf8:;
  /* 125aecf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125aecfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125aecfe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125aed01 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125aed04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aed07 pop esi */
  ESI = (pop32());
  /* 125aed08 pop edi */
  EDI = (pop32());
  /* 125aed09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125aed0a ret  */
  ESPCHK(0x125ae9f0u, _esp0);
  ESP += 4; return;
  /* 125aed0b nop  */
  /* nop */
L_125aed0c:;
  /* 125aed0c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125aed0f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125aed12 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125aed15 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125aed18 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125aed1b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125aed1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aed21 pop esi */
  ESI = (pop32());
  /* 125aed22 pop edi */
  EDI = (pop32());
  /* 125aed23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125aed24 ret  */
  ESPCHK(0x125ae9f0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x125aed30 (104 bytes, 43 insns) */
void f_125aed30(void) {
  FTRACE(0x125aed30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aed30 push ebx */
  push32((uint32_t)(EBX));
  /* 125aed31 push esi */
  push32((uint32_t)(ESI));
  /* 125aed32 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 125aed36 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aed38 jne 0x125aed52 */
  if (!C.zf) goto L_125aed52;
  /* 125aed3a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 125aed3e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 125aed42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aed44 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125aed46 mov ebx, eax */
  EBX = (EAX);
  /* 125aed48 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 125aed4c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125aed4e mov edx, ebx */
  EDX = (EBX);
  /* 125aed50 jmp 0x125aed93 */
  goto L_125aed93;
L_125aed52:;
  /* 125aed52 mov ecx, eax */
  ECX = (EAX);
  /* 125aed54 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 125aed58 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 125aed5c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_125aed60:;
  /* 125aed60 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 125aed62 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 125aed64 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 125aed66 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 125aed68 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125aed6a jne 0x125aed60 */
  if (!C.zf) goto L_125aed60;
  /* 125aed6c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125aed6e mov esi, eax */
  ESI = (EAX);
  /* 125aed70 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125aed74 mov ecx, eax */
  ECX = (EAX);
  /* 125aed76 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 125aed7a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125aed7c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aed7e jb 0x125aed8e */
  if (C.cf) goto L_125aed8e;
  /* 125aed80 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aed84 ja 0x125aed8e */
  if ((!C.cf&&!C.zf)) goto L_125aed8e;
  /* 125aed86 jb 0x125aed8f */
  if (C.cf) goto L_125aed8f;
  /* 125aed88 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aed8c jbe 0x125aed8f */
  if ((C.cf||C.zf)) goto L_125aed8f;
L_125aed8e:;
  /* 125aed8e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_125aed8f:;
  /* 125aed8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aed91 mov eax, esi */
  EAX = (ESI);
L_125aed93:;
  /* 125aed93 pop esi */
  ESI = (pop32());
  /* 125aed94 pop ebx */
  EBX = (pop32());
  /* 125aed95 ret 0x10 */
  ESPCHK(0x125aed30u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x125aeda0 (117 bytes, 44 insns) */
void f_125aeda0(void) {
  FTRACE(0x125aeda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aeda0 push ebx */
  push32((uint32_t)(EBX));
  /* 125aeda1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 125aeda5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aeda7 jne 0x125aedc1 */
  if (!C.zf) goto L_125aedc1;
  /* 125aeda9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 125aedad mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 125aedb1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aedb3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125aedb5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 125aedb9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125aedbb mov eax, edx */
  EAX = (EDX);
  /* 125aedbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aedbf jmp 0x125aee11 */
  goto L_125aee11;
L_125aedc1:;
  /* 125aedc1 mov ecx, eax */
  ECX = (EAX);
  /* 125aedc3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 125aedc7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 125aedcb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_125aedcf:;
  /* 125aedcf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 125aedd1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 125aedd3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 125aedd5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 125aedd7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125aedd9 jne 0x125aedcf */
  if (!C.zf) goto L_125aedcf;
  /* 125aeddb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125aeddd mov ecx, eax */
  ECX = (EAX);
  /* 125aeddf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125aede3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 125aede4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125aede8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aedea jb 0x125aedfa */
  if (C.cf) goto L_125aedfa;
  /* 125aedec cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aedf0 ja 0x125aedfa */
  if ((!C.cf&&!C.zf)) goto L_125aedfa;
  /* 125aedf2 jb 0x125aee02 */
  if (C.cf) goto L_125aee02;
  /* 125aedf4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aedf8 jbe 0x125aee02 */
  if ((C.cf||C.zf)) goto L_125aee02;
L_125aedfa:;
  /* 125aedfa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aedfe sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_125aee02:;
  /* 125aee02 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aee06 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aee0a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125aee0c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125aee0e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_125aee11:;
  /* 125aee11 pop ebx */
  EBX = (pop32());
  /* 125aee12 ret 0x10 */
  ESPCHK(0x125aeda0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000ee20 @ 0x125aee20 (628 bytes, 214 insns) */
void f_125aee20(void) {
  FTRACE(0x125aee20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aee20 push ebp */
  push32((uint32_t)(EBP));
  /* 125aee21 mov ebp, esp */
  EBP = (ESP);
  /* 125aee23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aee26 push ebx */
  push32((uint32_t)(EBX));
  /* 125aee27 push esi */
  push32((uint32_t)(ESI));
  /* 125aee28 push edi */
  push32((uint32_t)(EDI));
L_125aee29:;
  /* 125aee29 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aee2d jne 0x125aee4d */
  if (!C.zf) goto L_125aee4d;
  /* 125aee2f push 0x125cf654 */
  push32((uint32_t)(0x125cf654u));
  /* 125aee34 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aee36 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 125aee38 push 0x125cf648 */
  push32((uint32_t)(0x125cf648u));
  /* 125aee3d push 2 */
  push32((uint32_t)(0x2u));
  /* 125aee3f call 0x125a71d0 */
  push32(0x125aee44u); f_125a71d0();
  /* 125aee44 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aee47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aee4a jne 0x125aee4d */
  if (!C.zf) goto L_125aee4d;
  /* 125aee4c int3  */
  x86_unimpl("int3 @ 0x125aee4c");
L_125aee4d:;
  /* 125aee4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aee4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aee51 jne 0x125aee29 */
  if (!C.zf) goto L_125aee29;
  /* 125aee53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aee56 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125aee59 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aee5c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125aee5f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125aee62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aee65 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125aee68 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 125aee6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125aee70 je 0x125aee7f */
  if (C.zf) goto L_125aee7f;
  /* 125aee72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aee75 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125aee78 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 125aee7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125aee7d je 0x125aee95 */
  if (C.zf) goto L_125aee95;
L_125aee7f:;
  /* 125aee7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aee82 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125aee85 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 125aee87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aee8a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 125aee8d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125aee90 jmp 0x125af08d */
  goto L_125af08d;
L_125aee95:;
  /* 125aee95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aee98 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125aee9b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 125aee9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aeea0 je 0x125aeeec */
  if (C.zf) goto L_125aeeec;
  /* 125aeea2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aeea5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 125aeeac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aeeaf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125aeeb2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 125aeeb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aeeb7 je 0x125aeed5 */
  if (C.zf) goto L_125aeed5;
  /* 125aeeb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aeebc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aeebf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125aeec2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125aeec4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aeec7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125aeeca and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 125aeecd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aeed0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125aeed3 jmp 0x125aeeec */
  goto L_125aeeec;
L_125aeed5:;
  /* 125aeed5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aeed8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125aeedb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 125aeede mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aeee1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125aeee4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125aeee7 jmp 0x125af08d */
  goto L_125af08d;
L_125aeeec:;
  /* 125aeeec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aeeef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125aeef2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 125aeef5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aeef8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125aeefb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aeefe mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125aef01 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 125aef04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aef07 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125aef0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aef0d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 125aef14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125aef1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aef1e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125aef21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aef24 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125aef27 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 125aef2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125aef2f jne 0x125aef5f */
  if (!C.zf) goto L_125aef5f;
  /* 125aef31 cmp dword ptr [ebp - 8], 0x125d2140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x125d2140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aef38 je 0x125aef43 */
  if (C.zf) goto L_125aef43;
  /* 125aef3a cmp dword ptr [ebp - 8], 0x125d2160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x125d2160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aef41 jne 0x125aef53 */
  if (!C.zf) goto L_125aef53;
L_125aef43:;
  /* 125aef43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aef46 push edx */
  push32((uint32_t)(EDX));
  /* 125aef47 call 0x125b0d90 */
  push32(0x125aef4cu); f_125b0d90();
  /* 125aef4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aef4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aef51 jne 0x125aef5f */
  if (!C.zf) goto L_125aef5f;
L_125aef53:;
  /* 125aef53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aef56 push eax */
  push32((uint32_t)(EAX));
  /* 125aef57 call 0x125b0cc0 */
  push32(0x125aef5cu); f_125b0cc0();
  /* 125aef5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125aef5f:;
  /* 125aef5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aef62 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125aef65 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 125aef6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125aef6d je 0x125af04b */
  if (C.zf) goto L_125af04b;
L_125aef73:;
  /* 125aef73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aef76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aef79 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 125aef7b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aef7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125aef80 jge 0x125aefa3 */
  if ((C.sf==C.of)) goto L_125aefa3;
  /* 125aef82 push 0x125cf608 */
  push32((uint32_t)(0x125cf608u));
  /* 125aef87 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aef89 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 125aef8e push 0x125cf648 */
  push32((uint32_t)(0x125cf648u));
  /* 125aef93 push 2 */
  push32((uint32_t)(0x2u));
  /* 125aef95 call 0x125a71d0 */
  push32(0x125aef9au); f_125a71d0();
  /* 125aef9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aef9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aefa0 jne 0x125aefa3 */
  if (!C.zf) goto L_125aefa3;
  /* 125aefa2 int3  */
  x86_unimpl("int3 @ 0x125aefa2");
L_125aefa3:;
  /* 125aefa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aefa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aefa7 jne 0x125aef73 */
  if (!C.zf) goto L_125aef73;
  /* 125aefa9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aefac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aefaf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 125aefb1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aefb4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125aefb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aefba mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125aefbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aefc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aefc3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125aefc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aefc8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 125aefcb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aefce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aefd1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125aefd4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aefd8 jle 0x125aeff6 */
  if ((C.zf||C.sf!=C.of)) goto L_125aeff6;
  /* 125aefda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aefdd push ecx */
  push32((uint32_t)(ECX));
  /* 125aefde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aefe1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125aefe4 push eax */
  push32((uint32_t)(EAX));
  /* 125aefe5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aefe8 push ecx */
  push32((uint32_t)(ECX));
  /* 125aefe9 call 0x125b09b0 */
  push32(0x125aefeeu); f_125b09b0();
  /* 125aefee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aeff1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125aeff4 jmp 0x125af03e */
  goto L_125af03e;
L_125aeff6:;
  /* 125aeff6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aeffa je 0x125af019 */
  if (C.zf) goto L_125af019;
  /* 125aeffc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aefff sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 125af002 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125af005 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 125af008 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125af00b mov ecx, dword ptr [edx*4 + 0x125d52c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x125d52c0)));
  /* 125af012 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125af014 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125af017 jmp 0x125af020 */
  goto L_125af020;
L_125af019:;
  /* 125af019 mov dword ptr [ebp - 0x14], 0x125d1a60 */
  w32((uint32_t)(EBP + -0x14), (0x125d1a60u));
L_125af020:;
  /* 125af020 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125af023 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 125af027 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 125af02a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125af02c je 0x125af03e */
  if (C.zf) goto L_125af03e;
  /* 125af02e push 2 */
  push32((uint32_t)(0x2u));
  /* 125af030 push 0 */
  push32((uint32_t)(0x0u));
  /* 125af032 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125af035 push ecx */
  push32((uint32_t)(ECX));
  /* 125af036 call 0x125b0860 */
  push32(0x125af03bu); f_125b0860();
  /* 125af03b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125af03e:;
  /* 125af03e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125af041 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125af044 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 125af047 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 125af049 jmp 0x125af069 */
  goto L_125af069;
L_125af04b:;
  /* 125af04b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125af052 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af055 push edx */
  push32((uint32_t)(EDX));
  /* 125af056 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 125af059 push eax */
  push32((uint32_t)(EAX));
  /* 125af05a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125af05d push ecx */
  push32((uint32_t)(ECX));
  /* 125af05e call 0x125b09b0 */
  push32(0x125af063u); f_125b09b0();
  /* 125af063 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af066 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125af069:;
  /* 125af069 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125af06c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af06f je 0x125af085 */
  if (C.zf) goto L_125af085;
  /* 125af071 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125af074 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125af077 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 125af07a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125af07d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 125af080 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125af083 jmp 0x125af08d */
  goto L_125af08d;
L_125af085:;
  /* 125af085 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125af088 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_125af08d:;
  /* 125af08d pop edi */
  EDI = (pop32());
  /* 125af08e pop esi */
  ESI = (pop32());
  /* 125af08f pop ebx */
  EBX = (pop32());
  /* 125af090 mov esp, ebp */
  ESP = (EBP);
  /* 125af092 pop ebp */
  EBP = (pop32());
  /* 125af093 ret  */
  ESPCHK(0x125aee20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0a0 @ 0x125af0a0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_125af0a0(void) {
  FTRACE(0x125af0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125af0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125af0a1 mov ebp, esp */
  EBP = (ESP);
  /* 125af0a3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125af0a9 push ebx */
  push32((uint32_t)(EBX));
  /* 125af0aa push esi */
  push32((uint32_t)(ESI));
  /* 125af0ab push edi */
  push32((uint32_t)(EDI));
  /* 125af0ac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125af0b3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 125af0bd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_125af0c4:;
  /* 125af0c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125af0c7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125af0c9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 125af0cc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af0d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125af0d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125af0d6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 125af0d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125af0db je 0x125afcb7 */
  if (C.zf) goto L_125afcb7;
  /* 125af0e1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af0e8 jl 0x125afcb7 */
  if ((C.sf!=C.of)) goto L_125afcb7;
  /* 125af0ee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af0f2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af0f5 jl 0x125af116 */
  if ((C.sf!=C.of)) goto L_125af116;
  /* 125af0f7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af0fb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af0fe jg 0x125af116 */
  if ((!C.zf&&C.sf==C.of)) goto L_125af116;
  /* 125af100 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af104 movsx ecx, byte ptr [eax + 0x125cf640] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x125cf640))));
  /* 125af10b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 125af10e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 125af114 jmp 0x125af120 */
  goto L_125af120;
L_125af116:;
  /* 125af116 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_125af120:;
  /* 125af120 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 125af126 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125af129 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125af12c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125af12f movsx edx, byte ptr [ecx + eax*8 + 0x125cf660] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x125cf660))));
  /* 125af137 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 125af13a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125af13d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125af140 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 125af146 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af14d ja 0x125afcb2 */
  if ((!C.cf&&!C.zf)) goto L_125afcb2;
  /* 125af153 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 125af159 jmp dword ptr [ecx*4 + 0x125afcc4] */
  switch (ECX) {
    case 0: goto L_125af160;
    case 1: goto L_125af1fa;
    case 2: goto L_125af23c;
    case 3: goto L_125af2ab;
    case 4: goto L_125af303;
    case 5: goto L_125af312;
    case 6: goto L_125af35e;
    case 7: goto L_125af3f1;
    case 8: goto L_125af288;
    case 9: goto L_125af293;
    case 10: goto L_125af27e;
    case 11: goto L_125af273;
    case 12: goto L_125af29e;
    case 13: goto L_125af2a6;
    default: x86_unimpl("switch@0x125af159 out of table"); return;
  }
L_125af160:;
  /* 125af160 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 125af167 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125af16a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125af170 mov eax, dword ptr [0x125d1c98] */
  EAX = (r32((uint32_t)(0x125d1c98)));
  /* 125af175 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125af177 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 125af17b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 125af181 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125af183 je 0x125af1dd */
  if (C.zf) goto L_125af1dd;
  /* 125af185 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 125af18b push edx */
  push32((uint32_t)(EDX));
  /* 125af18c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125af18f push eax */
  push32((uint32_t)(EAX));
  /* 125af190 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af194 push ecx */
  push32((uint32_t)(ECX));
  /* 125af195 call 0x125afdd0 */
  push32(0x125af19au); f_125afdd0();
  /* 125af19a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af19d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125af1a0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125af1a2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 125af1a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125af1a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125af1ab mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_125af1ae:;
  /* 125af1ae movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af1b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125af1b4 jne 0x125af1d7 */
  if (!C.zf) goto L_125af1d7;
  /* 125af1b6 push 0x125cf6e0 */
  push32((uint32_t)(0x125cf6e0u));
  /* 125af1bb push 0 */
  push32((uint32_t)(0x0u));
  /* 125af1bd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 125af1c2 push 0x125cf6d4 */
  push32((uint32_t)(0x125cf6d4u));
  /* 125af1c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 125af1c9 call 0x125a71d0 */
  push32(0x125af1ceu); f_125a71d0();
  /* 125af1ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af1d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af1d4 jne 0x125af1d7 */
  if (!C.zf) goto L_125af1d7;
  /* 125af1d6 int3  */
  x86_unimpl("int3 @ 0x125af1d6");
L_125af1d7:;
  /* 125af1d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125af1d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125af1db jne 0x125af1ae */
  if (!C.zf) goto L_125af1ae;
L_125af1dd:;
  /* 125af1dd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 125af1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125af1e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125af1e7 push edx */
  push32((uint32_t)(EDX));
  /* 125af1e8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af1ec push eax */
  push32((uint32_t)(EAX));
  /* 125af1ed call 0x125afdd0 */
  push32(0x125af1f2u); f_125afdd0();
  /* 125af1f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af1f5 jmp 0x125afcb2 */
  goto L_125afcb2;
L_125af1fa:;
  /* 125af1fa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125af201 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125af204 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 125af20a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 125af210 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 125af216 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 125af21c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125af21f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125af226 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 125af230 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 125af237 jmp 0x125afcb2 */
  goto L_125afcb2;
L_125af23c:;
  /* 125af23c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af240 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 125af246 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 125af24c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125af24f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 125af255 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af25c ja 0x125af2a6 */
  if ((!C.cf&&!C.zf)) goto L_125af2a6;
  /* 125af25e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 125af264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125af266 mov al, byte ptr [ecx + 0x125afcfc] */
  AL = (r8((uint32_t)(ECX + 0x125afcfc)));
  /* 125af26c jmp dword ptr [eax*4 + 0x125afce4] */
  switch (EAX) {
    case 0: goto L_125af288;
    case 1: goto L_125af293;
    case 2: goto L_125af27e;
    case 3: goto L_125af273;
    case 4: goto L_125af29e;
    case 5: goto L_125af2a6;
    default: x86_unimpl("switch@0x125af26c out of table"); return;
  }
L_125af273:;
  /* 125af273 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af276 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125af279 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125af27c jmp 0x125af2a6 */
  goto L_125af2a6;
L_125af27e:;
  /* 125af27e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af281 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 125af283 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125af286 jmp 0x125af2a6 */
  goto L_125af2a6;
L_125af288:;
  /* 125af288 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af28b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 125af28e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125af291 jmp 0x125af2a6 */
  goto L_125af2a6;
L_125af293:;
  /* 125af293 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af296 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 125af299 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125af29c jmp 0x125af2a6 */
  goto L_125af2a6;
L_125af29e:;
  /* 125af29e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af2a1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 125af2a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125af2a6:;
  /* 125af2a6 jmp 0x125afcb2 */
  goto L_125afcb2;
L_125af2ab:;
  /* 125af2ab movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af2af cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af2b2 jne 0x125af2e7 */
  if (!C.zf) goto L_125af2e7;
  /* 125af2b4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 125af2b7 push edx */
  push32((uint32_t)(EDX));
  /* 125af2b8 call 0x125afee0 */
  push32(0x125af2bdu); f_125afee0();
  /* 125af2bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af2c0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 125af2c6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af2cd jge 0x125af2e5 */
  if ((C.sf==C.of)) goto L_125af2e5;
  /* 125af2cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af2d2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 125af2d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125af2d7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 125af2dd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125af2df mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_125af2e5:;
  /* 125af2e5 jmp 0x125af2fe */
  goto L_125af2fe;
L_125af2e7:;
  /* 125af2e7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 125af2ed imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125af2f0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af2f4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 125af2f8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_125af2fe:;
  /* 125af2fe jmp 0x125afcb2 */
  goto L_125afcb2;
L_125af303:;
  /* 125af303 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 125af30d jmp 0x125afcb2 */
  goto L_125afcb2;
L_125af312:;
  /* 125af312 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af316 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af319 jne 0x125af342 */
  if (!C.zf) goto L_125af342;
  /* 125af31b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 125af31e push eax */
  push32((uint32_t)(EAX));
  /* 125af31f call 0x125afee0 */
  push32(0x125af324u); f_125afee0();
  /* 125af324 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af327 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 125af32d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af334 jge 0x125af340 */
  if ((C.sf==C.of)) goto L_125af340;
  /* 125af336 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_125af340:;
  /* 125af340 jmp 0x125af359 */
  goto L_125af359;
L_125af342:;
  /* 125af342 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 125af348 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125af34b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af34f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 125af353 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_125af359:;
  /* 125af359 jmp 0x125afcb2 */
  goto L_125afcb2;
L_125af35e:;
  /* 125af35e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af362 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 125af368 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 125af36e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125af371 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 125af377 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af37e ja 0x125af3ec */
  if ((!C.cf&&!C.zf)) goto L_125af3ec;
  /* 125af380 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 125af386 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125af388 mov al, byte ptr [ecx + 0x125afd21] */
  AL = (r8((uint32_t)(ECX + 0x125afd21)));
  /* 125af38e jmp dword ptr [eax*4 + 0x125afd0d] */
  switch (EAX) {
    case 0: goto L_125af3a0;
    case 1: goto L_125af3d9;
    case 2: goto L_125af395;
    case 3: goto L_125af3e3;
    case 4: goto L_125af3ec;
    default: x86_unimpl("switch@0x125af38e out of table"); return;
  }
L_125af395:;
  /* 125af395 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af398 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 125af39b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125af39e jmp 0x125af3ec */
  goto L_125af3ec;
L_125af3a0:;
  /* 125af3a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125af3a3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125af3a6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af3a9 jne 0x125af3cb */
  if (!C.zf) goto L_125af3cb;
  /* 125af3ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125af3ae movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125af3b2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af3b5 jne 0x125af3cb */
  if (!C.zf) goto L_125af3cb;
  /* 125af3b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125af3ba add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125af3bd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 125af3c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af3c3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 125af3c6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125af3c9 jmp 0x125af3d7 */
  goto L_125af3d7;
L_125af3cb:;
  /* 125af3cb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 125af3d2 jmp 0x125af160 */
  goto L_125af160;
L_125af3d7:;
  /* 125af3d7 jmp 0x125af3ec */
  goto L_125af3ec;
L_125af3d9:;
  /* 125af3d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af3dc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 125af3de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125af3e1 jmp 0x125af3ec */
  goto L_125af3ec;
L_125af3e3:;
  /* 125af3e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af3e6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 125af3e9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125af3ec:;
  /* 125af3ec jmp 0x125afcb2 */
  goto L_125afcb2;
L_125af3f1:;
  /* 125af3f1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af3f5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 125af3fb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 125af401 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125af404 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 125af40a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af411 ja 0x125afad7 */
  if ((!C.cf&&!C.zf)) goto L_125afad7;
  /* 125af417 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 125af41d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125af41f mov cl, byte ptr [edx + 0x125afd8c] */
  CL = (r8((uint32_t)(EDX + 0x125afd8c)));
  /* 125af425 jmp dword ptr [ecx*4 + 0x125afd50] */
  switch (ECX) {
    case 0: goto L_125af42c;
    case 1: goto L_125af6c0;
    case 2: goto L_125af550;
    case 3: goto L_125af7f9;
    case 4: goto L_125af4bb;
    case 5: goto L_125af441;
    case 6: goto L_125af7cb;
    case 7: goto L_125af6d0;
    case 8: goto L_125af675;
    case 9: goto L_125af845;
    case 10: goto L_125af7ef;
    case 11: goto L_125af566;
    case 12: goto L_125af7e3;
    case 13: goto L_125af805;
    case 14: goto L_125afad7;
    default: x86_unimpl("switch@0x125af425 out of table"); return;
  }
L_125af42c:;
  /* 125af42c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af42f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 125af434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125af436 jne 0x125af441 */
  if (!C.zf) goto L_125af441;
  /* 125af438 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af43b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 125af43e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125af441:;
  /* 125af441 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af444 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 125af44a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125af44c je 0x125af487 */
  if (C.zf) goto L_125af487;
  /* 125af44e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 125af451 push eax */
  push32((uint32_t)(EAX));
  /* 125af452 call 0x125aff20 */
  push32(0x125af457u); f_125aff20();
  /* 125af457 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af45a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 125af45e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 125af462 push ecx */
  push32((uint32_t)(ECX));
  /* 125af463 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 125af469 push edx */
  push32((uint32_t)(EDX));
  /* 125af46a call 0x125b1000 */
  push32(0x125af46fu); f_125b1000();
  /* 125af46f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af472 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125af475 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af479 jge 0x125af485 */
  if ((C.sf==C.of)) goto L_125af485;
  /* 125af47b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_125af485:;
  /* 125af485 jmp 0x125af4ad */
  goto L_125af4ad;
L_125af487:;
  /* 125af487 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 125af48a push eax */
  push32((uint32_t)(EAX));
  /* 125af48b call 0x125afee0 */
  push32(0x125af490u); f_125afee0();
  /* 125af490 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af493 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 125af49a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 125af4a0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 125af4a6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_125af4ad:;
  /* 125af4ad lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 125af4b3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125af4b6 jmp 0x125afad7 */
  goto L_125afad7;
L_125af4bb:;
  /* 125af4bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 125af4be push eax */
  push32((uint32_t)(EAX));
  /* 125af4bf call 0x125afee0 */
  push32(0x125af4c4u); f_125afee0();
  /* 125af4c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af4c7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 125af4cd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af4d4 je 0x125af4e2 */
  if (C.zf) goto L_125af4e2;
  /* 125af4d6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 125af4dc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af4e0 jne 0x125af4fc */
  if (!C.zf) goto L_125af4fc;
L_125af4e2:;
  /* 125af4e2 mov edx, dword ptr [0x125d1fb0] */
  EDX = (r32((uint32_t)(0x125d1fb0)));
  /* 125af4e8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125af4eb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125af4ee push eax */
  push32((uint32_t)(EAX));
  /* 125af4ef call 0x125aaf40 */
  push32(0x125af4f4u); f_125aaf40();
  /* 125af4f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af4f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125af4fa jmp 0x125af54b */
  goto L_125af54b;
L_125af4fc:;
  /* 125af4fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af4ff and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 125af505 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125af507 je 0x125af52c */
  if (C.zf) goto L_125af52c;
  /* 125af509 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 125af50f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125af512 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125af515 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 125af51b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 125af51e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 125af520 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125af523 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 125af52a jmp 0x125af54b */
  goto L_125af54b;
L_125af52c:;
  /* 125af52c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 125af533 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 125af539 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125af53c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125af53f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 125af545 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 125af548 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125af54b:;
  /* 125af54b jmp 0x125afad7 */
  goto L_125afad7;
L_125af550:;
  /* 125af550 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af553 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 125af559 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125af55b jne 0x125af566 */
  if (!C.zf) goto L_125af566;
  /* 125af55d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af560 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 125af563 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125af566:;
  /* 125af566 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af56d jne 0x125af57b */
  if (!C.zf) goto L_125af57b;
  /* 125af56f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 125af579 jmp 0x125af587 */
  goto L_125af587;
L_125af57b:;
  /* 125af57b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 125af581 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_125af587:;
  /* 125af587 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 125af58d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 125af593 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 125af596 push edx */
  push32((uint32_t)(EDX));
  /* 125af597 call 0x125afee0 */
  push32(0x125af59cu); f_125afee0();
  /* 125af59c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af59f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125af5a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af5a5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 125af5aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125af5ac je 0x125af616 */
  if (C.zf) goto L_125af616;
  /* 125af5ae cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af5b2 jne 0x125af5bd */
  if (!C.zf) goto L_125af5bd;
  /* 125af5b4 mov ecx, dword ptr [0x125d1fb4] */
  ECX = (r32((uint32_t)(0x125d1fb4)));
  /* 125af5ba mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_125af5bd:;
  /* 125af5bd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 125af5c4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125af5c7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_125af5cd:;
  /* 125af5cd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 125af5d3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 125af5d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125af5dc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 125af5e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125af5e4 je 0x125af606 */
  if (C.zf) goto L_125af606;
  /* 125af5e6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 125af5ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125af5ee mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 125af5f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125af5f3 je 0x125af606 */
  if (C.zf) goto L_125af606;
  /* 125af5f5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 125af5fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125af5fe mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 125af604 jmp 0x125af5cd */
  goto L_125af5cd;
L_125af606:;
  /* 125af606 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 125af60c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125af60f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 125af611 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125af614 jmp 0x125af670 */
  goto L_125af670;
L_125af616:;
  /* 125af616 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af61a jne 0x125af624 */
  if (!C.zf) goto L_125af624;
  /* 125af61c mov eax, dword ptr [0x125d1fb0] */
  EAX = (r32((uint32_t)(0x125d1fb0)));
  /* 125af621 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_125af624:;
  /* 125af624 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125af627 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_125af62d:;
  /* 125af62d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 125af633 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 125af639 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125af63c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 125af642 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125af644 je 0x125af664 */
  if (C.zf) goto L_125af664;
  /* 125af646 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 125af64c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125af64f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125af651 je 0x125af664 */
  if (C.zf) goto L_125af664;
  /* 125af653 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 125af659 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125af65c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 125af662 jmp 0x125af62d */
  goto L_125af62d;
L_125af664:;
  /* 125af664 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 125af66a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125af66d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_125af670:;
  /* 125af670 jmp 0x125afad7 */
  goto L_125afad7;
L_125af675:;
  /* 125af675 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 125af678 push edx */
  push32((uint32_t)(EDX));
  /* 125af679 call 0x125afee0 */
  push32(0x125af67eu); f_125afee0();
  /* 125af67e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af681 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 125af687 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af68a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 125af68d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125af68f je 0x125af6a3 */
  if (C.zf) goto L_125af6a3;
  /* 125af691 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 125af697 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 125af69e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 125af6a1 jmp 0x125af6b1 */
  goto L_125af6b1;
L_125af6a3:;
  /* 125af6a3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 125af6a9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 125af6af mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_125af6b1:;
  /* 125af6b1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 125af6bb jmp 0x125afad7 */
  goto L_125afad7;
L_125af6c0:;
  /* 125af6c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 125af6c7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 125af6ca add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 125af6cd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_125af6d0:;
  /* 125af6d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af6d3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 125af6d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125af6d8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 125af6de mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125af6e1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af6e8 jge 0x125af6f6 */
  if ((C.sf==C.of)) goto L_125af6f6;
  /* 125af6ea mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 125af6f4 jmp 0x125af712 */
  goto L_125af712;
L_125af6f6:;
  /* 125af6f6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af6fd jne 0x125af712 */
  if (!C.zf) goto L_125af712;
  /* 125af6ff movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af703 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af706 jne 0x125af712 */
  if (!C.zf) goto L_125af712;
  /* 125af708 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_125af712:;
  /* 125af712 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125af715 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125af718 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 125af71b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125af71e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125af721 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125af723 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 125af726 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 125af72c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 125af732 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125af735 push ecx */
  push32((uint32_t)(ECX));
  /* 125af736 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 125af73c push edx */
  push32((uint32_t)(EDX));
  /* 125af73d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af741 push eax */
  push32((uint32_t)(EAX));
  /* 125af742 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125af745 push ecx */
  push32((uint32_t)(ECX));
  /* 125af746 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 125af74c push edx */
  push32((uint32_t)(EDX));
  /* 125af74d call dword ptr [0x125d23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d23a0))), 0x125af753u);
  /* 125af753 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af756 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af759 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 125af75e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125af760 je 0x125af778 */
  if (C.zf) goto L_125af778;
  /* 125af762 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af769 jne 0x125af778 */
  if (!C.zf) goto L_125af778;
  /* 125af76b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125af76e push ecx */
  push32((uint32_t)(ECX));
  /* 125af76f call dword ptr [0x125d23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d23ac))), 0x125af775u);
  /* 125af775 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125af778:;
  /* 125af778 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125af77c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af77f jne 0x125af79a */
  if (!C.zf) goto L_125af79a;
  /* 125af781 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af784 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 125af789 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125af78b jne 0x125af79a */
  if (!C.zf) goto L_125af79a;
  /* 125af78d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125af790 push ecx */
  push32((uint32_t)(ECX));
  /* 125af791 call dword ptr [0x125d23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d23a4))), 0x125af797u);
  /* 125af797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125af79a:;
  /* 125af79a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125af79d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125af7a0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af7a3 jne 0x125af7b7 */
  if (!C.zf) goto L_125af7b7;
  /* 125af7a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af7a8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 125af7ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125af7ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125af7b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125af7b4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_125af7b7:;
  /* 125af7b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125af7ba push eax */
  push32((uint32_t)(EAX));
  /* 125af7bb call 0x125aaf40 */
  push32(0x125af7c0u); f_125aaf40();
  /* 125af7c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af7c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125af7c6 jmp 0x125afad7 */
  goto L_125afad7;
L_125af7cb:;
  /* 125af7cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af7ce or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 125af7d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125af7d4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 125af7de jmp 0x125af865 */
  goto L_125af865;
L_125af7e3:;
  /* 125af7e3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 125af7ed jmp 0x125af865 */
  goto L_125af865;
L_125af7ef:;
  /* 125af7ef mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_125af7f9:;
  /* 125af7f9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 125af803 jmp 0x125af80f */
  goto L_125af80f;
L_125af805:;
  /* 125af805 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_125af80f:;
  /* 125af80f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 125af819 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af81c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 125af822 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125af824 je 0x125af843 */
  if (C.zf) goto L_125af843;
  /* 125af826 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 125af82d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 125af833 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125af836 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 125af83c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_125af843:;
  /* 125af843 jmp 0x125af865 */
  goto L_125af865;
L_125af845:;
  /* 125af845 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 125af84f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af852 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 125af858 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125af85a je 0x125af865 */
  if (C.zf) goto L_125af865;
  /* 125af85c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af85f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 125af862 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125af865:;
  /* 125af865 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af868 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 125af86d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125af86f je 0x125af88e */
  if (C.zf) goto L_125af88e;
  /* 125af871 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 125af874 push ecx */
  push32((uint32_t)(ECX));
  /* 125af875 call 0x125aff00 */
  push32(0x125af87au); f_125aff00();
  /* 125af87a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af87d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 125af883 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 125af889 jmp 0x125af91f */
  goto L_125af91f;
L_125af88e:;
  /* 125af88e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af891 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 125af894 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125af896 je 0x125af8e0 */
  if (C.zf) goto L_125af8e0;
  /* 125af898 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af89b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 125af89e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125af8a0 je 0x125af8c0 */
  if (C.zf) goto L_125af8c0;
  /* 125af8a2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 125af8a5 push ecx */
  push32((uint32_t)(ECX));
  /* 125af8a6 call 0x125afee0 */
  push32(0x125af8abu); f_125afee0();
  /* 125af8ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af8ae movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 125af8b1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125af8b2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 125af8b8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 125af8be jmp 0x125af8de */
  goto L_125af8de;
L_125af8c0:;
  /* 125af8c0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 125af8c3 push edx */
  push32((uint32_t)(EDX));
  /* 125af8c4 call 0x125afee0 */
  push32(0x125af8c9u); f_125afee0();
  /* 125af8c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af8cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125af8d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125af8d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 125af8d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_125af8de:;
  /* 125af8de jmp 0x125af91f */
  goto L_125af91f;
L_125af8e0:;
  /* 125af8e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af8e3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 125af8e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125af8e8 je 0x125af905 */
  if (C.zf) goto L_125af905;
  /* 125af8ea lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 125af8ed push ecx */
  push32((uint32_t)(ECX));
  /* 125af8ee call 0x125afee0 */
  push32(0x125af8f3u); f_125afee0();
  /* 125af8f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af8f6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125af8f7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 125af8fd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 125af903 jmp 0x125af91f */
  goto L_125af91f;
L_125af905:;
  /* 125af905 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 125af908 push edx */
  push32((uint32_t)(EDX));
  /* 125af909 call 0x125afee0 */
  push32(0x125af90eu); f_125afee0();
  /* 125af90e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125af911 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125af913 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 125af919 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_125af91f:;
  /* 125af91f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af922 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 125af925 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125af927 je 0x125af967 */
  if (C.zf) goto L_125af967;
  /* 125af929 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af930 jg 0x125af967 */
  if ((!C.zf&&C.sf==C.of)) goto L_125af967;
  /* 125af932 jl 0x125af93d */
  if ((C.sf!=C.of)) goto L_125af93d;
  /* 125af934 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af93b jae 0x125af967 */
  if (!C.cf) goto L_125af967;
L_125af93d:;
  /* 125af93d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 125af943 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125af945 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 125af94b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125af94e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125af950 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 125af956 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 125af95c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af95f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 125af962 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125af965 jmp 0x125af97f */
  goto L_125af97f;
L_125af967:;
  /* 125af967 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 125af96d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 125af973 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 125af979 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_125af97f:;
  /* 125af97f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af982 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 125af988 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125af98a jne 0x125af9a7 */
  if (!C.zf) goto L_125af9a7;
  /* 125af98c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 125af992 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 125af998 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 125af99b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 125af9a1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_125af9a7:;
  /* 125af9a7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125af9ae jge 0x125af9bc */
  if ((C.sf==C.of)) goto L_125af9bc;
  /* 125af9b0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 125af9ba jmp 0x125af9c5 */
  goto L_125af9c5;
L_125af9bc:;
  /* 125af9bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125af9bf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 125af9c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125af9c5:;
  /* 125af9c5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 125af9cb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 125af9d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125af9d3 jne 0x125af9dc */
  if (!C.zf) goto L_125af9dc;
  /* 125af9d5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_125af9dc:;
  /* 125af9dc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 125af9df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_125af9e2:;
  /* 125af9e2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 125af9e8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 125af9ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125af9f1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 125af9f7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125af9f9 jg 0x125afa0f */
  if ((!C.zf&&C.sf==C.of)) goto L_125afa0f;
  /* 125af9fb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 125afa01 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 125afa07 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125afa09 je 0x125afa90 */
  if (C.zf) goto L_125afa90;
L_125afa0f:;
  /* 125afa0f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 125afa15 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125afa16 push edx */
  push32((uint32_t)(EDX));
  /* 125afa17 push eax */
  push32((uint32_t)(EAX));
  /* 125afa18 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 125afa1e push edx */
  push32((uint32_t)(EDX));
  /* 125afa1f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 125afa25 push eax */
  push32((uint32_t)(EAX));
  /* 125afa26 call 0x125aeda0 */
  push32(0x125afa2bu); f_125aeda0();
  /* 125afa2b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125afa2e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 125afa34 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 125afa3a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125afa3b push edx */
  push32((uint32_t)(EDX));
  /* 125afa3c push eax */
  push32((uint32_t)(EAX));
  /* 125afa3d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 125afa43 push ecx */
  push32((uint32_t)(ECX));
  /* 125afa44 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 125afa4a push edx */
  push32((uint32_t)(EDX));
  /* 125afa4b call 0x125aed30 */
  push32(0x125afa50u); f_125aed30();
  /* 125afa50 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 125afa56 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 125afa5c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125afa63 jle 0x125afa77 */
  if ((C.zf||C.sf!=C.of)) goto L_125afa77;
  /* 125afa65 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 125afa6b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125afa71 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_125afa77:;
  /* 125afa77 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125afa7a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 125afa80 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 125afa82 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125afa85 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125afa88 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125afa8b jmp 0x125af9e2 */
  goto L_125af9e2;
L_125afa90:;
  /* 125afa90 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 125afa93 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125afa96 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125afa99 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125afa9c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125afa9f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125afaa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125afaa5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 125afaaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125afaac je 0x125afad7 */
  if (C.zf) goto L_125afad7;
  /* 125afaae mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125afab1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125afab4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125afab7 jne 0x125afabf */
  if (!C.zf) goto L_125afabf;
  /* 125afab9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125afabd jne 0x125afad7 */
  if (!C.zf) goto L_125afad7;
L_125afabf:;
  /* 125afabf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125afac2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125afac5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125afac8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125afacb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 125aface mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125afad1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125afad4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_125afad7:;
  /* 125afad7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125afade jne 0x125afcb2 */
  if (!C.zf) goto L_125afcb2;
  /* 125afae4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125afae7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 125afaea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125afaec je 0x125afb3d */
  if (C.zf) goto L_125afb3d;
  /* 125afaee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125afaf1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 125afaf7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125afaf9 je 0x125afb0b */
  if (C.zf) goto L_125afb0b;
  /* 125afafb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 125afb02 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 125afb09 jmp 0x125afb3d */
  goto L_125afb3d;
L_125afb0b:;
  /* 125afb0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125afb0e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125afb11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125afb13 je 0x125afb25 */
  if (C.zf) goto L_125afb25;
  /* 125afb15 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 125afb1c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 125afb23 jmp 0x125afb3d */
  goto L_125afb3d;
L_125afb25:;
  /* 125afb25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125afb28 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 125afb2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125afb2d je 0x125afb3d */
  if (C.zf) goto L_125afb3d;
  /* 125afb2f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 125afb36 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_125afb3d:;
  /* 125afb3d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 125afb43 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125afb46 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125afb49 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 125afb4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125afb52 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 125afb55 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125afb57 jne 0x125afb75 */
  if (!C.zf) goto L_125afb75;
  /* 125afb59 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 125afb5f push eax */
  push32((uint32_t)(EAX));
  /* 125afb60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125afb63 push ecx */
  push32((uint32_t)(ECX));
  /* 125afb64 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 125afb6a push edx */
  push32((uint32_t)(EDX));
  /* 125afb6b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 125afb6d call 0x125afe50 */
  push32(0x125afb72u); f_125afe50();
  /* 125afb72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125afb75:;
  /* 125afb75 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 125afb7b push eax */
  push32((uint32_t)(EAX));
  /* 125afb7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125afb7f push ecx */
  push32((uint32_t)(ECX));
  /* 125afb80 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125afb83 push edx */
  push32((uint32_t)(EDX));
  /* 125afb84 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 125afb8a push eax */
  push32((uint32_t)(EAX));
  /* 125afb8b call 0x125afe90 */
  push32(0x125afb90u); f_125afe90();
  /* 125afb90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125afb93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125afb96 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 125afb99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125afb9b je 0x125afbc3 */
  if (C.zf) goto L_125afbc3;
  /* 125afb9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125afba0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125afba3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125afba5 jne 0x125afbc3 */
  if (!C.zf) goto L_125afbc3;
  /* 125afba7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 125afbad push eax */
  push32((uint32_t)(EAX));
  /* 125afbae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125afbb1 push ecx */
  push32((uint32_t)(ECX));
  /* 125afbb2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 125afbb8 push edx */
  push32((uint32_t)(EDX));
  /* 125afbb9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125afbbb call 0x125afe50 */
  push32(0x125afbc0u); f_125afe50();
  /* 125afbc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125afbc3:;
  /* 125afbc3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125afbc7 je 0x125afc71 */
  if (C.zf) goto L_125afc71;
  /* 125afbcd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125afbd1 jle 0x125afc71 */
  if ((C.zf||C.sf!=C.of)) goto L_125afc71;
  /* 125afbd7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125afbda mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 125afbe0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125afbe3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_125afbe9:;
  /* 125afbe9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 125afbef mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 125afbf5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125afbf8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 125afbfe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125afc00 je 0x125afc6f */
  if (C.zf) goto L_125afc6f;
  /* 125afc02 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 125afc08 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 125afc0b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 125afc12 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 125afc19 push eax */
  push32((uint32_t)(EAX));
  /* 125afc1a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 125afc20 push ecx */
  push32((uint32_t)(ECX));
  /* 125afc21 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 125afc27 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125afc2a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 125afc30 call 0x125b1000 */
  push32(0x125afc35u); f_125b1000();
  /* 125afc35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125afc38 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 125afc3e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125afc45 jg 0x125afc49 */
  if ((!C.zf&&C.sf==C.of)) goto L_125afc49;
  /* 125afc47 jmp 0x125afc6f */
  goto L_125afc6f;
L_125afc49:;
  /* 125afc49 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 125afc4f push eax */
  push32((uint32_t)(EAX));
  /* 125afc50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125afc53 push ecx */
  push32((uint32_t)(ECX));
  /* 125afc54 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 125afc5a push edx */
  push32((uint32_t)(EDX));
  /* 125afc5b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 125afc61 push eax */
  push32((uint32_t)(EAX));
  /* 125afc62 call 0x125afe90 */
  push32(0x125afc67u); f_125afe90();
  /* 125afc67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125afc6a jmp 0x125afbe9 */
  goto L_125afbe9;
L_125afc6f:;
  /* 125afc6f jmp 0x125afc8c */
  goto L_125afc8c;
L_125afc71:;
  /* 125afc71 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 125afc77 push ecx */
  push32((uint32_t)(ECX));
  /* 125afc78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125afc7b push edx */
  push32((uint32_t)(EDX));
  /* 125afc7c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125afc7f push eax */
  push32((uint32_t)(EAX));
  /* 125afc80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125afc83 push ecx */
  push32((uint32_t)(ECX));
  /* 125afc84 call 0x125afe90 */
  push32(0x125afc89u); f_125afe90();
  /* 125afc89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125afc8c:;
  /* 125afc8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125afc8f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125afc92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125afc94 je 0x125afcb2 */
  if (C.zf) goto L_125afcb2;
  /* 125afc96 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 125afc9c push eax */
  push32((uint32_t)(EAX));
  /* 125afc9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125afca0 push ecx */
  push32((uint32_t)(ECX));
  /* 125afca1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 125afca7 push edx */
  push32((uint32_t)(EDX));
  /* 125afca8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 125afcaa call 0x125afe50 */
  push32(0x125afcafu); f_125afe50();
  /* 125afcaf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125afcb2:;
  /* 125afcb2 jmp 0x125af0c4 */
  goto L_125af0c4;
L_125afcb7:;
  /* 125afcb7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 125afcbd pop edi */
  EDI = (pop32());
  /* 125afcbe pop esi */
  ESI = (pop32());
  /* 125afcbf pop ebx */
  EBX = (pop32());
  /* 125afcc0 mov esp, ebp */
  ESP = (EBP);
  /* 125afcc2 pop ebp */
  EBP = (pop32());
  /* 125afcc3 ret  */
  ESPCHK(0x125af0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdd0 @ 0x125afdd0 (119 bytes, 44 insns) */
void f_125afdd0(void) {
  FTRACE(0x125afdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125afdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 125afdd1 mov ebp, esp */
  EBP = (ESP);
  /* 125afdd3 push ecx */
  push32((uint32_t)(ECX));
  /* 125afdd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125afdd7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125afdda sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125afddd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125afde0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 125afde3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125afde6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125afdea jl 0x125afe12 */
  if ((C.sf!=C.of)) goto L_125afe12;
  /* 125afdec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125afdef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125afdf1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 125afdf4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 125afdf6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 125afdfa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125afe00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125afe03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125afe06 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125afe08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125afe0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125afe0e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125afe10 jmp 0x125afe25 */
  goto L_125afe25;
L_125afe12:;
  /* 125afe12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125afe15 push edx */
  push32((uint32_t)(EDX));
  /* 125afe16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125afe19 push eax */
  push32((uint32_t)(EAX));
  /* 125afe1a call 0x125aee20 */
  push32(0x125afe1fu); f_125aee20();
  /* 125afe1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125afe22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125afe25:;
  /* 125afe25 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125afe29 jne 0x125afe36 */
  if (!C.zf) goto L_125afe36;
  /* 125afe2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125afe2e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 125afe34 jmp 0x125afe43 */
  goto L_125afe43;
L_125afe36:;
  /* 125afe36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125afe39 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125afe3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125afe3e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125afe41 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_125afe43:;
  /* 125afe43 mov esp, ebp */
  ESP = (EBP);
  /* 125afe45 pop ebp */
  EBP = (pop32());
  /* 125afe46 ret  */
  ESPCHK(0x125afdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe50 @ 0x125afe50 (53 bytes, 23 insns) */
void f_125afe50(void) {
  FTRACE(0x125afe50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125afe50 push ebp */
  push32((uint32_t)(EBP));
  /* 125afe51 mov ebp, esp */
  EBP = (ESP);
L_125afe53:;
  /* 125afe53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125afe56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125afe59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125afe5c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 125afe5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125afe61 jle 0x125afe83 */
  if ((C.zf||C.sf!=C.of)) goto L_125afe83;
  /* 125afe63 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125afe66 push edx */
  push32((uint32_t)(EDX));
  /* 125afe67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125afe6a push eax */
  push32((uint32_t)(EAX));
  /* 125afe6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125afe6e push ecx */
  push32((uint32_t)(ECX));
  /* 125afe6f call 0x125afdd0 */
  push32(0x125afe74u); f_125afdd0();
  /* 125afe74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125afe77 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125afe7a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125afe7d jne 0x125afe81 */
  if (!C.zf) goto L_125afe81;
  /* 125afe7f jmp 0x125afe83 */
  goto L_125afe83;
L_125afe81:;
  /* 125afe81 jmp 0x125afe53 */
  goto L_125afe53;
L_125afe83:;
  /* 125afe83 pop ebp */
  EBP = (pop32());
  /* 125afe84 ret  */
  ESPCHK(0x125afe50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe90 @ 0x125afe90 (74 bytes, 31 insns) */
void f_125afe90(void) {
  FTRACE(0x125afe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125afe90 push ebp */
  push32((uint32_t)(EBP));
  /* 125afe91 mov ebp, esp */
  EBP = (ESP);
  /* 125afe93 push ecx */
  push32((uint32_t)(ECX));
L_125afe94:;
  /* 125afe94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125afe97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125afe9a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125afe9d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 125afea0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125afea2 jle 0x125afed6 */
  if ((C.zf||C.sf!=C.of)) goto L_125afed6;
  /* 125afea4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125afea7 push edx */
  push32((uint32_t)(EDX));
  /* 125afea8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125afeab push eax */
  push32((uint32_t)(EAX));
  /* 125afeac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125afeaf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125afeb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125afeb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125afeb8 push eax */
  push32((uint32_t)(EAX));
  /* 125afeb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125afebc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125afebf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 125afec2 call 0x125afdd0 */
  push32(0x125afec7u); f_125afdd0();
  /* 125afec7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125afeca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125afecd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125afed0 jne 0x125afed4 */
  if (!C.zf) goto L_125afed4;
  /* 125afed2 jmp 0x125afed6 */
  goto L_125afed6;
L_125afed4:;
  /* 125afed4 jmp 0x125afe94 */
  goto L_125afe94;
L_125afed6:;
  /* 125afed6 mov esp, ebp */
  ESP = (EBP);
  /* 125afed8 pop ebp */
  EBP = (pop32());
  /* 125afed9 ret  */
  ESPCHK(0x125afe90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fee0 @ 0x125afee0 (26 bytes, 12 insns) */
void f_125afee0(void) {
  FTRACE(0x125afee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125afee0 push ebp */
  push32((uint32_t)(EBP));
  /* 125afee1 mov ebp, esp */
  EBP = (ESP);
  /* 125afee3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125afee6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125afee8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125afeeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125afeee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125afef0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125afef3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125afef5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 125afef8 pop ebp */
  EBP = (pop32());
  /* 125afef9 ret  */
  ESPCHK(0x125afee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff00 @ 0x125aff00 (31 bytes, 14 insns) */
void f_125aff00(void) {
  FTRACE(0x125aff00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aff00 push ebp */
  push32((uint32_t)(EBP));
  /* 125aff01 mov ebp, esp */
  EBP = (ESP);
  /* 125aff03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aff06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125aff08 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aff0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aff0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125aff10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aff13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125aff15 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aff18 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 125aff1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125aff1d pop ebp */
  EBP = (pop32());
  /* 125aff1e ret  */
  ESPCHK(0x125aff00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff20 @ 0x125aff20 (27 bytes, 12 insns) */
void f_125aff20(void) {
  FTRACE(0x125aff20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aff20 push ebp */
  push32((uint32_t)(EBP));
  /* 125aff21 mov ebp, esp */
  EBP = (ESP);
  /* 125aff23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aff26 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125aff28 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aff2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aff2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125aff30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aff33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125aff35 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 125aff39 pop ebp */
  EBP = (pop32());
  /* 125aff3a ret  */
  ESPCHK(0x125aff20u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x125aff40 (145 bytes, 42 insns) */
void f_125aff40(void) {
  FTRACE(0x125aff40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aff40 push ebp */
  push32((uint32_t)(EBP));
  /* 125aff41 mov ebp, esp */
  EBP = (ESP);
  /* 125aff43 push ecx */
  push32((uint32_t)(ECX));
  /* 125aff44 call 0x125afff0 */
  push32(0x125aff49u); f_125afff0();
  /* 125aff49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aff4c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125aff4e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125aff55 jmp 0x125aff60 */
  goto L_125aff60;
L_125aff57:;
  /* 125aff57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aff5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aff5d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125aff60:;
  /* 125aff60 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aff64 jae 0x125aff8a */
  if (!C.cf) goto L_125aff8a;
  /* 125aff66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aff69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aff6c cmp ecx, dword ptr [eax*8 + 0x125d1fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x125d1fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aff73 jne 0x125aff88 */
  if (!C.zf) goto L_125aff88;
  /* 125aff75 call 0x125affe0 */
  push32(0x125aff7au); f_125affe0();
  /* 125aff7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aff7d mov ecx, dword ptr [edx*8 + 0x125d1fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x125d1fbc)));
  /* 125aff84 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125aff86 jmp 0x125affcd */
  goto L_125affcd;
L_125aff88:;
  /* 125aff88 jmp 0x125aff57 */
  goto L_125aff57;
L_125aff8a:;
  /* 125aff8a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aff8e jb 0x125affa3 */
  if (C.cf) goto L_125affa3;
  /* 125aff90 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aff94 ja 0x125affa3 */
  if ((!C.cf&&!C.zf)) goto L_125affa3;
  /* 125aff96 call 0x125affe0 */
  push32(0x125aff9bu); f_125affe0();
  /* 125aff9b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 125affa1 jmp 0x125affcd */
  goto L_125affcd;
L_125affa3:;
  /* 125affa3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125affaa jb 0x125affc2 */
  if (C.cf) goto L_125affc2;
  /* 125affac cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125affb3 ja 0x125affc2 */
  if ((!C.cf&&!C.zf)) goto L_125affc2;
  /* 125affb5 call 0x125affe0 */
  push32(0x125affbau); f_125affe0();
  /* 125affba mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 125affc0 jmp 0x125affcd */
  goto L_125affcd;
L_125affc2:;
  /* 125affc2 call 0x125affe0 */
  push32(0x125affc7u); f_125affe0();
  /* 125affc7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_125affcd:;
  /* 125affcd mov esp, ebp */
  ESP = (EBP);
  /* 125affcf pop ebp */
  EBP = (pop32());
  /* 125affd0 ret  */
  ESPCHK(0x125aff40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffe0 @ 0x125affe0 (13 bytes, 6 insns) */
void f_125affe0(void) {
  FTRACE(0x125affe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125affe0 push ebp */
  push32((uint32_t)(EBP));
  /* 125affe1 mov ebp, esp */
  EBP = (ESP);
  /* 125affe3 call 0x125a7b50 */
  push32(0x125affe8u); f_125a7b50();
  /* 125affe8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125affeb pop ebp */
  EBP = (pop32());
  /* 125affec ret  */
  ESPCHK(0x125affe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fff0 @ 0x125afff0 (13 bytes, 6 insns) */
void f_125afff0(void) {
  FTRACE(0x125afff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125afff0 push ebp */
  push32((uint32_t)(EBP));
  /* 125afff1 mov ebp, esp */
  EBP = (ESP);
  /* 125afff3 call 0x125a7b50 */
  push32(0x125afff8u); f_125a7b50();
  /* 125afff8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125afffb pop ebp */
  EBP = (pop32());
  /* 125afffc ret  */
  ESPCHK(0x125afff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010000 @ 0x125b0000 (664 bytes, 263 insns) [15 switch table(s)] */
void f_125b0000(void) {
  FTRACE(0x125b0000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b0000 push ebp */
  push32((uint32_t)(EBP));
  /* 125b0001 mov ebp, esp */
  EBP = (ESP);
  /* 125b0003 push edi */
  push32((uint32_t)(EDI));
  /* 125b0004 push esi */
  push32((uint32_t)(ESI));
  /* 125b0005 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 125b0008 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b000b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 125b000e mov eax, ecx */
  EAX = (ECX);
  /* 125b0010 mov edx, ecx */
  EDX = (ECX);
  /* 125b0012 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0014 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0016 jbe 0x125b0020 */
  if ((C.cf||C.zf)) goto L_125b0020;
  /* 125b0018 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b001a jb 0x125b0198 */
  if (C.cf) goto L_125b0198;
L_125b0020:;
  /* 125b0020 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 125b0026 jne 0x125b003c */
  if (!C.zf) goto L_125b003c;
  /* 125b0028 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125b002b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125b002e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0031 jb 0x125b005c */
  if (C.cf) goto L_125b005c;
  /* 125b0033 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125b0035 jmp dword ptr [edx*4 + 0x125b0148] */
  switch (EDX) {
    case 0: goto L_125b0158;
    case 1: goto L_125b0160;
    case 2: goto L_125b016c;
    case 3: goto L_125b0180;
    default: x86_unimpl("switch@0x125b0035 out of table"); return;
  }
L_125b003c:;
  /* 125b003c mov eax, edi */
  EAX = (EDI);
  /* 125b003e mov edx, 3 */
  EDX = (0x3u);
  /* 125b0043 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b0046 jb 0x125b0054 */
  if (C.cf) goto L_125b0054;
  /* 125b0048 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 125b004b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b004d jmp dword ptr [eax*4 + 0x125b0060] */
  switch (EAX) {
    case 1: goto L_125b0070;
    case 2: goto L_125b009c;
    case 3: goto L_125b00c0;
    default: x86_unimpl("switch@0x125b004d out of table"); return;
  }
L_125b0054:;
  /* 125b0054 jmp dword ptr [ecx*4 + 0x125b0158] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x125b0158)))); return;
  /* 125b005b nop  */
  /* nop */
L_125b005c:;
  /* 125b005c jmp dword ptr [ecx*4 + 0x125b00dc] */
  switch (ECX) {
    case 0: goto L_125b013f;
    case 1: goto L_125b012c;
    case 2: goto L_125b0124;
    case 3: goto L_125b011c;
    case 4: goto L_125b0114;
    case 5: goto L_125b010c;
    case 6: goto L_125b0104;
    case 7: goto L_125b00fc;
    default: x86_unimpl("switch@0x125b005c out of table"); return;
  }
  /* 125b0063 nop  */
  /* nop */
L_125b0070:;
  /* 125b0070 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125b0072 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125b0074 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125b0076 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125b0079 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125b007c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125b007f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125b0082 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125b0085 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0088 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 125b008b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b008e jb 0x125b005c */
  if (C.cf) goto L_125b005c;
  /* 125b0090 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125b0092 jmp dword ptr [edx*4 + 0x125b0148] */
  switch (EDX) {
    case 0: goto L_125b0158;
    case 1: goto L_125b0160;
    case 2: goto L_125b016c;
    case 3: goto L_125b0180;
    default: x86_unimpl("switch@0x125b0092 out of table"); return;
  }
  /* 125b0099 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125b009c:;
  /* 125b009c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125b009e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125b00a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125b00a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125b00a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125b00a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125b00ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125b00ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 125b00b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b00b4 jb 0x125b005c */
  if (C.cf) goto L_125b005c;
  /* 125b00b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125b00b8 jmp dword ptr [edx*4 + 0x125b0148] */
  switch (EDX) {
    case 0: goto L_125b0158;
    case 1: goto L_125b0160;
    case 2: goto L_125b016c;
    case 3: goto L_125b0180;
    default: x86_unimpl("switch@0x125b00b8 out of table"); return;
  }
  /* 125b00bf nop  */
  /* nop */
L_125b00c0:;
  /* 125b00c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125b00c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125b00c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125b00c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125b00c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125b00ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125b00cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b00ce jb 0x125b005c */
  if (C.cf) goto L_125b005c;
  /* 125b00d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125b00d2 jmp dword ptr [edx*4 + 0x125b0148] */
  switch (EDX) {
    case 0: goto L_125b0158;
    case 1: goto L_125b0160;
    case 2: goto L_125b016c;
    case 3: goto L_125b0180;
    default: x86_unimpl("switch@0x125b00d2 out of table"); return;
  }
  /* 125b00d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125b00fc:;
  /* 125b00fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 125b0100 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_125b0104:;
  /* 125b0104 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 125b0108 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_125b010c:;
  /* 125b010c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 125b0110 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_125b0114:;
  /* 125b0114 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 125b0118 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_125b011c:;
  /* 125b011c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 125b0120 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_125b0124:;
  /* 125b0124 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 125b0128 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_125b012c:;
  /* 125b012c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 125b0130 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 125b0134 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 125b013b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125b013d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_125b013f:;
  /* 125b013f jmp dword ptr [edx*4 + 0x125b0148] */
  switch (EDX) {
    case 0: goto L_125b0158;
    case 1: goto L_125b0160;
    case 2: goto L_125b016c;
    case 3: goto L_125b0180;
    default: x86_unimpl("switch@0x125b013f out of table"); return;
  }
  /* 125b0146 mov edi, edi */
  EDI = (EDI);
L_125b0158:;
  /* 125b0158 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b015b pop esi */
  ESI = (pop32());
  /* 125b015c pop edi */
  EDI = (pop32());
  /* 125b015d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125b015e ret  */
  ESPCHK(0x125b0000u, _esp0);
  ESP += 4; return;
  /* 125b015f nop  */
  /* nop */
L_125b0160:;
  /* 125b0160 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125b0162 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125b0164 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0167 pop esi */
  ESI = (pop32());
  /* 125b0168 pop edi */
  EDI = (pop32());
  /* 125b0169 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125b016a ret  */
  ESPCHK(0x125b0000u, _esp0);
  ESP += 4; return;
  /* 125b016b nop  */
  /* nop */
L_125b016c:;
  /* 125b016c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125b016e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125b0170 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125b0173 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125b0176 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0179 pop esi */
  ESI = (pop32());
  /* 125b017a pop edi */
  EDI = (pop32());
  /* 125b017b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125b017c ret  */
  ESPCHK(0x125b0000u, _esp0);
  ESP += 4; return;
  /* 125b017d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125b0180:;
  /* 125b0180 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125b0182 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125b0184 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125b0187 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125b018a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125b018d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125b0190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0193 pop esi */
  ESI = (pop32());
  /* 125b0194 pop edi */
  EDI = (pop32());
  /* 125b0195 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125b0196 ret  */
  ESPCHK(0x125b0000u, _esp0);
  ESP += 4; return;
  /* 125b0197 nop  */
  /* nop */
L_125b0198:;
  /* 125b0198 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 125b019c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 125b01a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 125b01a6 jne 0x125b01cc */
  if (!C.zf) goto L_125b01cc;
  /* 125b01a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125b01ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125b01ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b01b1 jb 0x125b01c0 */
  if (C.cf) goto L_125b01c0;
  /* 125b01b3 std  */
  C.df=1;
  /* 125b01b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125b01b6 cld  */
  C.df=0;
  /* 125b01b7 jmp dword ptr [edx*4 + 0x125b02e0] */
  switch (EDX) {
    case 0: goto L_125b02f0;
    case 1: goto L_125b02f8;
    case 2: goto L_125b0308;
    case 3: goto L_125b031c;
    default: x86_unimpl("switch@0x125b01b7 out of table"); return;
  }
  /* 125b01be mov edi, edi */
  EDI = (EDI);
L_125b01c0:;
  /* 125b01c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b01c2 jmp dword ptr [ecx*4 + 0x125b0290] */
  switch (ECX) {
    case 0: goto L_125b02d7;
    default: x86_unimpl("switch@0x125b01c2 out of table"); return;
  }
  /* 125b01c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125b01cc:;
  /* 125b01cc mov eax, edi */
  EAX = (EDI);
  /* 125b01ce mov edx, 3 */
  EDX = (0x3u);
  /* 125b01d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b01d6 jb 0x125b01e4 */
  if (C.cf) goto L_125b01e4;
  /* 125b01d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 125b01db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b01dd jmp dword ptr [eax*4 + 0x125b01e8] */
  switch (EAX) {
    case 1: goto L_125b01f8;
    case 2: goto L_125b0218;
    case 3: goto L_125b0240;
    default: x86_unimpl("switch@0x125b01dd out of table"); return;
  }
L_125b01e4:;
  /* 125b01e4 jmp dword ptr [ecx*4 + 0x125b02e0] */
  switch (ECX) {
    case 0: goto L_125b02f0;
    case 1: goto L_125b02f8;
    case 2: goto L_125b0308;
    case 3: goto L_125b031c;
    default: x86_unimpl("switch@0x125b01e4 out of table"); return;
  }
  /* 125b01eb nop  */
  /* nop */
L_125b01f8:;
  /* 125b01f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125b01fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125b01fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125b0200 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 125b0201 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125b0204 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 125b0205 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0208 jb 0x125b01c0 */
  if (C.cf) goto L_125b01c0;
  /* 125b020a std  */
  C.df=1;
  /* 125b020b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125b020d cld  */
  C.df=0;
  /* 125b020e jmp dword ptr [edx*4 + 0x125b02e0] */
  switch (EDX) {
    case 0: goto L_125b02f0;
    case 1: goto L_125b02f8;
    case 2: goto L_125b0308;
    case 3: goto L_125b031c;
    default: x86_unimpl("switch@0x125b020e out of table"); return;
  }
  /* 125b0215 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125b0218:;
  /* 125b0218 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125b021b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125b021d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125b0220 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125b0223 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125b0226 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125b0229 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b022c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b022f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0232 jb 0x125b01c0 */
  if (C.cf) goto L_125b01c0;
  /* 125b0234 std  */
  C.df=1;
  /* 125b0235 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125b0237 cld  */
  C.df=0;
  /* 125b0238 jmp dword ptr [edx*4 + 0x125b02e0] */
  switch (EDX) {
    case 0: goto L_125b02f0;
    case 1: goto L_125b02f8;
    case 2: goto L_125b0308;
    case 3: goto L_125b031c;
    default: x86_unimpl("switch@0x125b0238 out of table"); return;
  }
  /* 125b023f nop  */
  /* nop */
L_125b0240:;
  /* 125b0240 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125b0243 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125b0245 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125b0248 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125b024b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125b024e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125b0251 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125b0254 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125b0257 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b025a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b025d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0260 jb 0x125b01c0 */
  if (C.cf) goto L_125b01c0;
  /* 125b0266 std  */
  C.df=1;
  /* 125b0267 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125b0269 cld  */
  C.df=0;
  /* 125b026a jmp dword ptr [edx*4 + 0x125b02e0] */
  switch (EDX) {
    case 0: goto L_125b02f0;
    case 1: goto L_125b02f8;
    case 2: goto L_125b0308;
    case 3: goto L_125b031c;
    default: x86_unimpl("switch@0x125b026a out of table"); return;
  }
  /* 125b0271 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 125b0274 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 125b0275 add bl, byte ptr [ebx + 0x12] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBX + 0x12))),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 125b0278 pushfd  */
  x86_unimpl("pushfd @ 0x125b0278");
  /* 125b0279 add bl, byte ptr [ebx + 0x12] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBX + 0x12))),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 125b027c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 125b027d add bl, byte ptr [ebx + 0x12] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBX + 0x12))),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 125b0280 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 125b0281 add bl, byte ptr [ebx + 0x12] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBX + 0x12))),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 125b0284 mov ah, 2 */
  AH = (0x2u);
  /* 125b0286 pop ebx */
  EBX = (pop32());
  /* 125b0287 adc bh, byte ptr [edx + eax + 0x2c4125b] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EDX + EAX*1 + 0x2c4125b))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 125b028e pop ebx */
  EBX = (pop32());
  /* 125b0294 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 125b0298 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 125b029c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 125b02a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 125b02a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 125b02a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 125b02ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 125b02b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 125b02b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 125b02b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 125b02bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 125b02c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 125b02c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 125b02c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 125b02cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 125b02d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125b02d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_125b02d7:;
  /* 125b02d7 jmp dword ptr [edx*4 + 0x125b02e0] */
  switch (EDX) {
    case 0: goto L_125b02f0;
    case 1: goto L_125b02f8;
    case 2: goto L_125b0308;
    case 3: goto L_125b031c;
    default: x86_unimpl("switch@0x125b02d7 out of table"); return;
  }
  /* 125b02de mov edi, edi */
  EDI = (EDI);
L_125b02f0:;
  /* 125b02f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b02f3 pop esi */
  ESI = (pop32());
  /* 125b02f4 pop edi */
  EDI = (pop32());
  /* 125b02f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125b02f6 ret  */
  ESPCHK(0x125b0000u, _esp0);
  ESP += 4; return;
  /* 125b02f7 nop  */
  /* nop */
L_125b02f8:;
  /* 125b02f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125b02fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125b02fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0301 pop esi */
  ESI = (pop32());
  /* 125b0302 pop edi */
  EDI = (pop32());
  /* 125b0303 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125b0304 ret  */
  ESPCHK(0x125b0000u, _esp0);
  ESP += 4; return;
  /* 125b0305 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125b0308:;
  /* 125b0308 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125b030b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125b030e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125b0311 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125b0314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0317 pop esi */
  ESI = (pop32());
  /* 125b0318 pop edi */
  EDI = (pop32());
  /* 125b0319 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125b031a ret  */
  ESPCHK(0x125b0000u, _esp0);
  ESP += 4; return;
  /* 125b031b nop  */
  /* nop */
L_125b031c:;
  /* 125b031c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125b031f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125b0322 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125b0325 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125b0328 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125b032b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125b032e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0331 pop esi */
  ESI = (pop32());
  /* 125b0332 pop edi */
  EDI = (pop32());
  /* 125b0333 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125b0334 ret  */
  ESPCHK(0x125b0000u, _esp0);
  ESP += 4; return;
}

/* FUN_10010340 @ 0x125b0340 (421 bytes, 148 insns) */
void f_125b0340(void) {
  FTRACE(0x125b0340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b0340 push ebp */
  push32((uint32_t)(EBP));
  /* 125b0341 mov ebp, esp */
  EBP = (ESP);
  /* 125b0343 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125b0345 push 0x125cf6f8 */
  push32((uint32_t)(0x125cf6f8u));
  /* 125b034a push 0x125b1218 */
  push32((uint32_t)(0x125b1218u));
  /* 125b034f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125b0355 push eax */
  push32((uint32_t)(EAX));
  /* 125b0356 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125b035d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0360 push ebx */
  push32((uint32_t)(EBX));
  /* 125b0361 push esi */
  push32((uint32_t)(ESI));
  /* 125b0362 push edi */
  push32((uint32_t)(EDI));
  /* 125b0363 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b0366 cmp dword ptr [0x125d3ad4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3ad4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b036d jne 0x125b03be */
  if (!C.zf) goto L_125b03be;
  /* 125b036f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 125b0372 push eax */
  push32((uint32_t)(EAX));
  /* 125b0373 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b0375 push 0x125cf6f4 */
  push32((uint32_t)(0x125cf6f4u));
  /* 125b037a push 1 */
  push32((uint32_t)(0x1u));
  /* 125b037c call dword ptr [0x125d6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6308))), 0x125b0382u);
  /* 125b0382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b0384 je 0x125b0392 */
  if (C.zf) goto L_125b0392;
  /* 125b0386 mov dword ptr [0x125d3ad4], 1 */
  w32((uint32_t)(0x125d3ad4), (0x1u));
  /* 125b0390 jmp 0x125b03be */
  goto L_125b03be;
L_125b0392:;
  /* 125b0392 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 125b0395 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0396 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b0398 push 0x125cf6f0 */
  push32((uint32_t)(0x125cf6f0u));
  /* 125b039d push 1 */
  push32((uint32_t)(0x1u));
  /* 125b039f push 0 */
  push32((uint32_t)(0x0u));
  /* 125b03a1 call dword ptr [0x125d6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6318))), 0x125b03a7u);
  /* 125b03a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b03a9 je 0x125b03b7 */
  if (C.zf) goto L_125b03b7;
  /* 125b03ab mov dword ptr [0x125d3ad4], 2 */
  w32((uint32_t)(0x125d3ad4), (0x2u));
  /* 125b03b5 jmp 0x125b03be */
  goto L_125b03be;
L_125b03b7:;
  /* 125b03b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b03b9 jmp 0x125b04e8 */
  goto L_125b04e8;
L_125b03be:;
  /* 125b03be cmp dword ptr [0x125d3ad4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x125d3ad4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b03c5 jne 0x125b03f5 */
  if (!C.zf) goto L_125b03f5;
  /* 125b03c7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b03cb jne 0x125b03d6 */
  if (!C.zf) goto L_125b03d6;
  /* 125b03cd mov edx, dword ptr [0x125d3ae0] */
  EDX = (r32((uint32_t)(0x125d3ae0)));
  /* 125b03d3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_125b03d6:;
  /* 125b03d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b03d9 push eax */
  push32((uint32_t)(EAX));
  /* 125b03da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b03dd push ecx */
  push32((uint32_t)(ECX));
  /* 125b03de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b03e1 push edx */
  push32((uint32_t)(EDX));
  /* 125b03e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b03e5 push eax */
  push32((uint32_t)(EAX));
  /* 125b03e6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125b03e9 push ecx */
  push32((uint32_t)(ECX));
  /* 125b03ea call dword ptr [0x125d6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6318))), 0x125b03f0u);
  /* 125b03f0 jmp 0x125b04e8 */
  goto L_125b04e8;
L_125b03f5:;
  /* 125b03f5 cmp dword ptr [0x125d3ad4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d3ad4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b03fc jne 0x125b04e6 */
  if (!C.zf) goto L_125b04e6;
  /* 125b0402 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0406 jne 0x125b0411 */
  if (!C.zf) goto L_125b0411;
  /* 125b0408 mov edx, dword ptr [0x125d3af0] */
  EDX = (r32((uint32_t)(0x125d3af0)));
  /* 125b040e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_125b0411:;
  /* 125b0411 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0413 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0415 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b0418 push eax */
  push32((uint32_t)(EAX));
  /* 125b0419 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b041c push ecx */
  push32((uint32_t)(ECX));
  /* 125b041d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 125b0420 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b0422 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b0424 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 125b0427 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b042a push edx */
  push32((uint32_t)(EDX));
  /* 125b042b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b042e push eax */
  push32((uint32_t)(EAX));
  /* 125b042f call dword ptr [0x125d6310] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6310))), 0x125b0435u);
  /* 125b0435 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125b0438 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b043c jne 0x125b0445 */
  if (!C.zf) goto L_125b0445;
  /* 125b043e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b0440 jmp 0x125b04e8 */
  goto L_125b04e8;
L_125b0445:;
  /* 125b0445 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b044c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b044f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125b0451 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0454 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125b0456 call 0x125ab2b0 */
  push32(0x125b045bu); f_125ab2b0();
  /* 125b045b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 125b045e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b0461 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125b0464 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125b0467 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b046a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 125b046c push edx */
  push32((uint32_t)(EDX));
  /* 125b046d push 0 */
  push32((uint32_t)(0x0u));
  /* 125b046f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b0472 push eax */
  push32((uint32_t)(EAX));
  /* 125b0473 call 0x125abe80 */
  push32(0x125b0478u); f_125abe80();
  /* 125b0478 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b047b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125b0482 jmp 0x125b049b */
  goto L_125b049b;
  /* 125b0484 mov eax, 1 */
  EAX = (0x1u);
  /* 125b0489 ret  */
  ESPCHK(0x125b0340u, _esp0);
  ESP += 4; return;
  /* 125b048a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125b048d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125b0494 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125b049b:;
  /* 125b049b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b049f jne 0x125b04a5 */
  if (!C.zf) goto L_125b04a5;
  /* 125b04a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b04a3 jmp 0x125b04e8 */
  goto L_125b04e8;
L_125b04a5:;
  /* 125b04a5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b04a8 push ecx */
  push32((uint32_t)(ECX));
  /* 125b04a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b04ac push edx */
  push32((uint32_t)(EDX));
  /* 125b04ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b04b0 push eax */
  push32((uint32_t)(EAX));
  /* 125b04b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b04b4 push ecx */
  push32((uint32_t)(ECX));
  /* 125b04b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b04b7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b04ba push edx */
  push32((uint32_t)(EDX));
  /* 125b04bb call dword ptr [0x125d6310] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6310))), 0x125b04c1u);
  /* 125b04c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125b04c4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b04c8 jne 0x125b04ce */
  if (!C.zf) goto L_125b04ce;
  /* 125b04ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b04cc jmp 0x125b04e8 */
  goto L_125b04e8;
L_125b04ce:;
  /* 125b04ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b04d1 push eax */
  push32((uint32_t)(EAX));
  /* 125b04d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b04d5 push ecx */
  push32((uint32_t)(ECX));
  /* 125b04d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b04d9 push edx */
  push32((uint32_t)(EDX));
  /* 125b04da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b04dd push eax */
  push32((uint32_t)(EAX));
  /* 125b04de call dword ptr [0x125d6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6308))), 0x125b04e4u);
  /* 125b04e4 jmp 0x125b04e8 */
  goto L_125b04e8;
L_125b04e6:;
  /* 125b04e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b04e8:;
  /* 125b04e8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 125b04eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b04ee mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 125b04f5 pop edi */
  EDI = (pop32());
  /* 125b04f6 pop esi */
  ESI = (pop32());
  /* 125b04f7 pop ebx */
  EBX = (pop32());
  /* 125b04f8 mov esp, ebp */
  ESP = (EBP);
  /* 125b04fa pop ebp */
  EBP = (pop32());
  /* 125b04fb ret  */
  ESPCHK(0x125b0340u, _esp0);
  ESP += 4; return;
}

/* FUN_10010500 @ 0x125b0500 (727 bytes, 263 insns) */
void f_125b0500(void) {
  FTRACE(0x125b0500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b0500 push ebp */
  push32((uint32_t)(EBP));
  /* 125b0501 mov ebp, esp */
  EBP = (ESP);
  /* 125b0503 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125b0505 push 0x125cf708 */
  push32((uint32_t)(0x125cf708u));
  /* 125b050a push 0x125b1218 */
  push32((uint32_t)(0x125b1218u));
  /* 125b050f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125b0515 push eax */
  push32((uint32_t)(EAX));
  /* 125b0516 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125b051d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0520 push ebx */
  push32((uint32_t)(EBX));
  /* 125b0521 push esi */
  push32((uint32_t)(ESI));
  /* 125b0522 push edi */
  push32((uint32_t)(EDI));
  /* 125b0523 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b0526 cmp dword ptr [0x125d3af8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b052d jne 0x125b0586 */
  if (!C.zf) goto L_125b0586;
  /* 125b052f push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0531 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0533 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b0535 push 0x125cf6f4 */
  push32((uint32_t)(0x125cf6f4u));
  /* 125b053a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125b053f push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0541 call dword ptr [0x125d630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d630c))), 0x125b0547u);
  /* 125b0547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b0549 je 0x125b0557 */
  if (C.zf) goto L_125b0557;
  /* 125b054b mov dword ptr [0x125d3af8], 1 */
  w32((uint32_t)(0x125d3af8), (0x1u));
  /* 125b0555 jmp 0x125b0586 */
  goto L_125b0586;
L_125b0557:;
  /* 125b0557 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0559 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b055b push 1 */
  push32((uint32_t)(0x1u));
  /* 125b055d push 0x125cf6f0 */
  push32((uint32_t)(0x125cf6f0u));
  /* 125b0562 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125b0567 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0569 call dword ptr [0x125d6304] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6304))), 0x125b056fu);
  /* 125b056f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b0571 je 0x125b057f */
  if (C.zf) goto L_125b057f;
  /* 125b0573 mov dword ptr [0x125d3af8], 2 */
  w32((uint32_t)(0x125d3af8), (0x2u));
  /* 125b057d jmp 0x125b0586 */
  goto L_125b0586;
L_125b057f:;
  /* 125b057f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b0581 jmp 0x125b07f1 */
  goto L_125b07f1;
L_125b0586:;
  /* 125b0586 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b058a jle 0x125b059f */
  if ((C.zf||C.sf!=C.of)) goto L_125b059f;
  /* 125b058c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b058f push eax */
  push32((uint32_t)(EAX));
  /* 125b0590 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b0593 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0594 call 0x125b0810 */
  push32(0x125b0599u); f_125b0810();
  /* 125b0599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b059c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_125b059f:;
  /* 125b059f cmp dword ptr [0x125d3af8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x125d3af8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b05a6 jne 0x125b05cb */
  if (!C.zf) goto L_125b05cb;
  /* 125b05a8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125b05ab push edx */
  push32((uint32_t)(EDX));
  /* 125b05ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b05af push eax */
  push32((uint32_t)(EAX));
  /* 125b05b0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b05b3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b05b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b05b7 push edx */
  push32((uint32_t)(EDX));
  /* 125b05b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b05bb push eax */
  push32((uint32_t)(EAX));
  /* 125b05bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b05bf push ecx */
  push32((uint32_t)(ECX));
  /* 125b05c0 call dword ptr [0x125d6304] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6304))), 0x125b05c6u);
  /* 125b05c6 jmp 0x125b07f1 */
  goto L_125b07f1;
L_125b05cb:;
  /* 125b05cb cmp dword ptr [0x125d3af8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d3af8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b05d2 jne 0x125b07ef */
  if (!C.zf) goto L_125b07ef;
  /* 125b05d8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b05dc jne 0x125b05e7 */
  if (!C.zf) goto L_125b05e7;
  /* 125b05de mov edx, dword ptr [0x125d3af0] */
  EDX = (r32((uint32_t)(0x125d3af0)));
  /* 125b05e4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_125b05e7:;
  /* 125b05e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b05e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b05eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b05ee push eax */
  push32((uint32_t)(EAX));
  /* 125b05ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b05f2 push ecx */
  push32((uint32_t)(ECX));
  /* 125b05f3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 125b05f6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b05f8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b05fa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 125b05fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0600 push edx */
  push32((uint32_t)(EDX));
  /* 125b0601 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 125b0604 push eax */
  push32((uint32_t)(EAX));
  /* 125b0605 call dword ptr [0x125d6310] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6310))), 0x125b060bu);
  /* 125b060b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125b060e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0612 jne 0x125b061b */
  if (!C.zf) goto L_125b061b;
  /* 125b0614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b0616 jmp 0x125b07f1 */
  goto L_125b07f1;
L_125b061b:;
  /* 125b061b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b0622 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b0625 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125b0627 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b062a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125b062c call 0x125ab2b0 */
  push32(0x125b0631u); f_125ab2b0();
  /* 125b0631 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 125b0634 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b0637 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125b063a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125b063d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125b0644 jmp 0x125b065d */
  goto L_125b065d;
  /* 125b0646 mov eax, 1 */
  EAX = (0x1u);
  /* 125b064b ret  */
  ESPCHK(0x125b0500u, _esp0);
  ESP += 4; return;
  /* 125b064c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125b064f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125b0656 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125b065d:;
  /* 125b065d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0661 jne 0x125b066a */
  if (!C.zf) goto L_125b066a;
  /* 125b0663 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b0665 jmp 0x125b07f1 */
  goto L_125b07f1;
L_125b066a:;
  /* 125b066a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b066d push edx */
  push32((uint32_t)(EDX));
  /* 125b066e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b0671 push eax */
  push32((uint32_t)(EAX));
  /* 125b0672 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b0675 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0676 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b0679 push edx */
  push32((uint32_t)(EDX));
  /* 125b067a push 1 */
  push32((uint32_t)(0x1u));
  /* 125b067c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 125b067f push eax */
  push32((uint32_t)(EAX));
  /* 125b0680 call dword ptr [0x125d6310] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6310))), 0x125b0686u);
  /* 125b0686 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b0688 jne 0x125b0691 */
  if (!C.zf) goto L_125b0691;
  /* 125b068a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b068c jmp 0x125b07f1 */
  goto L_125b07f1;
L_125b0691:;
  /* 125b0691 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0693 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0695 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b0698 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0699 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b069c push edx */
  push32((uint32_t)(EDX));
  /* 125b069d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b06a0 push eax */
  push32((uint32_t)(EAX));
  /* 125b06a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b06a4 push ecx */
  push32((uint32_t)(ECX));
  /* 125b06a5 call dword ptr [0x125d630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d630c))), 0x125b06abu);
  /* 125b06ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125b06ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b06b2 jne 0x125b06bb */
  if (!C.zf) goto L_125b06bb;
  /* 125b06b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b06b6 jmp 0x125b07f1 */
  goto L_125b07f1;
L_125b06bb:;
  /* 125b06bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b06be and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 125b06c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b06c6 je 0x125b070b */
  if (C.zf) goto L_125b070b;
  /* 125b06c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b06cc je 0x125b0706 */
  if (C.zf) goto L_125b0706;
  /* 125b06ce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b06d1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b06d4 jle 0x125b06dd */
  if ((C.zf||C.sf!=C.of)) goto L_125b06dd;
  /* 125b06d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b06d8 jmp 0x125b07f1 */
  goto L_125b07f1;
L_125b06dd:;
  /* 125b06dd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125b06e0 push ecx */
  push32((uint32_t)(ECX));
  /* 125b06e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b06e4 push edx */
  push32((uint32_t)(EDX));
  /* 125b06e5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b06e8 push eax */
  push32((uint32_t)(EAX));
  /* 125b06e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b06ec push ecx */
  push32((uint32_t)(ECX));
  /* 125b06ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b06f0 push edx */
  push32((uint32_t)(EDX));
  /* 125b06f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b06f4 push eax */
  push32((uint32_t)(EAX));
  /* 125b06f5 call dword ptr [0x125d630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d630c))), 0x125b06fbu);
  /* 125b06fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b06fd jne 0x125b0706 */
  if (!C.zf) goto L_125b0706;
  /* 125b06ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b0701 jmp 0x125b07f1 */
  goto L_125b07f1;
L_125b0706:;
  /* 125b0706 jmp 0x125b07ea */
  goto L_125b07ea;
L_125b070b:;
  /* 125b070b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b070e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 125b0711 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125b0718 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125b071b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125b071d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0720 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125b0722 call 0x125ab2b0 */
  push32(0x125b0727u); f_125ab2b0();
  /* 125b0727 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 125b072a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b072d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 125b0730 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125b0733 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125b073a jmp 0x125b0753 */
  goto L_125b0753;
  /* 125b073c mov eax, 1 */
  EAX = (0x1u);
  /* 125b0741 ret  */
  ESPCHK(0x125b0500u, _esp0);
  ESP += 4; return;
  /* 125b0742 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125b0745 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125b074c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125b0753:;
  /* 125b0753 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0757 jne 0x125b0760 */
  if (!C.zf) goto L_125b0760;
  /* 125b0759 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b075b jmp 0x125b07f1 */
  goto L_125b07f1;
L_125b0760:;
  /* 125b0760 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125b0763 push eax */
  push32((uint32_t)(EAX));
  /* 125b0764 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b0767 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0768 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b076b push edx */
  push32((uint32_t)(EDX));
  /* 125b076c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b076f push eax */
  push32((uint32_t)(EAX));
  /* 125b0770 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b0773 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0774 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0777 push edx */
  push32((uint32_t)(EDX));
  /* 125b0778 call dword ptr [0x125d630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d630c))), 0x125b077eu);
  /* 125b077e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b0780 jne 0x125b0786 */
  if (!C.zf) goto L_125b0786;
  /* 125b0782 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b0784 jmp 0x125b07f1 */
  goto L_125b07f1;
L_125b0786:;
  /* 125b0786 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b078a jne 0x125b07ba */
  if (!C.zf) goto L_125b07ba;
  /* 125b078c push 0 */
  push32((uint32_t)(0x0u));
  /* 125b078e push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0790 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0792 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0794 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125b0797 push eax */
  push32((uint32_t)(EAX));
  /* 125b0798 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b079b push ecx */
  push32((uint32_t)(ECX));
  /* 125b079c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125b07a1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 125b07a4 push edx */
  push32((uint32_t)(EDX));
  /* 125b07a5 call dword ptr [0x125d635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d635c))), 0x125b07abu);
  /* 125b07ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125b07ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b07b2 jne 0x125b07b8 */
  if (!C.zf) goto L_125b07b8;
  /* 125b07b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b07b6 jmp 0x125b07f1 */
  goto L_125b07f1;
L_125b07b8:;
  /* 125b07b8 jmp 0x125b07ea */
  goto L_125b07ea;
L_125b07ba:;
  /* 125b07ba push 0 */
  push32((uint32_t)(0x0u));
  /* 125b07bc push 0 */
  push32((uint32_t)(0x0u));
  /* 125b07be mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125b07c1 push eax */
  push32((uint32_t)(EAX));
  /* 125b07c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b07c5 push ecx */
  push32((uint32_t)(ECX));
  /* 125b07c6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125b07c9 push edx */
  push32((uint32_t)(EDX));
  /* 125b07ca mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b07cd push eax */
  push32((uint32_t)(EAX));
  /* 125b07ce push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125b07d3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 125b07d6 push ecx */
  push32((uint32_t)(ECX));
  /* 125b07d7 call dword ptr [0x125d635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d635c))), 0x125b07ddu);
  /* 125b07dd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125b07e0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b07e4 jne 0x125b07ea */
  if (!C.zf) goto L_125b07ea;
  /* 125b07e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b07e8 jmp 0x125b07f1 */
  goto L_125b07f1;
L_125b07ea:;
  /* 125b07ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b07ed jmp 0x125b07f1 */
  goto L_125b07f1;
L_125b07ef:;
  /* 125b07ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b07f1:;
  /* 125b07f1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 125b07f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b07f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 125b07fe pop edi */
  EDI = (pop32());
  /* 125b07ff pop esi */
  ESI = (pop32());
  /* 125b0800 pop ebx */
  EBX = (pop32());
  /* 125b0801 mov esp, ebp */
  ESP = (EBP);
  /* 125b0803 pop ebp */
  EBP = (pop32());
  /* 125b0804 ret  */
  ESPCHK(0x125b0500u, _esp0);
  ESP += 4; return;
}

/* FUN_10010810 @ 0x125b0810 (80 bytes, 32 insns) */
void f_125b0810(void) {
  FTRACE(0x125b0810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b0810 push ebp */
  push32((uint32_t)(EBP));
  /* 125b0811 mov ebp, esp */
  EBP = (ESP);
  /* 125b0813 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b0816 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b0819 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b081c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b081f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125b0822:;
  /* 125b0822 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b0825 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b0828 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b082b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b082e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b0830 je 0x125b0847 */
  if (C.zf) goto L_125b0847;
  /* 125b0832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0835 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b0838 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b083a je 0x125b0847 */
  if (C.zf) goto L_125b0847;
  /* 125b083c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b083f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0842 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b0845 jmp 0x125b0822 */
  goto L_125b0822;
L_125b0847:;
  /* 125b0847 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b084a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b084d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b084f jne 0x125b0859 */
  if (!C.zf) goto L_125b0859;
  /* 125b0851 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0854 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b0857 jmp 0x125b085c */
  goto L_125b085c;
L_125b0859:;
  /* 125b0859 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_125b085c:;
  /* 125b085c mov esp, ebp */
  ESP = (EBP);
  /* 125b085e pop ebp */
  EBP = (pop32());
  /* 125b085f ret  */
  ESPCHK(0x125b0810u, _esp0);
  ESP += 4; return;
}

/* FUN_10010860 @ 0x125b0860 (130 bytes, 43 insns) */
void f_125b0860(void) {
  FTRACE(0x125b0860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b0860 push ebp */
  push32((uint32_t)(EBP));
  /* 125b0861 mov ebp, esp */
  EBP = (ESP);
  /* 125b0863 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0867 cmp eax, dword ptr [0x125d53fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d53fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b086d jae 0x125b0891 */
  if (!C.cf) goto L_125b0891;
  /* 125b086f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0872 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b0875 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0878 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125b087b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b087e mov eax, dword ptr [ecx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125d52c0)));
  /* 125b0885 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125b088a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125b088d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b088f jne 0x125b08ac */
  if (!C.zf) goto L_125b08ac;
L_125b0891:;
  /* 125b0891 call 0x125affe0 */
  push32(0x125b0896u); f_125affe0();
  /* 125b0896 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125b089c call 0x125afff0 */
  push32(0x125b08a1u); f_125afff0();
  /* 125b08a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125b08a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b08aa jmp 0x125b08de */
  goto L_125b08de;
L_125b08ac:;
  /* 125b08ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b08af push edx */
  push32((uint32_t)(EDX));
  /* 125b08b0 call 0x125b1800 */
  push32(0x125b08b5u); f_125b1800();
  /* 125b08b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b08b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b08bb push eax */
  push32((uint32_t)(EAX));
  /* 125b08bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b08bf push ecx */
  push32((uint32_t)(ECX));
  /* 125b08c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b08c3 push edx */
  push32((uint32_t)(EDX));
  /* 125b08c4 call 0x125b08f0 */
  push32(0x125b08c9u); f_125b08f0();
  /* 125b08c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b08cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b08cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b08d2 push eax */
  push32((uint32_t)(EAX));
  /* 125b08d3 call 0x125b1890 */
  push32(0x125b08d8u); f_125b1890();
  /* 125b08d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b08db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125b08de:;
  /* 125b08de mov esp, ebp */
  ESP = (EBP);
  /* 125b08e0 pop ebp */
  EBP = (pop32());
  /* 125b08e1 ret  */
  ESPCHK(0x125b0860u, _esp0);
  ESP += 4; return;
}

/* FUN_100108f0 @ 0x125b08f0 (178 bytes, 56 insns) */
void f_125b08f0(void) {
  FTRACE(0x125b08f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b08f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b08f1 mov ebp, esp */
  EBP = (ESP);
  /* 125b08f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b08f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b08f9 push eax */
  push32((uint32_t)(EAX));
  /* 125b08fa call 0x125b1680 */
  push32(0x125b08ffu); f_125b1680();
  /* 125b08ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0902 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b0905 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0909 jne 0x125b091e */
  if (!C.zf) goto L_125b091e;
  /* 125b090b call 0x125affe0 */
  push32(0x125b0910u); f_125affe0();
  /* 125b0910 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125b0916 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b0919 jmp 0x125b099e */
  goto L_125b099e;
L_125b091e:;
  /* 125b091e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b0921 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0922 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0924 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b0927 push edx */
  push32((uint32_t)(EDX));
  /* 125b0928 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b092b push eax */
  push32((uint32_t)(EAX));
  /* 125b092c call dword ptr [0x125d62fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62fc))), 0x125b0932u);
  /* 125b0932 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b0935 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0939 jne 0x125b0946 */
  if (!C.zf) goto L_125b0946;
  /* 125b093b call dword ptr [0x125d63b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63b4))), 0x125b0941u);
  /* 125b0941 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b0944 jmp 0x125b094d */
  goto L_125b094d;
L_125b0946:;
  /* 125b0946 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125b094d:;
  /* 125b094d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0951 je 0x125b0964 */
  if (C.zf) goto L_125b0964;
  /* 125b0953 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0956 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0957 call 0x125aff40 */
  push32(0x125b095cu); f_125aff40();
  /* 125b095c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b095f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b0962 jmp 0x125b099e */
  goto L_125b099e;
L_125b0964:;
  /* 125b0964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0967 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 125b096a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b096d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 125b0970 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b0973 mov ecx, dword ptr [edx*4 + 0x125d52c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x125d52c0)));
  /* 125b097a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 125b097e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 125b0981 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0984 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125b0987 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b098a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125b098d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b0990 mov eax, dword ptr [eax*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x125d52c0)));
  /* 125b0997 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 125b099b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125b099e:;
  /* 125b099e mov esp, ebp */
  ESP = (EBP);
  /* 125b09a0 pop ebp */
  EBP = (pop32());
  /* 125b09a1 ret  */
  ESPCHK(0x125b08f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100109b0 @ 0x125b09b0 (130 bytes, 43 insns) */
void f_125b09b0(void) {
  FTRACE(0x125b09b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b09b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b09b1 mov ebp, esp */
  EBP = (ESP);
  /* 125b09b3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b09b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b09b7 cmp eax, dword ptr [0x125d53fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d53fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b09bd jae 0x125b09e1 */
  if (!C.cf) goto L_125b09e1;
  /* 125b09bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b09c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b09c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b09c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125b09cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b09ce mov eax, dword ptr [ecx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125d52c0)));
  /* 125b09d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125b09da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125b09dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b09df jne 0x125b09fc */
  if (!C.zf) goto L_125b09fc;
L_125b09e1:;
  /* 125b09e1 call 0x125affe0 */
  push32(0x125b09e6u); f_125affe0();
  /* 125b09e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125b09ec call 0x125afff0 */
  push32(0x125b09f1u); f_125afff0();
  /* 125b09f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125b09f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b09fa jmp 0x125b0a2e */
  goto L_125b0a2e;
L_125b09fc:;
  /* 125b09fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b09ff push edx */
  push32((uint32_t)(EDX));
  /* 125b0a00 call 0x125b1800 */
  push32(0x125b0a05u); f_125b1800();
  /* 125b0a05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0a08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b0a0b push eax */
  push32((uint32_t)(EAX));
  /* 125b0a0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b0a0f push ecx */
  push32((uint32_t)(ECX));
  /* 125b0a10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0a13 push edx */
  push32((uint32_t)(EDX));
  /* 125b0a14 call 0x125b0a40 */
  push32(0x125b0a19u); f_125b0a40();
  /* 125b0a19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0a1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b0a1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0a22 push eax */
  push32((uint32_t)(EAX));
  /* 125b0a23 call 0x125b1890 */
  push32(0x125b0a28u); f_125b1890();
  /* 125b0a28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0a2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125b0a2e:;
  /* 125b0a2e mov esp, ebp */
  ESP = (EBP);
  /* 125b0a30 pop ebp */
  EBP = (pop32());
  /* 125b0a31 ret  */
  ESPCHK(0x125b09b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a40 @ 0x125b0a40 (627 bytes, 182 insns) */
void f_125b0a40(void) {
  FTRACE(0x125b0a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b0a40 push ebp */
  push32((uint32_t)(EBP));
  /* 125b0a41 mov ebp, esp */
  EBP = (ESP);
  /* 125b0a43 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b0a49 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125b0a50 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b0a53 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 125b0a59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0a5d jne 0x125b0a66 */
  if (!C.zf) goto L_125b0a66;
  /* 125b0a5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b0a61 jmp 0x125b0caf */
  goto L_125b0caf;
L_125b0a66:;
  /* 125b0a66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0a69 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b0a6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0a6f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125b0a72 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b0a75 mov eax, dword ptr [ecx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125d52c0)));
  /* 125b0a7c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125b0a81 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 125b0a84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b0a86 je 0x125b0a98 */
  if (C.zf) goto L_125b0a98;
  /* 125b0a88 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b0a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0a8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0a8f push edx */
  push32((uint32_t)(EDX));
  /* 125b0a90 call 0x125b08f0 */
  push32(0x125b0a95u); f_125b08f0();
  /* 125b0a95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b0a98:;
  /* 125b0a98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0a9b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125b0a9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0aa1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125b0aa4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b0aa7 mov edx, dword ptr [eax*4 + 0x125d52c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125d52c0)));
  /* 125b0aae movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 125b0ab3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 125b0ab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b0aba je 0x125b0bcc */
  if (C.zf) goto L_125b0bcc;
  /* 125b0ac0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b0ac3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b0ac6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_125b0acd:;
  /* 125b0acd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0ad0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b0ad3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0ad6 jae 0x125b0bca */
  if (!C.cf) goto L_125b0bca;
  /* 125b0adc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 125b0ae2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125b0ae5:;
  /* 125b0ae5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b0ae8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 125b0aee sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b0af0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0af6 jge 0x125b0b57 */
  if ((C.sf==C.of)) goto L_125b0b57;
  /* 125b0af8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0afb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b0afe cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0b01 jae 0x125b0b57 */
  if (!C.cf) goto L_125b0b57;
  /* 125b0b03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0b06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125b0b08 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 125b0b0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0b11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0b14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b0b17 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 125b0b1e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0b21 jne 0x125b0b41 */
  if (!C.zf) goto L_125b0b41;
  /* 125b0b23 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 125b0b29 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0b2c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 125b0b32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b0b35 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 125b0b38 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b0b3b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0b3e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125b0b41:;
  /* 125b0b41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b0b44 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 125b0b4a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 125b0b4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b0b4f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0b52 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b0b55 jmp 0x125b0ae5 */
  goto L_125b0ae5;
L_125b0b57:;
  /* 125b0b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0b59 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 125b0b5f push edx */
  push32((uint32_t)(EDX));
  /* 125b0b60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b0b63 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 125b0b69 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b0b6b push eax */
  push32((uint32_t)(EAX));
  /* 125b0b6c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 125b0b72 push edx */
  push32((uint32_t)(EDX));
  /* 125b0b73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0b76 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125b0b79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0b7c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125b0b7f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b0b82 mov edx, dword ptr [eax*4 + 0x125d52c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125d52c0)));
  /* 125b0b89 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 125b0b8c push eax */
  push32((uint32_t)(EAX));
  /* 125b0b8d call dword ptr [0x125d6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6374))), 0x125b0b93u);
  /* 125b0b93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b0b95 je 0x125b0bba */
  if (C.zf) goto L_125b0bba;
  /* 125b0b97 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b0b9a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0ba0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125b0ba3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b0ba6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 125b0bac sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b0bae cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0bb4 jge 0x125b0bb8 */
  if ((C.sf==C.of)) goto L_125b0bb8;
  /* 125b0bb6 jmp 0x125b0bca */
  goto L_125b0bca;
L_125b0bb8:;
  /* 125b0bb8 jmp 0x125b0bc5 */
  goto L_125b0bc5;
L_125b0bba:;
  /* 125b0bba call dword ptr [0x125d63b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63b4))), 0x125b0bc0u);
  /* 125b0bc0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b0bc3 jmp 0x125b0bca */
  goto L_125b0bca;
L_125b0bc5:;
  /* 125b0bc5 jmp 0x125b0acd */
  goto L_125b0acd;
L_125b0bca:;
  /* 125b0bca jmp 0x125b0c1c */
  goto L_125b0c1c;
L_125b0bcc:;
  /* 125b0bcc push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0bce lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 125b0bd4 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0bd5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b0bd8 push edx */
  push32((uint32_t)(EDX));
  /* 125b0bd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b0bdc push eax */
  push32((uint32_t)(EAX));
  /* 125b0bdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0be0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b0be3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0be6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125b0be9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b0bec mov eax, dword ptr [ecx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125d52c0)));
  /* 125b0bf3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 125b0bf6 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0bf7 call dword ptr [0x125d6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6374))), 0x125b0bfdu);
  /* 125b0bfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b0bff je 0x125b0c13 */
  if (C.zf) goto L_125b0c13;
  /* 125b0c01 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125b0c08 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 125b0c0e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125b0c11 jmp 0x125b0c1c */
  goto L_125b0c1c;
L_125b0c13:;
  /* 125b0c13 call dword ptr [0x125d63b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63b4))), 0x125b0c19u);
  /* 125b0c19 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125b0c1c:;
  /* 125b0c1c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0c20 jne 0x125b0ca6 */
  if (!C.zf) goto L_125b0ca6;
  /* 125b0c26 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0c2a je 0x125b0c5a */
  if (C.zf) goto L_125b0c5a;
  /* 125b0c2c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0c30 jne 0x125b0c49 */
  if (!C.zf) goto L_125b0c49;
  /* 125b0c32 call 0x125affe0 */
  push32(0x125b0c37u); f_125affe0();
  /* 125b0c37 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125b0c3d call 0x125afff0 */
  push32(0x125b0c42u); f_125afff0();
  /* 125b0c42 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b0c45 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125b0c47 jmp 0x125b0c55 */
  goto L_125b0c55;
L_125b0c49:;
  /* 125b0c49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b0c4c push edx */
  push32((uint32_t)(EDX));
  /* 125b0c4d call 0x125aff40 */
  push32(0x125b0c52u); f_125aff40();
  /* 125b0c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b0c55:;
  /* 125b0c55 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b0c58 jmp 0x125b0caf */
  goto L_125b0caf;
L_125b0c5a:;
  /* 125b0c5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0c5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125b0c60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0c63 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125b0c66 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b0c69 mov edx, dword ptr [eax*4 + 0x125d52c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125d52c0)));
  /* 125b0c70 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 125b0c75 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 125b0c78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b0c7a je 0x125b0c8b */
  if (C.zf) goto L_125b0c8b;
  /* 125b0c7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b0c7f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b0c82 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0c85 jne 0x125b0c8b */
  if (!C.zf) goto L_125b0c8b;
  /* 125b0c87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b0c89 jmp 0x125b0caf */
  goto L_125b0caf;
L_125b0c8b:;
  /* 125b0c8b call 0x125affe0 */
  push32(0x125b0c90u); f_125affe0();
  /* 125b0c90 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 125b0c96 call 0x125afff0 */
  push32(0x125b0c9bu); f_125afff0();
  /* 125b0c9b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125b0ca1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b0ca4 jmp 0x125b0caf */
  goto L_125b0caf;
L_125b0ca6:;
  /* 125b0ca6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b0ca9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_125b0caf:;
  /* 125b0caf mov esp, ebp */
  ESP = (EBP);
  /* 125b0cb1 pop ebp */
  EBP = (pop32());
  /* 125b0cb2 ret  */
  ESPCHK(0x125b0a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cc0 @ 0x125b0cc0 (199 bytes, 68 insns) */
void f_125b0cc0(void) {
  FTRACE(0x125b0cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b0cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b0cc1 mov ebp, esp */
  EBP = (ESP);
  /* 125b0cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0cc4 push ebx */
  push32((uint32_t)(EBX));
  /* 125b0cc5 push esi */
  push32((uint32_t)(ESI));
  /* 125b0cc6 push edi */
  push32((uint32_t)(EDI));
L_125b0cc7:;
  /* 125b0cc7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0ccb jne 0x125b0ceb */
  if (!C.zf) goto L_125b0ceb;
  /* 125b0ccd push 0x125cf654 */
  push32((uint32_t)(0x125cf654u));
  /* 125b0cd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b0cd4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 125b0cd6 push 0x125cf720 */
  push32((uint32_t)(0x125cf720u));
  /* 125b0cdb push 2 */
  push32((uint32_t)(0x2u));
  /* 125b0cdd call 0x125a71d0 */
  push32(0x125b0ce2u); f_125a71d0();
  /* 125b0ce2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0ce5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0ce8 jne 0x125b0ceb */
  if (!C.zf) goto L_125b0ceb;
  /* 125b0cea int3  */
  x86_unimpl("int3 @ 0x125b0cea");
L_125b0ceb:;
  /* 125b0ceb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b0ced test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b0cef jne 0x125b0cc7 */
  if (!C.zf) goto L_125b0cc7;
  /* 125b0cf1 mov ecx, dword ptr [0x125d3afc] */
  ECX = (r32((uint32_t)(0x125d3afc)));
  /* 125b0cf7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0cfa mov dword ptr [0x125d3afc], ecx */
  w32((uint32_t)(0x125d3afc), (ECX));
  /* 125b0d00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0d03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125b0d06 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 125b0d08 push 0x125cf720 */
  push32((uint32_t)(0x125cf720u));
  /* 125b0d0d push 2 */
  push32((uint32_t)(0x2u));
  /* 125b0d0f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 125b0d14 call 0x125a8110 */
  push32(0x125b0d19u); f_125a8110();
  /* 125b0d19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0d1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0d1f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 125b0d22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0d25 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0d29 je 0x125b0d46 */
  if (C.zf) goto L_125b0d46;
  /* 125b0d2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0d2e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125b0d31 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 125b0d34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0d37 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 125b0d3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0d3d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 125b0d44 jmp 0x125b0d6b */
  goto L_125b0d6b;
L_125b0d46:;
  /* 125b0d46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0d49 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125b0d4c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125b0d4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0d52 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125b0d55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0d58 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0d5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0d5e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125b0d61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0d64 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_125b0d6b:;
  /* 125b0d6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0d6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0d71 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125b0d74 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125b0d76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0d79 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 125b0d80 pop edi */
  EDI = (pop32());
  /* 125b0d81 pop esi */
  ESI = (pop32());
  /* 125b0d82 pop ebx */
  EBX = (pop32());
  /* 125b0d83 mov esp, ebp */
  ESP = (EBP);
  /* 125b0d85 pop ebp */
  EBP = (pop32());
  /* 125b0d86 ret  */
  ESPCHK(0x125b0cc0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x125b0d90 (50 bytes, 17 insns) */
void f_125b0d90(void) {
  FTRACE(0x125b0d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b0d90 push ebp */
  push32((uint32_t)(EBP));
  /* 125b0d91 mov ebp, esp */
  EBP = (ESP);
  /* 125b0d93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0d96 cmp eax, dword ptr [0x125d53fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d53fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0d9c jb 0x125b0da2 */
  if (C.cf) goto L_125b0da2;
  /* 125b0d9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b0da0 jmp 0x125b0dc0 */
  goto L_125b0dc0;
L_125b0da2:;
  /* 125b0da2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0da5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b0da8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0dab and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125b0dae imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b0db1 mov eax, dword ptr [ecx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125d52c0)));
  /* 125b0db8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125b0dbd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_125b0dc0:;
  /* 125b0dc0 pop ebp */
  EBP = (pop32());
  /* 125b0dc1 ret  */
  ESPCHK(0x125b0d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010dd0 @ 0x125b0dd0 (300 bytes, 80 insns) */
void f_125b0dd0(void) {
  FTRACE(0x125b0dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b0dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b0dd1 mov ebp, esp */
  EBP = (ESP);
  /* 125b0dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0dd4 cmp dword ptr [0x125d4fc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d4fc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0ddb jne 0x125b0de9 */
  if (!C.zf) goto L_125b0de9;
  /* 125b0ddd mov dword ptr [0x125d4fc0], 0x200 */
  w32((uint32_t)(0x125d4fc0), (0x200u));
  /* 125b0de7 jmp 0x125b0dfc */
  goto L_125b0dfc;
L_125b0de9:;
  /* 125b0de9 cmp dword ptr [0x125d4fc0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x125d4fc0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0df0 jge 0x125b0dfc */
  if ((C.sf==C.of)) goto L_125b0dfc;
  /* 125b0df2 mov dword ptr [0x125d4fc0], 0x14 */
  w32((uint32_t)(0x125d4fc0), (0x14u));
L_125b0dfc:;
  /* 125b0dfc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 125b0e01 push 0x125cf72c */
  push32((uint32_t)(0x125cf72cu));
  /* 125b0e06 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b0e08 push 4 */
  push32((uint32_t)(0x4u));
  /* 125b0e0a mov eax, dword ptr [0x125d4fc0] */
  EAX = (r32((uint32_t)(0x125d4fc0)));
  /* 125b0e0f push eax */
  push32((uint32_t)(EAX));
  /* 125b0e10 call 0x125a8520 */
  push32(0x125b0e15u); f_125a8520();
  /* 125b0e15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0e18 mov dword ptr [0x125d3c70], eax */
  w32((uint32_t)(0x125d3c70), (EAX));
  /* 125b0e1d cmp dword ptr [0x125d3c70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0e24 jne 0x125b0e65 */
  if (!C.zf) goto L_125b0e65;
  /* 125b0e26 mov dword ptr [0x125d4fc0], 0x14 */
  w32((uint32_t)(0x125d4fc0), (0x14u));
  /* 125b0e30 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 125b0e35 push 0x125cf72c */
  push32((uint32_t)(0x125cf72cu));
  /* 125b0e3a push 2 */
  push32((uint32_t)(0x2u));
  /* 125b0e3c push 4 */
  push32((uint32_t)(0x4u));
  /* 125b0e3e mov ecx, dword ptr [0x125d4fc0] */
  ECX = (r32((uint32_t)(0x125d4fc0)));
  /* 125b0e44 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0e45 call 0x125a8520 */
  push32(0x125b0e4au); f_125a8520();
  /* 125b0e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0e4d mov dword ptr [0x125d3c70], eax */
  w32((uint32_t)(0x125d3c70), (EAX));
  /* 125b0e52 cmp dword ptr [0x125d3c70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0e59 jne 0x125b0e65 */
  if (!C.zf) goto L_125b0e65;
  /* 125b0e5b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 125b0e5d call 0x125a7080 */
  push32(0x125b0e62u); f_125a7080();
  /* 125b0e62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b0e65:;
  /* 125b0e65 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b0e6c jmp 0x125b0e77 */
  goto L_125b0e77;
L_125b0e6e:;
  /* 125b0e6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0e71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0e74 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125b0e77:;
  /* 125b0e77 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0e7b jge 0x125b0e96 */
  if ((C.sf==C.of)) goto L_125b0e96;
  /* 125b0e7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0e80 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125b0e83 add eax, 0x125d2120 */
  { uint32_t _a=(EAX),_b=(0x125d2120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0e88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0e8b mov edx, dword ptr [0x125d3c70] */
  EDX = (r32((uint32_t)(0x125d3c70)));
  /* 125b0e91 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 125b0e94 jmp 0x125b0e6e */
  goto L_125b0e6e;
L_125b0e96:;
  /* 125b0e96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b0e9d jmp 0x125b0ea8 */
  goto L_125b0ea8;
L_125b0e9f:;
  /* 125b0e9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0ea2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0ea5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125b0ea8:;
  /* 125b0ea8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0eac jge 0x125b0ef8 */
  if ((C.sf==C.of)) goto L_125b0ef8;
  /* 125b0eae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0eb1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b0eb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0eb7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125b0eba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b0ebd mov eax, dword ptr [ecx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125d52c0)));
  /* 125b0ec4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0ec8 je 0x125b0ee6 */
  if (C.zf) goto L_125b0ee6;
  /* 125b0eca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0ecd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b0ed0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0ed3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125b0ed6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b0ed9 mov eax, dword ptr [ecx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125d52c0)));
  /* 125b0ee0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0ee4 jne 0x125b0ef6 */
  if (!C.zf) goto L_125b0ef6;
L_125b0ee6:;
  /* 125b0ee6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b0ee9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b0eec mov dword ptr [ecx + 0x125d2130], 0xffffffff */
  w32((uint32_t)(ECX + 0x125d2130), (0xffffffffu));
L_125b0ef6:;
  /* 125b0ef6 jmp 0x125b0e9f */
  goto L_125b0e9f;
L_125b0ef8:;
  /* 125b0ef8 mov esp, ebp */
  ESP = (EBP);
  /* 125b0efa pop ebp */
  EBP = (pop32());
  /* 125b0efb ret  */
  ESPCHK(0x125b0dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f00 @ 0x125b0f00 (26 bytes, 9 insns) */
void f_125b0f00(void) {
  FTRACE(0x125b0f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b0f00 push ebp */
  push32((uint32_t)(EBP));
  /* 125b0f01 mov ebp, esp */
  EBP = (ESP);
  /* 125b0f03 call 0x125b1b00 */
  push32(0x125b0f08u); f_125b1b00();
  /* 125b0f08 movsx eax, byte ptr [0x125d3914] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x125d3914))));
  /* 125b0f0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b0f11 je 0x125b0f18 */
  if (C.zf) goto L_125b0f18;
  /* 125b0f13 call 0x125b18c0 */
  push32(0x125b0f18u); f_125b18c0();
L_125b0f18:;
  /* 125b0f18 pop ebp */
  EBP = (pop32());
  /* 125b0f19 ret  */
  ESPCHK(0x125b0f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f20 @ 0x125b0f20 (61 bytes, 20 insns) */
void f_125b0f20(void) {
  FTRACE(0x125b0f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b0f20 push ebp */
  push32((uint32_t)(EBP));
  /* 125b0f21 mov ebp, esp */
  EBP = (ESP);
  /* 125b0f23 cmp dword ptr [ebp + 8], 0x125d2120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x125d2120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0f2a jb 0x125b0f4e */
  if (C.cf) goto L_125b0f4e;
  /* 125b0f2c cmp dword ptr [ebp + 8], 0x125d2380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x125d2380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0f33 ja 0x125b0f4e */
  if ((!C.cf&&!C.zf)) goto L_125b0f4e;
  /* 125b0f35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0f38 sub eax, 0x125d2120 */
  { uint32_t _a=(EAX),_b=(0x125d2120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b0f3d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125b0f40 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0f43 push eax */
  push32((uint32_t)(EAX));
  /* 125b0f44 call 0x125abb10 */
  push32(0x125b0f49u); f_125abb10();
  /* 125b0f49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0f4c jmp 0x125b0f5b */
  goto L_125b0f5b;
L_125b0f4e:;
  /* 125b0f4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0f51 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0f54 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0f55 call dword ptr [0x125d6338] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6338))), 0x125b0f5bu);
L_125b0f5b:;
  /* 125b0f5b pop ebp */
  EBP = (pop32());
  /* 125b0f5c ret  */
  ESPCHK(0x125b0f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f60 @ 0x125b0f60 (41 bytes, 16 insns) */
void f_125b0f60(void) {
  FTRACE(0x125b0f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b0f60 push ebp */
  push32((uint32_t)(EBP));
  /* 125b0f61 mov ebp, esp */
  EBP = (ESP);
  /* 125b0f63 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0f67 jge 0x125b0f7a */
  if ((C.sf==C.of)) goto L_125b0f7a;
  /* 125b0f69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0f6c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0f6f push eax */
  push32((uint32_t)(EAX));
  /* 125b0f70 call 0x125abb10 */
  push32(0x125b0f75u); f_125abb10();
  /* 125b0f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0f78 jmp 0x125b0f87 */
  goto L_125b0f87;
L_125b0f7a:;
  /* 125b0f7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b0f7d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0f80 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0f81 call dword ptr [0x125d6338] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6338))), 0x125b0f87u);
L_125b0f87:;
  /* 125b0f87 pop ebp */
  EBP = (pop32());
  /* 125b0f88 ret  */
  ESPCHK(0x125b0f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f90 @ 0x125b0f90 (61 bytes, 20 insns) */
void f_125b0f90(void) {
  FTRACE(0x125b0f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b0f90 push ebp */
  push32((uint32_t)(EBP));
  /* 125b0f91 mov ebp, esp */
  EBP = (ESP);
  /* 125b0f93 cmp dword ptr [ebp + 8], 0x125d2120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x125d2120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0f9a jb 0x125b0fbe */
  if (C.cf) goto L_125b0fbe;
  /* 125b0f9c cmp dword ptr [ebp + 8], 0x125d2380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x125d2380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0fa3 ja 0x125b0fbe */
  if ((!C.cf&&!C.zf)) goto L_125b0fbe;
  /* 125b0fa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0fa8 sub eax, 0x125d2120 */
  { uint32_t _a=(EAX),_b=(0x125d2120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b0fad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125b0fb0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0fb3 push eax */
  push32((uint32_t)(EAX));
  /* 125b0fb4 call 0x125abbb0 */
  push32(0x125b0fb9u); f_125abbb0();
  /* 125b0fb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0fbc jmp 0x125b0fcb */
  goto L_125b0fcb;
L_125b0fbe:;
  /* 125b0fbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0fc1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0fc4 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0fc5 call dword ptr [0x125d6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6334))), 0x125b0fcbu);
L_125b0fcb:;
  /* 125b0fcb pop ebp */
  EBP = (pop32());
  /* 125b0fcc ret  */
  ESPCHK(0x125b0f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fd0 @ 0x125b0fd0 (41 bytes, 16 insns) */
void f_125b0fd0(void) {
  FTRACE(0x125b0fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b0fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b0fd1 mov ebp, esp */
  EBP = (ESP);
  /* 125b0fd3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b0fd7 jge 0x125b0fea */
  if ((C.sf==C.of)) goto L_125b0fea;
  /* 125b0fd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b0fdc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0fdf push eax */
  push32((uint32_t)(EAX));
  /* 125b0fe0 call 0x125abbb0 */
  push32(0x125b0fe5u); f_125abbb0();
  /* 125b0fe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0fe8 jmp 0x125b0ff7 */
  goto L_125b0ff7;
L_125b0fea:;
  /* 125b0fea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b0fed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b0ff0 push ecx */
  push32((uint32_t)(ECX));
  /* 125b0ff1 call dword ptr [0x125d6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6334))), 0x125b0ff7u);
L_125b0ff7:;
  /* 125b0ff7 pop ebp */
  EBP = (pop32());
  /* 125b0ff8 ret  */
  ESPCHK(0x125b0fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011000 @ 0x125b1000 (119 bytes, 34 insns) */
void f_125b1000(void) {
  FTRACE(0x125b1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b1000 push ebp */
  push32((uint32_t)(EBP));
  /* 125b1001 mov ebp, esp */
  EBP = (ESP);
  /* 125b1003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b1006 push 0x125d3c6c */
  push32((uint32_t)(0x125d3c6cu));
  /* 125b100b call dword ptr [0x125d6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6388))), 0x125b1011u);
  /* 125b1011 cmp dword ptr [0x125d3c5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1018 je 0x125b1038 */
  if (C.zf) goto L_125b1038;
  /* 125b101a push 0x125d3c6c */
  push32((uint32_t)(0x125d3c6cu));
  /* 125b101f call dword ptr [0x125d6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6378))), 0x125b1025u);
  /* 125b1025 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125b1027 call 0x125abb10 */
  push32(0x125b102cu); f_125abb10();
  /* 125b102c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b102f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125b1036 jmp 0x125b103f */
  goto L_125b103f;
L_125b1038:;
  /* 125b1038 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125b103f:;
  /* 125b103f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 125b1043 push eax */
  push32((uint32_t)(EAX));
  /* 125b1044 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1047 push ecx */
  push32((uint32_t)(ECX));
  /* 125b1048 call 0x125b1080 */
  push32(0x125b104du); f_125b1080();
  /* 125b104d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1050 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b1053 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1057 je 0x125b1065 */
  if (C.zf) goto L_125b1065;
  /* 125b1059 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125b105b call 0x125abbb0 */
  push32(0x125b1060u); f_125abbb0();
  /* 125b1060 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1063 jmp 0x125b1070 */
  goto L_125b1070;
L_125b1065:;
  /* 125b1065 push 0x125d3c6c */
  push32((uint32_t)(0x125d3c6cu));
  /* 125b106a call dword ptr [0x125d6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6378))), 0x125b1070u);
L_125b1070:;
  /* 125b1070 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1073 mov esp, ebp */
  ESP = (EBP);
  /* 125b1075 pop ebp */
  EBP = (pop32());
  /* 125b1076 ret  */
  ESPCHK(0x125b1000u, _esp0);
  ESP += 4; return;
}

/* FUN_10011080 @ 0x125b1080 (160 bytes, 50 insns) */
void f_125b1080(void) {
  FTRACE(0x125b1080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b1080 push ebp */
  push32((uint32_t)(EBP));
  /* 125b1081 mov ebp, esp */
  EBP = (ESP);
  /* 125b1083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b1086 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b108a jne 0x125b1093 */
  if (!C.zf) goto L_125b1093;
  /* 125b108c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b108e jmp 0x125b111c */
  goto L_125b111c;
L_125b1093:;
  /* 125b1093 cmp dword ptr [0x125d3ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b109a jne 0x125b10ca */
  if (!C.zf) goto L_125b10ca;
  /* 125b109c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b109f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b10a4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b10a9 jle 0x125b10bb */
  if ((C.zf||C.sf!=C.of)) goto L_125b10bb;
  /* 125b10ab call 0x125affe0 */
  push32(0x125b10b0u); f_125affe0();
  /* 125b10b0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 125b10b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b10b9 jmp 0x125b111c */
  goto L_125b111c;
L_125b10bb:;
  /* 125b10bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b10be mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 125b10c1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 125b10c3 mov eax, 1 */
  EAX = (0x1u);
  /* 125b10c8 jmp 0x125b111c */
  goto L_125b111c;
L_125b10ca:;
  /* 125b10ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125b10d1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 125b10d4 push eax */
  push32((uint32_t)(EAX));
  /* 125b10d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b10d7 mov ecx, dword ptr [0x125d1ea4] */
  ECX = (r32((uint32_t)(0x125d1ea4)));
  /* 125b10dd push ecx */
  push32((uint32_t)(ECX));
  /* 125b10de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b10e1 push edx */
  push32((uint32_t)(EDX));
  /* 125b10e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b10e4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 125b10e7 push eax */
  push32((uint32_t)(EAX));
  /* 125b10e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125b10ed mov ecx, dword ptr [0x125d3af0] */
  ECX = (r32((uint32_t)(0x125d3af0)));
  /* 125b10f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b10f4 call dword ptr [0x125d635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d635c))), 0x125b10fau);
  /* 125b10fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b10fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1101 je 0x125b1109 */
  if (C.zf) goto L_125b1109;
  /* 125b1103 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1107 je 0x125b1119 */
  if (C.zf) goto L_125b1119;
L_125b1109:;
  /* 125b1109 call 0x125affe0 */
  push32(0x125b110eu); f_125affe0();
  /* 125b110e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 125b1114 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b1117 jmp 0x125b111c */
  goto L_125b111c;
L_125b1119:;
  /* 125b1119 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125b111c:;
  /* 125b111c mov esp, ebp */
  ESP = (EBP);
  /* 125b111e pop ebp */
  EBP = (pop32());
  /* 125b111f ret  */
  ESPCHK(0x125b1080u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x125b1120 (32 bytes, 18 insns) */
void f_125b1120(void) {
  FTRACE(0x125b1120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b1120 push ebp */
  push32((uint32_t)(EBP));
  /* 125b1121 mov ebp, esp */
  EBP = (ESP);
  /* 125b1123 push ebx */
  push32((uint32_t)(EBX));
  /* 125b1124 push esi */
  push32((uint32_t)(ESI));
  /* 125b1125 push edi */
  push32((uint32_t)(EDI));
  /* 125b1126 push ebp */
  push32((uint32_t)(EBP));
  /* 125b1127 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b1129 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b112b push 0x125b1138 */
  push32((uint32_t)(0x125b1138u));
  /* 125b1130 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 125b1133 call 0x125b886c */
  push32(0x125b1138u); f_125b886c();
  /* 125b1138 pop ebp */
  EBP = (pop32());
  /* 125b1139 pop edi */
  EDI = (pop32());
  /* 125b113a pop esi */
  ESI = (pop32());
  /* 125b113b pop ebx */
  EBX = (pop32());
  /* 125b113c mov esp, ebp */
  ESP = (EBP);
  /* 125b113e pop ebp */
  EBP = (pop32());
  /* 125b113f ret  */
  ESPCHK(0x125b1120u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x125b1162 (104 bytes, 33 insns) */
void f_125b1162(void) {
  FTRACE(0x125b1162u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b1162 push ebx */
  push32((uint32_t)(EBX));
  /* 125b1163 push esi */
  push32((uint32_t)(ESI));
  /* 125b1164 push edi */
  push32((uint32_t)(EDI));
  /* 125b1165 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 125b1169 push eax */
  push32((uint32_t)(EAX));
  /* 125b116a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 125b116c push 0x125b1140 */
  push32((uint32_t)(0x125b1140u));
  /* 125b1171 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 125b1178 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_125b117f:;
  /* 125b117f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 125b1183 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 125b1186 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 125b1189 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b118c je 0x125b11bc */
  if (C.zf) goto L_125b11bc;
  /* 125b118e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1192 je 0x125b11bc */
  if (C.zf) goto L_125b11bc;
  /* 125b1194 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 125b1197 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 125b119a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 125b119e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 125b11a1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b11a6 jne 0x125b11ba */
  if (!C.zf) goto L_125b11ba;
  /* 125b11a8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 125b11ad mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 125b11b1 call 0x125b11f6 */
  push32(0x125b11b6u); f_125b11f6();
  /* 125b11b6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x125b11bau);
L_125b11ba:;
  /* 125b11ba jmp 0x125b117f */
  goto L_125b117f;
L_125b11bc:;
  /* 125b11bc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 125b11c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b11c6 pop edi */
  EDI = (pop32());
  /* 125b11c7 pop esi */
  ESI = (pop32());
  /* 125b11c8 pop ebx */
  EBX = (pop32());
  /* 125b11c9 ret  */
  ESPCHK(0x125b1162u, _esp0);
  ESP += 4; return;
}

/* FUN_100111f6 @ 0x125b11f6 (24 bytes, 10 insns) */
void f_125b11f6(void) {
  FTRACE(0x125b11f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b11f6 push ebx */
  push32((uint32_t)(EBX));
  /* 125b11f7 push ecx */
  push32((uint32_t)(ECX));
  /* 125b11f8 mov ebx, 0x125d23b8 */
  EBX = (0x125d23b8u);
  /* 125b11fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1200 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 125b1203 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 125b1206 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 125b1209 pop ecx */
  ECX = (pop32());
  /* 125b120a pop ebx */
  EBX = (pop32());
  /* 125b120b ret 4 */
  ESPCHK(0x125b11f6u, _esp0);
  ESP += 8; return;
}

/* FUN_100112d5 @ 0x125b12d5 (27 bytes, 11 insns) */
void f_125b12d5(void) {
  FTRACE(0x125b12d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b12d5 push ebp */
  push32((uint32_t)(EBP));
  /* 125b12d6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 125b12da mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 125b12dc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 125b12df push eax */
  push32((uint32_t)(EAX));
  /* 125b12e0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 125b12e3 push eax */
  push32((uint32_t)(EAX));
  /* 125b12e4 call 0x125b1162 */
  push32(0x125b12e9u); f_125b1162();
  /* 125b12e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b12ec pop ebp */
  EBP = (pop32());
  /* 125b12ed ret 4 */
  ESPCHK(0x125b12d5u, _esp0);
  ESP += 8; return;
}

/* FUN_100112f0 @ 0x125b12f0 (482 bytes, 138 insns) */
void f_125b12f0(void) {
  FTRACE(0x125b12f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b12f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b12f1 mov ebp, esp */
  EBP = (ESP);
  /* 125b12f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b12f6 push esi */
  push32((uint32_t)(ESI));
  /* 125b12f7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 125b12fe push 0x12 */
  push32((uint32_t)(0x12u));
  /* 125b1300 call 0x125abb10 */
  push32(0x125b1305u); f_125abb10();
  /* 125b1305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1308 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125b130f jmp 0x125b131a */
  goto L_125b131a;
L_125b1311:;
  /* 125b1311 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1314 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1317 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125b131a:;
  /* 125b131a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b131e jge 0x125b14c0 */
  if ((C.sf==C.of)) goto L_125b14c0;
  /* 125b1324 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1327 cmp dword ptr [ecx*4 + 0x125d52c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x125d52c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b132f je 0x125b1426 */
  if (C.zf) goto L_125b1426;
  /* 125b1335 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1338 mov eax, dword ptr [edx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x125d52c0)));
  /* 125b133f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b1342 jmp 0x125b134d */
  goto L_125b134d;
L_125b1344:;
  /* 125b1344 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b1347 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b134a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125b134d:;
  /* 125b134d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1350 mov eax, dword ptr [edx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x125d52c0)));
  /* 125b1357 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b135c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b135f jae 0x125b1416 */
  if (!C.cf) goto L_125b1416;
  /* 125b1365 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b1368 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125b136c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125b136f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b1371 jne 0x125b1411 */
  if (!C.zf) goto L_125b1411;
  /* 125b1377 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b137a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b137e jne 0x125b13b9 */
  if (!C.zf) goto L_125b13b9;
  /* 125b1380 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 125b1382 call 0x125abb10 */
  push32(0x125b1387u); f_125abb10();
  /* 125b1387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b138a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b138d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1391 jne 0x125b13af */
  if (!C.zf) goto L_125b13af;
  /* 125b1393 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b1396 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1399 push edx */
  push32((uint32_t)(EDX));
  /* 125b139a call dword ptr [0x125d6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6348))), 0x125b13a0u);
  /* 125b13a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b13a3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125b13a6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b13a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b13ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_125b13af:;
  /* 125b13af push 0x11 */
  push32((uint32_t)(0x11u));
  /* 125b13b1 call 0x125abbb0 */
  push32(0x125b13b6u); f_125abbb0();
  /* 125b13b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b13b9:;
  /* 125b13b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b13bc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b13bf push eax */
  push32((uint32_t)(EAX));
  /* 125b13c0 call dword ptr [0x125d6338] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6338))), 0x125b13c6u);
  /* 125b13c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b13c9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125b13cd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125b13d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b13d2 je 0x125b13e6 */
  if (C.zf) goto L_125b13e6;
  /* 125b13d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b13d7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b13da push eax */
  push32((uint32_t)(EAX));
  /* 125b13db call dword ptr [0x125d6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6334))), 0x125b13e1u);
  /* 125b13e1 jmp 0x125b1344 */
  goto L_125b1344;
L_125b13e6:;
  /* 125b13e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b13e9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 125b13ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b13f2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b13f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b13f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b13fb sub eax, dword ptr [edx*4 + 0x125d52c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x125d52c0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b1402 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b1403 mov esi, 0x24 */
  ESI = (0x24u);
  /* 125b1408 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125b140a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b140c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b140f jmp 0x125b1416 */
  goto L_125b1416;
L_125b1411:;
  /* 125b1411 jmp 0x125b1344 */
  goto L_125b1344;
L_125b1416:;
  /* 125b1416 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b141a je 0x125b1421 */
  if (C.zf) goto L_125b1421;
  /* 125b141c jmp 0x125b14c0 */
  goto L_125b14c0;
L_125b1421:;
  /* 125b1421 jmp 0x125b14bb */
  goto L_125b14bb;
L_125b1426:;
  /* 125b1426 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 125b1428 push 0x125cf734 */
  push32((uint32_t)(0x125cf734u));
  /* 125b142d push 2 */
  push32((uint32_t)(0x2u));
  /* 125b142f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 125b1434 call 0x125a8110 */
  push32(0x125b1439u); f_125a8110();
  /* 125b1439 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b143c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b143f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1443 je 0x125b14b9 */
  if (C.zf) goto L_125b14b9;
  /* 125b1445 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1448 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b144b mov dword ptr [eax*4 + 0x125d52c0], ecx */
  w32((uint32_t)(EAX*4 + 0x125d52c0), (ECX));
  /* 125b1452 mov edx, dword ptr [0x125d53fc] */
  EDX = (r32((uint32_t)(0x125d53fc)));
  /* 125b1458 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b145b mov dword ptr [0x125d53fc], edx */
  w32((uint32_t)(0x125d53fc), (EDX));
  /* 125b1461 jmp 0x125b146c */
  goto L_125b146c;
L_125b1463:;
  /* 125b1463 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b1466 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1469 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125b146c:;
  /* 125b146c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b146f mov edx, dword ptr [ecx*4 + 0x125d52c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x125d52c0)));
  /* 125b1476 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b147c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b147f jae 0x125b14a4 */
  if (!C.cf) goto L_125b14a4;
  /* 125b1481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b1484 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 125b1488 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b148b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 125b1491 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b1494 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 125b1498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b149b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 125b14a2 jmp 0x125b1463 */
  goto L_125b1463;
L_125b14a4:;
  /* 125b14a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b14a7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b14aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b14ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b14b0 push edx */
  push32((uint32_t)(EDX));
  /* 125b14b1 call 0x125b1800 */
  push32(0x125b14b6u); f_125b1800();
  /* 125b14b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b14b9:;
  /* 125b14b9 jmp 0x125b14c0 */
  goto L_125b14c0;
L_125b14bb:;
  /* 125b14bb jmp 0x125b1311 */
  goto L_125b1311;
L_125b14c0:;
  /* 125b14c0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 125b14c2 call 0x125abbb0 */
  push32(0x125b14c7u); f_125abbb0();
  /* 125b14c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b14ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b14cd pop esi */
  ESI = (pop32());
  /* 125b14ce mov esp, ebp */
  ESP = (EBP);
  /* 125b14d0 pop ebp */
  EBP = (pop32());
  /* 125b14d1 ret  */
  ESPCHK(0x125b12f0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x125b14e0 (183 bytes, 57 insns) */
void f_125b14e0(void) {
  FTRACE(0x125b14e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b14e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b14e1 mov ebp, esp */
  EBP = (ESP);
  /* 125b14e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b14e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b14e7 cmp eax, dword ptr [0x125d53fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d53fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b14ed jae 0x125b157a */
  if (!C.cf) goto L_125b157a;
  /* 125b14f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b14f6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b14f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b14fc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125b14ff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b1502 mov eax, dword ptr [ecx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125d52c0)));
  /* 125b1509 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b150d jne 0x125b157a */
  if (!C.zf) goto L_125b157a;
  /* 125b150f cmp dword ptr [0x125d38d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d38d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1516 jne 0x125b155a */
  if (!C.zf) goto L_125b155a;
  /* 125b1518 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b151b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b151e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1522 je 0x125b1532 */
  if (C.zf) goto L_125b1532;
  /* 125b1524 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1528 je 0x125b1540 */
  if (C.zf) goto L_125b1540;
  /* 125b152a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b152e je 0x125b154e */
  if (C.zf) goto L_125b154e;
  /* 125b1530 jmp 0x125b155a */
  goto L_125b155a;
L_125b1532:;
  /* 125b1532 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b1535 push edx */
  push32((uint32_t)(EDX));
  /* 125b1536 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 125b1538 call dword ptr [0x125d6300] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6300))), 0x125b153eu);
  /* 125b153e jmp 0x125b155a */
  goto L_125b155a;
L_125b1540:;
  /* 125b1540 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b1543 push eax */
  push32((uint32_t)(EAX));
  /* 125b1544 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 125b1546 call dword ptr [0x125d6300] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6300))), 0x125b154cu);
  /* 125b154c jmp 0x125b155a */
  goto L_125b155a;
L_125b154e:;
  /* 125b154e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b1551 push ecx */
  push32((uint32_t)(ECX));
  /* 125b1552 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 125b1554 call dword ptr [0x125d6300] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6300))), 0x125b155au);
L_125b155a:;
  /* 125b155a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b155d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 125b1560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1563 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 125b1566 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b1569 mov ecx, dword ptr [edx*4 + 0x125d52c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x125d52c0)));
  /* 125b1570 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b1573 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 125b1576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b1578 jmp 0x125b1593 */
  goto L_125b1593;
L_125b157a:;
  /* 125b157a call 0x125affe0 */
  push32(0x125b157fu); f_125affe0();
  /* 125b157f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125b1585 call 0x125afff0 */
  push32(0x125b158au); f_125afff0();
  /* 125b158a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125b1590 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_125b1593:;
  /* 125b1593 mov esp, ebp */
  ESP = (EBP);
  /* 125b1595 pop ebp */
  EBP = (pop32());
  /* 125b1596 ret  */
  ESPCHK(0x125b14e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100115a0 @ 0x125b15a0 (216 bytes, 63 insns) */
void f_125b15a0(void) {
  FTRACE(0x125b15a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b15a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b15a1 mov ebp, esp */
  EBP = (ESP);
  /* 125b15a3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b15a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b15a7 cmp eax, dword ptr [0x125d53fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d53fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b15ad jae 0x125b165b */
  if (!C.cf) goto L_125b165b;
  /* 125b15b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b15b6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b15b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b15bc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125b15bf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b15c2 mov eax, dword ptr [ecx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125d52c0)));
  /* 125b15c9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125b15ce and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125b15d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b15d3 je 0x125b165b */
  if (C.zf) goto L_125b165b;
  /* 125b15d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b15dc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 125b15df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b15e2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 125b15e5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b15e8 mov ecx, dword ptr [edx*4 + 0x125d52c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x125d52c0)));
  /* 125b15ef cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b15f3 je 0x125b165b */
  if (C.zf) goto L_125b165b;
  /* 125b15f5 cmp dword ptr [0x125d38d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d38d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b15fc jne 0x125b163a */
  if (!C.zf) goto L_125b163a;
  /* 125b15fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1601 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125b1604 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1608 je 0x125b1618 */
  if (C.zf) goto L_125b1618;
  /* 125b160a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b160e je 0x125b1624 */
  if (C.zf) goto L_125b1624;
  /* 125b1610 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1614 je 0x125b1630 */
  if (C.zf) goto L_125b1630;
  /* 125b1616 jmp 0x125b163a */
  goto L_125b163a;
L_125b1618:;
  /* 125b1618 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b161a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 125b161c call dword ptr [0x125d6300] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6300))), 0x125b1622u);
  /* 125b1622 jmp 0x125b163a */
  goto L_125b163a;
L_125b1624:;
  /* 125b1624 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b1626 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 125b1628 call dword ptr [0x125d6300] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6300))), 0x125b162eu);
  /* 125b162e jmp 0x125b163a */
  goto L_125b163a;
L_125b1630:;
  /* 125b1630 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b1632 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 125b1634 call dword ptr [0x125d6300] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6300))), 0x125b163au);
L_125b163a:;
  /* 125b163a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b163d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125b1640 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1643 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125b1646 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b1649 mov edx, dword ptr [eax*4 + 0x125d52c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125d52c0)));
  /* 125b1650 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 125b1657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b1659 jmp 0x125b1674 */
  goto L_125b1674;
L_125b165b:;
  /* 125b165b call 0x125affe0 */
  push32(0x125b1660u); f_125affe0();
  /* 125b1660 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125b1666 call 0x125afff0 */
  push32(0x125b166bu); f_125afff0();
  /* 125b166b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125b1671 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_125b1674:;
  /* 125b1674 mov esp, ebp */
  ESP = (EBP);
  /* 125b1676 pop ebp */
  EBP = (pop32());
  /* 125b1677 ret  */
  ESPCHK(0x125b15a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011680 @ 0x125b1680 (102 bytes, 30 insns) */
void f_125b1680(void) {
  FTRACE(0x125b1680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b1680 push ebp */
  push32((uint32_t)(EBP));
  /* 125b1681 mov ebp, esp */
  EBP = (ESP);
  /* 125b1683 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1686 cmp eax, dword ptr [0x125d53fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d53fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b168c jae 0x125b16cb */
  if (!C.cf) goto L_125b16cb;
  /* 125b168e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1691 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b1694 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1697 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125b169a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b169d mov eax, dword ptr [ecx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125d52c0)));
  /* 125b16a4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125b16a9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125b16ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b16ae je 0x125b16cb */
  if (C.zf) goto L_125b16cb;
  /* 125b16b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b16b3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 125b16b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b16b9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 125b16bc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b16bf mov ecx, dword ptr [edx*4 + 0x125d52c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x125d52c0)));
  /* 125b16c6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 125b16c9 jmp 0x125b16e4 */
  goto L_125b16e4;
L_125b16cb:;
  /* 125b16cb call 0x125affe0 */
  push32(0x125b16d0u); f_125affe0();
  /* 125b16d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125b16d6 call 0x125afff0 */
  push32(0x125b16dbu); f_125afff0();
  /* 125b16db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125b16e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_125b16e4:;
  /* 125b16e4 pop ebp */
  EBP = (pop32());
  /* 125b16e5 ret  */
  ESPCHK(0x125b1680u, _esp0);
  ESP += 4; return;
}

/* FUN_100116f0 @ 0x125b16f0 (260 bytes, 83 insns) */
void f_125b16f0(void) {
  FTRACE(0x125b16f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b16f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b16f1 mov ebp, esp */
  EBP = (ESP);
  /* 125b16f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b16f6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 125b16fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b16fd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 125b1700 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b1702 je 0x125b170d */
  if (C.zf) goto L_125b170d;
  /* 125b1704 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 125b1707 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 125b170a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_125b170d:;
  /* 125b170d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b1710 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 125b1716 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b1718 je 0x125b1722 */
  if (C.zf) goto L_125b1722;
  /* 125b171a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 125b171d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 125b171f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_125b1722:;
  /* 125b1722 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b1725 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 125b172b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b172d je 0x125b1738 */
  if (C.zf) goto L_125b1738;
  /* 125b172f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 125b1732 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 125b1735 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_125b1738:;
  /* 125b1738 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b173b push eax */
  push32((uint32_t)(EAX));
  /* 125b173c call dword ptr [0x125d63a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63a0))), 0x125b1742u);
  /* 125b1742 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b1745 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1749 jne 0x125b1762 */
  if (!C.zf) goto L_125b1762;
  /* 125b174b call dword ptr [0x125d63b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63b4))), 0x125b1751u);
  /* 125b1751 push eax */
  push32((uint32_t)(EAX));
  /* 125b1752 call 0x125aff40 */
  push32(0x125b1757u); f_125aff40();
  /* 125b1757 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b175a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b175d jmp 0x125b17f0 */
  goto L_125b17f0;
L_125b1762:;
  /* 125b1762 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1766 jne 0x125b1773 */
  if (!C.zf) goto L_125b1773;
  /* 125b1768 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 125b176b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 125b176e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 125b1771 jmp 0x125b1782 */
  goto L_125b1782;
L_125b1773:;
  /* 125b1773 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1777 jne 0x125b1782 */
  if (!C.zf) goto L_125b1782;
  /* 125b1779 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 125b177c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 125b177f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_125b1782:;
  /* 125b1782 call 0x125b12f0 */
  push32(0x125b1787u); f_125b12f0();
  /* 125b1787 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b178a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b178e jne 0x125b17ab */
  if (!C.zf) goto L_125b17ab;
  /* 125b1790 call 0x125affe0 */
  push32(0x125b1795u); f_125affe0();
  /* 125b1795 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 125b179b call 0x125afff0 */
  push32(0x125b17a0u); f_125afff0();
  /* 125b17a0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125b17a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b17a9 jmp 0x125b17f0 */
  goto L_125b17f0;
L_125b17ab:;
  /* 125b17ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b17ae push eax */
  push32((uint32_t)(EAX));
  /* 125b17af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b17b2 push ecx */
  push32((uint32_t)(ECX));
  /* 125b17b3 call 0x125b14e0 */
  push32(0x125b17b8u); f_125b14e0();
  /* 125b17b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b17bb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 125b17be or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 125b17c1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 125b17c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b17c7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125b17ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b17cd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125b17d0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b17d3 mov edx, dword ptr [eax*4 + 0x125d52c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125d52c0)));
  /* 125b17da mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 125b17dd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 125b17e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b17e4 push ecx */
  push32((uint32_t)(ECX));
  /* 125b17e5 call 0x125b1890 */
  push32(0x125b17eau); f_125b1890();
  /* 125b17ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b17ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125b17f0:;
  /* 125b17f0 mov esp, ebp */
  ESP = (EBP);
  /* 125b17f2 pop ebp */
  EBP = (pop32());
  /* 125b17f3 ret  */
  ESPCHK(0x125b16f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011800 @ 0x125b1800 (134 bytes, 44 insns) */
void f_125b1800(void) {
  FTRACE(0x125b1800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b1800 push ebp */
  push32((uint32_t)(EBP));
  /* 125b1801 mov ebp, esp */
  EBP = (ESP);
  /* 125b1803 push ecx */
  push32((uint32_t)(ECX));
  /* 125b1804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1807 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125b180a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b180d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125b1810 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b1813 mov edx, dword ptr [eax*4 + 0x125d52c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125d52c0)));
  /* 125b181a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b181c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125b181f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b1822 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1826 jne 0x125b1861 */
  if (!C.zf) goto L_125b1861;
  /* 125b1828 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 125b182a call 0x125abb10 */
  push32(0x125b182fu); f_125abb10();
  /* 125b182f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b1835 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1839 jne 0x125b1857 */
  if (!C.zf) goto L_125b1857;
  /* 125b183b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b183e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1841 push edx */
  push32((uint32_t)(EDX));
  /* 125b1842 call dword ptr [0x125d6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6348))), 0x125b1848u);
  /* 125b1848 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b184b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125b184e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1851 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b1854 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_125b1857:;
  /* 125b1857 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 125b1859 call 0x125abbb0 */
  push32(0x125b185eu); f_125abbb0();
  /* 125b185e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b1861:;
  /* 125b1861 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1864 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125b1867 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b186a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125b186d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b1870 mov edx, dword ptr [eax*4 + 0x125d52c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125d52c0)));
  /* 125b1877 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 125b187b push eax */
  push32((uint32_t)(EAX));
  /* 125b187c call dword ptr [0x125d6338] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6338))), 0x125b1882u);
  /* 125b1882 mov esp, ebp */
  ESP = (EBP);
  /* 125b1884 pop ebp */
  EBP = (pop32());
  /* 125b1885 ret  */
  ESPCHK(0x125b1800u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x125b1890 (38 bytes, 13 insns) */
void f_125b1890(void) {
  FTRACE(0x125b1890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b1890 push ebp */
  push32((uint32_t)(EBP));
  /* 125b1891 mov ebp, esp */
  EBP = (ESP);
  /* 125b1893 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1896 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125b1899 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b189c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125b189f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b18a2 mov edx, dword ptr [eax*4 + 0x125d52c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125d52c0)));
  /* 125b18a9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 125b18ad push eax */
  push32((uint32_t)(EAX));
  /* 125b18ae call dword ptr [0x125d6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6334))), 0x125b18b4u);
  /* 125b18b4 pop ebp */
  EBP = (pop32());
  /* 125b18b5 ret  */
  ESPCHK(0x125b1890u, _esp0);
  ESP += 4; return;
}

/* FUN_100118c0 @ 0x125b18c0 (218 bytes, 63 insns) */
void f_125b18c0(void) {
  FTRACE(0x125b18c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b18c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b18c1 mov ebp, esp */
  EBP = (ESP);
  /* 125b18c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b18c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b18cd push 2 */
  push32((uint32_t)(0x2u));
  /* 125b18cf call 0x125abb10 */
  push32(0x125b18d4u); f_125abb10();
  /* 125b18d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b18d7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 125b18de jmp 0x125b18e9 */
  goto L_125b18e9;
L_125b18e0:;
  /* 125b18e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b18e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b18e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125b18e9:;
  /* 125b18e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b18ec cmp ecx, dword ptr [0x125d4fc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d4fc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b18f2 jge 0x125b1989 */
  if ((C.sf==C.of)) goto L_125b1989;
  /* 125b18f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b18fb mov eax, dword ptr [0x125d3c70] */
  EAX = (r32((uint32_t)(0x125d3c70)));
  /* 125b1900 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1904 je 0x125b1984 */
  if (C.zf) goto L_125b1984;
  /* 125b1906 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1909 mov edx, dword ptr [0x125d3c70] */
  EDX = (r32((uint32_t)(0x125d3c70)));
  /* 125b190f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 125b1912 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125b1915 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 125b191b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b191d je 0x125b1941 */
  if (C.zf) goto L_125b1941;
  /* 125b191f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1922 mov eax, dword ptr [0x125d3c70] */
  EAX = (r32((uint32_t)(0x125d3c70)));
  /* 125b1927 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 125b192a push ecx */
  push32((uint32_t)(ECX));
  /* 125b192b call 0x125b26b0 */
  push32(0x125b1930u); f_125b26b0();
  /* 125b1930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1933 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1936 je 0x125b1941 */
  if (C.zf) goto L_125b1941;
  /* 125b1938 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b193b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b193e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125b1941:;
  /* 125b1941 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1945 jl 0x125b1984 */
  if ((C.sf!=C.of)) goto L_125b1984;
  /* 125b1947 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b194a mov ecx, dword ptr [0x125d3c70] */
  ECX = (r32((uint32_t)(0x125d3c70)));
  /* 125b1950 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125b1953 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1956 push edx */
  push32((uint32_t)(EDX));
  /* 125b1957 call dword ptr [0x125d63c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63c4))), 0x125b195du);
  /* 125b195d push 2 */
  push32((uint32_t)(0x2u));
  /* 125b195f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1962 mov ecx, dword ptr [0x125d3c70] */
  ECX = (r32((uint32_t)(0x125d3c70)));
  /* 125b1968 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125b196b push edx */
  push32((uint32_t)(EDX));
  /* 125b196c call 0x125a8ba0 */
  push32(0x125b1971u); f_125a8ba0();
  /* 125b1971 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1974 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1977 mov ecx, dword ptr [0x125d3c70] */
  ECX = (r32((uint32_t)(0x125d3c70)));
  /* 125b197d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_125b1984:;
  /* 125b1984 jmp 0x125b18e0 */
  goto L_125b18e0;
L_125b1989:;
  /* 125b1989 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b198b call 0x125abbb0 */
  push32(0x125b1990u); f_125abbb0();
  /* 125b1990 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1993 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b1996 mov esp, ebp */
  ESP = (EBP);
  /* 125b1998 pop ebp */
  EBP = (pop32());
  /* 125b1999 ret  */
  ESPCHK(0x125b18c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119a0 @ 0x125b19a0 (68 bytes, 26 insns) */
void f_125b19a0(void) {
  FTRACE(0x125b19a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b19a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b19a1 mov ebp, esp */
  EBP = (ESP);
  /* 125b19a3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b19a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b19a8 jne 0x125b19b6 */
  if (!C.zf) goto L_125b19b6;
  /* 125b19aa push 0 */
  push32((uint32_t)(0x0u));
  /* 125b19ac call 0x125b1b10 */
  push32(0x125b19b1u); f_125b1b10();
  /* 125b19b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b19b4 jmp 0x125b19e0 */
  goto L_125b19e0;
L_125b19b6:;
  /* 125b19b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b19b9 push eax */
  push32((uint32_t)(EAX));
  /* 125b19ba call 0x125b0f20 */
  push32(0x125b19bfu); f_125b0f20();
  /* 125b19bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b19c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b19c5 push ecx */
  push32((uint32_t)(ECX));
  /* 125b19c6 call 0x125b19f0 */
  push32(0x125b19cbu); f_125b19f0();
  /* 125b19cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b19ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b19d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b19d4 push edx */
  push32((uint32_t)(EDX));
  /* 125b19d5 call 0x125b0f90 */
  push32(0x125b19dau); f_125b0f90();
  /* 125b19da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b19dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125b19e0:;
  /* 125b19e0 mov esp, ebp */
  ESP = (EBP);
  /* 125b19e2 pop ebp */
  EBP = (pop32());
  /* 125b19e3 ret  */
  ESPCHK(0x125b19a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119f0 @ 0x125b19f0 (65 bytes, 26 insns) */
void f_125b19f0(void) {
  FTRACE(0x125b19f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b19f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b19f1 mov ebp, esp */
  EBP = (ESP);
  /* 125b19f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b19f6 push eax */
  push32((uint32_t)(EAX));
  /* 125b19f7 call 0x125b1a40 */
  push32(0x125b19fcu); f_125b1a40();
  /* 125b19fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b19ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b1a01 je 0x125b1a08 */
  if (C.zf) goto L_125b1a08;
  /* 125b1a03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b1a06 jmp 0x125b1a2f */
  goto L_125b1a2f;
L_125b1a08:;
  /* 125b1a08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1a0b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125b1a0e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 125b1a14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b1a16 je 0x125b1a2d */
  if (C.zf) goto L_125b1a2d;
  /* 125b1a18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1a1b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125b1a1e push ecx */
  push32((uint32_t)(ECX));
  /* 125b1a1f call 0x125b2800 */
  push32(0x125b1a24u); f_125b2800();
  /* 125b1a24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1a27 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b1a29 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b1a2b jmp 0x125b1a2f */
  goto L_125b1a2f;
L_125b1a2d:;
  /* 125b1a2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b1a2f:;
  /* 125b1a2f pop ebp */
  EBP = (pop32());
  /* 125b1a30 ret  */
  ESPCHK(0x125b19f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a40 @ 0x125b1a40 (183 bytes, 62 insns) */
void f_125b1a40(void) {
  FTRACE(0x125b1a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b1a40 push ebp */
  push32((uint32_t)(EBP));
  /* 125b1a41 mov ebp, esp */
  EBP = (ESP);
  /* 125b1a43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b1a46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b1a4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1a50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b1a53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1a56 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125b1a59 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125b1a5c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1a5f jne 0x125b1adb */
  if (!C.zf) goto L_125b1adb;
  /* 125b1a61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1a64 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125b1a67 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 125b1a6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b1a6f je 0x125b1adb */
  if (C.zf) goto L_125b1adb;
  /* 125b1a71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1a74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1a77 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 125b1a79 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b1a7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b1a7f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1a83 jle 0x125b1adb */
  if ((C.zf||C.sf!=C.of)) goto L_125b1adb;
  /* 125b1a85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1a88 push edx */
  push32((uint32_t)(EDX));
  /* 125b1a89 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1a8c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125b1a8f push ecx */
  push32((uint32_t)(ECX));
  /* 125b1a90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1a93 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125b1a96 push eax */
  push32((uint32_t)(EAX));
  /* 125b1a97 call 0x125b09b0 */
  push32(0x125b1a9cu); f_125b09b0();
  /* 125b1a9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1a9f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1aa2 jne 0x125b1ac5 */
  if (!C.zf) goto L_125b1ac5;
  /* 125b1aa4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1aa7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125b1aaa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 125b1ab0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b1ab2 je 0x125b1ac3 */
  if (C.zf) goto L_125b1ac3;
  /* 125b1ab4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1ab7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125b1aba and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 125b1abd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1ac0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_125b1ac3:;
  /* 125b1ac3 jmp 0x125b1adb */
  goto L_125b1adb;
L_125b1ac5:;
  /* 125b1ac5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1ac8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125b1acb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 125b1ace mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1ad1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 125b1ad4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125b1adb:;
  /* 125b1adb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1ade mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1ae1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125b1ae4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125b1ae6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b1ae9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 125b1af0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b1af3 mov esp, ebp */
  ESP = (EBP);
  /* 125b1af5 pop ebp */
  EBP = (pop32());
  /* 125b1af6 ret  */
  ESPCHK(0x125b1a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b00 @ 0x125b1b00 (15 bytes, 7 insns) */
void f_125b1b00(void) {
  FTRACE(0x125b1b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b1b00 push ebp */
  push32((uint32_t)(EBP));
  /* 125b1b01 mov ebp, esp */
  EBP = (ESP);
  /* 125b1b03 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b1b05 call 0x125b1b10 */
  push32(0x125b1b0au); f_125b1b10();
  /* 125b1b0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1b0d pop ebp */
  EBP = (pop32());
  /* 125b1b0e ret  */
  ESPCHK(0x125b1b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b10 @ 0x125b1b10 (319 bytes, 94 insns) */
void f_125b1b10(void) {
  FTRACE(0x125b1b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b1b10 push ebp */
  push32((uint32_t)(EBP));
  /* 125b1b11 mov ebp, esp */
  EBP = (ESP);
  /* 125b1b13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b1b16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b1b1d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125b1b24 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b1b26 call 0x125abb10 */
  push32(0x125b1b2bu); f_125abb10();
  /* 125b1b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1b2e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125b1b35 jmp 0x125b1b40 */
  goto L_125b1b40;
L_125b1b37:;
  /* 125b1b37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1b3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1b3d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125b1b40:;
  /* 125b1b40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1b43 cmp ecx, dword ptr [0x125d4fc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d4fc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1b49 jge 0x125b1c33 */
  if ((C.sf==C.of)) goto L_125b1c33;
  /* 125b1b4f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1b52 mov eax, dword ptr [0x125d3c70] */
  EAX = (r32((uint32_t)(0x125d3c70)));
  /* 125b1b57 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1b5b je 0x125b1c2e */
  if (C.zf) goto L_125b1c2e;
  /* 125b1b61 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1b64 mov edx, dword ptr [0x125d3c70] */
  EDX = (r32((uint32_t)(0x125d3c70)));
  /* 125b1b6a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 125b1b6d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125b1b70 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 125b1b76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b1b78 je 0x125b1c2e */
  if (C.zf) goto L_125b1c2e;
  /* 125b1b7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1b81 mov eax, dword ptr [0x125d3c70] */
  EAX = (r32((uint32_t)(0x125d3c70)));
  /* 125b1b86 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 125b1b89 push ecx */
  push32((uint32_t)(ECX));
  /* 125b1b8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1b8d push edx */
  push32((uint32_t)(EDX));
  /* 125b1b8e call 0x125b0f60 */
  push32(0x125b1b93u); f_125b0f60();
  /* 125b1b93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1b96 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1b99 mov ecx, dword ptr [0x125d3c70] */
  ECX = (r32((uint32_t)(0x125d3c70)));
  /* 125b1b9f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125b1ba2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125b1ba5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 125b1baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b1bac je 0x125b1c15 */
  if (C.zf) goto L_125b1c15;
  /* 125b1bae cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1bb2 jne 0x125b1bd9 */
  if (!C.zf) goto L_125b1bd9;
  /* 125b1bb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1bb7 mov edx, dword ptr [0x125d3c70] */
  EDX = (r32((uint32_t)(0x125d3c70)));
  /* 125b1bbd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 125b1bc0 push eax */
  push32((uint32_t)(EAX));
  /* 125b1bc1 call 0x125b19f0 */
  push32(0x125b1bc6u); f_125b19f0();
  /* 125b1bc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1bc9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1bcc je 0x125b1bd7 */
  if (C.zf) goto L_125b1bd7;
  /* 125b1bce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b1bd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1bd4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125b1bd7:;
  /* 125b1bd7 jmp 0x125b1c15 */
  goto L_125b1c15;
L_125b1bd9:;
  /* 125b1bd9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1bdd jne 0x125b1c15 */
  if (!C.zf) goto L_125b1c15;
  /* 125b1bdf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1be2 mov eax, dword ptr [0x125d3c70] */
  EAX = (r32((uint32_t)(0x125d3c70)));
  /* 125b1be7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 125b1bea mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125b1bed and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 125b1bf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b1bf2 je 0x125b1c15 */
  if (C.zf) goto L_125b1c15;
  /* 125b1bf4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1bf7 mov ecx, dword ptr [0x125d3c70] */
  ECX = (r32((uint32_t)(0x125d3c70)));
  /* 125b1bfd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125b1c00 push edx */
  push32((uint32_t)(EDX));
  /* 125b1c01 call 0x125b19f0 */
  push32(0x125b1c06u); f_125b19f0();
  /* 125b1c06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1c09 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1c0c jne 0x125b1c15 */
  if (!C.zf) goto L_125b1c15;
  /* 125b1c0e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_125b1c15:;
  /* 125b1c15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1c18 mov ecx, dword ptr [0x125d3c70] */
  ECX = (r32((uint32_t)(0x125d3c70)));
  /* 125b1c1e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125b1c21 push edx */
  push32((uint32_t)(EDX));
  /* 125b1c22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1c25 push eax */
  push32((uint32_t)(EAX));
  /* 125b1c26 call 0x125b0fd0 */
  push32(0x125b1c2bu); f_125b0fd0();
  /* 125b1c2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b1c2e:;
  /* 125b1c2e jmp 0x125b1b37 */
  goto L_125b1b37;
L_125b1c33:;
  /* 125b1c33 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b1c35 call 0x125abbb0 */
  push32(0x125b1c3au); f_125abbb0();
  /* 125b1c3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1c3d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1c41 jne 0x125b1c48 */
  if (!C.zf) goto L_125b1c48;
  /* 125b1c43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b1c46 jmp 0x125b1c4b */
  goto L_125b1c4b;
L_125b1c48:;
  /* 125b1c48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125b1c4b:;
  /* 125b1c4b mov esp, ebp */
  ESP = (EBP);
  /* 125b1c4d pop ebp */
  EBP = (pop32());
  /* 125b1c4e ret  */
  ESPCHK(0x125b1b10u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x125b1c50 (15 bytes, 7 insns) */
void f_125b1c50(void) {
  FTRACE(0x125b1c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b1c50 push ebp */
  push32((uint32_t)(EBP));
  /* 125b1c51 mov ebp, esp */
  EBP = (ESP);
  /* 125b1c53 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b1c55 call 0x125a7080 */
  push32(0x125b1c5au); f_125a7080();
  /* 125b1c5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1c5d pop ebp */
  EBP = (pop32());
  /* 125b1c5e ret  */
  ESPCHK(0x125b1c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c60 @ 0x125b1c60 (1007 bytes, 269 insns) */
void f_125b1c60(void) {
  FTRACE(0x125b1c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b1c60 push ebp */
  push32((uint32_t)(EBP));
  /* 125b1c61 mov ebp, esp */
  EBP = (ESP);
  /* 125b1c63 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b1c69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1c6d jl 0x125b1c75 */
  if ((C.sf!=C.of)) goto L_125b1c75;
  /* 125b1c6f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1c73 jle 0x125b1c7c */
  if ((C.zf||C.sf!=C.of)) goto L_125b1c7c;
L_125b1c75:;
  /* 125b1c75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b1c77 jmp 0x125b204b */
  goto L_125b204b;
L_125b1c7c:;
  /* 125b1c7c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125b1c7e call 0x125abb10 */
  push32(0x125b1c83u); f_125abb10();
  /* 125b1c83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1c86 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125b1c8d mov eax, dword ptr [0x125d3c5c] */
  EAX = (r32((uint32_t)(0x125d3c5c)));
  /* 125b1c92 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1c95 mov dword ptr [0x125d3c5c], eax */
  w32((uint32_t)(0x125d3c5c), (EAX));
L_125b1c9a:;
  /* 125b1c9a cmp dword ptr [0x125d3c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1ca1 je 0x125b1cad */
  if (C.zf) goto L_125b1cad;
  /* 125b1ca3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b1ca5 call dword ptr [0x125d62f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62f0))), 0x125b1cabu);
  /* 125b1cab jmp 0x125b1c9a */
  goto L_125b1c9a;
L_125b1cad:;
  /* 125b1cad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1cb1 je 0x125b1cf1 */
  if (C.zf) goto L_125b1cf1;
  /* 125b1cb3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1cb7 je 0x125b1cd1 */
  if (C.zf) goto L_125b1cd1;
  /* 125b1cb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b1cbc push ecx */
  push32((uint32_t)(ECX));
  /* 125b1cbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1cc0 push edx */
  push32((uint32_t)(EDX));
  /* 125b1cc1 call 0x125b2050 */
  push32(0x125b1cc6u); f_125b2050();
  /* 125b1cc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1cc9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 125b1ccf jmp 0x125b1ce3 */
  goto L_125b1ce3;
L_125b1cd1:;
  /* 125b1cd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1cd4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b1cd7 mov ecx, dword ptr [eax + 0x125d24dc] */
  ECX = (r32((uint32_t)(EAX + 0x125d24dc)));
  /* 125b1cdd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_125b1ce3:;
  /* 125b1ce3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 125b1ce9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125b1cec jmp 0x125b202b */
  goto L_125b202b;
L_125b1cf1:;
  /* 125b1cf1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 125b1cf8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125b1cff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1d03 je 0x125b2023 */
  if (C.zf) goto L_125b2023;
  /* 125b1d09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b1d0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b1d0f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1d12 jne 0x125b1f34 */
  if (!C.zf) goto L_125b1f34;
  /* 125b1d18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b1d1b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125b1d1f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1d22 jne 0x125b1f34 */
  if (!C.zf) goto L_125b1f34;
  /* 125b1d28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b1d2b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 125b1d2f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1d32 jne 0x125b1f34 */
  if (!C.zf) goto L_125b1f34;
  /* 125b1d38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b1d3b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_125b1d41:;
  /* 125b1d41 push 0x125cf784 */
  push32((uint32_t)(0x125cf784u));
  /* 125b1d46 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125b1d4c push ecx */
  push32((uint32_t)(ECX));
  /* 125b1d4d call 0x125b3eb0 */
  push32(0x125b1d52u); f_125b3eb0();
  /* 125b1d52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1d55 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 125b1d5b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1d62 je 0x125b1d8d */
  if (C.zf) goto L_125b1d8d;
  /* 125b1d64 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125b1d6a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b1d70 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 125b1d76 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1d7d je 0x125b1d8d */
  if (C.zf) goto L_125b1d8d;
  /* 125b1d7f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125b1d85 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b1d88 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1d8b jne 0x125b1db3 */
  if (!C.zf) goto L_125b1db3;
L_125b1d8d:;
  /* 125b1d8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1d91 je 0x125b1dac */
  if (C.zf) goto L_125b1dac;
  /* 125b1d93 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125b1d95 call 0x125abbb0 */
  push32(0x125b1d9au); f_125abbb0();
  /* 125b1d9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1d9d mov edx, dword ptr [0x125d3c5c] */
  EDX = (r32((uint32_t)(0x125d3c5c)));
  /* 125b1da3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b1da6 mov dword ptr [0x125d3c5c], edx */
  w32((uint32_t)(0x125d3c5c), (EDX));
L_125b1dac:;
  /* 125b1dac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b1dae jmp 0x125b204b */
  goto L_125b204b;
L_125b1db3:;
  /* 125b1db3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 125b1dba jmp 0x125b1dc5 */
  goto L_125b1dc5;
L_125b1dbc:;
  /* 125b1dbc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b1dbf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1dc2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_125b1dc5:;
  /* 125b1dc5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1dc9 jg 0x125b1e13 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b1e13;
  /* 125b1dcb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 125b1dd1 push ecx */
  push32((uint32_t)(ECX));
  /* 125b1dd2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125b1dd8 push edx */
  push32((uint32_t)(EDX));
  /* 125b1dd9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b1ddc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b1ddf mov ecx, dword ptr [eax + 0x125d24d8] */
  ECX = (r32((uint32_t)(EAX + 0x125d24d8)));
  /* 125b1de5 push ecx */
  push32((uint32_t)(ECX));
  /* 125b1de6 call 0x125b3e70 */
  push32(0x125b1debu); f_125b3e70();
  /* 125b1deb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1dee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b1df0 jne 0x125b1e11 */
  if (!C.zf) goto L_125b1e11;
  /* 125b1df2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b1df5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b1df8 mov eax, dword ptr [edx + 0x125d24d8] */
  EAX = (r32((uint32_t)(EDX + 0x125d24d8)));
  /* 125b1dfe push eax */
  push32((uint32_t)(EAX));
  /* 125b1dff call 0x125aaf40 */
  push32(0x125b1e04u); f_125aaf40();
  /* 125b1e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1e07 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1e0d jne 0x125b1e11 */
  if (!C.zf) goto L_125b1e11;
  /* 125b1e0f jmp 0x125b1e13 */
  goto L_125b1e13;
L_125b1e11:;
  /* 125b1e11 jmp 0x125b1dbc */
  goto L_125b1dbc;
L_125b1e13:;
  /* 125b1e13 push 0x125cf780 */
  push32((uint32_t)(0x125cf780u));
  /* 125b1e18 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125b1e1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1e21 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 125b1e27 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125b1e2d push edx */
  push32((uint32_t)(EDX));
  /* 125b1e2e call 0x125b3e30 */
  push32(0x125b1e33u); f_125b3e30();
  /* 125b1e33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1e36 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 125b1e3c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1e43 jne 0x125b1e79 */
  if (!C.zf) goto L_125b1e79;
  /* 125b1e45 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125b1e4b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b1e4e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1e51 je 0x125b1e79 */
  if (C.zf) goto L_125b1e79;
  /* 125b1e53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1e57 je 0x125b1e72 */
  if (C.zf) goto L_125b1e72;
  /* 125b1e59 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125b1e5b call 0x125abbb0 */
  push32(0x125b1e60u); f_125abbb0();
  /* 125b1e60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1e63 mov edx, dword ptr [0x125d3c5c] */
  EDX = (r32((uint32_t)(0x125d3c5c)));
  /* 125b1e69 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b1e6c mov dword ptr [0x125d3c5c], edx */
  w32((uint32_t)(0x125d3c5c), (EDX));
L_125b1e72:;
  /* 125b1e72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b1e74 jmp 0x125b204b */
  goto L_125b204b;
L_125b1e79:;
  /* 125b1e79 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1e7d jg 0x125b1eca */
  if ((!C.zf&&C.sf==C.of)) goto L_125b1eca;
  /* 125b1e7f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 125b1e85 push eax */
  push32((uint32_t)(EAX));
  /* 125b1e86 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125b1e8c push ecx */
  push32((uint32_t)(ECX));
  /* 125b1e8d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 125b1e93 push edx */
  push32((uint32_t)(EDX));
  /* 125b1e94 call 0x125ab930 */
  push32(0x125b1e99u); f_125ab930();
  /* 125b1e99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1e9c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 125b1ea2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 125b1eaa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 125b1eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 125b1eb1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b1eb4 push edx */
  push32((uint32_t)(EDX));
  /* 125b1eb5 call 0x125b2050 */
  push32(0x125b1ebau); f_125b2050();
  /* 125b1eba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1ebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b1ebf je 0x125b1eca */
  if (C.zf) goto L_125b1eca;
  /* 125b1ec1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1ec4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1ec7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125b1eca:;
  /* 125b1eca mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125b1ed0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1ed6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 125b1edc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125b1ee2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125b1ee5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b1ee7 je 0x125b1ef8 */
  if (C.zf) goto L_125b1ef8;
  /* 125b1ee9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125b1eef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1ef2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_125b1ef8:;
  /* 125b1ef8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125b1efe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125b1f01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b1f03 jne 0x125b1d41 */
  if (!C.zf) goto L_125b1d41;
  /* 125b1f09 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1f0d je 0x125b1f1c */
  if (C.zf) goto L_125b1f1c;
  /* 125b1f0f call 0x125b21f0 */
  push32(0x125b1f14u); f_125b21f0();
  /* 125b1f14 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 125b1f1a jmp 0x125b1f26 */
  goto L_125b1f26;
L_125b1f1c:;
  /* 125b1f1c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_125b1f26:;
  /* 125b1f26 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 125b1f2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b1f2f jmp 0x125b2021 */
  goto L_125b2021;
L_125b1f34:;
  /* 125b1f34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b1f37 push edx */
  push32((uint32_t)(EDX));
  /* 125b1f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b1f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 125b1f3c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 125b1f42 push eax */
  push32((uint32_t)(EAX));
  /* 125b1f43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b1f46 push ecx */
  push32((uint32_t)(ECX));
  /* 125b1f47 call 0x125b22f0 */
  push32(0x125b1f4cu); f_125b22f0();
  /* 125b1f4c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1f4f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b1f52 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1f56 je 0x125b2021 */
  if (C.zf) goto L_125b2021;
  /* 125b1f5c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125b1f63 jmp 0x125b1f6e */
  goto L_125b1f6e;
L_125b1f65:;
  /* 125b1f65 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b1f68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1f6b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125b1f6e:;
  /* 125b1f6e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1f72 jg 0x125b1fd0 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b1fd0;
  /* 125b1f74 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1f78 je 0x125b1fce */
  if (C.zf) goto L_125b1fce;
  /* 125b1f7a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b1f7d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b1f80 mov ecx, dword ptr [eax + 0x125d24dc] */
  ECX = (r32((uint32_t)(EAX + 0x125d24dc)));
  /* 125b1f86 push ecx */
  push32((uint32_t)(ECX));
  /* 125b1f87 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 125b1f8d push edx */
  push32((uint32_t)(EDX));
  /* 125b1f8e call 0x125b3da0 */
  push32(0x125b1f93u); f_125b3da0();
  /* 125b1f93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1f96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b1f98 je 0x125b1fc5 */
  if (C.zf) goto L_125b1fc5;
  /* 125b1f9a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 125b1fa0 push eax */
  push32((uint32_t)(EAX));
  /* 125b1fa1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b1fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 125b1fa5 call 0x125b2050 */
  push32(0x125b1faau); f_125b2050();
  /* 125b1faa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1fad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b1faf je 0x125b1fbc */
  if (C.zf) goto L_125b1fbc;
  /* 125b1fb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1fb4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1fb7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125b1fba jmp 0x125b1fc3 */
  goto L_125b1fc3;
L_125b1fbc:;
  /* 125b1fbc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_125b1fc3:;
  /* 125b1fc3 jmp 0x125b1fce */
  goto L_125b1fce;
L_125b1fc5:;
  /* 125b1fc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b1fc8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1fcb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125b1fce:;
  /* 125b1fce jmp 0x125b1f65 */
  goto L_125b1f65;
L_125b1fd0:;
  /* 125b1fd0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1fd4 je 0x125b1ffb */
  if (C.zf) goto L_125b1ffb;
  /* 125b1fd6 call 0x125b21f0 */
  push32(0x125b1fdbu); f_125b21f0();
  /* 125b1fdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b1fde push 2 */
  push32((uint32_t)(0x2u));
  /* 125b1fe0 mov ecx, dword ptr [0x125d24dc] */
  ECX = (r32((uint32_t)(0x125d24dc)));
  /* 125b1fe6 push ecx */
  push32((uint32_t)(ECX));
  /* 125b1fe7 call 0x125a8ba0 */
  push32(0x125b1fecu); f_125a8ba0();
  /* 125b1fec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b1fef mov dword ptr [0x125d24dc], 0 */
  w32((uint32_t)(0x125d24dc), (0x0u));
  /* 125b1ff9 jmp 0x125b2021 */
  goto L_125b2021;
L_125b1ffb:;
  /* 125b1ffb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b1fff je 0x125b200e */
  if (C.zf) goto L_125b200e;
  /* 125b2001 call 0x125b21f0 */
  push32(0x125b2006u); f_125b21f0();
  /* 125b2006 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 125b200c jmp 0x125b2018 */
  goto L_125b2018;
L_125b200e:;
  /* 125b200e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_125b2018:;
  /* 125b2018 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 125b201e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125b2021:;
  /* 125b2021 jmp 0x125b202b */
  goto L_125b202b;
L_125b2023:;
  /* 125b2023 call 0x125b21f0 */
  push32(0x125b2028u); f_125b21f0();
  /* 125b2028 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125b202b:;
  /* 125b202b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b202f je 0x125b2048 */
  if (C.zf) goto L_125b2048;
  /* 125b2031 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125b2033 call 0x125abbb0 */
  push32(0x125b2038u); f_125abbb0();
  /* 125b2038 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b203b mov eax, dword ptr [0x125d3c5c] */
  EAX = (r32((uint32_t)(0x125d3c5c)));
  /* 125b2040 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b2043 mov dword ptr [0x125d3c5c], eax */
  w32((uint32_t)(0x125d3c5c), (EAX));
L_125b2048:;
  /* 125b2048 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125b204b:;
  /* 125b204b mov esp, ebp */
  ESP = (EBP);
  /* 125b204d pop ebp */
  EBP = (pop32());
  /* 125b204e ret  */
  ESPCHK(0x125b1c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012050 @ 0x125b2050 (403 bytes, 117 insns) */
void f_125b2050(void) {
  FTRACE(0x125b2050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b2050 push ebp */
  push32((uint32_t)(EBP));
  /* 125b2051 mov ebp, esp */
  EBP = (ESP);
  /* 125b2053 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b2059 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b205c push eax */
  push32((uint32_t)(EAX));
  /* 125b205d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 125b2063 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2064 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 125b206a push edx */
  push32((uint32_t)(EDX));
  /* 125b206b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 125b2071 push eax */
  push32((uint32_t)(EAX));
  /* 125b2072 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b2075 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2076 call 0x125b22f0 */
  push32(0x125b207bu); f_125b22f0();
  /* 125b207b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b207e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b2080 jne 0x125b2089 */
  if (!C.zf) goto L_125b2089;
  /* 125b2082 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b2084 jmp 0x125b21df */
  goto L_125b21df;
L_125b2089:;
  /* 125b2089 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 125b208e push 0x125cf788 */
  push32((uint32_t)(0x125cf788u));
  /* 125b2093 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2095 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 125b209b push edx */
  push32((uint32_t)(EDX));
  /* 125b209c call 0x125aaf40 */
  push32(0x125b20a1u); f_125aaf40();
  /* 125b20a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b20a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b20a7 push eax */
  push32((uint32_t)(EAX));
  /* 125b20a8 call 0x125a8110 */
  push32(0x125b20adu); f_125a8110();
  /* 125b20ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b20b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b20b3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b20b7 jne 0x125b20c0 */
  if (!C.zf) goto L_125b20c0;
  /* 125b20b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b20bb jmp 0x125b21df */
  goto L_125b21df;
L_125b20c0:;
  /* 125b20c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b20c3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b20c6 mov ecx, dword ptr [eax + 0x125d24dc] */
  ECX = (r32((uint32_t)(EAX + 0x125d24dc)));
  /* 125b20cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b20cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b20d2 mov eax, dword ptr [edx*4 + 0x125d3ad8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x125d3ad8)));
  /* 125b20d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b20dc push 6 */
  push32((uint32_t)(0x6u));
  /* 125b20de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b20e1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b20e4 add ecx, 0x125d3b28 */
  { uint32_t _a=(ECX),_b=(0x125d3b28u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b20ea push ecx */
  push32((uint32_t)(ECX));
  /* 125b20eb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 125b20ee push edx */
  push32((uint32_t)(EDX));
  /* 125b20ef call 0x125ae9f0 */
  push32(0x125b20f4u); f_125ae9f0();
  /* 125b20f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b20f7 mov eax, dword ptr [0x125d3af0] */
  EAX = (r32((uint32_t)(0x125d3af0)));
  /* 125b20fc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125b20ff lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 125b2105 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2106 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b2109 push edx */
  push32((uint32_t)(EDX));
  /* 125b210a call 0x125ab0c0 */
  push32(0x125b210fu); f_125ab0c0();
  /* 125b210f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2112 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2115 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b2118 mov dword ptr [ecx + 0x125d24dc], eax */
  w32((uint32_t)(ECX + 0x125d24dc), (EAX));
  /* 125b211e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 125b2124 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125b212a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b212d mov dword ptr [eax*4 + 0x125d3ad8], edx */
  w32((uint32_t)(EAX*4 + 0x125d3ad8), (EDX));
  /* 125b2134 push 6 */
  push32((uint32_t)(0x6u));
  /* 125b2136 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 125b213c push ecx */
  push32((uint32_t)(ECX));
  /* 125b213d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2140 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b2143 add edx, 0x125d3b28 */
  { uint32_t _a=(EDX),_b=(0x125d3b28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2149 push edx */
  push32((uint32_t)(EDX));
  /* 125b214a call 0x125ae9f0 */
  push32(0x125b214fu); f_125ae9f0();
  /* 125b214f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2152 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b2156 jne 0x125b2163 */
  if (!C.zf) goto L_125b2163;
  /* 125b2158 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125b215e mov dword ptr [0x125d3af0], eax */
  w32((uint32_t)(0x125d3af0), (EAX));
L_125b2163:;
  /* 125b2163 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b2167 jne 0x125b2175 */
  if (!C.zf) goto L_125b2175;
  /* 125b2169 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125b216f mov dword ptr [0x125d3af4], ecx */
  w32((uint32_t)(0x125d3af4), (ECX));
L_125b2175:;
  /* 125b2175 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2178 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b217b call dword ptr [edx + 0x125d24e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x125d24e0))), 0x125b2181u);
  /* 125b2181 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b2183 je 0x125b21bc */
  if (C.zf) goto L_125b21bc;
  /* 125b2185 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2188 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b218b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b218e mov dword ptr [eax + 0x125d24dc], ecx */
  w32((uint32_t)(EAX + 0x125d24dc), (ECX));
  /* 125b2194 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2196 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b2199 push edx */
  push32((uint32_t)(EDX));
  /* 125b219a call 0x125a8ba0 */
  push32(0x125b219fu); f_125a8ba0();
  /* 125b219f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b21a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b21a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b21a8 mov dword ptr [eax*4 + 0x125d3ad8], ecx */
  w32((uint32_t)(EAX*4 + 0x125d3ad8), (ECX));
  /* 125b21af mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b21b2 mov dword ptr [0x125d3af0], edx */
  w32((uint32_t)(0x125d3af0), (EDX));
  /* 125b21b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b21ba jmp 0x125b21df */
  goto L_125b21df;
L_125b21bc:;
  /* 125b21bc cmp dword ptr [ebp - 0xc], 0x125d23c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x125d23c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b21c3 je 0x125b21d3 */
  if (C.zf) goto L_125b21d3;
  /* 125b21c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b21c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b21ca push eax */
  push32((uint32_t)(EAX));
  /* 125b21cb call 0x125a8ba0 */
  push32(0x125b21d0u); f_125a8ba0();
  /* 125b21d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b21d3:;
  /* 125b21d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b21d6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b21d9 mov eax, dword ptr [ecx + 0x125d24dc] */
  EAX = (r32((uint32_t)(ECX + 0x125d24dc)));
L_125b21df:;
  /* 125b21df mov esp, ebp */
  ESP = (EBP);
  /* 125b21e1 pop ebp */
  EBP = (pop32());
  /* 125b21e2 ret  */
  ESPCHK(0x125b2050u, _esp0);
  ESP += 4; return;
}

/* FUN_100121f0 @ 0x125b21f0 (256 bytes, 72 insns) */
void f_125b21f0(void) {
  FTRACE(0x125b21f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b21f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b21f1 mov ebp, esp */
  EBP = (ESP);
  /* 125b21f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b21f6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 125b21fd cmp dword ptr [0x125d24dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d24dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b2204 jne 0x125b2224 */
  if (!C.zf) goto L_125b2224;
  /* 125b2206 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 125b220b push 0x125cf788 */
  push32((uint32_t)(0x125cf788u));
  /* 125b2210 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2212 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 125b2217 call 0x125a8110 */
  push32(0x125b221cu); f_125a8110();
  /* 125b221c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b221f mov dword ptr [0x125d24dc], eax */
  w32((uint32_t)(0x125d24dc), (EAX));
L_125b2224:;
  /* 125b2224 mov eax, dword ptr [0x125d24dc] */
  EAX = (r32((uint32_t)(0x125d24dc)));
  /* 125b2229 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125b222c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125b2233 jmp 0x125b223e */
  goto L_125b223e;
L_125b2235:;
  /* 125b2235 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2238 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b223b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125b223e:;
  /* 125b223e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2241 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b2244 mov eax, dword ptr [edx + 0x125d24dc] */
  EAX = (r32((uint32_t)(EDX + 0x125d24dc)));
  /* 125b224a push eax */
  push32((uint32_t)(EAX));
  /* 125b224b push 0x125cf794 */
  push32((uint32_t)(0x125cf794u));
  /* 125b2250 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2253 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b2256 mov edx, dword ptr [ecx + 0x125d24d8] */
  EDX = (r32((uint32_t)(ECX + 0x125d24d8)));
  /* 125b225c push edx */
  push32((uint32_t)(EDX));
  /* 125b225d push 3 */
  push32((uint32_t)(0x3u));
  /* 125b225f mov eax, dword ptr [0x125d24dc] */
  EAX = (r32((uint32_t)(0x125d24dc)));
  /* 125b2264 push eax */
  push32((uint32_t)(EAX));
  /* 125b2265 call 0x125b2490 */
  push32(0x125b226au); f_125b2490();
  /* 125b226a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b226d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b2271 jge 0x125b22b9 */
  if ((C.sf==C.of)) goto L_125b22b9;
  /* 125b2273 push 0x125cf780 */
  push32((uint32_t)(0x125cf780u));
  /* 125b2278 mov ecx, dword ptr [0x125d24dc] */
  ECX = (r32((uint32_t)(0x125d24dc)));
  /* 125b227e push ecx */
  push32((uint32_t)(ECX));
  /* 125b227f call 0x125ab0d0 */
  push32(0x125b2284u); f_125ab0d0();
  /* 125b2284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2287 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b228a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b228d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b2290 mov eax, dword ptr [edx + 0x125d24dc] */
  EAX = (r32((uint32_t)(EDX + 0x125d24dc)));
  /* 125b2296 push eax */
  push32((uint32_t)(EAX));
  /* 125b2297 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b229a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b229d mov edx, dword ptr [ecx + 0x125d24dc] */
  EDX = (r32((uint32_t)(ECX + 0x125d24dc)));
  /* 125b22a3 push edx */
  push32((uint32_t)(EDX));
  /* 125b22a4 call 0x125b3da0 */
  push32(0x125b22a9u); f_125b3da0();
  /* 125b22a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b22ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b22ae je 0x125b22b7 */
  if (C.zf) goto L_125b22b7;
  /* 125b22b0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_125b22b7:;
  /* 125b22b7 jmp 0x125b22e7 */
  goto L_125b22e7;
L_125b22b9:;
  /* 125b22b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b22bd jne 0x125b22c6 */
  if (!C.zf) goto L_125b22c6;
  /* 125b22bf mov eax, dword ptr [0x125d24dc] */
  EAX = (r32((uint32_t)(0x125d24dc)));
  /* 125b22c4 jmp 0x125b22ec */
  goto L_125b22ec;
L_125b22c6:;
  /* 125b22c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b22c8 mov eax, dword ptr [0x125d24dc] */
  EAX = (r32((uint32_t)(0x125d24dc)));
  /* 125b22cd push eax */
  push32((uint32_t)(EAX));
  /* 125b22ce call 0x125a8ba0 */
  push32(0x125b22d3u); f_125a8ba0();
  /* 125b22d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b22d6 mov dword ptr [0x125d24dc], 0 */
  w32((uint32_t)(0x125d24dc), (0x0u));
  /* 125b22e0 mov eax, dword ptr [0x125d24f4] */
  EAX = (r32((uint32_t)(0x125d24f4)));
  /* 125b22e5 jmp 0x125b22ec */
  goto L_125b22ec;
L_125b22e7:;
  /* 125b22e7 jmp 0x125b2235 */
  goto L_125b2235;
L_125b22ec:;
  /* 125b22ec mov esp, ebp */
  ESP = (EBP);
  /* 125b22ee pop ebp */
  EBP = (pop32());
  /* 125b22ef ret  */
  ESPCHK(0x125b21f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100122f0 @ 0x125b22f0 (388 bytes, 115 insns) */
void f_125b22f0(void) {
  FTRACE(0x125b22f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b22f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b22f1 mov ebp, esp */
  EBP = (ESP);
  /* 125b22f3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b22f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b22fd jne 0x125b2306 */
  if (!C.zf) goto L_125b2306;
  /* 125b22ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b2301 jmp 0x125b2470 */
  goto L_125b2470;
L_125b2306:;
  /* 125b2306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2309 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b230c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b230f jne 0x125b2360 */
  if (!C.zf) goto L_125b2360;
  /* 125b2311 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2314 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125b2318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b231a jne 0x125b2360 */
  if (!C.zf) goto L_125b2360;
  /* 125b231c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b231f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 125b2322 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b2325 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 125b2329 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b232d je 0x125b2349 */
  if (C.zf) goto L_125b2349;
  /* 125b232f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b2332 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 125b2337 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b233a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 125b2340 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b2343 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_125b2349:;
  /* 125b2349 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b234d je 0x125b2358 */
  if (C.zf) goto L_125b2358;
  /* 125b234f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b2352 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_125b2358:;
  /* 125b2358 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b235b jmp 0x125b2470 */
  goto L_125b2470;
L_125b2360:;
  /* 125b2360 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2363 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2364 push 0x125d2450 */
  push32((uint32_t)(0x125d2450u));
  /* 125b2369 call 0x125b3da0 */
  push32(0x125b236eu); f_125b3da0();
  /* 125b236e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b2373 je 0x125b2428 */
  if (C.zf) goto L_125b2428;
  /* 125b2379 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b237c push edx */
  push32((uint32_t)(EDX));
  /* 125b237d push 0x125d23cc */
  push32((uint32_t)(0x125d23ccu));
  /* 125b2382 call 0x125b3da0 */
  push32(0x125b2387u); f_125b3da0();
  /* 125b2387 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b238a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b238c je 0x125b2428 */
  if (C.zf) goto L_125b2428;
  /* 125b2392 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2395 push eax */
  push32((uint32_t)(EAX));
  /* 125b2396 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 125b239c push ecx */
  push32((uint32_t)(ECX));
  /* 125b239d call 0x125b24e0 */
  push32(0x125b23a2u); f_125b24e0();
  /* 125b23a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b23a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b23a7 je 0x125b23b0 */
  if (C.zf) goto L_125b23b0;
  /* 125b23a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b23ab jmp 0x125b2470 */
  goto L_125b2470;
L_125b23b0:;
  /* 125b23b0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 125b23b6 push edx */
  push32((uint32_t)(EDX));
  /* 125b23b7 push 0x125d3b00 */
  push32((uint32_t)(0x125d3b00u));
  /* 125b23bc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 125b23c2 push eax */
  push32((uint32_t)(EAX));
  /* 125b23c3 call 0x125b3ef0 */
  push32(0x125b23c8u); f_125b3ef0();
  /* 125b23c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b23cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b23cd jne 0x125b23d6 */
  if (!C.zf) goto L_125b23d6;
  /* 125b23cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b23d1 jmp 0x125b2470 */
  goto L_125b2470;
L_125b23d6:;
  /* 125b23d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b23d8 mov cx, word ptr [0x125d3b04] */
  CX = (r16((uint32_t)(0x125d3b04)));
  /* 125b23df mov dword ptr [0x125d3b08], ecx */
  w32((uint32_t)(0x125d3b08), (ECX));
  /* 125b23e5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 125b23eb push edx */
  push32((uint32_t)(EDX));
  /* 125b23ec push 0x125d2450 */
  push32((uint32_t)(0x125d2450u));
  /* 125b23f1 call 0x125b2640 */
  push32(0x125b23f6u); f_125b2640();
  /* 125b23f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b23f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b23fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b23ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b2401 je 0x125b2416 */
  if (C.zf) goto L_125b2416;
  /* 125b2403 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2406 push edx */
  push32((uint32_t)(EDX));
  /* 125b2407 push 0x125d23cc */
  push32((uint32_t)(0x125d23ccu));
  /* 125b240c call 0x125ab0c0 */
  push32(0x125b2411u); f_125ab0c0();
  /* 125b2411 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2414 jmp 0x125b2428 */
  goto L_125b2428;
L_125b2416:;
  /* 125b2416 push 0x125d2450 */
  push32((uint32_t)(0x125d2450u));
  /* 125b241b push 0x125d23cc */
  push32((uint32_t)(0x125d23ccu));
  /* 125b2420 call 0x125ab0c0 */
  push32(0x125b2425u); f_125ab0c0();
  /* 125b2425 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b2428:;
  /* 125b2428 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b242c je 0x125b2441 */
  if (C.zf) goto L_125b2441;
  /* 125b242e push 6 */
  push32((uint32_t)(0x6u));
  /* 125b2430 push 0x125d3b00 */
  push32((uint32_t)(0x125d3b00u));
  /* 125b2435 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b2438 push eax */
  push32((uint32_t)(EAX));
  /* 125b2439 call 0x125ae9f0 */
  push32(0x125b243eu); f_125ae9f0();
  /* 125b243e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b2441:;
  /* 125b2441 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b2445 je 0x125b245a */
  if (C.zf) goto L_125b245a;
  /* 125b2447 push 4 */
  push32((uint32_t)(0x4u));
  /* 125b2449 push 0x125d3b08 */
  push32((uint32_t)(0x125d3b08u));
  /* 125b244e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b2451 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2452 call 0x125ae9f0 */
  push32(0x125b2457u); f_125ae9f0();
  /* 125b2457 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b245a:;
  /* 125b245a push 0x125d2450 */
  push32((uint32_t)(0x125d2450u));
  /* 125b245f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b2462 push edx */
  push32((uint32_t)(EDX));
  /* 125b2463 call 0x125ab0c0 */
  push32(0x125b2468u); f_125ab0c0();
  /* 125b2468 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b246b mov eax, 0x125d2450 */
  EAX = (0x125d2450u);
L_125b2470:;
  /* 125b2470 mov esp, ebp */
  ESP = (EBP);
  /* 125b2472 pop ebp */
  EBP = (pop32());
  /* 125b2473 ret  */
  ESPCHK(0x125b22f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012480 @ 0x125b2480 (7 bytes, 5 insns) */
void f_125b2480(void) {
  FTRACE(0x125b2480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b2480 push ebp */
  push32((uint32_t)(EBP));
  /* 125b2481 mov ebp, esp */
  EBP = (ESP);
  /* 125b2483 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b2485 pop ebp */
  EBP = (pop32());
  /* 125b2486 ret  */
  ESPCHK(0x125b2480u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x125b2490 (79 bytes, 28 insns) */
void f_125b2490(void) {
  FTRACE(0x125b2490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b2490 push ebp */
  push32((uint32_t)(EBP));
  /* 125b2491 mov ebp, esp */
  EBP = (ESP);
  /* 125b2493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b2496 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 125b2499 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b249c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125b24a3 jmp 0x125b24ae */
  goto L_125b24ae;
L_125b24a5:;
  /* 125b24a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b24a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b24ab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125b24ae:;
  /* 125b24ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b24b1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b24b4 jge 0x125b24d4 */
  if ((C.sf==C.of)) goto L_125b24d4;
  /* 125b24b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b24b9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b24bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b24bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b24c2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 125b24c5 push edx */
  push32((uint32_t)(EDX));
  /* 125b24c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b24c9 push eax */
  push32((uint32_t)(EAX));
  /* 125b24ca call 0x125ab0d0 */
  push32(0x125b24cfu); f_125ab0d0();
  /* 125b24cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b24d2 jmp 0x125b24a5 */
  goto L_125b24a5;
L_125b24d4:;
  /* 125b24d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b24db mov esp, ebp */
  ESP = (EBP);
  /* 125b24dd pop ebp */
  EBP = (pop32());
  /* 125b24de ret  */
  ESPCHK(0x125b2490u, _esp0);
  ESP += 4; return;
}

/* FUN_100124e0 @ 0x125b24e0 (349 bytes, 122 insns) */
void f_125b24e0(void) {
  FTRACE(0x125b24e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b24e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b24e1 mov ebp, esp */
  EBP = (ESP);
  /* 125b24e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b24e6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 125b24eb push 0 */
  push32((uint32_t)(0x0u));
  /* 125b24ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b24f0 push eax */
  push32((uint32_t)(EAX));
  /* 125b24f1 call 0x125abe80 */
  push32(0x125b24f6u); f_125abe80();
  /* 125b24f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b24f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b24fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b24ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b2501 jne 0x125b250a */
  if (!C.zf) goto L_125b250a;
  /* 125b2503 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b2505 jmp 0x125b2639 */
  goto L_125b2639;
L_125b250a:;
  /* 125b250a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b250d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b2510 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b2513 jne 0x125b2540 */
  if (!C.zf) goto L_125b2540;
  /* 125b2515 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b2518 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125b251c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b251e je 0x125b2540 */
  if (C.zf) goto L_125b2540;
  /* 125b2520 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b2523 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2526 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2527 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b252a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2530 push edx */
  push32((uint32_t)(EDX));
  /* 125b2531 call 0x125ab0c0 */
  push32(0x125b2536u); f_125ab0c0();
  /* 125b2536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2539 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b253b jmp 0x125b2639 */
  goto L_125b2639;
L_125b2540:;
  /* 125b2540 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b2547 jmp 0x125b2552 */
  goto L_125b2552;
L_125b2549:;
  /* 125b2549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b254c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b254f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125b2552:;
  /* 125b2552 push 0x125cf798 */
  push32((uint32_t)(0x125cf798u));
  /* 125b2557 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b255a push ecx */
  push32((uint32_t)(ECX));
  /* 125b255b call 0x125b3e30 */
  push32(0x125b2560u); f_125b3e30();
  /* 125b2560 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2563 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b2566 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b256a jne 0x125b2574 */
  if (!C.zf) goto L_125b2574;
  /* 125b256c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b256f jmp 0x125b2639 */
  goto L_125b2639;
L_125b2574:;
  /* 125b2574 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b2577 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b257a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b257c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 125b257f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b2583 jne 0x125b25aa */
  if (!C.zf) goto L_125b25aa;
  /* 125b2585 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b2589 jge 0x125b25aa */
  if ((C.sf==C.of)) goto L_125b25aa;
  /* 125b258b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125b258f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b2592 je 0x125b25aa */
  if (C.zf) goto L_125b25aa;
  /* 125b2594 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2597 push edx */
  push32((uint32_t)(EDX));
  /* 125b2598 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b259b push eax */
  push32((uint32_t)(EAX));
  /* 125b259c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b259f push ecx */
  push32((uint32_t)(ECX));
  /* 125b25a0 call 0x125ab930 */
  push32(0x125b25a5u); f_125ab930();
  /* 125b25a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b25a8 jmp 0x125b2610 */
  goto L_125b2610;
L_125b25aa:;
  /* 125b25aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b25ae jne 0x125b25d8 */
  if (!C.zf) goto L_125b25d8;
  /* 125b25b0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b25b4 jge 0x125b25d8 */
  if ((C.sf==C.of)) goto L_125b25d8;
  /* 125b25b6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125b25ba cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b25bd je 0x125b25d8 */
  if (C.zf) goto L_125b25d8;
  /* 125b25bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b25c2 push eax */
  push32((uint32_t)(EAX));
  /* 125b25c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b25c6 push ecx */
  push32((uint32_t)(ECX));
  /* 125b25c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b25ca add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b25cd push edx */
  push32((uint32_t)(EDX));
  /* 125b25ce call 0x125ab930 */
  push32(0x125b25d3u); f_125ab930();
  /* 125b25d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b25d6 jmp 0x125b2610 */
  goto L_125b2610;
L_125b25d8:;
  /* 125b25d8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b25dc jne 0x125b260b */
  if (!C.zf) goto L_125b260b;
  /* 125b25de movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125b25e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b25e4 je 0x125b25ef */
  if (C.zf) goto L_125b25ef;
  /* 125b25e6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125b25ea cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b25ed jne 0x125b260b */
  if (!C.zf) goto L_125b260b;
L_125b25ef:;
  /* 125b25ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b25f2 push edx */
  push32((uint32_t)(EDX));
  /* 125b25f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b25f6 push eax */
  push32((uint32_t)(EAX));
  /* 125b25f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b25fa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2600 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2601 call 0x125ab930 */
  push32(0x125b2606u); f_125ab930();
  /* 125b2606 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2609 jmp 0x125b2610 */
  goto L_125b2610;
L_125b260b:;
  /* 125b260b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b260e jmp 0x125b2639 */
  goto L_125b2639;
L_125b2610:;
  /* 125b2610 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125b2614 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b2617 jne 0x125b261b */
  if (!C.zf) goto L_125b261b;
  /* 125b2619 jmp 0x125b2637 */
  goto L_125b2637;
L_125b261b:;
  /* 125b261b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125b261f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b2621 jne 0x125b2625 */
  if (!C.zf) goto L_125b2625;
  /* 125b2623 jmp 0x125b2637 */
  goto L_125b2637;
L_125b2625:;
  /* 125b2625 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2628 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b262b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 125b262f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 125b2632 jmp 0x125b2549 */
  goto L_125b2549;
L_125b2637:;
  /* 125b2637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b2639:;
  /* 125b2639 mov esp, ebp */
  ESP = (EBP);
  /* 125b263b pop ebp */
  EBP = (pop32());
  /* 125b263c ret  */
  ESPCHK(0x125b24e0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x125b2640 (101 bytes, 36 insns) */
void f_125b2640(void) {
  FTRACE(0x125b2640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b2640 push ebp */
  push32((uint32_t)(EBP));
  /* 125b2641 mov ebp, esp */
  EBP = (ESP);
  /* 125b2643 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b2646 push eax */
  push32((uint32_t)(EAX));
  /* 125b2647 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b264a push ecx */
  push32((uint32_t)(ECX));
  /* 125b264b call 0x125ab0c0 */
  push32(0x125b2650u); f_125ab0c0();
  /* 125b2650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2653 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b2656 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 125b265a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b265c je 0x125b2678 */
  if (C.zf) goto L_125b2678;
  /* 125b265e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b2661 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2664 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2665 push 0x125cf7a0 */
  push32((uint32_t)(0x125cf7a0u));
  /* 125b266a push 2 */
  push32((uint32_t)(0x2u));
  /* 125b266c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b266f push edx */
  push32((uint32_t)(EDX));
  /* 125b2670 call 0x125b2490 */
  push32(0x125b2675u); f_125b2490();
  /* 125b2675 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b2678:;
  /* 125b2678 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b267b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 125b2682 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b2684 je 0x125b26a3 */
  if (C.zf) goto L_125b26a3;
  /* 125b2686 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b2689 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b268f push edx */
  push32((uint32_t)(EDX));
  /* 125b2690 push 0x125cf79c */
  push32((uint32_t)(0x125cf79cu));
  /* 125b2695 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2697 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b269a push eax */
  push32((uint32_t)(EAX));
  /* 125b269b call 0x125b2490 */
  push32(0x125b26a0u); f_125b2490();
  /* 125b26a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b26a3:;
  /* 125b26a3 pop ebp */
  EBP = (pop32());
  /* 125b26a4 ret  */
  ESPCHK(0x125b2640u, _esp0);
  ESP += 4; return;
}

/* FUN_100126b0 @ 0x125b26b0 (130 bytes, 50 insns) */
void f_125b26b0(void) {
  FTRACE(0x125b26b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b26b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b26b1 mov ebp, esp */
  EBP = (ESP);
  /* 125b26b3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b26b4 push ebx */
  push32((uint32_t)(EBX));
  /* 125b26b5 push esi */
  push32((uint32_t)(ESI));
  /* 125b26b6 push edi */
  push32((uint32_t)(EDI));
  /* 125b26b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125b26be:;
  /* 125b26be cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b26c2 jne 0x125b26e2 */
  if (!C.zf) goto L_125b26e2;
  /* 125b26c4 push 0x125cf7b0 */
  push32((uint32_t)(0x125cf7b0u));
  /* 125b26c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b26cb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 125b26cd push 0x125cf7a4 */
  push32((uint32_t)(0x125cf7a4u));
  /* 125b26d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b26d4 call 0x125a71d0 */
  push32(0x125b26d9u); f_125a71d0();
  /* 125b26d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b26dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b26df jne 0x125b26e2 */
  if (!C.zf) goto L_125b26e2;
  /* 125b26e1 int3  */
  x86_unimpl("int3 @ 0x125b26e1");
L_125b26e2:;
  /* 125b26e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b26e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b26e6 jne 0x125b26be */
  if (!C.zf) goto L_125b26be;
  /* 125b26e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b26eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125b26ee and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 125b26f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b26f3 je 0x125b2701 */
  if (C.zf) goto L_125b2701;
  /* 125b26f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b26f8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 125b26ff jmp 0x125b2728 */
  goto L_125b2728;
L_125b2701:;
  /* 125b2701 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2704 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2705 call 0x125b0f20 */
  push32(0x125b270au); f_125b0f20();
  /* 125b270a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b270d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2710 push edx */
  push32((uint32_t)(EDX));
  /* 125b2711 call 0x125b2740 */
  push32(0x125b2716u); f_125b2740();
  /* 125b2716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2719 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b271c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b271f push eax */
  push32((uint32_t)(EAX));
  /* 125b2720 call 0x125b0f90 */
  push32(0x125b2725u); f_125b0f90();
  /* 125b2725 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b2728:;
  /* 125b2728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b272b pop edi */
  EDI = (pop32());
  /* 125b272c pop esi */
  ESI = (pop32());
  /* 125b272d pop ebx */
  EBX = (pop32());
  /* 125b272e mov esp, ebp */
  ESP = (EBP);
  /* 125b2730 pop ebp */
  EBP = (pop32());
  /* 125b2731 ret  */
  ESPCHK(0x125b26b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012740 @ 0x125b2740 (190 bytes, 67 insns) */
void f_125b2740(void) {
  FTRACE(0x125b2740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b2740 push ebp */
  push32((uint32_t)(EBP));
  /* 125b2741 mov ebp, esp */
  EBP = (ESP);
  /* 125b2743 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b2746 push ebx */
  push32((uint32_t)(EBX));
  /* 125b2747 push esi */
  push32((uint32_t)(ESI));
  /* 125b2748 push edi */
  push32((uint32_t)(EDI));
  /* 125b2749 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125b2750 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2753 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125b2756:;
  /* 125b2756 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b275a jne 0x125b277a */
  if (!C.zf) goto L_125b277a;
  /* 125b275c push 0x125cf654 */
  push32((uint32_t)(0x125cf654u));
  /* 125b2761 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b2763 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 125b2765 push 0x125cf7a4 */
  push32((uint32_t)(0x125cf7a4u));
  /* 125b276a push 2 */
  push32((uint32_t)(0x2u));
  /* 125b276c call 0x125a71d0 */
  push32(0x125b2771u); f_125a71d0();
  /* 125b2771 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2774 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b2777 jne 0x125b277a */
  if (!C.zf) goto L_125b277a;
  /* 125b2779 int3  */
  x86_unimpl("int3 @ 0x125b2779");
L_125b277a:;
  /* 125b277a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b277c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b277e jne 0x125b2756 */
  if (!C.zf) goto L_125b2756;
  /* 125b2780 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b2783 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125b2786 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 125b278b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b278d je 0x125b27ea */
  if (C.zf) goto L_125b27ea;
  /* 125b278f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b2792 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2793 call 0x125b1a40 */
  push32(0x125b2798u); f_125b1a40();
  /* 125b2798 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b279b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b279e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b27a1 push edx */
  push32((uint32_t)(EDX));
  /* 125b27a2 call 0x125b4dc0 */
  push32(0x125b27a7u); f_125b4dc0();
  /* 125b27a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b27aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b27ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125b27b0 push ecx */
  push32((uint32_t)(ECX));
  /* 125b27b1 call 0x125b4c90 */
  push32(0x125b27b6u); f_125b4c90();
  /* 125b27b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b27b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b27bb jge 0x125b27c6 */
  if ((C.sf==C.of)) goto L_125b27c6;
  /* 125b27bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125b27c4 jmp 0x125b27ea */
  goto L_125b27ea;
L_125b27c6:;
  /* 125b27c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b27c9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b27cd je 0x125b27ea */
  if (C.zf) goto L_125b27ea;
  /* 125b27cf push 2 */
  push32((uint32_t)(0x2u));
  /* 125b27d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b27d4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 125b27d7 push ecx */
  push32((uint32_t)(ECX));
  /* 125b27d8 call 0x125a8ba0 */
  push32(0x125b27ddu); f_125a8ba0();
  /* 125b27dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b27e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b27e3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_125b27ea:;
  /* 125b27ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b27ed mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 125b27f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b27f7 pop edi */
  EDI = (pop32());
  /* 125b27f8 pop esi */
  ESI = (pop32());
  /* 125b27f9 pop ebx */
  EBX = (pop32());
  /* 125b27fa mov esp, ebp */
  ESP = (EBP);
  /* 125b27fc pop ebp */
  EBP = (pop32());
  /* 125b27fd ret  */
  ESPCHK(0x125b2740u, _esp0);
  ESP += 4; return;
}

/* FUN_10012800 @ 0x125b2800 (210 bytes, 63 insns) */
void f_125b2800(void) {
  FTRACE(0x125b2800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b2800 push ebp */
  push32((uint32_t)(EBP));
  /* 125b2801 mov ebp, esp */
  EBP = (ESP);
  /* 125b2803 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2807 cmp eax, dword ptr [0x125d53fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d53fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b280d jae 0x125b2831 */
  if (!C.cf) goto L_125b2831;
  /* 125b280f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2812 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b2815 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2818 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125b281b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b281e mov eax, dword ptr [ecx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125d52c0)));
  /* 125b2825 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125b282a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125b282d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b282f jne 0x125b2844 */
  if (!C.zf) goto L_125b2844;
L_125b2831:;
  /* 125b2831 call 0x125affe0 */
  push32(0x125b2836u); f_125affe0();
  /* 125b2836 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125b283c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b283f jmp 0x125b28ce */
  goto L_125b28ce;
L_125b2844:;
  /* 125b2844 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2847 push edx */
  push32((uint32_t)(EDX));
  /* 125b2848 call 0x125b1800 */
  push32(0x125b284du); f_125b1800();
  /* 125b284d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2853 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125b2856 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2859 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125b285c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b285f mov edx, dword ptr [eax*4 + 0x125d52c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125d52c0)));
  /* 125b2866 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 125b286b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 125b286e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b2870 je 0x125b28ad */
  if (C.zf) goto L_125b28ad;
  /* 125b2872 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2875 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2876 call 0x125b1680 */
  push32(0x125b287bu); f_125b1680();
  /* 125b287b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b287e push eax */
  push32((uint32_t)(EAX));
  /* 125b287f call dword ptr [0x125d62ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62ec))), 0x125b2885u);
  /* 125b2885 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b2887 jne 0x125b2894 */
  if (!C.zf) goto L_125b2894;
  /* 125b2889 call dword ptr [0x125d63b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63b4))), 0x125b288fu);
  /* 125b288f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b2892 jmp 0x125b289b */
  goto L_125b289b;
L_125b2894:;
  /* 125b2894 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125b289b:;
  /* 125b289b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b289f jne 0x125b28a3 */
  if (!C.zf) goto L_125b28a3;
  /* 125b28a1 jmp 0x125b28bf */
  goto L_125b28bf;
L_125b28a3:;
  /* 125b28a3 call 0x125afff0 */
  push32(0x125b28a8u); f_125afff0();
  /* 125b28a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b28ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125b28ad:;
  /* 125b28ad call 0x125affe0 */
  push32(0x125b28b2u); f_125affe0();
  /* 125b28b2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125b28b8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125b28bf:;
  /* 125b28bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b28c2 push eax */
  push32((uint32_t)(EAX));
  /* 125b28c3 call 0x125b1890 */
  push32(0x125b28c8u); f_125b1890();
  /* 125b28c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b28cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125b28ce:;
  /* 125b28ce mov esp, ebp */
  ESP = (EBP);
  /* 125b28d0 pop ebp */
  EBP = (pop32());
  /* 125b28d1 ret  */
  ESPCHK(0x125b2800u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x125b28e0 (219 bytes, 64 insns) */
void f_125b28e0(void) {
  FTRACE(0x125b28e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b28e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b28e1 mov ebp, esp */
  EBP = (ESP);
  /* 125b28e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b28e4 cmp dword ptr [0x125d3aec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3aec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b28eb je 0x125b2981 */
  if (C.zf) goto L_125b2981;
  /* 125b28f1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 125b28f3 push 0x125cf7c0 */
  push32((uint32_t)(0x125cf7c0u));
  /* 125b28f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b28fa push 0xac */
  push32((uint32_t)(0xacu));
  /* 125b28ff push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2901 call 0x125a8520 */
  push32(0x125b2906u); f_125a8520();
  /* 125b2906 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2909 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b290c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b2910 jne 0x125b291c */
  if (!C.zf) goto L_125b291c;
  /* 125b2912 mov eax, 1 */
  EAX = (0x1u);
  /* 125b2917 jmp 0x125b29b7 */
  goto L_125b29b7;
L_125b291c:;
  /* 125b291c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b291f push eax */
  push32((uint32_t)(EAX));
  /* 125b2920 call 0x125b29c0 */
  push32(0x125b2925u); f_125b29c0();
  /* 125b2925 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2928 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b292a je 0x125b294d */
  if (C.zf) goto L_125b294d;
  /* 125b292c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b292f push ecx */
  push32((uint32_t)(ECX));
  /* 125b2930 call 0x125b2f50 */
  push32(0x125b2935u); f_125b2f50();
  /* 125b2935 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2938 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b293a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b293d push edx */
  push32((uint32_t)(EDX));
  /* 125b293e call 0x125a8ba0 */
  push32(0x125b2943u); f_125a8ba0();
  /* 125b2943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2946 mov eax, 1 */
  EAX = (0x1u);
  /* 125b294b jmp 0x125b29b7 */
  goto L_125b29b7;
L_125b294d:;
  /* 125b294d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2950 mov dword ptr [0x125d2c98], eax */
  w32((uint32_t)(0x125d2c98), (EAX));
  /* 125b2955 mov ecx, dword ptr [0x125d3b0c] */
  ECX = (r32((uint32_t)(0x125d3b0c)));
  /* 125b295b push ecx */
  push32((uint32_t)(ECX));
  /* 125b295c call 0x125b2f50 */
  push32(0x125b2961u); f_125b2f50();
  /* 125b2961 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2964 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2966 mov edx, dword ptr [0x125d3b0c] */
  EDX = (r32((uint32_t)(0x125d3b0c)));
  /* 125b296c push edx */
  push32((uint32_t)(EDX));
  /* 125b296d call 0x125a8ba0 */
  push32(0x125b2972u); f_125a8ba0();
  /* 125b2972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2975 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2978 mov dword ptr [0x125d3b0c], eax */
  w32((uint32_t)(0x125d3b0c), (EAX));
  /* 125b297d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b297f jmp 0x125b29b7 */
  goto L_125b29b7;
L_125b2981:;
  /* 125b2981 mov dword ptr [0x125d2c98], 0x125d2ca0 */
  w32((uint32_t)(0x125d2c98), (0x125d2ca0u));
  /* 125b298b mov ecx, dword ptr [0x125d3b0c] */
  ECX = (r32((uint32_t)(0x125d3b0c)));
  /* 125b2991 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2992 call 0x125b2f50 */
  push32(0x125b2997u); f_125b2f50();
  /* 125b2997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b299a push 2 */
  push32((uint32_t)(0x2u));
  /* 125b299c mov edx, dword ptr [0x125d3b0c] */
  EDX = (r32((uint32_t)(0x125d3b0c)));
  /* 125b29a2 push edx */
  push32((uint32_t)(EDX));
  /* 125b29a3 call 0x125a8ba0 */
  push32(0x125b29a8u); f_125a8ba0();
  /* 125b29a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b29ab mov dword ptr [0x125d3b0c], 0 */
  w32((uint32_t)(0x125d3b0c), (0x0u));
  /* 125b29b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b29b7:;
  /* 125b29b7 mov esp, ebp */
  ESP = (EBP);
  /* 125b29b9 pop ebp */
  EBP = (pop32());
  /* 125b29ba ret  */
  ESPCHK(0x125b28e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100129c0 @ 0x125b29c0 (1423 bytes, 533 insns) */
void f_125b29c0(void) {
  FTRACE(0x125b29c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b29c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b29c1 mov ebp, esp */
  EBP = (ESP);
  /* 125b29c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b29c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125b29cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b29cf mov ax, word ptr [0x125d3b46] */
  AX = (r16((uint32_t)(0x125d3b46)));
  /* 125b29d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b29d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b29da mov cx, word ptr [0x125d3b48] */
  CX = (r16((uint32_t)(0x125d3b48)));
  /* 125b29e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b29e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b29e8 jne 0x125b29f2 */
  if (!C.zf) goto L_125b29f2;
  /* 125b29ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b29ed jmp 0x125b2f4b */
  goto L_125b2f4b;
L_125b29f2:;
  /* 125b29f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b29f5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b29f8 push edx */
  push32((uint32_t)(EDX));
  /* 125b29f9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 125b29fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b29fe push eax */
  push32((uint32_t)(EAX));
  /* 125b29ff push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2a01 call 0x125b62d0 */
  push32(0x125b2a06u); f_125b62d0();
  /* 125b2a06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2a09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2a0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2a0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2a11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2a14 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2a17 push edx */
  push32((uint32_t)(EDX));
  /* 125b2a18 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 125b2a1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2a1d push eax */
  push32((uint32_t)(EAX));
  /* 125b2a1e push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2a20 call 0x125b62d0 */
  push32(0x125b2a25u); f_125b62d0();
  /* 125b2a25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2a28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2a2b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2a2d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2a30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2a33 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2a36 push edx */
  push32((uint32_t)(EDX));
  /* 125b2a37 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 125b2a39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2a3c push eax */
  push32((uint32_t)(EAX));
  /* 125b2a3d push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2a3f call 0x125b62d0 */
  push32(0x125b2a44u); f_125b62d0();
  /* 125b2a44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2a47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2a4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2a4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2a4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2a52 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2a55 push edx */
  push32((uint32_t)(EDX));
  /* 125b2a56 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 125b2a58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2a5b push eax */
  push32((uint32_t)(EAX));
  /* 125b2a5c push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2a5e call 0x125b62d0 */
  push32(0x125b2a63u); f_125b62d0();
  /* 125b2a63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2a66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2a69 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2a6b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2a6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2a71 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2a74 push edx */
  push32((uint32_t)(EDX));
  /* 125b2a75 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 125b2a77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2a7a push eax */
  push32((uint32_t)(EAX));
  /* 125b2a7b push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2a7d call 0x125b62d0 */
  push32(0x125b2a82u); f_125b62d0();
  /* 125b2a82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2a85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2a88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2a8a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2a8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2a90 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2a93 push edx */
  push32((uint32_t)(EDX));
  /* 125b2a94 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 125b2a96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2a99 push eax */
  push32((uint32_t)(EAX));
  /* 125b2a9a push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2a9c call 0x125b62d0 */
  push32(0x125b2aa1u); f_125b62d0();
  /* 125b2aa1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2aa4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2aa7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2aa9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2aac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2aaf push edx */
  push32((uint32_t)(EDX));
  /* 125b2ab0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 125b2ab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2ab5 push eax */
  push32((uint32_t)(EAX));
  /* 125b2ab6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2ab8 call 0x125b62d0 */
  push32(0x125b2abdu); f_125b62d0();
  /* 125b2abd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2ac0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2ac3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2ac5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2ac8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2acb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2ace push edx */
  push32((uint32_t)(EDX));
  /* 125b2acf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 125b2ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2ad4 push eax */
  push32((uint32_t)(EAX));
  /* 125b2ad5 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2ad7 call 0x125b62d0 */
  push32(0x125b2adcu); f_125b62d0();
  /* 125b2adc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2adf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2ae2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2ae4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2ae7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2aea add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2aed push edx */
  push32((uint32_t)(EDX));
  /* 125b2aee push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 125b2af0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2af3 push eax */
  push32((uint32_t)(EAX));
  /* 125b2af4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2af6 call 0x125b62d0 */
  push32(0x125b2afbu); f_125b62d0();
  /* 125b2afb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2afe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2b01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2b03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2b06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2b09 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2b0c push edx */
  push32((uint32_t)(EDX));
  /* 125b2b0d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 125b2b0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2b12 push eax */
  push32((uint32_t)(EAX));
  /* 125b2b13 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2b15 call 0x125b62d0 */
  push32(0x125b2b1au); f_125b62d0();
  /* 125b2b1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2b1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2b20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2b22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2b25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2b28 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2b2b push edx */
  push32((uint32_t)(EDX));
  /* 125b2b2c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 125b2b2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2b31 push eax */
  push32((uint32_t)(EAX));
  /* 125b2b32 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2b34 call 0x125b62d0 */
  push32(0x125b2b39u); f_125b62d0();
  /* 125b2b39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2b3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2b3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2b41 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2b44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2b47 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2b4a push edx */
  push32((uint32_t)(EDX));
  /* 125b2b4b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 125b2b4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2b50 push eax */
  push32((uint32_t)(EAX));
  /* 125b2b51 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2b53 call 0x125b62d0 */
  push32(0x125b2b58u); f_125b62d0();
  /* 125b2b58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2b5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2b5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2b60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2b63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2b66 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2b69 push edx */
  push32((uint32_t)(EDX));
  /* 125b2b6a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 125b2b6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2b6f push eax */
  push32((uint32_t)(EAX));
  /* 125b2b70 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2b72 call 0x125b62d0 */
  push32(0x125b2b77u); f_125b62d0();
  /* 125b2b77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2b7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2b7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2b7f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2b82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2b85 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2b88 push edx */
  push32((uint32_t)(EDX));
  /* 125b2b89 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125b2b8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2b8e push eax */
  push32((uint32_t)(EAX));
  /* 125b2b8f push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2b91 call 0x125b62d0 */
  push32(0x125b2b96u); f_125b62d0();
  /* 125b2b96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2b99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2b9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2b9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2ba1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2ba4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2ba7 push edx */
  push32((uint32_t)(EDX));
  /* 125b2ba8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 125b2baa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2bad push eax */
  push32((uint32_t)(EAX));
  /* 125b2bae push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2bb0 call 0x125b62d0 */
  push32(0x125b2bb5u); f_125b62d0();
  /* 125b2bb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2bb8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2bbb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2bbd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2bc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2bc3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2bc6 push edx */
  push32((uint32_t)(EDX));
  /* 125b2bc7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 125b2bc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2bcc push eax */
  push32((uint32_t)(EAX));
  /* 125b2bcd push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2bcf call 0x125b62d0 */
  push32(0x125b2bd4u); f_125b62d0();
  /* 125b2bd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2bd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2bda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2bdc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2bdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2be2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2be5 push edx */
  push32((uint32_t)(EDX));
  /* 125b2be6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 125b2be8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2beb push eax */
  push32((uint32_t)(EAX));
  /* 125b2bec push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2bee call 0x125b62d0 */
  push32(0x125b2bf3u); f_125b62d0();
  /* 125b2bf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2bf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2bf9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2bfb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2bfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2c01 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2c04 push edx */
  push32((uint32_t)(EDX));
  /* 125b2c05 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 125b2c07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2c0a push eax */
  push32((uint32_t)(EAX));
  /* 125b2c0b push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2c0d call 0x125b62d0 */
  push32(0x125b2c12u); f_125b62d0();
  /* 125b2c12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2c15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2c18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2c1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2c1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2c20 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2c23 push edx */
  push32((uint32_t)(EDX));
  /* 125b2c24 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 125b2c26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2c29 push eax */
  push32((uint32_t)(EAX));
  /* 125b2c2a push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2c2c call 0x125b62d0 */
  push32(0x125b2c31u); f_125b62d0();
  /* 125b2c31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2c34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2c37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2c39 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2c3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2c3f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2c42 push edx */
  push32((uint32_t)(EDX));
  /* 125b2c43 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 125b2c45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2c48 push eax */
  push32((uint32_t)(EAX));
  /* 125b2c49 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2c4b call 0x125b62d0 */
  push32(0x125b2c50u); f_125b62d0();
  /* 125b2c50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2c53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2c56 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2c58 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2c5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2c5e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2c61 push edx */
  push32((uint32_t)(EDX));
  /* 125b2c62 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 125b2c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2c67 push eax */
  push32((uint32_t)(EAX));
  /* 125b2c68 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2c6a call 0x125b62d0 */
  push32(0x125b2c6fu); f_125b62d0();
  /* 125b2c6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2c72 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2c75 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2c77 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2c7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2c7d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2c80 push edx */
  push32((uint32_t)(EDX));
  /* 125b2c81 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 125b2c83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2c86 push eax */
  push32((uint32_t)(EAX));
  /* 125b2c87 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2c89 call 0x125b62d0 */
  push32(0x125b2c8eu); f_125b62d0();
  /* 125b2c8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2c91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2c94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2c96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2c99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2c9c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2c9f push edx */
  push32((uint32_t)(EDX));
  /* 125b2ca0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 125b2ca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2ca5 push eax */
  push32((uint32_t)(EAX));
  /* 125b2ca6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2ca8 call 0x125b62d0 */
  push32(0x125b2cadu); f_125b62d0();
  /* 125b2cad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2cb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2cb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2cb5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2cb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2cbb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2cbe push edx */
  push32((uint32_t)(EDX));
  /* 125b2cbf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 125b2cc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2cc4 push eax */
  push32((uint32_t)(EAX));
  /* 125b2cc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2cc7 call 0x125b62d0 */
  push32(0x125b2cccu); f_125b62d0();
  /* 125b2ccc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2ccf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2cd2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2cd4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2cd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2cda add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2cdd push edx */
  push32((uint32_t)(EDX));
  /* 125b2cde push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 125b2ce0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2ce3 push eax */
  push32((uint32_t)(EAX));
  /* 125b2ce4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2ce6 call 0x125b62d0 */
  push32(0x125b2cebu); f_125b62d0();
  /* 125b2ceb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2cee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2cf1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2cf3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2cf6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2cf9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2cfc push edx */
  push32((uint32_t)(EDX));
  /* 125b2cfd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 125b2cff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2d02 push eax */
  push32((uint32_t)(EAX));
  /* 125b2d03 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2d05 call 0x125b62d0 */
  push32(0x125b2d0au); f_125b62d0();
  /* 125b2d0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2d0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2d10 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2d12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2d15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2d18 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2d1b push edx */
  push32((uint32_t)(EDX));
  /* 125b2d1c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 125b2d1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2d21 push eax */
  push32((uint32_t)(EAX));
  /* 125b2d22 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2d24 call 0x125b62d0 */
  push32(0x125b2d29u); f_125b62d0();
  /* 125b2d29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2d2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2d2f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2d31 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2d34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2d37 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2d3a push edx */
  push32((uint32_t)(EDX));
  /* 125b2d3b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 125b2d3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2d40 push eax */
  push32((uint32_t)(EAX));
  /* 125b2d41 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2d43 call 0x125b62d0 */
  push32(0x125b2d48u); f_125b62d0();
  /* 125b2d48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2d4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2d4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2d50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2d53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2d56 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2d59 push edx */
  push32((uint32_t)(EDX));
  /* 125b2d5a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 125b2d5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2d5f push eax */
  push32((uint32_t)(EAX));
  /* 125b2d60 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2d62 call 0x125b62d0 */
  push32(0x125b2d67u); f_125b62d0();
  /* 125b2d67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2d6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2d6d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2d6f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2d72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2d75 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2d78 push edx */
  push32((uint32_t)(EDX));
  /* 125b2d79 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 125b2d7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2d7e push eax */
  push32((uint32_t)(EAX));
  /* 125b2d7f push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2d81 call 0x125b62d0 */
  push32(0x125b2d86u); f_125b62d0();
  /* 125b2d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2d89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2d8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2d8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2d91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2d94 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2d97 push edx */
  push32((uint32_t)(EDX));
  /* 125b2d98 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 125b2d9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2d9d push eax */
  push32((uint32_t)(EAX));
  /* 125b2d9e push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2da0 call 0x125b62d0 */
  push32(0x125b2da5u); f_125b62d0();
  /* 125b2da5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2da8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2dab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2dad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2db0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2db3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2db6 push edx */
  push32((uint32_t)(EDX));
  /* 125b2db7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 125b2db9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2dbc push eax */
  push32((uint32_t)(EAX));
  /* 125b2dbd push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2dbf call 0x125b62d0 */
  push32(0x125b2dc4u); f_125b62d0();
  /* 125b2dc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2dc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2dca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2dcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2dcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2dd2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2dd8 push edx */
  push32((uint32_t)(EDX));
  /* 125b2dd9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 125b2ddb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2dde push eax */
  push32((uint32_t)(EAX));
  /* 125b2ddf push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2de1 call 0x125b62d0 */
  push32(0x125b2de6u); f_125b62d0();
  /* 125b2de6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2de9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2dec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2dee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2df1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2df4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2dfa push edx */
  push32((uint32_t)(EDX));
  /* 125b2dfb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 125b2dfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2e00 push eax */
  push32((uint32_t)(EAX));
  /* 125b2e01 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2e03 call 0x125b62d0 */
  push32(0x125b2e08u); f_125b62d0();
  /* 125b2e08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2e0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2e0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2e10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2e13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2e16 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2e1c push edx */
  push32((uint32_t)(EDX));
  /* 125b2e1d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125b2e1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2e22 push eax */
  push32((uint32_t)(EAX));
  /* 125b2e23 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2e25 call 0x125b62d0 */
  push32(0x125b2e2au); f_125b62d0();
  /* 125b2e2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2e2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2e30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2e32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2e35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2e38 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2e3e push edx */
  push32((uint32_t)(EDX));
  /* 125b2e3f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 125b2e41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2e44 push eax */
  push32((uint32_t)(EAX));
  /* 125b2e45 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2e47 call 0x125b62d0 */
  push32(0x125b2e4cu); f_125b62d0();
  /* 125b2e4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2e4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2e52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2e54 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2e57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2e5a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2e60 push edx */
  push32((uint32_t)(EDX));
  /* 125b2e61 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 125b2e63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2e66 push eax */
  push32((uint32_t)(EAX));
  /* 125b2e67 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2e69 call 0x125b62d0 */
  push32(0x125b2e6eu); f_125b62d0();
  /* 125b2e6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2e71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2e74 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2e76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2e79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2e7c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2e82 push edx */
  push32((uint32_t)(EDX));
  /* 125b2e83 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 125b2e85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2e88 push eax */
  push32((uint32_t)(EAX));
  /* 125b2e89 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2e8b call 0x125b62d0 */
  push32(0x125b2e90u); f_125b62d0();
  /* 125b2e90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2e93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2e96 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2e98 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2e9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2e9e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2ea4 push edx */
  push32((uint32_t)(EDX));
  /* 125b2ea5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 125b2ea7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2eaa push eax */
  push32((uint32_t)(EAX));
  /* 125b2eab push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2ead call 0x125b62d0 */
  push32(0x125b2eb2u); f_125b62d0();
  /* 125b2eb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2eb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2eb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2eba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2ebd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2ec0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2ec6 push edx */
  push32((uint32_t)(EDX));
  /* 125b2ec7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 125b2ec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b2ecc push eax */
  push32((uint32_t)(EAX));
  /* 125b2ecd push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2ecf call 0x125b62d0 */
  push32(0x125b2ed4u); f_125b62d0();
  /* 125b2ed4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2ed7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2eda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2edc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2edf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2ee2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2ee8 push edx */
  push32((uint32_t)(EDX));
  /* 125b2ee9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 125b2eeb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b2eee push eax */
  push32((uint32_t)(EAX));
  /* 125b2eef push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2ef1 call 0x125b62d0 */
  push32(0x125b2ef6u); f_125b62d0();
  /* 125b2ef6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2ef9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2efc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2efe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2f01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2f04 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2f0a push edx */
  push32((uint32_t)(EDX));
  /* 125b2f0b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 125b2f0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b2f10 push eax */
  push32((uint32_t)(EAX));
  /* 125b2f11 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2f13 call 0x125b62d0 */
  push32(0x125b2f18u); f_125b62d0();
  /* 125b2f18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2f1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2f1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2f20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2f23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2f26 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2f2c push edx */
  push32((uint32_t)(EDX));
  /* 125b2f2d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 125b2f32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b2f35 push eax */
  push32((uint32_t)(EAX));
  /* 125b2f36 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b2f38 call 0x125b62d0 */
  push32(0x125b2f3du); f_125b62d0();
  /* 125b2f3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2f40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b2f43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b2f45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b2f48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_125b2f4b:;
  /* 125b2f4b mov esp, ebp */
  ESP = (EBP);
  /* 125b2f4d pop ebp */
  EBP = (pop32());
  /* 125b2f4e ret  */
  ESPCHK(0x125b29c0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x125b2f50 (779 bytes, 265 insns) */
void f_125b2f50(void) {
  FTRACE(0x125b2f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b2f50 push ebp */
  push32((uint32_t)(EBP));
  /* 125b2f51 mov ebp, esp */
  EBP = (ESP);
  /* 125b2f53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b2f57 jne 0x125b2f5e */
  if (!C.zf) goto L_125b2f5e;
  /* 125b2f59 jmp 0x125b3259 */
  goto L_125b3259;
L_125b2f5e:;
  /* 125b2f5e push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2f60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2f63 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125b2f66 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2f67 call 0x125a8ba0 */
  push32(0x125b2f6cu); f_125a8ba0();
  /* 125b2f6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2f6f push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2f71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2f74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125b2f77 push eax */
  push32((uint32_t)(EAX));
  /* 125b2f78 call 0x125a8ba0 */
  push32(0x125b2f7du); f_125a8ba0();
  /* 125b2f7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2f80 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2f82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2f85 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125b2f88 push edx */
  push32((uint32_t)(EDX));
  /* 125b2f89 call 0x125a8ba0 */
  push32(0x125b2f8eu); f_125a8ba0();
  /* 125b2f8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2f91 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2f93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2f96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125b2f99 push ecx */
  push32((uint32_t)(ECX));
  /* 125b2f9a call 0x125a8ba0 */
  push32(0x125b2f9fu); f_125a8ba0();
  /* 125b2f9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2fa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2fa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2fa7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125b2faa push eax */
  push32((uint32_t)(EAX));
  /* 125b2fab call 0x125a8ba0 */
  push32(0x125b2fb0u); f_125a8ba0();
  /* 125b2fb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2fb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2fb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2fb8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 125b2fbb push edx */
  push32((uint32_t)(EDX));
  /* 125b2fbc call 0x125a8ba0 */
  push32(0x125b2fc1u); f_125a8ba0();
  /* 125b2fc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2fc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2fc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2fc9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b2fcb push ecx */
  push32((uint32_t)(ECX));
  /* 125b2fcc call 0x125a8ba0 */
  push32(0x125b2fd1u); f_125a8ba0();
  /* 125b2fd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2fd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2fd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2fd9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 125b2fdc push eax */
  push32((uint32_t)(EAX));
  /* 125b2fdd call 0x125a8ba0 */
  push32(0x125b2fe2u); f_125a8ba0();
  /* 125b2fe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2fe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2fe7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2fea mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 125b2fed push edx */
  push32((uint32_t)(EDX));
  /* 125b2fee call 0x125a8ba0 */
  push32(0x125b2ff3u); f_125a8ba0();
  /* 125b2ff3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b2ff6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b2ff8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b2ffb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 125b2ffe push ecx */
  push32((uint32_t)(ECX));
  /* 125b2fff call 0x125a8ba0 */
  push32(0x125b3004u); f_125a8ba0();
  /* 125b3004 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3007 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3009 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b300c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 125b300f push eax */
  push32((uint32_t)(EAX));
  /* 125b3010 call 0x125a8ba0 */
  push32(0x125b3015u); f_125a8ba0();
  /* 125b3015 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3018 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b301a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b301d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 125b3020 push edx */
  push32((uint32_t)(EDX));
  /* 125b3021 call 0x125a8ba0 */
  push32(0x125b3026u); f_125a8ba0();
  /* 125b3026 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3029 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b302b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b302e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 125b3031 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3032 call 0x125a8ba0 */
  push32(0x125b3037u); f_125a8ba0();
  /* 125b3037 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b303a push 2 */
  push32((uint32_t)(0x2u));
  /* 125b303c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b303f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125b3042 push eax */
  push32((uint32_t)(EAX));
  /* 125b3043 call 0x125a8ba0 */
  push32(0x125b3048u); f_125a8ba0();
  /* 125b3048 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b304b push 2 */
  push32((uint32_t)(0x2u));
  /* 125b304d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3050 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 125b3053 push edx */
  push32((uint32_t)(EDX));
  /* 125b3054 call 0x125a8ba0 */
  push32(0x125b3059u); f_125a8ba0();
  /* 125b3059 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b305c push 2 */
  push32((uint32_t)(0x2u));
  /* 125b305e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3061 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 125b3064 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3065 call 0x125a8ba0 */
  push32(0x125b306au); f_125a8ba0();
  /* 125b306a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b306d push 2 */
  push32((uint32_t)(0x2u));
  /* 125b306f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3072 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 125b3075 push eax */
  push32((uint32_t)(EAX));
  /* 125b3076 call 0x125a8ba0 */
  push32(0x125b307bu); f_125a8ba0();
  /* 125b307b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b307e push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3083 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 125b3086 push edx */
  push32((uint32_t)(EDX));
  /* 125b3087 call 0x125a8ba0 */
  push32(0x125b308cu); f_125a8ba0();
  /* 125b308c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b308f push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3091 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3094 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 125b3097 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3098 call 0x125a8ba0 */
  push32(0x125b309du); f_125a8ba0();
  /* 125b309d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b30a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b30a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b30a5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 125b30a8 push eax */
  push32((uint32_t)(EAX));
  /* 125b30a9 call 0x125a8ba0 */
  push32(0x125b30aeu); f_125a8ba0();
  /* 125b30ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b30b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b30b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b30b6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 125b30b9 push edx */
  push32((uint32_t)(EDX));
  /* 125b30ba call 0x125a8ba0 */
  push32(0x125b30bfu); f_125a8ba0();
  /* 125b30bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b30c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b30c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b30c7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 125b30ca push ecx */
  push32((uint32_t)(ECX));
  /* 125b30cb call 0x125a8ba0 */
  push32(0x125b30d0u); f_125a8ba0();
  /* 125b30d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b30d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b30d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b30d8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 125b30db push eax */
  push32((uint32_t)(EAX));
  /* 125b30dc call 0x125a8ba0 */
  push32(0x125b30e1u); f_125a8ba0();
  /* 125b30e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b30e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b30e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b30e9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 125b30ec push edx */
  push32((uint32_t)(EDX));
  /* 125b30ed call 0x125a8ba0 */
  push32(0x125b30f2u); f_125a8ba0();
  /* 125b30f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b30f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b30f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b30fa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 125b30fd push ecx */
  push32((uint32_t)(ECX));
  /* 125b30fe call 0x125a8ba0 */
  push32(0x125b3103u); f_125a8ba0();
  /* 125b3103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3106 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3108 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b310b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 125b310e push eax */
  push32((uint32_t)(EAX));
  /* 125b310f call 0x125a8ba0 */
  push32(0x125b3114u); f_125a8ba0();
  /* 125b3114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3117 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3119 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b311c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 125b311f push edx */
  push32((uint32_t)(EDX));
  /* 125b3120 call 0x125a8ba0 */
  push32(0x125b3125u); f_125a8ba0();
  /* 125b3125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3128 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b312a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b312d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 125b3130 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3131 call 0x125a8ba0 */
  push32(0x125b3136u); f_125a8ba0();
  /* 125b3136 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3139 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b313b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b313e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 125b3141 push eax */
  push32((uint32_t)(EAX));
  /* 125b3142 call 0x125a8ba0 */
  push32(0x125b3147u); f_125a8ba0();
  /* 125b3147 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b314a push 2 */
  push32((uint32_t)(0x2u));
  /* 125b314c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b314f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 125b3152 push edx */
  push32((uint32_t)(EDX));
  /* 125b3153 call 0x125a8ba0 */
  push32(0x125b3158u); f_125a8ba0();
  /* 125b3158 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b315b push 2 */
  push32((uint32_t)(0x2u));
  /* 125b315d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3160 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 125b3163 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3164 call 0x125a8ba0 */
  push32(0x125b3169u); f_125a8ba0();
  /* 125b3169 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b316c push 2 */
  push32((uint32_t)(0x2u));
  /* 125b316e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3171 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 125b3174 push eax */
  push32((uint32_t)(EAX));
  /* 125b3175 call 0x125a8ba0 */
  push32(0x125b317au); f_125a8ba0();
  /* 125b317a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b317d push 2 */
  push32((uint32_t)(0x2u));
  /* 125b317f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3182 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 125b3188 push edx */
  push32((uint32_t)(EDX));
  /* 125b3189 call 0x125a8ba0 */
  push32(0x125b318eu); f_125a8ba0();
  /* 125b318e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3191 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3196 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 125b319c push ecx */
  push32((uint32_t)(ECX));
  /* 125b319d call 0x125a8ba0 */
  push32(0x125b31a2u); f_125a8ba0();
  /* 125b31a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b31a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b31a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b31aa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 125b31b0 push eax */
  push32((uint32_t)(EAX));
  /* 125b31b1 call 0x125a8ba0 */
  push32(0x125b31b6u); f_125a8ba0();
  /* 125b31b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b31b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b31bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b31be mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 125b31c4 push edx */
  push32((uint32_t)(EDX));
  /* 125b31c5 call 0x125a8ba0 */
  push32(0x125b31cau); f_125a8ba0();
  /* 125b31ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b31cd push 2 */
  push32((uint32_t)(0x2u));
  /* 125b31cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b31d2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 125b31d8 push ecx */
  push32((uint32_t)(ECX));
  /* 125b31d9 call 0x125a8ba0 */
  push32(0x125b31deu); f_125a8ba0();
  /* 125b31de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b31e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b31e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b31e6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 125b31ec push eax */
  push32((uint32_t)(EAX));
  /* 125b31ed call 0x125a8ba0 */
  push32(0x125b31f2u); f_125a8ba0();
  /* 125b31f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b31f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b31f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b31fa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 125b3200 push edx */
  push32((uint32_t)(EDX));
  /* 125b3201 call 0x125a8ba0 */
  push32(0x125b3206u); f_125a8ba0();
  /* 125b3206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3209 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b320b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b320e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 125b3214 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3215 call 0x125a8ba0 */
  push32(0x125b321au); f_125a8ba0();
  /* 125b321a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b321d push 2 */
  push32((uint32_t)(0x2u));
  /* 125b321f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3222 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 125b3228 push eax */
  push32((uint32_t)(EAX));
  /* 125b3229 call 0x125a8ba0 */
  push32(0x125b322eu); f_125a8ba0();
  /* 125b322e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3231 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3233 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3236 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 125b323c push edx */
  push32((uint32_t)(EDX));
  /* 125b323d call 0x125a8ba0 */
  push32(0x125b3242u); f_125a8ba0();
  /* 125b3242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3245 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3247 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b324a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 125b3250 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3251 call 0x125a8ba0 */
  push32(0x125b3256u); f_125a8ba0();
  /* 125b3256 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b3259:;
  /* 125b3259 pop ebp */
  EBP = (pop32());
  /* 125b325a ret  */
  ESPCHK(0x125b2f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013260 @ 0x125b3260 (678 bytes, 180 insns) */
void f_125b3260(void) {
  FTRACE(0x125b3260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b3260 push ebp */
  push32((uint32_t)(EBP));
  /* 125b3261 mov ebp, esp */
  EBP = (ESP);
  /* 125b3263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b3266 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125b326d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b326f mov ax, word ptr [0x125d3b42] */
  AX = (r16((uint32_t)(0x125d3b42)));
  /* 125b3275 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b3278 cmp dword ptr [0x125d3ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b327f je 0x125b33da */
  if (C.zf) goto L_125b33da;
  /* 125b3285 push 0x125d3b10 */
  push32((uint32_t)(0x125d3b10u));
  /* 125b328a push 0xe */
  push32((uint32_t)(0xeu));
  /* 125b328c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b328f push ecx */
  push32((uint32_t)(ECX));
  /* 125b3290 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b3292 call 0x125b62d0 */
  push32(0x125b3297u); f_125b62d0();
  /* 125b3297 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b329a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b329d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125b329f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125b32a2 push 0x125d3b14 */
  push32((uint32_t)(0x125d3b14u));
  /* 125b32a7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 125b32a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b32ac push eax */
  push32((uint32_t)(EAX));
  /* 125b32ad push 1 */
  push32((uint32_t)(0x1u));
  /* 125b32af call 0x125b62d0 */
  push32(0x125b32b4u); f_125b62d0();
  /* 125b32b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b32b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b32ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b32bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b32bf push 0x125d3b18 */
  push32((uint32_t)(0x125d3b18u));
  /* 125b32c4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 125b32c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b32c9 push edx */
  push32((uint32_t)(EDX));
  /* 125b32ca push 1 */
  push32((uint32_t)(0x1u));
  /* 125b32cc call 0x125b62d0 */
  push32(0x125b32d1u); f_125b62d0();
  /* 125b32d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b32d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b32d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b32d9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b32dc mov edx, dword ptr [0x125d3b18] */
  EDX = (r32((uint32_t)(0x125d3b18)));
  /* 125b32e2 push edx */
  push32((uint32_t)(EDX));
  /* 125b32e3 call 0x125b3510 */
  push32(0x125b32e8u); f_125b3510();
  /* 125b32e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b32eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b32ef je 0x125b3349 */
  if (C.zf) goto L_125b3349;
  /* 125b32f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b32f3 mov eax, dword ptr [0x125d3b10] */
  EAX = (r32((uint32_t)(0x125d3b10)));
  /* 125b32f8 push eax */
  push32((uint32_t)(EAX));
  /* 125b32f9 call 0x125a8ba0 */
  push32(0x125b32feu); f_125a8ba0();
  /* 125b32fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3301 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3303 mov ecx, dword ptr [0x125d3b14] */
  ECX = (r32((uint32_t)(0x125d3b14)));
  /* 125b3309 push ecx */
  push32((uint32_t)(ECX));
  /* 125b330a call 0x125a8ba0 */
  push32(0x125b330fu); f_125a8ba0();
  /* 125b330f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3312 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3314 mov edx, dword ptr [0x125d3b18] */
  EDX = (r32((uint32_t)(0x125d3b18)));
  /* 125b331a push edx */
  push32((uint32_t)(EDX));
  /* 125b331b call 0x125a8ba0 */
  push32(0x125b3320u); f_125a8ba0();
  /* 125b3320 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3323 mov dword ptr [0x125d3b10], 0 */
  w32((uint32_t)(0x125d3b10), (0x0u));
  /* 125b332d mov dword ptr [0x125d3b14], 0 */
  w32((uint32_t)(0x125d3b14), (0x0u));
  /* 125b3337 mov dword ptr [0x125d3b18], 0 */
  w32((uint32_t)(0x125d3b18), (0x0u));
  /* 125b3341 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b3344 jmp 0x125b3502 */
  goto L_125b3502;
L_125b3349:;
  /* 125b3349 mov eax, dword ptr [0x125d2d88] */
  EAX = (r32((uint32_t)(0x125d2d88)));
  /* 125b334e cmp dword ptr [eax], 0x125d2d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x125d2d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3354 je 0x125b3390 */
  if (C.zf) goto L_125b3390;
  /* 125b3356 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3358 mov ecx, dword ptr [0x125d2d88] */
  ECX = (r32((uint32_t)(0x125d2d88)));
  /* 125b335e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b3360 push edx */
  push32((uint32_t)(EDX));
  /* 125b3361 call 0x125a8ba0 */
  push32(0x125b3366u); f_125a8ba0();
  /* 125b3366 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3369 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b336b mov eax, dword ptr [0x125d2d88] */
  EAX = (r32((uint32_t)(0x125d2d88)));
  /* 125b3370 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125b3373 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3374 call 0x125a8ba0 */
  push32(0x125b3379u); f_125a8ba0();
  /* 125b3379 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b337c push 2 */
  push32((uint32_t)(0x2u));
  /* 125b337e mov edx, dword ptr [0x125d2d88] */
  EDX = (r32((uint32_t)(0x125d2d88)));
  /* 125b3384 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125b3387 push eax */
  push32((uint32_t)(EAX));
  /* 125b3388 call 0x125a8ba0 */
  push32(0x125b338du); f_125a8ba0();
  /* 125b338d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b3390:;
  /* 125b3390 mov ecx, dword ptr [0x125d2d88] */
  ECX = (r32((uint32_t)(0x125d2d88)));
  /* 125b3396 mov edx, dword ptr [0x125d3b10] */
  EDX = (r32((uint32_t)(0x125d3b10)));
  /* 125b339c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 125b339e mov eax, dword ptr [0x125d2d88] */
  EAX = (r32((uint32_t)(0x125d2d88)));
  /* 125b33a3 mov ecx, dword ptr [0x125d3b14] */
  ECX = (r32((uint32_t)(0x125d3b14)));
  /* 125b33a9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 125b33ac mov edx, dword ptr [0x125d2d88] */
  EDX = (r32((uint32_t)(0x125d2d88)));
  /* 125b33b2 mov eax, dword ptr [0x125d3b18] */
  EAX = (r32((uint32_t)(0x125d3b18)));
  /* 125b33b7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125b33ba mov ecx, dword ptr [0x125d2d88] */
  ECX = (r32((uint32_t)(0x125d2d88)));
  /* 125b33c0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b33c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b33c4 mov byte ptr [0x125d1ea8], al */
  w8((uint32_t)(0x125d1ea8), (AL));
  /* 125b33c9 mov dword ptr [0x125d1eac], 1 */
  w32((uint32_t)(0x125d1eac), (0x1u));
  /* 125b33d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b33d5 jmp 0x125b3502 */
  goto L_125b3502;
L_125b33da:;
  /* 125b33da push 2 */
  push32((uint32_t)(0x2u));
  /* 125b33dc mov ecx, dword ptr [0x125d3b10] */
  ECX = (r32((uint32_t)(0x125d3b10)));
  /* 125b33e2 push ecx */
  push32((uint32_t)(ECX));
  /* 125b33e3 call 0x125a8ba0 */
  push32(0x125b33e8u); f_125a8ba0();
  /* 125b33e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b33eb push 2 */
  push32((uint32_t)(0x2u));
  /* 125b33ed mov edx, dword ptr [0x125d3b14] */
  EDX = (r32((uint32_t)(0x125d3b14)));
  /* 125b33f3 push edx */
  push32((uint32_t)(EDX));
  /* 125b33f4 call 0x125a8ba0 */
  push32(0x125b33f9u); f_125a8ba0();
  /* 125b33f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b33fc push 2 */
  push32((uint32_t)(0x2u));
  /* 125b33fe mov eax, dword ptr [0x125d3b18] */
  EAX = (r32((uint32_t)(0x125d3b18)));
  /* 125b3403 push eax */
  push32((uint32_t)(EAX));
  /* 125b3404 call 0x125a8ba0 */
  push32(0x125b3409u); f_125a8ba0();
  /* 125b3409 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b340c mov dword ptr [0x125d3b10], 0 */
  w32((uint32_t)(0x125d3b10), (0x0u));
  /* 125b3416 mov dword ptr [0x125d3b14], 0 */
  w32((uint32_t)(0x125d3b14), (0x0u));
  /* 125b3420 mov dword ptr [0x125d3b18], 0 */
  w32((uint32_t)(0x125d3b18), (0x0u));
  /* 125b342a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 125b342f push 0x125cf7cc */
  push32((uint32_t)(0x125cf7ccu));
  /* 125b3434 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3436 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3438 call 0x125a8110 */
  push32(0x125b343du); f_125a8110();
  /* 125b343d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3440 mov ecx, dword ptr [0x125d2d88] */
  ECX = (r32((uint32_t)(0x125d2d88)));
  /* 125b3446 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125b3448 mov edx, dword ptr [0x125d2d88] */
  EDX = (r32((uint32_t)(0x125d2d88)));
  /* 125b344e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3451 jne 0x125b345b */
  if (!C.zf) goto L_125b345b;
  /* 125b3453 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b3456 jmp 0x125b3502 */
  goto L_125b3502;
L_125b345b:;
  /* 125b345b push 0x125cf79c */
  push32((uint32_t)(0x125cf79cu));
  /* 125b3460 mov eax, dword ptr [0x125d2d88] */
  EAX = (r32((uint32_t)(0x125d2d88)));
  /* 125b3465 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b3467 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3468 call 0x125ab0c0 */
  push32(0x125b346du); f_125ab0c0();
  /* 125b346d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3470 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 125b3475 push 0x125cf7cc */
  push32((uint32_t)(0x125cf7ccu));
  /* 125b347a push 2 */
  push32((uint32_t)(0x2u));
  /* 125b347c push 2 */
  push32((uint32_t)(0x2u));
  /* 125b347e call 0x125a8110 */
  push32(0x125b3483u); f_125a8110();
  /* 125b3483 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3486 mov edx, dword ptr [0x125d2d88] */
  EDX = (r32((uint32_t)(0x125d2d88)));
  /* 125b348c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 125b348f mov eax, dword ptr [0x125d2d88] */
  EAX = (r32((uint32_t)(0x125d2d88)));
  /* 125b3494 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3498 jne 0x125b349f */
  if (!C.zf) goto L_125b349f;
  /* 125b349a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b349d jmp 0x125b3502 */
  goto L_125b3502;
L_125b349f:;
  /* 125b349f mov ecx, dword ptr [0x125d2d88] */
  ECX = (r32((uint32_t)(0x125d2d88)));
  /* 125b34a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125b34a8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 125b34ab push 0x92 */
  push32((uint32_t)(0x92u));
  /* 125b34b0 push 0x125cf7cc */
  push32((uint32_t)(0x125cf7ccu));
  /* 125b34b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b34b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b34b9 call 0x125a8110 */
  push32(0x125b34beu); f_125a8110();
  /* 125b34be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b34c1 mov ecx, dword ptr [0x125d2d88] */
  ECX = (r32((uint32_t)(0x125d2d88)));
  /* 125b34c7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 125b34ca mov edx, dword ptr [0x125d2d88] */
  EDX = (r32((uint32_t)(0x125d2d88)));
  /* 125b34d0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b34d4 jne 0x125b34db */
  if (!C.zf) goto L_125b34db;
  /* 125b34d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b34d9 jmp 0x125b3502 */
  goto L_125b3502;
L_125b34db:;
  /* 125b34db mov eax, dword ptr [0x125d2d88] */
  EAX = (r32((uint32_t)(0x125d2d88)));
  /* 125b34e0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125b34e3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 125b34e6 mov edx, dword ptr [0x125d2d88] */
  EDX = (r32((uint32_t)(0x125d2d88)));
  /* 125b34ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b34ee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125b34f0 mov byte ptr [0x125d1ea8], cl */
  w8((uint32_t)(0x125d1ea8), (CL));
  /* 125b34f6 mov dword ptr [0x125d1eac], 1 */
  w32((uint32_t)(0x125d1eac), (0x1u));
  /* 125b3500 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b3502:;
  /* 125b3502 mov esp, ebp */
  ESP = (EBP);
  /* 125b3504 pop ebp */
  EBP = (pop32());
  /* 125b3505 ret  */
  ESPCHK(0x125b3260u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x125b3510 (125 bytes, 49 insns) */
void f_125b3510(void) {
  FTRACE(0x125b3510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b3510 push ebp */
  push32((uint32_t)(EBP));
  /* 125b3511 mov ebp, esp */
  EBP = (ESP);
  /* 125b3513 push ecx */
  push32((uint32_t)(ECX));
L_125b3514:;
  /* 125b3514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3517 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b351a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b351c je 0x125b3589 */
  if (C.zf) goto L_125b3589;
  /* 125b351e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3521 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125b3524 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3527 jl 0x125b354d */
  if ((C.sf!=C.of)) goto L_125b354d;
  /* 125b3529 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b352c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b352f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3532 jg 0x125b354d */
  if ((!C.zf&&C.sf==C.of)) goto L_125b354d;
  /* 125b3534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3537 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b353a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b353d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3540 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 125b3542 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3545 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3548 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b354b jmp 0x125b3587 */
  goto L_125b3587;
L_125b354d:;
  /* 125b354d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3550 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b3553 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3556 jne 0x125b357e */
  if (!C.zf) goto L_125b357e;
  /* 125b3558 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b355b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125b355e:;
  /* 125b355e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3561 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3564 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125b3567 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125b3569 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b356c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b356f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b3572 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3575 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125b3578 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b357a jne 0x125b355e */
  if (!C.zf) goto L_125b355e;
  /* 125b357c jmp 0x125b3587 */
  goto L_125b3587;
L_125b357e:;
  /* 125b357e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3581 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3584 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_125b3587:;
  /* 125b3587 jmp 0x125b3514 */
  goto L_125b3514;
L_125b3589:;
  /* 125b3589 mov esp, ebp */
  ESP = (EBP);
  /* 125b358b pop ebp */
  EBP = (pop32());
  /* 125b358c ret  */
  ESPCHK(0x125b3510u, _esp0);
  ESP += 4; return;
}

/* FUN_10013590 @ 0x125b3590 (304 bytes, 85 insns) */
void f_125b3590(void) {
  FTRACE(0x125b3590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b3590 push ebp */
  push32((uint32_t)(EBP));
  /* 125b3591 mov ebp, esp */
  EBP = (ESP);
  /* 125b3593 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3594 cmp dword ptr [0x125d3ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b359b je 0x125b365c */
  if (C.zf) goto L_125b365c;
  /* 125b35a1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 125b35a3 push 0x125cf7d8 */
  push32((uint32_t)(0x125cf7d8u));
  /* 125b35a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b35aa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125b35ac push 1 */
  push32((uint32_t)(0x1u));
  /* 125b35ae call 0x125a8520 */
  push32(0x125b35b3u); f_125a8520();
  /* 125b35b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b35b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b35b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b35bd jne 0x125b35c9 */
  if (!C.zf) goto L_125b35c9;
  /* 125b35bf mov eax, 1 */
  EAX = (0x1u);
  /* 125b35c4 jmp 0x125b36bc */
  goto L_125b36bc;
L_125b35c9:;
  /* 125b35c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b35cc push eax */
  push32((uint32_t)(EAX));
  /* 125b35cd call 0x125b36c0 */
  push32(0x125b35d2u); f_125b36c0();
  /* 125b35d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b35d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b35d7 je 0x125b35fd */
  if (C.zf) goto L_125b35fd;
  /* 125b35d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b35dc push ecx */
  push32((uint32_t)(ECX));
  /* 125b35dd call 0x125b3950 */
  push32(0x125b35e2u); f_125b3950();
  /* 125b35e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b35e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b35e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b35ea push edx */
  push32((uint32_t)(EDX));
  /* 125b35eb call 0x125a8ba0 */
  push32(0x125b35f0u); f_125a8ba0();
  /* 125b35f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b35f3 mov eax, 1 */
  EAX = (0x1u);
  /* 125b35f8 jmp 0x125b36bc */
  goto L_125b36bc;
L_125b35fd:;
  /* 125b35fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3600 mov ecx, dword ptr [0x125d2d88] */
  ECX = (r32((uint32_t)(0x125d2d88)));
  /* 125b3606 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b3608 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125b360a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b360d mov ecx, dword ptr [0x125d2d88] */
  ECX = (r32((uint32_t)(0x125d2d88)));
  /* 125b3613 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125b3616 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125b3619 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b361c mov ecx, dword ptr [0x125d2d88] */
  ECX = (r32((uint32_t)(0x125d2d88)));
  /* 125b3622 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125b3625 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 125b3628 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b362b mov dword ptr [0x125d2d88], eax */
  w32((uint32_t)(0x125d2d88), (EAX));
  /* 125b3630 mov ecx, dword ptr [0x125d3b1c] */
  ECX = (r32((uint32_t)(0x125d3b1c)));
  /* 125b3636 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3637 call 0x125b3950 */
  push32(0x125b363cu); f_125b3950();
  /* 125b363c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b363f push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3641 mov edx, dword ptr [0x125d3b1c] */
  EDX = (r32((uint32_t)(0x125d3b1c)));
  /* 125b3647 push edx */
  push32((uint32_t)(EDX));
  /* 125b3648 call 0x125a8ba0 */
  push32(0x125b364du); f_125a8ba0();
  /* 125b364d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3650 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3653 mov dword ptr [0x125d3b1c], eax */
  w32((uint32_t)(0x125d3b1c), (EAX));
  /* 125b3658 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b365a jmp 0x125b36bc */
  goto L_125b36bc;
L_125b365c:;
  /* 125b365c mov ecx, dword ptr [0x125d2d88] */
  ECX = (r32((uint32_t)(0x125d2d88)));
  /* 125b3662 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b3664 mov dword ptr [0x125d2d58], edx */
  w32((uint32_t)(0x125d2d58), (EDX));
  /* 125b366a mov eax, dword ptr [0x125d2d88] */
  EAX = (r32((uint32_t)(0x125d2d88)));
  /* 125b366f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125b3672 mov dword ptr [0x125d2d5c], ecx */
  w32((uint32_t)(0x125d2d5c), (ECX));
  /* 125b3678 mov edx, dword ptr [0x125d2d88] */
  EDX = (r32((uint32_t)(0x125d2d88)));
  /* 125b367e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125b3681 mov dword ptr [0x125d2d60], eax */
  w32((uint32_t)(0x125d2d60), (EAX));
  /* 125b3686 mov dword ptr [0x125d2d88], 0x125d2d58 */
  w32((uint32_t)(0x125d2d88), (0x125d2d58u));
  /* 125b3690 mov ecx, dword ptr [0x125d3b1c] */
  ECX = (r32((uint32_t)(0x125d3b1c)));
  /* 125b3696 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3697 call 0x125b3950 */
  push32(0x125b369cu); f_125b3950();
  /* 125b369c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b369f push 2 */
  push32((uint32_t)(0x2u));
  /* 125b36a1 mov edx, dword ptr [0x125d3b1c] */
  EDX = (r32((uint32_t)(0x125d3b1c)));
  /* 125b36a7 push edx */
  push32((uint32_t)(EDX));
  /* 125b36a8 call 0x125a8ba0 */
  push32(0x125b36adu); f_125a8ba0();
  /* 125b36ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b36b0 mov dword ptr [0x125d3b1c], 0 */
  w32((uint32_t)(0x125d3b1c), (0x0u));
  /* 125b36ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b36bc:;
  /* 125b36bc mov esp, ebp */
  ESP = (EBP);
  /* 125b36be pop ebp */
  EBP = (pop32());
  /* 125b36bf ret  */
  ESPCHK(0x125b3590u, _esp0);
  ESP += 4; return;
}

/* FUN_100136c0 @ 0x125b36c0 (525 bytes, 200 insns) */
void f_125b36c0(void) {
  FTRACE(0x125b36c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b36c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b36c1 mov ebp, esp */
  EBP = (ESP);
  /* 125b36c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b36c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125b36cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b36cf mov ax, word ptr [0x125d3b3c] */
  AX = (r16((uint32_t)(0x125d3b3c)));
  /* 125b36d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b36d8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b36dc jne 0x125b36e6 */
  if (!C.zf) goto L_125b36e6;
  /* 125b36de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b36e1 jmp 0x125b38c9 */
  goto L_125b38c9;
L_125b36e6:;
  /* 125b36e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b36e9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b36ec push ecx */
  push32((uint32_t)(ECX));
  /* 125b36ed push 0x15 */
  push32((uint32_t)(0x15u));
  /* 125b36ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b36f2 push edx */
  push32((uint32_t)(EDX));
  /* 125b36f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b36f5 call 0x125b62d0 */
  push32(0x125b36fau); f_125b62d0();
  /* 125b36fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b36fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b3700 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b3702 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b3705 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3708 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b370b push edx */
  push32((uint32_t)(EDX));
  /* 125b370c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 125b370e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3711 push eax */
  push32((uint32_t)(EAX));
  /* 125b3712 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b3714 call 0x125b62d0 */
  push32(0x125b3719u); f_125b62d0();
  /* 125b3719 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b371c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b371f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b3721 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b3724 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3727 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b372a push edx */
  push32((uint32_t)(EDX));
  /* 125b372b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 125b372d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3730 push eax */
  push32((uint32_t)(EAX));
  /* 125b3731 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b3733 call 0x125b62d0 */
  push32(0x125b3738u); f_125b62d0();
  /* 125b3738 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b373b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b373e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b3740 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b3743 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3746 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3749 push edx */
  push32((uint32_t)(EDX));
  /* 125b374a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 125b374c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b374f push eax */
  push32((uint32_t)(EAX));
  /* 125b3750 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b3752 call 0x125b62d0 */
  push32(0x125b3757u); f_125b62d0();
  /* 125b3757 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b375a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b375d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b375f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b3762 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3765 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3768 push edx */
  push32((uint32_t)(EDX));
  /* 125b3769 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 125b376b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b376e push eax */
  push32((uint32_t)(EAX));
  /* 125b376f push 1 */
  push32((uint32_t)(0x1u));
  /* 125b3771 call 0x125b62d0 */
  push32(0x125b3776u); f_125b62d0();
  /* 125b3776 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3779 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b377c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b377e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b3781 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3784 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125b3787 push eax */
  push32((uint32_t)(EAX));
  /* 125b3788 call 0x125b38d0 */
  push32(0x125b378du); f_125b38d0();
  /* 125b378d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3790 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3793 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3796 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3797 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 125b3799 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b379c push edx */
  push32((uint32_t)(EDX));
  /* 125b379d push 1 */
  push32((uint32_t)(0x1u));
  /* 125b379f call 0x125b62d0 */
  push32(0x125b37a4u); f_125b62d0();
  /* 125b37a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b37a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b37aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b37ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b37af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b37b2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b37b5 push edx */
  push32((uint32_t)(EDX));
  /* 125b37b6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 125b37b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b37bb push eax */
  push32((uint32_t)(EAX));
  /* 125b37bc push 1 */
  push32((uint32_t)(0x1u));
  /* 125b37be call 0x125b62d0 */
  push32(0x125b37c3u); f_125b62d0();
  /* 125b37c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b37c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b37c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b37cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b37ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b37d1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b37d4 push edx */
  push32((uint32_t)(EDX));
  /* 125b37d5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 125b37d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b37da push eax */
  push32((uint32_t)(EAX));
  /* 125b37db push 0 */
  push32((uint32_t)(0x0u));
  /* 125b37dd call 0x125b62d0 */
  push32(0x125b37e2u); f_125b62d0();
  /* 125b37e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b37e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b37e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b37ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b37ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b37f0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b37f3 push edx */
  push32((uint32_t)(EDX));
  /* 125b37f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125b37f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b37f9 push eax */
  push32((uint32_t)(EAX));
  /* 125b37fa push 0 */
  push32((uint32_t)(0x0u));
  /* 125b37fc call 0x125b62d0 */
  push32(0x125b3801u); f_125b62d0();
  /* 125b3801 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3804 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b3807 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b3809 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b380c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b380f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3812 push edx */
  push32((uint32_t)(EDX));
  /* 125b3813 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 125b3815 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3818 push eax */
  push32((uint32_t)(EAX));
  /* 125b3819 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b381b call 0x125b62d0 */
  push32(0x125b3820u); f_125b62d0();
  /* 125b3820 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3823 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b3826 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b3828 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b382b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b382e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3831 push edx */
  push32((uint32_t)(EDX));
  /* 125b3832 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 125b3834 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3837 push eax */
  push32((uint32_t)(EAX));
  /* 125b3838 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b383a call 0x125b62d0 */
  push32(0x125b383fu); f_125b62d0();
  /* 125b383f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3842 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b3845 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b3847 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b384a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b384d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3850 push edx */
  push32((uint32_t)(EDX));
  /* 125b3851 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 125b3853 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3856 push eax */
  push32((uint32_t)(EAX));
  /* 125b3857 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b3859 call 0x125b62d0 */
  push32(0x125b385eu); f_125b62d0();
  /* 125b385e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3861 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b3864 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b3866 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b3869 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b386c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b386f push edx */
  push32((uint32_t)(EDX));
  /* 125b3870 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 125b3872 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3875 push eax */
  push32((uint32_t)(EAX));
  /* 125b3876 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b3878 call 0x125b62d0 */
  push32(0x125b387du); f_125b62d0();
  /* 125b387d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3880 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b3883 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b3885 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b3888 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b388b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b388e push edx */
  push32((uint32_t)(EDX));
  /* 125b388f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 125b3891 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3894 push eax */
  push32((uint32_t)(EAX));
  /* 125b3895 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b3897 call 0x125b62d0 */
  push32(0x125b389cu); f_125b62d0();
  /* 125b389c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b389f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b38a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b38a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b38a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b38aa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b38ad push edx */
  push32((uint32_t)(EDX));
  /* 125b38ae push 0x53 */
  push32((uint32_t)(0x53u));
  /* 125b38b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b38b3 push eax */
  push32((uint32_t)(EAX));
  /* 125b38b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b38b6 call 0x125b62d0 */
  push32(0x125b38bbu); f_125b62d0();
  /* 125b38bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b38be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b38c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b38c3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b38c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125b38c9:;
  /* 125b38c9 mov esp, ebp */
  ESP = (EBP);
  /* 125b38cb pop ebp */
  EBP = (pop32());
  /* 125b38cc ret  */
  ESPCHK(0x125b36c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x125b38d0 (125 bytes, 49 insns) */
void f_125b38d0(void) {
  FTRACE(0x125b38d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b38d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b38d1 mov ebp, esp */
  EBP = (ESP);
  /* 125b38d3 push ecx */
  push32((uint32_t)(ECX));
L_125b38d4:;
  /* 125b38d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b38d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b38da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b38dc je 0x125b3949 */
  if (C.zf) goto L_125b3949;
  /* 125b38de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b38e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125b38e4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b38e7 jl 0x125b390d */
  if ((C.sf!=C.of)) goto L_125b390d;
  /* 125b38e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b38ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b38ef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b38f2 jg 0x125b390d */
  if ((!C.zf&&C.sf==C.of)) goto L_125b390d;
  /* 125b38f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b38f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b38fa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b38fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3900 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 125b3902 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3905 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3908 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b390b jmp 0x125b3947 */
  goto L_125b3947;
L_125b390d:;
  /* 125b390d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3910 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b3913 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3916 jne 0x125b393e */
  if (!C.zf) goto L_125b393e;
  /* 125b3918 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b391b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125b391e:;
  /* 125b391e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3921 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3924 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125b3927 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125b3929 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b392c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b392f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b3932 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b3935 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125b3938 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b393a jne 0x125b391e */
  if (!C.zf) goto L_125b391e;
  /* 125b393c jmp 0x125b3947 */
  goto L_125b3947;
L_125b393e:;
  /* 125b393e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3941 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3944 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_125b3947:;
  /* 125b3947 jmp 0x125b38d4 */
  goto L_125b38d4;
L_125b3949:;
  /* 125b3949 mov esp, ebp */
  ESP = (EBP);
  /* 125b394b pop ebp */
  EBP = (pop32());
  /* 125b394c ret  */
  ESPCHK(0x125b38d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013950 @ 0x125b3950 (147 bytes, 52 insns) */
void f_125b3950(void) {
  FTRACE(0x125b3950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b3950 push ebp */
  push32((uint32_t)(EBP));
  /* 125b3951 mov ebp, esp */
  EBP = (ESP);
  /* 125b3953 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3957 jne 0x125b395e */
  if (!C.zf) goto L_125b395e;
  /* 125b3959 jmp 0x125b39e1 */
  goto L_125b39e1;
L_125b395e:;
  /* 125b395e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3961 cmp dword ptr [eax + 0xc], 0x125d3b78 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x125d3b78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3968 je 0x125b39e1 */
  if (C.zf) goto L_125b39e1;
  /* 125b396a push 2 */
  push32((uint32_t)(0x2u));
  /* 125b396c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b396f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125b3972 push edx */
  push32((uint32_t)(EDX));
  /* 125b3973 call 0x125a8ba0 */
  push32(0x125b3978u); f_125a8ba0();
  /* 125b3978 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b397b push 2 */
  push32((uint32_t)(0x2u));
  /* 125b397d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3980 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125b3983 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3984 call 0x125a8ba0 */
  push32(0x125b3989u); f_125a8ba0();
  /* 125b3989 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b398c push 2 */
  push32((uint32_t)(0x2u));
  /* 125b398e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3991 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125b3994 push eax */
  push32((uint32_t)(EAX));
  /* 125b3995 call 0x125a8ba0 */
  push32(0x125b399au); f_125a8ba0();
  /* 125b399a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b399d push 2 */
  push32((uint32_t)(0x2u));
  /* 125b399f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b39a2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 125b39a5 push edx */
  push32((uint32_t)(EDX));
  /* 125b39a6 call 0x125a8ba0 */
  push32(0x125b39abu); f_125a8ba0();
  /* 125b39ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b39ae push 2 */
  push32((uint32_t)(0x2u));
  /* 125b39b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b39b3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 125b39b6 push ecx */
  push32((uint32_t)(ECX));
  /* 125b39b7 call 0x125a8ba0 */
  push32(0x125b39bcu); f_125a8ba0();
  /* 125b39bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b39bf push 2 */
  push32((uint32_t)(0x2u));
  /* 125b39c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b39c4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 125b39c7 push eax */
  push32((uint32_t)(EAX));
  /* 125b39c8 call 0x125a8ba0 */
  push32(0x125b39cdu); f_125a8ba0();
  /* 125b39cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b39d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b39d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b39d5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 125b39d8 push edx */
  push32((uint32_t)(EDX));
  /* 125b39d9 call 0x125a8ba0 */
  push32(0x125b39deu); f_125a8ba0();
  /* 125b39de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b39e1:;
  /* 125b39e1 pop ebp */
  EBP = (pop32());
  /* 125b39e2 ret  */
  ESPCHK(0x125b3950u, _esp0);
  ESP += 4; return;
}

/* FUN_100139f0 @ 0x125b39f0 (928 bytes, 284 insns) */
void f_125b39f0(void) {
  FTRACE(0x125b39f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b39f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b39f1 mov ebp, esp */
  EBP = (ESP);
  /* 125b39f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b39f6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 125b39fd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 125b3a04 cmp dword ptr [0x125d3ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3a0b je 0x125b3d41 */
  if (C.zf) goto L_125b3d41;
  /* 125b3a11 cmp dword ptr [0x125d3af0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3af0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3a18 jne 0x125b3a40 */
  if (!C.zf) goto L_125b3a40;
  /* 125b3a1a push 0x125d3af0 */
  push32((uint32_t)(0x125d3af0u));
  /* 125b3a1f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 125b3a24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b3a26 mov ax, word ptr [0x125d3b34] */
  AX = (r16((uint32_t)(0x125d3b34)));
  /* 125b3a2c push eax */
  push32((uint32_t)(EAX));
  /* 125b3a2d push 0 */
  push32((uint32_t)(0x0u));
  /* 125b3a2f call 0x125b62d0 */
  push32(0x125b3a34u); f_125b62d0();
  /* 125b3a34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3a37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b3a39 je 0x125b3a40 */
  if (C.zf) goto L_125b3a40;
  /* 125b3a3b jmp 0x125b3d02 */
  goto L_125b3d02;
L_125b3a40:;
  /* 125b3a40 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 125b3a42 push 0x125cf7e4 */
  push32((uint32_t)(0x125cf7e4u));
  /* 125b3a47 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3a49 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 125b3a4e call 0x125a8110 */
  push32(0x125b3a53u); f_125a8110();
  /* 125b3a53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3a56 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 125b3a59 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 125b3a5b push 0x125cf7e4 */
  push32((uint32_t)(0x125cf7e4u));
  /* 125b3a60 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3a62 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 125b3a67 call 0x125a8110 */
  push32(0x125b3a6cu); f_125a8110();
  /* 125b3a6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3a6f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125b3a72 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 125b3a74 push 0x125cf7e4 */
  push32((uint32_t)(0x125cf7e4u));
  /* 125b3a79 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3a7b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 125b3a80 call 0x125a8110 */
  push32(0x125b3a85u); f_125a8110();
  /* 125b3a85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3a88 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 125b3a8b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 125b3a8d push 0x125cf7e4 */
  push32((uint32_t)(0x125cf7e4u));
  /* 125b3a92 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3a94 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 125b3a99 call 0x125a8110 */
  push32(0x125b3a9eu); f_125a8110();
  /* 125b3a9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3aa1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125b3aa4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3aa8 je 0x125b3abc */
  if (C.zf) goto L_125b3abc;
  /* 125b3aaa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3aae je 0x125b3abc */
  if (C.zf) goto L_125b3abc;
  /* 125b3ab0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3ab4 je 0x125b3abc */
  if (C.zf) goto L_125b3abc;
  /* 125b3ab6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3aba jne 0x125b3ac1 */
  if (!C.zf) goto L_125b3ac1;
L_125b3abc:;
  /* 125b3abc jmp 0x125b3d02 */
  goto L_125b3d02;
L_125b3ac1:;
  /* 125b3ac1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125b3ac4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125b3ac7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125b3ace jmp 0x125b3ad9 */
  goto L_125b3ad9;
L_125b3ad0:;
  /* 125b3ad0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b3ad3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3ad6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_125b3ad9:;
  /* 125b3ad9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3ae0 jge 0x125b3af5 */
  if ((C.sf==C.of)) goto L_125b3af5;
  /* 125b3ae2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b3ae5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 125b3ae8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 125b3aea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b3aed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3af0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125b3af3 jmp 0x125b3ad0 */
  goto L_125b3ad0;
L_125b3af5:;
  /* 125b3af5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 125b3af8 push eax */
  push32((uint32_t)(EAX));
  /* 125b3af9 mov ecx, dword ptr [0x125d3af0] */
  ECX = (r32((uint32_t)(0x125d3af0)));
  /* 125b3aff push ecx */
  push32((uint32_t)(ECX));
  /* 125b3b00 call dword ptr [0x125d631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d631c))), 0x125b3b06u);
  /* 125b3b06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b3b08 jne 0x125b3b0f */
  if (!C.zf) goto L_125b3b0f;
  /* 125b3b0a jmp 0x125b3d02 */
  goto L_125b3d02;
L_125b3b0f:;
  /* 125b3b0f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3b13 jbe 0x125b3b1a */
  if ((C.cf||C.zf)) goto L_125b3b1a;
  /* 125b3b15 jmp 0x125b3d02 */
  goto L_125b3d02;
L_125b3b1a:;
  /* 125b3b1a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b3b1d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125b3b23 mov dword ptr [0x125d1ea4], edx */
  w32((uint32_t)(0x125d1ea4), (EDX));
  /* 125b3b29 cmp dword ptr [0x125d1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3b30 jle 0x125b3b89 */
  if ((C.zf||C.sf!=C.of)) goto L_125b3b89;
  /* 125b3b32 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 125b3b35 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125b3b38 jmp 0x125b3b43 */
  goto L_125b3b43;
L_125b3b3a:;
  /* 125b3b3a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b3b3d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3b40 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_125b3b43:;
  /* 125b3b43 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b3b46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b3b48 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b3b4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b3b4c je 0x125b3b89 */
  if (C.zf) goto L_125b3b89;
  /* 125b3b4e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b3b51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b3b53 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 125b3b56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b3b58 je 0x125b3b89 */
  if (C.zf) goto L_125b3b89;
  /* 125b3b5a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b3b5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b3b5f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125b3b61 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125b3b64 jmp 0x125b3b6f */
  goto L_125b3b6f;
L_125b3b66:;
  /* 125b3b66 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b3b69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3b6c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_125b3b6f:;
  /* 125b3b6f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b3b72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b3b74 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 125b3b77 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3b7a jg 0x125b3b87 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b3b87;
  /* 125b3b7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125b3b7f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3b82 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 125b3b85 jmp 0x125b3b66 */
  goto L_125b3b66;
L_125b3b87:;
  /* 125b3b87 jmp 0x125b3b3a */
  goto L_125b3b3a;
L_125b3b89:;
  /* 125b3b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b3b8b push 0 */
  push32((uint32_t)(0x0u));
  /* 125b3b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 125b3b8f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125b3b92 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3b95 push eax */
  push32((uint32_t)(EAX));
  /* 125b3b96 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125b3b9b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125b3b9e push ecx */
  push32((uint32_t)(ECX));
  /* 125b3b9f push 1 */
  push32((uint32_t)(0x1u));
  /* 125b3ba1 call 0x125b0340 */
  push32(0x125b3ba6u); f_125b0340();
  /* 125b3ba6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3ba9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b3bab jne 0x125b3bb2 */
  if (!C.zf) goto L_125b3bb2;
  /* 125b3bad jmp 0x125b3d02 */
  goto L_125b3d02;
L_125b3bb2:;
  /* 125b3bb2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125b3bb5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 125b3bba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b3bbd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125b3bc0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125b3bc7 jmp 0x125b3bd2 */
  goto L_125b3bd2;
L_125b3bc9:;
  /* 125b3bc9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b3bcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3bcf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_125b3bd2:;
  /* 125b3bd2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3bd9 jge 0x125b3bf0 */
  if ((C.sf==C.of)) goto L_125b3bf0;
  /* 125b3bdb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b3bde mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 125b3be2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 125b3be5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b3be8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3beb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125b3bee jmp 0x125b3bc9 */
  goto L_125b3bc9;
L_125b3bf0:;
  /* 125b3bf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b3bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b3bf4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b3bf7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3bfa push edx */
  push32((uint32_t)(EDX));
  /* 125b3bfb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125b3c00 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b3c03 push eax */
  push32((uint32_t)(EAX));
  /* 125b3c04 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b3c06 call 0x125b6570 */
  push32(0x125b3c0bu); f_125b6570();
  /* 125b3c0b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3c0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b3c10 jne 0x125b3c17 */
  if (!C.zf) goto L_125b3c17;
  /* 125b3c12 jmp 0x125b3d02 */
  goto L_125b3d02;
L_125b3c17:;
  /* 125b3c17 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b3c1a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 125b3c1f cmp dword ptr [0x125d1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3c26 jle 0x125b3c83 */
  if ((C.zf||C.sf!=C.of)) goto L_125b3c83;
  /* 125b3c28 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 125b3c2b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125b3c2e jmp 0x125b3c39 */
  goto L_125b3c39;
L_125b3c30:;
  /* 125b3c30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b3c33 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3c36 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_125b3c39:;
  /* 125b3c39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b3c3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b3c3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125b3c40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b3c42 je 0x125b3c83 */
  if (C.zf) goto L_125b3c83;
  /* 125b3c44 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b3c47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b3c49 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 125b3c4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b3c4e je 0x125b3c83 */
  if (C.zf) goto L_125b3c83;
  /* 125b3c50 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b3c53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b3c55 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b3c57 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125b3c5a jmp 0x125b3c65 */
  goto L_125b3c65;
L_125b3c5c:;
  /* 125b3c5c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b3c5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3c62 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_125b3c65:;
  /* 125b3c65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b3c68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b3c6a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125b3c6d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3c70 jg 0x125b3c81 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b3c81;
  /* 125b3c72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b3c75 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125b3c78 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 125b3c7f jmp 0x125b3c5c */
  goto L_125b3c5c;
L_125b3c81:;
  /* 125b3c81 jmp 0x125b3c30 */
  goto L_125b3c30;
L_125b3c83:;
  /* 125b3c83 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125b3c86 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3c89 mov dword ptr [0x125d1c98], eax */
  w32((uint32_t)(0x125d1c98), (EAX));
  /* 125b3c8e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b3c91 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3c94 mov dword ptr [0x125d1c9c], ecx */
  w32((uint32_t)(0x125d1c9c), (ECX));
  /* 125b3c9a cmp dword ptr [0x125d3b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3ca1 je 0x125b3cb4 */
  if (C.zf) goto L_125b3cb4;
  /* 125b3ca3 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3ca5 mov edx, dword ptr [0x125d3b20] */
  EDX = (r32((uint32_t)(0x125d3b20)));
  /* 125b3cab push edx */
  push32((uint32_t)(EDX));
  /* 125b3cac call 0x125a8ba0 */
  push32(0x125b3cb1u); f_125a8ba0();
  /* 125b3cb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b3cb4:;
  /* 125b3cb4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125b3cb7 mov dword ptr [0x125d3b20], eax */
  w32((uint32_t)(0x125d3b20), (EAX));
  /* 125b3cbc cmp dword ptr [0x125d3b24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3cc3 je 0x125b3cd6 */
  if (C.zf) goto L_125b3cd6;
  /* 125b3cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3cc7 mov ecx, dword ptr [0x125d3b24] */
  ECX = (r32((uint32_t)(0x125d3b24)));
  /* 125b3ccd push ecx */
  push32((uint32_t)(ECX));
  /* 125b3cce call 0x125a8ba0 */
  push32(0x125b3cd3u); f_125a8ba0();
  /* 125b3cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b3cd6:;
  /* 125b3cd6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b3cd9 mov dword ptr [0x125d3b24], edx */
  w32((uint32_t)(0x125d3b24), (EDX));
  /* 125b3cdf push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3ce1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125b3ce4 push eax */
  push32((uint32_t)(EAX));
  /* 125b3ce5 call 0x125a8ba0 */
  push32(0x125b3ceau); f_125a8ba0();
  /* 125b3cea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3ced push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3cef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b3cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3cf3 call 0x125a8ba0 */
  push32(0x125b3cf8u); f_125a8ba0();
  /* 125b3cf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3cfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b3cfd jmp 0x125b3d8c */
  goto L_125b3d8c;
L_125b3d02:;
  /* 125b3d02 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3d04 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125b3d07 push edx */
  push32((uint32_t)(EDX));
  /* 125b3d08 call 0x125a8ba0 */
  push32(0x125b3d0du); f_125a8ba0();
  /* 125b3d0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3d10 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3d12 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b3d15 push eax */
  push32((uint32_t)(EAX));
  /* 125b3d16 call 0x125a8ba0 */
  push32(0x125b3d1bu); f_125a8ba0();
  /* 125b3d1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3d1e push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3d20 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125b3d23 push ecx */
  push32((uint32_t)(ECX));
  /* 125b3d24 call 0x125a8ba0 */
  push32(0x125b3d29u); f_125a8ba0();
  /* 125b3d29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3d2c push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3d2e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b3d31 push edx */
  push32((uint32_t)(EDX));
  /* 125b3d32 call 0x125a8ba0 */
  push32(0x125b3d37u); f_125a8ba0();
  /* 125b3d37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3d3a mov eax, 1 */
  EAX = (0x1u);
  /* 125b3d3f jmp 0x125b3d8c */
  goto L_125b3d8c;
L_125b3d41:;
  /* 125b3d41 mov dword ptr [0x125d1c98], 0x125d1ca2 */
  w32((uint32_t)(0x125d1c98), (0x125d1ca2u));
  /* 125b3d4b mov dword ptr [0x125d1c9c], 0x125d1ca2 */
  w32((uint32_t)(0x125d1c9c), (0x125d1ca2u));
  /* 125b3d55 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3d57 mov eax, dword ptr [0x125d3b20] */
  EAX = (r32((uint32_t)(0x125d3b20)));
  /* 125b3d5c push eax */
  push32((uint32_t)(EAX));
  /* 125b3d5d call 0x125a8ba0 */
  push32(0x125b3d62u); f_125a8ba0();
  /* 125b3d62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3d65 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b3d67 mov ecx, dword ptr [0x125d3b24] */
  ECX = (r32((uint32_t)(0x125d3b24)));
  /* 125b3d6d push ecx */
  push32((uint32_t)(ECX));
  /* 125b3d6e call 0x125a8ba0 */
  push32(0x125b3d73u); f_125a8ba0();
  /* 125b3d73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3d76 mov dword ptr [0x125d3b20], 0 */
  w32((uint32_t)(0x125d3b20), (0x0u));
  /* 125b3d80 mov dword ptr [0x125d3b24], 0 */
  w32((uint32_t)(0x125d3b24), (0x0u));
  /* 125b3d8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b3d8c:;
  /* 125b3d8c mov esp, ebp */
  ESP = (EBP);
  /* 125b3d8e pop ebp */
  EBP = (pop32());
  /* 125b3d8f ret  */
  ESPCHK(0x125b39f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d90 @ 0x125b3d90 (7 bytes, 5 insns) */
void f_125b3d90(void) {
  FTRACE(0x125b3d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b3d90 push ebp */
  push32((uint32_t)(EBP));
  /* 125b3d91 mov ebp, esp */
  EBP = (ESP);
  /* 125b3d93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b3d95 pop ebp */
  EBP = (pop32());
  /* 125b3d96 ret  */
  ESPCHK(0x125b3d90u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x125b3da0 (129 bytes, 56 insns) */
void f_125b3da0(void) {
  FTRACE(0x125b3da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b3da0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 125b3da4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 125b3da8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 125b3dae jne 0x125b3dec */
  if (!C.zf) goto L_125b3dec;
L_125b3db0:;
  /* 125b3db0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b3db2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b3db4 jne 0x125b3de4 */
  if (!C.zf) goto L_125b3de4;
  /* 125b3db6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125b3db8 je 0x125b3de0 */
  if (C.zf) goto L_125b3de0;
  /* 125b3dba cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b3dbd jne 0x125b3de4 */
  if (!C.zf) goto L_125b3de4;
  /* 125b3dbf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 125b3dc1 je 0x125b3de0 */
  if (C.zf) goto L_125b3de0;
  /* 125b3dc3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 125b3dc6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b3dc9 jne 0x125b3de4 */
  if (!C.zf) goto L_125b3de4;
  /* 125b3dcb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125b3dcd je 0x125b3de0 */
  if (C.zf) goto L_125b3de0;
  /* 125b3dcf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b3dd2 jne 0x125b3de4 */
  if (!C.zf) goto L_125b3de4;
  /* 125b3dd4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3dd7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3dda or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 125b3ddc jne 0x125b3db0 */
  if (!C.zf) goto L_125b3db0;
  /* 125b3dde mov edi, edi */
  EDI = (EDI);
L_125b3de0:;
  /* 125b3de0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b3de2 ret  */
  ESPCHK(0x125b3da0u, _esp0);
  ESP += 4; return;
  /* 125b3de3 nop  */
  /* nop */
L_125b3de4:;
  /* 125b3de4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b3de6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125b3de8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 125b3de9 ret  */
  ESPCHK(0x125b3da0u, _esp0);
  ESP += 4; return;
  /* 125b3dea mov edi, edi */
  EDI = (EDI);
L_125b3dec:;
  /* 125b3dec test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 125b3df2 je 0x125b3e08 */
  if (C.zf) goto L_125b3e08;
  /* 125b3df4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b3df6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 125b3df7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b3df9 jne 0x125b3de4 */
  if (!C.zf) goto L_125b3de4;
  /* 125b3dfb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 125b3dfc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125b3dfe je 0x125b3de0 */
  if (C.zf) goto L_125b3de0;
  /* 125b3e00 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 125b3e06 je 0x125b3db0 */
  if (C.zf) goto L_125b3db0;
L_125b3e08:;
  /* 125b3e08 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 125b3e0b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3e0e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b3e10 jne 0x125b3de4 */
  if (!C.zf) goto L_125b3de4;
  /* 125b3e12 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125b3e14 je 0x125b3de0 */
  if (C.zf) goto L_125b3de0;
  /* 125b3e16 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b3e19 jne 0x125b3de4 */
  if (!C.zf) goto L_125b3de4;
  /* 125b3e1b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 125b3e1d je 0x125b3de0 */
  if (C.zf) goto L_125b3de0;
  /* 125b3e1f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3e22 jmp 0x125b3db0 */
  goto L_125b3db0;
}

/* FUN_10013e30 @ 0x125b3e30 (62 bytes, 35 insns) */
void f_125b3e30(void) {
  FTRACE(0x125b3e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b3e30 push ebp */
  push32((uint32_t)(EBP));
  /* 125b3e31 mov ebp, esp */
  EBP = (ESP);
  /* 125b3e33 push esi */
  push32((uint32_t)(ESI));
  /* 125b3e34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b3e36 push eax */
  push32((uint32_t)(EAX));
  /* 125b3e37 push eax */
  push32((uint32_t)(EAX));
  /* 125b3e38 push eax */
  push32((uint32_t)(EAX));
  /* 125b3e39 push eax */
  push32((uint32_t)(EAX));
  /* 125b3e3a push eax */
  push32((uint32_t)(EAX));
  /* 125b3e3b push eax */
  push32((uint32_t)(EAX));
  /* 125b3e3c push eax */
  push32((uint32_t)(EAX));
  /* 125b3e3d push eax */
  push32((uint32_t)(EAX));
  /* 125b3e3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b3e41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125b3e44:;
  /* 125b3e44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b3e46 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125b3e48 je 0x125b3e51 */
  if (C.zf) goto L_125b3e51;
  /* 125b3e4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 125b3e4b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x125b3e4b");
  /* 125b3e4f jmp 0x125b3e44 */
  goto L_125b3e44;
L_125b3e51:;
  /* 125b3e51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3e54 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125b3e57 nop  */
  /* nop */
L_125b3e58:;
  /* 125b3e58 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 125b3e59 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125b3e5b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125b3e5d je 0x125b3e66 */
  if (C.zf) goto L_125b3e66;
  /* 125b3e5f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125b3e60 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x125b3e60");
  /* 125b3e64 jae 0x125b3e58 */
  if (!C.cf) goto L_125b3e58;
L_125b3e66:;
  /* 125b3e66 mov eax, ecx */
  EAX = (ECX);
  /* 125b3e68 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3e6b pop esi */
  ESI = (pop32());
  /* 125b3e6c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125b3e6d ret  */
  ESPCHK(0x125b3e30u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x125b3e70 (56 bytes, 31 insns) */
void f_125b3e70(void) {
  FTRACE(0x125b3e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b3e70 push ebp */
  push32((uint32_t)(EBP));
  /* 125b3e71 mov ebp, esp */
  EBP = (ESP);
  /* 125b3e73 push edi */
  push32((uint32_t)(EDI));
  /* 125b3e74 push esi */
  push32((uint32_t)(ESI));
  /* 125b3e75 push ebx */
  push32((uint32_t)(EBX));
  /* 125b3e76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b3e79 jecxz 0x125b3ea1 */
  x86_unimpl("jecxz @ 0x125b3e79");
  /* 125b3e7b mov ebx, ecx */
  EBX = (ECX);
  /* 125b3e7d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3e80 mov esi, edi */
  ESI = (EDI);
  /* 125b3e82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b3e84 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 125b3e86 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b3e88 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3e8a mov edi, esi */
  EDI = (ESI);
  /* 125b3e8c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 125b3e8f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 125b3e91 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 125b3e94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b3e96 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b3e99 ja 0x125b3e9f */
  if ((!C.cf&&!C.zf)) goto L_125b3e9f;
  /* 125b3e9b je 0x125b3ea1 */
  if (C.zf) goto L_125b3ea1;
  /* 125b3e9d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 125b3e9e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_125b3e9f:;
  /* 125b3e9f not ecx */
  ECX = (~(ECX));
L_125b3ea1:;
  /* 125b3ea1 mov eax, ecx */
  EAX = (ECX);
  /* 125b3ea3 pop ebx */
  EBX = (pop32());
  /* 125b3ea4 pop esi */
  ESI = (pop32());
  /* 125b3ea5 pop edi */
  EDI = (pop32());
  /* 125b3ea6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125b3ea7 ret  */
  ESPCHK(0x125b3e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013eb0 @ 0x125b3eb0 (58 bytes, 32 insns) */
void f_125b3eb0(void) {
  FTRACE(0x125b3eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b3eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b3eb1 mov ebp, esp */
  EBP = (ESP);
  /* 125b3eb3 push esi */
  push32((uint32_t)(ESI));
  /* 125b3eb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b3eb6 push eax */
  push32((uint32_t)(EAX));
  /* 125b3eb7 push eax */
  push32((uint32_t)(EAX));
  /* 125b3eb8 push eax */
  push32((uint32_t)(EAX));
  /* 125b3eb9 push eax */
  push32((uint32_t)(EAX));
  /* 125b3eba push eax */
  push32((uint32_t)(EAX));
  /* 125b3ebb push eax */
  push32((uint32_t)(EAX));
  /* 125b3ebc push eax */
  push32((uint32_t)(EAX));
  /* 125b3ebd push eax */
  push32((uint32_t)(EAX));
  /* 125b3ebe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b3ec1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125b3ec4:;
  /* 125b3ec4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b3ec6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125b3ec8 je 0x125b3ed1 */
  if (C.zf) goto L_125b3ed1;
  /* 125b3eca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 125b3ecb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x125b3ecb");
  /* 125b3ecf jmp 0x125b3ec4 */
  goto L_125b3ec4;
L_125b3ed1:;
  /* 125b3ed1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_125b3ed4:;
  /* 125b3ed4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125b3ed6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125b3ed8 je 0x125b3ee4 */
  if (C.zf) goto L_125b3ee4;
  /* 125b3eda inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125b3edb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x125b3edb");
  /* 125b3edf jae 0x125b3ed4 */
  if (!C.cf) goto L_125b3ed4;
  /* 125b3ee1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_125b3ee4:;
  /* 125b3ee4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3ee7 pop esi */
  ESI = (pop32());
  /* 125b3ee8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125b3ee9 ret  */
  ESPCHK(0x125b3eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ef0 @ 0x125b3ef0 (512 bytes, 147 insns) */
void f_125b3ef0(void) {
  FTRACE(0x125b3ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b3ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b3ef1 mov ebp, esp */
  EBP = (ESP);
  /* 125b3ef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b3ef6 cmp dword ptr [0x125d3b6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3efd jne 0x125b3f22 */
  if (!C.zf) goto L_125b3f22;
  /* 125b3eff call 0x125b49c0 */
  push32(0x125b3f04u); f_125b49c0();
  /* 125b3f04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b3f06 je 0x125b3f12 */
  if (C.zf) goto L_125b3f12;
  /* 125b3f08 mov eax, dword ptr [0x125d62e0] */
  EAX = (r32((uint32_t)(0x125d62e0)));
  /* 125b3f0d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b3f10 jmp 0x125b3f19 */
  goto L_125b3f19;
L_125b3f12:;
  /* 125b3f12 mov dword ptr [ebp - 8], 0x125b4a10 */
  w32((uint32_t)(EBP + -0x8), (0x125b4a10u));
L_125b3f19:;
  /* 125b3f19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b3f1c mov dword ptr [0x125d3b6c], ecx */
  w32((uint32_t)(0x125d3b6c), (ECX));
L_125b3f22:;
  /* 125b3f22 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3f26 jne 0x125b3f32 */
  if (!C.zf) goto L_125b3f32;
  /* 125b3f28 call 0x125b4810 */
  push32(0x125b3f2du); f_125b4810();
  /* 125b3f2d jmp 0x125b3ffe */
  goto L_125b3ffe;
L_125b3f32:;
  /* 125b3f32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3f35 mov dword ptr [0x125d3b5c], edx */
  w32((uint32_t)(0x125d3b5c), (EDX));
  /* 125b3f3b cmp dword ptr [0x125d3b5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3f42 je 0x125b3f64 */
  if (C.zf) goto L_125b3f64;
  /* 125b3f44 mov eax, dword ptr [0x125d3b5c] */
  EAX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b3f49 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b3f4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b3f4e je 0x125b3f64 */
  if (C.zf) goto L_125b3f64;
  /* 125b3f50 push 0x125d3b5c */
  push32((uint32_t)(0x125d3b5cu));
  /* 125b3f55 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125b3f57 push 0x125d2a90 */
  push32((uint32_t)(0x125d2a90u));
  /* 125b3f5c call 0x125b40f0 */
  push32(0x125b3f61u); f_125b40f0();
  /* 125b3f61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b3f64:;
  /* 125b3f64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b3f67 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b3f6a mov dword ptr [0x125d3b60], edx */
  w32((uint32_t)(0x125d3b60), (EDX));
  /* 125b3f70 cmp dword ptr [0x125d3b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3f77 je 0x125b3f99 */
  if (C.zf) goto L_125b3f99;
  /* 125b3f79 mov eax, dword ptr [0x125d3b60] */
  EAX = (r32((uint32_t)(0x125d3b60)));
  /* 125b3f7e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b3f81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b3f83 je 0x125b3f99 */
  if (C.zf) goto L_125b3f99;
  /* 125b3f85 push 0x125d3b60 */
  push32((uint32_t)(0x125d3b60u));
  /* 125b3f8a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 125b3f8c push 0x125d29d8 */
  push32((uint32_t)(0x125d29d8u));
  /* 125b3f91 call 0x125b40f0 */
  push32(0x125b3f96u); f_125b40f0();
  /* 125b3f96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b3f99:;
  /* 125b3f99 mov dword ptr [0x125d3b64], 0 */
  w32((uint32_t)(0x125d3b64), (0x0u));
  /* 125b3fa3 cmp dword ptr [0x125d3b5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3faa je 0x125b3fdd */
  if (C.zf) goto L_125b3fdd;
  /* 125b3fac mov edx, dword ptr [0x125d3b5c] */
  EDX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b3fb2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125b3fb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b3fb7 je 0x125b3fdd */
  if (C.zf) goto L_125b3fdd;
  /* 125b3fb9 cmp dword ptr [0x125d3b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3fc0 je 0x125b3fd6 */
  if (C.zf) goto L_125b3fd6;
  /* 125b3fc2 mov ecx, dword ptr [0x125d3b60] */
  ECX = (r32((uint32_t)(0x125d3b60)));
  /* 125b3fc8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b3fcb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b3fcd je 0x125b3fd6 */
  if (C.zf) goto L_125b3fd6;
  /* 125b3fcf call 0x125b4180 */
  push32(0x125b3fd4u); f_125b4180();
  /* 125b3fd4 jmp 0x125b3fdb */
  goto L_125b3fdb;
L_125b3fd6:;
  /* 125b3fd6 call 0x125b4570 */
  push32(0x125b3fdbu); f_125b4570();
L_125b3fdb:;
  /* 125b3fdb jmp 0x125b3ffe */
  goto L_125b3ffe;
L_125b3fdd:;
  /* 125b3fdd cmp dword ptr [0x125d3b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b3fe4 je 0x125b3ff9 */
  if (C.zf) goto L_125b3ff9;
  /* 125b3fe6 mov eax, dword ptr [0x125d3b60] */
  EAX = (r32((uint32_t)(0x125d3b60)));
  /* 125b3feb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b3fee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b3ff0 je 0x125b3ff9 */
  if (C.zf) goto L_125b3ff9;
  /* 125b3ff2 call 0x125b4710 */
  push32(0x125b3ff7u); f_125b4710();
  /* 125b3ff7 jmp 0x125b3ffe */
  goto L_125b3ffe;
L_125b3ff9:;
  /* 125b3ff9 call 0x125b4810 */
  push32(0x125b3ffeu); f_125b4810();
L_125b3ffe:;
  /* 125b3ffe cmp dword ptr [0x125d3b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4005 jne 0x125b400e */
  if (!C.zf) goto L_125b400e;
  /* 125b4007 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b4009 jmp 0x125b40ec */
  goto L_125b40ec;
L_125b400e:;
  /* 125b400e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4011 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4017 push edx */
  push32((uint32_t)(EDX));
  /* 125b4018 call 0x125b4840 */
  push32(0x125b401du); f_125b4840();
  /* 125b401d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4020 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b4023 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4027 je 0x125b403c */
  if (C.zf) goto L_125b403c;
  /* 125b4029 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b402c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b4031 push eax */
  push32((uint32_t)(EAX));
  /* 125b4032 call dword ptr [0x125d62e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62e4))), 0x125b4038u);
  /* 125b4038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b403a jne 0x125b4043 */
  if (!C.zf) goto L_125b4043;
L_125b403c:;
  /* 125b403c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b403e jmp 0x125b40ec */
  goto L_125b40ec;
L_125b4043:;
  /* 125b4043 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b4045 mov ecx, dword ptr [0x125d3b4c] */
  ECX = (r32((uint32_t)(0x125d3b4c)));
  /* 125b404b push ecx */
  push32((uint32_t)(ECX));
  /* 125b404c call dword ptr [0x125d62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62f4))), 0x125b4052u);
  /* 125b4052 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b4054 jne 0x125b405d */
  if (!C.zf) goto L_125b405d;
  /* 125b4056 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b4058 jmp 0x125b40ec */
  goto L_125b40ec;
L_125b405d:;
  /* 125b405d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4061 je 0x125b4088 */
  if (C.zf) goto L_125b4088;
  /* 125b4063 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b4066 mov ax, word ptr [0x125d3b4c] */
  AX = (r16((uint32_t)(0x125d3b4c)));
  /* 125b406c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 125b406f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b4072 mov dx, word ptr [0x125d3b68] */
  DX = (r16((uint32_t)(0x125d3b68)));
  /* 125b4079 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 125b407d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b4080 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 125b4084 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_125b4088:;
  /* 125b4088 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b408c je 0x125b40e7 */
  if (C.zf) goto L_125b40e7;
  /* 125b408e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125b4090 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b4093 push edx */
  push32((uint32_t)(EDX));
  /* 125b4094 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 125b4099 mov eax, dword ptr [0x125d3b4c] */
  EAX = (r32((uint32_t)(0x125d3b4c)));
  /* 125b409e push eax */
  push32((uint32_t)(EAX));
  /* 125b409f call dword ptr [0x125d3b6c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d3b6c))), 0x125b40a5u);
  /* 125b40a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b40a7 jne 0x125b40ad */
  if (!C.zf) goto L_125b40ad;
  /* 125b40a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b40ab jmp 0x125b40ec */
  goto L_125b40ec;
L_125b40ad:;
  /* 125b40ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125b40af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b40b2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b40b5 push ecx */
  push32((uint32_t)(ECX));
  /* 125b40b6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 125b40bb mov edx, dword ptr [0x125d3b68] */
  EDX = (r32((uint32_t)(0x125d3b68)));
  /* 125b40c1 push edx */
  push32((uint32_t)(EDX));
  /* 125b40c2 call dword ptr [0x125d3b6c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d3b6c))), 0x125b40c8u);
  /* 125b40c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b40ca jne 0x125b40d0 */
  if (!C.zf) goto L_125b40d0;
  /* 125b40cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b40ce jmp 0x125b40ec */
  goto L_125b40ec;
L_125b40d0:;
  /* 125b40d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 125b40d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b40d5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b40da push eax */
  push32((uint32_t)(EAX));
  /* 125b40db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b40de push ecx */
  push32((uint32_t)(ECX));
  /* 125b40df call 0x125aac50 */
  push32(0x125b40e4u); f_125aac50();
  /* 125b40e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b40e7:;
  /* 125b40e7 mov eax, 1 */
  EAX = (0x1u);
L_125b40ec:;
  /* 125b40ec mov esp, ebp */
  ESP = (EBP);
  /* 125b40ee pop ebp */
  EBP = (pop32());
  /* 125b40ef ret  */
  ESPCHK(0x125b3ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_100140f0 @ 0x125b40f0 (130 bytes, 47 insns) */
void f_125b40f0(void) {
  FTRACE(0x125b40f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b40f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b40f1 mov ebp, esp */
  EBP = (ESP);
  /* 125b40f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b40f6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 125b40fd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_125b4104:;
  /* 125b4104 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4107 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b410a jg 0x125b416e */
  if ((!C.zf&&C.sf==C.of)) goto L_125b416e;
  /* 125b410c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4110 je 0x125b416e */
  if (C.zf) goto L_125b416e;
  /* 125b4112 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4115 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4118 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b4119 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b411b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125b411d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b4120 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b4123 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4126 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 125b4129 push eax */
  push32((uint32_t)(EAX));
  /* 125b412a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b412d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b412f push edx */
  push32((uint32_t)(EDX));
  /* 125b4130 call 0x125b67e0 */
  push32(0x125b4135u); f_125b67e0();
  /* 125b4135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4138 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b413b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b413f jne 0x125b4152 */
  if (!C.zf) goto L_125b4152;
  /* 125b4141 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b4144 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4147 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 125b414b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b414e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125b4150 jmp 0x125b416c */
  goto L_125b416c;
L_125b4152:;
  /* 125b4152 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4156 jge 0x125b4163 */
  if ((C.sf==C.of)) goto L_125b4163;
  /* 125b4158 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b415b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b415e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 125b4161 jmp 0x125b416c */
  goto L_125b416c;
L_125b4163:;
  /* 125b4163 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b4166 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4169 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125b416c:;
  /* 125b416c jmp 0x125b4104 */
  goto L_125b4104;
L_125b416e:;
  /* 125b416e mov esp, ebp */
  ESP = (EBP);
  /* 125b4170 pop ebp */
  EBP = (pop32());
  /* 125b4171 ret  */
  ESPCHK(0x125b40f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014180 @ 0x125b4180 (186 bytes, 50 insns) */
void f_125b4180(void) {
  FTRACE(0x125b4180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4180 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4181 mov ebp, esp */
  EBP = (ESP);
  /* 125b4183 push ecx */
  push32((uint32_t)(ECX));
  /* 125b4184 mov eax, dword ptr [0x125d3b5c] */
  EAX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b4189 push eax */
  push32((uint32_t)(EAX));
  /* 125b418a call 0x125aaf40 */
  push32(0x125b418fu); f_125aaf40();
  /* 125b418f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4192 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b4194 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4197 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 125b419a mov dword ptr [0x125d3b58], ecx */
  w32((uint32_t)(0x125d3b58), (ECX));
  /* 125b41a0 mov edx, dword ptr [0x125d3b60] */
  EDX = (r32((uint32_t)(0x125d3b60)));
  /* 125b41a6 push edx */
  push32((uint32_t)(EDX));
  /* 125b41a7 call 0x125aaf40 */
  push32(0x125b41acu); f_125aaf40();
  /* 125b41ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b41af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b41b1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b41b4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 125b41b7 mov dword ptr [0x125d3b50], ecx */
  w32((uint32_t)(0x125d3b50), (ECX));
  /* 125b41bd mov dword ptr [0x125d3b4c], 0 */
  w32((uint32_t)(0x125d3b4c), (0x0u));
  /* 125b41c7 cmp dword ptr [0x125d3b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b41ce je 0x125b41d9 */
  if (C.zf) goto L_125b41d9;
  /* 125b41d0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 125b41d7 jmp 0x125b41eb */
  goto L_125b41eb;
L_125b41d9:;
  /* 125b41d9 mov edx, dword ptr [0x125d3b5c] */
  EDX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b41df push edx */
  push32((uint32_t)(EDX));
  /* 125b41e0 call 0x125b4c20 */
  push32(0x125b41e5u); f_125b4c20();
  /* 125b41e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b41e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125b41eb:;
  /* 125b41eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b41ee mov dword ptr [0x125d3b54], eax */
  w32((uint32_t)(0x125d3b54), (EAX));
  /* 125b41f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b41f5 push 0x125b4240 */
  push32((uint32_t)(0x125b4240u));
  /* 125b41fa call dword ptr [0x125d62e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62e8))), 0x125b4200u);
  /* 125b4200 mov ecx, dword ptr [0x125d3b64] */
  ECX = (r32((uint32_t)(0x125d3b64)));
  /* 125b4206 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 125b420c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b420e je 0x125b422c */
  if (C.zf) goto L_125b422c;
  /* 125b4210 mov edx, dword ptr [0x125d3b64] */
  EDX = (r32((uint32_t)(0x125d3b64)));
  /* 125b4216 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 125b421c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b421e je 0x125b422c */
  if (C.zf) goto L_125b422c;
  /* 125b4220 mov eax, dword ptr [0x125d3b64] */
  EAX = (r32((uint32_t)(0x125d3b64)));
  /* 125b4225 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 125b4228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b422a jne 0x125b4236 */
  if (!C.zf) goto L_125b4236;
L_125b422c:;
  /* 125b422c mov dword ptr [0x125d3b64], 0 */
  w32((uint32_t)(0x125d3b64), (0x0u));
L_125b4236:;
  /* 125b4236 mov esp, ebp */
  ESP = (EBP);
  /* 125b4238 pop ebp */
  EBP = (pop32());
  /* 125b4239 ret  */
  ESPCHK(0x125b4180u, _esp0);
  ESP += 4; return;
}

/* FUN_10014240 @ 0x125b4240 (804 bytes, 220 insns) */
void f_125b4240(void) {
  FTRACE(0x125b4240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4240 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4241 mov ebp, esp */
  EBP = (ESP);
  /* 125b4243 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4249 push eax */
  push32((uint32_t)(EAX));
  /* 125b424a call 0x125b4ba0 */
  push32(0x125b424fu); f_125b4ba0();
  /* 125b424f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4252 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 125b4255 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 125b4257 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125b425a push ecx */
  push32((uint32_t)(ECX));
  /* 125b425b mov edx, dword ptr [0x125d3b50] */
  EDX = (r32((uint32_t)(0x125d3b50)));
  /* 125b4261 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b4263 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4265 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 125b426b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4271 push edx */
  push32((uint32_t)(EDX));
  /* 125b4272 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b4275 push eax */
  push32((uint32_t)(EAX));
  /* 125b4276 call dword ptr [0x125d3b6c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d3b6c))), 0x125b427cu);
  /* 125b427c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b427e jne 0x125b4294 */
  if (!C.zf) goto L_125b4294;
  /* 125b4280 mov dword ptr [0x125d3b64], 0 */
  w32((uint32_t)(0x125d3b64), (0x0u));
  /* 125b428a mov eax, 1 */
  EAX = (0x1u);
  /* 125b428f jmp 0x125b455e */
  goto L_125b455e;
L_125b4294:;
  /* 125b4294 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125b4297 push ecx */
  push32((uint32_t)(ECX));
  /* 125b4298 mov edx, dword ptr [0x125d3b60] */
  EDX = (r32((uint32_t)(0x125d3b60)));
  /* 125b429e push edx */
  push32((uint32_t)(EDX));
  /* 125b429f call 0x125b67e0 */
  push32(0x125b42a4u); f_125b67e0();
  /* 125b42a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b42a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b42a9 jne 0x125b43cf */
  if (!C.zf) goto L_125b43cf;
  /* 125b42af push 0x78 */
  push32((uint32_t)(0x78u));
  /* 125b42b1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 125b42b4 push eax */
  push32((uint32_t)(EAX));
  /* 125b42b5 mov ecx, dword ptr [0x125d3b58] */
  ECX = (r32((uint32_t)(0x125d3b58)));
  /* 125b42bb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b42bd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b42bf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 125b42c5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b42cb push ecx */
  push32((uint32_t)(ECX));
  /* 125b42cc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b42cf push edx */
  push32((uint32_t)(EDX));
  /* 125b42d0 call dword ptr [0x125d3b6c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d3b6c))), 0x125b42d6u);
  /* 125b42d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b42d8 jne 0x125b42ee */
  if (!C.zf) goto L_125b42ee;
  /* 125b42da mov dword ptr [0x125d3b64], 0 */
  w32((uint32_t)(0x125d3b64), (0x0u));
  /* 125b42e4 mov eax, 1 */
  EAX = (0x1u);
  /* 125b42e9 jmp 0x125b455e */
  goto L_125b455e;
L_125b42ee:;
  /* 125b42ee lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 125b42f1 push eax */
  push32((uint32_t)(EAX));
  /* 125b42f2 mov ecx, dword ptr [0x125d3b5c] */
  ECX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b42f8 push ecx */
  push32((uint32_t)(ECX));
  /* 125b42f9 call 0x125b67e0 */
  push32(0x125b42feu); f_125b67e0();
  /* 125b42fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b4303 jne 0x125b4330 */
  if (!C.zf) goto L_125b4330;
  /* 125b4305 mov edx, dword ptr [0x125d3b64] */
  EDX = (r32((uint32_t)(0x125d3b64)));
  /* 125b430b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 125b4311 mov dword ptr [0x125d3b64], edx */
  w32((uint32_t)(0x125d3b64), (EDX));
  /* 125b4317 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b431a mov dword ptr [0x125d3b68], eax */
  w32((uint32_t)(0x125d3b68), (EAX));
  /* 125b431f mov ecx, dword ptr [0x125d3b68] */
  ECX = (r32((uint32_t)(0x125d3b68)));
  /* 125b4325 mov dword ptr [0x125d3b4c], ecx */
  w32((uint32_t)(0x125d3b4c), (ECX));
  /* 125b432b jmp 0x125b43cf */
  goto L_125b43cf;
L_125b4330:;
  /* 125b4330 mov edx, dword ptr [0x125d3b64] */
  EDX = (r32((uint32_t)(0x125d3b64)));
  /* 125b4336 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 125b4339 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b433b jne 0x125b43cf */
  if (!C.zf) goto L_125b43cf;
  /* 125b4341 cmp dword ptr [0x125d3b54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4348 je 0x125b439d */
  if (C.zf) goto L_125b439d;
  /* 125b434a mov eax, dword ptr [0x125d3b54] */
  EAX = (r32((uint32_t)(0x125d3b54)));
  /* 125b434f push eax */
  push32((uint32_t)(EAX));
  /* 125b4350 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125b4353 push ecx */
  push32((uint32_t)(ECX));
  /* 125b4354 mov edx, dword ptr [0x125d3b5c] */
  EDX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b435a push edx */
  push32((uint32_t)(EDX));
  /* 125b435b call 0x125b68b0 */
  push32(0x125b4360u); f_125b68b0();
  /* 125b4360 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4363 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b4365 jne 0x125b439d */
  if (!C.zf) goto L_125b439d;
  /* 125b4367 mov eax, dword ptr [0x125d3b64] */
  EAX = (r32((uint32_t)(0x125d3b64)));
  /* 125b436c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 125b436e mov dword ptr [0x125d3b64], eax */
  w32((uint32_t)(0x125d3b64), (EAX));
  /* 125b4373 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b4376 mov dword ptr [0x125d3b68], ecx */
  w32((uint32_t)(0x125d3b68), (ECX));
  /* 125b437c mov edx, dword ptr [0x125d3b5c] */
  EDX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b4382 push edx */
  push32((uint32_t)(EDX));
  /* 125b4383 call 0x125aaf40 */
  push32(0x125b4388u); f_125aaf40();
  /* 125b4388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b438b cmp eax, dword ptr [0x125d3b54] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d3b54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4391 jne 0x125b439b */
  if (!C.zf) goto L_125b439b;
  /* 125b4393 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b4396 mov dword ptr [0x125d3b4c], eax */
  w32((uint32_t)(0x125d3b4c), (EAX));
L_125b439b:;
  /* 125b439b jmp 0x125b43cf */
  goto L_125b43cf;
L_125b439d:;
  /* 125b439d mov ecx, dword ptr [0x125d3b64] */
  ECX = (r32((uint32_t)(0x125d3b64)));
  /* 125b43a3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125b43a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b43a8 jne 0x125b43cf */
  if (!C.zf) goto L_125b43cf;
  /* 125b43aa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b43ad push edx */
  push32((uint32_t)(EDX));
  /* 125b43ae call 0x125b48e0 */
  push32(0x125b43b3u); f_125b48e0();
  /* 125b43b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b43b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b43b8 je 0x125b43cf */
  if (C.zf) goto L_125b43cf;
  /* 125b43ba mov eax, dword ptr [0x125d3b64] */
  EAX = (r32((uint32_t)(0x125d3b64)));
  /* 125b43bf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 125b43c1 mov dword ptr [0x125d3b64], eax */
  w32((uint32_t)(0x125d3b64), (EAX));
  /* 125b43c6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b43c9 mov dword ptr [0x125d3b68], ecx */
  w32((uint32_t)(0x125d3b68), (ECX));
L_125b43cf:;
  /* 125b43cf mov edx, dword ptr [0x125d3b64] */
  EDX = (r32((uint32_t)(0x125d3b64)));
  /* 125b43d5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 125b43db cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b43e1 je 0x125b4551 */
  if (C.zf) goto L_125b4551;
  /* 125b43e7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 125b43e9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 125b43ec push eax */
  push32((uint32_t)(EAX));
  /* 125b43ed mov ecx, dword ptr [0x125d3b58] */
  ECX = (r32((uint32_t)(0x125d3b58)));
  /* 125b43f3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b43f5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b43f7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 125b43fd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4403 push ecx */
  push32((uint32_t)(ECX));
  /* 125b4404 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b4407 push edx */
  push32((uint32_t)(EDX));
  /* 125b4408 call dword ptr [0x125d3b6c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d3b6c))), 0x125b440eu);
  /* 125b440e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b4410 jne 0x125b4426 */
  if (!C.zf) goto L_125b4426;
  /* 125b4412 mov dword ptr [0x125d3b64], 0 */
  w32((uint32_t)(0x125d3b64), (0x0u));
  /* 125b441c mov eax, 1 */
  EAX = (0x1u);
  /* 125b4421 jmp 0x125b455e */
  goto L_125b455e;
L_125b4426:;
  /* 125b4426 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 125b4429 push eax */
  push32((uint32_t)(EAX));
  /* 125b442a mov ecx, dword ptr [0x125d3b5c] */
  ECX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b4430 push ecx */
  push32((uint32_t)(ECX));
  /* 125b4431 call 0x125b67e0 */
  push32(0x125b4436u); f_125b67e0();
  /* 125b4436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b443b jne 0x125b44f0 */
  if (!C.zf) goto L_125b44f0;
  /* 125b4441 mov edx, dword ptr [0x125d3b64] */
  EDX = (r32((uint32_t)(0x125d3b64)));
  /* 125b4447 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 125b444a mov dword ptr [0x125d3b64], edx */
  w32((uint32_t)(0x125d3b64), (EDX));
  /* 125b4450 cmp dword ptr [0x125d3b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4457 je 0x125b447a */
  if (C.zf) goto L_125b447a;
  /* 125b4459 mov eax, dword ptr [0x125d3b64] */
  EAX = (r32((uint32_t)(0x125d3b64)));
  /* 125b445e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 125b4461 mov dword ptr [0x125d3b64], eax */
  w32((uint32_t)(0x125d3b64), (EAX));
  /* 125b4466 cmp dword ptr [0x125d3b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b446d jne 0x125b4478 */
  if (!C.zf) goto L_125b4478;
  /* 125b446f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b4472 mov dword ptr [0x125d3b4c], ecx */
  w32((uint32_t)(0x125d3b4c), (ECX));
L_125b4478:;
  /* 125b4478 jmp 0x125b44ee */
  goto L_125b44ee;
L_125b447a:;
  /* 125b447a cmp dword ptr [0x125d3b54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4481 je 0x125b44cf */
  if (C.zf) goto L_125b44cf;
  /* 125b4483 mov edx, dword ptr [0x125d3b5c] */
  EDX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b4489 push edx */
  push32((uint32_t)(EDX));
  /* 125b448a call 0x125aaf40 */
  push32(0x125b448fu); f_125aaf40();
  /* 125b448f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4492 cmp eax, dword ptr [0x125d3b54] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d3b54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4498 jne 0x125b44cf */
  if (!C.zf) goto L_125b44cf;
  /* 125b449a push 1 */
  push32((uint32_t)(0x1u));
  /* 125b449c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b449f push eax */
  push32((uint32_t)(EAX));
  /* 125b44a0 call 0x125b4930 */
  push32(0x125b44a5u); f_125b4930();
  /* 125b44a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b44a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b44aa je 0x125b44cd */
  if (C.zf) goto L_125b44cd;
  /* 125b44ac mov ecx, dword ptr [0x125d3b64] */
  ECX = (r32((uint32_t)(0x125d3b64)));
  /* 125b44b2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 125b44b5 mov dword ptr [0x125d3b64], ecx */
  w32((uint32_t)(0x125d3b64), (ECX));
  /* 125b44bb cmp dword ptr [0x125d3b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b44c2 jne 0x125b44cd */
  if (!C.zf) goto L_125b44cd;
  /* 125b44c4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b44c7 mov dword ptr [0x125d3b4c], edx */
  w32((uint32_t)(0x125d3b4c), (EDX));
L_125b44cd:;
  /* 125b44cd jmp 0x125b44ee */
  goto L_125b44ee;
L_125b44cf:;
  /* 125b44cf mov eax, dword ptr [0x125d3b64] */
  EAX = (r32((uint32_t)(0x125d3b64)));
  /* 125b44d4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 125b44d7 mov dword ptr [0x125d3b64], eax */
  w32((uint32_t)(0x125d3b64), (EAX));
  /* 125b44dc cmp dword ptr [0x125d3b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b44e3 jne 0x125b44ee */
  if (!C.zf) goto L_125b44ee;
  /* 125b44e5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b44e8 mov dword ptr [0x125d3b4c], ecx */
  w32((uint32_t)(0x125d3b4c), (ECX));
L_125b44ee:;
  /* 125b44ee jmp 0x125b4551 */
  goto L_125b4551;
L_125b44f0:;
  /* 125b44f0 cmp dword ptr [0x125d3b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b44f7 jne 0x125b4551 */
  if (!C.zf) goto L_125b4551;
  /* 125b44f9 cmp dword ptr [0x125d3b54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4500 je 0x125b4551 */
  if (C.zf) goto L_125b4551;
  /* 125b4502 mov edx, dword ptr [0x125d3b54] */
  EDX = (r32((uint32_t)(0x125d3b54)));
  /* 125b4508 push edx */
  push32((uint32_t)(EDX));
  /* 125b4509 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 125b450c push eax */
  push32((uint32_t)(EAX));
  /* 125b450d mov ecx, dword ptr [0x125d3b5c] */
  ECX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b4513 push ecx */
  push32((uint32_t)(ECX));
  /* 125b4514 call 0x125b68b0 */
  push32(0x125b4519u); f_125b68b0();
  /* 125b4519 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b451c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b451e jne 0x125b4551 */
  if (!C.zf) goto L_125b4551;
  /* 125b4520 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b4522 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b4525 push edx */
  push32((uint32_t)(EDX));
  /* 125b4526 call 0x125b4930 */
  push32(0x125b452bu); f_125b4930();
  /* 125b452b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b452e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b4530 je 0x125b4551 */
  if (C.zf) goto L_125b4551;
  /* 125b4532 mov eax, dword ptr [0x125d3b64] */
  EAX = (r32((uint32_t)(0x125d3b64)));
  /* 125b4537 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 125b453a mov dword ptr [0x125d3b64], eax */
  w32((uint32_t)(0x125d3b64), (EAX));
  /* 125b453f cmp dword ptr [0x125d3b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4546 jne 0x125b4551 */
  if (!C.zf) goto L_125b4551;
  /* 125b4548 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b454b mov dword ptr [0x125d3b4c], ecx */
  w32((uint32_t)(0x125d3b4c), (ECX));
L_125b4551:;
  /* 125b4551 mov eax, dword ptr [0x125d3b64] */
  EAX = (r32((uint32_t)(0x125d3b64)));
  /* 125b4556 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 125b4559 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b455b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b455d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_125b455e:;
  /* 125b455e mov esp, ebp */
  ESP = (EBP);
  /* 125b4560 pop ebp */
  EBP = (pop32());
  /* 125b4561 ret 4 */
  ESPCHK(0x125b4240u, _esp0);
  ESP += 8; return;
}

/* FUN_10014570 @ 0x125b4570 (116 bytes, 33 insns) */
void f_125b4570(void) {
  FTRACE(0x125b4570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4570 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4571 mov ebp, esp */
  EBP = (ESP);
  /* 125b4573 push ecx */
  push32((uint32_t)(ECX));
  /* 125b4574 mov eax, dword ptr [0x125d3b5c] */
  EAX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b4579 push eax */
  push32((uint32_t)(EAX));
  /* 125b457a call 0x125aaf40 */
  push32(0x125b457fu); f_125aaf40();
  /* 125b457f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4582 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b4584 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4587 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 125b458a mov dword ptr [0x125d3b58], ecx */
  w32((uint32_t)(0x125d3b58), (ECX));
  /* 125b4590 cmp dword ptr [0x125d3b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4597 je 0x125b45a2 */
  if (C.zf) goto L_125b45a2;
  /* 125b4599 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 125b45a0 jmp 0x125b45b4 */
  goto L_125b45b4;
L_125b45a2:;
  /* 125b45a2 mov edx, dword ptr [0x125d3b5c] */
  EDX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b45a8 push edx */
  push32((uint32_t)(EDX));
  /* 125b45a9 call 0x125b4c20 */
  push32(0x125b45aeu); f_125b4c20();
  /* 125b45ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b45b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125b45b4:;
  /* 125b45b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b45b7 mov dword ptr [0x125d3b54], eax */
  w32((uint32_t)(0x125d3b54), (EAX));
  /* 125b45bc push 1 */
  push32((uint32_t)(0x1u));
  /* 125b45be push 0x125b45f0 */
  push32((uint32_t)(0x125b45f0u));
  /* 125b45c3 call dword ptr [0x125d62e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62e8))), 0x125b45c9u);
  /* 125b45c9 mov ecx, dword ptr [0x125d3b64] */
  ECX = (r32((uint32_t)(0x125d3b64)));
  /* 125b45cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 125b45d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b45d4 jne 0x125b45e0 */
  if (!C.zf) goto L_125b45e0;
  /* 125b45d6 mov dword ptr [0x125d3b64], 0 */
  w32((uint32_t)(0x125d3b64), (0x0u));
L_125b45e0:;
  /* 125b45e0 mov esp, ebp */
  ESP = (EBP);
  /* 125b45e2 pop ebp */
  EBP = (pop32());
  /* 125b45e3 ret  */
  ESPCHK(0x125b4570u, _esp0);
  ESP += 4; return;
}

/* FUN_100145f0 @ 0x125b45f0 (287 bytes, 86 insns) */
void f_125b45f0(void) {
  FTRACE(0x125b45f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b45f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b45f1 mov ebp, esp */
  EBP = (ESP);
  /* 125b45f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b45f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b45f9 push eax */
  push32((uint32_t)(EAX));
  /* 125b45fa call 0x125b4ba0 */
  push32(0x125b45ffu); f_125b4ba0();
  /* 125b45ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4602 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 125b4605 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 125b4607 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125b460a push ecx */
  push32((uint32_t)(ECX));
  /* 125b460b mov edx, dword ptr [0x125d3b58] */
  EDX = (r32((uint32_t)(0x125d3b58)));
  /* 125b4611 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b4613 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4615 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 125b461b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4621 push edx */
  push32((uint32_t)(EDX));
  /* 125b4622 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b4625 push eax */
  push32((uint32_t)(EAX));
  /* 125b4626 call dword ptr [0x125d3b6c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d3b6c))), 0x125b462cu);
  /* 125b462c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b462e jne 0x125b4644 */
  if (!C.zf) goto L_125b4644;
  /* 125b4630 mov dword ptr [0x125d3b64], 0 */
  w32((uint32_t)(0x125d3b64), (0x0u));
  /* 125b463a mov eax, 1 */
  EAX = (0x1u);
  /* 125b463f jmp 0x125b4709 */
  goto L_125b4709;
L_125b4644:;
  /* 125b4644 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125b4647 push ecx */
  push32((uint32_t)(ECX));
  /* 125b4648 mov edx, dword ptr [0x125d3b5c] */
  EDX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b464e push edx */
  push32((uint32_t)(EDX));
  /* 125b464f call 0x125b67e0 */
  push32(0x125b4654u); f_125b67e0();
  /* 125b4654 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b4659 jne 0x125b4699 */
  if (!C.zf) goto L_125b4699;
  /* 125b465b cmp dword ptr [0x125d3b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4662 jne 0x125b4676 */
  if (!C.zf) goto L_125b4676;
  /* 125b4664 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b4666 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b4669 push eax */
  push32((uint32_t)(EAX));
  /* 125b466a call 0x125b4930 */
  push32(0x125b466fu); f_125b4930();
  /* 125b466f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4672 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b4674 je 0x125b4697 */
  if (C.zf) goto L_125b4697;
L_125b4676:;
  /* 125b4676 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b4679 mov dword ptr [0x125d3b68], ecx */
  w32((uint32_t)(0x125d3b68), (ECX));
  /* 125b467f mov edx, dword ptr [0x125d3b68] */
  EDX = (r32((uint32_t)(0x125d3b68)));
  /* 125b4685 mov dword ptr [0x125d3b4c], edx */
  w32((uint32_t)(0x125d3b4c), (EDX));
  /* 125b468b mov eax, dword ptr [0x125d3b64] */
  EAX = (r32((uint32_t)(0x125d3b64)));
  /* 125b4690 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 125b4692 mov dword ptr [0x125d3b64], eax */
  w32((uint32_t)(0x125d3b64), (EAX));
L_125b4697:;
  /* 125b4697 jmp 0x125b46fc */
  goto L_125b46fc;
L_125b4699:;
  /* 125b4699 cmp dword ptr [0x125d3b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b46a0 jne 0x125b46fc */
  if (!C.zf) goto L_125b46fc;
  /* 125b46a2 cmp dword ptr [0x125d3b54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b46a9 je 0x125b46fc */
  if (C.zf) goto L_125b46fc;
  /* 125b46ab mov ecx, dword ptr [0x125d3b54] */
  ECX = (r32((uint32_t)(0x125d3b54)));
  /* 125b46b1 push ecx */
  push32((uint32_t)(ECX));
  /* 125b46b2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 125b46b5 push edx */
  push32((uint32_t)(EDX));
  /* 125b46b6 mov eax, dword ptr [0x125d3b5c] */
  EAX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b46bb push eax */
  push32((uint32_t)(EAX));
  /* 125b46bc call 0x125b68b0 */
  push32(0x125b46c1u); f_125b68b0();
  /* 125b46c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b46c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b46c6 jne 0x125b46fc */
  if (!C.zf) goto L_125b46fc;
  /* 125b46c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b46ca mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b46cd push ecx */
  push32((uint32_t)(ECX));
  /* 125b46ce call 0x125b4930 */
  push32(0x125b46d3u); f_125b4930();
  /* 125b46d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b46d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b46d8 je 0x125b46fc */
  if (C.zf) goto L_125b46fc;
  /* 125b46da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b46dd mov dword ptr [0x125d3b68], edx */
  w32((uint32_t)(0x125d3b68), (EDX));
  /* 125b46e3 mov eax, dword ptr [0x125d3b68] */
  EAX = (r32((uint32_t)(0x125d3b68)));
  /* 125b46e8 mov dword ptr [0x125d3b4c], eax */
  w32((uint32_t)(0x125d3b4c), (EAX));
  /* 125b46ed mov ecx, dword ptr [0x125d3b64] */
  ECX = (r32((uint32_t)(0x125d3b64)));
  /* 125b46f3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 125b46f6 mov dword ptr [0x125d3b64], ecx */
  w32((uint32_t)(0x125d3b64), (ECX));
L_125b46fc:;
  /* 125b46fc mov eax, dword ptr [0x125d3b64] */
  EAX = (r32((uint32_t)(0x125d3b64)));
  /* 125b4701 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 125b4704 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b4706 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4708 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_125b4709:;
  /* 125b4709 mov esp, ebp */
  ESP = (EBP);
  /* 125b470b pop ebp */
  EBP = (pop32());
  /* 125b470c ret 4 */
  ESPCHK(0x125b45f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10014710 @ 0x125b4710 (69 bytes, 20 insns) */
void f_125b4710(void) {
  FTRACE(0x125b4710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4710 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4711 mov ebp, esp */
  EBP = (ESP);
  /* 125b4713 mov eax, dword ptr [0x125d3b60] */
  EAX = (r32((uint32_t)(0x125d3b60)));
  /* 125b4718 push eax */
  push32((uint32_t)(EAX));
  /* 125b4719 call 0x125aaf40 */
  push32(0x125b471eu); f_125aaf40();
  /* 125b471e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4721 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b4723 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4726 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 125b4729 mov dword ptr [0x125d3b50], ecx */
  w32((uint32_t)(0x125d3b50), (ECX));
  /* 125b472f push 1 */
  push32((uint32_t)(0x1u));
  /* 125b4731 push 0x125b4760 */
  push32((uint32_t)(0x125b4760u));
  /* 125b4736 call dword ptr [0x125d62e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62e8))), 0x125b473cu);
  /* 125b473c mov edx, dword ptr [0x125d3b64] */
  EDX = (r32((uint32_t)(0x125d3b64)));
  /* 125b4742 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125b4745 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b4747 jne 0x125b4753 */
  if (!C.zf) goto L_125b4753;
  /* 125b4749 mov dword ptr [0x125d3b64], 0 */
  w32((uint32_t)(0x125d3b64), (0x0u));
L_125b4753:;
  /* 125b4753 pop ebp */
  EBP = (pop32());
  /* 125b4754 ret  */
  ESPCHK(0x125b4710u, _esp0);
  ESP += 4; return;
}

/* FUN_10014760 @ 0x125b4760 (172 bytes, 54 insns) */
void f_125b4760(void) {
  FTRACE(0x125b4760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4760 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4761 mov ebp, esp */
  EBP = (ESP);
  /* 125b4763 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4769 push eax */
  push32((uint32_t)(EAX));
  /* 125b476a call 0x125b4ba0 */
  push32(0x125b476fu); f_125b4ba0();
  /* 125b476f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4772 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 125b4775 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 125b4777 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125b477a push ecx */
  push32((uint32_t)(ECX));
  /* 125b477b mov edx, dword ptr [0x125d3b50] */
  EDX = (r32((uint32_t)(0x125d3b50)));
  /* 125b4781 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b4783 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4785 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 125b478b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4791 push edx */
  push32((uint32_t)(EDX));
  /* 125b4792 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b4795 push eax */
  push32((uint32_t)(EAX));
  /* 125b4796 call dword ptr [0x125d3b6c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d3b6c))), 0x125b479cu);
  /* 125b479c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b479e jne 0x125b47b1 */
  if (!C.zf) goto L_125b47b1;
  /* 125b47a0 mov dword ptr [0x125d3b64], 0 */
  w32((uint32_t)(0x125d3b64), (0x0u));
  /* 125b47aa mov eax, 1 */
  EAX = (0x1u);
  /* 125b47af jmp 0x125b4806 */
  goto L_125b4806;
L_125b47b1:;
  /* 125b47b1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125b47b4 push ecx */
  push32((uint32_t)(ECX));
  /* 125b47b5 mov edx, dword ptr [0x125d3b60] */
  EDX = (r32((uint32_t)(0x125d3b60)));
  /* 125b47bb push edx */
  push32((uint32_t)(EDX));
  /* 125b47bc call 0x125b67e0 */
  push32(0x125b47c1u); f_125b67e0();
  /* 125b47c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b47c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b47c6 jne 0x125b47f9 */
  if (!C.zf) goto L_125b47f9;
  /* 125b47c8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b47cb push eax */
  push32((uint32_t)(EAX));
  /* 125b47cc call 0x125b48e0 */
  push32(0x125b47d1u); f_125b48e0();
  /* 125b47d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b47d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b47d6 je 0x125b47f9 */
  if (C.zf) goto L_125b47f9;
  /* 125b47d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125b47db mov dword ptr [0x125d3b68], ecx */
  w32((uint32_t)(0x125d3b68), (ECX));
  /* 125b47e1 mov edx, dword ptr [0x125d3b68] */
  EDX = (r32((uint32_t)(0x125d3b68)));
  /* 125b47e7 mov dword ptr [0x125d3b4c], edx */
  w32((uint32_t)(0x125d3b4c), (EDX));
  /* 125b47ed mov eax, dword ptr [0x125d3b64] */
  EAX = (r32((uint32_t)(0x125d3b64)));
  /* 125b47f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 125b47f4 mov dword ptr [0x125d3b64], eax */
  w32((uint32_t)(0x125d3b64), (EAX));
L_125b47f9:;
  /* 125b47f9 mov eax, dword ptr [0x125d3b64] */
  EAX = (r32((uint32_t)(0x125d3b64)));
  /* 125b47fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 125b4801 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b4803 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4805 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_125b4806:;
  /* 125b4806 mov esp, ebp */
  ESP = (EBP);
  /* 125b4808 pop ebp */
  EBP = (pop32());
  /* 125b4809 ret 4 */
  ESPCHK(0x125b4760u, _esp0);
  ESP += 8; return;
}

/* FUN_10014810 @ 0x125b4810 (43 bytes, 11 insns) */
void f_125b4810(void) {
  FTRACE(0x125b4810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4810 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4811 mov ebp, esp */
  EBP = (ESP);
  /* 125b4813 mov eax, dword ptr [0x125d3b64] */
  EAX = (r32((uint32_t)(0x125d3b64)));
  /* 125b4818 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 125b481d mov dword ptr [0x125d3b64], eax */
  w32((uint32_t)(0x125d3b64), (EAX));
  /* 125b4822 call dword ptr [0x125d62d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62d8))), 0x125b4828u);
  /* 125b4828 mov dword ptr [0x125d3b68], eax */
  w32((uint32_t)(0x125d3b68), (EAX));
  /* 125b482d mov ecx, dword ptr [0x125d3b68] */
  ECX = (r32((uint32_t)(0x125d3b68)));
  /* 125b4833 mov dword ptr [0x125d3b4c], ecx */
  w32((uint32_t)(0x125d3b4c), (ECX));
  /* 125b4839 pop ebp */
  EBP = (pop32());
  /* 125b483a ret  */
  ESPCHK(0x125b4810u, _esp0);
  ESP += 4; return;
}

/* FUN_10014840 @ 0x125b4840 (155 bytes, 57 insns) */
void f_125b4840(void) {
  FTRACE(0x125b4840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4840 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4841 mov ebp, esp */
  EBP = (ESP);
  /* 125b4843 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4846 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b484a je 0x125b486b */
  if (C.zf) goto L_125b486b;
  /* 125b484c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b484f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b4852 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b4854 je 0x125b486b */
  if (C.zf) goto L_125b486b;
  /* 125b4856 push 0x125cfe74 */
  push32((uint32_t)(0x125cfe74u));
  /* 125b485b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b485e push edx */
  push32((uint32_t)(EDX));
  /* 125b485f call 0x125b3da0 */
  push32(0x125b4864u); f_125b3da0();
  /* 125b4864 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4867 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b4869 jne 0x125b4893 */
  if (!C.zf) goto L_125b4893;
L_125b486b:;
  /* 125b486b push 8 */
  push32((uint32_t)(0x8u));
  /* 125b486d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 125b4870 push eax */
  push32((uint32_t)(EAX));
  /* 125b4871 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 125b4876 mov ecx, dword ptr [0x125d3b68] */
  ECX = (r32((uint32_t)(0x125d3b68)));
  /* 125b487c push ecx */
  push32((uint32_t)(ECX));
  /* 125b487d call dword ptr [0x125d3b6c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d3b6c))), 0x125b4883u);
  /* 125b4883 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b4885 jne 0x125b488b */
  if (!C.zf) goto L_125b488b;
  /* 125b4887 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b4889 jmp 0x125b48d7 */
  goto L_125b48d7;
L_125b488b:;
  /* 125b488b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 125b488e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125b4891 jmp 0x125b48cb */
  goto L_125b48cb;
L_125b4893:;
  /* 125b4893 push 0x125cfe70 */
  push32((uint32_t)(0x125cfe70u));
  /* 125b4898 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b489b push eax */
  push32((uint32_t)(EAX));
  /* 125b489c call 0x125b3da0 */
  push32(0x125b48a1u); f_125b3da0();
  /* 125b48a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b48a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b48a6 jne 0x125b48cb */
  if (!C.zf) goto L_125b48cb;
  /* 125b48a8 push 8 */
  push32((uint32_t)(0x8u));
  /* 125b48aa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 125b48ad push ecx */
  push32((uint32_t)(ECX));
  /* 125b48ae push 0xb */
  push32((uint32_t)(0xbu));
  /* 125b48b0 mov edx, dword ptr [0x125d3b68] */
  EDX = (r32((uint32_t)(0x125d3b68)));
  /* 125b48b6 push edx */
  push32((uint32_t)(EDX));
  /* 125b48b7 call dword ptr [0x125d3b6c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d3b6c))), 0x125b48bdu);
  /* 125b48bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b48bf jne 0x125b48c5 */
  if (!C.zf) goto L_125b48c5;
  /* 125b48c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b48c3 jmp 0x125b48d7 */
  goto L_125b48d7;
L_125b48c5:;
  /* 125b48c5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 125b48c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_125b48cb:;
  /* 125b48cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b48ce push ecx */
  push32((uint32_t)(ECX));
  /* 125b48cf call 0x125b69c0 */
  push32(0x125b48d4u); f_125b69c0();
  /* 125b48d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b48d7:;
  /* 125b48d7 mov esp, ebp */
  ESP = (EBP);
  /* 125b48d9 pop ebp */
  EBP = (pop32());
  /* 125b48da ret  */
  ESPCHK(0x125b4840u, _esp0);
  ESP += 4; return;
}

/* FUN_100148e0 @ 0x125b48e0 (79 bytes, 26 insns) */
void f_125b48e0(void) {
  FTRACE(0x125b48e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b48e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b48e1 mov ebp, esp */
  EBP = (ESP);
  /* 125b48e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b48e6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 125b48ea mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 125b48ee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125b48f5 jmp 0x125b4900 */
  goto L_125b4900;
L_125b48f7:;
  /* 125b48f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b48fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b48fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125b4900:;
  /* 125b4900 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4904 jae 0x125b4926 */
  if (!C.cf) goto L_125b4926;
  /* 125b4906 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b4909 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125b490f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b4912 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b4914 mov cx, word ptr [eax*2 + 0x125d29c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x125d29c4)));
  /* 125b491c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b491e jne 0x125b4924 */
  if (!C.zf) goto L_125b4924;
  /* 125b4920 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b4922 jmp 0x125b492b */
  goto L_125b492b;
L_125b4924:;
  /* 125b4924 jmp 0x125b48f7 */
  goto L_125b48f7;
L_125b4926:;
  /* 125b4926 mov eax, 1 */
  EAX = (0x1u);
L_125b492b:;
  /* 125b492b mov esp, ebp */
  ESP = (EBP);
  /* 125b492d pop ebp */
  EBP = (pop32());
  /* 125b492e ret  */
  ESPCHK(0x125b48e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014930 @ 0x125b4930 (135 bytes, 48 insns) */
void f_125b4930(void) {
  FTRACE(0x125b4930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4930 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4931 mov ebp, esp */
  EBP = (ESP);
  /* 125b4933 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4936 push esi */
  push32((uint32_t)(ESI));
  /* 125b4937 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b493a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b493f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b4944 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b4949 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 125b494c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b4951 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b4954 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 125b4956 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 125b4959 push ecx */
  push32((uint32_t)(ECX));
  /* 125b495a push 1 */
  push32((uint32_t)(0x1u));
  /* 125b495c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b495f push edx */
  push32((uint32_t)(EDX));
  /* 125b4960 call dword ptr [0x125d3b6c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d3b6c))), 0x125b4966u);
  /* 125b4966 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b4968 jne 0x125b496e */
  if (!C.zf) goto L_125b496e;
  /* 125b496a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b496c jmp 0x125b49b2 */
  goto L_125b49b2;
L_125b496e:;
  /* 125b496e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 125b4971 push eax */
  push32((uint32_t)(EAX));
  /* 125b4972 call 0x125b4ba0 */
  push32(0x125b4977u); f_125b4ba0();
  /* 125b4977 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b497a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b497d je 0x125b49ad */
  if (C.zf) goto L_125b49ad;
  /* 125b497f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4983 je 0x125b49ad */
  if (C.zf) goto L_125b49ad;
  /* 125b4985 mov ecx, dword ptr [0x125d3b5c] */
  ECX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b498b push ecx */
  push32((uint32_t)(ECX));
  /* 125b498c call 0x125b4c20 */
  push32(0x125b4991u); f_125b4c20();
  /* 125b4991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4994 mov esi, eax */
  ESI = (EAX);
  /* 125b4996 mov edx, dword ptr [0x125d3b5c] */
  EDX = (r32((uint32_t)(0x125d3b5c)));
  /* 125b499c push edx */
  push32((uint32_t)(EDX));
  /* 125b499d call 0x125aaf40 */
  push32(0x125b49a2u); f_125aaf40();
  /* 125b49a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b49a5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b49a7 jne 0x125b49ad */
  if (!C.zf) goto L_125b49ad;
  /* 125b49a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b49ab jmp 0x125b49b2 */
  goto L_125b49b2;
L_125b49ad:;
  /* 125b49ad mov eax, 1 */
  EAX = (0x1u);
L_125b49b2:;
  /* 125b49b2 pop esi */
  ESI = (pop32());
  /* 125b49b3 mov esp, ebp */
  ESP = (EBP);
  /* 125b49b5 pop ebp */
  EBP = (pop32());
  /* 125b49b6 ret  */
  ESPCHK(0x125b4930u, _esp0);
  ESP += 4; return;
}

/* FUN_100149c0 @ 0x125b49c0 (77 bytes, 18 insns) */
void f_125b49c0(void) {
  FTRACE(0x125b49c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b49c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b49c1 mov ebp, esp */
  EBP = (ESP);
  /* 125b49c3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b49c9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 125b49d3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 125b49d9 push eax */
  push32((uint32_t)(EAX));
  /* 125b49da call dword ptr [0x125d62d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62d4))), 0x125b49e0u);
  /* 125b49e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b49e2 je 0x125b49f9 */
  if (C.zf) goto L_125b49f9;
  /* 125b49e4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b49eb jne 0x125b49f9 */
  if (!C.zf) goto L_125b49f9;
  /* 125b49ed mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 125b49f7 jmp 0x125b4a03 */
  goto L_125b4a03;
L_125b49f9:;
  /* 125b49f9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_125b4a03:;
  /* 125b4a03 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 125b4a09 mov esp, ebp */
  ESP = (EBP);
  /* 125b4a0b pop ebp */
  EBP = (pop32());
  /* 125b4a0c ret  */
  ESPCHK(0x125b49c0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x125b4a10 (388 bytes, 118 insns) */
void f_125b4a10(void) {
  FTRACE(0x125b4a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4a10 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4a11 mov ebp, esp */
  EBP = (ESP);
  /* 125b4a13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4a16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125b4a1d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 125b4a24 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_125b4a2b:;
  /* 125b4a2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b4a2e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4a31 jg 0x125b4b78 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b4b78;
  /* 125b4a37 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b4a3a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4a3d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b4a3e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4a40 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125b4a42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b4a45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4a48 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b4a4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4a4e cmp edx, dword ptr [ecx + 0x125d2520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x125d2520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4a54 jne 0x125b4b4e */
  if (!C.zf) goto L_125b4b4e;
  /* 125b4a5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b4a5d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125b4a60 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4a64 ja 0x125b4a87 */
  if ((!C.cf&&!C.zf)) goto L_125b4a87;
  /* 125b4a66 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4a6a je 0x125b4af9 */
  if (C.zf) goto L_125b4af9;
  /* 125b4a70 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4a74 je 0x125b4aa4 */
  if (C.zf) goto L_125b4aa4;
  /* 125b4a76 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4a7a je 0x125b4ac6 */
  if (C.zf) goto L_125b4ac6;
  /* 125b4a7c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4a80 je 0x125b4ae8 */
  if (C.zf) goto L_125b4ae8;
  /* 125b4a82 jmp 0x125b4b18 */
  goto L_125b4b18;
L_125b4a87:;
  /* 125b4a87 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4a8e je 0x125b4ab5 */
  if (C.zf) goto L_125b4ab5;
  /* 125b4a90 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4a97 je 0x125b4ad7 */
  if (C.zf) goto L_125b4ad7;
  /* 125b4a99 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4aa0 je 0x125b4b0a */
  if (C.zf) goto L_125b4b0a;
  /* 125b4aa2 jmp 0x125b4b18 */
  goto L_125b4b18;
L_125b4aa4:;
  /* 125b4aa4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4aa7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b4aaa add ecx, 0x125d2524 */
  { uint32_t _a=(ECX),_b=(0x125d2524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4ab0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b4ab3 jmp 0x125b4b18 */
  goto L_125b4b18;
L_125b4ab5:;
  /* 125b4ab5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4ab8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b4abb mov eax, dword ptr [edx + 0x125d252c] */
  EAX = (r32((uint32_t)(EDX + 0x125d252c)));
  /* 125b4ac1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b4ac4 jmp 0x125b4b18 */
  goto L_125b4b18;
L_125b4ac6:;
  /* 125b4ac6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4ac9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b4acc add ecx, 0x125d2530 */
  { uint32_t _a=(ECX),_b=(0x125d2530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4ad2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b4ad5 jmp 0x125b4b18 */
  goto L_125b4b18;
L_125b4ad7:;
  /* 125b4ad7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4ada imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b4add mov eax, dword ptr [edx + 0x125d2534] */
  EAX = (r32((uint32_t)(EDX + 0x125d2534)));
  /* 125b4ae3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b4ae6 jmp 0x125b4b18 */
  goto L_125b4b18;
L_125b4ae8:;
  /* 125b4ae8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4aeb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b4aee add ecx, 0x125d2538 */
  { uint32_t _a=(ECX),_b=(0x125d2538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4af4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b4af7 jmp 0x125b4b18 */
  goto L_125b4b18;
L_125b4af9:;
  /* 125b4af9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4afc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b4aff add edx, 0x125d253c */
  { uint32_t _a=(EDX),_b=(0x125d253cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4b05 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125b4b08 jmp 0x125b4b18 */
  goto L_125b4b18;
L_125b4b0a:;
  /* 125b4b0a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4b0d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b4b10 add eax, 0x125d2544 */
  { uint32_t _a=(EAX),_b=(0x125d2544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4b15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125b4b18:;
  /* 125b4b18 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4b1c je 0x125b4b24 */
  if (C.zf) goto L_125b4b24;
  /* 125b4b1e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4b22 jge 0x125b4b26 */
  if ((C.sf==C.of)) goto L_125b4b26;
L_125b4b24:;
  /* 125b4b24 jmp 0x125b4b78 */
  goto L_125b4b78;
L_125b4b26:;
  /* 125b4b26 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b4b29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4b2c push ecx */
  push32((uint32_t)(ECX));
  /* 125b4b2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b4b30 push edx */
  push32((uint32_t)(EDX));
  /* 125b4b31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b4b34 push eax */
  push32((uint32_t)(EAX));
  /* 125b4b35 call 0x125ab930 */
  push32(0x125b4b3au); f_125ab930();
  /* 125b4b3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4b3d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b4b40 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4b43 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 125b4b47 mov eax, 1 */
  EAX = (0x1u);
  /* 125b4b4c jmp 0x125b4b8e */
  goto L_125b4b8e;
L_125b4b4e:;
  /* 125b4b4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4b51 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b4b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4b57 cmp eax, dword ptr [edx + 0x125d2520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x125d2520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4b5d jae 0x125b4b6a */
  if (!C.cf) goto L_125b4b6a;
  /* 125b4b5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4b62 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4b65 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b4b68 jmp 0x125b4b73 */
  goto L_125b4b73;
L_125b4b6a:;
  /* 125b4b6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4b6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4b70 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125b4b73:;
  /* 125b4b73 jmp 0x125b4a2b */
  goto L_125b4a2b;
L_125b4b78:;
  /* 125b4b78 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b4b7b push eax */
  push32((uint32_t)(EAX));
  /* 125b4b7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b4b7f push ecx */
  push32((uint32_t)(ECX));
  /* 125b4b80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b4b83 push edx */
  push32((uint32_t)(EDX));
  /* 125b4b84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4b87 push eax */
  push32((uint32_t)(EAX));
  /* 125b4b88 call dword ptr [0x125d62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62e0))), 0x125b4b8eu);
L_125b4b8e:;
  /* 125b4b8e mov esp, ebp */
  ESP = (EBP);
  /* 125b4b90 pop ebp */
  EBP = (pop32());
  /* 125b4b91 ret 0x10 */
  ESPCHK(0x125b4a10u, _esp0);
  ESP += 20; return;
}

/* FUN_10014ba0 @ 0x125b4ba0 (118 bytes, 42 insns) */
void f_125b4ba0(void) {
  FTRACE(0x125b4ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4ba1 mov ebp, esp */
  EBP = (ESP);
  /* 125b4ba3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4ba6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125b4bad:;
  /* 125b4bad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4bb0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125b4bb2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 125b4bb5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125b4bb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4bbc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4bbf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b4bc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b4bc4 je 0x125b4c0f */
  if (C.zf) goto L_125b4c0f;
  /* 125b4bc6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125b4bca cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4bcd jl 0x125b4be2 */
  if ((C.sf!=C.of)) goto L_125b4be2;
  /* 125b4bcf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125b4bd3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4bd6 jg 0x125b4be2 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b4be2;
  /* 125b4bd8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 125b4bdb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125b4bdd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 125b4be0 jmp 0x125b4bfc */
  goto L_125b4bfc;
L_125b4be2:;
  /* 125b4be2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125b4be6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4be9 jl 0x125b4bfc */
  if ((C.sf!=C.of)) goto L_125b4bfc;
  /* 125b4beb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125b4bef cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4bf2 jg 0x125b4bfc */
  if ((!C.zf&&C.sf==C.of)) goto L_125b4bfc;
  /* 125b4bf4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 125b4bf7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125b4bf9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_125b4bfc:;
  /* 125b4bfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b4bff shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 125b4c02 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125b4c06 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 125b4c0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b4c0d jmp 0x125b4bad */
  goto L_125b4bad;
L_125b4c0f:;
  /* 125b4c0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b4c12 mov esp, ebp */
  ESP = (EBP);
  /* 125b4c14 pop ebp */
  EBP = (pop32());
  /* 125b4c15 ret  */
  ESPCHK(0x125b4ba0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x125b4c20 (101 bytes, 36 insns) */
void f_125b4c20(void) {
  FTRACE(0x125b4c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4c20 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4c21 mov ebp, esp */
  EBP = (ESP);
  /* 125b4c23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4c26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125b4c2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4c30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125b4c32 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 125b4c35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4c38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4c3b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_125b4c3e:;
  /* 125b4c3e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 125b4c42 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4c45 jl 0x125b4c50 */
  if ((C.sf!=C.of)) goto L_125b4c50;
  /* 125b4c47 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 125b4c4b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4c4e jle 0x125b4c62 */
  if ((C.zf||C.sf!=C.of)) goto L_125b4c62;
L_125b4c50:;
  /* 125b4c50 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 125b4c54 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4c57 jl 0x125b4c7e */
  if ((C.sf!=C.of)) goto L_125b4c7e;
  /* 125b4c59 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 125b4c5d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4c60 jg 0x125b4c7e */
  if ((!C.zf&&C.sf==C.of)) goto L_125b4c7e;
L_125b4c62:;
  /* 125b4c62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b4c65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4c68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b4c6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4c6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b4c70 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 125b4c73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4c76 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4c79 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 125b4c7c jmp 0x125b4c3e */
  goto L_125b4c3e;
L_125b4c7e:;
  /* 125b4c7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b4c81 mov esp, ebp */
  ESP = (EBP);
  /* 125b4c83 pop ebp */
  EBP = (pop32());
  /* 125b4c84 ret  */
  ESPCHK(0x125b4c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c90 @ 0x125b4c90 (122 bytes, 39 insns) */
void f_125b4c90(void) {
  FTRACE(0x125b4c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4c90 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4c91 mov ebp, esp */
  EBP = (ESP);
  /* 125b4c93 push ecx */
  push32((uint32_t)(ECX));
  /* 125b4c94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4c97 cmp eax, dword ptr [0x125d53fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d53fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4c9d jae 0x125b4cc1 */
  if (!C.cf) goto L_125b4cc1;
  /* 125b4c9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4ca2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125b4ca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4ca8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125b4cab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b4cae mov eax, dword ptr [ecx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125d52c0)));
  /* 125b4cb5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125b4cba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125b4cbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b4cbf jne 0x125b4cdc */
  if (!C.zf) goto L_125b4cdc;
L_125b4cc1:;
  /* 125b4cc1 call 0x125affe0 */
  push32(0x125b4cc6u); f_125affe0();
  /* 125b4cc6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125b4ccc call 0x125afff0 */
  push32(0x125b4cd1u); f_125afff0();
  /* 125b4cd1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125b4cd7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b4cda jmp 0x125b4d06 */
  goto L_125b4d06;
L_125b4cdc:;
  /* 125b4cdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4cdf push edx */
  push32((uint32_t)(EDX));
  /* 125b4ce0 call 0x125b1800 */
  push32(0x125b4ce5u); f_125b1800();
  /* 125b4ce5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4ce8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4ceb push eax */
  push32((uint32_t)(EAX));
  /* 125b4cec call 0x125b4d10 */
  push32(0x125b4cf1u); f_125b4d10();
  /* 125b4cf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4cf4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b4cf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4cfa push ecx */
  push32((uint32_t)(ECX));
  /* 125b4cfb call 0x125b1890 */
  push32(0x125b4d00u); f_125b1890();
  /* 125b4d00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4d03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125b4d06:;
  /* 125b4d06 mov esp, ebp */
  ESP = (EBP);
  /* 125b4d08 pop ebp */
  EBP = (pop32());
  /* 125b4d09 ret  */
  ESPCHK(0x125b4c90u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x125b4d10 (170 bytes, 59 insns) */
void f_125b4d10(void) {
  FTRACE(0x125b4d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4d10 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4d11 mov ebp, esp */
  EBP = (ESP);
  /* 125b4d13 push ecx */
  push32((uint32_t)(ECX));
  /* 125b4d14 push esi */
  push32((uint32_t)(ESI));
  /* 125b4d15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4d18 push eax */
  push32((uint32_t)(EAX));
  /* 125b4d19 call 0x125b1680 */
  push32(0x125b4d1eu); f_125b1680();
  /* 125b4d1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4d21 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4d24 je 0x125b4d63 */
  if (C.zf) goto L_125b4d63;
  /* 125b4d26 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4d2a je 0x125b4d32 */
  if (C.zf) goto L_125b4d32;
  /* 125b4d2c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4d30 jne 0x125b4d4c */
  if (!C.zf) goto L_125b4d4c;
L_125b4d32:;
  /* 125b4d32 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b4d34 call 0x125b1680 */
  push32(0x125b4d39u); f_125b1680();
  /* 125b4d39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4d3c mov esi, eax */
  ESI = (EAX);
  /* 125b4d3e push 2 */
  push32((uint32_t)(0x2u));
  /* 125b4d40 call 0x125b1680 */
  push32(0x125b4d45u); f_125b1680();
  /* 125b4d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4d48 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4d4a je 0x125b4d63 */
  if (C.zf) goto L_125b4d63;
L_125b4d4c:;
  /* 125b4d4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4d4f push ecx */
  push32((uint32_t)(ECX));
  /* 125b4d50 call 0x125b1680 */
  push32(0x125b4d55u); f_125b1680();
  /* 125b4d55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4d58 push eax */
  push32((uint32_t)(EAX));
  /* 125b4d59 call dword ptr [0x125d62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62dc))), 0x125b4d5fu);
  /* 125b4d5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b4d61 je 0x125b4d6c */
  if (C.zf) goto L_125b4d6c;
L_125b4d63:;
  /* 125b4d63 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b4d6a jmp 0x125b4d75 */
  goto L_125b4d75;
L_125b4d6c:;
  /* 125b4d6c call dword ptr [0x125d63b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63b4))), 0x125b4d72u);
  /* 125b4d72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125b4d75:;
  /* 125b4d75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4d78 push edx */
  push32((uint32_t)(EDX));
  /* 125b4d79 call 0x125b15a0 */
  push32(0x125b4d7eu); f_125b15a0();
  /* 125b4d7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4d81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4d84 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125b4d87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4d8a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125b4d8d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b4d90 mov edx, dword ptr [eax*4 + 0x125d52c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125d52c0)));
  /* 125b4d97 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 125b4d9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4da0 je 0x125b4db3 */
  if (C.zf) goto L_125b4db3;
  /* 125b4da2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b4da5 push eax */
  push32((uint32_t)(EAX));
  /* 125b4da6 call 0x125aff40 */
  push32(0x125b4dabu); f_125aff40();
  /* 125b4dab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4dae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b4db1 jmp 0x125b4db5 */
  goto L_125b4db5;
L_125b4db3:;
  /* 125b4db3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b4db5:;
  /* 125b4db5 pop esi */
  ESI = (pop32());
  /* 125b4db6 mov esp, ebp */
  ESP = (EBP);
  /* 125b4db8 pop ebp */
  EBP = (pop32());
  /* 125b4db9 ret  */
  ESPCHK(0x125b4d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014dc0 @ 0x125b4dc0 (146 bytes, 52 insns) */
void f_125b4dc0(void) {
  FTRACE(0x125b4dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4dc1 mov ebp, esp */
  EBP = (ESP);
  /* 125b4dc3 push ebx */
  push32((uint32_t)(EBX));
  /* 125b4dc4 push esi */
  push32((uint32_t)(ESI));
  /* 125b4dc5 push edi */
  push32((uint32_t)(EDI));
L_125b4dc6:;
  /* 125b4dc6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4dca jne 0x125b4dea */
  if (!C.zf) goto L_125b4dea;
  /* 125b4dcc push 0x125cf7b0 */
  push32((uint32_t)(0x125cf7b0u));
  /* 125b4dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b4dd3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125b4dd5 push 0x125cfe78 */
  push32((uint32_t)(0x125cfe78u));
  /* 125b4dda push 2 */
  push32((uint32_t)(0x2u));
  /* 125b4ddc call 0x125a71d0 */
  push32(0x125b4de1u); f_125a71d0();
  /* 125b4de1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4de4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4de7 jne 0x125b4dea */
  if (!C.zf) goto L_125b4dea;
  /* 125b4de9 int3  */
  x86_unimpl("int3 @ 0x125b4de9");
L_125b4dea:;
  /* 125b4dea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b4dec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b4dee jne 0x125b4dc6 */
  if (!C.zf) goto L_125b4dc6;
  /* 125b4df0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4df3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125b4df6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 125b4dfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b4dfe je 0x125b4e4d */
  if (C.zf) goto L_125b4e4d;
  /* 125b4e00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4e03 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125b4e06 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 125b4e09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b4e0b je 0x125b4e4d */
  if (C.zf) goto L_125b4e4d;
  /* 125b4e0d push 2 */
  push32((uint32_t)(0x2u));
  /* 125b4e0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4e12 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125b4e15 push eax */
  push32((uint32_t)(EAX));
  /* 125b4e16 call 0x125a8ba0 */
  push32(0x125b4e1bu); f_125a8ba0();
  /* 125b4e1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4e1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4e21 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125b4e24 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 125b4e2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4e2d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125b4e30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4e33 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 125b4e39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4e3c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 125b4e43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b4e46 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_125b4e4d:;
  /* 125b4e4d pop edi */
  EDI = (pop32());
  /* 125b4e4e pop esi */
  ESI = (pop32());
  /* 125b4e4f pop ebx */
  EBX = (pop32());
  /* 125b4e50 pop ebp */
  EBP = (pop32());
  /* 125b4e51 ret  */
  ESPCHK(0x125b4dc0u, _esp0);
  ESP += 4; return;
}

