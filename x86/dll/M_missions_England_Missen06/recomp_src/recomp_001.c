#include "recomp.h"

/* FUN_100071a0 @ 0x104e71a0 (490 bytes, 165 insns) */
void f_104e71a0(void) {
  FTRACE(0x104e71a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e71a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e71a1 mov ebp, esp */
  EBP = (ESP);
  /* 104e71a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e71a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e71aa jne 0x104e71bd */
  if (!C.zf) goto L_104e71bd;
  /* 104e71ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e71af push eax */
  push32((uint32_t)(EAX));
  /* 104e71b0 call 0x104e6ff0 */
  push32(0x104e71b5u); f_104e6ff0();
  /* 104e71b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e71b8 jmp 0x104e7386 */
  goto L_104e7386;
L_104e71bd:;
  /* 104e71bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e71c1 jne 0x104e71d6 */
  if (!C.zf) goto L_104e71d6;
  /* 104e71c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e71c6 push ecx */
  push32((uint32_t)(ECX));
  /* 104e71c7 call 0x104e7390 */
  push32(0x104e71ccu); f_104e7390();
  /* 104e71cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e71cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e71d1 jmp 0x104e7386 */
  goto L_104e7386;
L_104e71d6:;
  /* 104e71d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104e71dd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e71e1 ja 0x104e7359 */
  if ((!C.cf&&!C.zf)) goto L_104e7359;
  /* 104e71e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e71e9 call 0x104e6c20 */
  push32(0x104e71eeu); f_104e6c20();
  /* 104e71ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e71f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e71f4 push edx */
  push32((uint32_t)(EDX));
  /* 104e71f5 call 0x104e7520 */
  push32(0x104e71fau); f_104e7520();
  /* 104e71fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e71fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e7200 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7204 je 0x104e731c */
  if (C.zf) goto L_104e731c;
  /* 104e720a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e720d cmp eax, dword ptr [0x1050dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1050dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7213 ja 0x104e7290 */
  if ((!C.cf&&!C.zf)) goto L_104e7290;
  /* 104e7215 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e7218 push ecx */
  push32((uint32_t)(ECX));
  /* 104e7219 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e721c push edx */
  push32((uint32_t)(EDX));
  /* 104e721d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e7220 push eax */
  push32((uint32_t)(EAX));
  /* 104e7221 call 0x104e83f0 */
  push32(0x104e7226u); f_104e83f0();
  /* 104e7226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e722b je 0x104e7235 */
  if (C.zf) goto L_104e7235;
  /* 104e722d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7230 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104e7233 jmp 0x104e7290 */
  goto L_104e7290;
L_104e7235:;
  /* 104e7235 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e7238 push edx */
  push32((uint32_t)(EDX));
  /* 104e7239 call 0x104e7bb0 */
  push32(0x104e723eu); f_104e7bb0();
  /* 104e723e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7241 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e7244 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7248 je 0x104e7290 */
  if (C.zf) goto L_104e7290;
  /* 104e724a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e724d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 104e7250 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7253 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104e7256 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7259 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e725c jae 0x104e7266 */
  if (!C.cf) goto L_104e7266;
  /* 104e725e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7261 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104e7264 jmp 0x104e726c */
  goto L_104e726c;
L_104e7266:;
  /* 104e7266 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e7269 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104e726c:;
  /* 104e726c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e726f push edx */
  push32((uint32_t)(EDX));
  /* 104e7270 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7273 push eax */
  push32((uint32_t)(EAX));
  /* 104e7274 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e7277 push ecx */
  push32((uint32_t)(ECX));
  /* 104e7278 call 0x104e9b00 */
  push32(0x104e727du); f_104e9b00();
  /* 104e727d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7280 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7283 push edx */
  push32((uint32_t)(EDX));
  /* 104e7284 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e7287 push eax */
  push32((uint32_t)(EAX));
  /* 104e7288 call 0x104e75e0 */
  push32(0x104e728du); f_104e75e0();
  /* 104e728d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e7290:;
  /* 104e7290 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7294 jne 0x104e7310 */
  if (!C.zf) goto L_104e7310;
  /* 104e7296 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e729a jne 0x104e72a3 */
  if (!C.zf) goto L_104e72a3;
  /* 104e729c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_104e72a3:;
  /* 104e72a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e72a6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e72a9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 104e72ac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 104e72af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e72b2 push edx */
  push32((uint32_t)(EDX));
  /* 104e72b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e72b5 mov eax, dword ptr [0x10510e6c] */
  EAX = (r32((uint32_t)(0x10510e6c)));
  /* 104e72ba push eax */
  push32((uint32_t)(EAX));
  /* 104e72bb call dword ptr [0x10512328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512328))), 0x104e72c1u);
  /* 104e72c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e72c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e72c8 je 0x104e7310 */
  if (C.zf) goto L_104e7310;
  /* 104e72ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e72cd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 104e72d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e72d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e72d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e72d9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e72dc jae 0x104e72e6 */
  if (!C.cf) goto L_104e72e6;
  /* 104e72de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e72e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104e72e4 jmp 0x104e72ec */
  goto L_104e72ec;
L_104e72e6:;
  /* 104e72e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e72e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_104e72ec:;
  /* 104e72ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e72ef push eax */
  push32((uint32_t)(EAX));
  /* 104e72f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e72f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e72f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e72f7 push edx */
  push32((uint32_t)(EDX));
  /* 104e72f8 call 0x104e9b00 */
  push32(0x104e72fdu); f_104e9b00();
  /* 104e72fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7300 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7303 push eax */
  push32((uint32_t)(EAX));
  /* 104e7304 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e7307 push ecx */
  push32((uint32_t)(ECX));
  /* 104e7308 call 0x104e75e0 */
  push32(0x104e730du); f_104e75e0();
  /* 104e730d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e7310:;
  /* 104e7310 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e7312 call 0x104e6cc0 */
  push32(0x104e7317u); f_104e6cc0();
  /* 104e7317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e731a jmp 0x104e7359 */
  goto L_104e7359;
L_104e731c:;
  /* 104e731c push 9 */
  push32((uint32_t)(0x9u));
  /* 104e731e call 0x104e6cc0 */
  push32(0x104e7323u); f_104e6cc0();
  /* 104e7323 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7326 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e732a jne 0x104e7333 */
  if (!C.zf) goto L_104e7333;
  /* 104e732c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_104e7333:;
  /* 104e7333 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e7336 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7339 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 104e733c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 104e733f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e7342 push eax */
  push32((uint32_t)(EAX));
  /* 104e7343 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7346 push ecx */
  push32((uint32_t)(ECX));
  /* 104e7347 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e7349 mov edx, dword ptr [0x10510e6c] */
  EDX = (r32((uint32_t)(0x10510e6c)));
  /* 104e734f push edx */
  push32((uint32_t)(EDX));
  /* 104e7350 call dword ptr [0x1051232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051232c))), 0x104e7356u);
  /* 104e7356 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104e7359:;
  /* 104e7359 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e735d jne 0x104e7368 */
  if (!C.zf) goto L_104e7368;
  /* 104e735f cmp dword ptr [0x1050f6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7366 jne 0x104e736d */
  if (!C.zf) goto L_104e736d;
L_104e7368:;
  /* 104e7368 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e736b jmp 0x104e7386 */
  goto L_104e7386;
L_104e736d:;
  /* 104e736d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e7370 push eax */
  push32((uint32_t)(EAX));
  /* 104e7371 call 0x104e6f60 */
  push32(0x104e7376u); f_104e6f60();
  /* 104e7376 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7379 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e737b jne 0x104e7381 */
  if (!C.zf) goto L_104e7381;
  /* 104e737d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e737f jmp 0x104e7386 */
  goto L_104e7386;
L_104e7381:;
  /* 104e7381 jmp 0x104e71d6 */
  goto L_104e71d6;
L_104e7386:;
  /* 104e7386 mov esp, ebp */
  ESP = (EBP);
  /* 104e7388 pop ebp */
  EBP = (pop32());
  /* 104e7389 ret  */
  ESPCHK(0x104e71a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007390 @ 0x104e7390 (104 bytes, 38 insns) */
void f_104e7390(void) {
  FTRACE(0x104e7390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e7390 push ebp */
  push32((uint32_t)(EBP));
  /* 104e7391 mov ebp, esp */
  EBP = (ESP);
  /* 104e7393 push ecx */
  push32((uint32_t)(ECX));
  /* 104e7394 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7398 jne 0x104e739c */
  if (!C.zf) goto L_104e739c;
  /* 104e739a jmp 0x104e73f4 */
  goto L_104e73f4;
L_104e739c:;
  /* 104e739c push 9 */
  push32((uint32_t)(0x9u));
  /* 104e739e call 0x104e6c20 */
  push32(0x104e73a3u); f_104e6c20();
  /* 104e73a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e73a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e73a9 push eax */
  push32((uint32_t)(EAX));
  /* 104e73aa call 0x104e7520 */
  push32(0x104e73afu); f_104e7520();
  /* 104e73af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e73b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e73b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e73b9 je 0x104e73d7 */
  if (C.zf) goto L_104e73d7;
  /* 104e73bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e73be push ecx */
  push32((uint32_t)(ECX));
  /* 104e73bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e73c2 push edx */
  push32((uint32_t)(EDX));
  /* 104e73c3 call 0x104e75e0 */
  push32(0x104e73c8u); f_104e75e0();
  /* 104e73c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e73cb push 9 */
  push32((uint32_t)(0x9u));
  /* 104e73cd call 0x104e6cc0 */
  push32(0x104e73d2u); f_104e6cc0();
  /* 104e73d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e73d5 jmp 0x104e73f4 */
  goto L_104e73f4;
L_104e73d7:;
  /* 104e73d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e73d9 call 0x104e6cc0 */
  push32(0x104e73deu); f_104e6cc0();
  /* 104e73de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e73e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e73e4 push eax */
  push32((uint32_t)(EAX));
  /* 104e73e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e73e7 mov ecx, dword ptr [0x10510e6c] */
  ECX = (r32((uint32_t)(0x10510e6c)));
  /* 104e73ed push ecx */
  push32((uint32_t)(ECX));
  /* 104e73ee call dword ptr [0x10512308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512308))), 0x104e73f4u);
L_104e73f4:;
  /* 104e73f4 mov esp, ebp */
  ESP = (EBP);
  /* 104e73f6 pop ebp */
  EBP = (pop32());
  /* 104e73f7 ret  */
  ESPCHK(0x104e7390u, _esp0);
  ESP += 4; return;
}

/* FUN_10007400 @ 0x104e7400 (116 bytes, 34 insns) */
void f_104e7400(void) {
  FTRACE(0x104e7400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e7400 push ebp */
  push32((uint32_t)(EBP));
  /* 104e7401 mov ebp, esp */
  EBP = (ESP);
  /* 104e7403 push ecx */
  push32((uint32_t)(ECX));
  /* 104e7404 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 104e740b push 9 */
  push32((uint32_t)(0x9u));
  /* 104e740d call 0x104e6c20 */
  push32(0x104e7412u); f_104e6c20();
  /* 104e7412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7415 call 0x104e8b10 */
  push32(0x104e741au); f_104e8b10();
  /* 104e741a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e741c jge 0x104e7425 */
  if ((C.sf==C.of)) goto L_104e7425;
  /* 104e741e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_104e7425:;
  /* 104e7425 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e7427 call 0x104e6cc0 */
  push32(0x104e742cu); f_104e6cc0();
  /* 104e742c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e742f push 0 */
  push32((uint32_t)(0x0u));
  /* 104e7431 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e7433 mov eax, dword ptr [0x10510e6c] */
  EAX = (r32((uint32_t)(0x10510e6c)));
  /* 104e7438 push eax */
  push32((uint32_t)(EAX));
  /* 104e7439 call dword ptr [0x10512238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512238))), 0x104e743fu);
  /* 104e743f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e7441 jne 0x104e746d */
  if (!C.zf) goto L_104e746d;
  /* 104e7443 call dword ptr [0x105122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122c8))), 0x104e7449u);
  /* 104e7449 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e744c jne 0x104e7466 */
  if (!C.zf) goto L_104e7466;
  /* 104e744e call 0x104eb100 */
  push32(0x104e7453u); f_104eb100();
  /* 104e7453 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 104e7459 call 0x104eb0f0 */
  push32(0x104e745eu); f_104eb0f0();
  /* 104e745e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 104e7464 jmp 0x104e746d */
  goto L_104e746d;
L_104e7466:;
  /* 104e7466 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_104e746d:;
  /* 104e746d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7470 mov esp, ebp */
  ESP = (EBP);
  /* 104e7472 pop ebp */
  EBP = (pop32());
  /* 104e7473 ret  */
  ESPCHK(0x104e7400u, _esp0);
  ESP += 4; return;
}

/* FUN_10007480 @ 0x104e7480 (10 bytes, 5 insns) */
void f_104e7480(void) {
  FTRACE(0x104e7480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e7480 push ebp */
  push32((uint32_t)(EBP));
  /* 104e7481 mov ebp, esp */
  EBP = (ESP);
  /* 104e7483 call 0x104e7400 */
  push32(0x104e7488u); f_104e7400();
  /* 104e7488 pop ebp */
  EBP = (pop32());
  /* 104e7489 ret  */
  ESPCHK(0x104e7480u, _esp0);
  ESP += 4; return;
}

/* FUN_10007490 @ 0x104e7490 (10 bytes, 5 insns) */
void f_104e7490(void) {
  FTRACE(0x104e7490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e7490 push ebp */
  push32((uint32_t)(EBP));
  /* 104e7491 mov ebp, esp */
  EBP = (ESP);
  /* 104e7493 mov eax, dword ptr [0x1050dc94] */
  EAX = (r32((uint32_t)(0x1050dc94)));
  /* 104e7498 pop ebp */
  EBP = (pop32());
  /* 104e7499 ret  */
  ESPCHK(0x104e7490u, _esp0);
  ESP += 4; return;
}

/* FUN_100074a0 @ 0x104e74a0 (31 bytes, 11 insns) */
void f_104e74a0(void) {
  FTRACE(0x104e74a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e74a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e74a1 mov ebp, esp */
  EBP = (ESP);
  /* 104e74a3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e74aa jbe 0x104e74b0 */
  if ((C.cf||C.zf)) goto L_104e74b0;
  /* 104e74ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e74ae jmp 0x104e74bd */
  goto L_104e74bd;
L_104e74b0:;
  /* 104e74b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e74b3 mov dword ptr [0x1050dc94], eax */
  w32((uint32_t)(0x1050dc94), (EAX));
  /* 104e74b8 mov eax, 1 */
  EAX = (0x1u);
L_104e74bd:;
  /* 104e74bd pop ebp */
  EBP = (pop32());
  /* 104e74be ret  */
  ESPCHK(0x104e74a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074c0 @ 0x104e74c0 (89 bytes, 20 insns) */
void f_104e74c0(void) {
  FTRACE(0x104e74c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e74c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e74c1 mov ebp, esp */
  EBP = (ESP);
  /* 104e74c3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 104e74c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e74ca mov eax, dword ptr [0x10510e6c] */
  EAX = (r32((uint32_t)(0x10510e6c)));
  /* 104e74cf push eax */
  push32((uint32_t)(EAX));
  /* 104e74d0 call dword ptr [0x10512328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512328))), 0x104e74d6u);
  /* 104e74d6 mov dword ptr [0x10510e68], eax */
  w32((uint32_t)(0x10510e68), (EAX));
  /* 104e74db cmp dword ptr [0x10510e68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10510e68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e74e2 jne 0x104e74e8 */
  if (!C.zf) goto L_104e74e8;
  /* 104e74e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e74e6 jmp 0x104e7517 */
  goto L_104e7517;
L_104e74e8:;
  /* 104e74e8 mov ecx, dword ptr [0x10510e68] */
  ECX = (r32((uint32_t)(0x10510e68)));
  /* 104e74ee mov dword ptr [0x10510e5c], ecx */
  w32((uint32_t)(0x10510e5c), (ECX));
  /* 104e74f4 mov dword ptr [0x10510e60], 0 */
  w32((uint32_t)(0x10510e60), (0x0u));
  /* 104e74fe mov dword ptr [0x10510e64], 0 */
  w32((uint32_t)(0x10510e64), (0x0u));
  /* 104e7508 mov dword ptr [0x10510e48], 0x10 */
  w32((uint32_t)(0x10510e48), (0x10u));
  /* 104e7512 mov eax, 1 */
  EAX = (0x1u);
L_104e7517:;
  /* 104e7517 pop ebp */
  EBP = (pop32());
  /* 104e7518 ret  */
  ESPCHK(0x104e74c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007520 @ 0x104e7520 (85 bytes, 29 insns) */
void f_104e7520(void) {
  FTRACE(0x104e7520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e7520 push ebp */
  push32((uint32_t)(EBP));
  /* 104e7521 mov ebp, esp */
  EBP = (ESP);
  /* 104e7523 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7526 mov eax, dword ptr [0x10510e64] */
  EAX = (r32((uint32_t)(0x10510e64)));
  /* 104e752b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e752e mov ecx, dword ptr [0x10510e68] */
  ECX = (r32((uint32_t)(0x10510e68)));
  /* 104e7534 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7536 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104e7539 mov edx, dword ptr [0x10510e68] */
  EDX = (r32((uint32_t)(0x10510e68)));
  /* 104e753f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104e7542:;
  /* 104e7542 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e7545 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7548 jae 0x104e756f */
  if (!C.cf) goto L_104e756f;
  /* 104e754a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e754d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7550 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7553 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e7556 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e755d jae 0x104e7564 */
  if (!C.cf) goto L_104e7564;
  /* 104e755f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e7562 jmp 0x104e7571 */
  goto L_104e7571;
L_104e7564:;
  /* 104e7564 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e7567 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e756a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e756d jmp 0x104e7542 */
  goto L_104e7542;
L_104e756f:;
  /* 104e756f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104e7571:;
  /* 104e7571 mov esp, ebp */
  ESP = (EBP);
  /* 104e7573 pop ebp */
  EBP = (pop32());
  /* 104e7574 ret  */
  ESPCHK(0x104e7520u, _esp0);
  ESP += 4; return;
}

/* FUN_10007580 @ 0x104e7580 (95 bytes, 33 insns) */
void f_104e7580(void) {
  FTRACE(0x104e7580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e7580 push ebp */
  push32((uint32_t)(EBP));
  /* 104e7581 mov ebp, esp */
  EBP = (ESP);
  /* 104e7583 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7589 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e758c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e758f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104e7592 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e7595 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 104e7598 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e759b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e75a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e75a3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e75a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e75a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104e75ab and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104e75ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e75af jne 0x104e75d1 */
  if (!C.zf) goto L_104e75d1;
  /* 104e75b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e75b4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 104e75b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e75b9 jne 0x104e75d1 */
  if (!C.zf) goto L_104e75d1;
  /* 104e75bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e75be and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e75c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e75c6 je 0x104e75d1 */
  if (C.zf) goto L_104e75d1;
  /* 104e75c8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 104e75cf jmp 0x104e75d8 */
  goto L_104e75d8;
L_104e75d1:;
  /* 104e75d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_104e75d8:;
  /* 104e75d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e75db mov esp, ebp */
  ESP = (EBP);
  /* 104e75dd pop ebp */
  EBP = (pop32());
  /* 104e75de ret  */
  ESPCHK(0x104e7580u, _esp0);
  ESP += 4; return;
}

/* FUN_100075e0 @ 0x104e75e0 (1485 bytes, 453 insns) */
void f_104e75e0(void) {
  FTRACE(0x104e75e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e75e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e75e1 mov ebp, esp */
  EBP = (ESP);
  /* 104e75e3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e75e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e75e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e75ec mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 104e75ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e75f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e75f5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e75f8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104e75fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e75fe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 104e7601 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104e7604 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7607 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e760d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e7610 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 104e7617 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104e761a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e761d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7620 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104e7623 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e7626 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e7628 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e762b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 104e762e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e7631 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7634 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 104e7637 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e763a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e763c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104e763f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e7642 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 104e7645 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e7648 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e764b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104e764e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e7650 jne 0x104e7778 */
  if (!C.zf) goto L_104e7778;
  /* 104e7656 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e7659 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104e765c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e765f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104e7662 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7666 jbe 0x104e766f */
  if ((C.cf||C.zf)) goto L_104e766f;
  /* 104e7668 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_104e766f:;
  /* 104e766f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7672 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7675 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e7678 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e767b jne 0x104e7751 */
  if (!C.zf) goto L_104e7751;
  /* 104e7681 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7685 jae 0x104e76e6 */
  if (!C.cf) goto L_104e76e6;
  /* 104e7687 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e768c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e768f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e7691 not eax */
  EAX = (~(EAX));
  /* 104e7693 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7696 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e7699 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 104e769d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104e769f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e76a2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e76a5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 104e76a9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e76ac add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e76af mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 104e76b2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104e76b5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e76b8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e76bb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 104e76be mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e76c1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e76c4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104e76c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e76ca jne 0x104e76e4 */
  if (!C.zf) goto L_104e76e4;
  /* 104e76cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e76d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e76d4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e76d6 not eax */
  EAX = (~(EAX));
  /* 104e76d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e76db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e76dd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104e76df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e76e2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104e76e4:;
  /* 104e76e4 jmp 0x104e7751 */
  goto L_104e7751;
L_104e76e6:;
  /* 104e76e6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e76e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e76ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e76f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e76f3 not edx */
  EDX = (~(EDX));
  /* 104e76f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e76f8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e76fb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 104e7702 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e7704 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7707 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e770a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 104e7711 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e7714 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7717 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104e771a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104e771d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e7720 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7723 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 104e7726 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e7729 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e772c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104e7730 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e7732 jne 0x104e7751 */
  if (!C.zf) goto L_104e7751;
  /* 104e7734 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e7737 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e773a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e773f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e7741 not edx */
  EDX = (~(EDX));
  /* 104e7743 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7746 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e7749 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104e774b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e774e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_104e7751:;
  /* 104e7751 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7754 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104e7757 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e775a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104e775d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 104e7760 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7763 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e7766 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7769 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104e776c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104e776f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7772 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7775 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_104e7778:;
  /* 104e7778 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e777b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 104e777e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7781 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104e7784 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7788 jbe 0x104e7791 */
  if ((C.cf||C.zf)) goto L_104e7791;
  /* 104e778a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_104e7791:;
  /* 104e7791 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e7794 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104e7797 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e7799 jne 0x104e78f5 */
  if (!C.zf) goto L_104e78f5;
  /* 104e779f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e77a2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e77a5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 104e77a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e77ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 104e77ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e77b1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 104e77b4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e77b8 jbe 0x104e77c1 */
  if ((C.cf||C.zf)) goto L_104e77c1;
  /* 104e77ba mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_104e77c1:;
  /* 104e77c1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e77c4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e77c7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 104e77ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e77cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104e77d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e77d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 104e77d6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e77da jbe 0x104e77e3 */
  if ((C.cf||C.zf)) goto L_104e77e3;
  /* 104e77dc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_104e77e3:;
  /* 104e77e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e77e6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e77e9 je 0x104e78ef */
  if (C.zf) goto L_104e78ef;
  /* 104e77ef mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 104e77f2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 104e77f5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e77f8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e77fb jne 0x104e78d1 */
  if (!C.zf) goto L_104e78d1;
  /* 104e7801 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7805 jae 0x104e7866 */
  if (!C.cf) goto L_104e7866;
  /* 104e7807 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e780c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e780f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e7811 not edx */
  EDX = (~(EDX));
  /* 104e7813 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7816 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e7819 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 104e781d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e781f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7822 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e7825 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 104e7829 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e782c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e782f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104e7832 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104e7835 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e7838 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e783b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 104e783e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e7841 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7844 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104e7848 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e784a jne 0x104e7864 */
  if (!C.zf) goto L_104e7864;
  /* 104e784c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e7851 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e7854 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e7856 not edx */
  EDX = (~(EDX));
  /* 104e7858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e785b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e785d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104e785f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7862 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104e7864:;
  /* 104e7864 jmp 0x104e78d1 */
  goto L_104e78d1;
L_104e7866:;
  /* 104e7866 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e7869 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e786c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e7871 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e7873 not eax */
  EAX = (~(EAX));
  /* 104e7875 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7878 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e787b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 104e7882 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104e7884 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7887 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e788a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 104e7891 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e7894 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7897 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 104e789a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104e789d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e78a0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e78a3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 104e78a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e78a9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e78ac movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104e78b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e78b2 jne 0x104e78d1 */
  if (!C.zf) goto L_104e78d1;
  /* 104e78b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e78b7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e78ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e78bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e78c1 not eax */
  EAX = (~(EAX));
  /* 104e78c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e78c6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e78c9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104e78cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e78ce mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104e78d1:;
  /* 104e78d1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 104e78d4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104e78d7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 104e78da mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e78dd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104e78e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 104e78e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104e78e6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 104e78e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104e78ec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_104e78ef:;
  /* 104e78ef mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 104e78f2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_104e78f5:;
  /* 104e78f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e78f8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104e78fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e78fd jne 0x104e790b */
  if (!C.zf) goto L_104e790b;
  /* 104e78ff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e7902 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7905 je 0x104e7a1b */
  if (C.zf) goto L_104e7a1b;
L_104e790b:;
  /* 104e790b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e790e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e7911 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 104e7914 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104e7917 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e791a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e791d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e7920 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104e7923 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e7926 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e7929 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 104e792c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e792f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e7932 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 104e7935 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e7938 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e793b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e793e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104e7941 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e7944 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e7947 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e794a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e794d jne 0x104e7a1b */
  if (!C.zf) goto L_104e7a1b;
  /* 104e7953 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7957 jae 0x104e79b4 */
  if (!C.cf) goto L_104e79b4;
  /* 104e7959 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e795c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e795f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104e7963 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e7966 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7969 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104e796c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 104e796f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e7972 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7975 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 104e7978 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e797a jne 0x104e7992 */
  if (!C.zf) goto L_104e7992;
  /* 104e797c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e7981 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e7984 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e7986 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7989 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e798b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104e798d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7990 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104e7992:;
  /* 104e7992 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e7997 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e799a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e799c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e799f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e79a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 104e79a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104e79a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e79ab mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e79ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 104e79b2 jmp 0x104e7a1b */
  goto L_104e7a1b;
L_104e79b4:;
  /* 104e79b4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e79b7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e79ba movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104e79be mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e79c1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e79c4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104e79c7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 104e79ca mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e79cd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e79d0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 104e79d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e79d5 jne 0x104e79f2 */
  if (!C.zf) goto L_104e79f2;
  /* 104e79d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e79da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e79dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e79e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e79e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e79e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e79ea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104e79ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e79ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_104e79f2:;
  /* 104e79f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e79f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e79f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e79fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e79ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7a02 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e7a05 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 104e7a0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104e7a0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7a11 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104e7a14 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_104e7a1b:;
  /* 104e7a1b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e7a1e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7a21 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104e7a23 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e7a26 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7a29 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7a2c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 104e7a2f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e7a32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e7a34 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7a37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e7a3a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104e7a3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e7a3f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7a42 jne 0x104e7ba9 */
  if (!C.zf) goto L_104e7ba9;
  /* 104e7a48 cmp dword ptr [0x10510e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10510e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7a4f je 0x104e7b98 */
  if (C.zf) goto L_104e7b98;
  /* 104e7a55 mov eax, dword ptr [0x10510e58] */
  EAX = (r32((uint32_t)(0x10510e58)));
  /* 104e7a5a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 104e7a5d mov ecx, dword ptr [0x10510e60] */
  ECX = (r32((uint32_t)(0x10510e60)));
  /* 104e7a63 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104e7a66 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7a68 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104e7a6b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 104e7a70 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 104e7a75 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7a78 push eax */
  push32((uint32_t)(EAX));
  /* 104e7a79 call dword ptr [0x1051230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051230c))), 0x104e7a7fu);
  /* 104e7a7f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e7a84 mov ecx, dword ptr [0x10510e58] */
  ECX = (r32((uint32_t)(0x10510e58)));
  /* 104e7a8a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e7a8c mov eax, dword ptr [0x10510e60] */
  EAX = (r32((uint32_t)(0x10510e60)));
  /* 104e7a91 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104e7a94 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104e7a96 mov edx, dword ptr [0x10510e60] */
  EDX = (r32((uint32_t)(0x10510e60)));
  /* 104e7a9c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104e7a9f mov eax, dword ptr [0x10510e60] */
  EAX = (r32((uint32_t)(0x10510e60)));
  /* 104e7aa4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e7aa7 mov edx, dword ptr [0x10510e58] */
  EDX = (r32((uint32_t)(0x10510e58)));
  /* 104e7aad mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 104e7ab8 mov eax, dword ptr [0x10510e60] */
  EAX = (r32((uint32_t)(0x10510e60)));
  /* 104e7abd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e7ac0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 104e7ac3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104e7ac6 mov eax, dword ptr [0x10510e60] */
  EAX = (r32((uint32_t)(0x10510e60)));
  /* 104e7acb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e7ace mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 104e7ad1 mov edx, dword ptr [0x10510e60] */
  EDX = (r32((uint32_t)(0x10510e60)));
  /* 104e7ad7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104e7ada movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 104e7ade test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e7ae0 jne 0x104e7af6 */
  if (!C.zf) goto L_104e7af6;
  /* 104e7ae2 mov edx, dword ptr [0x10510e60] */
  EDX = (r32((uint32_t)(0x10510e60)));
  /* 104e7ae8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104e7aeb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 104e7aed mov ecx, dword ptr [0x10510e60] */
  ECX = (r32((uint32_t)(0x10510e60)));
  /* 104e7af3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_104e7af6:;
  /* 104e7af6 mov edx, dword ptr [0x10510e60] */
  EDX = (r32((uint32_t)(0x10510e60)));
  /* 104e7afc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7b00 jne 0x104e7b98 */
  if (!C.zf) goto L_104e7b98;
  /* 104e7b06 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 104e7b0b push 0 */
  push32((uint32_t)(0x0u));
  /* 104e7b0d mov eax, dword ptr [0x10510e60] */
  EAX = (r32((uint32_t)(0x10510e60)));
  /* 104e7b12 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104e7b15 push ecx */
  push32((uint32_t)(ECX));
  /* 104e7b16 call dword ptr [0x1051230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051230c))), 0x104e7b1cu);
  /* 104e7b1c mov edx, dword ptr [0x10510e60] */
  EDX = (r32((uint32_t)(0x10510e60)));
  /* 104e7b22 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104e7b25 push eax */
  push32((uint32_t)(EAX));
  /* 104e7b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e7b28 mov ecx, dword ptr [0x10510e6c] */
  ECX = (r32((uint32_t)(0x10510e6c)));
  /* 104e7b2e push ecx */
  push32((uint32_t)(ECX));
  /* 104e7b2f call dword ptr [0x10512308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512308))), 0x104e7b35u);
  /* 104e7b35 mov edx, dword ptr [0x10510e64] */
  EDX = (r32((uint32_t)(0x10510e64)));
  /* 104e7b3b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e7b3e mov eax, dword ptr [0x10510e68] */
  EAX = (r32((uint32_t)(0x10510e68)));
  /* 104e7b43 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7b45 mov ecx, dword ptr [0x10510e60] */
  ECX = (r32((uint32_t)(0x10510e60)));
  /* 104e7b4b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7b4e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7b50 push eax */
  push32((uint32_t)(EAX));
  /* 104e7b51 mov edx, dword ptr [0x10510e60] */
  EDX = (r32((uint32_t)(0x10510e60)));
  /* 104e7b57 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7b5a push edx */
  push32((uint32_t)(EDX));
  /* 104e7b5b mov eax, dword ptr [0x10510e60] */
  EAX = (r32((uint32_t)(0x10510e60)));
  /* 104e7b60 push eax */
  push32((uint32_t)(EAX));
  /* 104e7b61 call 0x104eb110 */
  push32(0x104e7b66u); f_104eb110();
  /* 104e7b66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7b69 mov ecx, dword ptr [0x10510e64] */
  ECX = (r32((uint32_t)(0x10510e64)));
  /* 104e7b6f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7b72 mov dword ptr [0x10510e64], ecx */
  w32((uint32_t)(0x10510e64), (ECX));
  /* 104e7b78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7b7b cmp edx, dword ptr [0x10510e60] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10510e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7b81 jbe 0x104e7b8c */
  if ((C.cf||C.zf)) goto L_104e7b8c;
  /* 104e7b83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7b86 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7b89 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104e7b8c:;
  /* 104e7b8c mov ecx, dword ptr [0x10510e68] */
  ECX = (r32((uint32_t)(0x10510e68)));
  /* 104e7b92 mov dword ptr [0x10510e5c], ecx */
  w32((uint32_t)(0x10510e5c), (ECX));
L_104e7b98:;
  /* 104e7b98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7b9b mov dword ptr [0x10510e60], edx */
  w32((uint32_t)(0x10510e60), (EDX));
  /* 104e7ba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7ba4 mov dword ptr [0x10510e58], eax */
  w32((uint32_t)(0x10510e58), (EAX));
L_104e7ba9:;
  /* 104e7ba9 mov esp, ebp */
  ESP = (EBP);
  /* 104e7bab pop ebp */
  EBP = (pop32());
  /* 104e7bac ret  */
  ESPCHK(0x104e75e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bb0 @ 0x104e7bb0 (1334 bytes, 427 insns) */
void f_104e7bb0(void) {
  FTRACE(0x104e7bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e7bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e7bb1 mov ebp, esp */
  EBP = (ESP);
  /* 104e7bb3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7bb6 push esi */
  push32((uint32_t)(ESI));
  /* 104e7bb7 mov eax, dword ptr [0x10510e64] */
  EAX = (r32((uint32_t)(0x10510e64)));
  /* 104e7bbc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e7bbf mov ecx, dword ptr [0x10510e68] */
  ECX = (r32((uint32_t)(0x10510e68)));
  /* 104e7bc5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7bc7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104e7bca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7bcd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7bd0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 104e7bd3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 104e7bd6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e7bd9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 104e7bdc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7bdf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104e7be2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7be6 jge 0x104e7bfc */
  if ((C.sf==C.of)) goto L_104e7bfc;
  /* 104e7be8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e7beb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e7bee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e7bf0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104e7bf3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 104e7bfa jmp 0x104e7c11 */
  goto L_104e7c11;
L_104e7bfc:;
  /* 104e7bfc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104e7c03 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e7c06 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7c09 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e7c0c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e7c0e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_104e7c11:;
  /* 104e7c11 mov ecx, dword ptr [0x10510e5c] */
  ECX = (r32((uint32_t)(0x10510e5c)));
  /* 104e7c17 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_104e7c1a:;
  /* 104e7c1a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7c1d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7c20 jae 0x104e7c46 */
  if (!C.cf) goto L_104e7c46;
  /* 104e7c22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7c25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e7c28 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 104e7c2a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7c2d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 104e7c30 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 104e7c33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104e7c35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e7c37 je 0x104e7c3b */
  if (C.zf) goto L_104e7c3b;
  /* 104e7c39 jmp 0x104e7c46 */
  goto L_104e7c46;
L_104e7c3b:;
  /* 104e7c3b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7c3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7c41 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104e7c44 jmp 0x104e7c1a */
  goto L_104e7c1a;
L_104e7c46:;
  /* 104e7c46 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7c49 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7c4c jne 0x104e7d2d */
  if (!C.zf) goto L_104e7d2d;
  /* 104e7c52 mov eax, dword ptr [0x10510e68] */
  EAX = (r32((uint32_t)(0x10510e68)));
  /* 104e7c57 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_104e7c5a:;
  /* 104e7c5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7c5d cmp ecx, dword ptr [0x10510e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10510e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7c63 jae 0x104e7c89 */
  if (!C.cf) goto L_104e7c89;
  /* 104e7c65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7c68 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e7c6b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 104e7c6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7c70 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 104e7c73 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 104e7c76 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e7c78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e7c7a je 0x104e7c7e */
  if (C.zf) goto L_104e7c7e;
  /* 104e7c7c jmp 0x104e7c89 */
  goto L_104e7c89;
L_104e7c7e:;
  /* 104e7c7e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7c81 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7c84 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104e7c87 jmp 0x104e7c5a */
  goto L_104e7c5a;
L_104e7c89:;
  /* 104e7c89 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7c8c cmp ecx, dword ptr [0x10510e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10510e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7c92 jne 0x104e7d2d */
  if (!C.zf) goto L_104e7d2d;
L_104e7c98:;
  /* 104e7c98 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7c9b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7c9e jae 0x104e7cb6 */
  if (!C.cf) goto L_104e7cb6;
  /* 104e7ca0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7ca3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7ca7 je 0x104e7cab */
  if (C.zf) goto L_104e7cab;
  /* 104e7ca9 jmp 0x104e7cb6 */
  goto L_104e7cb6;
L_104e7cab:;
  /* 104e7cab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7cae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7cb1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104e7cb4 jmp 0x104e7c98 */
  goto L_104e7c98;
L_104e7cb6:;
  /* 104e7cb6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7cb9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7cbc jne 0x104e7d07 */
  if (!C.zf) goto L_104e7d07;
  /* 104e7cbe mov eax, dword ptr [0x10510e68] */
  EAX = (r32((uint32_t)(0x10510e68)));
  /* 104e7cc3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_104e7cc6:;
  /* 104e7cc6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7cc9 cmp ecx, dword ptr [0x10510e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10510e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7ccf jae 0x104e7ce7 */
  if (!C.cf) goto L_104e7ce7;
  /* 104e7cd1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7cd4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7cd8 je 0x104e7cdc */
  if (C.zf) goto L_104e7cdc;
  /* 104e7cda jmp 0x104e7ce7 */
  goto L_104e7ce7;
L_104e7cdc:;
  /* 104e7cdc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7cdf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7ce2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104e7ce5 jmp 0x104e7cc6 */
  goto L_104e7cc6;
L_104e7ce7:;
  /* 104e7ce7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7cea cmp ecx, dword ptr [0x10510e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10510e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7cf0 jne 0x104e7d07 */
  if (!C.zf) goto L_104e7d07;
  /* 104e7cf2 call 0x104e80f0 */
  push32(0x104e7cf7u); f_104e80f0();
  /* 104e7cf7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104e7cfa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7cfe jne 0x104e7d07 */
  if (!C.zf) goto L_104e7d07;
  /* 104e7d00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e7d02 jmp 0x104e80e1 */
  goto L_104e80e1;
L_104e7d07:;
  /* 104e7d07 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7d0a push edx */
  push32((uint32_t)(EDX));
  /* 104e7d0b call 0x104e8200 */
  push32(0x104e7d10u); f_104e8200();
  /* 104e7d10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7d13 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7d16 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104e7d19 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104e7d1b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7d1e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e7d21 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7d24 jne 0x104e7d2d */
  if (!C.zf) goto L_104e7d2d;
  /* 104e7d26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e7d28 jmp 0x104e80e1 */
  goto L_104e80e1;
L_104e7d2d:;
  /* 104e7d2d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7d30 mov dword ptr [0x10510e5c], edx */
  w32((uint32_t)(0x10510e5c), (EDX));
  /* 104e7d36 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7d39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e7d3c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 104e7d3f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7d42 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e7d44 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 104e7d47 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7d4b je 0x104e7d70 */
  if (C.zf) goto L_104e7d70;
  /* 104e7d4d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7d50 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7d53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e7d56 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 104e7d5a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7d5d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7d60 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 104e7d63 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 104e7d6a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 104e7d6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e7d6e jne 0x104e7da5 */
  if (!C.zf) goto L_104e7da5;
L_104e7d70:;
  /* 104e7d70 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_104e7d77:;
  /* 104e7d77 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7d7a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7d7d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e7d80 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 104e7d84 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7d87 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7d8a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 104e7d8d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 104e7d94 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 104e7d96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e7d98 jne 0x104e7da5 */
  if (!C.zf) goto L_104e7da5;
  /* 104e7d9a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7d9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7da0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 104e7da3 jmp 0x104e7d77 */
  goto L_104e7d77;
L_104e7da5:;
  /* 104e7da5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7da8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e7dae mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7db1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 104e7db8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e7dbb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104e7dc2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7dc5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7dc8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e7dcb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 104e7dcf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104e7dd2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7dd6 jne 0x104e7df2 */
  if (!C.zf) goto L_104e7df2;
  /* 104e7dd8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 104e7ddf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7de2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7de5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 104e7de8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 104e7def mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_104e7df2:;
  /* 104e7df2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7df6 jl 0x104e7e0b */
  if ((C.sf!=C.of)) goto L_104e7e0b;
  /* 104e7df8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e7dfb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104e7dfd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104e7e00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e7e03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7e06 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104e7e09 jmp 0x104e7df2 */
  goto L_104e7df2;
L_104e7e0b:;
  /* 104e7e0b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e7e0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7e11 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 104e7e15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104e7e18 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e7e1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e7e1d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7e20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e7e23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e7e26 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 104e7e29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7e2c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104e7e2f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7e33 jle 0x104e7e3c */
  if ((C.zf||C.sf!=C.of)) goto L_104e7e3c;
  /* 104e7e35 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_104e7e3c:;
  /* 104e7e3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e7e3f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7e42 je 0x104e8060 */
  if (C.zf) goto L_104e8060;
  /* 104e7e48 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e7e4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e7e4e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e7e51 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7e54 jne 0x104e7f2a */
  if (!C.zf) goto L_104e7f2a;
  /* 104e7e5a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7e5e jge 0x104e7ebf */
  if ((C.sf==C.of)) goto L_104e7ebf;
  /* 104e7e60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e7e65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e7e68 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e7e6a not eax */
  EAX = (~(EAX));
  /* 104e7e6c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7e6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7e72 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 104e7e76 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104e7e78 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7e7b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7e7e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 104e7e82 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7e85 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7e88 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 104e7e8b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104e7e8e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7e91 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7e94 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 104e7e97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7e9a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7e9d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104e7ea1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e7ea3 jne 0x104e7ebd */
  if (!C.zf) goto L_104e7ebd;
  /* 104e7ea5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e7eaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e7ead shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e7eaf not eax */
  EAX = (~(EAX));
  /* 104e7eb1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7eb4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e7eb6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104e7eb8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7ebb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104e7ebd:;
  /* 104e7ebd jmp 0x104e7f2a */
  goto L_104e7f2a;
L_104e7ebf:;
  /* 104e7ebf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e7ec2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7ec5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e7eca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e7ecc not edx */
  EDX = (~(EDX));
  /* 104e7ece mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7ed1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7ed4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 104e7edb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e7edd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7ee0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7ee3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 104e7eea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7eed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7ef0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104e7ef3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104e7ef6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7ef9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7efc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 104e7eff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7f02 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7f05 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104e7f09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e7f0b jne 0x104e7f2a */
  if (!C.zf) goto L_104e7f2a;
  /* 104e7f0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e7f10 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e7f13 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e7f18 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e7f1a not edx */
  EDX = (~(EDX));
  /* 104e7f1c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7f1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e7f22 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104e7f24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7f27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_104e7f2a:;
  /* 104e7f2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e7f2d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104e7f30 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e7f33 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104e7f36 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 104e7f39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e7f3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e7f3f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e7f42 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104e7f45 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104e7f48 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7f4c je 0x104e8060 */
  if (C.zf) goto L_104e8060;
  /* 104e7f52 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e7f55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e7f58 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 104e7f5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104e7f5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e7f61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e7f64 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e7f67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104e7f6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e7f6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e7f70 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104e7f73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e7f76 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e7f79 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 104e7f7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e7f7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e7f82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e7f85 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 104e7f88 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e7f8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e7f8e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e7f91 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7f94 jne 0x104e8060 */
  if (!C.zf) goto L_104e8060;
  /* 104e7f9a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7f9e jge 0x104e7ffa */
  if ((C.sf==C.of)) goto L_104e7ffa;
  /* 104e7fa0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7fa3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7fa6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104e7faa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7fad add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7fb0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 104e7fb3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104e7fb5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7fb8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7fbb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 104e7fbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e7fc0 jne 0x104e7fd8 */
  if (!C.zf) goto L_104e7fd8;
  /* 104e7fc2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e7fc7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e7fca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e7fcc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7fcf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e7fd1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104e7fd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e7fd6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104e7fd8:;
  /* 104e7fd8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e7fdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e7fe0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e7fe2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7fe5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7fe8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 104e7fec or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e7fee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e7ff1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7ff4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 104e7ff8 jmp 0x104e8060 */
  goto L_104e8060;
L_104e7ffa:;
  /* 104e7ffa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e7ffd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8000 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104e8004 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e8007 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e800a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 104e800d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104e800f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e8012 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8015 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 104e8018 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e801a jne 0x104e8037 */
  if (!C.zf) goto L_104e8037;
  /* 104e801c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e801f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8022 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e8027 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e8029 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e802c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e802f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104e8031 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e8034 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104e8037:;
  /* 104e8037 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e803a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e803d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e8042 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e8044 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8047 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e804a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 104e8051 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e8053 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8056 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e8059 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_104e8060:;
  /* 104e8060 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8064 je 0x104e807a */
  if (C.zf) goto L_104e807a;
  /* 104e8066 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e8069 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e806c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104e806e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e8071 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8074 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e8077 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_104e807a:;
  /* 104e807a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e807d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8080 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104e8083 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e8086 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8089 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e808c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104e808e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e8091 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8094 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e8097 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e809a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 104e809d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e80a0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e80a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e80a5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e80a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e80aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e80ad mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104e80af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e80b1 jne 0x104e80d3 */
  if (!C.zf) goto L_104e80d3;
  /* 104e80b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e80b6 cmp eax, dword ptr [0x10510e60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10510e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e80bc jne 0x104e80d3 */
  if (!C.zf) goto L_104e80d3;
  /* 104e80be mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e80c1 cmp ecx, dword ptr [0x10510e58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10510e58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e80c7 jne 0x104e80d3 */
  if (!C.zf) goto L_104e80d3;
  /* 104e80c9 mov dword ptr [0x10510e60], 0 */
  w32((uint32_t)(0x10510e60), (0x0u));
L_104e80d3:;
  /* 104e80d3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 104e80d6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e80d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104e80db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e80de add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_104e80e1:;
  /* 104e80e1 pop esi */
  ESI = (pop32());
  /* 104e80e2 mov esp, ebp */
  ESP = (EBP);
  /* 104e80e4 pop ebp */
  EBP = (pop32());
  /* 104e80e5 ret  */
  ESPCHK(0x104e7bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080f0 @ 0x104e80f0 (271 bytes, 78 insns) */
void f_104e80f0(void) {
  FTRACE(0x104e80f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e80f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e80f1 mov ebp, esp */
  EBP = (ESP);
  /* 104e80f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e80f4 mov eax, dword ptr [0x10510e64] */
  EAX = (r32((uint32_t)(0x10510e64)));
  /* 104e80f9 cmp eax, dword ptr [0x10510e48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10510e48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e80ff jne 0x104e814b */
  if (!C.zf) goto L_104e814b;
  /* 104e8101 mov ecx, dword ptr [0x10510e48] */
  ECX = (r32((uint32_t)(0x10510e48)));
  /* 104e8107 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e810a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e810d push ecx */
  push32((uint32_t)(ECX));
  /* 104e810e mov edx, dword ptr [0x10510e68] */
  EDX = (r32((uint32_t)(0x10510e68)));
  /* 104e8114 push edx */
  push32((uint32_t)(EDX));
  /* 104e8115 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e8117 mov eax, dword ptr [0x10510e6c] */
  EAX = (r32((uint32_t)(0x10510e6c)));
  /* 104e811c push eax */
  push32((uint32_t)(EAX));
  /* 104e811d call dword ptr [0x1051232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051232c))), 0x104e8123u);
  /* 104e8123 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e8126 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e812a jne 0x104e8133 */
  if (!C.zf) goto L_104e8133;
  /* 104e812c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e812e jmp 0x104e81fb */
  goto L_104e81fb;
L_104e8133:;
  /* 104e8133 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e8136 mov dword ptr [0x10510e68], ecx */
  w32((uint32_t)(0x10510e68), (ECX));
  /* 104e813c mov edx, dword ptr [0x10510e48] */
  EDX = (r32((uint32_t)(0x10510e48)));
  /* 104e8142 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8145 mov dword ptr [0x10510e48], edx */
  w32((uint32_t)(0x10510e48), (EDX));
L_104e814b:;
  /* 104e814b mov eax, dword ptr [0x10510e64] */
  EAX = (r32((uint32_t)(0x10510e64)));
  /* 104e8150 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e8153 mov ecx, dword ptr [0x10510e68] */
  ECX = (r32((uint32_t)(0x10510e68)));
  /* 104e8159 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e815b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104e815e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 104e8163 push 8 */
  push32((uint32_t)(0x8u));
  /* 104e8165 mov edx, dword ptr [0x10510e6c] */
  EDX = (r32((uint32_t)(0x10510e6c)));
  /* 104e816b push edx */
  push32((uint32_t)(EDX));
  /* 104e816c call dword ptr [0x10512328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512328))), 0x104e8172u);
  /* 104e8172 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e8175 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 104e8178 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e817b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e817f jne 0x104e8185 */
  if (!C.zf) goto L_104e8185;
  /* 104e8181 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e8183 jmp 0x104e81fb */
  goto L_104e81fb;
L_104e8185:;
  /* 104e8185 push 4 */
  push32((uint32_t)(0x4u));
  /* 104e8187 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 104e818c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 104e8191 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e8193 call dword ptr [0x10512330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512330))), 0x104e8199u);
  /* 104e8199 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e819c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 104e819f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e81a2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e81a6 jne 0x104e81c2 */
  if (!C.zf) goto L_104e81c2;
  /* 104e81a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e81ab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e81ae push ecx */
  push32((uint32_t)(ECX));
  /* 104e81af push 0 */
  push32((uint32_t)(0x0u));
  /* 104e81b1 mov edx, dword ptr [0x10510e6c] */
  EDX = (r32((uint32_t)(0x10510e6c)));
  /* 104e81b7 push edx */
  push32((uint32_t)(EDX));
  /* 104e81b8 call dword ptr [0x10512308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512308))), 0x104e81beu);
  /* 104e81be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e81c0 jmp 0x104e81fb */
  goto L_104e81fb;
L_104e81c2:;
  /* 104e81c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e81c5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104e81cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e81ce mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 104e81d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e81d8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 104e81df mov eax, dword ptr [0x10510e64] */
  EAX = (r32((uint32_t)(0x10510e64)));
  /* 104e81e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e81e7 mov dword ptr [0x10510e64], eax */
  w32((uint32_t)(0x10510e64), (EAX));
  /* 104e81ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e81ef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104e81f2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 104e81f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104e81fb:;
  /* 104e81fb mov esp, ebp */
  ESP = (EBP);
  /* 104e81fd pop ebp */
  EBP = (pop32());
  /* 104e81fe ret  */
  ESPCHK(0x104e80f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008200 @ 0x104e8200 (494 bytes, 149 insns) */
void f_104e8200(void) {
  FTRACE(0x104e8200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e8200 push ebp */
  push32((uint32_t)(EBP));
  /* 104e8201 mov ebp, esp */
  EBP = (ESP);
  /* 104e8203 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e8209 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e820c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104e820f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e8212 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104e8215 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e8218 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_104e821f:;
  /* 104e821f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8223 jl 0x104e8238 */
  if ((C.sf!=C.of)) goto L_104e8238;
  /* 104e8225 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e8228 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 104e822a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104e822d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e8230 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8233 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 104e8236 jmp 0x104e821f */
  goto L_104e821f;
L_104e8238:;
  /* 104e8238 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e823b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e8241 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e8244 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 104e824b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104e824e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104e8255 jmp 0x104e8260 */
  goto L_104e8260;
L_104e8257:;
  /* 104e8257 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e825a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e825d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_104e8260:;
  /* 104e8260 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8264 jge 0x104e8286 */
  if ((C.sf==C.of)) goto L_104e8286;
  /* 104e8266 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e8269 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e826c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 104e826f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104e8272 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e8275 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e8278 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 104e827b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e827e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e8281 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 104e8284 jmp 0x104e8257 */
  goto L_104e8257;
L_104e8286:;
  /* 104e8286 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e8289 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 104e828c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e828f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104e8292 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8294 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104e8297 push 4 */
  push32((uint32_t)(0x4u));
  /* 104e8299 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 104e829e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 104e82a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e82a6 push edx */
  push32((uint32_t)(EDX));
  /* 104e82a7 call dword ptr [0x10512330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512330))), 0x104e82adu);
  /* 104e82ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e82af jne 0x104e82b9 */
  if (!C.zf) goto L_104e82b9;
  /* 104e82b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e82b4 jmp 0x104e83ea */
  goto L_104e83ea;
L_104e82b9:;
  /* 104e82b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e82bc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e82c1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104e82c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e82c7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104e82ca jmp 0x104e82d8 */
  goto L_104e82d8;
L_104e82cc:;
  /* 104e82cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e82cf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e82d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104e82d8:;
  /* 104e82d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e82db cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e82de ja 0x104e833d */
  if ((!C.cf&&!C.zf)) goto L_104e833d;
  /* 104e82e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e82e3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 104e82ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e82ed mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 104e82f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e82fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e82fd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104e8300 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e8303 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 104e8309 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e830c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8312 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e8315 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104e8318 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e831b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8321 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e8324 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104e8327 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e832a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e832f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104e8332 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e8335 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 104e833b jmp 0x104e82cc */
  goto L_104e82cc;
L_104e833d:;
  /* 104e833d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e8340 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8346 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104e8349 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e834c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e834f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e8352 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 104e8355 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e8358 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104e835b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104e835e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e8361 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e8364 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 104e8367 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e836a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e836d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e8370 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 104e8373 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e8376 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104e8379 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104e837c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e837f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e8382 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 104e8385 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e8388 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e838b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 104e8393 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e8396 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e8399 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 104e83a4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e83a7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 104e83ab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e83ae mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 104e83b1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 104e83b4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e83b7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 104e83ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e83bc jne 0x104e83cd */
  if (!C.zf) goto L_104e83cd;
  /* 104e83be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e83c1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e83c4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104e83c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e83ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104e83cd:;
  /* 104e83cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e83d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e83d5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e83d7 not edx */
  EDX = (~(EDX));
  /* 104e83d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e83dc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104e83df and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104e83e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e83e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104e83e7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_104e83ea:;
  /* 104e83ea mov esp, ebp */
  ESP = (EBP);
  /* 104e83ec pop ebp */
  EBP = (pop32());
  /* 104e83ed ret  */
  ESPCHK(0x104e8200u, _esp0);
  ESP += 4; return;
}

/* FUN_100083f0 @ 0x104e83f0 (1515 bytes, 489 insns) */
void f_104e83f0(void) {
  FTRACE(0x104e83f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e83f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e83f1 mov ebp, esp */
  EBP = (ESP);
  /* 104e83f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e83f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e83f9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e83fc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 104e83fe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104e8401 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e8404 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104e8407 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 104e840a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e840d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e8410 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8413 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104e8416 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e8419 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 104e841c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e841f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e8422 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e8428 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e842b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 104e8432 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104e8435 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e8438 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e843b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104e843e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e8441 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e8443 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8446 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 104e8449 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e844c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e844f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 104e8452 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e8455 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e8457 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104e845a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e845d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8460 jle 0x104e8716 */
  if ((C.zf||C.sf!=C.of)) goto L_104e8716;
  /* 104e8466 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e8469 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104e846c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e846e jne 0x104e847b */
  if (!C.zf) goto L_104e847b;
  /* 104e8470 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e8473 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8476 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8479 jle 0x104e8482 */
  if ((C.zf||C.sf!=C.of)) goto L_104e8482;
L_104e847b:;
  /* 104e847b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e847d jmp 0x104e89d7 */
  goto L_104e89d7;
L_104e8482:;
  /* 104e8482 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e8485 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 104e8488 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e848b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104e848e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8492 jbe 0x104e849b */
  if ((C.cf||C.zf)) goto L_104e849b;
  /* 104e8494 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_104e849b:;
  /* 104e849b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e849e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e84a1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e84a4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e84a7 jne 0x104e857d */
  if (!C.zf) goto L_104e857d;
  /* 104e84ad cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e84b1 jae 0x104e8512 */
  if (!C.cf) goto L_104e8512;
  /* 104e84b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e84b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e84bb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e84bd not edx */
  EDX = (~(EDX));
  /* 104e84bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e84c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e84c5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 104e84c9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e84cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e84ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e84d1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 104e84d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e84d8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e84db mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104e84de sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104e84e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e84e4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e84e7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 104e84ea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e84ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e84f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104e84f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e84f6 jne 0x104e8510 */
  if (!C.zf) goto L_104e8510;
  /* 104e84f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e84fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e8500 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e8502 not edx */
  EDX = (~(EDX));
  /* 104e8504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e8507 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e8509 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104e850b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e850e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104e8510:;
  /* 104e8510 jmp 0x104e857d */
  goto L_104e857d;
L_104e8512:;
  /* 104e8512 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e8515 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8518 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e851d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e851f not eax */
  EAX = (~(EAX));
  /* 104e8521 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e8524 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8527 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 104e852e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104e8530 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e8533 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8536 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 104e853d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8540 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8543 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 104e8546 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104e8549 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e854c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e854f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 104e8552 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8555 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8558 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104e855c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e855e jne 0x104e857d */
  if (!C.zf) goto L_104e857d;
  /* 104e8560 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e8563 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8566 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e856b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e856d not eax */
  EAX = (~(EAX));
  /* 104e856f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e8572 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e8575 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104e8577 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e857a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104e857d:;
  /* 104e857d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e8580 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104e8583 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e8586 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e8589 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104e858c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e858f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104e8592 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e8595 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104e8598 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 104e859b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e859e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e85a1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e85a4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104e85a7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e85ab jle 0x104e86f7 */
  if ((C.zf||C.sf!=C.of)) goto L_104e86f7;
  /* 104e85b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e85b4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e85b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104e85ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e85bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104e85c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e85c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104e85c6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e85ca jbe 0x104e85d3 */
  if ((C.cf||C.zf)) goto L_104e85d3;
  /* 104e85cc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_104e85d3:;
  /* 104e85d3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e85d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e85d9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 104e85dc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104e85df mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e85e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e85e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e85e8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104e85eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e85ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e85f1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 104e85f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e85f7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e85fa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 104e85fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e8600 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e8603 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e8606 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104e8609 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e860c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e860f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e8612 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8615 jne 0x104e86e3 */
  if (!C.zf) goto L_104e86e3;
  /* 104e861b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e861f jae 0x104e867c */
  if (!C.cf) goto L_104e867c;
  /* 104e8621 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8624 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8627 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104e862b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e862e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8631 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104e8634 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 104e8637 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e863a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e863d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 104e8640 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e8642 jne 0x104e865a */
  if (!C.zf) goto L_104e865a;
  /* 104e8644 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e8649 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e864c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e864e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e8651 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e8653 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104e8655 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e8658 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104e865a:;
  /* 104e865a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e865f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e8662 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e8664 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e8667 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e866a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 104e866e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104e8670 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e8673 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8676 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 104e867a jmp 0x104e86e3 */
  goto L_104e86e3;
L_104e867c:;
  /* 104e867c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e867f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8682 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104e8686 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8689 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e868c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104e868f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 104e8692 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8695 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8698 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 104e869b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e869d jne 0x104e86ba */
  if (!C.zf) goto L_104e86ba;
  /* 104e869f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e86a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e86a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e86aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e86ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e86af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e86b2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104e86b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e86b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_104e86ba:;
  /* 104e86ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e86bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e86c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e86c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e86c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e86ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e86cd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 104e86d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104e86d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e86d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e86dc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_104e86e3:;
  /* 104e86e3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e86e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e86e9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104e86eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e86ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e86f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e86f4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_104e86f7:;
  /* 104e86f7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e86fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e86fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e8700 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104e8702 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e8705 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8708 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e870b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e870e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 104e8711 jmp 0x104e89d2 */
  goto L_104e89d2;
L_104e8716:;
  /* 104e8716 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e8719 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e871c jge 0x104e89d2 */
  if ((C.sf==C.of)) goto L_104e89d2;
  /* 104e8722 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e8725 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8728 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e872b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104e872d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104e8730 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8733 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e8736 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8739 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 104e873c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e873f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8742 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104e8745 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e8748 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e874b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104e874e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e8751 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 104e8754 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8757 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104e875a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e875e jbe 0x104e8767 */
  if ((C.cf||C.zf)) goto L_104e8767;
  /* 104e8760 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_104e8767:;
  /* 104e8767 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e876a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104e876d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e876f jne 0x104e88b0 */
  if (!C.zf) goto L_104e88b0;
  /* 104e8775 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e8778 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 104e877b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e877e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104e8781 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8785 jbe 0x104e878e */
  if ((C.cf||C.zf)) goto L_104e878e;
  /* 104e8787 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_104e878e:;
  /* 104e878e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e8791 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e8794 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e8797 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e879a jne 0x104e8870 */
  if (!C.zf) goto L_104e8870;
  /* 104e87a0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e87a4 jae 0x104e8805 */
  if (!C.cf) goto L_104e8805;
  /* 104e87a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e87ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e87ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e87b0 not edx */
  EDX = (~(EDX));
  /* 104e87b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e87b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e87b8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 104e87bc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e87be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e87c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e87c4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 104e87c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e87cb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e87ce mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104e87d1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104e87d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e87d7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e87da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 104e87dd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e87e0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e87e3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104e87e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e87e9 jne 0x104e8803 */
  if (!C.zf) goto L_104e8803;
  /* 104e87eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e87f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e87f3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e87f5 not edx */
  EDX = (~(EDX));
  /* 104e87f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e87fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e87fc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104e87fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e8801 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104e8803:;
  /* 104e8803 jmp 0x104e8870 */
  goto L_104e8870;
L_104e8805:;
  /* 104e8805 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e8808 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e880b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e8810 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e8812 not eax */
  EAX = (~(EAX));
  /* 104e8814 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e8817 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e881a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 104e8821 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104e8823 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e8826 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8829 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 104e8830 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8833 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8836 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 104e8839 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104e883c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e883f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8842 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 104e8845 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8848 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e884b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104e884f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e8851 jne 0x104e8870 */
  if (!C.zf) goto L_104e8870;
  /* 104e8853 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e8856 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8859 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e885e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e8860 not eax */
  EAX = (~(EAX));
  /* 104e8862 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e8865 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e8868 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104e886a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e886d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104e8870:;
  /* 104e8870 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e8873 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104e8876 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e8879 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e887c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104e887f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e8882 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104e8885 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e8888 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104e888b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 104e888e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e8891 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8894 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104e8897 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e889a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 104e889d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e88a0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104e88a3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e88a7 jbe 0x104e88b0 */
  if ((C.cf||C.zf)) goto L_104e88b0;
  /* 104e88a9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_104e88b0:;
  /* 104e88b0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e88b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e88b6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 104e88b9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104e88bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e88bf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e88c2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e88c5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104e88c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e88cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e88ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104e88d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e88d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e88d7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 104e88da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e88dd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e88e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e88e3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 104e88e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e88e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e88ec mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e88ef cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e88f2 jne 0x104e89be */
  if (!C.zf) goto L_104e89be;
  /* 104e88f8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e88fc jae 0x104e8958 */
  if (!C.cf) goto L_104e8958;
  /* 104e88fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8901 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8904 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104e8908 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e890b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e890e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 104e8911 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104e8913 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8916 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8919 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 104e891c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e891e jne 0x104e8936 */
  if (!C.zf) goto L_104e8936;
  /* 104e8920 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e8925 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e8928 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e892a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e892d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e892f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104e8931 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e8934 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104e8936:;
  /* 104e8936 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e893b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e893e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e8940 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e8943 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8946 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 104e894a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e894c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e894f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8952 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 104e8956 jmp 0x104e89be */
  goto L_104e89be;
L_104e8958:;
  /* 104e8958 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e895b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e895e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104e8962 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8965 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8968 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 104e896b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104e896d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e8970 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8973 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 104e8976 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e8978 jne 0x104e8995 */
  if (!C.zf) goto L_104e8995;
  /* 104e897a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e897d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8980 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104e8985 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104e8987 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e898a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e898d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104e898f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e8992 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104e8995:;
  /* 104e8995 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e8998 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e899b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e89a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e89a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e89a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e89a8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 104e89af or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e89b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e89b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104e89b7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_104e89be:;
  /* 104e89be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e89c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e89c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104e89c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e89c9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e89cc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e89cf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_104e89d2:;
  /* 104e89d2 mov eax, 1 */
  EAX = (0x1u);
L_104e89d7:;
  /* 104e89d7 mov esp, ebp */
  ESP = (EBP);
  /* 104e89d9 pop ebp */
  EBP = (pop32());
  /* 104e89da ret  */
  ESPCHK(0x104e83f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089e0 @ 0x104e89e0 (304 bytes, 79 insns) */
void f_104e89e0(void) {
  FTRACE(0x104e89e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e89e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e89e1 mov ebp, esp */
  EBP = (ESP);
  /* 104e89e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e89e4 cmp dword ptr [0x10510e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10510e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e89eb je 0x104e8b0c */
  if (C.zf) goto L_104e8b0c;
  /* 104e89f1 mov eax, dword ptr [0x10510e58] */
  EAX = (r32((uint32_t)(0x10510e58)));
  /* 104e89f6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 104e89f9 mov ecx, dword ptr [0x10510e60] */
  ECX = (r32((uint32_t)(0x10510e60)));
  /* 104e89ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104e8a02 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8a04 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e8a07 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 104e8a0c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 104e8a11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e8a14 push eax */
  push32((uint32_t)(EAX));
  /* 104e8a15 call dword ptr [0x1051230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051230c))), 0x104e8a1bu);
  /* 104e8a1b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e8a20 mov ecx, dword ptr [0x10510e58] */
  ECX = (r32((uint32_t)(0x10510e58)));
  /* 104e8a26 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e8a28 mov eax, dword ptr [0x10510e60] */
  EAX = (r32((uint32_t)(0x10510e60)));
  /* 104e8a2d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104e8a30 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104e8a32 mov edx, dword ptr [0x10510e60] */
  EDX = (r32((uint32_t)(0x10510e60)));
  /* 104e8a38 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104e8a3b mov eax, dword ptr [0x10510e60] */
  EAX = (r32((uint32_t)(0x10510e60)));
  /* 104e8a40 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e8a43 mov edx, dword ptr [0x10510e58] */
  EDX = (r32((uint32_t)(0x10510e58)));
  /* 104e8a49 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 104e8a54 mov eax, dword ptr [0x10510e60] */
  EAX = (r32((uint32_t)(0x10510e60)));
  /* 104e8a59 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e8a5c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 104e8a5f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104e8a62 mov eax, dword ptr [0x10510e60] */
  EAX = (r32((uint32_t)(0x10510e60)));
  /* 104e8a67 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e8a6a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 104e8a6d mov edx, dword ptr [0x10510e60] */
  EDX = (r32((uint32_t)(0x10510e60)));
  /* 104e8a73 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104e8a76 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 104e8a7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e8a7c jne 0x104e8a92 */
  if (!C.zf) goto L_104e8a92;
  /* 104e8a7e mov edx, dword ptr [0x10510e60] */
  EDX = (r32((uint32_t)(0x10510e60)));
  /* 104e8a84 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104e8a87 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 104e8a89 mov ecx, dword ptr [0x10510e60] */
  ECX = (r32((uint32_t)(0x10510e60)));
  /* 104e8a8f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_104e8a92:;
  /* 104e8a92 mov edx, dword ptr [0x10510e60] */
  EDX = (r32((uint32_t)(0x10510e60)));
  /* 104e8a98 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8a9c jne 0x104e8b02 */
  if (!C.zf) goto L_104e8b02;
  /* 104e8a9e cmp dword ptr [0x10510e64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10510e64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8aa5 jle 0x104e8b02 */
  if ((C.zf||C.sf!=C.of)) goto L_104e8b02;
  /* 104e8aa7 mov eax, dword ptr [0x10510e60] */
  EAX = (r32((uint32_t)(0x10510e60)));
  /* 104e8aac mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e8aaf push ecx */
  push32((uint32_t)(ECX));
  /* 104e8ab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e8ab2 mov edx, dword ptr [0x10510e6c] */
  EDX = (r32((uint32_t)(0x10510e6c)));
  /* 104e8ab8 push edx */
  push32((uint32_t)(EDX));
  /* 104e8ab9 call dword ptr [0x10512308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512308))), 0x104e8abfu);
  /* 104e8abf mov eax, dword ptr [0x10510e64] */
  EAX = (r32((uint32_t)(0x10510e64)));
  /* 104e8ac4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e8ac7 mov ecx, dword ptr [0x10510e68] */
  ECX = (r32((uint32_t)(0x10510e68)));
  /* 104e8acd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8acf mov edx, dword ptr [0x10510e60] */
  EDX = (r32((uint32_t)(0x10510e60)));
  /* 104e8ad5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8ad8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8ada push ecx */
  push32((uint32_t)(ECX));
  /* 104e8adb mov eax, dword ptr [0x10510e60] */
  EAX = (r32((uint32_t)(0x10510e60)));
  /* 104e8ae0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8ae3 push eax */
  push32((uint32_t)(EAX));
  /* 104e8ae4 mov ecx, dword ptr [0x10510e60] */
  ECX = (r32((uint32_t)(0x10510e60)));
  /* 104e8aea push ecx */
  push32((uint32_t)(ECX));
  /* 104e8aeb call 0x104eb110 */
  push32(0x104e8af0u); f_104eb110();
  /* 104e8af0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8af3 mov edx, dword ptr [0x10510e64] */
  EDX = (r32((uint32_t)(0x10510e64)));
  /* 104e8af9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8afc mov dword ptr [0x10510e64], edx */
  w32((uint32_t)(0x10510e64), (EDX));
L_104e8b02:;
  /* 104e8b02 mov dword ptr [0x10510e60], 0 */
  w32((uint32_t)(0x10510e60), (0x0u));
L_104e8b0c:;
  /* 104e8b0c mov esp, ebp */
  ESP = (EBP);
  /* 104e8b0e pop ebp */
  EBP = (pop32());
  /* 104e8b0f ret  */
  ESPCHK(0x104e89e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b10 @ 0x104e8b10 (1565 bytes, 343 insns) */
void f_104e8b10(void) {
  FTRACE(0x104e8b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e8b10 push ebp */
  push32((uint32_t)(EBP));
  /* 104e8b11 mov ebp, esp */
  EBP = (ESP);
  /* 104e8b13 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8b19 mov eax, dword ptr [0x10510e64] */
  EAX = (r32((uint32_t)(0x10510e64)));
  /* 104e8b1e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e8b21 push eax */
  push32((uint32_t)(EAX));
  /* 104e8b22 mov ecx, dword ptr [0x10510e68] */
  ECX = (r32((uint32_t)(0x10510e68)));
  /* 104e8b28 push ecx */
  push32((uint32_t)(ECX));
  /* 104e8b29 call dword ptr [0x105122e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122e0))), 0x104e8b2fu);
  /* 104e8b2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e8b31 je 0x104e8b3b */
  if (C.zf) goto L_104e8b3b;
  /* 104e8b33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e8b36 jmp 0x104e9129 */
  goto L_104e9129;
L_104e8b3b:;
  /* 104e8b3b mov edx, dword ptr [0x10510e68] */
  EDX = (r32((uint32_t)(0x10510e68)));
  /* 104e8b41 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 104e8b47 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 104e8b51 jmp 0x104e8b62 */
  goto L_104e8b62;
L_104e8b53:;
  /* 104e8b53 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 104e8b59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8b5c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_104e8b62:;
  /* 104e8b62 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 104e8b68 cmp ecx, dword ptr [0x10510e64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10510e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8b6e jge 0x104e9127 */
  if ((C.sf==C.of)) goto L_104e9127;
  /* 104e8b74 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 104e8b7a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104e8b7d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 104e8b83 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 104e8b88 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 104e8b8e push ecx */
  push32((uint32_t)(ECX));
  /* 104e8b8f call dword ptr [0x105122e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122e0))), 0x104e8b95u);
  /* 104e8b95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e8b97 je 0x104e8ba3 */
  if (C.zf) goto L_104e8ba3;
  /* 104e8b99 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 104e8b9e jmp 0x104e9129 */
  goto L_104e9129;
L_104e8ba3:;
  /* 104e8ba3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 104e8ba9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104e8bac mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 104e8bb2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 104e8bb8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8bbe mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104e8bc1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 104e8bc7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104e8bca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e8bcd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 104e8bd7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 104e8be1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104e8be8 jmp 0x104e8bf3 */
  goto L_104e8bf3;
L_104e8bea:;
  /* 104e8bea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e8bed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8bf0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104e8bf3:;
  /* 104e8bf3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8bf7 jge 0x104e90eb */
  if ((C.sf==C.of)) goto L_104e90eb;
  /* 104e8bfd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 104e8c07 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 104e8c11 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 104e8c1b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 104e8c25 jmp 0x104e8c36 */
  goto L_104e8c36;
L_104e8c27:;
  /* 104e8c27 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 104e8c2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8c30 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_104e8c36:;
  /* 104e8c36 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8c3d jge 0x104e8c52 */
  if ((C.sf==C.of)) goto L_104e8c52;
  /* 104e8c3f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 104e8c45 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 104e8c50 jmp 0x104e8c27 */
  goto L_104e8c27;
L_104e8c52:;
  /* 104e8c52 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8c56 jl 0x104e908d */
  if ((C.sf!=C.of)) goto L_104e908d;
  /* 104e8c5c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 104e8c61 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 104e8c67 push ecx */
  push32((uint32_t)(ECX));
  /* 104e8c68 call dword ptr [0x105122e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122e0))), 0x104e8c6eu);
  /* 104e8c6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e8c70 je 0x104e8c7c */
  if (C.zf) goto L_104e8c7c;
  /* 104e8c72 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 104e8c77 jmp 0x104e9129 */
  goto L_104e9129;
L_104e8c7c:;
  /* 104e8c7c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 104e8c82 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104e8c85 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 104e8c8f jmp 0x104e8ca0 */
  goto L_104e8ca0;
L_104e8c91:;
  /* 104e8c91 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 104e8c97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8c9a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_104e8ca0:;
  /* 104e8ca0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8ca7 jge 0x104e8e24 */
  if ((C.sf==C.of)) goto L_104e8e24;
  /* 104e8cad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e8cb0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8cb3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 104e8cb9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 104e8cbf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8cc5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 104e8ccb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 104e8cd1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8cd5 jne 0x104e8ce2 */
  if (!C.zf) goto L_104e8ce2;
  /* 104e8cd7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 104e8cdd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8ce0 je 0x104e8cec */
  if (C.zf) goto L_104e8cec;
L_104e8ce2:;
  /* 104e8ce2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 104e8ce7 jmp 0x104e9129 */
  goto L_104e9129;
L_104e8cec:;
  /* 104e8cec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 104e8cf2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e8cf4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 104e8cfa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 104e8d00 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 104e8d06 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 104e8d0c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104e8d0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e8d11 je 0x104e8d49 */
  if (C.zf) goto L_104e8d49;
  /* 104e8d13 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 104e8d19 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8d1c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 104e8d22 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8d2c jle 0x104e8d38 */
  if ((C.zf||C.sf!=C.of)) goto L_104e8d38;
  /* 104e8d2e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 104e8d33 jmp 0x104e9129 */
  goto L_104e9129;
L_104e8d38:;
  /* 104e8d38 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 104e8d3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8d41 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 104e8d47 jmp 0x104e8d8b */
  goto L_104e8d8b;
L_104e8d49:;
  /* 104e8d49 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 104e8d4f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104e8d52 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8d55 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 104e8d5b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8d62 jle 0x104e8d6e */
  if ((C.zf||C.sf!=C.of)) goto L_104e8d6e;
  /* 104e8d64 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_104e8d6e:;
  /* 104e8d6e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 104e8d74 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 104e8d7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8d7e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 104e8d84 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_104e8d8b:;
  /* 104e8d8b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8d92 jl 0x104e8dad */
  if ((C.sf!=C.of)) goto L_104e8dad;
  /* 104e8d94 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 104e8d9a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 104e8d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e8d9f jne 0x104e8dad */
  if (!C.zf) goto L_104e8dad;
  /* 104e8da1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8dab jle 0x104e8db7 */
  if ((C.zf||C.sf!=C.of)) goto L_104e8db7;
L_104e8dad:;
  /* 104e8dad mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 104e8db2 jmp 0x104e9129 */
  goto L_104e9129;
L_104e8db7:;
  /* 104e8db7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 104e8dbd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8dc3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 104e8dc6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8dcc je 0x104e8dd8 */
  if (C.zf) goto L_104e8dd8;
  /* 104e8dce mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 104e8dd3 jmp 0x104e9129 */
  goto L_104e9129;
L_104e8dd8:;
  /* 104e8dd8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 104e8dde add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8de4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 104e8dea mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 104e8df0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8df6 jb 0x104e8cec */
  if (C.cf) goto L_104e8cec;
  /* 104e8dfc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 104e8e02 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8e08 je 0x104e8e14 */
  if (C.zf) goto L_104e8e14;
  /* 104e8e0a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 104e8e0f jmp 0x104e9129 */
  goto L_104e9129;
L_104e8e14:;
  /* 104e8e14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e8e17 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8e1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e8e1f jmp 0x104e8c91 */
  goto L_104e8c91;
L_104e8e24:;
  /* 104e8e24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e8e27 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e8e29 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8e2f je 0x104e8e3b */
  if (C.zf) goto L_104e8e3b;
  /* 104e8e31 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 104e8e36 jmp 0x104e9129 */
  goto L_104e9129;
L_104e8e3b:;
  /* 104e8e3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e8e3e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 104e8e44 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 104e8e4b jmp 0x104e8e56 */
  goto L_104e8e56;
L_104e8e4d:;
  /* 104e8e4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e8e50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8e53 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_104e8e56:;
  /* 104e8e56 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8e5a jge 0x104e908d */
  if ((C.sf==C.of)) goto L_104e908d;
  /* 104e8e60 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 104e8e6a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 104e8e70 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_104e8e76:;
  /* 104e8e76 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 104e8e7c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e8e7f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 104e8e85 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 104e8e8b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8e91 je 0x104e8fba */
  if (C.zf) goto L_104e8fba;
  /* 104e8e97 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e8e9a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 104e8ea0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8ea7 je 0x104e8fba */
  if (C.zf) goto L_104e8fba;
  /* 104e8ead mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 104e8eb3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8eb9 jb 0x104e8ece */
  if (C.cf) goto L_104e8ece;
  /* 104e8ebb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 104e8ec1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8ec6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8ecc jb 0x104e8ed8 */
  if (C.cf) goto L_104e8ed8;
L_104e8ece:;
  /* 104e8ece mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 104e8ed3 jmp 0x104e9129 */
  goto L_104e9129;
L_104e8ed8:;
  /* 104e8ed8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 104e8ede and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 104e8ee4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 104e8eea mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 104e8ef0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8ef3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104e8ef6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e8ef9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8efe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_104e8f04:;
  /* 104e8f04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e8f07 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8f0d je 0x104e8f2e */
  if (C.zf) goto L_104e8f2e;
  /* 104e8f0f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e8f12 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8f18 jne 0x104e8f1c */
  if (!C.zf) goto L_104e8f1c;
  /* 104e8f1a jmp 0x104e8f2e */
  goto L_104e8f2e;
L_104e8f1c:;
  /* 104e8f1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e8f1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e8f21 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 104e8f24 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e8f27 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8f29 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104e8f2c jmp 0x104e8f04 */
  goto L_104e8f04;
L_104e8f2e:;
  /* 104e8f2e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e8f31 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8f37 jne 0x104e8f43 */
  if (!C.zf) goto L_104e8f43;
  /* 104e8f39 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 104e8f3e jmp 0x104e9129 */
  goto L_104e9129;
L_104e8f43:;
  /* 104e8f43 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 104e8f49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e8f4b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104e8f4e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e8f51 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 104e8f57 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8f5e jle 0x104e8f6a */
  if ((C.zf||C.sf!=C.of)) goto L_104e8f6a;
  /* 104e8f60 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_104e8f6a:;
  /* 104e8f6a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 104e8f70 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8f73 je 0x104e8f7f */
  if (C.zf) goto L_104e8f7f;
  /* 104e8f75 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 104e8f7a jmp 0x104e9129 */
  goto L_104e9129;
L_104e8f7f:;
  /* 104e8f7f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 104e8f85 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104e8f88 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8f8e je 0x104e8f9a */
  if (C.zf) goto L_104e8f9a;
  /* 104e8f90 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 104e8f95 jmp 0x104e9129 */
  goto L_104e9129;
L_104e8f9a:;
  /* 104e8f9a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 104e8fa0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 104e8fa6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 104e8fac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e8faf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 104e8fb5 jmp 0x104e8e76 */
  goto L_104e8e76;
L_104e8fba:;
  /* 104e8fba cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8fc1 je 0x104e9031 */
  if (C.zf) goto L_104e9031;
  /* 104e8fc3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e8fc7 jge 0x104e8ffb */
  if ((C.sf==C.of)) goto L_104e8ffb;
  /* 104e8fc9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e8fce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e8fd1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e8fd3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 104e8fd9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e8fdb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 104e8fe1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e8fe6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e8fe9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e8feb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 104e8ff1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e8ff3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 104e8ff9 jmp 0x104e9031 */
  goto L_104e9031;
L_104e8ffb:;
  /* 104e8ffb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e8ffe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e9001 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e9006 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e9008 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 104e900e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e9010 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 104e9016 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e9019 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e901c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104e9021 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104e9023 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 104e9029 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e902b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_104e9031:;
  /* 104e9031 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 104e9037 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e903a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9040 jne 0x104e9054 */
  if (!C.zf) goto L_104e9054;
  /* 104e9042 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e9045 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 104e904b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9052 je 0x104e905e */
  if (C.zf) goto L_104e905e;
L_104e9054:;
  /* 104e9054 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 104e9059 jmp 0x104e9129 */
  goto L_104e9129;
L_104e905e:;
  /* 104e905e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 104e9064 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104e9067 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e906d je 0x104e9079 */
  if (C.zf) goto L_104e9079;
  /* 104e906f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 104e9074 jmp 0x104e9129 */
  goto L_104e9129;
L_104e9079:;
  /* 104e9079 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 104e907f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9082 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 104e9088 jmp 0x104e8e4d */
  goto L_104e8e4d;
L_104e908d:;
  /* 104e908d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e9090 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 104e9096 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 104e909c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e90a0 jne 0x104e90ba */
  if (!C.zf) goto L_104e90ba;
  /* 104e90a2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e90a5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 104e90ab mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 104e90b1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e90b8 je 0x104e90c1 */
  if (C.zf) goto L_104e90c1;
L_104e90ba:;
  /* 104e90ba mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 104e90bf jmp 0x104e9129 */
  goto L_104e9129;
L_104e90c1:;
  /* 104e90c1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 104e90c7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e90cd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 104e90d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e90d6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e90db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104e90de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e90e1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 104e90e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104e90e6 jmp 0x104e8bea */
  goto L_104e8bea;
L_104e90eb:;
  /* 104e90eb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 104e90f1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 104e90f7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e90f9 jne 0x104e910c */
  if (!C.zf) goto L_104e910c;
  /* 104e90fb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 104e9101 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 104e9107 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e910a je 0x104e9113 */
  if (C.zf) goto L_104e9113;
L_104e910c:;
  /* 104e910c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 104e9111 jmp 0x104e9129 */
  goto L_104e9129;
L_104e9113:;
  /* 104e9113 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 104e9119 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e911c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 104e9122 jmp 0x104e8b53 */
  goto L_104e8b53;
L_104e9127:;
  /* 104e9127 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104e9129:;
  /* 104e9129 mov esp, ebp */
  ESP = (EBP);
  /* 104e912b pop ebp */
  EBP = (pop32());
  /* 104e912c ret  */
  ESPCHK(0x104e8b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009130 @ 0x104e9130 (250 bytes, 92 insns) */
void f_104e9130(void) {
  FTRACE(0x104e9130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e9130 push ebp */
  push32((uint32_t)(EBP));
  /* 104e9131 mov ebp, esp */
  EBP = (ESP);
  /* 104e9133 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e9136 push ebx */
  push32((uint32_t)(EBX));
  /* 104e9137 push esi */
  push32((uint32_t)(ESI));
  /* 104e9138 push edi */
  push32((uint32_t)(EDI));
  /* 104e9139 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 104e913c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104e913f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 104e9142 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_104e9145:;
  /* 104e9145 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9149 jne 0x104e9169 */
  if (!C.zf) goto L_104e9169;
  /* 104e914b push 0x1050aed8 */
  push32((uint32_t)(0x1050aed8u));
  /* 104e9150 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e9152 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 104e9154 push 0x1050aecc */
  push32((uint32_t)(0x1050aeccu));
  /* 104e9159 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e915b call 0x104e22e0 */
  push32(0x104e9160u); f_104e22e0();
  /* 104e9160 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9163 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9166 jne 0x104e9169 */
  if (!C.zf) goto L_104e9169;
  /* 104e9168 int3  */
  x86_unimpl("int3 @ 0x104e9168");
L_104e9169:;
  /* 104e9169 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e916b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e916d jne 0x104e9145 */
  if (!C.zf) goto L_104e9145;
L_104e916f:;
  /* 104e916f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9173 jne 0x104e9193 */
  if (!C.zf) goto L_104e9193;
  /* 104e9175 push 0x1050aebc */
  push32((uint32_t)(0x1050aebcu));
  /* 104e917a push 0 */
  push32((uint32_t)(0x0u));
  /* 104e917c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 104e917e push 0x1050aecc */
  push32((uint32_t)(0x1050aeccu));
  /* 104e9183 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e9185 call 0x104e22e0 */
  push32(0x104e918au); f_104e22e0();
  /* 104e918a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e918d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9190 jne 0x104e9193 */
  if (!C.zf) goto L_104e9193;
  /* 104e9192 int3  */
  x86_unimpl("int3 @ 0x104e9192");
L_104e9193:;
  /* 104e9193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e9195 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e9197 jne 0x104e916f */
  if (!C.zf) goto L_104e916f;
  /* 104e9199 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e919c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 104e91a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e91a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e91a9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104e91ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e91af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e91b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104e91b4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e91b7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 104e91be mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e91c1 push ecx */
  push32((uint32_t)(ECX));
  /* 104e91c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e91c5 push edx */
  push32((uint32_t)(EDX));
  /* 104e91c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e91c9 push eax */
  push32((uint32_t)(EAX));
  /* 104e91ca call 0x104ea1b0 */
  push32(0x104e91cfu); f_104ea1b0();
  /* 104e91cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e91d2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104e91d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e91d8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e91db sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e91de mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e91e1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104e91e4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e91e7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e91eb jl 0x104e920f */
  if ((C.sf!=C.of)) goto L_104e920f;
  /* 104e91ed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e91f0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e91f2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104e91f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e91f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e91fd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 104e9200 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e9203 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e9205 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9208 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e920b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104e920d jmp 0x104e9220 */
  goto L_104e9220;
L_104e920f:;
  /* 104e920f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e9212 push edx */
  push32((uint32_t)(EDX));
  /* 104e9213 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e9215 call 0x104e9f30 */
  push32(0x104e921au); f_104e9f30();
  /* 104e921a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e921d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_104e9220:;
  /* 104e9220 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e9223 pop edi */
  EDI = (pop32());
  /* 104e9224 pop esi */
  ESI = (pop32());
  /* 104e9225 pop ebx */
  EBX = (pop32());
  /* 104e9226 mov esp, ebp */
  ESP = (EBP);
  /* 104e9228 pop ebp */
  EBP = (pop32());
  /* 104e9229 ret  */
  ESPCHK(0x104e9130u, _esp0);
  ESP += 4; return;
}

/* FUN_10009230 @ 0x104e9230 (183 bytes, 58 insns) */
void f_104e9230(void) {
  FTRACE(0x104e9230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e9230 push ebp */
  push32((uint32_t)(EBP));
  /* 104e9231 mov ebp, esp */
  EBP = (ESP);
  /* 104e9233 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e9236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e9239 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e923c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9241 ja 0x104e925a */
  if ((!C.cf&&!C.zf)) goto L_104e925a;
  /* 104e9243 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e9246 mov edx, dword ptr [0x1050dc98] */
  EDX = (r32((uint32_t)(0x1050dc98)));
  /* 104e924c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e924e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 104e9252 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 104e9255 jmp 0x104e92e3 */
  goto L_104e92e3;
L_104e925a:;
  /* 104e925a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e925d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 104e9260 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e9266 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e926c mov edx, dword ptr [0x1050dc98] */
  EDX = (r32((uint32_t)(0x1050dc98)));
  /* 104e9272 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e9274 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 104e9278 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 104e927d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e927f je 0x104e92a3 */
  if (C.zf) goto L_104e92a3;
  /* 104e9281 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e9284 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 104e9287 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e928d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 104e9290 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 104e9293 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 104e9296 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 104e929a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 104e92a1 jmp 0x104e92b4 */
  goto L_104e92b4;
L_104e92a3:;
  /* 104e92a3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 104e92a6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 104e92a9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 104e92ad mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_104e92b4:;
  /* 104e92b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e92b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e92b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e92ba lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 104e92bd push ecx */
  push32((uint32_t)(ECX));
  /* 104e92be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e92c1 push edx */
  push32((uint32_t)(EDX));
  /* 104e92c2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 104e92c5 push eax */
  push32((uint32_t)(EAX));
  /* 104e92c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e92c8 call 0x104eb450 */
  push32(0x104e92cdu); f_104eb450();
  /* 104e92cd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e92d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e92d2 jne 0x104e92d8 */
  if (!C.zf) goto L_104e92d8;
  /* 104e92d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e92d6 jmp 0x104e92e3 */
  goto L_104e92e3;
L_104e92d8:;
  /* 104e92d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e92db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e92e0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_104e92e3:;
  /* 104e92e3 mov esp, ebp */
  ESP = (EBP);
  /* 104e92e5 pop ebp */
  EBP = (pop32());
  /* 104e92e6 ret  */
  ESPCHK(0x104e9230u, _esp0);
  ESP += 4; return;
}

/* FUN_100092f0 @ 0x104e92f0 (836 bytes, 238 insns) */
void f_104e92f0(void) {
  FTRACE(0x104e92f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e92f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e92f1 mov ebp, esp */
  EBP = (ESP);
  /* 104e92f3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e92f6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104e92f8 call 0x104e6c20 */
  push32(0x104e92fdu); f_104e6c20();
  /* 104e92fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9300 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e9303 push eax */
  push32((uint32_t)(EAX));
  /* 104e9304 call 0x104e9640 */
  push32(0x104e9309u); f_104e9640();
  /* 104e9309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e930c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104e930f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e9312 cmp ecx, dword ptr [0x10510ba4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10510ba4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9318 jne 0x104e932b */
  if (!C.zf) goto L_104e932b;
  /* 104e931a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104e931c call 0x104e6cc0 */
  push32(0x104e9321u); f_104e6cc0();
  /* 104e9321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e9326 jmp 0x104e9630 */
  goto L_104e9630;
L_104e932b:;
  /* 104e932b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e932f jne 0x104e934c */
  if (!C.zf) goto L_104e934c;
  /* 104e9331 call 0x104e9720 */
  push32(0x104e9336u); f_104e9720();
  /* 104e9336 call 0x104e97a0 */
  push32(0x104e933bu); f_104e97a0();
  /* 104e933b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104e933d call 0x104e6cc0 */
  push32(0x104e9342u); f_104e6cc0();
  /* 104e9342 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9345 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e9347 jmp 0x104e9630 */
  goto L_104e9630;
L_104e934c:;
  /* 104e934c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104e9353 jmp 0x104e935e */
  goto L_104e935e;
L_104e9355:;
  /* 104e9355 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e9358 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e935b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104e935e:;
  /* 104e935e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9362 jae 0x104e94af */
  if (!C.cf) goto L_104e94af;
  /* 104e9368 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e936b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e936e mov ecx, dword ptr [eax + 0x1050deb8] */
  ECX = (r32((uint32_t)(EAX + 0x1050deb8)));
  /* 104e9374 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9377 jne 0x104e94aa */
  if (!C.zf) goto L_104e94aa;
  /* 104e937d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104e9384 jmp 0x104e938f */
  goto L_104e938f;
L_104e9386:;
  /* 104e9386 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e9389 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e938c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_104e938f:;
  /* 104e938f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9396 jae 0x104e93a4 */
  if (!C.cf) goto L_104e93a4;
  /* 104e9398 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e939b mov byte ptr [eax + 0x10510d40], 0 */
  w8((uint32_t)(EAX + 0x10510d40), (0x0u));
  /* 104e93a2 jmp 0x104e9386 */
  goto L_104e9386;
L_104e93a4:;
  /* 104e93a4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104e93ab jmp 0x104e93b6 */
  goto L_104e93b6;
L_104e93ad:;
  /* 104e93ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e93b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e93b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104e93b6:;
  /* 104e93b6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e93ba jae 0x104e9437 */
  if (!C.cf) goto L_104e9437;
  /* 104e93bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e93bf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e93c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e93c5 lea ecx, [edx + eax*8 + 0x1050dec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1050dec8));
  /* 104e93cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104e93cf jmp 0x104e93da */
  goto L_104e93da;
L_104e93d1:;
  /* 104e93d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e93d4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e93d7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104e93da:;
  /* 104e93da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e93dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e93df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104e93e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e93e3 je 0x104e9432 */
  if (C.zf) goto L_104e9432;
  /* 104e93e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e93e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e93ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104e93ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e93ef je 0x104e9432 */
  if (C.zf) goto L_104e9432;
  /* 104e93f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e93f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e93f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104e93f8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104e93fb jmp 0x104e9406 */
  goto L_104e9406;
L_104e93fd:;
  /* 104e93fd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e9400 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9403 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104e9406:;
  /* 104e9406 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9409 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e940b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 104e940e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9411 ja 0x104e9430 */
  if ((!C.cf&&!C.zf)) goto L_104e9430;
  /* 104e9413 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e9416 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e9419 mov dl, byte ptr [eax + 0x10510d41] */
  DL = (r8((uint32_t)(EAX + 0x10510d41)));
  /* 104e941f or dl, byte ptr [ecx + 0x1050deb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1050deb0))); DL = (_r); fl_logic(_r,8); }
  /* 104e9425 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e9428 mov byte ptr [eax + 0x10510d41], dl */
  w8((uint32_t)(EAX + 0x10510d41), (DL));
  /* 104e942e jmp 0x104e93fd */
  goto L_104e93fd;
L_104e9430:;
  /* 104e9430 jmp 0x104e93d1 */
  goto L_104e93d1;
L_104e9432:;
  /* 104e9432 jmp 0x104e93ad */
  goto L_104e93ad;
L_104e9437:;
  /* 104e9437 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e943a mov dword ptr [0x10510ba4], ecx */
  w32((uint32_t)(0x10510ba4), (ECX));
  /* 104e9440 mov dword ptr [0x10510c2c], 1 */
  w32((uint32_t)(0x10510c2c), (0x1u));
  /* 104e944a mov edx, dword ptr [0x10510ba4] */
  EDX = (r32((uint32_t)(0x10510ba4)));
  /* 104e9450 push edx */
  push32((uint32_t)(EDX));
  /* 104e9451 call 0x104e96a0 */
  push32(0x104e9456u); f_104e96a0();
  /* 104e9456 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9459 mov dword ptr [0x10510e44], eax */
  w32((uint32_t)(0x10510e44), (EAX));
  /* 104e945e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104e9465 jmp 0x104e9470 */
  goto L_104e9470;
L_104e9467:;
  /* 104e9467 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e946a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e946d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104e9470:;
  /* 104e9470 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9474 jae 0x104e9494 */
  if (!C.cf) goto L_104e9494;
  /* 104e9476 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e9479 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e947c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e947f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e9482 mov cx, word ptr [ecx + eax*2 + 0x1050debc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1050debc)));
  /* 104e948a mov word ptr [edx*2 + 0x10510c20], cx */
  w16((uint32_t)(EDX*2 + 0x10510c20), (CX));
  /* 104e9492 jmp 0x104e9467 */
  goto L_104e9467;
L_104e9494:;
  /* 104e9494 call 0x104e97a0 */
  push32(0x104e9499u); f_104e97a0();
  /* 104e9499 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104e949b call 0x104e6cc0 */
  push32(0x104e94a0u); f_104e6cc0();
  /* 104e94a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e94a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e94a5 jmp 0x104e9630 */
  goto L_104e9630;
L_104e94aa:;
  /* 104e94aa jmp 0x104e9355 */
  goto L_104e9355;
L_104e94af:;
  /* 104e94af lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 104e94b2 push edx */
  push32((uint32_t)(EDX));
  /* 104e94b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e94b6 push eax */
  push32((uint32_t)(EAX));
  /* 104e94b7 call dword ptr [0x10512334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512334))), 0x104e94bdu);
  /* 104e94bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e94c0 jne 0x104e9602 */
  if (!C.zf) goto L_104e9602;
  /* 104e94c6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104e94cd jmp 0x104e94d8 */
  goto L_104e94d8;
L_104e94cf:;
  /* 104e94cf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e94d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e94d5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_104e94d8:;
  /* 104e94d8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e94df jae 0x104e94ed */
  if (!C.cf) goto L_104e94ed;
  /* 104e94e1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e94e4 mov byte ptr [edx + 0x10510d40], 0 */
  w8((uint32_t)(EDX + 0x10510d40), (0x0u));
  /* 104e94eb jmp 0x104e94cf */
  goto L_104e94cf;
L_104e94ed:;
  /* 104e94ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e94f0 mov dword ptr [0x10510ba4], eax */
  w32((uint32_t)(0x10510ba4), (EAX));
  /* 104e94f5 mov dword ptr [0x10510e44], 0 */
  w32((uint32_t)(0x10510e44), (0x0u));
  /* 104e94ff cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9503 jbe 0x104e95be */
  if ((C.cf||C.zf)) goto L_104e95be;
  /* 104e9509 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 104e950c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 104e950f jmp 0x104e951a */
  goto L_104e951a;
L_104e9511:;
  /* 104e9511 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e9514 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9517 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_104e951a:;
  /* 104e951a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e951d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e951f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104e9521 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e9523 je 0x104e956c */
  if (C.zf) goto L_104e956c;
  /* 104e9525 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e9528 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e952a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104e952d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e952f je 0x104e956c */
  if (C.zf) goto L_104e956c;
  /* 104e9531 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e9534 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e9536 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104e9538 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104e953b jmp 0x104e9546 */
  goto L_104e9546;
L_104e953d:;
  /* 104e953d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e9540 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9543 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104e9546:;
  /* 104e9546 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e9549 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e954b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 104e954e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9551 ja 0x104e956a */
  if ((!C.cf&&!C.zf)) goto L_104e956a;
  /* 104e9553 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e9556 mov cl, byte ptr [eax + 0x10510d41] */
  CL = (r8((uint32_t)(EAX + 0x10510d41)));
  /* 104e955c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 104e955f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e9562 mov byte ptr [edx + 0x10510d41], cl */
  w8((uint32_t)(EDX + 0x10510d41), (CL));
  /* 104e9568 jmp 0x104e953d */
  goto L_104e953d;
L_104e956a:;
  /* 104e956a jmp 0x104e9511 */
  goto L_104e9511;
L_104e956c:;
  /* 104e956c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 104e9573 jmp 0x104e957e */
  goto L_104e957e;
L_104e9575:;
  /* 104e9575 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e9578 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e957b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104e957e:;
  /* 104e957e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9585 jae 0x104e959e */
  if (!C.cf) goto L_104e959e;
  /* 104e9587 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e958a mov dl, byte ptr [ecx + 0x10510d41] */
  DL = (r8((uint32_t)(ECX + 0x10510d41)));
  /* 104e9590 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 104e9593 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e9596 mov byte ptr [eax + 0x10510d41], dl */
  w8((uint32_t)(EAX + 0x10510d41), (DL));
  /* 104e959c jmp 0x104e9575 */
  goto L_104e9575;
L_104e959e:;
  /* 104e959e mov ecx, dword ptr [0x10510ba4] */
  ECX = (r32((uint32_t)(0x10510ba4)));
  /* 104e95a4 push ecx */
  push32((uint32_t)(ECX));
  /* 104e95a5 call 0x104e96a0 */
  push32(0x104e95aau); f_104e96a0();
  /* 104e95aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e95ad mov dword ptr [0x10510e44], eax */
  w32((uint32_t)(0x10510e44), (EAX));
  /* 104e95b2 mov dword ptr [0x10510c2c], 1 */
  w32((uint32_t)(0x10510c2c), (0x1u));
  /* 104e95bc jmp 0x104e95c8 */
  goto L_104e95c8;
L_104e95be:;
  /* 104e95be mov dword ptr [0x10510c2c], 0 */
  w32((uint32_t)(0x10510c2c), (0x0u));
L_104e95c8:;
  /* 104e95c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104e95cf jmp 0x104e95da */
  goto L_104e95da;
L_104e95d1:;
  /* 104e95d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e95d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e95d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104e95da:;
  /* 104e95da cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e95de jae 0x104e95ef */
  if (!C.cf) goto L_104e95ef;
  /* 104e95e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e95e3 mov word ptr [eax*2 + 0x10510c20], 0 */
  w16((uint32_t)(EAX*2 + 0x10510c20), (0x0u));
  /* 104e95ed jmp 0x104e95d1 */
  goto L_104e95d1;
L_104e95ef:;
  /* 104e95ef call 0x104e97a0 */
  push32(0x104e95f4u); f_104e97a0();
  /* 104e95f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104e95f6 call 0x104e6cc0 */
  push32(0x104e95fbu); f_104e6cc0();
  /* 104e95fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e95fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e9600 jmp 0x104e9630 */
  goto L_104e9630;
L_104e9602:;
  /* 104e9602 cmp dword ptr [0x1050f6b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9609 je 0x104e9623 */
  if (C.zf) goto L_104e9623;
  /* 104e960b call 0x104e9720 */
  push32(0x104e9610u); f_104e9720();
  /* 104e9610 call 0x104e97a0 */
  push32(0x104e9615u); f_104e97a0();
  /* 104e9615 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104e9617 call 0x104e6cc0 */
  push32(0x104e961cu); f_104e6cc0();
  /* 104e961c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e961f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e9621 jmp 0x104e9630 */
  goto L_104e9630;
L_104e9623:;
  /* 104e9623 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104e9625 call 0x104e6cc0 */
  push32(0x104e962au); f_104e6cc0();
  /* 104e962a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e962d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104e9630:;
  /* 104e9630 mov esp, ebp */
  ESP = (EBP);
  /* 104e9632 pop ebp */
  EBP = (pop32());
  /* 104e9633 ret  */
  ESPCHK(0x104e92f0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x104e9640 (89 bytes, 21 insns) */
void f_104e9640(void) {
  FTRACE(0x104e9640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e9640 push ebp */
  push32((uint32_t)(EBP));
  /* 104e9641 mov ebp, esp */
  EBP = (ESP);
  /* 104e9643 mov dword ptr [0x1050f6b0], 0 */
  w32((uint32_t)(0x1050f6b0), (0x0u));
  /* 104e964d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9651 jne 0x104e9665 */
  if (!C.zf) goto L_104e9665;
  /* 104e9653 mov dword ptr [0x1050f6b0], 1 */
  w32((uint32_t)(0x1050f6b0), (0x1u));
  /* 104e965d call dword ptr [0x10512320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512320))), 0x104e9663u);
  /* 104e9663 jmp 0x104e9697 */
  goto L_104e9697;
L_104e9665:;
  /* 104e9665 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9669 jne 0x104e967d */
  if (!C.zf) goto L_104e967d;
  /* 104e966b mov dword ptr [0x1050f6b0], 1 */
  w32((uint32_t)(0x1050f6b0), (0x1u));
  /* 104e9675 call dword ptr [0x10512338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512338))), 0x104e967bu);
  /* 104e967b jmp 0x104e9697 */
  goto L_104e9697;
L_104e967d:;
  /* 104e967d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9681 jne 0x104e9694 */
  if (!C.zf) goto L_104e9694;
  /* 104e9683 mov dword ptr [0x1050f6b0], 1 */
  w32((uint32_t)(0x1050f6b0), (0x1u));
  /* 104e968d mov eax, dword ptr [0x1050f6d0] */
  EAX = (r32((uint32_t)(0x1050f6d0)));
  /* 104e9692 jmp 0x104e9697 */
  goto L_104e9697;
L_104e9694:;
  /* 104e9694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_104e9697:;
  /* 104e9697 pop ebp */
  EBP = (pop32());
  /* 104e9698 ret  */
  ESPCHK(0x104e9640u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a0 @ 0x104e96a0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_104e96a0(void) {
  FTRACE(0x104e96a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e96a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e96a1 mov ebp, esp */
  EBP = (ESP);
  /* 104e96a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e96a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e96a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e96aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e96ad sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e96b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104e96b6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e96ba ja 0x104e96ea */
  if ((!C.cf&&!C.zf)) goto L_104e96ea;
  /* 104e96bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e96bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e96c1 mov dl, byte ptr [eax + 0x104e9704] */
  DL = (r8((uint32_t)(EAX + 0x104e9704)));
  /* 104e96c7 jmp dword ptr [edx*4 + 0x104e96f0] */
  switch (EDX) {
    case 0: goto L_104e96ce;
    case 1: goto L_104e96d5;
    case 2: goto L_104e96dc;
    case 3: goto L_104e96e3;
    case 4: goto L_104e96ea;
    default: x86_unimpl("switch@0x104e96c7 out of table"); return;
  }
L_104e96ce:;
  /* 104e96ce mov eax, 0x411 */
  EAX = (0x411u);
  /* 104e96d3 jmp 0x104e96ec */
  goto L_104e96ec;
L_104e96d5:;
  /* 104e96d5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 104e96da jmp 0x104e96ec */
  goto L_104e96ec;
L_104e96dc:;
  /* 104e96dc mov eax, 0x412 */
  EAX = (0x412u);
  /* 104e96e1 jmp 0x104e96ec */
  goto L_104e96ec;
L_104e96e3:;
  /* 104e96e3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 104e96e8 jmp 0x104e96ec */
  goto L_104e96ec;
L_104e96ea:;
  /* 104e96ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104e96ec:;
  /* 104e96ec mov esp, ebp */
  ESP = (EBP);
  /* 104e96ee pop ebp */
  EBP = (pop32());
  /* 104e96ef ret  */
  ESPCHK(0x104e96a0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x104e9720 (116 bytes, 29 insns) */
void f_104e9720(void) {
  FTRACE(0x104e9720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e9720 push ebp */
  push32((uint32_t)(EBP));
  /* 104e9721 mov ebp, esp */
  EBP = (ESP);
  /* 104e9723 push ecx */
  push32((uint32_t)(ECX));
  /* 104e9724 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104e972b jmp 0x104e9736 */
  goto L_104e9736;
L_104e972d:;
  /* 104e972d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e9730 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9733 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e9736:;
  /* 104e9736 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e973d jge 0x104e974b */
  if ((C.sf==C.of)) goto L_104e974b;
  /* 104e973f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e9742 mov byte ptr [ecx + 0x10510d40], 0 */
  w8((uint32_t)(ECX + 0x10510d40), (0x0u));
  /* 104e9749 jmp 0x104e972d */
  goto L_104e972d;
L_104e974b:;
  /* 104e974b mov dword ptr [0x10510ba4], 0 */
  w32((uint32_t)(0x10510ba4), (0x0u));
  /* 104e9755 mov dword ptr [0x10510c2c], 0 */
  w32((uint32_t)(0x10510c2c), (0x0u));
  /* 104e975f mov dword ptr [0x10510e44], 0 */
  w32((uint32_t)(0x10510e44), (0x0u));
  /* 104e9769 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104e9770 jmp 0x104e977b */
  goto L_104e977b;
L_104e9772:;
  /* 104e9772 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e9775 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9778 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104e977b:;
  /* 104e977b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e977f jge 0x104e9790 */
  if ((C.sf==C.of)) goto L_104e9790;
  /* 104e9781 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e9784 mov word ptr [eax*2 + 0x10510c20], 0 */
  w16((uint32_t)(EAX*2 + 0x10510c20), (0x0u));
  /* 104e978e jmp 0x104e9772 */
  goto L_104e9772;
L_104e9790:;
  /* 104e9790 mov esp, ebp */
  ESP = (EBP);
  /* 104e9792 pop ebp */
  EBP = (pop32());
  /* 104e9793 ret  */
  ESPCHK(0x104e9720u, _esp0);
  ESP += 4; return;
}

/* FUN_100097a0 @ 0x104e97a0 (770 bytes, 175 insns) */
void f_104e97a0(void) {
  FTRACE(0x104e97a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e97a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e97a1 mov ebp, esp */
  EBP = (ESP);
  /* 104e97a3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e97a9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 104e97af push eax */
  push32((uint32_t)(EAX));
  /* 104e97b0 mov ecx, dword ptr [0x10510ba4] */
  ECX = (r32((uint32_t)(0x10510ba4)));
  /* 104e97b6 push ecx */
  push32((uint32_t)(ECX));
  /* 104e97b7 call dword ptr [0x10512334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512334))), 0x104e97bdu);
  /* 104e97bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e97c0 jne 0x104e99d9 */
  if (!C.zf) goto L_104e99d9;
  /* 104e97c6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 104e97d0 jmp 0x104e97e1 */
  goto L_104e97e1;
L_104e97d2:;
  /* 104e97d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e97d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e97db mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_104e97e1:;
  /* 104e97e1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e97eb jae 0x104e9802 */
  if (!C.cf) goto L_104e9802;
  /* 104e97ed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e97f3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 104e97f9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 104e9800 jmp 0x104e97d2 */
  goto L_104e97d2;
L_104e9802:;
  /* 104e9802 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 104e9809 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 104e980f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e9812 jmp 0x104e981d */
  goto L_104e981d;
L_104e9814:;
  /* 104e9814 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e9817 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e981a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e981d:;
  /* 104e981d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e9820 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e9822 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104e9824 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e9826 je 0x104e9868 */
  if (C.zf) goto L_104e9868;
  /* 104e9828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e982b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e982d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104e982f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 104e9835 jmp 0x104e9846 */
  goto L_104e9846;
L_104e9837:;
  /* 104e9837 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e983d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9840 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_104e9846:;
  /* 104e9846 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e9849 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e984b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 104e984e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9854 ja 0x104e9866 */
  if ((!C.cf&&!C.zf)) goto L_104e9866;
  /* 104e9856 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e985c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 104e9864 jmp 0x104e9837 */
  goto L_104e9837;
L_104e9866:;
  /* 104e9866 jmp 0x104e9814 */
  goto L_104e9814;
L_104e9868:;
  /* 104e9868 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e986a mov eax, dword ptr [0x10510e44] */
  EAX = (r32((uint32_t)(0x10510e44)));
  /* 104e986f push eax */
  push32((uint32_t)(EAX));
  /* 104e9870 mov ecx, dword ptr [0x10510ba4] */
  ECX = (r32((uint32_t)(0x10510ba4)));
  /* 104e9876 push ecx */
  push32((uint32_t)(ECX));
  /* 104e9877 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 104e987d push edx */
  push32((uint32_t)(EDX));
  /* 104e987e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104e9883 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 104e9889 push eax */
  push32((uint32_t)(EAX));
  /* 104e988a push 1 */
  push32((uint32_t)(0x1u));
  /* 104e988c call 0x104eb450 */
  push32(0x104e9891u); f_104eb450();
  /* 104e9891 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9894 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e9896 mov ecx, dword ptr [0x10510ba4] */
  ECX = (r32((uint32_t)(0x10510ba4)));
  /* 104e989c push ecx */
  push32((uint32_t)(ECX));
  /* 104e989d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104e98a2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 104e98a8 push edx */
  push32((uint32_t)(EDX));
  /* 104e98a9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104e98ae lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 104e98b4 push eax */
  push32((uint32_t)(EAX));
  /* 104e98b5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104e98ba mov ecx, dword ptr [0x10510e44] */
  ECX = (r32((uint32_t)(0x10510e44)));
  /* 104e98c0 push ecx */
  push32((uint32_t)(ECX));
  /* 104e98c1 call 0x104eb610 */
  push32(0x104e98c6u); f_104eb610();
  /* 104e98c6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e98c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e98cb mov edx, dword ptr [0x10510ba4] */
  EDX = (r32((uint32_t)(0x10510ba4)));
  /* 104e98d1 push edx */
  push32((uint32_t)(EDX));
  /* 104e98d2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104e98d7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 104e98dd push eax */
  push32((uint32_t)(EAX));
  /* 104e98de push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104e98e3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 104e98e9 push ecx */
  push32((uint32_t)(ECX));
  /* 104e98ea push 0x200 */
  push32((uint32_t)(0x200u));
  /* 104e98ef mov edx, dword ptr [0x10510e44] */
  EDX = (r32((uint32_t)(0x10510e44)));
  /* 104e98f5 push edx */
  push32((uint32_t)(EDX));
  /* 104e98f6 call 0x104eb610 */
  push32(0x104e98fbu); f_104eb610();
  /* 104e98fb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e98fe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 104e9908 jmp 0x104e9919 */
  goto L_104e9919;
L_104e990a:;
  /* 104e990a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9910 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9913 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_104e9919:;
  /* 104e9919 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9923 jae 0x104e99d4 */
  if (!C.cf) goto L_104e99d4;
  /* 104e9929 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e992f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e9931 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 104e9939 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104e993c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e993e je 0x104e9976 */
  if (C.zf) goto L_104e9976;
  /* 104e9940 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9946 mov cl, byte ptr [eax + 0x10510d41] */
  CL = (r8((uint32_t)(EAX + 0x10510d41)));
  /* 104e994c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 104e994f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9955 mov byte ptr [edx + 0x10510d41], cl */
  w8((uint32_t)(EDX + 0x10510d41), (CL));
  /* 104e995b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9961 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9967 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 104e996e mov byte ptr [eax + 0x10510c40], dl */
  w8((uint32_t)(EAX + 0x10510c40), (DL));
  /* 104e9974 jmp 0x104e99cf */
  goto L_104e99cf;
L_104e9976:;
  /* 104e9976 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e997c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e997e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 104e9986 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 104e9989 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e998b je 0x104e99c2 */
  if (C.zf) goto L_104e99c2;
  /* 104e998d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9993 mov al, byte ptr [edx + 0x10510d41] */
  AL = (r8((uint32_t)(EDX + 0x10510d41)));
  /* 104e9999 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 104e999b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e99a1 mov byte ptr [ecx + 0x10510d41], al */
  w8((uint32_t)(ECX + 0x10510d41), (AL));
  /* 104e99a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e99ad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e99b3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 104e99ba mov byte ptr [edx + 0x10510c40], cl */
  w8((uint32_t)(EDX + 0x10510c40), (CL));
  /* 104e99c0 jmp 0x104e99cf */
  goto L_104e99cf;
L_104e99c2:;
  /* 104e99c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e99c8 mov byte ptr [edx + 0x10510c40], 0 */
  w8((uint32_t)(EDX + 0x10510c40), (0x0u));
L_104e99cf:;
  /* 104e99cf jmp 0x104e990a */
  goto L_104e990a;
L_104e99d4:;
  /* 104e99d4 jmp 0x104e9a9e */
  goto L_104e9a9e;
L_104e99d9:;
  /* 104e99d9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 104e99e3 jmp 0x104e99f4 */
  goto L_104e99f4;
L_104e99e5:;
  /* 104e99e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e99eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e99ee mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_104e99f4:;
  /* 104e99f4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e99fe jae 0x104e9a9e */
  if (!C.cf) goto L_104e9a9e;
  /* 104e9a04 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9a0b jb 0x104e9a48 */
  if (C.cf) goto L_104e9a48;
  /* 104e9a0d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9a14 ja 0x104e9a48 */
  if ((!C.cf&&!C.zf)) goto L_104e9a48;
  /* 104e9a16 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9a1c mov dl, byte ptr [ecx + 0x10510d41] */
  DL = (r8((uint32_t)(ECX + 0x10510d41)));
  /* 104e9a22 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 104e9a25 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9a2b mov byte ptr [eax + 0x10510d41], dl */
  w8((uint32_t)(EAX + 0x10510d41), (DL));
  /* 104e9a31 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9a37 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9a3a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9a40 mov byte ptr [edx + 0x10510c40], cl */
  w8((uint32_t)(EDX + 0x10510c40), (CL));
  /* 104e9a46 jmp 0x104e9a99 */
  goto L_104e9a99;
L_104e9a48:;
  /* 104e9a48 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9a4f jb 0x104e9a8c */
  if (C.cf) goto L_104e9a8c;
  /* 104e9a51 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9a58 ja 0x104e9a8c */
  if ((!C.cf&&!C.zf)) goto L_104e9a8c;
  /* 104e9a5a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9a60 mov cl, byte ptr [eax + 0x10510d41] */
  CL = (r8((uint32_t)(EAX + 0x10510d41)));
  /* 104e9a66 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 104e9a69 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9a6f mov byte ptr [edx + 0x10510d41], cl */
  w8((uint32_t)(EDX + 0x10510d41), (CL));
  /* 104e9a75 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9a7b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e9a7e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9a84 mov byte ptr [ecx + 0x10510c40], al */
  w8((uint32_t)(ECX + 0x10510c40), (AL));
  /* 104e9a8a jmp 0x104e9a99 */
  goto L_104e9a99;
L_104e9a8c:;
  /* 104e9a8c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104e9a92 mov byte ptr [edx + 0x10510c40], 0 */
  w8((uint32_t)(EDX + 0x10510c40), (0x0u));
L_104e9a99:;
  /* 104e9a99 jmp 0x104e99e5 */
  goto L_104e99e5;
L_104e9a9e:;
  /* 104e9a9e mov esp, ebp */
  ESP = (EBP);
  /* 104e9aa0 pop ebp */
  EBP = (pop32());
  /* 104e9aa1 ret  */
  ESPCHK(0x104e97a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ab0 @ 0x104e9ab0 (23 bytes, 9 insns) */
void f_104e9ab0(void) {
  FTRACE(0x104e9ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e9ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e9ab1 mov ebp, esp */
  EBP = (ESP);
  /* 104e9ab3 cmp dword ptr [0x10510c2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10510c2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9aba je 0x104e9ac3 */
  if (C.zf) goto L_104e9ac3;
  /* 104e9abc mov eax, dword ptr [0x10510ba4] */
  EAX = (r32((uint32_t)(0x10510ba4)));
  /* 104e9ac1 jmp 0x104e9ac5 */
  goto L_104e9ac5;
L_104e9ac3:;
  /* 104e9ac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104e9ac5:;
  /* 104e9ac5 pop ebp */
  EBP = (pop32());
  /* 104e9ac6 ret  */
  ESPCHK(0x104e9ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ad0 @ 0x104e9ad0 (34 bytes, 10 insns) */
void f_104e9ad0(void) {
  FTRACE(0x104e9ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e9ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e9ad1 mov ebp, esp */
  EBP = (ESP);
  /* 104e9ad3 cmp dword ptr [0x10510ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10510ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9ada jne 0x104e9af0 */
  if (!C.zf) goto L_104e9af0;
  /* 104e9adc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 104e9ade call 0x104e92f0 */
  push32(0x104e9ae3u); f_104e92f0();
  /* 104e9ae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9ae6 mov dword ptr [0x10510ff0], 1 */
  w32((uint32_t)(0x10510ff0), (0x1u));
L_104e9af0:;
  /* 104e9af0 pop ebp */
  EBP = (pop32());
  /* 104e9af1 ret  */
  ESPCHK(0x104e9ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b00 @ 0x104e9b00 (664 bytes, 260 insns) [15 switch table(s)] */
void f_104e9b00(void) {
  FTRACE(0x104e9b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e9b00 push ebp */
  push32((uint32_t)(EBP));
  /* 104e9b01 mov ebp, esp */
  EBP = (ESP);
  /* 104e9b03 push edi */
  push32((uint32_t)(EDI));
  /* 104e9b04 push esi */
  push32((uint32_t)(ESI));
  /* 104e9b05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104e9b08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e9b0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 104e9b0e mov eax, ecx */
  EAX = (ECX);
  /* 104e9b10 mov edx, ecx */
  EDX = (ECX);
  /* 104e9b12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9b14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9b16 jbe 0x104e9b20 */
  if ((C.cf||C.zf)) goto L_104e9b20;
  /* 104e9b18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9b1a jb 0x104e9c98 */
  if (C.cf) goto L_104e9c98;
L_104e9b20:;
  /* 104e9b20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 104e9b26 jne 0x104e9b3c */
  if (!C.zf) goto L_104e9b3c;
  /* 104e9b28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104e9b2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 104e9b2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9b31 jb 0x104e9b5c */
  if (C.cf) goto L_104e9b5c;
  /* 104e9b33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104e9b35 jmp dword ptr [edx*4 + 0x104e9c48] */
  switch (EDX) {
    case 0: goto L_104e9c58;
    case 1: goto L_104e9c60;
    case 2: goto L_104e9c6c;
    case 3: goto L_104e9c80;
    default: x86_unimpl("switch@0x104e9b35 out of table"); return;
  }
L_104e9b3c:;
  /* 104e9b3c mov eax, edi */
  EAX = (EDI);
  /* 104e9b3e mov edx, 3 */
  EDX = (0x3u);
  /* 104e9b43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e9b46 jb 0x104e9b54 */
  if (C.cf) goto L_104e9b54;
  /* 104e9b48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 104e9b4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9b4d jmp dword ptr [eax*4 + 0x104e9b60] */
  switch (EAX) {
    case 1: goto L_104e9b70;
    case 2: goto L_104e9b9c;
    case 3: goto L_104e9bc0;
    default: x86_unimpl("switch@0x104e9b4d out of table"); return;
  }
L_104e9b54:;
  /* 104e9b54 jmp dword ptr [ecx*4 + 0x104e9c58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x104e9c58)))); return;
  /* 104e9b5b nop  */
  /* nop */
L_104e9b5c:;
  /* 104e9b5c jmp dword ptr [ecx*4 + 0x104e9bdc] */
  switch (ECX) {
    case 0: goto L_104e9c3f;
    case 1: goto L_104e9c2c;
    case 2: goto L_104e9c24;
    case 3: goto L_104e9c1c;
    case 4: goto L_104e9c14;
    case 5: goto L_104e9c0c;
    case 6: goto L_104e9c04;
    case 7: goto L_104e9bfc;
    default: x86_unimpl("switch@0x104e9b5c out of table"); return;
  }
  /* 104e9b63 nop  */
  /* nop */
L_104e9b70:;
  /* 104e9b70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104e9b72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104e9b74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104e9b76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104e9b79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104e9b7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104e9b7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104e9b82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104e9b85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9b88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9b8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9b8e jb 0x104e9b5c */
  if (C.cf) goto L_104e9b5c;
  /* 104e9b90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104e9b92 jmp dword ptr [edx*4 + 0x104e9c48] */
  switch (EDX) {
    case 0: goto L_104e9c58;
    case 1: goto L_104e9c60;
    case 2: goto L_104e9c6c;
    case 3: goto L_104e9c80;
    default: x86_unimpl("switch@0x104e9b92 out of table"); return;
  }
  /* 104e9b99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104e9b9c:;
  /* 104e9b9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104e9b9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104e9ba0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104e9ba2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104e9ba5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104e9ba8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104e9bab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9bae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9bb1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9bb4 jb 0x104e9b5c */
  if (C.cf) goto L_104e9b5c;
  /* 104e9bb6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104e9bb8 jmp dword ptr [edx*4 + 0x104e9c48] */
  switch (EDX) {
    case 0: goto L_104e9c58;
    case 1: goto L_104e9c60;
    case 2: goto L_104e9c6c;
    case 3: goto L_104e9c80;
    default: x86_unimpl("switch@0x104e9bb8 out of table"); return;
  }
  /* 104e9bbf nop  */
  /* nop */
L_104e9bc0:;
  /* 104e9bc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104e9bc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104e9bc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104e9bc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104e9bc7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104e9bca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104e9bcb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9bce jb 0x104e9b5c */
  if (C.cf) goto L_104e9b5c;
  /* 104e9bd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104e9bd2 jmp dword ptr [edx*4 + 0x104e9c48] */
  switch (EDX) {
    case 0: goto L_104e9c58;
    case 1: goto L_104e9c60;
    case 2: goto L_104e9c6c;
    case 3: goto L_104e9c80;
    default: x86_unimpl("switch@0x104e9bd2 out of table"); return;
  }
  /* 104e9bd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104e9bfc:;
  /* 104e9bfc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 104e9c00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_104e9c04:;
  /* 104e9c04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 104e9c08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_104e9c0c:;
  /* 104e9c0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 104e9c10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_104e9c14:;
  /* 104e9c14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 104e9c18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_104e9c1c:;
  /* 104e9c1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 104e9c20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_104e9c24:;
  /* 104e9c24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 104e9c28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_104e9c2c:;
  /* 104e9c2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 104e9c30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 104e9c34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 104e9c3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9c3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_104e9c3f:;
  /* 104e9c3f jmp dword ptr [edx*4 + 0x104e9c48] */
  switch (EDX) {
    case 0: goto L_104e9c58;
    case 1: goto L_104e9c60;
    case 2: goto L_104e9c6c;
    case 3: goto L_104e9c80;
    default: x86_unimpl("switch@0x104e9c3f out of table"); return;
  }
  /* 104e9c46 mov edi, edi */
  EDI = (EDI);
L_104e9c58:;
  /* 104e9c58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e9c5b pop esi */
  ESI = (pop32());
  /* 104e9c5c pop edi */
  EDI = (pop32());
  /* 104e9c5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104e9c5e ret  */
  ESPCHK(0x104e9b00u, _esp0);
  ESP += 4; return;
  /* 104e9c5f nop  */
  /* nop */
L_104e9c60:;
  /* 104e9c60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104e9c62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104e9c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e9c67 pop esi */
  ESI = (pop32());
  /* 104e9c68 pop edi */
  EDI = (pop32());
  /* 104e9c69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104e9c6a ret  */
  ESPCHK(0x104e9b00u, _esp0);
  ESP += 4; return;
  /* 104e9c6b nop  */
  /* nop */
L_104e9c6c:;
  /* 104e9c6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104e9c6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104e9c70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104e9c73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104e9c76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e9c79 pop esi */
  ESI = (pop32());
  /* 104e9c7a pop edi */
  EDI = (pop32());
  /* 104e9c7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104e9c7c ret  */
  ESPCHK(0x104e9b00u, _esp0);
  ESP += 4; return;
  /* 104e9c7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104e9c80:;
  /* 104e9c80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104e9c82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104e9c84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104e9c87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104e9c8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104e9c8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104e9c90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e9c93 pop esi */
  ESI = (pop32());
  /* 104e9c94 pop edi */
  EDI = (pop32());
  /* 104e9c95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104e9c96 ret  */
  ESPCHK(0x104e9b00u, _esp0);
  ESP += 4; return;
  /* 104e9c97 nop  */
  /* nop */
L_104e9c98:;
  /* 104e9c98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 104e9c9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 104e9ca0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 104e9ca6 jne 0x104e9ccc */
  if (!C.zf) goto L_104e9ccc;
  /* 104e9ca8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104e9cab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 104e9cae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9cb1 jb 0x104e9cc0 */
  if (C.cf) goto L_104e9cc0;
  /* 104e9cb3 std  */
  C.df=1;
  /* 104e9cb4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104e9cb6 cld  */
  C.df=0;
  /* 104e9cb7 jmp dword ptr [edx*4 + 0x104e9de0] */
  switch (EDX) {
    case 0: goto L_104e9df0;
    case 1: goto L_104e9df8;
    case 2: goto L_104e9e08;
    case 3: goto L_104e9e1c;
    default: x86_unimpl("switch@0x104e9cb7 out of table"); return;
  }
  /* 104e9cbe mov edi, edi */
  EDI = (EDI);
L_104e9cc0:;
  /* 104e9cc0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104e9cc2 jmp dword ptr [ecx*4 + 0x104e9d90] */
  switch (ECX) {
    case 0: goto L_104e9dd7;
    default: x86_unimpl("switch@0x104e9cc2 out of table"); return;
  }
  /* 104e9cc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104e9ccc:;
  /* 104e9ccc mov eax, edi */
  EAX = (EDI);
  /* 104e9cce mov edx, 3 */
  EDX = (0x3u);
  /* 104e9cd3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9cd6 jb 0x104e9ce4 */
  if (C.cf) goto L_104e9ce4;
  /* 104e9cd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 104e9cdb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e9cdd jmp dword ptr [eax*4 + 0x104e9ce8] */
  switch (EAX) {
    case 1: goto L_104e9cf8;
    case 2: goto L_104e9d18;
    case 3: goto L_104e9d40;
    default: x86_unimpl("switch@0x104e9cdd out of table"); return;
  }
L_104e9ce4:;
  /* 104e9ce4 jmp dword ptr [ecx*4 + 0x104e9de0] */
  switch (ECX) {
    case 0: goto L_104e9df0;
    case 1: goto L_104e9df8;
    case 2: goto L_104e9e08;
    case 3: goto L_104e9e1c;
    default: x86_unimpl("switch@0x104e9ce4 out of table"); return;
  }
  /* 104e9ceb nop  */
  /* nop */
L_104e9cf8:;
  /* 104e9cf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104e9cfb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104e9cfd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104e9d00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 104e9d01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104e9d04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 104e9d05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9d08 jb 0x104e9cc0 */
  if (C.cf) goto L_104e9cc0;
  /* 104e9d0a std  */
  C.df=1;
  /* 104e9d0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104e9d0d cld  */
  C.df=0;
  /* 104e9d0e jmp dword ptr [edx*4 + 0x104e9de0] */
  switch (EDX) {
    case 0: goto L_104e9df0;
    case 1: goto L_104e9df8;
    case 2: goto L_104e9e08;
    case 3: goto L_104e9e1c;
    default: x86_unimpl("switch@0x104e9d0e out of table"); return;
  }
  /* 104e9d15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104e9d18:;
  /* 104e9d18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104e9d1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104e9d1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104e9d20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104e9d23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104e9d26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104e9d29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e9d2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e9d2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9d32 jb 0x104e9cc0 */
  if (C.cf) goto L_104e9cc0;
  /* 104e9d34 std  */
  C.df=1;
  /* 104e9d35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104e9d37 cld  */
  C.df=0;
  /* 104e9d38 jmp dword ptr [edx*4 + 0x104e9de0] */
  switch (EDX) {
    case 0: goto L_104e9df0;
    case 1: goto L_104e9df8;
    case 2: goto L_104e9e08;
    case 3: goto L_104e9e1c;
    default: x86_unimpl("switch@0x104e9d38 out of table"); return;
  }
  /* 104e9d3f nop  */
  /* nop */
L_104e9d40:;
  /* 104e9d40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104e9d43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104e9d45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104e9d48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104e9d4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104e9d4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104e9d51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104e9d54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104e9d57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e9d5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e9d5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9d60 jb 0x104e9cc0 */
  if (C.cf) goto L_104e9cc0;
  /* 104e9d66 std  */
  C.df=1;
  /* 104e9d67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104e9d69 cld  */
  C.df=0;
  /* 104e9d6a jmp dword ptr [edx*4 + 0x104e9de0] */
  switch (EDX) {
    case 0: goto L_104e9df0;
    case 1: goto L_104e9df8;
    case 2: goto L_104e9e08;
    case 3: goto L_104e9e1c;
    default: x86_unimpl("switch@0x104e9d6a out of table"); return;
  }
  /* 104e9d71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 104e9d74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 104e9d75 popfd  */
  x86_unimpl("popfd @ 0x104e9d75");
  /* 104e9d76 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 104e9d77 adc byte ptr [ebp + ebx*4 - 0x625befb2], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + EBX*4 + -0x625befb2))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EBX*4 + -0x625befb2), (_r)); fl_add(_a,_b,_r,8); }
  /* 104e9d7e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 104e9d7f adc byte ptr [ebp + ebx*4 - 0x624befb2], ch */
  { uint32_t _a=(r8((uint32_t)(EBP + EBX*4 + -0x624befb2))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EBX*4 + -0x624befb2), (_r)); fl_add(_a,_b,_r,8); }
  /* 104e9d86 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 104e9d87 adc byte ptr [ebp + ebx*4 - 0x623befb2], bh */
  { uint32_t _a=(r8((uint32_t)(EBP + EBX*4 + -0x623befb2))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EBX*4 + -0x623befb2), (_r)); fl_add(_a,_b,_r,8); }
  /* 104e9d8e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 104e9d94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 104e9d98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 104e9d9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 104e9da0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 104e9da4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 104e9da8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 104e9dac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 104e9db0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 104e9db4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 104e9db8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 104e9dbc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 104e9dc0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 104e9dc4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 104e9dc8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 104e9dcc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 104e9dd3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9dd5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_104e9dd7:;
  /* 104e9dd7 jmp dword ptr [edx*4 + 0x104e9de0] */
  switch (EDX) {
    case 0: goto L_104e9df0;
    case 1: goto L_104e9df8;
    case 2: goto L_104e9e08;
    case 3: goto L_104e9e1c;
    default: x86_unimpl("switch@0x104e9dd7 out of table"); return;
  }
  /* 104e9dde mov edi, edi */
  EDI = (EDI);
L_104e9df0:;
  /* 104e9df0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e9df3 pop esi */
  ESI = (pop32());
  /* 104e9df4 pop edi */
  EDI = (pop32());
  /* 104e9df5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104e9df6 ret  */
  ESPCHK(0x104e9b00u, _esp0);
  ESP += 4; return;
  /* 104e9df7 nop  */
  /* nop */
L_104e9df8:;
  /* 104e9df8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104e9dfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104e9dfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e9e01 pop esi */
  ESI = (pop32());
  /* 104e9e02 pop edi */
  EDI = (pop32());
  /* 104e9e03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104e9e04 ret  */
  ESPCHK(0x104e9b00u, _esp0);
  ESP += 4; return;
  /* 104e9e05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104e9e08:;
  /* 104e9e08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104e9e0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104e9e0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104e9e11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104e9e14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e9e17 pop esi */
  ESI = (pop32());
  /* 104e9e18 pop edi */
  EDI = (pop32());
  /* 104e9e19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104e9e1a ret  */
  ESPCHK(0x104e9b00u, _esp0);
  ESP += 4; return;
  /* 104e9e1b nop  */
  /* nop */
L_104e9e1c:;
  /* 104e9e1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104e9e1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104e9e22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104e9e25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104e9e28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104e9e2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104e9e2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e9e31 pop esi */
  ESI = (pop32());
  /* 104e9e32 pop edi */
  EDI = (pop32());
  /* 104e9e33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104e9e34 ret  */
  ESPCHK(0x104e9b00u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x104e9e40 (104 bytes, 43 insns) */
void f_104e9e40(void) {
  FTRACE(0x104e9e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e9e40 push ebx */
  push32((uint32_t)(EBX));
  /* 104e9e41 push esi */
  push32((uint32_t)(ESI));
  /* 104e9e42 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 104e9e46 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e9e48 jne 0x104e9e62 */
  if (!C.zf) goto L_104e9e62;
  /* 104e9e4a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 104e9e4e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 104e9e52 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e9e54 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104e9e56 mov ebx, eax */
  EBX = (EAX);
  /* 104e9e58 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 104e9e5c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104e9e5e mov edx, ebx */
  EDX = (EBX);
  /* 104e9e60 jmp 0x104e9ea3 */
  goto L_104e9ea3;
L_104e9e62:;
  /* 104e9e62 mov ecx, eax */
  ECX = (EAX);
  /* 104e9e64 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 104e9e68 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 104e9e6c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_104e9e70:;
  /* 104e9e70 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 104e9e72 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 104e9e74 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 104e9e76 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 104e9e78 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e9e7a jne 0x104e9e70 */
  if (!C.zf) goto L_104e9e70;
  /* 104e9e7c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104e9e7e mov esi, eax */
  ESI = (EAX);
  /* 104e9e80 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104e9e84 mov ecx, eax */
  ECX = (EAX);
  /* 104e9e86 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 104e9e8a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104e9e8c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9e8e jb 0x104e9e9e */
  if (C.cf) goto L_104e9e9e;
  /* 104e9e90 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9e94 ja 0x104e9e9e */
  if ((!C.cf&&!C.zf)) goto L_104e9e9e;
  /* 104e9e96 jb 0x104e9e9f */
  if (C.cf) goto L_104e9e9f;
  /* 104e9e98 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9e9c jbe 0x104e9e9f */
  if ((C.cf||C.zf)) goto L_104e9e9f;
L_104e9e9e:;
  /* 104e9e9e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_104e9e9f:;
  /* 104e9e9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e9ea1 mov eax, esi */
  EAX = (ESI);
L_104e9ea3:;
  /* 104e9ea3 pop esi */
  ESI = (pop32());
  /* 104e9ea4 pop ebx */
  EBX = (pop32());
  /* 104e9ea5 ret 0x10 */
  ESPCHK(0x104e9e40u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x104e9eb0 (117 bytes, 44 insns) */
void f_104e9eb0(void) {
  FTRACE(0x104e9eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e9eb0 push ebx */
  push32((uint32_t)(EBX));
  /* 104e9eb1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 104e9eb5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e9eb7 jne 0x104e9ed1 */
  if (!C.zf) goto L_104e9ed1;
  /* 104e9eb9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 104e9ebd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 104e9ec1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e9ec3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104e9ec5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104e9ec9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104e9ecb mov eax, edx */
  EAX = (EDX);
  /* 104e9ecd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e9ecf jmp 0x104e9f21 */
  goto L_104e9f21;
L_104e9ed1:;
  /* 104e9ed1 mov ecx, eax */
  ECX = (EAX);
  /* 104e9ed3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 104e9ed7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 104e9edb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_104e9edf:;
  /* 104e9edf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 104e9ee1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 104e9ee3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 104e9ee5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 104e9ee7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e9ee9 jne 0x104e9edf */
  if (!C.zf) goto L_104e9edf;
  /* 104e9eeb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104e9eed mov ecx, eax */
  ECX = (EAX);
  /* 104e9eef mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104e9ef3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 104e9ef4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104e9ef8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9efa jb 0x104e9f0a */
  if (C.cf) goto L_104e9f0a;
  /* 104e9efc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9f00 ja 0x104e9f0a */
  if ((!C.cf&&!C.zf)) goto L_104e9f0a;
  /* 104e9f02 jb 0x104e9f12 */
  if (C.cf) goto L_104e9f12;
  /* 104e9f04 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9f08 jbe 0x104e9f12 */
  if ((C.cf||C.zf)) goto L_104e9f12;
L_104e9f0a:;
  /* 104e9f0a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e9f0e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_104e9f12:;
  /* 104e9f12 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e9f16 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e9f1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104e9f1c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104e9f1e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_104e9f21:;
  /* 104e9f21 pop ebx */
  EBX = (pop32());
  /* 104e9f22 ret 0x10 */
  ESPCHK(0x104e9eb0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009f30 @ 0x104e9f30 (628 bytes, 214 insns) */
void f_104e9f30(void) {
  FTRACE(0x104e9f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e9f30 push ebp */
  push32((uint32_t)(EBP));
  /* 104e9f31 mov ebp, esp */
  EBP = (ESP);
  /* 104e9f33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e9f36 push ebx */
  push32((uint32_t)(EBX));
  /* 104e9f37 push esi */
  push32((uint32_t)(ESI));
  /* 104e9f38 push edi */
  push32((uint32_t)(EDI));
L_104e9f39:;
  /* 104e9f39 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9f3d jne 0x104e9f5d */
  if (!C.zf) goto L_104e9f5d;
  /* 104e9f3f push 0x1050af84 */
  push32((uint32_t)(0x1050af84u));
  /* 104e9f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e9f46 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 104e9f48 push 0x1050af78 */
  push32((uint32_t)(0x1050af78u));
  /* 104e9f4d push 2 */
  push32((uint32_t)(0x2u));
  /* 104e9f4f call 0x104e22e0 */
  push32(0x104e9f54u); f_104e22e0();
  /* 104e9f54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e9f57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e9f5a jne 0x104e9f5d */
  if (!C.zf) goto L_104e9f5d;
  /* 104e9f5c int3  */
  x86_unimpl("int3 @ 0x104e9f5c");
L_104e9f5d:;
  /* 104e9f5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e9f5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e9f61 jne 0x104e9f39 */
  if (!C.zf) goto L_104e9f39;
  /* 104e9f63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e9f66 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104e9f69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9f6c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104e9f6f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104e9f72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9f75 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104e9f78 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 104e9f7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e9f80 je 0x104e9f8f */
  if (C.zf) goto L_104e9f8f;
  /* 104e9f82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9f85 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104e9f88 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 104e9f8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e9f8d je 0x104e9fa5 */
  if (C.zf) goto L_104e9fa5;
L_104e9f8f:;
  /* 104e9f8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9f92 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104e9f95 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 104e9f97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9f9a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 104e9f9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e9fa0 jmp 0x104ea19d */
  goto L_104ea19d;
L_104e9fa5:;
  /* 104e9fa5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9fa8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104e9fab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 104e9fae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e9fb0 je 0x104e9ffc */
  if (C.zf) goto L_104e9ffc;
  /* 104e9fb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9fb5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 104e9fbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9fbf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104e9fc2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 104e9fc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e9fc7 je 0x104e9fe5 */
  if (C.zf) goto L_104e9fe5;
  /* 104e9fc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9fcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9fcf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104e9fd2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104e9fd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9fd7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104e9fda and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 104e9fdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9fe0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 104e9fe3 jmp 0x104e9ffc */
  goto L_104e9ffc;
L_104e9fe5:;
  /* 104e9fe5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9fe8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104e9feb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 104e9fee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9ff1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 104e9ff4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e9ff7 jmp 0x104ea19d */
  goto L_104ea19d;
L_104e9ffc:;
  /* 104e9ffc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e9fff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ea002 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 104ea005 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea008 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 104ea00b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea00e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ea011 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 104ea014 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea017 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 104ea01a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea01d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 104ea024 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104ea02b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea02e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104ea031 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea034 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104ea037 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 104ea03d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ea03f jne 0x104ea06f */
  if (!C.zf) goto L_104ea06f;
  /* 104ea041 cmp dword ptr [ebp - 8], 0x1050e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1050e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea048 je 0x104ea053 */
  if (C.zf) goto L_104ea053;
  /* 104ea04a cmp dword ptr [ebp - 8], 0x1050e160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1050e160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea051 jne 0x104ea063 */
  if (!C.zf) goto L_104ea063;
L_104ea053:;
  /* 104ea053 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ea056 push edx */
  push32((uint32_t)(EDX));
  /* 104ea057 call 0x104ebea0 */
  push32(0x104ea05cu); f_104ebea0();
  /* 104ea05c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea05f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ea061 jne 0x104ea06f */
  if (!C.zf) goto L_104ea06f;
L_104ea063:;
  /* 104ea063 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea066 push eax */
  push32((uint32_t)(EAX));
  /* 104ea067 call 0x104ebdd0 */
  push32(0x104ea06cu); f_104ebdd0();
  /* 104ea06c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ea06f:;
  /* 104ea06f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea072 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ea075 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 104ea07b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ea07d je 0x104ea15b */
  if (C.zf) goto L_104ea15b;
L_104ea083:;
  /* 104ea083 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea086 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea089 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 104ea08b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ea08e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ea090 jge 0x104ea0b3 */
  if ((C.sf==C.of)) goto L_104ea0b3;
  /* 104ea092 push 0x1050af38 */
  push32((uint32_t)(0x1050af38u));
  /* 104ea097 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ea099 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 104ea09e push 0x1050af78 */
  push32((uint32_t)(0x1050af78u));
  /* 104ea0a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ea0a5 call 0x104e22e0 */
  push32(0x104ea0aau); f_104e22e0();
  /* 104ea0aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea0ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea0b0 jne 0x104ea0b3 */
  if (!C.zf) goto L_104ea0b3;
  /* 104ea0b2 int3  */
  x86_unimpl("int3 @ 0x104ea0b2");
L_104ea0b3:;
  /* 104ea0b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ea0b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ea0b7 jne 0x104ea083 */
  if (!C.zf) goto L_104ea083;
  /* 104ea0b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea0bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea0bf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 104ea0c1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ea0c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ea0c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea0ca mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104ea0cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea0d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea0d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104ea0d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea0d8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104ea0db sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ea0de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea0e1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104ea0e4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea0e8 jle 0x104ea106 */
  if ((C.zf||C.sf!=C.of)) goto L_104ea106;
  /* 104ea0ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea0ed push ecx */
  push32((uint32_t)(ECX));
  /* 104ea0ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea0f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104ea0f4 push eax */
  push32((uint32_t)(EAX));
  /* 104ea0f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ea0f8 push ecx */
  push32((uint32_t)(ECX));
  /* 104ea0f9 call 0x104ebac0 */
  push32(0x104ea0feu); f_104ebac0();
  /* 104ea0fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea101 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104ea104 jmp 0x104ea14e */
  goto L_104ea14e;
L_104ea106:;
  /* 104ea106 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea10a je 0x104ea129 */
  if (C.zf) goto L_104ea129;
  /* 104ea10c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ea10f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 104ea112 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ea115 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 104ea118 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ea11b mov ecx, dword ptr [edx*4 + 0x10510ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10510ea0)));
  /* 104ea122 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea124 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104ea127 jmp 0x104ea130 */
  goto L_104ea130;
L_104ea129:;
  /* 104ea129 mov dword ptr [ebp - 0x14], 0x1050da60 */
  w32((uint32_t)(EBP + -0x14), (0x1050da60u));
L_104ea130:;
  /* 104ea130 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104ea133 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 104ea137 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 104ea13a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ea13c je 0x104ea14e */
  if (C.zf) goto L_104ea14e;
  /* 104ea13e push 2 */
  push32((uint32_t)(0x2u));
  /* 104ea140 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ea142 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ea145 push ecx */
  push32((uint32_t)(ECX));
  /* 104ea146 call 0x104eb970 */
  push32(0x104ea14bu); f_104eb970();
  /* 104ea14b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ea14e:;
  /* 104ea14e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea151 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104ea154 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 104ea157 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 104ea159 jmp 0x104ea179 */
  goto L_104ea179;
L_104ea15b:;
  /* 104ea15b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104ea162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea165 push edx */
  push32((uint32_t)(EDX));
  /* 104ea166 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 104ea169 push eax */
  push32((uint32_t)(EAX));
  /* 104ea16a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ea16d push ecx */
  push32((uint32_t)(ECX));
  /* 104ea16e call 0x104ebac0 */
  push32(0x104ea173u); f_104ebac0();
  /* 104ea173 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea176 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104ea179:;
  /* 104ea179 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ea17c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea17f je 0x104ea195 */
  if (C.zf) goto L_104ea195;
  /* 104ea181 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea184 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104ea187 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 104ea18a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea18d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 104ea190 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ea193 jmp 0x104ea19d */
  goto L_104ea19d;
L_104ea195:;
  /* 104ea195 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ea198 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_104ea19d:;
  /* 104ea19d pop edi */
  EDI = (pop32());
  /* 104ea19e pop esi */
  ESI = (pop32());
  /* 104ea19f pop ebx */
  EBX = (pop32());
  /* 104ea1a0 mov esp, ebp */
  ESP = (EBP);
  /* 104ea1a2 pop ebp */
  EBP = (pop32());
  /* 104ea1a3 ret  */
  ESPCHK(0x104e9f30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1b0 @ 0x104ea1b0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_104ea1b0(void) {
  FTRACE(0x104ea1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ea1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ea1b1 mov ebp, esp */
  EBP = (ESP);
  /* 104ea1b3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ea1b9 push ebx */
  push32((uint32_t)(EBX));
  /* 104ea1ba push esi */
  push32((uint32_t)(ESI));
  /* 104ea1bb push edi */
  push32((uint32_t)(EDI));
  /* 104ea1bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104ea1c3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 104ea1cd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_104ea1d4:;
  /* 104ea1d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ea1d7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104ea1d9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 104ea1dc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea1e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ea1e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea1e6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 104ea1e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ea1eb je 0x104eadc7 */
  if (C.zf) goto L_104eadc7;
  /* 104ea1f1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea1f8 jl 0x104eadc7 */
  if ((C.sf!=C.of)) goto L_104eadc7;
  /* 104ea1fe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea202 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea205 jl 0x104ea226 */
  if ((C.sf!=C.of)) goto L_104ea226;
  /* 104ea207 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea20b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea20e jg 0x104ea226 */
  if ((!C.zf&&C.sf==C.of)) goto L_104ea226;
  /* 104ea210 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea214 movsx ecx, byte ptr [eax + 0x1050af70] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1050af70))));
  /* 104ea21b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 104ea21e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 104ea224 jmp 0x104ea230 */
  goto L_104ea230;
L_104ea226:;
  /* 104ea226 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_104ea230:;
  /* 104ea230 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 104ea236 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104ea239 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ea23c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ea23f movsx edx, byte ptr [ecx + eax*8 + 0x1050af90] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1050af90))));
  /* 104ea247 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104ea24a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104ea24d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ea250 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 104ea256 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea25d ja 0x104eadc2 */
  if ((!C.cf&&!C.zf)) goto L_104eadc2;
  /* 104ea263 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 104ea269 jmp dword ptr [ecx*4 + 0x104eadd4] */
  switch (ECX) {
    case 0: goto L_104ea270;
    case 1: goto L_104ea30a;
    case 2: goto L_104ea34c;
    case 3: goto L_104ea3bb;
    case 4: goto L_104ea413;
    case 5: goto L_104ea422;
    case 6: goto L_104ea46e;
    case 7: goto L_104ea501;
    case 8: goto L_104ea398;
    case 9: goto L_104ea3a3;
    case 10: goto L_104ea38e;
    case 11: goto L_104ea383;
    case 12: goto L_104ea3ae;
    case 13: goto L_104ea3b6;
    default: x86_unimpl("switch@0x104ea269 out of table"); return;
  }
L_104ea270:;
  /* 104ea270 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 104ea277 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104ea27a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104ea280 mov eax, dword ptr [0x1050dc98] */
  EAX = (r32((uint32_t)(0x1050dc98)));
  /* 104ea285 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ea287 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 104ea28b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 104ea291 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ea293 je 0x104ea2ed */
  if (C.zf) goto L_104ea2ed;
  /* 104ea295 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 104ea29b push edx */
  push32((uint32_t)(EDX));
  /* 104ea29c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ea29f push eax */
  push32((uint32_t)(EAX));
  /* 104ea2a0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea2a4 push ecx */
  push32((uint32_t)(ECX));
  /* 104ea2a5 call 0x104eaee0 */
  push32(0x104ea2aau); f_104eaee0();
  /* 104ea2aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea2ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ea2b0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104ea2b2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 104ea2b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ea2b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea2bb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_104ea2be:;
  /* 104ea2be movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea2c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ea2c4 jne 0x104ea2e7 */
  if (!C.zf) goto L_104ea2e7;
  /* 104ea2c6 push 0x1050b010 */
  push32((uint32_t)(0x1050b010u));
  /* 104ea2cb push 0 */
  push32((uint32_t)(0x0u));
  /* 104ea2cd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 104ea2d2 push 0x1050b004 */
  push32((uint32_t)(0x1050b004u));
  /* 104ea2d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ea2d9 call 0x104e22e0 */
  push32(0x104ea2deu); f_104e22e0();
  /* 104ea2de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea2e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea2e4 jne 0x104ea2e7 */
  if (!C.zf) goto L_104ea2e7;
  /* 104ea2e6 int3  */
  x86_unimpl("int3 @ 0x104ea2e6");
L_104ea2e7:;
  /* 104ea2e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ea2e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ea2eb jne 0x104ea2be */
  if (!C.zf) goto L_104ea2be;
L_104ea2ed:;
  /* 104ea2ed lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 104ea2f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104ea2f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ea2f7 push edx */
  push32((uint32_t)(EDX));
  /* 104ea2f8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea2fc push eax */
  push32((uint32_t)(EAX));
  /* 104ea2fd call 0x104eaee0 */
  push32(0x104ea302u); f_104eaee0();
  /* 104ea302 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea305 jmp 0x104eadc2 */
  goto L_104eadc2;
L_104ea30a:;
  /* 104ea30a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104ea311 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea314 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 104ea31a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 104ea320 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 104ea326 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 104ea32c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104ea32f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104ea336 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 104ea340 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 104ea347 jmp 0x104eadc2 */
  goto L_104eadc2;
L_104ea34c:;
  /* 104ea34c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea350 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 104ea356 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 104ea35c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ea35f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 104ea365 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea36c ja 0x104ea3b6 */
  if ((!C.cf&&!C.zf)) goto L_104ea3b6;
  /* 104ea36e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 104ea374 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ea376 mov al, byte ptr [ecx + 0x104eae0c] */
  AL = (r8((uint32_t)(ECX + 0x104eae0c)));
  /* 104ea37c jmp dword ptr [eax*4 + 0x104eadf4] */
  switch (EAX) {
    case 0: goto L_104ea398;
    case 1: goto L_104ea3a3;
    case 2: goto L_104ea38e;
    case 3: goto L_104ea383;
    case 4: goto L_104ea3ae;
    case 5: goto L_104ea3b6;
    default: x86_unimpl("switch@0x104ea37c out of table"); return;
  }
L_104ea383:;
  /* 104ea383 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea386 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104ea389 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104ea38c jmp 0x104ea3b6 */
  goto L_104ea3b6;
L_104ea38e:;
  /* 104ea38e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea391 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 104ea393 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ea396 jmp 0x104ea3b6 */
  goto L_104ea3b6;
L_104ea398:;
  /* 104ea398 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea39b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 104ea39e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104ea3a1 jmp 0x104ea3b6 */
  goto L_104ea3b6;
L_104ea3a3:;
  /* 104ea3a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea3a6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 104ea3a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104ea3ac jmp 0x104ea3b6 */
  goto L_104ea3b6;
L_104ea3ae:;
  /* 104ea3ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea3b1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 104ea3b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104ea3b6:;
  /* 104ea3b6 jmp 0x104eadc2 */
  goto L_104eadc2;
L_104ea3bb:;
  /* 104ea3bb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea3bf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea3c2 jne 0x104ea3f7 */
  if (!C.zf) goto L_104ea3f7;
  /* 104ea3c4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 104ea3c7 push edx */
  push32((uint32_t)(EDX));
  /* 104ea3c8 call 0x104eaff0 */
  push32(0x104ea3cdu); f_104eaff0();
  /* 104ea3cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea3d0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 104ea3d6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea3dd jge 0x104ea3f5 */
  if ((C.sf==C.of)) goto L_104ea3f5;
  /* 104ea3df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea3e2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 104ea3e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ea3e7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 104ea3ed neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104ea3ef mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_104ea3f5:;
  /* 104ea3f5 jmp 0x104ea40e */
  goto L_104ea40e;
L_104ea3f7:;
  /* 104ea3f7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 104ea3fd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ea400 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea404 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 104ea408 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_104ea40e:;
  /* 104ea40e jmp 0x104eadc2 */
  goto L_104eadc2;
L_104ea413:;
  /* 104ea413 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 104ea41d jmp 0x104eadc2 */
  goto L_104eadc2;
L_104ea422:;
  /* 104ea422 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea426 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea429 jne 0x104ea452 */
  if (!C.zf) goto L_104ea452;
  /* 104ea42b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 104ea42e push eax */
  push32((uint32_t)(EAX));
  /* 104ea42f call 0x104eaff0 */
  push32(0x104ea434u); f_104eaff0();
  /* 104ea434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea437 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 104ea43d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea444 jge 0x104ea450 */
  if ((C.sf==C.of)) goto L_104ea450;
  /* 104ea446 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_104ea450:;
  /* 104ea450 jmp 0x104ea469 */
  goto L_104ea469;
L_104ea452:;
  /* 104ea452 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 104ea458 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ea45b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea45f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 104ea463 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_104ea469:;
  /* 104ea469 jmp 0x104eadc2 */
  goto L_104eadc2;
L_104ea46e:;
  /* 104ea46e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea472 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 104ea478 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 104ea47e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ea481 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 104ea487 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea48e ja 0x104ea4fc */
  if ((!C.cf&&!C.zf)) goto L_104ea4fc;
  /* 104ea490 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 104ea496 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ea498 mov al, byte ptr [ecx + 0x104eae31] */
  AL = (r8((uint32_t)(ECX + 0x104eae31)));
  /* 104ea49e jmp dword ptr [eax*4 + 0x104eae1d] */
  switch (EAX) {
    case 0: goto L_104ea4b0;
    case 1: goto L_104ea4e9;
    case 2: goto L_104ea4a5;
    case 3: goto L_104ea4f3;
    case 4: goto L_104ea4fc;
    default: x86_unimpl("switch@0x104ea49e out of table"); return;
  }
L_104ea4a5:;
  /* 104ea4a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea4a8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 104ea4ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104ea4ae jmp 0x104ea4fc */
  goto L_104ea4fc;
L_104ea4b0:;
  /* 104ea4b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ea4b3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ea4b6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea4b9 jne 0x104ea4db */
  if (!C.zf) goto L_104ea4db;
  /* 104ea4bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ea4be movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 104ea4c2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea4c5 jne 0x104ea4db */
  if (!C.zf) goto L_104ea4db;
  /* 104ea4c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ea4ca add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea4cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 104ea4d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea4d3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 104ea4d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104ea4d9 jmp 0x104ea4e7 */
  goto L_104ea4e7;
L_104ea4db:;
  /* 104ea4db mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 104ea4e2 jmp 0x104ea270 */
  goto L_104ea270;
L_104ea4e7:;
  /* 104ea4e7 jmp 0x104ea4fc */
  goto L_104ea4fc;
L_104ea4e9:;
  /* 104ea4e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea4ec or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 104ea4ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ea4f1 jmp 0x104ea4fc */
  goto L_104ea4fc;
L_104ea4f3:;
  /* 104ea4f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea4f6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 104ea4f9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104ea4fc:;
  /* 104ea4fc jmp 0x104eadc2 */
  goto L_104eadc2;
L_104ea501:;
  /* 104ea501 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea505 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 104ea50b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 104ea511 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ea514 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 104ea51a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea521 ja 0x104eabe7 */
  if ((!C.cf&&!C.zf)) goto L_104eabe7;
  /* 104ea527 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 104ea52d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ea52f mov cl, byte ptr [edx + 0x104eae9c] */
  CL = (r8((uint32_t)(EDX + 0x104eae9c)));
  /* 104ea535 jmp dword ptr [ecx*4 + 0x104eae60] */
  switch (ECX) {
    case 0: goto L_104ea53c;
    case 1: goto L_104ea7d0;
    case 2: goto L_104ea660;
    case 3: goto L_104ea909;
    case 4: goto L_104ea5cb;
    case 5: goto L_104ea551;
    case 6: goto L_104ea8db;
    case 7: goto L_104ea7e0;
    case 8: goto L_104ea785;
    case 9: goto L_104ea955;
    case 10: goto L_104ea8ff;
    case 11: goto L_104ea676;
    case 12: goto L_104ea8f3;
    case 13: goto L_104ea915;
    case 14: goto L_104eabe7;
    default: x86_unimpl("switch@0x104ea535 out of table"); return;
  }
L_104ea53c:;
  /* 104ea53c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea53f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 104ea544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ea546 jne 0x104ea551 */
  if (!C.zf) goto L_104ea551;
  /* 104ea548 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea54b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 104ea54e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104ea551:;
  /* 104ea551 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea554 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 104ea55a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ea55c je 0x104ea597 */
  if (C.zf) goto L_104ea597;
  /* 104ea55e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 104ea561 push eax */
  push32((uint32_t)(EAX));
  /* 104ea562 call 0x104eb030 */
  push32(0x104ea567u); f_104eb030();
  /* 104ea567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea56a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 104ea56e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 104ea572 push ecx */
  push32((uint32_t)(ECX));
  /* 104ea573 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 104ea579 push edx */
  push32((uint32_t)(EDX));
  /* 104ea57a call 0x104ec110 */
  push32(0x104ea57fu); f_104ec110();
  /* 104ea57f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea582 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104ea585 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea589 jge 0x104ea595 */
  if ((C.sf==C.of)) goto L_104ea595;
  /* 104ea58b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_104ea595:;
  /* 104ea595 jmp 0x104ea5bd */
  goto L_104ea5bd;
L_104ea597:;
  /* 104ea597 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 104ea59a push eax */
  push32((uint32_t)(EAX));
  /* 104ea59b call 0x104eaff0 */
  push32(0x104ea5a0u); f_104eaff0();
  /* 104ea5a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea5a3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 104ea5aa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 104ea5b0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 104ea5b6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_104ea5bd:;
  /* 104ea5bd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 104ea5c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104ea5c6 jmp 0x104eabe7 */
  goto L_104eabe7;
L_104ea5cb:;
  /* 104ea5cb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 104ea5ce push eax */
  push32((uint32_t)(EAX));
  /* 104ea5cf call 0x104eaff0 */
  push32(0x104ea5d4u); f_104eaff0();
  /* 104ea5d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea5d7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 104ea5dd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea5e4 je 0x104ea5f2 */
  if (C.zf) goto L_104ea5f2;
  /* 104ea5e6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 104ea5ec cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea5f0 jne 0x104ea60c */
  if (!C.zf) goto L_104ea60c;
L_104ea5f2:;
  /* 104ea5f2 mov edx, dword ptr [0x1050dfb0] */
  EDX = (r32((uint32_t)(0x1050dfb0)));
  /* 104ea5f8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104ea5fb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ea5fe push eax */
  push32((uint32_t)(EAX));
  /* 104ea5ff call 0x104e6050 */
  push32(0x104ea604u); f_104e6050();
  /* 104ea604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea607 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104ea60a jmp 0x104ea65b */
  goto L_104ea65b;
L_104ea60c:;
  /* 104ea60c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea60f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 104ea615 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ea617 je 0x104ea63c */
  if (C.zf) goto L_104ea63c;
  /* 104ea619 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 104ea61f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104ea622 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104ea625 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 104ea62b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 104ea62e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 104ea630 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104ea633 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 104ea63a jmp 0x104ea65b */
  goto L_104ea65b;
L_104ea63c:;
  /* 104ea63c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 104ea643 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 104ea649 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104ea64c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104ea64f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 104ea655 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 104ea658 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104ea65b:;
  /* 104ea65b jmp 0x104eabe7 */
  goto L_104eabe7;
L_104ea660:;
  /* 104ea660 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea663 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 104ea669 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ea66b jne 0x104ea676 */
  if (!C.zf) goto L_104ea676;
  /* 104ea66d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea670 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 104ea673 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104ea676:;
  /* 104ea676 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea67d jne 0x104ea68b */
  if (!C.zf) goto L_104ea68b;
  /* 104ea67f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 104ea689 jmp 0x104ea697 */
  goto L_104ea697;
L_104ea68b:;
  /* 104ea68b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 104ea691 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_104ea697:;
  /* 104ea697 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 104ea69d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 104ea6a3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 104ea6a6 push edx */
  push32((uint32_t)(EDX));
  /* 104ea6a7 call 0x104eaff0 */
  push32(0x104ea6acu); f_104eaff0();
  /* 104ea6ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea6af mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104ea6b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea6b5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 104ea6ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ea6bc je 0x104ea726 */
  if (C.zf) goto L_104ea726;
  /* 104ea6be cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea6c2 jne 0x104ea6cd */
  if (!C.zf) goto L_104ea6cd;
  /* 104ea6c4 mov ecx, dword ptr [0x1050dfb4] */
  ECX = (r32((uint32_t)(0x1050dfb4)));
  /* 104ea6ca mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_104ea6cd:;
  /* 104ea6cd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 104ea6d4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ea6d7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_104ea6dd:;
  /* 104ea6dd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 104ea6e3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 104ea6e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ea6ec mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 104ea6f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ea6f4 je 0x104ea716 */
  if (C.zf) goto L_104ea716;
  /* 104ea6f6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 104ea6fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ea6fe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 104ea701 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ea703 je 0x104ea716 */
  if (C.zf) goto L_104ea716;
  /* 104ea705 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 104ea70b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea70e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 104ea714 jmp 0x104ea6dd */
  goto L_104ea6dd;
L_104ea716:;
  /* 104ea716 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 104ea71c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ea71f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 104ea721 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104ea724 jmp 0x104ea780 */
  goto L_104ea780;
L_104ea726:;
  /* 104ea726 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea72a jne 0x104ea734 */
  if (!C.zf) goto L_104ea734;
  /* 104ea72c mov eax, dword ptr [0x1050dfb0] */
  EAX = (r32((uint32_t)(0x1050dfb0)));
  /* 104ea731 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_104ea734:;
  /* 104ea734 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ea737 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_104ea73d:;
  /* 104ea73d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 104ea743 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 104ea749 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ea74c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 104ea752 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ea754 je 0x104ea774 */
  if (C.zf) goto L_104ea774;
  /* 104ea756 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 104ea75c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104ea75f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ea761 je 0x104ea774 */
  if (C.zf) goto L_104ea774;
  /* 104ea763 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 104ea769 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea76c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 104ea772 jmp 0x104ea73d */
  goto L_104ea73d;
L_104ea774:;
  /* 104ea774 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 104ea77a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ea77d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_104ea780:;
  /* 104ea780 jmp 0x104eabe7 */
  goto L_104eabe7;
L_104ea785:;
  /* 104ea785 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 104ea788 push edx */
  push32((uint32_t)(EDX));
  /* 104ea789 call 0x104eaff0 */
  push32(0x104ea78eu); f_104eaff0();
  /* 104ea78e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea791 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 104ea797 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea79a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 104ea79d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ea79f je 0x104ea7b3 */
  if (C.zf) goto L_104ea7b3;
  /* 104ea7a1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 104ea7a7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 104ea7ae mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 104ea7b1 jmp 0x104ea7c1 */
  goto L_104ea7c1;
L_104ea7b3:;
  /* 104ea7b3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 104ea7b9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 104ea7bf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_104ea7c1:;
  /* 104ea7c1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 104ea7cb jmp 0x104eabe7 */
  goto L_104eabe7;
L_104ea7d0:;
  /* 104ea7d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 104ea7d7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 104ea7da add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 104ea7dd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_104ea7e0:;
  /* 104ea7e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea7e3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 104ea7e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ea7e8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 104ea7ee mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104ea7f1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea7f8 jge 0x104ea806 */
  if ((C.sf==C.of)) goto L_104ea806;
  /* 104ea7fa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 104ea804 jmp 0x104ea822 */
  goto L_104ea822;
L_104ea806:;
  /* 104ea806 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea80d jne 0x104ea822 */
  if (!C.zf) goto L_104ea822;
  /* 104ea80f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea813 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea816 jne 0x104ea822 */
  if (!C.zf) goto L_104ea822;
  /* 104ea818 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_104ea822:;
  /* 104ea822 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ea825 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea828 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 104ea82b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ea82e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ea831 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104ea833 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 104ea836 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 104ea83c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 104ea842 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ea845 push ecx */
  push32((uint32_t)(ECX));
  /* 104ea846 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 104ea84c push edx */
  push32((uint32_t)(EDX));
  /* 104ea84d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea851 push eax */
  push32((uint32_t)(EAX));
  /* 104ea852 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ea855 push ecx */
  push32((uint32_t)(ECX));
  /* 104ea856 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 104ea85c push edx */
  push32((uint32_t)(EDX));
  /* 104ea85d call dword ptr [0x1050e3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050e3a0))), 0x104ea863u);
  /* 104ea863 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea866 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea869 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 104ea86e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ea870 je 0x104ea888 */
  if (C.zf) goto L_104ea888;
  /* 104ea872 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea879 jne 0x104ea888 */
  if (!C.zf) goto L_104ea888;
  /* 104ea87b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ea87e push ecx */
  push32((uint32_t)(ECX));
  /* 104ea87f call dword ptr [0x1050e3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050e3ac))), 0x104ea885u);
  /* 104ea885 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ea888:;
  /* 104ea888 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 104ea88c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea88f jne 0x104ea8aa */
  if (!C.zf) goto L_104ea8aa;
  /* 104ea891 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea894 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 104ea899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ea89b jne 0x104ea8aa */
  if (!C.zf) goto L_104ea8aa;
  /* 104ea89d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ea8a0 push ecx */
  push32((uint32_t)(ECX));
  /* 104ea8a1 call dword ptr [0x1050e3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050e3a4))), 0x104ea8a7u);
  /* 104ea8a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ea8aa:;
  /* 104ea8aa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ea8ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104ea8b0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ea8b3 jne 0x104ea8c7 */
  if (!C.zf) goto L_104ea8c7;
  /* 104ea8b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea8b8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 104ea8bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104ea8be mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ea8c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea8c4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_104ea8c7:;
  /* 104ea8c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ea8ca push eax */
  push32((uint32_t)(EAX));
  /* 104ea8cb call 0x104e6050 */
  push32(0x104ea8d0u); f_104e6050();
  /* 104ea8d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea8d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104ea8d6 jmp 0x104eabe7 */
  goto L_104eabe7;
L_104ea8db:;
  /* 104ea8db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea8de or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 104ea8e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104ea8e4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 104ea8ee jmp 0x104ea975 */
  goto L_104ea975;
L_104ea8f3:;
  /* 104ea8f3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 104ea8fd jmp 0x104ea975 */
  goto L_104ea975;
L_104ea8ff:;
  /* 104ea8ff mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_104ea909:;
  /* 104ea909 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 104ea913 jmp 0x104ea91f */
  goto L_104ea91f;
L_104ea915:;
  /* 104ea915 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_104ea91f:;
  /* 104ea91f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 104ea929 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea92c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 104ea932 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ea934 je 0x104ea953 */
  if (C.zf) goto L_104ea953;
  /* 104ea936 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 104ea93d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 104ea943 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea946 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 104ea94c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_104ea953:;
  /* 104ea953 jmp 0x104ea975 */
  goto L_104ea975;
L_104ea955:;
  /* 104ea955 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 104ea95f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea962 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 104ea968 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ea96a je 0x104ea975 */
  if (C.zf) goto L_104ea975;
  /* 104ea96c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea96f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 104ea972 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104ea975:;
  /* 104ea975 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea978 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 104ea97d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ea97f je 0x104ea99e */
  if (C.zf) goto L_104ea99e;
  /* 104ea981 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 104ea984 push ecx */
  push32((uint32_t)(ECX));
  /* 104ea985 call 0x104eb010 */
  push32(0x104ea98au); f_104eb010();
  /* 104ea98a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea98d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 104ea993 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 104ea999 jmp 0x104eaa2f */
  goto L_104eaa2f;
L_104ea99e:;
  /* 104ea99e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea9a1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 104ea9a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ea9a6 je 0x104ea9f0 */
  if (C.zf) goto L_104ea9f0;
  /* 104ea9a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea9ab and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 104ea9ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ea9b0 je 0x104ea9d0 */
  if (C.zf) goto L_104ea9d0;
  /* 104ea9b2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 104ea9b5 push ecx */
  push32((uint32_t)(ECX));
  /* 104ea9b6 call 0x104eaff0 */
  push32(0x104ea9bbu); f_104eaff0();
  /* 104ea9bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea9be movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 104ea9c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104ea9c2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 104ea9c8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 104ea9ce jmp 0x104ea9ee */
  goto L_104ea9ee;
L_104ea9d0:;
  /* 104ea9d0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 104ea9d3 push edx */
  push32((uint32_t)(EDX));
  /* 104ea9d4 call 0x104eaff0 */
  push32(0x104ea9d9u); f_104eaff0();
  /* 104ea9d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ea9dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ea9e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104ea9e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 104ea9e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_104ea9ee:;
  /* 104ea9ee jmp 0x104eaa2f */
  goto L_104eaa2f;
L_104ea9f0:;
  /* 104ea9f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ea9f3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 104ea9f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ea9f8 je 0x104eaa15 */
  if (C.zf) goto L_104eaa15;
  /* 104ea9fa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 104ea9fd push ecx */
  push32((uint32_t)(ECX));
  /* 104ea9fe call 0x104eaff0 */
  push32(0x104eaa03u); f_104eaff0();
  /* 104eaa03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eaa06 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104eaa07 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 104eaa0d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 104eaa13 jmp 0x104eaa2f */
  goto L_104eaa2f;
L_104eaa15:;
  /* 104eaa15 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 104eaa18 push edx */
  push32((uint32_t)(EDX));
  /* 104eaa19 call 0x104eaff0 */
  push32(0x104eaa1eu); f_104eaff0();
  /* 104eaa1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eaa21 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104eaa23 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 104eaa29 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_104eaa2f:;
  /* 104eaa2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eaa32 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 104eaa35 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104eaa37 je 0x104eaa77 */
  if (C.zf) goto L_104eaa77;
  /* 104eaa39 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eaa40 jg 0x104eaa77 */
  if ((!C.zf&&C.sf==C.of)) goto L_104eaa77;
  /* 104eaa42 jl 0x104eaa4d */
  if ((C.sf!=C.of)) goto L_104eaa4d;
  /* 104eaa44 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eaa4b jae 0x104eaa77 */
  if (!C.cf) goto L_104eaa77;
L_104eaa4d:;
  /* 104eaa4d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 104eaa53 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104eaa55 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 104eaa5b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eaa5e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104eaa60 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 104eaa66 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 104eaa6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eaa6f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 104eaa72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104eaa75 jmp 0x104eaa8f */
  goto L_104eaa8f;
L_104eaa77:;
  /* 104eaa77 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 104eaa7d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 104eaa83 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 104eaa89 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_104eaa8f:;
  /* 104eaa8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eaa92 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 104eaa98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104eaa9a jne 0x104eaab7 */
  if (!C.zf) goto L_104eaab7;
  /* 104eaa9c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 104eaaa2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 104eaaa8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 104eaaab mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 104eaab1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_104eaab7:;
  /* 104eaab7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eaabe jge 0x104eaacc */
  if ((C.sf==C.of)) goto L_104eaacc;
  /* 104eaac0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 104eaaca jmp 0x104eaad5 */
  goto L_104eaad5;
L_104eaacc:;
  /* 104eaacc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eaacf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 104eaad2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104eaad5:;
  /* 104eaad5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 104eaadb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 104eaae1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eaae3 jne 0x104eaaec */
  if (!C.zf) goto L_104eaaec;
  /* 104eaae5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_104eaaec:;
  /* 104eaaec lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 104eaaef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_104eaaf2:;
  /* 104eaaf2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 104eaaf8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 104eaafe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eab01 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 104eab07 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104eab09 jg 0x104eab1f */
  if ((!C.zf&&C.sf==C.of)) goto L_104eab1f;
  /* 104eab0b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 104eab11 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 104eab17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104eab19 je 0x104eaba0 */
  if (C.zf) goto L_104eaba0;
L_104eab1f:;
  /* 104eab1f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 104eab25 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104eab26 push edx */
  push32((uint32_t)(EDX));
  /* 104eab27 push eax */
  push32((uint32_t)(EAX));
  /* 104eab28 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 104eab2e push edx */
  push32((uint32_t)(EDX));
  /* 104eab2f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 104eab35 push eax */
  push32((uint32_t)(EAX));
  /* 104eab36 call 0x104e9eb0 */
  push32(0x104eab3bu); f_104e9eb0();
  /* 104eab3b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eab3e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 104eab44 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 104eab4a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104eab4b push edx */
  push32((uint32_t)(EDX));
  /* 104eab4c push eax */
  push32((uint32_t)(EAX));
  /* 104eab4d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 104eab53 push ecx */
  push32((uint32_t)(ECX));
  /* 104eab54 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 104eab5a push edx */
  push32((uint32_t)(EDX));
  /* 104eab5b call 0x104e9e40 */
  push32(0x104eab60u); f_104e9e40();
  /* 104eab60 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 104eab66 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 104eab6c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eab73 jle 0x104eab87 */
  if ((C.zf||C.sf!=C.of)) goto L_104eab87;
  /* 104eab75 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 104eab7b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eab81 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_104eab87:;
  /* 104eab87 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eab8a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 104eab90 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 104eab92 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eab95 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eab98 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104eab9b jmp 0x104eaaf2 */
  goto L_104eaaf2;
L_104eaba0:;
  /* 104eaba0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 104eaba3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eaba6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104eaba9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eabac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eabaf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104eabb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eabb5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 104eabba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eabbc je 0x104eabe7 */
  if (C.zf) goto L_104eabe7;
  /* 104eabbe mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eabc1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104eabc4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eabc7 jne 0x104eabcf */
  if (!C.zf) goto L_104eabcf;
  /* 104eabc9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eabcd jne 0x104eabe7 */
  if (!C.zf) goto L_104eabe7;
L_104eabcf:;
  /* 104eabcf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eabd2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eabd5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104eabd8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eabdb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 104eabde mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104eabe1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eabe4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_104eabe7:;
  /* 104eabe7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eabee jne 0x104eadc2 */
  if (!C.zf) goto L_104eadc2;
  /* 104eabf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eabf7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 104eabfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eabfc je 0x104eac4d */
  if (C.zf) goto L_104eac4d;
  /* 104eabfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eac01 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 104eac07 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104eac09 je 0x104eac1b */
  if (C.zf) goto L_104eac1b;
  /* 104eac0b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 104eac12 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 104eac19 jmp 0x104eac4d */
  goto L_104eac4d;
L_104eac1b:;
  /* 104eac1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eac1e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104eac21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104eac23 je 0x104eac35 */
  if (C.zf) goto L_104eac35;
  /* 104eac25 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 104eac2c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 104eac33 jmp 0x104eac4d */
  goto L_104eac4d;
L_104eac35:;
  /* 104eac35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eac38 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 104eac3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eac3d je 0x104eac4d */
  if (C.zf) goto L_104eac4d;
  /* 104eac3f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 104eac46 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_104eac4d:;
  /* 104eac4d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 104eac53 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eac56 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eac59 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 104eac5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eac62 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 104eac65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104eac67 jne 0x104eac85 */
  if (!C.zf) goto L_104eac85;
  /* 104eac69 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 104eac6f push eax */
  push32((uint32_t)(EAX));
  /* 104eac70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eac73 push ecx */
  push32((uint32_t)(ECX));
  /* 104eac74 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 104eac7a push edx */
  push32((uint32_t)(EDX));
  /* 104eac7b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 104eac7d call 0x104eaf60 */
  push32(0x104eac82u); f_104eaf60();
  /* 104eac82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104eac85:;
  /* 104eac85 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 104eac8b push eax */
  push32((uint32_t)(EAX));
  /* 104eac8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eac8f push ecx */
  push32((uint32_t)(ECX));
  /* 104eac90 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104eac93 push edx */
  push32((uint32_t)(EDX));
  /* 104eac94 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 104eac9a push eax */
  push32((uint32_t)(EAX));
  /* 104eac9b call 0x104eafa0 */
  push32(0x104eaca0u); f_104eafa0();
  /* 104eaca0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eaca3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eaca6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 104eaca9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104eacab je 0x104eacd3 */
  if (C.zf) goto L_104eacd3;
  /* 104eacad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eacb0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104eacb3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104eacb5 jne 0x104eacd3 */
  if (!C.zf) goto L_104eacd3;
  /* 104eacb7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 104eacbd push eax */
  push32((uint32_t)(EAX));
  /* 104eacbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eacc1 push ecx */
  push32((uint32_t)(ECX));
  /* 104eacc2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 104eacc8 push edx */
  push32((uint32_t)(EDX));
  /* 104eacc9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 104eaccb call 0x104eaf60 */
  push32(0x104eacd0u); f_104eaf60();
  /* 104eacd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104eacd3:;
  /* 104eacd3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eacd7 je 0x104ead81 */
  if (C.zf) goto L_104ead81;
  /* 104eacdd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eace1 jle 0x104ead81 */
  if ((C.zf||C.sf!=C.of)) goto L_104ead81;
  /* 104eace7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eacea mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 104eacf0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104eacf3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_104eacf9:;
  /* 104eacf9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 104eacff mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 104ead05 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ead08 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 104ead0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ead10 je 0x104ead7f */
  if (C.zf) goto L_104ead7f;
  /* 104ead12 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 104ead18 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 104ead1b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 104ead22 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 104ead29 push eax */
  push32((uint32_t)(EAX));
  /* 104ead2a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 104ead30 push ecx */
  push32((uint32_t)(ECX));
  /* 104ead31 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 104ead37 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ead3a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 104ead40 call 0x104ec110 */
  push32(0x104ead45u); f_104ec110();
  /* 104ead45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ead48 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 104ead4e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ead55 jg 0x104ead59 */
  if ((!C.zf&&C.sf==C.of)) goto L_104ead59;
  /* 104ead57 jmp 0x104ead7f */
  goto L_104ead7f;
L_104ead59:;
  /* 104ead59 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 104ead5f push eax */
  push32((uint32_t)(EAX));
  /* 104ead60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ead63 push ecx */
  push32((uint32_t)(ECX));
  /* 104ead64 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 104ead6a push edx */
  push32((uint32_t)(EDX));
  /* 104ead6b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 104ead71 push eax */
  push32((uint32_t)(EAX));
  /* 104ead72 call 0x104eafa0 */
  push32(0x104ead77u); f_104eafa0();
  /* 104ead77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ead7a jmp 0x104eacf9 */
  goto L_104eacf9;
L_104ead7f:;
  /* 104ead7f jmp 0x104ead9c */
  goto L_104ead9c;
L_104ead81:;
  /* 104ead81 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 104ead87 push ecx */
  push32((uint32_t)(ECX));
  /* 104ead88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ead8b push edx */
  push32((uint32_t)(EDX));
  /* 104ead8c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104ead8f push eax */
  push32((uint32_t)(EAX));
  /* 104ead90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104ead93 push ecx */
  push32((uint32_t)(ECX));
  /* 104ead94 call 0x104eafa0 */
  push32(0x104ead99u); f_104eafa0();
  /* 104ead99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ead9c:;
  /* 104ead9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ead9f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104eada2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104eada4 je 0x104eadc2 */
  if (C.zf) goto L_104eadc2;
  /* 104eada6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 104eadac push eax */
  push32((uint32_t)(EAX));
  /* 104eadad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eadb0 push ecx */
  push32((uint32_t)(ECX));
  /* 104eadb1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 104eadb7 push edx */
  push32((uint32_t)(EDX));
  /* 104eadb8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 104eadba call 0x104eaf60 */
  push32(0x104eadbfu); f_104eaf60();
  /* 104eadbf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104eadc2:;
  /* 104eadc2 jmp 0x104ea1d4 */
  goto L_104ea1d4;
L_104eadc7:;
  /* 104eadc7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 104eadcd pop edi */
  EDI = (pop32());
  /* 104eadce pop esi */
  ESI = (pop32());
  /* 104eadcf pop ebx */
  EBX = (pop32());
  /* 104eadd0 mov esp, ebp */
  ESP = (EBP);
  /* 104eadd2 pop ebp */
  EBP = (pop32());
  /* 104eadd3 ret  */
  ESPCHK(0x104ea1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aee0 @ 0x104eaee0 (119 bytes, 44 insns) */
void f_104eaee0(void) {
  FTRACE(0x104eaee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eaee0 push ebp */
  push32((uint32_t)(EBP));
  /* 104eaee1 mov ebp, esp */
  EBP = (ESP);
  /* 104eaee3 push ecx */
  push32((uint32_t)(ECX));
  /* 104eaee4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eaee7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104eaeea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eaeed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eaef0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104eaef3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eaef6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eaefa jl 0x104eaf22 */
  if ((C.sf!=C.of)) goto L_104eaf22;
  /* 104eaefc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eaeff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104eaf01 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 104eaf04 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 104eaf06 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 104eaf0a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104eaf10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104eaf13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eaf16 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104eaf18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eaf1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eaf1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104eaf20 jmp 0x104eaf35 */
  goto L_104eaf35;
L_104eaf22:;
  /* 104eaf22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eaf25 push edx */
  push32((uint32_t)(EDX));
  /* 104eaf26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eaf29 push eax */
  push32((uint32_t)(EAX));
  /* 104eaf2a call 0x104e9f30 */
  push32(0x104eaf2fu); f_104e9f30();
  /* 104eaf2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eaf32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104eaf35:;
  /* 104eaf35 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eaf39 jne 0x104eaf46 */
  if (!C.zf) goto L_104eaf46;
  /* 104eaf3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eaf3e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 104eaf44 jmp 0x104eaf53 */
  goto L_104eaf53;
L_104eaf46:;
  /* 104eaf46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eaf49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104eaf4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eaf4e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eaf51 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_104eaf53:;
  /* 104eaf53 mov esp, ebp */
  ESP = (EBP);
  /* 104eaf55 pop ebp */
  EBP = (pop32());
  /* 104eaf56 ret  */
  ESPCHK(0x104eaee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af60 @ 0x104eaf60 (53 bytes, 23 insns) */
void f_104eaf60(void) {
  FTRACE(0x104eaf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eaf60 push ebp */
  push32((uint32_t)(EBP));
  /* 104eaf61 mov ebp, esp */
  EBP = (ESP);
L_104eaf63:;
  /* 104eaf63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eaf66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eaf69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eaf6c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 104eaf6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eaf71 jle 0x104eaf93 */
  if ((C.zf||C.sf!=C.of)) goto L_104eaf93;
  /* 104eaf73 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104eaf76 push edx */
  push32((uint32_t)(EDX));
  /* 104eaf77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eaf7a push eax */
  push32((uint32_t)(EAX));
  /* 104eaf7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eaf7e push ecx */
  push32((uint32_t)(ECX));
  /* 104eaf7f call 0x104eaee0 */
  push32(0x104eaf84u); f_104eaee0();
  /* 104eaf84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eaf87 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104eaf8a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eaf8d jne 0x104eaf91 */
  if (!C.zf) goto L_104eaf91;
  /* 104eaf8f jmp 0x104eaf93 */
  goto L_104eaf93;
L_104eaf91:;
  /* 104eaf91 jmp 0x104eaf63 */
  goto L_104eaf63;
L_104eaf93:;
  /* 104eaf93 pop ebp */
  EBP = (pop32());
  /* 104eaf94 ret  */
  ESPCHK(0x104eaf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afa0 @ 0x104eafa0 (74 bytes, 31 insns) */
void f_104eafa0(void) {
  FTRACE(0x104eafa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eafa0 push ebp */
  push32((uint32_t)(EBP));
  /* 104eafa1 mov ebp, esp */
  EBP = (ESP);
  /* 104eafa3 push ecx */
  push32((uint32_t)(ECX));
L_104eafa4:;
  /* 104eafa4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eafa7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eafaa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eafad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 104eafb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eafb2 jle 0x104eafe6 */
  if ((C.zf||C.sf!=C.of)) goto L_104eafe6;
  /* 104eafb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104eafb7 push edx */
  push32((uint32_t)(EDX));
  /* 104eafb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eafbb push eax */
  push32((uint32_t)(EAX));
  /* 104eafbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eafbf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104eafc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104eafc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eafc8 push eax */
  push32((uint32_t)(EAX));
  /* 104eafc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eafcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eafcf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 104eafd2 call 0x104eaee0 */
  push32(0x104eafd7u); f_104eaee0();
  /* 104eafd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eafda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104eafdd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eafe0 jne 0x104eafe4 */
  if (!C.zf) goto L_104eafe4;
  /* 104eafe2 jmp 0x104eafe6 */
  goto L_104eafe6;
L_104eafe4:;
  /* 104eafe4 jmp 0x104eafa4 */
  goto L_104eafa4;
L_104eafe6:;
  /* 104eafe6 mov esp, ebp */
  ESP = (EBP);
  /* 104eafe8 pop ebp */
  EBP = (pop32());
  /* 104eafe9 ret  */
  ESPCHK(0x104eafa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aff0 @ 0x104eaff0 (26 bytes, 12 insns) */
void f_104eaff0(void) {
  FTRACE(0x104eaff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eaff0 push ebp */
  push32((uint32_t)(EBP));
  /* 104eaff1 mov ebp, esp */
  EBP = (ESP);
  /* 104eaff3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eaff6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104eaff8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eaffb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eaffe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104eb000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb003 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104eb005 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 104eb008 pop ebp */
  EBP = (pop32());
  /* 104eb009 ret  */
  ESPCHK(0x104eaff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b010 @ 0x104eb010 (31 bytes, 14 insns) */
void f_104eb010(void) {
  FTRACE(0x104eb010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eb010 push ebp */
  push32((uint32_t)(EBP));
  /* 104eb011 mov ebp, esp */
  EBP = (ESP);
  /* 104eb013 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb016 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104eb018 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb01b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb01e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104eb020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb023 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104eb025 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eb028 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 104eb02a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104eb02d pop ebp */
  EBP = (pop32());
  /* 104eb02e ret  */
  ESPCHK(0x104eb010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b030 @ 0x104eb030 (27 bytes, 12 insns) */
void f_104eb030(void) {
  FTRACE(0x104eb030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eb030 push ebp */
  push32((uint32_t)(EBP));
  /* 104eb031 mov ebp, esp */
  EBP = (ESP);
  /* 104eb033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb036 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104eb038 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb03b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb03e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104eb040 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb043 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104eb045 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 104eb049 pop ebp */
  EBP = (pop32());
  /* 104eb04a ret  */
  ESPCHK(0x104eb030u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x104eb050 (145 bytes, 42 insns) */
void f_104eb050(void) {
  FTRACE(0x104eb050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eb050 push ebp */
  push32((uint32_t)(EBP));
  /* 104eb051 mov ebp, esp */
  EBP = (ESP);
  /* 104eb053 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb054 call 0x104eb100 */
  push32(0x104eb059u); f_104eb100();
  /* 104eb059 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb05c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104eb05e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104eb065 jmp 0x104eb070 */
  goto L_104eb070;
L_104eb067:;
  /* 104eb067 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eb06a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb06d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104eb070:;
  /* 104eb070 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb074 jae 0x104eb09a */
  if (!C.cf) goto L_104eb09a;
  /* 104eb076 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eb079 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb07c cmp ecx, dword ptr [eax*8 + 0x1050dfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1050dfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb083 jne 0x104eb098 */
  if (!C.zf) goto L_104eb098;
  /* 104eb085 call 0x104eb0f0 */
  push32(0x104eb08au); f_104eb0f0();
  /* 104eb08a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eb08d mov ecx, dword ptr [edx*8 + 0x1050dfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1050dfbc)));
  /* 104eb094 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104eb096 jmp 0x104eb0dd */
  goto L_104eb0dd;
L_104eb098:;
  /* 104eb098 jmp 0x104eb067 */
  goto L_104eb067;
L_104eb09a:;
  /* 104eb09a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb09e jb 0x104eb0b3 */
  if (C.cf) goto L_104eb0b3;
  /* 104eb0a0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb0a4 ja 0x104eb0b3 */
  if ((!C.cf&&!C.zf)) goto L_104eb0b3;
  /* 104eb0a6 call 0x104eb0f0 */
  push32(0x104eb0abu); f_104eb0f0();
  /* 104eb0ab mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 104eb0b1 jmp 0x104eb0dd */
  goto L_104eb0dd;
L_104eb0b3:;
  /* 104eb0b3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb0ba jb 0x104eb0d2 */
  if (C.cf) goto L_104eb0d2;
  /* 104eb0bc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb0c3 ja 0x104eb0d2 */
  if ((!C.cf&&!C.zf)) goto L_104eb0d2;
  /* 104eb0c5 call 0x104eb0f0 */
  push32(0x104eb0cau); f_104eb0f0();
  /* 104eb0ca mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 104eb0d0 jmp 0x104eb0dd */
  goto L_104eb0dd;
L_104eb0d2:;
  /* 104eb0d2 call 0x104eb0f0 */
  push32(0x104eb0d7u); f_104eb0f0();
  /* 104eb0d7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_104eb0dd:;
  /* 104eb0dd mov esp, ebp */
  ESP = (EBP);
  /* 104eb0df pop ebp */
  EBP = (pop32());
  /* 104eb0e0 ret  */
  ESPCHK(0x104eb050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0f0 @ 0x104eb0f0 (13 bytes, 6 insns) */
void f_104eb0f0(void) {
  FTRACE(0x104eb0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eb0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104eb0f1 mov ebp, esp */
  EBP = (ESP);
  /* 104eb0f3 call 0x104e2c60 */
  push32(0x104eb0f8u); f_104e2c60();
  /* 104eb0f8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb0fb pop ebp */
  EBP = (pop32());
  /* 104eb0fc ret  */
  ESPCHK(0x104eb0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b100 @ 0x104eb100 (13 bytes, 6 insns) */
void f_104eb100(void) {
  FTRACE(0x104eb100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eb100 push ebp */
  push32((uint32_t)(EBP));
  /* 104eb101 mov ebp, esp */
  EBP = (ESP);
  /* 104eb103 call 0x104e2c60 */
  push32(0x104eb108u); f_104e2c60();
  /* 104eb108 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb10b pop ebp */
  EBP = (pop32());
  /* 104eb10c ret  */
  ESPCHK(0x104eb100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b110 @ 0x104eb110 (664 bytes, 261 insns) [15 switch table(s)] */
void f_104eb110(void) {
  FTRACE(0x104eb110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eb110 push ebp */
  push32((uint32_t)(EBP));
  /* 104eb111 mov ebp, esp */
  EBP = (ESP);
  /* 104eb113 push edi */
  push32((uint32_t)(EDI));
  /* 104eb114 push esi */
  push32((uint32_t)(ESI));
  /* 104eb115 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104eb118 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eb11b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb11e mov eax, ecx */
  EAX = (ECX);
  /* 104eb120 mov edx, ecx */
  EDX = (ECX);
  /* 104eb122 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb124 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb126 jbe 0x104eb130 */
  if ((C.cf||C.zf)) goto L_104eb130;
  /* 104eb128 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb12a jb 0x104eb2a8 */
  if (C.cf) goto L_104eb2a8;
L_104eb130:;
  /* 104eb130 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 104eb136 jne 0x104eb14c */
  if (!C.zf) goto L_104eb14c;
  /* 104eb138 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104eb13b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 104eb13e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb141 jb 0x104eb16c */
  if (C.cf) goto L_104eb16c;
  /* 104eb143 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104eb145 jmp dword ptr [edx*4 + 0x104eb258] */
  switch (EDX) {
    case 0: goto L_104eb268;
    case 1: goto L_104eb270;
    case 2: goto L_104eb27c;
    case 3: goto L_104eb290;
    default: x86_unimpl("switch@0x104eb145 out of table"); return;
  }
L_104eb14c:;
  /* 104eb14c mov eax, edi */
  EAX = (EDI);
  /* 104eb14e mov edx, 3 */
  EDX = (0x3u);
  /* 104eb153 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eb156 jb 0x104eb164 */
  if (C.cf) goto L_104eb164;
  /* 104eb158 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 104eb15b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb15d jmp dword ptr [eax*4 + 0x104eb170] */
  switch (EAX) {
    case 1: goto L_104eb180;
    case 2: goto L_104eb1ac;
    case 3: goto L_104eb1d0;
    default: x86_unimpl("switch@0x104eb15d out of table"); return;
  }
L_104eb164:;
  /* 104eb164 jmp dword ptr [ecx*4 + 0x104eb268] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x104eb268)))); return;
  /* 104eb16b nop  */
  /* nop */
L_104eb16c:;
  /* 104eb16c jmp dword ptr [ecx*4 + 0x104eb1ec] */
  switch (ECX) {
    case 0: goto L_104eb24f;
    case 1: goto L_104eb23c;
    case 2: goto L_104eb234;
    case 3: goto L_104eb22c;
    case 4: goto L_104eb224;
    case 5: goto L_104eb21c;
    case 6: goto L_104eb214;
    case 7: goto L_104eb20c;
    default: x86_unimpl("switch@0x104eb16c out of table"); return;
  }
  /* 104eb173 nop  */
  /* nop */
L_104eb180:;
  /* 104eb180 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104eb182 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104eb184 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104eb186 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104eb189 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104eb18c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104eb18f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104eb192 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104eb195 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb198 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb19b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb19e jb 0x104eb16c */
  if (C.cf) goto L_104eb16c;
  /* 104eb1a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104eb1a2 jmp dword ptr [edx*4 + 0x104eb258] */
  switch (EDX) {
    case 0: goto L_104eb268;
    case 1: goto L_104eb270;
    case 2: goto L_104eb27c;
    case 3: goto L_104eb290;
    default: x86_unimpl("switch@0x104eb1a2 out of table"); return;
  }
  /* 104eb1a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104eb1ac:;
  /* 104eb1ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104eb1ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104eb1b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104eb1b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104eb1b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104eb1b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104eb1bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb1be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb1c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb1c4 jb 0x104eb16c */
  if (C.cf) goto L_104eb16c;
  /* 104eb1c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104eb1c8 jmp dword ptr [edx*4 + 0x104eb258] */
  switch (EDX) {
    case 0: goto L_104eb268;
    case 1: goto L_104eb270;
    case 2: goto L_104eb27c;
    case 3: goto L_104eb290;
    default: x86_unimpl("switch@0x104eb1c8 out of table"); return;
  }
  /* 104eb1cf nop  */
  /* nop */
L_104eb1d0:;
  /* 104eb1d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104eb1d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104eb1d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104eb1d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104eb1d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104eb1da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104eb1db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb1de jb 0x104eb16c */
  if (C.cf) goto L_104eb16c;
  /* 104eb1e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104eb1e2 jmp dword ptr [edx*4 + 0x104eb258] */
  switch (EDX) {
    case 0: goto L_104eb268;
    case 1: goto L_104eb270;
    case 2: goto L_104eb27c;
    case 3: goto L_104eb290;
    default: x86_unimpl("switch@0x104eb1e2 out of table"); return;
  }
  /* 104eb1e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104eb20c:;
  /* 104eb20c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 104eb210 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_104eb214:;
  /* 104eb214 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 104eb218 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_104eb21c:;
  /* 104eb21c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 104eb220 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_104eb224:;
  /* 104eb224 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 104eb228 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_104eb22c:;
  /* 104eb22c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 104eb230 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_104eb234:;
  /* 104eb234 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 104eb238 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_104eb23c:;
  /* 104eb23c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 104eb240 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 104eb244 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 104eb24b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb24d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_104eb24f:;
  /* 104eb24f jmp dword ptr [edx*4 + 0x104eb258] */
  switch (EDX) {
    case 0: goto L_104eb268;
    case 1: goto L_104eb270;
    case 2: goto L_104eb27c;
    case 3: goto L_104eb290;
    default: x86_unimpl("switch@0x104eb24f out of table"); return;
  }
  /* 104eb256 mov edi, edi */
  EDI = (EDI);
L_104eb268:;
  /* 104eb268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb26b pop esi */
  ESI = (pop32());
  /* 104eb26c pop edi */
  EDI = (pop32());
  /* 104eb26d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104eb26e ret  */
  ESPCHK(0x104eb110u, _esp0);
  ESP += 4; return;
  /* 104eb26f nop  */
  /* nop */
L_104eb270:;
  /* 104eb270 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104eb272 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104eb274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb277 pop esi */
  ESI = (pop32());
  /* 104eb278 pop edi */
  EDI = (pop32());
  /* 104eb279 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104eb27a ret  */
  ESPCHK(0x104eb110u, _esp0);
  ESP += 4; return;
  /* 104eb27b nop  */
  /* nop */
L_104eb27c:;
  /* 104eb27c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104eb27e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104eb280 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104eb283 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104eb286 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb289 pop esi */
  ESI = (pop32());
  /* 104eb28a pop edi */
  EDI = (pop32());
  /* 104eb28b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104eb28c ret  */
  ESPCHK(0x104eb110u, _esp0);
  ESP += 4; return;
  /* 104eb28d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104eb290:;
  /* 104eb290 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104eb292 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104eb294 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104eb297 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104eb29a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104eb29d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104eb2a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb2a3 pop esi */
  ESI = (pop32());
  /* 104eb2a4 pop edi */
  EDI = (pop32());
  /* 104eb2a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104eb2a6 ret  */
  ESPCHK(0x104eb110u, _esp0);
  ESP += 4; return;
  /* 104eb2a7 nop  */
  /* nop */
L_104eb2a8:;
  /* 104eb2a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 104eb2ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 104eb2b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 104eb2b6 jne 0x104eb2dc */
  if (!C.zf) goto L_104eb2dc;
  /* 104eb2b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104eb2bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 104eb2be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb2c1 jb 0x104eb2d0 */
  if (C.cf) goto L_104eb2d0;
  /* 104eb2c3 std  */
  C.df=1;
  /* 104eb2c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104eb2c6 cld  */
  C.df=0;
  /* 104eb2c7 jmp dword ptr [edx*4 + 0x104eb3f0] */
  switch (EDX) {
    case 0: goto L_104eb400;
    case 1: goto L_104eb408;
    case 2: goto L_104eb418;
    case 3: goto L_104eb42c;
    default: x86_unimpl("switch@0x104eb2c7 out of table"); return;
  }
  /* 104eb2ce mov edi, edi */
  EDI = (EDI);
L_104eb2d0:;
  /* 104eb2d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104eb2d2 jmp dword ptr [ecx*4 + 0x104eb3a0] */
  switch (ECX) {
    case 0: goto L_104eb3e7;
    default: x86_unimpl("switch@0x104eb2d2 out of table"); return;
  }
  /* 104eb2d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104eb2dc:;
  /* 104eb2dc mov eax, edi */
  EAX = (EDI);
  /* 104eb2de mov edx, 3 */
  EDX = (0x3u);
  /* 104eb2e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb2e6 jb 0x104eb2f4 */
  if (C.cf) goto L_104eb2f4;
  /* 104eb2e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 104eb2eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eb2ed jmp dword ptr [eax*4 + 0x104eb2f8] */
  switch (EAX) {
    case 1: goto L_104eb308;
    case 2: goto L_104eb328;
    case 3: goto L_104eb350;
    default: x86_unimpl("switch@0x104eb2ed out of table"); return;
  }
L_104eb2f4:;
  /* 104eb2f4 jmp dword ptr [ecx*4 + 0x104eb3f0] */
  switch (ECX) {
    case 0: goto L_104eb400;
    case 1: goto L_104eb408;
    case 2: goto L_104eb418;
    case 3: goto L_104eb42c;
    default: x86_unimpl("switch@0x104eb2f4 out of table"); return;
  }
  /* 104eb2fb nop  */
  /* nop */
L_104eb308:;
  /* 104eb308 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104eb30b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104eb30d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104eb310 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 104eb311 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104eb314 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 104eb315 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb318 jb 0x104eb2d0 */
  if (C.cf) goto L_104eb2d0;
  /* 104eb31a std  */
  C.df=1;
  /* 104eb31b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104eb31d cld  */
  C.df=0;
  /* 104eb31e jmp dword ptr [edx*4 + 0x104eb3f0] */
  switch (EDX) {
    case 0: goto L_104eb400;
    case 1: goto L_104eb408;
    case 2: goto L_104eb418;
    case 3: goto L_104eb42c;
    default: x86_unimpl("switch@0x104eb31e out of table"); return;
  }
  /* 104eb325 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104eb328:;
  /* 104eb328 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104eb32b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104eb32d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104eb330 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104eb333 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104eb336 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104eb339 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eb33c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eb33f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb342 jb 0x104eb2d0 */
  if (C.cf) goto L_104eb2d0;
  /* 104eb344 std  */
  C.df=1;
  /* 104eb345 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104eb347 cld  */
  C.df=0;
  /* 104eb348 jmp dword ptr [edx*4 + 0x104eb3f0] */
  switch (EDX) {
    case 0: goto L_104eb400;
    case 1: goto L_104eb408;
    case 2: goto L_104eb418;
    case 3: goto L_104eb42c;
    default: x86_unimpl("switch@0x104eb348 out of table"); return;
  }
  /* 104eb34f nop  */
  /* nop */
L_104eb350:;
  /* 104eb350 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104eb353 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104eb355 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104eb358 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104eb35b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104eb35e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104eb361 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104eb364 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104eb367 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eb36a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eb36d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb370 jb 0x104eb2d0 */
  if (C.cf) goto L_104eb2d0;
  /* 104eb376 std  */
  C.df=1;
  /* 104eb377 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104eb379 cld  */
  C.df=0;
  /* 104eb37a jmp dword ptr [edx*4 + 0x104eb3f0] */
  switch (EDX) {
    case 0: goto L_104eb400;
    case 1: goto L_104eb408;
    case 2: goto L_104eb418;
    case 3: goto L_104eb42c;
    default: x86_unimpl("switch@0x104eb37a out of table"); return;
  }
  /* 104eb381 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 104eb384 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 104eb385 mov bl, 0x4e */
  BL = (0x4eu);
  /* 104eb387 adc byte ptr [ebx + esi*4 - 0x4c4befb2], ch */
  { uint32_t _a=(r8((uint32_t)(EBX + ESI*4 + -0x4c4befb2))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + ESI*4 + -0x4c4befb2), (_r)); fl_add(_a,_b,_r,8); }
  /* 104eb38e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 104eb38f adc byte ptr [ebx + esi*4 - 0x4c3befb2], bh */
  { uint32_t _a=(r8((uint32_t)(EBX + ESI*4 + -0x4c3befb2))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + ESI*4 + -0x4c3befb2), (_r)); fl_add(_a,_b,_r,8); }
  /* 104eb396 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 104eb397 adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 104eb399 mov bl, 0x4e */
  BL = (0x4eu);
  /* 104eb39b adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 104eb39d mov bl, 0x4e */
  BL = (0x4eu);
  /* 104eb3a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 104eb3a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 104eb3ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 104eb3b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 104eb3b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 104eb3b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 104eb3bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 104eb3c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 104eb3c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 104eb3c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 104eb3cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 104eb3d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 104eb3d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 104eb3d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 104eb3dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 104eb3e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb3e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_104eb3e7:;
  /* 104eb3e7 jmp dword ptr [edx*4 + 0x104eb3f0] */
  switch (EDX) {
    case 0: goto L_104eb400;
    case 1: goto L_104eb408;
    case 2: goto L_104eb418;
    case 3: goto L_104eb42c;
    default: x86_unimpl("switch@0x104eb3e7 out of table"); return;
  }
  /* 104eb3ee mov edi, edi */
  EDI = (EDI);
L_104eb400:;
  /* 104eb400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb403 pop esi */
  ESI = (pop32());
  /* 104eb404 pop edi */
  EDI = (pop32());
  /* 104eb405 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104eb406 ret  */
  ESPCHK(0x104eb110u, _esp0);
  ESP += 4; return;
  /* 104eb407 nop  */
  /* nop */
L_104eb408:;
  /* 104eb408 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104eb40b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104eb40e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb411 pop esi */
  ESI = (pop32());
  /* 104eb412 pop edi */
  EDI = (pop32());
  /* 104eb413 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104eb414 ret  */
  ESPCHK(0x104eb110u, _esp0);
  ESP += 4; return;
  /* 104eb415 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104eb418:;
  /* 104eb418 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104eb41b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104eb41e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104eb421 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104eb424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb427 pop esi */
  ESI = (pop32());
  /* 104eb428 pop edi */
  EDI = (pop32());
  /* 104eb429 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104eb42a ret  */
  ESPCHK(0x104eb110u, _esp0);
  ESP += 4; return;
  /* 104eb42b nop  */
  /* nop */
L_104eb42c:;
  /* 104eb42c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104eb42f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104eb432 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 104eb435 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 104eb438 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 104eb43b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 104eb43e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb441 pop esi */
  ESI = (pop32());
  /* 104eb442 pop edi */
  EDI = (pop32());
  /* 104eb443 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104eb444 ret  */
  ESPCHK(0x104eb110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b450 @ 0x104eb450 (421 bytes, 148 insns) */
void f_104eb450(void) {
  FTRACE(0x104eb450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eb450 push ebp */
  push32((uint32_t)(EBP));
  /* 104eb451 mov ebp, esp */
  EBP = (ESP);
  /* 104eb453 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104eb455 push 0x1050b028 */
  push32((uint32_t)(0x1050b028u));
  /* 104eb45a push 0x104ec328 */
  push32((uint32_t)(0x104ec328u));
  /* 104eb45f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 104eb465 push eax */
  push32((uint32_t)(EAX));
  /* 104eb466 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 104eb46d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb470 push ebx */
  push32((uint32_t)(EBX));
  /* 104eb471 push esi */
  push32((uint32_t)(ESI));
  /* 104eb472 push edi */
  push32((uint32_t)(EDI));
  /* 104eb473 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104eb476 cmp dword ptr [0x1050f6b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb47d jne 0x104eb4ce */
  if (!C.zf) goto L_104eb4ce;
  /* 104eb47f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 104eb482 push eax */
  push32((uint32_t)(EAX));
  /* 104eb483 push 1 */
  push32((uint32_t)(0x1u));
  /* 104eb485 push 0x1050b024 */
  push32((uint32_t)(0x1050b024u));
  /* 104eb48a push 1 */
  push32((uint32_t)(0x1u));
  /* 104eb48c call dword ptr [0x10512344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512344))), 0x104eb492u);
  /* 104eb492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eb494 je 0x104eb4a2 */
  if (C.zf) goto L_104eb4a2;
  /* 104eb496 mov dword ptr [0x1050f6b4], 1 */
  w32((uint32_t)(0x1050f6b4), (0x1u));
  /* 104eb4a0 jmp 0x104eb4ce */
  goto L_104eb4ce;
L_104eb4a2:;
  /* 104eb4a2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 104eb4a5 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb4a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 104eb4a8 push 0x1050b020 */
  push32((uint32_t)(0x1050b020u));
  /* 104eb4ad push 1 */
  push32((uint32_t)(0x1u));
  /* 104eb4af push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb4b1 call dword ptr [0x10512340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512340))), 0x104eb4b7u);
  /* 104eb4b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eb4b9 je 0x104eb4c7 */
  if (C.zf) goto L_104eb4c7;
  /* 104eb4bb mov dword ptr [0x1050f6b4], 2 */
  w32((uint32_t)(0x1050f6b4), (0x2u));
  /* 104eb4c5 jmp 0x104eb4ce */
  goto L_104eb4ce;
L_104eb4c7:;
  /* 104eb4c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb4c9 jmp 0x104eb5f8 */
  goto L_104eb5f8;
L_104eb4ce:;
  /* 104eb4ce cmp dword ptr [0x1050f6b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb4d5 jne 0x104eb505 */
  if (!C.zf) goto L_104eb505;
  /* 104eb4d7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb4db jne 0x104eb4e6 */
  if (!C.zf) goto L_104eb4e6;
  /* 104eb4dd mov edx, dword ptr [0x1050f6c0] */
  EDX = (r32((uint32_t)(0x1050f6c0)));
  /* 104eb4e3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_104eb4e6:;
  /* 104eb4e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104eb4e9 push eax */
  push32((uint32_t)(EAX));
  /* 104eb4ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eb4ed push ecx */
  push32((uint32_t)(ECX));
  /* 104eb4ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eb4f1 push edx */
  push32((uint32_t)(EDX));
  /* 104eb4f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb4f5 push eax */
  push32((uint32_t)(EAX));
  /* 104eb4f6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104eb4f9 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb4fa call dword ptr [0x10512340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512340))), 0x104eb500u);
  /* 104eb500 jmp 0x104eb5f8 */
  goto L_104eb5f8;
L_104eb505:;
  /* 104eb505 cmp dword ptr [0x1050f6b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb50c jne 0x104eb5f6 */
  if (!C.zf) goto L_104eb5f6;
  /* 104eb512 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb516 jne 0x104eb521 */
  if (!C.zf) goto L_104eb521;
  /* 104eb518 mov edx, dword ptr [0x1050f6d0] */
  EDX = (r32((uint32_t)(0x1050f6d0)));
  /* 104eb51e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_104eb521:;
  /* 104eb521 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb523 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb525 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eb528 push eax */
  push32((uint32_t)(EAX));
  /* 104eb529 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eb52c push ecx */
  push32((uint32_t)(ECX));
  /* 104eb52d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 104eb530 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104eb532 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eb534 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 104eb537 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb53a push edx */
  push32((uint32_t)(EDX));
  /* 104eb53b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104eb53e push eax */
  push32((uint32_t)(EAX));
  /* 104eb53f call dword ptr [0x1051233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051233c))), 0x104eb545u);
  /* 104eb545 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104eb548 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb54c jne 0x104eb555 */
  if (!C.zf) goto L_104eb555;
  /* 104eb54e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb550 jmp 0x104eb5f8 */
  goto L_104eb5f8;
L_104eb555:;
  /* 104eb555 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104eb55c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eb55f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104eb561 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb564 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104eb566 call 0x104e63c0 */
  push32(0x104eb56bu); f_104e63c0();
  /* 104eb56b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 104eb56e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104eb571 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104eb574 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104eb577 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eb57a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 104eb57c push edx */
  push32((uint32_t)(EDX));
  /* 104eb57d push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb57f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104eb582 push eax */
  push32((uint32_t)(EAX));
  /* 104eb583 call 0x104e6f90 */
  push32(0x104eb588u); f_104e6f90();
  /* 104eb588 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb58b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104eb592 jmp 0x104eb5ab */
  goto L_104eb5ab;
  /* 104eb594 mov eax, 1 */
  EAX = (0x1u);
  /* 104eb599 ret  */
  ESPCHK(0x104eb450u, _esp0);
  ESP += 4; return;
  /* 104eb59a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104eb59d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104eb5a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104eb5ab:;
  /* 104eb5ab cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb5af jne 0x104eb5b5 */
  if (!C.zf) goto L_104eb5b5;
  /* 104eb5b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb5b3 jmp 0x104eb5f8 */
  goto L_104eb5f8;
L_104eb5b5:;
  /* 104eb5b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eb5b8 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb5b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104eb5bc push edx */
  push32((uint32_t)(EDX));
  /* 104eb5bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eb5c0 push eax */
  push32((uint32_t)(EAX));
  /* 104eb5c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eb5c4 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb5c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 104eb5c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104eb5ca push edx */
  push32((uint32_t)(EDX));
  /* 104eb5cb call dword ptr [0x1051233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051233c))), 0x104eb5d1u);
  /* 104eb5d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104eb5d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb5d8 jne 0x104eb5de */
  if (!C.zf) goto L_104eb5de;
  /* 104eb5da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb5dc jmp 0x104eb5f8 */
  goto L_104eb5f8;
L_104eb5de:;
  /* 104eb5de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104eb5e1 push eax */
  push32((uint32_t)(EAX));
  /* 104eb5e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104eb5e5 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb5e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104eb5e9 push edx */
  push32((uint32_t)(EDX));
  /* 104eb5ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb5ed push eax */
  push32((uint32_t)(EAX));
  /* 104eb5ee call dword ptr [0x10512344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512344))), 0x104eb5f4u);
  /* 104eb5f4 jmp 0x104eb5f8 */
  goto L_104eb5f8;
L_104eb5f6:;
  /* 104eb5f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104eb5f8:;
  /* 104eb5f8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 104eb5fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104eb5fe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104eb605 pop edi */
  EDI = (pop32());
  /* 104eb606 pop esi */
  ESI = (pop32());
  /* 104eb607 pop ebx */
  EBX = (pop32());
  /* 104eb608 mov esp, ebp */
  ESP = (EBP);
  /* 104eb60a pop ebp */
  EBP = (pop32());
  /* 104eb60b ret  */
  ESPCHK(0x104eb450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b610 @ 0x104eb610 (727 bytes, 263 insns) */
void f_104eb610(void) {
  FTRACE(0x104eb610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eb610 push ebp */
  push32((uint32_t)(EBP));
  /* 104eb611 mov ebp, esp */
  EBP = (ESP);
  /* 104eb613 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104eb615 push 0x1050b038 */
  push32((uint32_t)(0x1050b038u));
  /* 104eb61a push 0x104ec328 */
  push32((uint32_t)(0x104ec328u));
  /* 104eb61f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 104eb625 push eax */
  push32((uint32_t)(EAX));
  /* 104eb626 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 104eb62d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb630 push ebx */
  push32((uint32_t)(EBX));
  /* 104eb631 push esi */
  push32((uint32_t)(ESI));
  /* 104eb632 push edi */
  push32((uint32_t)(EDI));
  /* 104eb633 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104eb636 cmp dword ptr [0x1050f6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb63d jne 0x104eb696 */
  if (!C.zf) goto L_104eb696;
  /* 104eb63f push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb641 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb643 push 1 */
  push32((uint32_t)(0x1u));
  /* 104eb645 push 0x1050b024 */
  push32((uint32_t)(0x1050b024u));
  /* 104eb64a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104eb64f push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb651 call dword ptr [0x1051234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051234c))), 0x104eb657u);
  /* 104eb657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eb659 je 0x104eb667 */
  if (C.zf) goto L_104eb667;
  /* 104eb65b mov dword ptr [0x1050f6d8], 1 */
  w32((uint32_t)(0x1050f6d8), (0x1u));
  /* 104eb665 jmp 0x104eb696 */
  goto L_104eb696;
L_104eb667:;
  /* 104eb667 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb669 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb66b push 1 */
  push32((uint32_t)(0x1u));
  /* 104eb66d push 0x1050b020 */
  push32((uint32_t)(0x1050b020u));
  /* 104eb672 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104eb677 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb679 call dword ptr [0x10512348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512348))), 0x104eb67fu);
  /* 104eb67f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eb681 je 0x104eb68f */
  if (C.zf) goto L_104eb68f;
  /* 104eb683 mov dword ptr [0x1050f6d8], 2 */
  w32((uint32_t)(0x1050f6d8), (0x2u));
  /* 104eb68d jmp 0x104eb696 */
  goto L_104eb696;
L_104eb68f:;
  /* 104eb68f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb691 jmp 0x104eb901 */
  goto L_104eb901;
L_104eb696:;
  /* 104eb696 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb69a jle 0x104eb6af */
  if ((C.zf||C.sf!=C.of)) goto L_104eb6af;
  /* 104eb69c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104eb69f push eax */
  push32((uint32_t)(EAX));
  /* 104eb6a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eb6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb6a4 call 0x104eb920 */
  push32(0x104eb6a9u); f_104eb920();
  /* 104eb6a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb6ac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_104eb6af:;
  /* 104eb6af cmp dword ptr [0x1050f6d8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6d8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb6b6 jne 0x104eb6db */
  if (!C.zf) goto L_104eb6db;
  /* 104eb6b8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104eb6bb push edx */
  push32((uint32_t)(EDX));
  /* 104eb6bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104eb6bf push eax */
  push32((uint32_t)(EAX));
  /* 104eb6c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104eb6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb6c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eb6c7 push edx */
  push32((uint32_t)(EDX));
  /* 104eb6c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eb6cb push eax */
  push32((uint32_t)(EAX));
  /* 104eb6cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb6cf push ecx */
  push32((uint32_t)(ECX));
  /* 104eb6d0 call dword ptr [0x10512348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512348))), 0x104eb6d6u);
  /* 104eb6d6 jmp 0x104eb901 */
  goto L_104eb901;
L_104eb6db:;
  /* 104eb6db cmp dword ptr [0x1050f6d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb6e2 jne 0x104eb8ff */
  if (!C.zf) goto L_104eb8ff;
  /* 104eb6e8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb6ec jne 0x104eb6f7 */
  if (!C.zf) goto L_104eb6f7;
  /* 104eb6ee mov edx, dword ptr [0x1050f6d0] */
  EDX = (r32((uint32_t)(0x1050f6d0)));
  /* 104eb6f4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_104eb6f7:;
  /* 104eb6f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb6f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb6fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104eb6fe push eax */
  push32((uint32_t)(EAX));
  /* 104eb6ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eb702 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb703 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 104eb706 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104eb708 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eb70a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 104eb70d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb710 push edx */
  push32((uint32_t)(EDX));
  /* 104eb711 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 104eb714 push eax */
  push32((uint32_t)(EAX));
  /* 104eb715 call dword ptr [0x1051233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051233c))), 0x104eb71bu);
  /* 104eb71b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104eb71e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb722 jne 0x104eb72b */
  if (!C.zf) goto L_104eb72b;
  /* 104eb724 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb726 jmp 0x104eb901 */
  goto L_104eb901;
L_104eb72b:;
  /* 104eb72b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104eb732 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104eb735 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104eb737 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb73a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104eb73c call 0x104e63c0 */
  push32(0x104eb741u); f_104e63c0();
  /* 104eb741 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 104eb744 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104eb747 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104eb74a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104eb74d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104eb754 jmp 0x104eb76d */
  goto L_104eb76d;
  /* 104eb756 mov eax, 1 */
  EAX = (0x1u);
  /* 104eb75b ret  */
  ESPCHK(0x104eb610u, _esp0);
  ESP += 4; return;
  /* 104eb75c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104eb75f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104eb766 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104eb76d:;
  /* 104eb76d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb771 jne 0x104eb77a */
  if (!C.zf) goto L_104eb77a;
  /* 104eb773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb775 jmp 0x104eb901 */
  goto L_104eb901;
L_104eb77a:;
  /* 104eb77a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104eb77d push edx */
  push32((uint32_t)(EDX));
  /* 104eb77e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104eb781 push eax */
  push32((uint32_t)(EAX));
  /* 104eb782 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104eb785 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb786 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eb789 push edx */
  push32((uint32_t)(EDX));
  /* 104eb78a push 1 */
  push32((uint32_t)(0x1u));
  /* 104eb78c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 104eb78f push eax */
  push32((uint32_t)(EAX));
  /* 104eb790 call dword ptr [0x1051233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051233c))), 0x104eb796u);
  /* 104eb796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eb798 jne 0x104eb7a1 */
  if (!C.zf) goto L_104eb7a1;
  /* 104eb79a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb79c jmp 0x104eb901 */
  goto L_104eb901;
L_104eb7a1:;
  /* 104eb7a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb7a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb7a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104eb7a8 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb7a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104eb7ac push edx */
  push32((uint32_t)(EDX));
  /* 104eb7ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eb7b0 push eax */
  push32((uint32_t)(EAX));
  /* 104eb7b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb7b4 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb7b5 call dword ptr [0x1051234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051234c))), 0x104eb7bbu);
  /* 104eb7bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104eb7be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb7c2 jne 0x104eb7cb */
  if (!C.zf) goto L_104eb7cb;
  /* 104eb7c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb7c6 jmp 0x104eb901 */
  goto L_104eb901;
L_104eb7cb:;
  /* 104eb7cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eb7ce and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 104eb7d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104eb7d6 je 0x104eb81b */
  if (C.zf) goto L_104eb81b;
  /* 104eb7d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb7dc je 0x104eb816 */
  if (C.zf) goto L_104eb816;
  /* 104eb7de mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104eb7e1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb7e4 jle 0x104eb7ed */
  if ((C.zf||C.sf!=C.of)) goto L_104eb7ed;
  /* 104eb7e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb7e8 jmp 0x104eb901 */
  goto L_104eb901;
L_104eb7ed:;
  /* 104eb7ed mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104eb7f0 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb7f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104eb7f4 push edx */
  push32((uint32_t)(EDX));
  /* 104eb7f5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104eb7f8 push eax */
  push32((uint32_t)(EAX));
  /* 104eb7f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104eb7fc push ecx */
  push32((uint32_t)(ECX));
  /* 104eb7fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eb800 push edx */
  push32((uint32_t)(EDX));
  /* 104eb801 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb804 push eax */
  push32((uint32_t)(EAX));
  /* 104eb805 call dword ptr [0x1051234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051234c))), 0x104eb80bu);
  /* 104eb80b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eb80d jne 0x104eb816 */
  if (!C.zf) goto L_104eb816;
  /* 104eb80f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb811 jmp 0x104eb901 */
  goto L_104eb901;
L_104eb816:;
  /* 104eb816 jmp 0x104eb8fa */
  goto L_104eb8fa;
L_104eb81b:;
  /* 104eb81b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104eb81e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104eb821 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104eb828 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104eb82b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104eb82d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb830 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104eb832 call 0x104e63c0 */
  push32(0x104eb837u); f_104e63c0();
  /* 104eb837 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 104eb83a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104eb83d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 104eb840 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104eb843 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104eb84a jmp 0x104eb863 */
  goto L_104eb863;
  /* 104eb84c mov eax, 1 */
  EAX = (0x1u);
  /* 104eb851 ret  */
  ESPCHK(0x104eb610u, _esp0);
  ESP += 4; return;
  /* 104eb852 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104eb855 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104eb85c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104eb863:;
  /* 104eb863 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb867 jne 0x104eb870 */
  if (!C.zf) goto L_104eb870;
  /* 104eb869 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb86b jmp 0x104eb901 */
  goto L_104eb901;
L_104eb870:;
  /* 104eb870 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104eb873 push eax */
  push32((uint32_t)(EAX));
  /* 104eb874 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eb877 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb878 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104eb87b push edx */
  push32((uint32_t)(EDX));
  /* 104eb87c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104eb87f push eax */
  push32((uint32_t)(EAX));
  /* 104eb880 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eb883 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb884 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb887 push edx */
  push32((uint32_t)(EDX));
  /* 104eb888 call dword ptr [0x1051234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051234c))), 0x104eb88eu);
  /* 104eb88e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eb890 jne 0x104eb896 */
  if (!C.zf) goto L_104eb896;
  /* 104eb892 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb894 jmp 0x104eb901 */
  goto L_104eb901;
L_104eb896:;
  /* 104eb896 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb89a jne 0x104eb8ca */
  if (!C.zf) goto L_104eb8ca;
  /* 104eb89c push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb89e push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb8a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb8a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb8a4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104eb8a7 push eax */
  push32((uint32_t)(EAX));
  /* 104eb8a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eb8ab push ecx */
  push32((uint32_t)(ECX));
  /* 104eb8ac push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104eb8b1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 104eb8b4 push edx */
  push32((uint32_t)(EDX));
  /* 104eb8b5 call dword ptr [0x105122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f4))), 0x104eb8bbu);
  /* 104eb8bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104eb8be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb8c2 jne 0x104eb8c8 */
  if (!C.zf) goto L_104eb8c8;
  /* 104eb8c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb8c6 jmp 0x104eb901 */
  goto L_104eb901;
L_104eb8c8:;
  /* 104eb8c8 jmp 0x104eb8fa */
  goto L_104eb8fa;
L_104eb8ca:;
  /* 104eb8ca push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb8cc push 0 */
  push32((uint32_t)(0x0u));
  /* 104eb8ce mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104eb8d1 push eax */
  push32((uint32_t)(EAX));
  /* 104eb8d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104eb8d5 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb8d6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104eb8d9 push edx */
  push32((uint32_t)(EDX));
  /* 104eb8da mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eb8dd push eax */
  push32((uint32_t)(EAX));
  /* 104eb8de push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104eb8e3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 104eb8e6 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb8e7 call dword ptr [0x105122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f4))), 0x104eb8edu);
  /* 104eb8ed mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104eb8f0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb8f4 jne 0x104eb8fa */
  if (!C.zf) goto L_104eb8fa;
  /* 104eb8f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eb8f8 jmp 0x104eb901 */
  goto L_104eb901;
L_104eb8fa:;
  /* 104eb8fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104eb8fd jmp 0x104eb901 */
  goto L_104eb901;
L_104eb8ff:;
  /* 104eb8ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104eb901:;
  /* 104eb901 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 104eb904 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104eb907 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104eb90e pop edi */
  EDI = (pop32());
  /* 104eb90f pop esi */
  ESI = (pop32());
  /* 104eb910 pop ebx */
  EBX = (pop32());
  /* 104eb911 mov esp, ebp */
  ESP = (EBP);
  /* 104eb913 pop ebp */
  EBP = (pop32());
  /* 104eb914 ret  */
  ESPCHK(0x104eb610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b920 @ 0x104eb920 (80 bytes, 32 insns) */
void f_104eb920(void) {
  FTRACE(0x104eb920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eb920 push ebp */
  push32((uint32_t)(EBP));
  /* 104eb921 mov ebp, esp */
  EBP = (ESP);
  /* 104eb923 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eb926 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eb929 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104eb92c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb92f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104eb932:;
  /* 104eb932 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104eb935 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104eb938 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eb93b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104eb93e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104eb940 je 0x104eb957 */
  if (C.zf) goto L_104eb957;
  /* 104eb942 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eb945 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104eb948 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104eb94a je 0x104eb957 */
  if (C.zf) goto L_104eb957;
  /* 104eb94c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eb94f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb952 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104eb955 jmp 0x104eb932 */
  goto L_104eb932;
L_104eb957:;
  /* 104eb957 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eb95a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104eb95d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104eb95f jne 0x104eb969 */
  if (!C.zf) goto L_104eb969;
  /* 104eb961 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eb964 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eb967 jmp 0x104eb96c */
  goto L_104eb96c;
L_104eb969:;
  /* 104eb969 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_104eb96c:;
  /* 104eb96c mov esp, ebp */
  ESP = (EBP);
  /* 104eb96e pop ebp */
  EBP = (pop32());
  /* 104eb96f ret  */
  ESPCHK(0x104eb920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b970 @ 0x104eb970 (130 bytes, 43 insns) */
void f_104eb970(void) {
  FTRACE(0x104eb970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eb970 push ebp */
  push32((uint32_t)(EBP));
  /* 104eb971 mov ebp, esp */
  EBP = (ESP);
  /* 104eb973 push ecx */
  push32((uint32_t)(ECX));
  /* 104eb974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb977 cmp eax, dword ptr [0x10510fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10510fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eb97d jae 0x104eb9a1 */
  if (!C.cf) goto L_104eb9a1;
  /* 104eb97f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb982 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104eb985 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb988 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104eb98b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104eb98e mov eax, dword ptr [ecx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10510ea0)));
  /* 104eb995 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104eb99a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104eb99d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104eb99f jne 0x104eb9bc */
  if (!C.zf) goto L_104eb9bc;
L_104eb9a1:;
  /* 104eb9a1 call 0x104eb0f0 */
  push32(0x104eb9a6u); f_104eb0f0();
  /* 104eb9a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104eb9ac call 0x104eb100 */
  push32(0x104eb9b1u); f_104eb100();
  /* 104eb9b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104eb9b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104eb9ba jmp 0x104eb9ee */
  goto L_104eb9ee;
L_104eb9bc:;
  /* 104eb9bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb9bf push edx */
  push32((uint32_t)(EDX));
  /* 104eb9c0 call 0x104ec910 */
  push32(0x104eb9c5u); f_104ec910();
  /* 104eb9c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb9c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eb9cb push eax */
  push32((uint32_t)(EAX));
  /* 104eb9cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eb9cf push ecx */
  push32((uint32_t)(ECX));
  /* 104eb9d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb9d3 push edx */
  push32((uint32_t)(EDX));
  /* 104eb9d4 call 0x104eba00 */
  push32(0x104eb9d9u); f_104eba00();
  /* 104eb9d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb9dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104eb9df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eb9e2 push eax */
  push32((uint32_t)(EAX));
  /* 104eb9e3 call 0x104ec9a0 */
  push32(0x104eb9e8u); f_104ec9a0();
  /* 104eb9e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eb9eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104eb9ee:;
  /* 104eb9ee mov esp, ebp */
  ESP = (EBP);
  /* 104eb9f0 pop ebp */
  EBP = (pop32());
  /* 104eb9f1 ret  */
  ESPCHK(0x104eb970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba00 @ 0x104eba00 (178 bytes, 56 insns) */
void f_104eba00(void) {
  FTRACE(0x104eba00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eba00 push ebp */
  push32((uint32_t)(EBP));
  /* 104eba01 mov ebp, esp */
  EBP = (ESP);
  /* 104eba03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eba06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eba09 push eax */
  push32((uint32_t)(EAX));
  /* 104eba0a call 0x104ec790 */
  push32(0x104eba0fu); f_104ec790();
  /* 104eba0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eba12 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104eba15 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eba19 jne 0x104eba2e */
  if (!C.zf) goto L_104eba2e;
  /* 104eba1b call 0x104eb0f0 */
  push32(0x104eba20u); f_104eb0f0();
  /* 104eba20 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104eba26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104eba29 jmp 0x104ebaae */
  goto L_104ebaae;
L_104eba2e:;
  /* 104eba2e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eba31 push ecx */
  push32((uint32_t)(ECX));
  /* 104eba32 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eba34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eba37 push edx */
  push32((uint32_t)(EDX));
  /* 104eba38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104eba3b push eax */
  push32((uint32_t)(EAX));
  /* 104eba3c call dword ptr [0x10512350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512350))), 0x104eba42u);
  /* 104eba42 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104eba45 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eba49 jne 0x104eba56 */
  if (!C.zf) goto L_104eba56;
  /* 104eba4b call dword ptr [0x105122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122c8))), 0x104eba51u);
  /* 104eba51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104eba54 jmp 0x104eba5d */
  goto L_104eba5d;
L_104eba56:;
  /* 104eba56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104eba5d:;
  /* 104eba5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eba61 je 0x104eba74 */
  if (C.zf) goto L_104eba74;
  /* 104eba63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eba66 push ecx */
  push32((uint32_t)(ECX));
  /* 104eba67 call 0x104eb050 */
  push32(0x104eba6cu); f_104eb050();
  /* 104eba6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eba6f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104eba72 jmp 0x104ebaae */
  goto L_104ebaae;
L_104eba74:;
  /* 104eba74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eba77 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 104eba7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eba7d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 104eba80 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104eba83 mov ecx, dword ptr [edx*4 + 0x10510ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10510ea0)));
  /* 104eba8a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 104eba8e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 104eba91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eba94 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104eba97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eba9a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104eba9d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ebaa0 mov eax, dword ptr [eax*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10510ea0)));
  /* 104ebaa7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 104ebaab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104ebaae:;
  /* 104ebaae mov esp, ebp */
  ESP = (EBP);
  /* 104ebab0 pop ebp */
  EBP = (pop32());
  /* 104ebab1 ret  */
  ESPCHK(0x104eba00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bac0 @ 0x104ebac0 (130 bytes, 43 insns) */
void f_104ebac0(void) {
  FTRACE(0x104ebac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ebac0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ebac1 mov ebp, esp */
  EBP = (ESP);
  /* 104ebac3 push ecx */
  push32((uint32_t)(ECX));
  /* 104ebac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebac7 cmp eax, dword ptr [0x10510fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10510fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebacd jae 0x104ebaf1 */
  if (!C.cf) goto L_104ebaf1;
  /* 104ebacf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebad2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ebad5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebad8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ebadb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ebade mov eax, dword ptr [ecx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10510ea0)));
  /* 104ebae5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104ebaea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104ebaed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ebaef jne 0x104ebb0c */
  if (!C.zf) goto L_104ebb0c;
L_104ebaf1:;
  /* 104ebaf1 call 0x104eb0f0 */
  push32(0x104ebaf6u); f_104eb0f0();
  /* 104ebaf6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104ebafc call 0x104eb100 */
  push32(0x104ebb01u); f_104eb100();
  /* 104ebb01 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104ebb07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ebb0a jmp 0x104ebb3e */
  goto L_104ebb3e;
L_104ebb0c:;
  /* 104ebb0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebb0f push edx */
  push32((uint32_t)(EDX));
  /* 104ebb10 call 0x104ec910 */
  push32(0x104ebb15u); f_104ec910();
  /* 104ebb15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebb18 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ebb1b push eax */
  push32((uint32_t)(EAX));
  /* 104ebb1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ebb1f push ecx */
  push32((uint32_t)(ECX));
  /* 104ebb20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebb23 push edx */
  push32((uint32_t)(EDX));
  /* 104ebb24 call 0x104ebb50 */
  push32(0x104ebb29u); f_104ebb50();
  /* 104ebb29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebb2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ebb2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebb32 push eax */
  push32((uint32_t)(EAX));
  /* 104ebb33 call 0x104ec9a0 */
  push32(0x104ebb38u); f_104ec9a0();
  /* 104ebb38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebb3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104ebb3e:;
  /* 104ebb3e mov esp, ebp */
  ESP = (EBP);
  /* 104ebb40 pop ebp */
  EBP = (pop32());
  /* 104ebb41 ret  */
  ESPCHK(0x104ebac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb50 @ 0x104ebb50 (627 bytes, 182 insns) */
void f_104ebb50(void) {
  FTRACE(0x104ebb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ebb50 push ebp */
  push32((uint32_t)(EBP));
  /* 104ebb51 mov ebp, esp */
  EBP = (ESP);
  /* 104ebb53 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ebb59 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104ebb60 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ebb63 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 104ebb69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebb6d jne 0x104ebb76 */
  if (!C.zf) goto L_104ebb76;
  /* 104ebb6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ebb71 jmp 0x104ebdbf */
  goto L_104ebdbf;
L_104ebb76:;
  /* 104ebb76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebb79 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ebb7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebb7f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ebb82 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ebb85 mov eax, dword ptr [ecx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10510ea0)));
  /* 104ebb8c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104ebb91 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 104ebb94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ebb96 je 0x104ebba8 */
  if (C.zf) goto L_104ebba8;
  /* 104ebb98 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ebb9a push 0 */
  push32((uint32_t)(0x0u));
  /* 104ebb9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebb9f push edx */
  push32((uint32_t)(EDX));
  /* 104ebba0 call 0x104eba00 */
  push32(0x104ebba5u); f_104eba00();
  /* 104ebba5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ebba8:;
  /* 104ebba8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebbab sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ebbae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebbb1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104ebbb4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ebbb7 mov edx, dword ptr [eax*4 + 0x10510ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10510ea0)));
  /* 104ebbbe movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 104ebbc3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 104ebbc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ebbca je 0x104ebcdc */
  if (C.zf) goto L_104ebcdc;
  /* 104ebbd0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ebbd3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104ebbd6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_104ebbdd:;
  /* 104ebbdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebbe0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ebbe3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebbe6 jae 0x104ebcda */
  if (!C.cf) goto L_104ebcda;
  /* 104ebbec lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 104ebbf2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104ebbf5:;
  /* 104ebbf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ebbf8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 104ebbfe sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ebc00 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebc06 jge 0x104ebc67 */
  if ((C.sf==C.of)) goto L_104ebc67;
  /* 104ebc08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebc0b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ebc0e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebc11 jae 0x104ebc67 */
  if (!C.cf) goto L_104ebc67;
  /* 104ebc13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebc16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104ebc18 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 104ebc1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebc21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebc24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ebc27 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 104ebc2e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebc31 jne 0x104ebc51 */
  if (!C.zf) goto L_104ebc51;
  /* 104ebc33 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 104ebc39 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebc3c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 104ebc42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ebc45 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 104ebc48 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ebc4b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebc4e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104ebc51:;
  /* 104ebc51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ebc54 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 104ebc5a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 104ebc5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ebc5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebc62 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ebc65 jmp 0x104ebbf5 */
  goto L_104ebbf5;
L_104ebc67:;
  /* 104ebc67 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ebc69 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 104ebc6f push edx */
  push32((uint32_t)(EDX));
  /* 104ebc70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ebc73 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 104ebc79 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ebc7b push eax */
  push32((uint32_t)(EAX));
  /* 104ebc7c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 104ebc82 push edx */
  push32((uint32_t)(EDX));
  /* 104ebc83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebc86 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ebc89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebc8c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104ebc8f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ebc92 mov edx, dword ptr [eax*4 + 0x10510ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10510ea0)));
  /* 104ebc99 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 104ebc9c push eax */
  push32((uint32_t)(EAX));
  /* 104ebc9d call dword ptr [0x10512288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512288))), 0x104ebca3u);
  /* 104ebca3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ebca5 je 0x104ebcca */
  if (C.zf) goto L_104ebcca;
  /* 104ebca7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ebcaa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebcb0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104ebcb3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ebcb6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 104ebcbc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ebcbe cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebcc4 jge 0x104ebcc8 */
  if ((C.sf==C.of)) goto L_104ebcc8;
  /* 104ebcc6 jmp 0x104ebcda */
  goto L_104ebcda;
L_104ebcc8:;
  /* 104ebcc8 jmp 0x104ebcd5 */
  goto L_104ebcd5;
L_104ebcca:;
  /* 104ebcca call dword ptr [0x105122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122c8))), 0x104ebcd0u);
  /* 104ebcd0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104ebcd3 jmp 0x104ebcda */
  goto L_104ebcda;
L_104ebcd5:;
  /* 104ebcd5 jmp 0x104ebbdd */
  goto L_104ebbdd;
L_104ebcda:;
  /* 104ebcda jmp 0x104ebd2c */
  goto L_104ebd2c;
L_104ebcdc:;
  /* 104ebcdc push 0 */
  push32((uint32_t)(0x0u));
  /* 104ebcde lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 104ebce4 push ecx */
  push32((uint32_t)(ECX));
  /* 104ebce5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ebce8 push edx */
  push32((uint32_t)(EDX));
  /* 104ebce9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ebcec push eax */
  push32((uint32_t)(EAX));
  /* 104ebced mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebcf0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ebcf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebcf6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ebcf9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ebcfc mov eax, dword ptr [ecx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10510ea0)));
  /* 104ebd03 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 104ebd06 push ecx */
  push32((uint32_t)(ECX));
  /* 104ebd07 call dword ptr [0x10512288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512288))), 0x104ebd0du);
  /* 104ebd0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ebd0f je 0x104ebd23 */
  if (C.zf) goto L_104ebd23;
  /* 104ebd11 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104ebd18 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 104ebd1e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104ebd21 jmp 0x104ebd2c */
  goto L_104ebd2c;
L_104ebd23:;
  /* 104ebd23 call dword ptr [0x105122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122c8))), 0x104ebd29u);
  /* 104ebd29 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104ebd2c:;
  /* 104ebd2c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebd30 jne 0x104ebdb6 */
  if (!C.zf) goto L_104ebdb6;
  /* 104ebd36 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebd3a je 0x104ebd6a */
  if (C.zf) goto L_104ebd6a;
  /* 104ebd3c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebd40 jne 0x104ebd59 */
  if (!C.zf) goto L_104ebd59;
  /* 104ebd42 call 0x104eb0f0 */
  push32(0x104ebd47u); f_104eb0f0();
  /* 104ebd47 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104ebd4d call 0x104eb100 */
  push32(0x104ebd52u); f_104eb100();
  /* 104ebd52 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ebd55 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104ebd57 jmp 0x104ebd65 */
  goto L_104ebd65;
L_104ebd59:;
  /* 104ebd59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ebd5c push edx */
  push32((uint32_t)(EDX));
  /* 104ebd5d call 0x104eb050 */
  push32(0x104ebd62u); f_104eb050();
  /* 104ebd62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ebd65:;
  /* 104ebd65 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ebd68 jmp 0x104ebdbf */
  goto L_104ebdbf;
L_104ebd6a:;
  /* 104ebd6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebd6d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ebd70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebd73 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104ebd76 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ebd79 mov edx, dword ptr [eax*4 + 0x10510ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10510ea0)));
  /* 104ebd80 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 104ebd85 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 104ebd88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ebd8a je 0x104ebd9b */
  if (C.zf) goto L_104ebd9b;
  /* 104ebd8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ebd8f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104ebd92 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebd95 jne 0x104ebd9b */
  if (!C.zf) goto L_104ebd9b;
  /* 104ebd97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ebd99 jmp 0x104ebdbf */
  goto L_104ebdbf;
L_104ebd9b:;
  /* 104ebd9b call 0x104eb0f0 */
  push32(0x104ebda0u); f_104eb0f0();
  /* 104ebda0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 104ebda6 call 0x104eb100 */
  push32(0x104ebdabu); f_104eb100();
  /* 104ebdab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104ebdb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ebdb4 jmp 0x104ebdbf */
  goto L_104ebdbf;
L_104ebdb6:;
  /* 104ebdb6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ebdb9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_104ebdbf:;
  /* 104ebdbf mov esp, ebp */
  ESP = (EBP);
  /* 104ebdc1 pop ebp */
  EBP = (pop32());
  /* 104ebdc2 ret  */
  ESPCHK(0x104ebb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdd0 @ 0x104ebdd0 (199 bytes, 68 insns) */
void f_104ebdd0(void) {
  FTRACE(0x104ebdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ebdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ebdd1 mov ebp, esp */
  EBP = (ESP);
  /* 104ebdd3 push ecx */
  push32((uint32_t)(ECX));
  /* 104ebdd4 push ebx */
  push32((uint32_t)(EBX));
  /* 104ebdd5 push esi */
  push32((uint32_t)(ESI));
  /* 104ebdd6 push edi */
  push32((uint32_t)(EDI));
L_104ebdd7:;
  /* 104ebdd7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebddb jne 0x104ebdfb */
  if (!C.zf) goto L_104ebdfb;
  /* 104ebddd push 0x1050af84 */
  push32((uint32_t)(0x1050af84u));
  /* 104ebde2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ebde4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 104ebde6 push 0x1050b050 */
  push32((uint32_t)(0x1050b050u));
  /* 104ebdeb push 2 */
  push32((uint32_t)(0x2u));
  /* 104ebded call 0x104e22e0 */
  push32(0x104ebdf2u); f_104e22e0();
  /* 104ebdf2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebdf5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebdf8 jne 0x104ebdfb */
  if (!C.zf) goto L_104ebdfb;
  /* 104ebdfa int3  */
  x86_unimpl("int3 @ 0x104ebdfa");
L_104ebdfb:;
  /* 104ebdfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ebdfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ebdff jne 0x104ebdd7 */
  if (!C.zf) goto L_104ebdd7;
  /* 104ebe01 mov ecx, dword ptr [0x1050f6dc] */
  ECX = (r32((uint32_t)(0x1050f6dc)));
  /* 104ebe07 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebe0a mov dword ptr [0x1050f6dc], ecx */
  w32((uint32_t)(0x1050f6dc), (ECX));
  /* 104ebe10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebe13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104ebe16 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 104ebe18 push 0x1050b050 */
  push32((uint32_t)(0x1050b050u));
  /* 104ebe1d push 2 */
  push32((uint32_t)(0x2u));
  /* 104ebe1f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 104ebe24 call 0x104e3220 */
  push32(0x104ebe29u); f_104e3220();
  /* 104ebe29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebe2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebe2f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 104ebe32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebe35 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebe39 je 0x104ebe56 */
  if (C.zf) goto L_104ebe56;
  /* 104ebe3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebe3e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104ebe41 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 104ebe44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebe47 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 104ebe4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebe4d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 104ebe54 jmp 0x104ebe7b */
  goto L_104ebe7b;
L_104ebe56:;
  /* 104ebe56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebe59 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ebe5c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104ebe5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebe62 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 104ebe65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebe68 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebe6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebe6e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104ebe71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebe74 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_104ebe7b:;
  /* 104ebe7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebe7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebe81 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104ebe84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104ebe86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebe89 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 104ebe90 pop edi */
  EDI = (pop32());
  /* 104ebe91 pop esi */
  ESI = (pop32());
  /* 104ebe92 pop ebx */
  EBX = (pop32());
  /* 104ebe93 mov esp, ebp */
  ESP = (EBP);
  /* 104ebe95 pop ebp */
  EBP = (pop32());
  /* 104ebe96 ret  */
  ESPCHK(0x104ebdd0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x104ebea0 (50 bytes, 17 insns) */
void f_104ebea0(void) {
  FTRACE(0x104ebea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ebea0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ebea1 mov ebp, esp */
  EBP = (ESP);
  /* 104ebea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebea6 cmp eax, dword ptr [0x10510fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10510fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebeac jb 0x104ebeb2 */
  if (C.cf) goto L_104ebeb2;
  /* 104ebeae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ebeb0 jmp 0x104ebed0 */
  goto L_104ebed0;
L_104ebeb2:;
  /* 104ebeb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebeb5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ebeb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ebebb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ebebe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ebec1 mov eax, dword ptr [ecx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10510ea0)));
  /* 104ebec8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104ebecd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_104ebed0:;
  /* 104ebed0 pop ebp */
  EBP = (pop32());
  /* 104ebed1 ret  */
  ESPCHK(0x104ebea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bee0 @ 0x104ebee0 (300 bytes, 80 insns) */
void f_104ebee0(void) {
  FTRACE(0x104ebee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ebee0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ebee1 mov ebp, esp */
  EBP = (ESP);
  /* 104ebee3 push ecx */
  push32((uint32_t)(ECX));
  /* 104ebee4 cmp dword ptr [0x10510ba0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10510ba0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebeeb jne 0x104ebef9 */
  if (!C.zf) goto L_104ebef9;
  /* 104ebeed mov dword ptr [0x10510ba0], 0x200 */
  w32((uint32_t)(0x10510ba0), (0x200u));
  /* 104ebef7 jmp 0x104ebf0c */
  goto L_104ebf0c;
L_104ebef9:;
  /* 104ebef9 cmp dword ptr [0x10510ba0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10510ba0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebf00 jge 0x104ebf0c */
  if ((C.sf==C.of)) goto L_104ebf0c;
  /* 104ebf02 mov dword ptr [0x10510ba0], 0x14 */
  w32((uint32_t)(0x10510ba0), (0x14u));
L_104ebf0c:;
  /* 104ebf0c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 104ebf11 push 0x1050b05c */
  push32((uint32_t)(0x1050b05cu));
  /* 104ebf16 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ebf18 push 4 */
  push32((uint32_t)(0x4u));
  /* 104ebf1a mov eax, dword ptr [0x10510ba0] */
  EAX = (r32((uint32_t)(0x10510ba0)));
  /* 104ebf1f push eax */
  push32((uint32_t)(EAX));
  /* 104ebf20 call 0x104e3630 */
  push32(0x104ebf25u); f_104e3630();
  /* 104ebf25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebf28 mov dword ptr [0x1050f850], eax */
  w32((uint32_t)(0x1050f850), (EAX));
  /* 104ebf2d cmp dword ptr [0x1050f850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebf34 jne 0x104ebf75 */
  if (!C.zf) goto L_104ebf75;
  /* 104ebf36 mov dword ptr [0x10510ba0], 0x14 */
  w32((uint32_t)(0x10510ba0), (0x14u));
  /* 104ebf40 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 104ebf45 push 0x1050b05c */
  push32((uint32_t)(0x1050b05cu));
  /* 104ebf4a push 2 */
  push32((uint32_t)(0x2u));
  /* 104ebf4c push 4 */
  push32((uint32_t)(0x4u));
  /* 104ebf4e mov ecx, dword ptr [0x10510ba0] */
  ECX = (r32((uint32_t)(0x10510ba0)));
  /* 104ebf54 push ecx */
  push32((uint32_t)(ECX));
  /* 104ebf55 call 0x104e3630 */
  push32(0x104ebf5au); f_104e3630();
  /* 104ebf5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebf5d mov dword ptr [0x1050f850], eax */
  w32((uint32_t)(0x1050f850), (EAX));
  /* 104ebf62 cmp dword ptr [0x1050f850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebf69 jne 0x104ebf75 */
  if (!C.zf) goto L_104ebf75;
  /* 104ebf6b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 104ebf6d call 0x104e2190 */
  push32(0x104ebf72u); f_104e2190();
  /* 104ebf72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ebf75:;
  /* 104ebf75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104ebf7c jmp 0x104ebf87 */
  goto L_104ebf87;
L_104ebf7e:;
  /* 104ebf7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebf81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebf84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104ebf87:;
  /* 104ebf87 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebf8b jge 0x104ebfa6 */
  if ((C.sf==C.of)) goto L_104ebfa6;
  /* 104ebf8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebf90 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ebf93 add eax, 0x1050e120 */
  { uint32_t _a=(EAX),_b=(0x1050e120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebf98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebf9b mov edx, dword ptr [0x1050f850] */
  EDX = (r32((uint32_t)(0x1050f850)));
  /* 104ebfa1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 104ebfa4 jmp 0x104ebf7e */
  goto L_104ebf7e;
L_104ebfa6:;
  /* 104ebfa6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104ebfad jmp 0x104ebfb8 */
  goto L_104ebfb8;
L_104ebfaf:;
  /* 104ebfaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebfb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ebfb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104ebfb8:;
  /* 104ebfb8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebfbc jge 0x104ec008 */
  if ((C.sf==C.of)) goto L_104ec008;
  /* 104ebfbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebfc1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ebfc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebfc7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ebfca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ebfcd mov eax, dword ptr [ecx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10510ea0)));
  /* 104ebfd4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebfd8 je 0x104ebff6 */
  if (C.zf) goto L_104ebff6;
  /* 104ebfda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebfdd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ebfe0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebfe3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ebfe6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ebfe9 mov eax, dword ptr [ecx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10510ea0)));
  /* 104ebff0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ebff4 jne 0x104ec006 */
  if (!C.zf) goto L_104ec006;
L_104ebff6:;
  /* 104ebff6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ebff9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ebffc mov dword ptr [ecx + 0x1050e130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1050e130), (0xffffffffu));
L_104ec006:;
  /* 104ec006 jmp 0x104ebfaf */
  goto L_104ebfaf;
L_104ec008:;
  /* 104ec008 mov esp, ebp */
  ESP = (EBP);
  /* 104ec00a pop ebp */
  EBP = (pop32());
  /* 104ec00b ret  */
  ESPCHK(0x104ebee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c010 @ 0x104ec010 (26 bytes, 9 insns) */
void f_104ec010(void) {
  FTRACE(0x104ec010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec010 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec011 mov ebp, esp */
  EBP = (ESP);
  /* 104ec013 call 0x104ecc10 */
  push32(0x104ec018u); f_104ecc10();
  /* 104ec018 movsx eax, byte ptr [0x1050f4f4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1050f4f4))));
  /* 104ec01f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ec021 je 0x104ec028 */
  if (C.zf) goto L_104ec028;
  /* 104ec023 call 0x104ec9d0 */
  push32(0x104ec028u); f_104ec9d0();
L_104ec028:;
  /* 104ec028 pop ebp */
  EBP = (pop32());
  /* 104ec029 ret  */
  ESPCHK(0x104ec010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c030 @ 0x104ec030 (61 bytes, 20 insns) */
void f_104ec030(void) {
  FTRACE(0x104ec030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec030 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec031 mov ebp, esp */
  EBP = (ESP);
  /* 104ec033 cmp dword ptr [ebp + 8], 0x1050e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1050e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec03a jb 0x104ec05e */
  if (C.cf) goto L_104ec05e;
  /* 104ec03c cmp dword ptr [ebp + 8], 0x1050e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1050e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec043 ja 0x104ec05e */
  if ((!C.cf&&!C.zf)) goto L_104ec05e;
  /* 104ec045 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec048 sub eax, 0x1050e120 */
  { uint32_t _a=(EAX),_b=(0x1050e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ec04d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ec050 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec053 push eax */
  push32((uint32_t)(EAX));
  /* 104ec054 call 0x104e6c20 */
  push32(0x104ec059u); f_104e6c20();
  /* 104ec059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec05c jmp 0x104ec06b */
  goto L_104ec06b;
L_104ec05e:;
  /* 104ec05e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec061 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec064 push ecx */
  push32((uint32_t)(ECX));
  /* 104ec065 call dword ptr [0x10512318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512318))), 0x104ec06bu);
L_104ec06b:;
  /* 104ec06b pop ebp */
  EBP = (pop32());
  /* 104ec06c ret  */
  ESPCHK(0x104ec030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c070 @ 0x104ec070 (41 bytes, 16 insns) */
void f_104ec070(void) {
  FTRACE(0x104ec070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec070 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec071 mov ebp, esp */
  EBP = (ESP);
  /* 104ec073 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec077 jge 0x104ec08a */
  if ((C.sf==C.of)) goto L_104ec08a;
  /* 104ec079 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec07c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec07f push eax */
  push32((uint32_t)(EAX));
  /* 104ec080 call 0x104e6c20 */
  push32(0x104ec085u); f_104e6c20();
  /* 104ec085 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec088 jmp 0x104ec097 */
  goto L_104ec097;
L_104ec08a:;
  /* 104ec08a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ec08d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec090 push ecx */
  push32((uint32_t)(ECX));
  /* 104ec091 call dword ptr [0x10512318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512318))), 0x104ec097u);
L_104ec097:;
  /* 104ec097 pop ebp */
  EBP = (pop32());
  /* 104ec098 ret  */
  ESPCHK(0x104ec070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a0 @ 0x104ec0a0 (61 bytes, 20 insns) */
void f_104ec0a0(void) {
  FTRACE(0x104ec0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec0a1 mov ebp, esp */
  EBP = (ESP);
  /* 104ec0a3 cmp dword ptr [ebp + 8], 0x1050e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1050e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec0aa jb 0x104ec0ce */
  if (C.cf) goto L_104ec0ce;
  /* 104ec0ac cmp dword ptr [ebp + 8], 0x1050e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1050e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec0b3 ja 0x104ec0ce */
  if ((!C.cf&&!C.zf)) goto L_104ec0ce;
  /* 104ec0b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec0b8 sub eax, 0x1050e120 */
  { uint32_t _a=(EAX),_b=(0x1050e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ec0bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ec0c0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec0c3 push eax */
  push32((uint32_t)(EAX));
  /* 104ec0c4 call 0x104e6cc0 */
  push32(0x104ec0c9u); f_104e6cc0();
  /* 104ec0c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec0cc jmp 0x104ec0db */
  goto L_104ec0db;
L_104ec0ce:;
  /* 104ec0ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec0d1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec0d4 push ecx */
  push32((uint32_t)(ECX));
  /* 104ec0d5 call dword ptr [0x1051231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051231c))), 0x104ec0dbu);
L_104ec0db:;
  /* 104ec0db pop ebp */
  EBP = (pop32());
  /* 104ec0dc ret  */
  ESPCHK(0x104ec0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0e0 @ 0x104ec0e0 (41 bytes, 16 insns) */
void f_104ec0e0(void) {
  FTRACE(0x104ec0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec0e1 mov ebp, esp */
  EBP = (ESP);
  /* 104ec0e3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec0e7 jge 0x104ec0fa */
  if ((C.sf==C.of)) goto L_104ec0fa;
  /* 104ec0e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec0ec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec0ef push eax */
  push32((uint32_t)(EAX));
  /* 104ec0f0 call 0x104e6cc0 */
  push32(0x104ec0f5u); f_104e6cc0();
  /* 104ec0f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec0f8 jmp 0x104ec107 */
  goto L_104ec107;
L_104ec0fa:;
  /* 104ec0fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ec0fd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec100 push ecx */
  push32((uint32_t)(ECX));
  /* 104ec101 call dword ptr [0x1051231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051231c))), 0x104ec107u);
L_104ec107:;
  /* 104ec107 pop ebp */
  EBP = (pop32());
  /* 104ec108 ret  */
  ESPCHK(0x104ec0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c110 @ 0x104ec110 (119 bytes, 34 insns) */
void f_104ec110(void) {
  FTRACE(0x104ec110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec110 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec111 mov ebp, esp */
  EBP = (ESP);
  /* 104ec113 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ec116 push 0x1050f84c */
  push32((uint32_t)(0x1050f84cu));
  /* 104ec11b call dword ptr [0x1051229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051229c))), 0x104ec121u);
  /* 104ec121 cmp dword ptr [0x1050f83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec128 je 0x104ec148 */
  if (C.zf) goto L_104ec148;
  /* 104ec12a push 0x1050f84c */
  push32((uint32_t)(0x1050f84cu));
  /* 104ec12f call dword ptr [0x1051228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051228c))), 0x104ec135u);
  /* 104ec135 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104ec137 call 0x104e6c20 */
  push32(0x104ec13cu); f_104e6c20();
  /* 104ec13c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec13f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104ec146 jmp 0x104ec14f */
  goto L_104ec14f;
L_104ec148:;
  /* 104ec148 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104ec14f:;
  /* 104ec14f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 104ec153 push eax */
  push32((uint32_t)(EAX));
  /* 104ec154 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec157 push ecx */
  push32((uint32_t)(ECX));
  /* 104ec158 call 0x104ec190 */
  push32(0x104ec15du); f_104ec190();
  /* 104ec15d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec160 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ec163 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec167 je 0x104ec175 */
  if (C.zf) goto L_104ec175;
  /* 104ec169 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104ec16b call 0x104e6cc0 */
  push32(0x104ec170u); f_104e6cc0();
  /* 104ec170 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec173 jmp 0x104ec180 */
  goto L_104ec180;
L_104ec175:;
  /* 104ec175 push 0x1050f84c */
  push32((uint32_t)(0x1050f84cu));
  /* 104ec17a call dword ptr [0x1051228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051228c))), 0x104ec180u);
L_104ec180:;
  /* 104ec180 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ec183 mov esp, ebp */
  ESP = (EBP);
  /* 104ec185 pop ebp */
  EBP = (pop32());
  /* 104ec186 ret  */
  ESPCHK(0x104ec110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c190 @ 0x104ec190 (160 bytes, 50 insns) */
void f_104ec190(void) {
  FTRACE(0x104ec190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec190 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec191 mov ebp, esp */
  EBP = (ESP);
  /* 104ec193 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ec196 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec19a jne 0x104ec1a3 */
  if (!C.zf) goto L_104ec1a3;
  /* 104ec19c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ec19e jmp 0x104ec22c */
  goto L_104ec22c;
L_104ec1a3:;
  /* 104ec1a3 cmp dword ptr [0x1050f6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec1aa jne 0x104ec1da */
  if (!C.zf) goto L_104ec1da;
  /* 104ec1ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ec1af and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ec1b4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec1b9 jle 0x104ec1cb */
  if ((C.zf||C.sf!=C.of)) goto L_104ec1cb;
  /* 104ec1bb call 0x104eb0f0 */
  push32(0x104ec1c0u); f_104eb0f0();
  /* 104ec1c0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 104ec1c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ec1c9 jmp 0x104ec22c */
  goto L_104ec22c;
L_104ec1cb:;
  /* 104ec1cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec1ce mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 104ec1d1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 104ec1d3 mov eax, 1 */
  EAX = (0x1u);
  /* 104ec1d8 jmp 0x104ec22c */
  goto L_104ec22c;
L_104ec1da:;
  /* 104ec1da mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104ec1e1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 104ec1e4 push eax */
  push32((uint32_t)(EAX));
  /* 104ec1e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ec1e7 mov ecx, dword ptr [0x1050dea4] */
  ECX = (r32((uint32_t)(0x1050dea4)));
  /* 104ec1ed push ecx */
  push32((uint32_t)(ECX));
  /* 104ec1ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec1f1 push edx */
  push32((uint32_t)(EDX));
  /* 104ec1f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ec1f4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 104ec1f7 push eax */
  push32((uint32_t)(EAX));
  /* 104ec1f8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104ec1fd mov ecx, dword ptr [0x1050f6d0] */
  ECX = (r32((uint32_t)(0x1050f6d0)));
  /* 104ec203 push ecx */
  push32((uint32_t)(ECX));
  /* 104ec204 call dword ptr [0x105122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f4))), 0x104ec20au);
  /* 104ec20a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ec20d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec211 je 0x104ec219 */
  if (C.zf) goto L_104ec219;
  /* 104ec213 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec217 je 0x104ec229 */
  if (C.zf) goto L_104ec229;
L_104ec219:;
  /* 104ec219 call 0x104eb0f0 */
  push32(0x104ec21eu); f_104eb0f0();
  /* 104ec21e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 104ec224 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ec227 jmp 0x104ec22c */
  goto L_104ec22c;
L_104ec229:;
  /* 104ec229 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104ec22c:;
  /* 104ec22c mov esp, ebp */
  ESP = (EBP);
  /* 104ec22e pop ebp */
  EBP = (pop32());
  /* 104ec22f ret  */
  ESPCHK(0x104ec190u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x104ec230 (32 bytes, 18 insns) */
void f_104ec230(void) {
  FTRACE(0x104ec230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec230 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec231 mov ebp, esp */
  EBP = (ESP);
  /* 104ec233 push ebx */
  push32((uint32_t)(EBX));
  /* 104ec234 push esi */
  push32((uint32_t)(ESI));
  /* 104ec235 push edi */
  push32((uint32_t)(EDI));
  /* 104ec236 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec237 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ec239 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ec23b push 0x104ec248 */
  push32((uint32_t)(0x104ec248u));
  /* 104ec240 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 104ec243 call 0x104f397c */
  push32(0x104ec248u); f_104f397c();
  /* 104ec248 pop ebp */
  EBP = (pop32());
  /* 104ec249 pop edi */
  EDI = (pop32());
  /* 104ec24a pop esi */
  ESI = (pop32());
  /* 104ec24b pop ebx */
  EBX = (pop32());
  /* 104ec24c mov esp, ebp */
  ESP = (EBP);
  /* 104ec24e pop ebp */
  EBP = (pop32());
  /* 104ec24f ret  */
  ESPCHK(0x104ec230u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x104ec272 (104 bytes, 33 insns) */
void f_104ec272(void) {
  FTRACE(0x104ec272u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec272 push ebx */
  push32((uint32_t)(EBX));
  /* 104ec273 push esi */
  push32((uint32_t)(ESI));
  /* 104ec274 push edi */
  push32((uint32_t)(EDI));
  /* 104ec275 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 104ec279 push eax */
  push32((uint32_t)(EAX));
  /* 104ec27a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 104ec27c push 0x104ec250 */
  push32((uint32_t)(0x104ec250u));
  /* 104ec281 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 104ec288 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_104ec28f:;
  /* 104ec28f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 104ec293 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 104ec296 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 104ec299 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec29c je 0x104ec2cc */
  if (C.zf) goto L_104ec2cc;
  /* 104ec29e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec2a2 je 0x104ec2cc */
  if (C.zf) goto L_104ec2cc;
  /* 104ec2a4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 104ec2a7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 104ec2aa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 104ec2ae mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 104ec2b1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec2b6 jne 0x104ec2ca */
  if (!C.zf) goto L_104ec2ca;
  /* 104ec2b8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 104ec2bd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 104ec2c1 call 0x104ec306 */
  push32(0x104ec2c6u); f_104ec306();
  /* 104ec2c6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x104ec2cau);
L_104ec2ca:;
  /* 104ec2ca jmp 0x104ec28f */
  goto L_104ec28f;
L_104ec2cc:;
  /* 104ec2cc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 104ec2d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec2d6 pop edi */
  EDI = (pop32());
  /* 104ec2d7 pop esi */
  ESI = (pop32());
  /* 104ec2d8 pop ebx */
  EBX = (pop32());
  /* 104ec2d9 ret  */
  ESPCHK(0x104ec272u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c306 @ 0x104ec306 (24 bytes, 10 insns) */
void f_104ec306(void) {
  FTRACE(0x104ec306u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec306 push ebx */
  push32((uint32_t)(EBX));
  /* 104ec307 push ecx */
  push32((uint32_t)(ECX));
  /* 104ec308 mov ebx, 0x1050e3b8 */
  EBX = (0x1050e3b8u);
  /* 104ec30d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec310 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 104ec313 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 104ec316 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 104ec319 pop ecx */
  ECX = (pop32());
  /* 104ec31a pop ebx */
  EBX = (pop32());
  /* 104ec31b ret 4 */
  ESPCHK(0x104ec306u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c3e5 @ 0x104ec3e5 (27 bytes, 11 insns) */
void f_104ec3e5(void) {
  FTRACE(0x104ec3e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec3e5 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec3e6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 104ec3ea mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 104ec3ec mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 104ec3ef push eax */
  push32((uint32_t)(EAX));
  /* 104ec3f0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 104ec3f3 push eax */
  push32((uint32_t)(EAX));
  /* 104ec3f4 call 0x104ec272 */
  push32(0x104ec3f9u); f_104ec272();
  /* 104ec3f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec3fc pop ebp */
  EBP = (pop32());
  /* 104ec3fd ret 4 */
  ESPCHK(0x104ec3e5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c400 @ 0x104ec400 (482 bytes, 138 insns) */
void f_104ec400(void) {
  FTRACE(0x104ec400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec400 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec401 mov ebp, esp */
  EBP = (ESP);
  /* 104ec403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ec406 push esi */
  push32((uint32_t)(ESI));
  /* 104ec407 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 104ec40e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 104ec410 call 0x104e6c20 */
  push32(0x104ec415u); f_104e6c20();
  /* 104ec415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec418 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104ec41f jmp 0x104ec42a */
  goto L_104ec42a;
L_104ec421:;
  /* 104ec421 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ec424 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec427 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104ec42a:;
  /* 104ec42a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec42e jge 0x104ec5d0 */
  if ((C.sf==C.of)) goto L_104ec5d0;
  /* 104ec434 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ec437 cmp dword ptr [ecx*4 + 0x10510ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10510ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec43f je 0x104ec536 */
  if (C.zf) goto L_104ec536;
  /* 104ec445 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ec448 mov eax, dword ptr [edx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10510ea0)));
  /* 104ec44f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ec452 jmp 0x104ec45d */
  goto L_104ec45d;
L_104ec454:;
  /* 104ec454 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec457 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec45a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104ec45d:;
  /* 104ec45d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ec460 mov eax, dword ptr [edx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10510ea0)));
  /* 104ec467 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec46c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec46f jae 0x104ec526 */
  if (!C.cf) goto L_104ec526;
  /* 104ec475 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec478 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104ec47c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104ec47f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ec481 jne 0x104ec521 */
  if (!C.zf) goto L_104ec521;
  /* 104ec487 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec48a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec48e jne 0x104ec4c9 */
  if (!C.zf) goto L_104ec4c9;
  /* 104ec490 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104ec492 call 0x104e6c20 */
  push32(0x104ec497u); f_104e6c20();
  /* 104ec497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec49a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec49d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec4a1 jne 0x104ec4bf */
  if (!C.zf) goto L_104ec4bf;
  /* 104ec4a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec4a6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec4a9 push edx */
  push32((uint32_t)(EDX));
  /* 104ec4aa call dword ptr [0x10512314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512314))), 0x104ec4b0u);
  /* 104ec4b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec4b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104ec4b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec4b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec4bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_104ec4bf:;
  /* 104ec4bf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104ec4c1 call 0x104e6cc0 */
  push32(0x104ec4c6u); f_104e6cc0();
  /* 104ec4c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ec4c9:;
  /* 104ec4c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec4cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec4cf push eax */
  push32((uint32_t)(EAX));
  /* 104ec4d0 call dword ptr [0x10512318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512318))), 0x104ec4d6u);
  /* 104ec4d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec4d9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104ec4dd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104ec4e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ec4e2 je 0x104ec4f6 */
  if (C.zf) goto L_104ec4f6;
  /* 104ec4e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec4e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec4ea push eax */
  push32((uint32_t)(EAX));
  /* 104ec4eb call dword ptr [0x1051231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051231c))), 0x104ec4f1u);
  /* 104ec4f1 jmp 0x104ec454 */
  goto L_104ec454;
L_104ec4f6:;
  /* 104ec4f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec4f9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 104ec4ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ec502 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ec505 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ec508 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec50b sub eax, dword ptr [edx*4 + 0x10510ea0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10510ea0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ec512 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104ec513 mov esi, 0x24 */
  ESI = (0x24u);
  /* 104ec518 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104ec51a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec51c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ec51f jmp 0x104ec526 */
  goto L_104ec526;
L_104ec521:;
  /* 104ec521 jmp 0x104ec454 */
  goto L_104ec454;
L_104ec526:;
  /* 104ec526 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec52a je 0x104ec531 */
  if (C.zf) goto L_104ec531;
  /* 104ec52c jmp 0x104ec5d0 */
  goto L_104ec5d0;
L_104ec531:;
  /* 104ec531 jmp 0x104ec5cb */
  goto L_104ec5cb;
L_104ec536:;
  /* 104ec536 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 104ec538 push 0x1050b064 */
  push32((uint32_t)(0x1050b064u));
  /* 104ec53d push 2 */
  push32((uint32_t)(0x2u));
  /* 104ec53f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 104ec544 call 0x104e3220 */
  push32(0x104ec549u); f_104e3220();
  /* 104ec549 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec54c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ec54f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec553 je 0x104ec5c9 */
  if (C.zf) goto L_104ec5c9;
  /* 104ec555 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ec558 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec55b mov dword ptr [eax*4 + 0x10510ea0], ecx */
  w32((uint32_t)(EAX*4 + 0x10510ea0), (ECX));
  /* 104ec562 mov edx, dword ptr [0x10510fdc] */
  EDX = (r32((uint32_t)(0x10510fdc)));
  /* 104ec568 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec56b mov dword ptr [0x10510fdc], edx */
  w32((uint32_t)(0x10510fdc), (EDX));
  /* 104ec571 jmp 0x104ec57c */
  goto L_104ec57c;
L_104ec573:;
  /* 104ec573 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec576 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec579 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104ec57c:;
  /* 104ec57c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ec57f mov edx, dword ptr [ecx*4 + 0x10510ea0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10510ea0)));
  /* 104ec586 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec58c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec58f jae 0x104ec5b4 */
  if (!C.cf) goto L_104ec5b4;
  /* 104ec591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec594 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 104ec598 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec59b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 104ec5a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec5a4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 104ec5a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec5ab mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 104ec5b2 jmp 0x104ec573 */
  goto L_104ec573;
L_104ec5b4:;
  /* 104ec5b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ec5b7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ec5ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ec5bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ec5c0 push edx */
  push32((uint32_t)(EDX));
  /* 104ec5c1 call 0x104ec910 */
  push32(0x104ec5c6u); f_104ec910();
  /* 104ec5c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ec5c9:;
  /* 104ec5c9 jmp 0x104ec5d0 */
  goto L_104ec5d0;
L_104ec5cb:;
  /* 104ec5cb jmp 0x104ec421 */
  goto L_104ec421;
L_104ec5d0:;
  /* 104ec5d0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 104ec5d2 call 0x104e6cc0 */
  push32(0x104ec5d7u); f_104e6cc0();
  /* 104ec5d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec5da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ec5dd pop esi */
  ESI = (pop32());
  /* 104ec5de mov esp, ebp */
  ESP = (EBP);
  /* 104ec5e0 pop ebp */
  EBP = (pop32());
  /* 104ec5e1 ret  */
  ESPCHK(0x104ec400u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x104ec5f0 (183 bytes, 57 insns) */
void f_104ec5f0(void) {
  FTRACE(0x104ec5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec5f1 mov ebp, esp */
  EBP = (ESP);
  /* 104ec5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104ec5f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec5f7 cmp eax, dword ptr [0x10510fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10510fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec5fd jae 0x104ec68a */
  if (!C.cf) goto L_104ec68a;
  /* 104ec603 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec606 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ec609 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec60c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ec60f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ec612 mov eax, dword ptr [ecx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10510ea0)));
  /* 104ec619 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec61d jne 0x104ec68a */
  if (!C.zf) goto L_104ec68a;
  /* 104ec61f cmp dword ptr [0x1050f4b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec626 jne 0x104ec66a */
  if (!C.zf) goto L_104ec66a;
  /* 104ec628 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec62b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104ec62e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec632 je 0x104ec642 */
  if (C.zf) goto L_104ec642;
  /* 104ec634 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec638 je 0x104ec650 */
  if (C.zf) goto L_104ec650;
  /* 104ec63a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec63e je 0x104ec65e */
  if (C.zf) goto L_104ec65e;
  /* 104ec640 jmp 0x104ec66a */
  goto L_104ec66a;
L_104ec642:;
  /* 104ec642 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ec645 push edx */
  push32((uint32_t)(EDX));
  /* 104ec646 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 104ec648 call dword ptr [0x105122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122e4))), 0x104ec64eu);
  /* 104ec64e jmp 0x104ec66a */
  goto L_104ec66a;
L_104ec650:;
  /* 104ec650 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ec653 push eax */
  push32((uint32_t)(EAX));
  /* 104ec654 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 104ec656 call dword ptr [0x105122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122e4))), 0x104ec65cu);
  /* 104ec65c jmp 0x104ec66a */
  goto L_104ec66a;
L_104ec65e:;
  /* 104ec65e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ec661 push ecx */
  push32((uint32_t)(ECX));
  /* 104ec662 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 104ec664 call dword ptr [0x105122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122e4))), 0x104ec66au);
L_104ec66a:;
  /* 104ec66a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec66d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 104ec670 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec673 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 104ec676 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ec679 mov ecx, dword ptr [edx*4 + 0x10510ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10510ea0)));
  /* 104ec680 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ec683 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 104ec686 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ec688 jmp 0x104ec6a3 */
  goto L_104ec6a3;
L_104ec68a:;
  /* 104ec68a call 0x104eb0f0 */
  push32(0x104ec68fu); f_104eb0f0();
  /* 104ec68f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104ec695 call 0x104eb100 */
  push32(0x104ec69au); f_104eb100();
  /* 104ec69a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104ec6a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104ec6a3:;
  /* 104ec6a3 mov esp, ebp */
  ESP = (EBP);
  /* 104ec6a5 pop ebp */
  EBP = (pop32());
  /* 104ec6a6 ret  */
  ESPCHK(0x104ec5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b0 @ 0x104ec6b0 (216 bytes, 63 insns) */
void f_104ec6b0(void) {
  FTRACE(0x104ec6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec6b1 mov ebp, esp */
  EBP = (ESP);
  /* 104ec6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 104ec6b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec6b7 cmp eax, dword ptr [0x10510fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10510fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec6bd jae 0x104ec76b */
  if (!C.cf) goto L_104ec76b;
  /* 104ec6c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec6c6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ec6c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec6cc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ec6cf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ec6d2 mov eax, dword ptr [ecx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10510ea0)));
  /* 104ec6d9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104ec6de and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104ec6e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ec6e3 je 0x104ec76b */
  if (C.zf) goto L_104ec76b;
  /* 104ec6e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec6ec sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 104ec6ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec6f2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 104ec6f5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ec6f8 mov ecx, dword ptr [edx*4 + 0x10510ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10510ea0)));
  /* 104ec6ff cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec703 je 0x104ec76b */
  if (C.zf) goto L_104ec76b;
  /* 104ec705 cmp dword ptr [0x1050f4b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec70c jne 0x104ec74a */
  if (!C.zf) goto L_104ec74a;
  /* 104ec70e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec711 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104ec714 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec718 je 0x104ec728 */
  if (C.zf) goto L_104ec728;
  /* 104ec71a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec71e je 0x104ec734 */
  if (C.zf) goto L_104ec734;
  /* 104ec720 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec724 je 0x104ec740 */
  if (C.zf) goto L_104ec740;
  /* 104ec726 jmp 0x104ec74a */
  goto L_104ec74a;
L_104ec728:;
  /* 104ec728 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ec72a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 104ec72c call dword ptr [0x105122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122e4))), 0x104ec732u);
  /* 104ec732 jmp 0x104ec74a */
  goto L_104ec74a;
L_104ec734:;
  /* 104ec734 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ec736 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 104ec738 call dword ptr [0x105122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122e4))), 0x104ec73eu);
  /* 104ec73e jmp 0x104ec74a */
  goto L_104ec74a;
L_104ec740:;
  /* 104ec740 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ec742 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 104ec744 call dword ptr [0x105122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122e4))), 0x104ec74au);
L_104ec74a:;
  /* 104ec74a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec74d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ec750 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec753 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104ec756 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ec759 mov edx, dword ptr [eax*4 + 0x10510ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10510ea0)));
  /* 104ec760 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 104ec767 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ec769 jmp 0x104ec784 */
  goto L_104ec784;
L_104ec76b:;
  /* 104ec76b call 0x104eb0f0 */
  push32(0x104ec770u); f_104eb0f0();
  /* 104ec770 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104ec776 call 0x104eb100 */
  push32(0x104ec77bu); f_104eb100();
  /* 104ec77b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104ec781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104ec784:;
  /* 104ec784 mov esp, ebp */
  ESP = (EBP);
  /* 104ec786 pop ebp */
  EBP = (pop32());
  /* 104ec787 ret  */
  ESPCHK(0x104ec6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c790 @ 0x104ec790 (102 bytes, 30 insns) */
void f_104ec790(void) {
  FTRACE(0x104ec790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec790 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec791 mov ebp, esp */
  EBP = (ESP);
  /* 104ec793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec796 cmp eax, dword ptr [0x10510fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10510fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec79c jae 0x104ec7db */
  if (!C.cf) goto L_104ec7db;
  /* 104ec79e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec7a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ec7a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec7a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ec7aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ec7ad mov eax, dword ptr [ecx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10510ea0)));
  /* 104ec7b4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104ec7b9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104ec7bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ec7be je 0x104ec7db */
  if (C.zf) goto L_104ec7db;
  /* 104ec7c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec7c3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 104ec7c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec7c9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 104ec7cc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ec7cf mov ecx, dword ptr [edx*4 + 0x10510ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10510ea0)));
  /* 104ec7d6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 104ec7d9 jmp 0x104ec7f4 */
  goto L_104ec7f4;
L_104ec7db:;
  /* 104ec7db call 0x104eb0f0 */
  push32(0x104ec7e0u); f_104eb0f0();
  /* 104ec7e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104ec7e6 call 0x104eb100 */
  push32(0x104ec7ebu); f_104eb100();
  /* 104ec7eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104ec7f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104ec7f4:;
  /* 104ec7f4 pop ebp */
  EBP = (pop32());
  /* 104ec7f5 ret  */
  ESPCHK(0x104ec790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c800 @ 0x104ec800 (260 bytes, 83 insns) */
void f_104ec800(void) {
  FTRACE(0x104ec800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec800 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec801 mov ebp, esp */
  EBP = (ESP);
  /* 104ec803 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ec806 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 104ec80a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ec80d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 104ec810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ec812 je 0x104ec81d */
  if (C.zf) goto L_104ec81d;
  /* 104ec814 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 104ec817 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 104ec81a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_104ec81d:;
  /* 104ec81d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ec820 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 104ec826 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ec828 je 0x104ec832 */
  if (C.zf) goto L_104ec832;
  /* 104ec82a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 104ec82d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 104ec82f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_104ec832:;
  /* 104ec832 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ec835 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 104ec83b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ec83d je 0x104ec848 */
  if (C.zf) goto L_104ec848;
  /* 104ec83f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 104ec842 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 104ec845 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_104ec848:;
  /* 104ec848 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec84b push eax */
  push32((uint32_t)(EAX));
  /* 104ec84c call dword ptr [0x105122d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122d4))), 0x104ec852u);
  /* 104ec852 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ec855 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec859 jne 0x104ec872 */
  if (!C.zf) goto L_104ec872;
  /* 104ec85b call dword ptr [0x105122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122c8))), 0x104ec861u);
  /* 104ec861 push eax */
  push32((uint32_t)(EAX));
  /* 104ec862 call 0x104eb050 */
  push32(0x104ec867u); f_104eb050();
  /* 104ec867 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec86a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ec86d jmp 0x104ec900 */
  goto L_104ec900;
L_104ec872:;
  /* 104ec872 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec876 jne 0x104ec883 */
  if (!C.zf) goto L_104ec883;
  /* 104ec878 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 104ec87b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 104ec87e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 104ec881 jmp 0x104ec892 */
  goto L_104ec892;
L_104ec883:;
  /* 104ec883 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec887 jne 0x104ec892 */
  if (!C.zf) goto L_104ec892;
  /* 104ec889 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 104ec88c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 104ec88f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_104ec892:;
  /* 104ec892 call 0x104ec400 */
  push32(0x104ec897u); f_104ec400();
  /* 104ec897 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ec89a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec89e jne 0x104ec8bb */
  if (!C.zf) goto L_104ec8bb;
  /* 104ec8a0 call 0x104eb0f0 */
  push32(0x104ec8a5u); f_104eb0f0();
  /* 104ec8a5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 104ec8ab call 0x104eb100 */
  push32(0x104ec8b0u); f_104eb100();
  /* 104ec8b0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104ec8b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ec8b9 jmp 0x104ec900 */
  goto L_104ec900;
L_104ec8bb:;
  /* 104ec8bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec8be push eax */
  push32((uint32_t)(EAX));
  /* 104ec8bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ec8c2 push ecx */
  push32((uint32_t)(ECX));
  /* 104ec8c3 call 0x104ec5f0 */
  push32(0x104ec8c8u); f_104ec5f0();
  /* 104ec8c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec8cb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 104ec8ce or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 104ec8d1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 104ec8d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ec8d7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ec8da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ec8dd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104ec8e0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ec8e3 mov edx, dword ptr [eax*4 + 0x10510ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10510ea0)));
  /* 104ec8ea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 104ec8ed mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 104ec8f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ec8f4 push ecx */
  push32((uint32_t)(ECX));
  /* 104ec8f5 call 0x104ec9a0 */
  push32(0x104ec8fau); f_104ec9a0();
  /* 104ec8fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec8fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104ec900:;
  /* 104ec900 mov esp, ebp */
  ESP = (EBP);
  /* 104ec902 pop ebp */
  EBP = (pop32());
  /* 104ec903 ret  */
  ESPCHK(0x104ec800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c910 @ 0x104ec910 (134 bytes, 44 insns) */
void f_104ec910(void) {
  FTRACE(0x104ec910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec910 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec911 mov ebp, esp */
  EBP = (ESP);
  /* 104ec913 push ecx */
  push32((uint32_t)(ECX));
  /* 104ec914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec917 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ec91a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec91d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104ec920 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ec923 mov edx, dword ptr [eax*4 + 0x10510ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10510ea0)));
  /* 104ec92a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec92c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104ec92f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec932 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec936 jne 0x104ec971 */
  if (!C.zf) goto L_104ec971;
  /* 104ec938 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104ec93a call 0x104e6c20 */
  push32(0x104ec93fu); f_104e6c20();
  /* 104ec93f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec942 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec945 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ec949 jne 0x104ec967 */
  if (!C.zf) goto L_104ec967;
  /* 104ec94b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec94e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec951 push edx */
  push32((uint32_t)(EDX));
  /* 104ec952 call dword ptr [0x10512314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512314))), 0x104ec958u);
  /* 104ec958 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec95b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104ec95e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec961 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ec964 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_104ec967:;
  /* 104ec967 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104ec969 call 0x104e6cc0 */
  push32(0x104ec96eu); f_104e6cc0();
  /* 104ec96e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ec971:;
  /* 104ec971 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec974 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ec977 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec97a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104ec97d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ec980 mov edx, dword ptr [eax*4 + 0x10510ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10510ea0)));
  /* 104ec987 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 104ec98b push eax */
  push32((uint32_t)(EAX));
  /* 104ec98c call dword ptr [0x10512318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512318))), 0x104ec992u);
  /* 104ec992 mov esp, ebp */
  ESP = (EBP);
  /* 104ec994 pop ebp */
  EBP = (pop32());
  /* 104ec995 ret  */
  ESPCHK(0x104ec910u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x104ec9a0 (38 bytes, 13 insns) */
void f_104ec9a0(void) {
  FTRACE(0x104ec9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec9a1 mov ebp, esp */
  EBP = (ESP);
  /* 104ec9a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec9a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ec9a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ec9ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104ec9af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ec9b2 mov edx, dword ptr [eax*4 + 0x10510ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10510ea0)));
  /* 104ec9b9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 104ec9bd push eax */
  push32((uint32_t)(EAX));
  /* 104ec9be call dword ptr [0x1051231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051231c))), 0x104ec9c4u);
  /* 104ec9c4 pop ebp */
  EBP = (pop32());
  /* 104ec9c5 ret  */
  ESPCHK(0x104ec9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9d0 @ 0x104ec9d0 (218 bytes, 63 insns) */
void f_104ec9d0(void) {
  FTRACE(0x104ec9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ec9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ec9d1 mov ebp, esp */
  EBP = (ESP);
  /* 104ec9d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ec9d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104ec9dd push 2 */
  push32((uint32_t)(0x2u));
  /* 104ec9df call 0x104e6c20 */
  push32(0x104ec9e4u); f_104e6c20();
  /* 104ec9e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec9e7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 104ec9ee jmp 0x104ec9f9 */
  goto L_104ec9f9;
L_104ec9f0:;
  /* 104ec9f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ec9f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ec9f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104ec9f9:;
  /* 104ec9f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ec9fc cmp ecx, dword ptr [0x10510ba0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10510ba0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eca02 jge 0x104eca99 */
  if ((C.sf==C.of)) goto L_104eca99;
  /* 104eca08 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104eca0b mov eax, dword ptr [0x1050f850] */
  EAX = (r32((uint32_t)(0x1050f850)));
  /* 104eca10 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eca14 je 0x104eca94 */
  if (C.zf) goto L_104eca94;
  /* 104eca16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104eca19 mov edx, dword ptr [0x1050f850] */
  EDX = (r32((uint32_t)(0x1050f850)));
  /* 104eca1f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 104eca22 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104eca25 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 104eca2b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104eca2d je 0x104eca51 */
  if (C.zf) goto L_104eca51;
  /* 104eca2f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104eca32 mov eax, dword ptr [0x1050f850] */
  EAX = (r32((uint32_t)(0x1050f850)));
  /* 104eca37 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104eca3a push ecx */
  push32((uint32_t)(ECX));
  /* 104eca3b call 0x104ed7c0 */
  push32(0x104eca40u); f_104ed7c0();
  /* 104eca40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eca43 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eca46 je 0x104eca51 */
  if (C.zf) goto L_104eca51;
  /* 104eca48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eca4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eca4e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104eca51:;
  /* 104eca51 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eca55 jl 0x104eca94 */
  if ((C.sf!=C.of)) goto L_104eca94;
  /* 104eca57 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104eca5a mov ecx, dword ptr [0x1050f850] */
  ECX = (r32((uint32_t)(0x1050f850)));
  /* 104eca60 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104eca63 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eca66 push edx */
  push32((uint32_t)(EDX));
  /* 104eca67 call dword ptr [0x105122dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122dc))), 0x104eca6du);
  /* 104eca6d push 2 */
  push32((uint32_t)(0x2u));
  /* 104eca6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104eca72 mov ecx, dword ptr [0x1050f850] */
  ECX = (r32((uint32_t)(0x1050f850)));
  /* 104eca78 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104eca7b push edx */
  push32((uint32_t)(EDX));
  /* 104eca7c call 0x104e3cb0 */
  push32(0x104eca81u); f_104e3cb0();
  /* 104eca81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eca84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104eca87 mov ecx, dword ptr [0x1050f850] */
  ECX = (r32((uint32_t)(0x1050f850)));
  /* 104eca8d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_104eca94:;
  /* 104eca94 jmp 0x104ec9f0 */
  goto L_104ec9f0;
L_104eca99:;
  /* 104eca99 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eca9b call 0x104e6cc0 */
  push32(0x104ecaa0u); f_104e6cc0();
  /* 104ecaa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecaa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ecaa6 mov esp, ebp */
  ESP = (EBP);
  /* 104ecaa8 pop ebp */
  EBP = (pop32());
  /* 104ecaa9 ret  */
  ESPCHK(0x104ec9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cab0 @ 0x104ecab0 (68 bytes, 26 insns) */
void f_104ecab0(void) {
  FTRACE(0x104ecab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ecab0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ecab1 mov ebp, esp */
  EBP = (ESP);
  /* 104ecab3 push ecx */
  push32((uint32_t)(ECX));
  /* 104ecab4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecab8 jne 0x104ecac6 */
  if (!C.zf) goto L_104ecac6;
  /* 104ecaba push 0 */
  push32((uint32_t)(0x0u));
  /* 104ecabc call 0x104ecc20 */
  push32(0x104ecac1u); f_104ecc20();
  /* 104ecac1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecac4 jmp 0x104ecaf0 */
  goto L_104ecaf0;
L_104ecac6:;
  /* 104ecac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ecac9 push eax */
  push32((uint32_t)(EAX));
  /* 104ecaca call 0x104ec030 */
  push32(0x104ecacfu); f_104ec030();
  /* 104ecacf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecad2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ecad5 push ecx */
  push32((uint32_t)(ECX));
  /* 104ecad6 call 0x104ecb00 */
  push32(0x104ecadbu); f_104ecb00();
  /* 104ecadb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecade mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ecae1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ecae4 push edx */
  push32((uint32_t)(EDX));
  /* 104ecae5 call 0x104ec0a0 */
  push32(0x104ecaeau); f_104ec0a0();
  /* 104ecaea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecaed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104ecaf0:;
  /* 104ecaf0 mov esp, ebp */
  ESP = (EBP);
  /* 104ecaf2 pop ebp */
  EBP = (pop32());
  /* 104ecaf3 ret  */
  ESPCHK(0x104ecab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb00 @ 0x104ecb00 (65 bytes, 26 insns) */
void f_104ecb00(void) {
  FTRACE(0x104ecb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ecb00 push ebp */
  push32((uint32_t)(EBP));
  /* 104ecb01 mov ebp, esp */
  EBP = (ESP);
  /* 104ecb03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ecb06 push eax */
  push32((uint32_t)(EAX));
  /* 104ecb07 call 0x104ecb50 */
  push32(0x104ecb0cu); f_104ecb50();
  /* 104ecb0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecb0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ecb11 je 0x104ecb18 */
  if (C.zf) goto L_104ecb18;
  /* 104ecb13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ecb16 jmp 0x104ecb3f */
  goto L_104ecb3f;
L_104ecb18:;
  /* 104ecb18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ecb1b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ecb1e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 104ecb24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ecb26 je 0x104ecb3d */
  if (C.zf) goto L_104ecb3d;
  /* 104ecb28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ecb2b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104ecb2e push ecx */
  push32((uint32_t)(ECX));
  /* 104ecb2f call 0x104ed910 */
  push32(0x104ecb34u); f_104ed910();
  /* 104ecb34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecb37 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104ecb39 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ecb3b jmp 0x104ecb3f */
  goto L_104ecb3f;
L_104ecb3d:;
  /* 104ecb3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104ecb3f:;
  /* 104ecb3f pop ebp */
  EBP = (pop32());
  /* 104ecb40 ret  */
  ESPCHK(0x104ecb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb50 @ 0x104ecb50 (183 bytes, 62 insns) */
void f_104ecb50(void) {
  FTRACE(0x104ecb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ecb50 push ebp */
  push32((uint32_t)(EBP));
  /* 104ecb51 mov ebp, esp */
  EBP = (ESP);
  /* 104ecb53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ecb56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104ecb5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ecb60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ecb63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ecb66 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ecb69 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 104ecb6c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecb6f jne 0x104ecbeb */
  if (!C.zf) goto L_104ecbeb;
  /* 104ecb71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ecb74 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104ecb77 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 104ecb7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ecb7f je 0x104ecbeb */
  if (C.zf) goto L_104ecbeb;
  /* 104ecb81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ecb84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ecb87 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 104ecb89 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ecb8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ecb8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecb93 jle 0x104ecbeb */
  if ((C.zf||C.sf!=C.of)) goto L_104ecbeb;
  /* 104ecb95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ecb98 push edx */
  push32((uint32_t)(EDX));
  /* 104ecb99 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ecb9c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104ecb9f push ecx */
  push32((uint32_t)(ECX));
  /* 104ecba0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ecba3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104ecba6 push eax */
  push32((uint32_t)(EAX));
  /* 104ecba7 call 0x104ebac0 */
  push32(0x104ecbacu); f_104ebac0();
  /* 104ecbac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecbaf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecbb2 jne 0x104ecbd5 */
  if (!C.zf) goto L_104ecbd5;
  /* 104ecbb4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ecbb7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ecbba and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 104ecbc0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ecbc2 je 0x104ecbd3 */
  if (C.zf) goto L_104ecbd3;
  /* 104ecbc4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ecbc7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104ecbca and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 104ecbcd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ecbd0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_104ecbd3:;
  /* 104ecbd3 jmp 0x104ecbeb */
  goto L_104ecbeb;
L_104ecbd5:;
  /* 104ecbd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ecbd8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104ecbdb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 104ecbde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ecbe1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 104ecbe4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104ecbeb:;
  /* 104ecbeb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ecbee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ecbf1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104ecbf4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104ecbf6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ecbf9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 104ecc00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ecc03 mov esp, ebp */
  ESP = (EBP);
  /* 104ecc05 pop ebp */
  EBP = (pop32());
  /* 104ecc06 ret  */
  ESPCHK(0x104ecb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc10 @ 0x104ecc10 (15 bytes, 7 insns) */
void f_104ecc10(void) {
  FTRACE(0x104ecc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ecc10 push ebp */
  push32((uint32_t)(EBP));
  /* 104ecc11 mov ebp, esp */
  EBP = (ESP);
  /* 104ecc13 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ecc15 call 0x104ecc20 */
  push32(0x104ecc1au); f_104ecc20();
  /* 104ecc1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecc1d pop ebp */
  EBP = (pop32());
  /* 104ecc1e ret  */
  ESPCHK(0x104ecc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc20 @ 0x104ecc20 (319 bytes, 94 insns) */
void f_104ecc20(void) {
  FTRACE(0x104ecc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ecc20 push ebp */
  push32((uint32_t)(EBP));
  /* 104ecc21 mov ebp, esp */
  EBP = (ESP);
  /* 104ecc23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ecc26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104ecc2d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104ecc34 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ecc36 call 0x104e6c20 */
  push32(0x104ecc3bu); f_104e6c20();
  /* 104ecc3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecc3e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104ecc45 jmp 0x104ecc50 */
  goto L_104ecc50;
L_104ecc47:;
  /* 104ecc47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ecc4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecc4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104ecc50:;
  /* 104ecc50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ecc53 cmp ecx, dword ptr [0x10510ba0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10510ba0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecc59 jge 0x104ecd43 */
  if ((C.sf==C.of)) goto L_104ecd43;
  /* 104ecc5f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ecc62 mov eax, dword ptr [0x1050f850] */
  EAX = (r32((uint32_t)(0x1050f850)));
  /* 104ecc67 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecc6b je 0x104ecd3e */
  if (C.zf) goto L_104ecd3e;
  /* 104ecc71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ecc74 mov edx, dword ptr [0x1050f850] */
  EDX = (r32((uint32_t)(0x1050f850)));
  /* 104ecc7a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 104ecc7d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104ecc80 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 104ecc86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ecc88 je 0x104ecd3e */
  if (C.zf) goto L_104ecd3e;
  /* 104ecc8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ecc91 mov eax, dword ptr [0x1050f850] */
  EAX = (r32((uint32_t)(0x1050f850)));
  /* 104ecc96 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104ecc99 push ecx */
  push32((uint32_t)(ECX));
  /* 104ecc9a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ecc9d push edx */
  push32((uint32_t)(EDX));
  /* 104ecc9e call 0x104ec070 */
  push32(0x104ecca3u); f_104ec070();
  /* 104ecca3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecca6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ecca9 mov ecx, dword ptr [0x1050f850] */
  ECX = (r32((uint32_t)(0x1050f850)));
  /* 104eccaf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104eccb2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104eccb5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 104eccba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eccbc je 0x104ecd25 */
  if (C.zf) goto L_104ecd25;
  /* 104eccbe cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eccc2 jne 0x104ecce9 */
  if (!C.zf) goto L_104ecce9;
  /* 104eccc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104eccc7 mov edx, dword ptr [0x1050f850] */
  EDX = (r32((uint32_t)(0x1050f850)));
  /* 104ecccd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 104eccd0 push eax */
  push32((uint32_t)(EAX));
  /* 104eccd1 call 0x104ecb00 */
  push32(0x104eccd6u); f_104ecb00();
  /* 104eccd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eccd9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eccdc je 0x104ecce7 */
  if (C.zf) goto L_104ecce7;
  /* 104eccde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ecce1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecce4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104ecce7:;
  /* 104ecce7 jmp 0x104ecd25 */
  goto L_104ecd25;
L_104ecce9:;
  /* 104ecce9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecced jne 0x104ecd25 */
  if (!C.zf) goto L_104ecd25;
  /* 104eccef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104eccf2 mov eax, dword ptr [0x1050f850] */
  EAX = (r32((uint32_t)(0x1050f850)));
  /* 104eccf7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104eccfa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104eccfd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 104ecd00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ecd02 je 0x104ecd25 */
  if (C.zf) goto L_104ecd25;
  /* 104ecd04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ecd07 mov ecx, dword ptr [0x1050f850] */
  ECX = (r32((uint32_t)(0x1050f850)));
  /* 104ecd0d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104ecd10 push edx */
  push32((uint32_t)(EDX));
  /* 104ecd11 call 0x104ecb00 */
  push32(0x104ecd16u); f_104ecb00();
  /* 104ecd16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecd19 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecd1c jne 0x104ecd25 */
  if (!C.zf) goto L_104ecd25;
  /* 104ecd1e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_104ecd25:;
  /* 104ecd25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ecd28 mov ecx, dword ptr [0x1050f850] */
  ECX = (r32((uint32_t)(0x1050f850)));
  /* 104ecd2e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104ecd31 push edx */
  push32((uint32_t)(EDX));
  /* 104ecd32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ecd35 push eax */
  push32((uint32_t)(EAX));
  /* 104ecd36 call 0x104ec0e0 */
  push32(0x104ecd3bu); f_104ec0e0();
  /* 104ecd3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ecd3e:;
  /* 104ecd3e jmp 0x104ecc47 */
  goto L_104ecc47;
L_104ecd43:;
  /* 104ecd43 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ecd45 call 0x104e6cc0 */
  push32(0x104ecd4au); f_104e6cc0();
  /* 104ecd4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecd4d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecd51 jne 0x104ecd58 */
  if (!C.zf) goto L_104ecd58;
  /* 104ecd53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ecd56 jmp 0x104ecd5b */
  goto L_104ecd5b;
L_104ecd58:;
  /* 104ecd58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104ecd5b:;
  /* 104ecd5b mov esp, ebp */
  ESP = (EBP);
  /* 104ecd5d pop ebp */
  EBP = (pop32());
  /* 104ecd5e ret  */
  ESPCHK(0x104ecc20u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x104ecd60 (15 bytes, 7 insns) */
void f_104ecd60(void) {
  FTRACE(0x104ecd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ecd60 push ebp */
  push32((uint32_t)(EBP));
  /* 104ecd61 mov ebp, esp */
  EBP = (ESP);
  /* 104ecd63 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ecd65 call 0x104e2190 */
  push32(0x104ecd6au); f_104e2190();
  /* 104ecd6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecd6d pop ebp */
  EBP = (pop32());
  /* 104ecd6e ret  */
  ESPCHK(0x104ecd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd70 @ 0x104ecd70 (1007 bytes, 269 insns) */
void f_104ecd70(void) {
  FTRACE(0x104ecd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ecd70 push ebp */
  push32((uint32_t)(EBP));
  /* 104ecd71 mov ebp, esp */
  EBP = (ESP);
  /* 104ecd73 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ecd79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecd7d jl 0x104ecd85 */
  if ((C.sf!=C.of)) goto L_104ecd85;
  /* 104ecd7f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecd83 jle 0x104ecd8c */
  if ((C.zf||C.sf!=C.of)) goto L_104ecd8c;
L_104ecd85:;
  /* 104ecd85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ecd87 jmp 0x104ed15b */
  goto L_104ed15b;
L_104ecd8c:;
  /* 104ecd8c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104ecd8e call 0x104e6c20 */
  push32(0x104ecd93u); f_104e6c20();
  /* 104ecd93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecd96 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104ecd9d mov eax, dword ptr [0x1050f83c] */
  EAX = (r32((uint32_t)(0x1050f83c)));
  /* 104ecda2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecda5 mov dword ptr [0x1050f83c], eax */
  w32((uint32_t)(0x1050f83c), (EAX));
L_104ecdaa:;
  /* 104ecdaa cmp dword ptr [0x1050f84c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f84c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecdb1 je 0x104ecdbd */
  if (C.zf) goto L_104ecdbd;
  /* 104ecdb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ecdb5 call dword ptr [0x10512274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512274))), 0x104ecdbbu);
  /* 104ecdbb jmp 0x104ecdaa */
  goto L_104ecdaa;
L_104ecdbd:;
  /* 104ecdbd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecdc1 je 0x104ece01 */
  if (C.zf) goto L_104ece01;
  /* 104ecdc3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecdc7 je 0x104ecde1 */
  if (C.zf) goto L_104ecde1;
  /* 104ecdc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ecdcc push ecx */
  push32((uint32_t)(ECX));
  /* 104ecdcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ecdd0 push edx */
  push32((uint32_t)(EDX));
  /* 104ecdd1 call 0x104ed160 */
  push32(0x104ecdd6u); f_104ed160();
  /* 104ecdd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecdd9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 104ecddf jmp 0x104ecdf3 */
  goto L_104ecdf3;
L_104ecde1:;
  /* 104ecde1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ecde4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ecde7 mov ecx, dword ptr [eax + 0x1050e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1050e4dc)));
  /* 104ecded mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_104ecdf3:;
  /* 104ecdf3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 104ecdf9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104ecdfc jmp 0x104ed13b */
  goto L_104ed13b;
L_104ece01:;
  /* 104ece01 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 104ece08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104ece0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ece13 je 0x104ed133 */
  if (C.zf) goto L_104ed133;
  /* 104ece19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ece1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ece1f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ece22 jne 0x104ed044 */
  if (!C.zf) goto L_104ed044;
  /* 104ece28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ece2b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 104ece2f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ece32 jne 0x104ed044 */
  if (!C.zf) goto L_104ed044;
  /* 104ece38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ece3b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 104ece3f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ece42 jne 0x104ed044 */
  if (!C.zf) goto L_104ed044;
  /* 104ece48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ece4b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_104ece51:;
  /* 104ece51 push 0x1050b0b4 */
  push32((uint32_t)(0x1050b0b4u));
  /* 104ece56 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104ece5c push ecx */
  push32((uint32_t)(ECX));
  /* 104ece5d call 0x104eefc0 */
  push32(0x104ece62u); f_104eefc0();
  /* 104ece62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ece65 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 104ece6b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ece72 je 0x104ece9d */
  if (C.zf) goto L_104ece9d;
  /* 104ece74 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ece7a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ece80 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 104ece86 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ece8d je 0x104ece9d */
  if (C.zf) goto L_104ece9d;
  /* 104ece8f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ece95 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ece98 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ece9b jne 0x104ecec3 */
  if (!C.zf) goto L_104ecec3;
L_104ece9d:;
  /* 104ece9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecea1 je 0x104ecebc */
  if (C.zf) goto L_104ecebc;
  /* 104ecea3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104ecea5 call 0x104e6cc0 */
  push32(0x104eceaau); f_104e6cc0();
  /* 104eceaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecead mov edx, dword ptr [0x1050f83c] */
  EDX = (r32((uint32_t)(0x1050f83c)));
  /* 104eceb3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eceb6 mov dword ptr [0x1050f83c], edx */
  w32((uint32_t)(0x1050f83c), (EDX));
L_104ecebc:;
  /* 104ecebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ecebe jmp 0x104ed15b */
  goto L_104ed15b;
L_104ecec3:;
  /* 104ecec3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 104ececa jmp 0x104eced5 */
  goto L_104eced5;
L_104ececc:;
  /* 104ececc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ececf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eced2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_104eced5:;
  /* 104eced5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eced9 jg 0x104ecf23 */
  if ((!C.zf&&C.sf==C.of)) goto L_104ecf23;
  /* 104ecedb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 104ecee1 push ecx */
  push32((uint32_t)(ECX));
  /* 104ecee2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104ecee8 push edx */
  push32((uint32_t)(EDX));
  /* 104ecee9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104eceec imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104eceef mov ecx, dword ptr [eax + 0x1050e4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1050e4d8)));
  /* 104ecef5 push ecx */
  push32((uint32_t)(ECX));
  /* 104ecef6 call 0x104eef80 */
  push32(0x104ecefbu); f_104eef80();
  /* 104ecefb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecefe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ecf00 jne 0x104ecf21 */
  if (!C.zf) goto L_104ecf21;
  /* 104ecf02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ecf05 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ecf08 mov eax, dword ptr [edx + 0x1050e4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1050e4d8)));
  /* 104ecf0e push eax */
  push32((uint32_t)(EAX));
  /* 104ecf0f call 0x104e6050 */
  push32(0x104ecf14u); f_104e6050();
  /* 104ecf14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecf17 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecf1d jne 0x104ecf21 */
  if (!C.zf) goto L_104ecf21;
  /* 104ecf1f jmp 0x104ecf23 */
  goto L_104ecf23;
L_104ecf21:;
  /* 104ecf21 jmp 0x104ececc */
  goto L_104ececc;
L_104ecf23:;
  /* 104ecf23 push 0x1050b0b0 */
  push32((uint32_t)(0x1050b0b0u));
  /* 104ecf28 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ecf2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecf31 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 104ecf37 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ecf3d push edx */
  push32((uint32_t)(EDX));
  /* 104ecf3e call 0x104eef40 */
  push32(0x104ecf43u); f_104eef40();
  /* 104ecf43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecf46 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 104ecf4c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecf53 jne 0x104ecf89 */
  if (!C.zf) goto L_104ecf89;
  /* 104ecf55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ecf5b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ecf5e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecf61 je 0x104ecf89 */
  if (C.zf) goto L_104ecf89;
  /* 104ecf63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecf67 je 0x104ecf82 */
  if (C.zf) goto L_104ecf82;
  /* 104ecf69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104ecf6b call 0x104e6cc0 */
  push32(0x104ecf70u); f_104e6cc0();
  /* 104ecf70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecf73 mov edx, dword ptr [0x1050f83c] */
  EDX = (r32((uint32_t)(0x1050f83c)));
  /* 104ecf79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ecf7c mov dword ptr [0x1050f83c], edx */
  w32((uint32_t)(0x1050f83c), (EDX));
L_104ecf82:;
  /* 104ecf82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ecf84 jmp 0x104ed15b */
  goto L_104ed15b;
L_104ecf89:;
  /* 104ecf89 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ecf8d jg 0x104ecfda */
  if ((!C.zf&&C.sf==C.of)) goto L_104ecfda;
  /* 104ecf8f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 104ecf95 push eax */
  push32((uint32_t)(EAX));
  /* 104ecf96 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ecf9c push ecx */
  push32((uint32_t)(ECX));
  /* 104ecf9d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 104ecfa3 push edx */
  push32((uint32_t)(EDX));
  /* 104ecfa4 call 0x104e6a40 */
  push32(0x104ecfa9u); f_104e6a40();
  /* 104ecfa9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecfac mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 104ecfb2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 104ecfba lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 104ecfc0 push ecx */
  push32((uint32_t)(ECX));
  /* 104ecfc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ecfc4 push edx */
  push32((uint32_t)(EDX));
  /* 104ecfc5 call 0x104ed160 */
  push32(0x104ecfcau); f_104ed160();
  /* 104ecfca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecfcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ecfcf je 0x104ecfda */
  if (C.zf) goto L_104ecfda;
  /* 104ecfd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ecfd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecfd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104ecfda:;
  /* 104ecfda mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ecfe0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ecfe6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 104ecfec mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104ecff2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104ecff5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ecff7 je 0x104ed008 */
  if (C.zf) goto L_104ed008;
  /* 104ecff9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104ecfff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed002 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_104ed008:;
  /* 104ed008 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 104ed00e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104ed011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed013 jne 0x104ece51 */
  if (!C.zf) goto L_104ece51;
  /* 104ed019 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed01d je 0x104ed02c */
  if (C.zf) goto L_104ed02c;
  /* 104ed01f call 0x104ed300 */
  push32(0x104ed024u); f_104ed300();
  /* 104ed024 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 104ed02a jmp 0x104ed036 */
  goto L_104ed036;
L_104ed02c:;
  /* 104ed02c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_104ed036:;
  /* 104ed036 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 104ed03c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ed03f jmp 0x104ed131 */
  goto L_104ed131;
L_104ed044:;
  /* 104ed044 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed047 push edx */
  push32((uint32_t)(EDX));
  /* 104ed048 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ed04a push 0 */
  push32((uint32_t)(0x0u));
  /* 104ed04c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 104ed052 push eax */
  push32((uint32_t)(EAX));
  /* 104ed053 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed056 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed057 call 0x104ed400 */
  push32(0x104ed05cu); f_104ed400();
  /* 104ed05c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed05f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ed062 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed066 je 0x104ed131 */
  if (C.zf) goto L_104ed131;
  /* 104ed06c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104ed073 jmp 0x104ed07e */
  goto L_104ed07e;
L_104ed075:;
  /* 104ed075 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ed078 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed07b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104ed07e:;
  /* 104ed07e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed082 jg 0x104ed0e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_104ed0e0;
  /* 104ed084 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed088 je 0x104ed0de */
  if (C.zf) goto L_104ed0de;
  /* 104ed08a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ed08d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ed090 mov ecx, dword ptr [eax + 0x1050e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1050e4dc)));
  /* 104ed096 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed097 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 104ed09d push edx */
  push32((uint32_t)(EDX));
  /* 104ed09e call 0x104eeeb0 */
  push32(0x104ed0a3u); f_104eeeb0();
  /* 104ed0a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed0a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed0a8 je 0x104ed0d5 */
  if (C.zf) goto L_104ed0d5;
  /* 104ed0aa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 104ed0b0 push eax */
  push32((uint32_t)(EAX));
  /* 104ed0b1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104ed0b4 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed0b5 call 0x104ed160 */
  push32(0x104ed0bau); f_104ed160();
  /* 104ed0ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed0bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed0bf je 0x104ed0cc */
  if (C.zf) goto L_104ed0cc;
  /* 104ed0c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ed0c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed0c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104ed0ca jmp 0x104ed0d3 */
  goto L_104ed0d3;
L_104ed0cc:;
  /* 104ed0cc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_104ed0d3:;
  /* 104ed0d3 jmp 0x104ed0de */
  goto L_104ed0de;
L_104ed0d5:;
  /* 104ed0d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ed0d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed0db mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104ed0de:;
  /* 104ed0de jmp 0x104ed075 */
  goto L_104ed075;
L_104ed0e0:;
  /* 104ed0e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed0e4 je 0x104ed10b */
  if (C.zf) goto L_104ed10b;
  /* 104ed0e6 call 0x104ed300 */
  push32(0x104ed0ebu); f_104ed300();
  /* 104ed0eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ed0ee push 2 */
  push32((uint32_t)(0x2u));
  /* 104ed0f0 mov ecx, dword ptr [0x1050e4dc] */
  ECX = (r32((uint32_t)(0x1050e4dc)));
  /* 104ed0f6 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed0f7 call 0x104e3cb0 */
  push32(0x104ed0fcu); f_104e3cb0();
  /* 104ed0fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed0ff mov dword ptr [0x1050e4dc], 0 */
  w32((uint32_t)(0x1050e4dc), (0x0u));
  /* 104ed109 jmp 0x104ed131 */
  goto L_104ed131;
L_104ed10b:;
  /* 104ed10b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed10f je 0x104ed11e */
  if (C.zf) goto L_104ed11e;
  /* 104ed111 call 0x104ed300 */
  push32(0x104ed116u); f_104ed300();
  /* 104ed116 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 104ed11c jmp 0x104ed128 */
  goto L_104ed128;
L_104ed11e:;
  /* 104ed11e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_104ed128:;
  /* 104ed128 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 104ed12e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104ed131:;
  /* 104ed131 jmp 0x104ed13b */
  goto L_104ed13b;
L_104ed133:;
  /* 104ed133 call 0x104ed300 */
  push32(0x104ed138u); f_104ed300();
  /* 104ed138 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104ed13b:;
  /* 104ed13b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed13f je 0x104ed158 */
  if (C.zf) goto L_104ed158;
  /* 104ed141 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104ed143 call 0x104e6cc0 */
  push32(0x104ed148u); f_104e6cc0();
  /* 104ed148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed14b mov eax, dword ptr [0x1050f83c] */
  EAX = (r32((uint32_t)(0x1050f83c)));
  /* 104ed150 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ed153 mov dword ptr [0x1050f83c], eax */
  w32((uint32_t)(0x1050f83c), (EAX));
L_104ed158:;
  /* 104ed158 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104ed15b:;
  /* 104ed15b mov esp, ebp */
  ESP = (EBP);
  /* 104ed15d pop ebp */
  EBP = (pop32());
  /* 104ed15e ret  */
  ESPCHK(0x104ecd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d160 @ 0x104ed160 (403 bytes, 117 insns) */
void f_104ed160(void) {
  FTRACE(0x104ed160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ed160 push ebp */
  push32((uint32_t)(EBP));
  /* 104ed161 mov ebp, esp */
  EBP = (ESP);
  /* 104ed163 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ed169 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed16c push eax */
  push32((uint32_t)(EAX));
  /* 104ed16d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 104ed173 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed174 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 104ed17a push edx */
  push32((uint32_t)(EDX));
  /* 104ed17b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 104ed181 push eax */
  push32((uint32_t)(EAX));
  /* 104ed182 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed185 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed186 call 0x104ed400 */
  push32(0x104ed18bu); f_104ed400();
  /* 104ed18b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed18e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed190 jne 0x104ed199 */
  if (!C.zf) goto L_104ed199;
  /* 104ed192 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ed194 jmp 0x104ed2ef */
  goto L_104ed2ef;
L_104ed199:;
  /* 104ed199 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 104ed19e push 0x1050b0b8 */
  push32((uint32_t)(0x1050b0b8u));
  /* 104ed1a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ed1a5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 104ed1ab push edx */
  push32((uint32_t)(EDX));
  /* 104ed1ac call 0x104e6050 */
  push32(0x104ed1b1u); f_104e6050();
  /* 104ed1b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed1b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed1b7 push eax */
  push32((uint32_t)(EAX));
  /* 104ed1b8 call 0x104e3220 */
  push32(0x104ed1bdu); f_104e3220();
  /* 104ed1bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed1c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ed1c3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed1c7 jne 0x104ed1d0 */
  if (!C.zf) goto L_104ed1d0;
  /* 104ed1c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ed1cb jmp 0x104ed2ef */
  goto L_104ed2ef;
L_104ed1d0:;
  /* 104ed1d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed1d3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ed1d6 mov ecx, dword ptr [eax + 0x1050e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1050e4dc)));
  /* 104ed1dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ed1df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed1e2 mov eax, dword ptr [edx*4 + 0x1050f6b8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1050f6b8)));
  /* 104ed1e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ed1ec push 6 */
  push32((uint32_t)(0x6u));
  /* 104ed1ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed1f1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ed1f4 add ecx, 0x1050f708 */
  { uint32_t _a=(ECX),_b=(0x1050f708u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed1fa push ecx */
  push32((uint32_t)(ECX));
  /* 104ed1fb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 104ed1fe push edx */
  push32((uint32_t)(EDX));
  /* 104ed1ff call 0x104e9b00 */
  push32(0x104ed204u); f_104e9b00();
  /* 104ed204 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed207 mov eax, dword ptr [0x1050f6d0] */
  EAX = (r32((uint32_t)(0x1050f6d0)));
  /* 104ed20c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104ed20f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 104ed215 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed216 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ed219 push edx */
  push32((uint32_t)(EDX));
  /* 104ed21a call 0x104e61d0 */
  push32(0x104ed21fu); f_104e61d0();
  /* 104ed21f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed222 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed225 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ed228 mov dword ptr [ecx + 0x1050e4dc], eax */
  w32((uint32_t)(ECX + 0x1050e4dc), (EAX));
  /* 104ed22e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 104ed234 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104ed23a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed23d mov dword ptr [eax*4 + 0x1050f6b8], edx */
  w32((uint32_t)(EAX*4 + 0x1050f6b8), (EDX));
  /* 104ed244 push 6 */
  push32((uint32_t)(0x6u));
  /* 104ed246 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 104ed24c push ecx */
  push32((uint32_t)(ECX));
  /* 104ed24d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed250 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ed253 add edx, 0x1050f708 */
  { uint32_t _a=(EDX),_b=(0x1050f708u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed259 push edx */
  push32((uint32_t)(EDX));
  /* 104ed25a call 0x104e9b00 */
  push32(0x104ed25fu); f_104e9b00();
  /* 104ed25f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed262 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed266 jne 0x104ed273 */
  if (!C.zf) goto L_104ed273;
  /* 104ed268 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ed26e mov dword ptr [0x1050f6d0], eax */
  w32((uint32_t)(0x1050f6d0), (EAX));
L_104ed273:;
  /* 104ed273 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed277 jne 0x104ed285 */
  if (!C.zf) goto L_104ed285;
  /* 104ed279 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104ed27f mov dword ptr [0x1050f6d4], ecx */
  w32((uint32_t)(0x1050f6d4), (ECX));
L_104ed285:;
  /* 104ed285 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed288 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ed28b call dword ptr [edx + 0x1050e4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1050e4e0))), 0x104ed291u);
  /* 104ed291 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed293 je 0x104ed2cc */
  if (C.zf) goto L_104ed2cc;
  /* 104ed295 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed298 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ed29b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ed29e mov dword ptr [eax + 0x1050e4dc], ecx */
  w32((uint32_t)(EAX + 0x1050e4dc), (ECX));
  /* 104ed2a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ed2a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ed2a9 push edx */
  push32((uint32_t)(EDX));
  /* 104ed2aa call 0x104e3cb0 */
  push32(0x104ed2afu); f_104e3cb0();
  /* 104ed2af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed2b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed2b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ed2b8 mov dword ptr [eax*4 + 0x1050f6b8], ecx */
  w32((uint32_t)(EAX*4 + 0x1050f6b8), (ECX));
  /* 104ed2bf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104ed2c2 mov dword ptr [0x1050f6d0], edx */
  w32((uint32_t)(0x1050f6d0), (EDX));
  /* 104ed2c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ed2ca jmp 0x104ed2ef */
  goto L_104ed2ef;
L_104ed2cc:;
  /* 104ed2cc cmp dword ptr [ebp - 0xc], 0x1050e3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1050e3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed2d3 je 0x104ed2e3 */
  if (C.zf) goto L_104ed2e3;
  /* 104ed2d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ed2d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ed2da push eax */
  push32((uint32_t)(EAX));
  /* 104ed2db call 0x104e3cb0 */
  push32(0x104ed2e0u); f_104e3cb0();
  /* 104ed2e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ed2e3:;
  /* 104ed2e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed2e6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ed2e9 mov eax, dword ptr [ecx + 0x1050e4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1050e4dc)));
L_104ed2ef:;
  /* 104ed2ef mov esp, ebp */
  ESP = (EBP);
  /* 104ed2f1 pop ebp */
  EBP = (pop32());
  /* 104ed2f2 ret  */
  ESPCHK(0x104ed160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d300 @ 0x104ed300 (256 bytes, 72 insns) */
void f_104ed300(void) {
  FTRACE(0x104ed300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ed300 push ebp */
  push32((uint32_t)(EBP));
  /* 104ed301 mov ebp, esp */
  EBP = (ESP);
  /* 104ed303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ed306 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 104ed30d cmp dword ptr [0x1050e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed314 jne 0x104ed334 */
  if (!C.zf) goto L_104ed334;
  /* 104ed316 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 104ed31b push 0x1050b0b8 */
  push32((uint32_t)(0x1050b0b8u));
  /* 104ed320 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ed322 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 104ed327 call 0x104e3220 */
  push32(0x104ed32cu); f_104e3220();
  /* 104ed32c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed32f mov dword ptr [0x1050e4dc], eax */
  w32((uint32_t)(0x1050e4dc), (EAX));
L_104ed334:;
  /* 104ed334 mov eax, dword ptr [0x1050e4dc] */
  EAX = (r32((uint32_t)(0x1050e4dc)));
  /* 104ed339 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104ed33c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104ed343 jmp 0x104ed34e */
  goto L_104ed34e;
L_104ed345:;
  /* 104ed345 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ed348 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed34b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104ed34e:;
  /* 104ed34e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ed351 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ed354 mov eax, dword ptr [edx + 0x1050e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1050e4dc)));
  /* 104ed35a push eax */
  push32((uint32_t)(EAX));
  /* 104ed35b push 0x1050b0c4 */
  push32((uint32_t)(0x1050b0c4u));
  /* 104ed360 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ed363 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ed366 mov edx, dword ptr [ecx + 0x1050e4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1050e4d8)));
  /* 104ed36c push edx */
  push32((uint32_t)(EDX));
  /* 104ed36d push 3 */
  push32((uint32_t)(0x3u));
  /* 104ed36f mov eax, dword ptr [0x1050e4dc] */
  EAX = (r32((uint32_t)(0x1050e4dc)));
  /* 104ed374 push eax */
  push32((uint32_t)(EAX));
  /* 104ed375 call 0x104ed5a0 */
  push32(0x104ed37au); f_104ed5a0();
  /* 104ed37a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed37d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed381 jge 0x104ed3c9 */
  if ((C.sf==C.of)) goto L_104ed3c9;
  /* 104ed383 push 0x1050b0b0 */
  push32((uint32_t)(0x1050b0b0u));
  /* 104ed388 mov ecx, dword ptr [0x1050e4dc] */
  ECX = (r32((uint32_t)(0x1050e4dc)));
  /* 104ed38e push ecx */
  push32((uint32_t)(ECX));
  /* 104ed38f call 0x104e61e0 */
  push32(0x104ed394u); f_104e61e0();
  /* 104ed394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed397 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ed39a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed39d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ed3a0 mov eax, dword ptr [edx + 0x1050e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1050e4dc)));
  /* 104ed3a6 push eax */
  push32((uint32_t)(EAX));
  /* 104ed3a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ed3aa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ed3ad mov edx, dword ptr [ecx + 0x1050e4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1050e4dc)));
  /* 104ed3b3 push edx */
  push32((uint32_t)(EDX));
  /* 104ed3b4 call 0x104eeeb0 */
  push32(0x104ed3b9u); f_104eeeb0();
  /* 104ed3b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed3bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed3be je 0x104ed3c7 */
  if (C.zf) goto L_104ed3c7;
  /* 104ed3c0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104ed3c7:;
  /* 104ed3c7 jmp 0x104ed3f7 */
  goto L_104ed3f7;
L_104ed3c9:;
  /* 104ed3c9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed3cd jne 0x104ed3d6 */
  if (!C.zf) goto L_104ed3d6;
  /* 104ed3cf mov eax, dword ptr [0x1050e4dc] */
  EAX = (r32((uint32_t)(0x1050e4dc)));
  /* 104ed3d4 jmp 0x104ed3fc */
  goto L_104ed3fc;
L_104ed3d6:;
  /* 104ed3d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ed3d8 mov eax, dword ptr [0x1050e4dc] */
  EAX = (r32((uint32_t)(0x1050e4dc)));
  /* 104ed3dd push eax */
  push32((uint32_t)(EAX));
  /* 104ed3de call 0x104e3cb0 */
  push32(0x104ed3e3u); f_104e3cb0();
  /* 104ed3e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed3e6 mov dword ptr [0x1050e4dc], 0 */
  w32((uint32_t)(0x1050e4dc), (0x0u));
  /* 104ed3f0 mov eax, dword ptr [0x1050e4f4] */
  EAX = (r32((uint32_t)(0x1050e4f4)));
  /* 104ed3f5 jmp 0x104ed3fc */
  goto L_104ed3fc;
L_104ed3f7:;
  /* 104ed3f7 jmp 0x104ed345 */
  goto L_104ed345;
L_104ed3fc:;
  /* 104ed3fc mov esp, ebp */
  ESP = (EBP);
  /* 104ed3fe pop ebp */
  EBP = (pop32());
  /* 104ed3ff ret  */
  ESPCHK(0x104ed300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d400 @ 0x104ed400 (388 bytes, 115 insns) */
void f_104ed400(void) {
  FTRACE(0x104ed400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ed400 push ebp */
  push32((uint32_t)(EBP));
  /* 104ed401 mov ebp, esp */
  EBP = (ESP);
  /* 104ed403 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ed409 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed40d jne 0x104ed416 */
  if (!C.zf) goto L_104ed416;
  /* 104ed40f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ed411 jmp 0x104ed580 */
  goto L_104ed580;
L_104ed416:;
  /* 104ed416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed419 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ed41c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed41f jne 0x104ed470 */
  if (!C.zf) goto L_104ed470;
  /* 104ed421 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed424 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 104ed428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed42a jne 0x104ed470 */
  if (!C.zf) goto L_104ed470;
  /* 104ed42c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed42f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 104ed432 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed435 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 104ed439 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed43d je 0x104ed459 */
  if (C.zf) goto L_104ed459;
  /* 104ed43f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ed442 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 104ed447 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ed44a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 104ed450 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ed453 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_104ed459:;
  /* 104ed459 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed45d je 0x104ed468 */
  if (C.zf) goto L_104ed468;
  /* 104ed45f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104ed462 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_104ed468:;
  /* 104ed468 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed46b jmp 0x104ed580 */
  goto L_104ed580;
L_104ed470:;
  /* 104ed470 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed473 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed474 push 0x1050e450 */
  push32((uint32_t)(0x1050e450u));
  /* 104ed479 call 0x104eeeb0 */
  push32(0x104ed47eu); f_104eeeb0();
  /* 104ed47e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed483 je 0x104ed538 */
  if (C.zf) goto L_104ed538;
  /* 104ed489 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed48c push edx */
  push32((uint32_t)(EDX));
  /* 104ed48d push 0x1050e3cc */
  push32((uint32_t)(0x1050e3ccu));
  /* 104ed492 call 0x104eeeb0 */
  push32(0x104ed497u); f_104eeeb0();
  /* 104ed497 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed49a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed49c je 0x104ed538 */
  if (C.zf) goto L_104ed538;
  /* 104ed4a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed4a5 push eax */
  push32((uint32_t)(EAX));
  /* 104ed4a6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 104ed4ac push ecx */
  push32((uint32_t)(ECX));
  /* 104ed4ad call 0x104ed5f0 */
  push32(0x104ed4b2u); f_104ed5f0();
  /* 104ed4b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed4b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed4b7 je 0x104ed4c0 */
  if (C.zf) goto L_104ed4c0;
  /* 104ed4b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ed4bb jmp 0x104ed580 */
  goto L_104ed580;
L_104ed4c0:;
  /* 104ed4c0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 104ed4c6 push edx */
  push32((uint32_t)(EDX));
  /* 104ed4c7 push 0x1050f6e0 */
  push32((uint32_t)(0x1050f6e0u));
  /* 104ed4cc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 104ed4d2 push eax */
  push32((uint32_t)(EAX));
  /* 104ed4d3 call 0x104ef000 */
  push32(0x104ed4d8u); f_104ef000();
  /* 104ed4d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed4db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed4dd jne 0x104ed4e6 */
  if (!C.zf) goto L_104ed4e6;
  /* 104ed4df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ed4e1 jmp 0x104ed580 */
  goto L_104ed580;
L_104ed4e6:;
  /* 104ed4e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ed4e8 mov cx, word ptr [0x1050f6e4] */
  CX = (r16((uint32_t)(0x1050f6e4)));
  /* 104ed4ef mov dword ptr [0x1050f6e8], ecx */
  w32((uint32_t)(0x1050f6e8), (ECX));
  /* 104ed4f5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 104ed4fb push edx */
  push32((uint32_t)(EDX));
  /* 104ed4fc push 0x1050e450 */
  push32((uint32_t)(0x1050e450u));
  /* 104ed501 call 0x104ed750 */
  push32(0x104ed506u); f_104ed750();
  /* 104ed506 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed509 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed50c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ed50f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ed511 je 0x104ed526 */
  if (C.zf) goto L_104ed526;
  /* 104ed513 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed516 push edx */
  push32((uint32_t)(EDX));
  /* 104ed517 push 0x1050e3cc */
  push32((uint32_t)(0x1050e3ccu));
  /* 104ed51c call 0x104e61d0 */
  push32(0x104ed521u); f_104e61d0();
  /* 104ed521 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed524 jmp 0x104ed538 */
  goto L_104ed538;
L_104ed526:;
  /* 104ed526 push 0x1050e450 */
  push32((uint32_t)(0x1050e450u));
  /* 104ed52b push 0x1050e3cc */
  push32((uint32_t)(0x1050e3ccu));
  /* 104ed530 call 0x104e61d0 */
  push32(0x104ed535u); f_104e61d0();
  /* 104ed535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ed538:;
  /* 104ed538 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed53c je 0x104ed551 */
  if (C.zf) goto L_104ed551;
  /* 104ed53e push 6 */
  push32((uint32_t)(0x6u));
  /* 104ed540 push 0x1050f6e0 */
  push32((uint32_t)(0x1050f6e0u));
  /* 104ed545 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ed548 push eax */
  push32((uint32_t)(EAX));
  /* 104ed549 call 0x104e9b00 */
  push32(0x104ed54eu); f_104e9b00();
  /* 104ed54e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ed551:;
  /* 104ed551 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed555 je 0x104ed56a */
  if (C.zf) goto L_104ed56a;
  /* 104ed557 push 4 */
  push32((uint32_t)(0x4u));
  /* 104ed559 push 0x1050f6e8 */
  push32((uint32_t)(0x1050f6e8u));
  /* 104ed55e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104ed561 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed562 call 0x104e9b00 */
  push32(0x104ed567u); f_104e9b00();
  /* 104ed567 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ed56a:;
  /* 104ed56a push 0x1050e450 */
  push32((uint32_t)(0x1050e450u));
  /* 104ed56f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed572 push edx */
  push32((uint32_t)(EDX));
  /* 104ed573 call 0x104e61d0 */
  push32(0x104ed578u); f_104e61d0();
  /* 104ed578 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed57b mov eax, 0x1050e450 */
  EAX = (0x1050e450u);
L_104ed580:;
  /* 104ed580 mov esp, ebp */
  ESP = (EBP);
  /* 104ed582 pop ebp */
  EBP = (pop32());
  /* 104ed583 ret  */
  ESPCHK(0x104ed400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d590 @ 0x104ed590 (7 bytes, 5 insns) */
void f_104ed590(void) {
  FTRACE(0x104ed590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ed590 push ebp */
  push32((uint32_t)(EBP));
  /* 104ed591 mov ebp, esp */
  EBP = (ESP);
  /* 104ed593 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ed595 pop ebp */
  EBP = (pop32());
  /* 104ed596 ret  */
  ESPCHK(0x104ed590u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x104ed5a0 (79 bytes, 28 insns) */
void f_104ed5a0(void) {
  FTRACE(0x104ed5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ed5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ed5a1 mov ebp, esp */
  EBP = (ESP);
  /* 104ed5a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ed5a6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 104ed5a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ed5ac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104ed5b3 jmp 0x104ed5be */
  goto L_104ed5be;
L_104ed5b5:;
  /* 104ed5b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ed5b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed5bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104ed5be:;
  /* 104ed5be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ed5c1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed5c4 jge 0x104ed5e4 */
  if ((C.sf==C.of)) goto L_104ed5e4;
  /* 104ed5c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ed5c9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed5cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ed5cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ed5d2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 104ed5d5 push edx */
  push32((uint32_t)(EDX));
  /* 104ed5d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed5d9 push eax */
  push32((uint32_t)(EAX));
  /* 104ed5da call 0x104e61e0 */
  push32(0x104ed5dfu); f_104e61e0();
  /* 104ed5df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed5e2 jmp 0x104ed5b5 */
  goto L_104ed5b5;
L_104ed5e4:;
  /* 104ed5e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104ed5eb mov esp, ebp */
  ESP = (EBP);
  /* 104ed5ed pop ebp */
  EBP = (pop32());
  /* 104ed5ee ret  */
  ESPCHK(0x104ed5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5f0 @ 0x104ed5f0 (349 bytes, 122 insns) */
void f_104ed5f0(void) {
  FTRACE(0x104ed5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ed5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ed5f1 mov ebp, esp */
  EBP = (ESP);
  /* 104ed5f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ed5f6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 104ed5fb push 0 */
  push32((uint32_t)(0x0u));
  /* 104ed5fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed600 push eax */
  push32((uint32_t)(EAX));
  /* 104ed601 call 0x104e6f90 */
  push32(0x104ed606u); f_104e6f90();
  /* 104ed606 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed609 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed60c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104ed60f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ed611 jne 0x104ed61a */
  if (!C.zf) goto L_104ed61a;
  /* 104ed613 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ed615 jmp 0x104ed749 */
  goto L_104ed749;
L_104ed61a:;
  /* 104ed61a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed61d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ed620 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed623 jne 0x104ed650 */
  if (!C.zf) goto L_104ed650;
  /* 104ed625 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed628 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 104ed62c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed62e je 0x104ed650 */
  if (C.zf) goto L_104ed650;
  /* 104ed630 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed633 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed636 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed637 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed63a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed640 push edx */
  push32((uint32_t)(EDX));
  /* 104ed641 call 0x104e61d0 */
  push32(0x104ed646u); f_104e61d0();
  /* 104ed646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed649 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ed64b jmp 0x104ed749 */
  goto L_104ed749;
L_104ed650:;
  /* 104ed650 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104ed657 jmp 0x104ed662 */
  goto L_104ed662;
L_104ed659:;
  /* 104ed659 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ed65c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed65f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104ed662:;
  /* 104ed662 push 0x1050b0c8 */
  push32((uint32_t)(0x1050b0c8u));
  /* 104ed667 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed66a push ecx */
  push32((uint32_t)(ECX));
  /* 104ed66b call 0x104eef40 */
  push32(0x104ed670u); f_104eef40();
  /* 104ed670 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed673 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104ed676 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed67a jne 0x104ed684 */
  if (!C.zf) goto L_104ed684;
  /* 104ed67c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ed67f jmp 0x104ed749 */
  goto L_104ed749;
L_104ed684:;
  /* 104ed684 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed687 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed68a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104ed68c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 104ed68f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed693 jne 0x104ed6ba */
  if (!C.zf) goto L_104ed6ba;
  /* 104ed695 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed699 jge 0x104ed6ba */
  if ((C.sf==C.of)) goto L_104ed6ba;
  /* 104ed69b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104ed69f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed6a2 je 0x104ed6ba */
  if (C.zf) goto L_104ed6ba;
  /* 104ed6a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ed6a7 push edx */
  push32((uint32_t)(EDX));
  /* 104ed6a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed6ab push eax */
  push32((uint32_t)(EAX));
  /* 104ed6ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed6af push ecx */
  push32((uint32_t)(ECX));
  /* 104ed6b0 call 0x104e6a40 */
  push32(0x104ed6b5u); f_104e6a40();
  /* 104ed6b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed6b8 jmp 0x104ed720 */
  goto L_104ed720;
L_104ed6ba:;
  /* 104ed6ba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed6be jne 0x104ed6e8 */
  if (!C.zf) goto L_104ed6e8;
  /* 104ed6c0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed6c4 jge 0x104ed6e8 */
  if ((C.sf==C.of)) goto L_104ed6e8;
  /* 104ed6c6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104ed6ca cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed6cd je 0x104ed6e8 */
  if (C.zf) goto L_104ed6e8;
  /* 104ed6cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ed6d2 push eax */
  push32((uint32_t)(EAX));
  /* 104ed6d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed6d6 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed6d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed6da add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed6dd push edx */
  push32((uint32_t)(EDX));
  /* 104ed6de call 0x104e6a40 */
  push32(0x104ed6e3u); f_104e6a40();
  /* 104ed6e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed6e6 jmp 0x104ed720 */
  goto L_104ed720;
L_104ed6e8:;
  /* 104ed6e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed6ec jne 0x104ed71b */
  if (!C.zf) goto L_104ed71b;
  /* 104ed6ee movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104ed6f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed6f4 je 0x104ed6ff */
  if (C.zf) goto L_104ed6ff;
  /* 104ed6f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104ed6fa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed6fd jne 0x104ed71b */
  if (!C.zf) goto L_104ed71b;
L_104ed6ff:;
  /* 104ed6ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ed702 push edx */
  push32((uint32_t)(EDX));
  /* 104ed703 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed706 push eax */
  push32((uint32_t)(EAX));
  /* 104ed707 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed70a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed710 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed711 call 0x104e6a40 */
  push32(0x104ed716u); f_104e6a40();
  /* 104ed716 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed719 jmp 0x104ed720 */
  goto L_104ed720;
L_104ed71b:;
  /* 104ed71b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ed71e jmp 0x104ed749 */
  goto L_104ed749;
L_104ed720:;
  /* 104ed720 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104ed724 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed727 jne 0x104ed72b */
  if (!C.zf) goto L_104ed72b;
  /* 104ed729 jmp 0x104ed747 */
  goto L_104ed747;
L_104ed72b:;
  /* 104ed72b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104ed72f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed731 jne 0x104ed735 */
  if (!C.zf) goto L_104ed735;
  /* 104ed733 jmp 0x104ed747 */
  goto L_104ed747;
L_104ed735:;
  /* 104ed735 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ed738 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed73b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 104ed73f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 104ed742 jmp 0x104ed659 */
  goto L_104ed659;
L_104ed747:;
  /* 104ed747 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104ed749:;
  /* 104ed749 mov esp, ebp */
  ESP = (EBP);
  /* 104ed74b pop ebp */
  EBP = (pop32());
  /* 104ed74c ret  */
  ESPCHK(0x104ed5f0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x104ed750 (101 bytes, 36 insns) */
void f_104ed750(void) {
  FTRACE(0x104ed750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ed750 push ebp */
  push32((uint32_t)(EBP));
  /* 104ed751 mov ebp, esp */
  EBP = (ESP);
  /* 104ed753 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed756 push eax */
  push32((uint32_t)(EAX));
  /* 104ed757 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed75a push ecx */
  push32((uint32_t)(ECX));
  /* 104ed75b call 0x104e61d0 */
  push32(0x104ed760u); f_104e61d0();
  /* 104ed760 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed763 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed766 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 104ed76a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed76c je 0x104ed788 */
  if (C.zf) goto L_104ed788;
  /* 104ed76e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed771 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed774 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed775 push 0x1050b0d0 */
  push32((uint32_t)(0x1050b0d0u));
  /* 104ed77a push 2 */
  push32((uint32_t)(0x2u));
  /* 104ed77c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed77f push edx */
  push32((uint32_t)(EDX));
  /* 104ed780 call 0x104ed5a0 */
  push32(0x104ed785u); f_104ed5a0();
  /* 104ed785 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ed788:;
  /* 104ed788 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed78b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 104ed792 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ed794 je 0x104ed7b3 */
  if (C.zf) goto L_104ed7b3;
  /* 104ed796 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ed799 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed79f push edx */
  push32((uint32_t)(EDX));
  /* 104ed7a0 push 0x1050b0cc */
  push32((uint32_t)(0x1050b0ccu));
  /* 104ed7a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ed7a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed7aa push eax */
  push32((uint32_t)(EAX));
  /* 104ed7ab call 0x104ed5a0 */
  push32(0x104ed7b0u); f_104ed5a0();
  /* 104ed7b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ed7b3:;
  /* 104ed7b3 pop ebp */
  EBP = (pop32());
  /* 104ed7b4 ret  */
  ESPCHK(0x104ed750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7c0 @ 0x104ed7c0 (130 bytes, 50 insns) */
void f_104ed7c0(void) {
  FTRACE(0x104ed7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ed7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ed7c1 mov ebp, esp */
  EBP = (ESP);
  /* 104ed7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed7c4 push ebx */
  push32((uint32_t)(EBX));
  /* 104ed7c5 push esi */
  push32((uint32_t)(ESI));
  /* 104ed7c6 push edi */
  push32((uint32_t)(EDI));
  /* 104ed7c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104ed7ce:;
  /* 104ed7ce cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed7d2 jne 0x104ed7f2 */
  if (!C.zf) goto L_104ed7f2;
  /* 104ed7d4 push 0x1050b0e0 */
  push32((uint32_t)(0x1050b0e0u));
  /* 104ed7d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ed7db push 0x3a */
  push32((uint32_t)(0x3au));
  /* 104ed7dd push 0x1050b0d4 */
  push32((uint32_t)(0x1050b0d4u));
  /* 104ed7e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ed7e4 call 0x104e22e0 */
  push32(0x104ed7e9u); f_104e22e0();
  /* 104ed7e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed7ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed7ef jne 0x104ed7f2 */
  if (!C.zf) goto L_104ed7f2;
  /* 104ed7f1 int3  */
  x86_unimpl("int3 @ 0x104ed7f1");
L_104ed7f2:;
  /* 104ed7f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ed7f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed7f6 jne 0x104ed7ce */
  if (!C.zf) goto L_104ed7ce;
  /* 104ed7f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed7fb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ed7fe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 104ed801 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ed803 je 0x104ed811 */
  if (C.zf) goto L_104ed811;
  /* 104ed805 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed808 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 104ed80f jmp 0x104ed838 */
  goto L_104ed838;
L_104ed811:;
  /* 104ed811 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed814 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed815 call 0x104ec030 */
  push32(0x104ed81au); f_104ec030();
  /* 104ed81a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed81d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed820 push edx */
  push32((uint32_t)(EDX));
  /* 104ed821 call 0x104ed850 */
  push32(0x104ed826u); f_104ed850();
  /* 104ed826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed829 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ed82c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed82f push eax */
  push32((uint32_t)(EAX));
  /* 104ed830 call 0x104ec0a0 */
  push32(0x104ed835u); f_104ec0a0();
  /* 104ed835 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ed838:;
  /* 104ed838 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ed83b pop edi */
  EDI = (pop32());
  /* 104ed83c pop esi */
  ESI = (pop32());
  /* 104ed83d pop ebx */
  EBX = (pop32());
  /* 104ed83e mov esp, ebp */
  ESP = (EBP);
  /* 104ed840 pop ebp */
  EBP = (pop32());
  /* 104ed841 ret  */
  ESPCHK(0x104ed7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d850 @ 0x104ed850 (190 bytes, 67 insns) */
void f_104ed850(void) {
  FTRACE(0x104ed850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ed850 push ebp */
  push32((uint32_t)(EBP));
  /* 104ed851 mov ebp, esp */
  EBP = (ESP);
  /* 104ed853 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ed856 push ebx */
  push32((uint32_t)(EBX));
  /* 104ed857 push esi */
  push32((uint32_t)(ESI));
  /* 104ed858 push edi */
  push32((uint32_t)(EDI));
  /* 104ed859 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104ed860 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed863 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104ed866:;
  /* 104ed866 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed86a jne 0x104ed88a */
  if (!C.zf) goto L_104ed88a;
  /* 104ed86c push 0x1050af84 */
  push32((uint32_t)(0x1050af84u));
  /* 104ed871 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ed873 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 104ed875 push 0x1050b0d4 */
  push32((uint32_t)(0x1050b0d4u));
  /* 104ed87a push 2 */
  push32((uint32_t)(0x2u));
  /* 104ed87c call 0x104e22e0 */
  push32(0x104ed881u); f_104e22e0();
  /* 104ed881 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed884 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed887 jne 0x104ed88a */
  if (!C.zf) goto L_104ed88a;
  /* 104ed889 int3  */
  x86_unimpl("int3 @ 0x104ed889");
L_104ed88a:;
  /* 104ed88a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ed88c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ed88e jne 0x104ed866 */
  if (!C.zf) goto L_104ed866;
  /* 104ed890 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ed893 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104ed896 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 104ed89b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed89d je 0x104ed8fa */
  if (C.zf) goto L_104ed8fa;
  /* 104ed89f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ed8a2 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed8a3 call 0x104ecb50 */
  push32(0x104ed8a8u); f_104ecb50();
  /* 104ed8a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed8ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ed8ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ed8b1 push edx */
  push32((uint32_t)(EDX));
  /* 104ed8b2 call 0x104efed0 */
  push32(0x104ed8b7u); f_104efed0();
  /* 104ed8b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed8ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ed8bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104ed8c0 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed8c1 call 0x104efda0 */
  push32(0x104ed8c6u); f_104efda0();
  /* 104ed8c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed8c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed8cb jge 0x104ed8d6 */
  if ((C.sf==C.of)) goto L_104ed8d6;
  /* 104ed8cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104ed8d4 jmp 0x104ed8fa */
  goto L_104ed8fa;
L_104ed8d6:;
  /* 104ed8d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ed8d9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed8dd je 0x104ed8fa */
  if (C.zf) goto L_104ed8fa;
  /* 104ed8df push 2 */
  push32((uint32_t)(0x2u));
  /* 104ed8e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ed8e4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104ed8e7 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed8e8 call 0x104e3cb0 */
  push32(0x104ed8edu); f_104e3cb0();
  /* 104ed8ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed8f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ed8f3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_104ed8fa:;
  /* 104ed8fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ed8fd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 104ed904 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ed907 pop edi */
  EDI = (pop32());
  /* 104ed908 pop esi */
  ESI = (pop32());
  /* 104ed909 pop ebx */
  EBX = (pop32());
  /* 104ed90a mov esp, ebp */
  ESP = (EBP);
  /* 104ed90c pop ebp */
  EBP = (pop32());
  /* 104ed90d ret  */
  ESPCHK(0x104ed850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d910 @ 0x104ed910 (210 bytes, 63 insns) */
void f_104ed910(void) {
  FTRACE(0x104ed910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ed910 push ebp */
  push32((uint32_t)(EBP));
  /* 104ed911 mov ebp, esp */
  EBP = (ESP);
  /* 104ed913 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed917 cmp eax, dword ptr [0x10510fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10510fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed91d jae 0x104ed941 */
  if (!C.cf) goto L_104ed941;
  /* 104ed91f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed922 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104ed925 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed928 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104ed92b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ed92e mov eax, dword ptr [ecx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10510ea0)));
  /* 104ed935 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104ed93a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104ed93d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ed93f jne 0x104ed954 */
  if (!C.zf) goto L_104ed954;
L_104ed941:;
  /* 104ed941 call 0x104eb0f0 */
  push32(0x104ed946u); f_104eb0f0();
  /* 104ed946 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104ed94c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ed94f jmp 0x104ed9de */
  goto L_104ed9de;
L_104ed954:;
  /* 104ed954 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed957 push edx */
  push32((uint32_t)(EDX));
  /* 104ed958 call 0x104ec910 */
  push32(0x104ed95du); f_104ec910();
  /* 104ed95d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed963 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104ed966 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed969 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104ed96c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104ed96f mov edx, dword ptr [eax*4 + 0x10510ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10510ea0)));
  /* 104ed976 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 104ed97b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 104ed97e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed980 je 0x104ed9bd */
  if (C.zf) goto L_104ed9bd;
  /* 104ed982 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed985 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed986 call 0x104ec790 */
  push32(0x104ed98bu); f_104ec790();
  /* 104ed98b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed98e push eax */
  push32((uint32_t)(EAX));
  /* 104ed98f call dword ptr [0x10512270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512270))), 0x104ed995u);
  /* 104ed995 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ed997 jne 0x104ed9a4 */
  if (!C.zf) goto L_104ed9a4;
  /* 104ed999 call dword ptr [0x105122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122c8))), 0x104ed99fu);
  /* 104ed99f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ed9a2 jmp 0x104ed9ab */
  goto L_104ed9ab;
L_104ed9a4:;
  /* 104ed9a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104ed9ab:;
  /* 104ed9ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed9af jne 0x104ed9b3 */
  if (!C.zf) goto L_104ed9b3;
  /* 104ed9b1 jmp 0x104ed9cf */
  goto L_104ed9cf;
L_104ed9b3:;
  /* 104ed9b3 call 0x104eb100 */
  push32(0x104ed9b8u); f_104eb100();
  /* 104ed9b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ed9bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104ed9bd:;
  /* 104ed9bd call 0x104eb0f0 */
  push32(0x104ed9c2u); f_104eb0f0();
  /* 104ed9c2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104ed9c8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104ed9cf:;
  /* 104ed9cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ed9d2 push eax */
  push32((uint32_t)(EAX));
  /* 104ed9d3 call 0x104ec9a0 */
  push32(0x104ed9d8u); f_104ec9a0();
  /* 104ed9d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ed9db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104ed9de:;
  /* 104ed9de mov esp, ebp */
  ESP = (EBP);
  /* 104ed9e0 pop ebp */
  EBP = (pop32());
  /* 104ed9e1 ret  */
  ESPCHK(0x104ed910u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x104ed9f0 (219 bytes, 64 insns) */
void f_104ed9f0(void) {
  FTRACE(0x104ed9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ed9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ed9f1 mov ebp, esp */
  EBP = (ESP);
  /* 104ed9f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104ed9f4 cmp dword ptr [0x1050f6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ed9fb je 0x104eda91 */
  if (C.zf) goto L_104eda91;
  /* 104eda01 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 104eda03 push 0x1050b0f0 */
  push32((uint32_t)(0x1050b0f0u));
  /* 104eda08 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eda0a push 0xac */
  push32((uint32_t)(0xacu));
  /* 104eda0f push 1 */
  push32((uint32_t)(0x1u));
  /* 104eda11 call 0x104e3630 */
  push32(0x104eda16u); f_104e3630();
  /* 104eda16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eda19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104eda1c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eda20 jne 0x104eda2c */
  if (!C.zf) goto L_104eda2c;
  /* 104eda22 mov eax, 1 */
  EAX = (0x1u);
  /* 104eda27 jmp 0x104edac7 */
  goto L_104edac7;
L_104eda2c:;
  /* 104eda2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eda2f push eax */
  push32((uint32_t)(EAX));
  /* 104eda30 call 0x104edad0 */
  push32(0x104eda35u); f_104edad0();
  /* 104eda35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eda38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eda3a je 0x104eda5d */
  if (C.zf) goto L_104eda5d;
  /* 104eda3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eda3f push ecx */
  push32((uint32_t)(ECX));
  /* 104eda40 call 0x104ee060 */
  push32(0x104eda45u); f_104ee060();
  /* 104eda45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eda48 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eda4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eda4d push edx */
  push32((uint32_t)(EDX));
  /* 104eda4e call 0x104e3cb0 */
  push32(0x104eda53u); f_104e3cb0();
  /* 104eda53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eda56 mov eax, 1 */
  EAX = (0x1u);
  /* 104eda5b jmp 0x104edac7 */
  goto L_104edac7;
L_104eda5d:;
  /* 104eda5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eda60 mov dword ptr [0x1050ec98], eax */
  w32((uint32_t)(0x1050ec98), (EAX));
  /* 104eda65 mov ecx, dword ptr [0x1050f6ec] */
  ECX = (r32((uint32_t)(0x1050f6ec)));
  /* 104eda6b push ecx */
  push32((uint32_t)(ECX));
  /* 104eda6c call 0x104ee060 */
  push32(0x104eda71u); f_104ee060();
  /* 104eda71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eda74 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eda76 mov edx, dword ptr [0x1050f6ec] */
  EDX = (r32((uint32_t)(0x1050f6ec)));
  /* 104eda7c push edx */
  push32((uint32_t)(EDX));
  /* 104eda7d call 0x104e3cb0 */
  push32(0x104eda82u); f_104e3cb0();
  /* 104eda82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eda85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eda88 mov dword ptr [0x1050f6ec], eax */
  w32((uint32_t)(0x1050f6ec), (EAX));
  /* 104eda8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eda8f jmp 0x104edac7 */
  goto L_104edac7;
L_104eda91:;
  /* 104eda91 mov dword ptr [0x1050ec98], 0x1050eca0 */
  w32((uint32_t)(0x1050ec98), (0x1050eca0u));
  /* 104eda9b mov ecx, dword ptr [0x1050f6ec] */
  ECX = (r32((uint32_t)(0x1050f6ec)));
  /* 104edaa1 push ecx */
  push32((uint32_t)(ECX));
  /* 104edaa2 call 0x104ee060 */
  push32(0x104edaa7u); f_104ee060();
  /* 104edaa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edaaa push 2 */
  push32((uint32_t)(0x2u));
  /* 104edaac mov edx, dword ptr [0x1050f6ec] */
  EDX = (r32((uint32_t)(0x1050f6ec)));
  /* 104edab2 push edx */
  push32((uint32_t)(EDX));
  /* 104edab3 call 0x104e3cb0 */
  push32(0x104edab8u); f_104e3cb0();
  /* 104edab8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edabb mov dword ptr [0x1050f6ec], 0 */
  w32((uint32_t)(0x1050f6ec), (0x0u));
  /* 104edac5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104edac7:;
  /* 104edac7 mov esp, ebp */
  ESP = (EBP);
  /* 104edac9 pop ebp */
  EBP = (pop32());
  /* 104edaca ret  */
  ESPCHK(0x104ed9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dad0 @ 0x104edad0 (1423 bytes, 533 insns) */
void f_104edad0(void) {
  FTRACE(0x104edad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104edad0 push ebp */
  push32((uint32_t)(EBP));
  /* 104edad1 mov ebp, esp */
  EBP = (ESP);
  /* 104edad3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104edad6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104edadd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104edadf mov ax, word ptr [0x1050f726] */
  AX = (r16((uint32_t)(0x1050f726)));
  /* 104edae5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104edae8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104edaea mov cx, word ptr [0x1050f728] */
  CX = (r16((uint32_t)(0x1050f728)));
  /* 104edaf1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104edaf4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104edaf8 jne 0x104edb02 */
  if (!C.zf) goto L_104edb02;
  /* 104edafa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104edafd jmp 0x104ee05b */
  goto L_104ee05b;
L_104edb02:;
  /* 104edb02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edb05 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edb08 push edx */
  push32((uint32_t)(EDX));
  /* 104edb09 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 104edb0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edb0e push eax */
  push32((uint32_t)(EAX));
  /* 104edb0f push 1 */
  push32((uint32_t)(0x1u));
  /* 104edb11 call 0x104f13e0 */
  push32(0x104edb16u); f_104f13e0();
  /* 104edb16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edb19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edb1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edb1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edb21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edb24 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edb27 push edx */
  push32((uint32_t)(EDX));
  /* 104edb28 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 104edb2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edb2d push eax */
  push32((uint32_t)(EAX));
  /* 104edb2e push 1 */
  push32((uint32_t)(0x1u));
  /* 104edb30 call 0x104f13e0 */
  push32(0x104edb35u); f_104f13e0();
  /* 104edb35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edb38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edb3b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edb3d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edb40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edb43 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edb46 push edx */
  push32((uint32_t)(EDX));
  /* 104edb47 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 104edb49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edb4c push eax */
  push32((uint32_t)(EAX));
  /* 104edb4d push 1 */
  push32((uint32_t)(0x1u));
  /* 104edb4f call 0x104f13e0 */
  push32(0x104edb54u); f_104f13e0();
  /* 104edb54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edb57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edb5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edb5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edb5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edb62 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edb65 push edx */
  push32((uint32_t)(EDX));
  /* 104edb66 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 104edb68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edb6b push eax */
  push32((uint32_t)(EAX));
  /* 104edb6c push 1 */
  push32((uint32_t)(0x1u));
  /* 104edb6e call 0x104f13e0 */
  push32(0x104edb73u); f_104f13e0();
  /* 104edb73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edb76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edb79 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edb7b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edb7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edb81 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edb84 push edx */
  push32((uint32_t)(EDX));
  /* 104edb85 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 104edb87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edb8a push eax */
  push32((uint32_t)(EAX));
  /* 104edb8b push 1 */
  push32((uint32_t)(0x1u));
  /* 104edb8d call 0x104f13e0 */
  push32(0x104edb92u); f_104f13e0();
  /* 104edb92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edb95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edb98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edb9a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edb9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edba0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edba3 push edx */
  push32((uint32_t)(EDX));
  /* 104edba4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 104edba6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edba9 push eax */
  push32((uint32_t)(EAX));
  /* 104edbaa push 1 */
  push32((uint32_t)(0x1u));
  /* 104edbac call 0x104f13e0 */
  push32(0x104edbb1u); f_104f13e0();
  /* 104edbb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edbb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edbb7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edbb9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edbbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edbbf push edx */
  push32((uint32_t)(EDX));
  /* 104edbc0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 104edbc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edbc5 push eax */
  push32((uint32_t)(EAX));
  /* 104edbc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edbc8 call 0x104f13e0 */
  push32(0x104edbcdu); f_104f13e0();
  /* 104edbcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edbd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edbd3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edbd5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edbd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edbdb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edbde push edx */
  push32((uint32_t)(EDX));
  /* 104edbdf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 104edbe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edbe4 push eax */
  push32((uint32_t)(EAX));
  /* 104edbe5 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edbe7 call 0x104f13e0 */
  push32(0x104edbecu); f_104f13e0();
  /* 104edbec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edbef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edbf2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edbf4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edbf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edbfa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edbfd push edx */
  push32((uint32_t)(EDX));
  /* 104edbfe push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 104edc00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edc03 push eax */
  push32((uint32_t)(EAX));
  /* 104edc04 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edc06 call 0x104f13e0 */
  push32(0x104edc0bu); f_104f13e0();
  /* 104edc0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edc0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edc11 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edc13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edc16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edc19 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edc1c push edx */
  push32((uint32_t)(EDX));
  /* 104edc1d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 104edc1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edc22 push eax */
  push32((uint32_t)(EAX));
  /* 104edc23 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edc25 call 0x104f13e0 */
  push32(0x104edc2au); f_104f13e0();
  /* 104edc2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edc2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edc30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edc32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edc35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edc38 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edc3b push edx */
  push32((uint32_t)(EDX));
  /* 104edc3c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 104edc3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edc41 push eax */
  push32((uint32_t)(EAX));
  /* 104edc42 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edc44 call 0x104f13e0 */
  push32(0x104edc49u); f_104f13e0();
  /* 104edc49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edc4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edc4f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edc51 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edc54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edc57 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edc5a push edx */
  push32((uint32_t)(EDX));
  /* 104edc5b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 104edc5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edc60 push eax */
  push32((uint32_t)(EAX));
  /* 104edc61 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edc63 call 0x104f13e0 */
  push32(0x104edc68u); f_104f13e0();
  /* 104edc68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edc6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edc6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edc70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edc73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edc76 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edc79 push edx */
  push32((uint32_t)(EDX));
  /* 104edc7a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 104edc7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edc7f push eax */
  push32((uint32_t)(EAX));
  /* 104edc80 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edc82 call 0x104f13e0 */
  push32(0x104edc87u); f_104f13e0();
  /* 104edc87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edc8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edc8d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edc8f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edc92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edc95 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edc98 push edx */
  push32((uint32_t)(EDX));
  /* 104edc99 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 104edc9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edc9e push eax */
  push32((uint32_t)(EAX));
  /* 104edc9f push 1 */
  push32((uint32_t)(0x1u));
  /* 104edca1 call 0x104f13e0 */
  push32(0x104edca6u); f_104f13e0();
  /* 104edca6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edca9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edcac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edcae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edcb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edcb4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edcb7 push edx */
  push32((uint32_t)(EDX));
  /* 104edcb8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 104edcba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edcbd push eax */
  push32((uint32_t)(EAX));
  /* 104edcbe push 1 */
  push32((uint32_t)(0x1u));
  /* 104edcc0 call 0x104f13e0 */
  push32(0x104edcc5u); f_104f13e0();
  /* 104edcc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edcc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edccb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edccd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edcd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edcd3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edcd6 push edx */
  push32((uint32_t)(EDX));
  /* 104edcd7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 104edcd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edcdc push eax */
  push32((uint32_t)(EAX));
  /* 104edcdd push 1 */
  push32((uint32_t)(0x1u));
  /* 104edcdf call 0x104f13e0 */
  push32(0x104edce4u); f_104f13e0();
  /* 104edce4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edce7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edcea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edcec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edcef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edcf2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edcf5 push edx */
  push32((uint32_t)(EDX));
  /* 104edcf6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 104edcf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edcfb push eax */
  push32((uint32_t)(EAX));
  /* 104edcfc push 1 */
  push32((uint32_t)(0x1u));
  /* 104edcfe call 0x104f13e0 */
  push32(0x104edd03u); f_104f13e0();
  /* 104edd03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edd06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edd09 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edd0b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edd0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edd11 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edd14 push edx */
  push32((uint32_t)(EDX));
  /* 104edd15 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 104edd17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edd1a push eax */
  push32((uint32_t)(EAX));
  /* 104edd1b push 1 */
  push32((uint32_t)(0x1u));
  /* 104edd1d call 0x104f13e0 */
  push32(0x104edd22u); f_104f13e0();
  /* 104edd22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edd25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edd28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edd2a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edd2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edd30 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edd33 push edx */
  push32((uint32_t)(EDX));
  /* 104edd34 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 104edd36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edd39 push eax */
  push32((uint32_t)(EAX));
  /* 104edd3a push 1 */
  push32((uint32_t)(0x1u));
  /* 104edd3c call 0x104f13e0 */
  push32(0x104edd41u); f_104f13e0();
  /* 104edd41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edd44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edd47 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edd49 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edd4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edd4f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edd52 push edx */
  push32((uint32_t)(EDX));
  /* 104edd53 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 104edd55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edd58 push eax */
  push32((uint32_t)(EAX));
  /* 104edd59 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edd5b call 0x104f13e0 */
  push32(0x104edd60u); f_104f13e0();
  /* 104edd60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edd63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edd66 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edd68 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edd6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edd6e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edd71 push edx */
  push32((uint32_t)(EDX));
  /* 104edd72 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 104edd74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edd77 push eax */
  push32((uint32_t)(EAX));
  /* 104edd78 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edd7a call 0x104f13e0 */
  push32(0x104edd7fu); f_104f13e0();
  /* 104edd7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edd82 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edd85 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edd87 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edd8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edd8d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edd90 push edx */
  push32((uint32_t)(EDX));
  /* 104edd91 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 104edd93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edd96 push eax */
  push32((uint32_t)(EAX));
  /* 104edd97 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edd99 call 0x104f13e0 */
  push32(0x104edd9eu); f_104f13e0();
  /* 104edd9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edda1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edda4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edda6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edda9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eddac add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eddaf push edx */
  push32((uint32_t)(EDX));
  /* 104eddb0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 104eddb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eddb5 push eax */
  push32((uint32_t)(EAX));
  /* 104eddb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 104eddb8 call 0x104f13e0 */
  push32(0x104eddbdu); f_104f13e0();
  /* 104eddbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eddc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104eddc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104eddc5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104eddc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eddcb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eddce push edx */
  push32((uint32_t)(EDX));
  /* 104eddcf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 104eddd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eddd4 push eax */
  push32((uint32_t)(EAX));
  /* 104eddd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 104eddd7 call 0x104f13e0 */
  push32(0x104edddcu); f_104f13e0();
  /* 104edddc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edddf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edde2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edde4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edde7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eddea add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edded push edx */
  push32((uint32_t)(EDX));
  /* 104eddee push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 104eddf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eddf3 push eax */
  push32((uint32_t)(EAX));
  /* 104eddf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104eddf6 call 0x104f13e0 */
  push32(0x104eddfbu); f_104f13e0();
  /* 104eddfb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eddfe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ede01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ede03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ede06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ede09 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ede0c push edx */
  push32((uint32_t)(EDX));
  /* 104ede0d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 104ede0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ede12 push eax */
  push32((uint32_t)(EAX));
  /* 104ede13 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ede15 call 0x104f13e0 */
  push32(0x104ede1au); f_104f13e0();
  /* 104ede1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ede1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ede20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ede22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ede25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ede28 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ede2b push edx */
  push32((uint32_t)(EDX));
  /* 104ede2c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 104ede2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ede31 push eax */
  push32((uint32_t)(EAX));
  /* 104ede32 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ede34 call 0x104f13e0 */
  push32(0x104ede39u); f_104f13e0();
  /* 104ede39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ede3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ede3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ede41 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ede44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ede47 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ede4a push edx */
  push32((uint32_t)(EDX));
  /* 104ede4b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 104ede4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ede50 push eax */
  push32((uint32_t)(EAX));
  /* 104ede51 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ede53 call 0x104f13e0 */
  push32(0x104ede58u); f_104f13e0();
  /* 104ede58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ede5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ede5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ede60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ede63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ede66 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ede69 push edx */
  push32((uint32_t)(EDX));
  /* 104ede6a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 104ede6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ede6f push eax */
  push32((uint32_t)(EAX));
  /* 104ede70 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ede72 call 0x104f13e0 */
  push32(0x104ede77u); f_104f13e0();
  /* 104ede77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ede7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ede7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ede7f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ede82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ede85 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ede88 push edx */
  push32((uint32_t)(EDX));
  /* 104ede89 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 104ede8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ede8e push eax */
  push32((uint32_t)(EAX));
  /* 104ede8f push 1 */
  push32((uint32_t)(0x1u));
  /* 104ede91 call 0x104f13e0 */
  push32(0x104ede96u); f_104f13e0();
  /* 104ede96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ede99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ede9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ede9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edea1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edea4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edea7 push edx */
  push32((uint32_t)(EDX));
  /* 104edea8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 104edeaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edead push eax */
  push32((uint32_t)(EAX));
  /* 104edeae push 1 */
  push32((uint32_t)(0x1u));
  /* 104edeb0 call 0x104f13e0 */
  push32(0x104edeb5u); f_104f13e0();
  /* 104edeb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edeb8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edebb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edebd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edec0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edec3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edec6 push edx */
  push32((uint32_t)(EDX));
  /* 104edec7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 104edec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edecc push eax */
  push32((uint32_t)(EAX));
  /* 104edecd push 1 */
  push32((uint32_t)(0x1u));
  /* 104edecf call 0x104f13e0 */
  push32(0x104eded4u); f_104f13e0();
  /* 104eded4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eded7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ededa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ededc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ededf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edee2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edee8 push edx */
  push32((uint32_t)(EDX));
  /* 104edee9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 104edeeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edeee push eax */
  push32((uint32_t)(EAX));
  /* 104edeef push 1 */
  push32((uint32_t)(0x1u));
  /* 104edef1 call 0x104f13e0 */
  push32(0x104edef6u); f_104f13e0();
  /* 104edef6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edef9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edefc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edefe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edf01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edf04 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edf0a push edx */
  push32((uint32_t)(EDX));
  /* 104edf0b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 104edf0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edf10 push eax */
  push32((uint32_t)(EAX));
  /* 104edf11 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edf13 call 0x104f13e0 */
  push32(0x104edf18u); f_104f13e0();
  /* 104edf18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edf1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edf1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edf20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edf23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edf26 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edf2c push edx */
  push32((uint32_t)(EDX));
  /* 104edf2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 104edf2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edf32 push eax */
  push32((uint32_t)(EAX));
  /* 104edf33 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edf35 call 0x104f13e0 */
  push32(0x104edf3au); f_104f13e0();
  /* 104edf3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edf3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edf40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edf42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edf45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edf48 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edf4e push edx */
  push32((uint32_t)(EDX));
  /* 104edf4f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 104edf51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edf54 push eax */
  push32((uint32_t)(EAX));
  /* 104edf55 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edf57 call 0x104f13e0 */
  push32(0x104edf5cu); f_104f13e0();
  /* 104edf5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edf5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edf62 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edf64 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edf67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edf6a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edf70 push edx */
  push32((uint32_t)(EDX));
  /* 104edf71 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 104edf73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edf76 push eax */
  push32((uint32_t)(EAX));
  /* 104edf77 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edf79 call 0x104f13e0 */
  push32(0x104edf7eu); f_104f13e0();
  /* 104edf7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edf81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edf84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edf86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edf89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edf8c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edf92 push edx */
  push32((uint32_t)(EDX));
  /* 104edf93 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 104edf95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edf98 push eax */
  push32((uint32_t)(EAX));
  /* 104edf99 push 1 */
  push32((uint32_t)(0x1u));
  /* 104edf9b call 0x104f13e0 */
  push32(0x104edfa0u); f_104f13e0();
  /* 104edfa0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edfa3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edfa6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edfa8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edfab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edfae add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edfb4 push edx */
  push32((uint32_t)(EDX));
  /* 104edfb5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 104edfb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edfba push eax */
  push32((uint32_t)(EAX));
  /* 104edfbb push 1 */
  push32((uint32_t)(0x1u));
  /* 104edfbd call 0x104f13e0 */
  push32(0x104edfc2u); f_104f13e0();
  /* 104edfc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edfc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edfc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edfca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edfcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edfd0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edfd6 push edx */
  push32((uint32_t)(EDX));
  /* 104edfd7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 104edfd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104edfdc push eax */
  push32((uint32_t)(EAX));
  /* 104edfdd push 1 */
  push32((uint32_t)(0x1u));
  /* 104edfdf call 0x104f13e0 */
  push32(0x104edfe4u); f_104f13e0();
  /* 104edfe4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104edfe7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104edfea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104edfec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104edfef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104edff2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104edff8 push edx */
  push32((uint32_t)(EDX));
  /* 104edff9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 104edffb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104edffe push eax */
  push32((uint32_t)(EAX));
  /* 104edfff push 1 */
  push32((uint32_t)(0x1u));
  /* 104ee001 call 0x104f13e0 */
  push32(0x104ee006u); f_104f13e0();
  /* 104ee006 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee009 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ee00c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee00e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ee011 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee014 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee01a push edx */
  push32((uint32_t)(EDX));
  /* 104ee01b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 104ee01d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee020 push eax */
  push32((uint32_t)(EAX));
  /* 104ee021 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ee023 call 0x104f13e0 */
  push32(0x104ee028u); f_104f13e0();
  /* 104ee028 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee02b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ee02e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee030 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ee033 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee036 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee03c push edx */
  push32((uint32_t)(EDX));
  /* 104ee03d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 104ee042 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee045 push eax */
  push32((uint32_t)(EAX));
  /* 104ee046 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ee048 call 0x104f13e0 */
  push32(0x104ee04du); f_104f13e0();
  /* 104ee04d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee050 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ee053 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee055 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104ee058 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_104ee05b:;
  /* 104ee05b mov esp, ebp */
  ESP = (EBP);
  /* 104ee05d pop ebp */
  EBP = (pop32());
  /* 104ee05e ret  */
  ESPCHK(0x104edad0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x104ee060 (779 bytes, 265 insns) */
void f_104ee060(void) {
  FTRACE(0x104ee060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ee060 push ebp */
  push32((uint32_t)(EBP));
  /* 104ee061 mov ebp, esp */
  EBP = (ESP);
  /* 104ee063 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ee067 jne 0x104ee06e */
  if (!C.zf) goto L_104ee06e;
  /* 104ee069 jmp 0x104ee369 */
  goto L_104ee369;
L_104ee06e:;
  /* 104ee06e push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee073 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104ee076 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee077 call 0x104e3cb0 */
  push32(0x104ee07cu); f_104e3cb0();
  /* 104ee07c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee07f push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee081 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee084 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104ee087 push eax */
  push32((uint32_t)(EAX));
  /* 104ee088 call 0x104e3cb0 */
  push32(0x104ee08du); f_104e3cb0();
  /* 104ee08d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee090 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee092 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee095 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104ee098 push edx */
  push32((uint32_t)(EDX));
  /* 104ee099 call 0x104e3cb0 */
  push32(0x104ee09eu); f_104e3cb0();
  /* 104ee09e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee0a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee0a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee0a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104ee0a9 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee0aa call 0x104e3cb0 */
  push32(0x104ee0afu); f_104e3cb0();
  /* 104ee0af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee0b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee0b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee0b7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104ee0ba push eax */
  push32((uint32_t)(EAX));
  /* 104ee0bb call 0x104e3cb0 */
  push32(0x104ee0c0u); f_104e3cb0();
  /* 104ee0c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee0c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee0c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee0c8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104ee0cb push edx */
  push32((uint32_t)(EDX));
  /* 104ee0cc call 0x104e3cb0 */
  push32(0x104ee0d1u); f_104e3cb0();
  /* 104ee0d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee0d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee0d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee0d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104ee0db push ecx */
  push32((uint32_t)(ECX));
  /* 104ee0dc call 0x104e3cb0 */
  push32(0x104ee0e1u); f_104e3cb0();
  /* 104ee0e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee0e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee0e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee0e9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 104ee0ec push eax */
  push32((uint32_t)(EAX));
  /* 104ee0ed call 0x104e3cb0 */
  push32(0x104ee0f2u); f_104e3cb0();
  /* 104ee0f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee0f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee0f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee0fa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 104ee0fd push edx */
  push32((uint32_t)(EDX));
  /* 104ee0fe call 0x104e3cb0 */
  push32(0x104ee103u); f_104e3cb0();
  /* 104ee103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee106 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee108 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee10b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 104ee10e push ecx */
  push32((uint32_t)(ECX));
  /* 104ee10f call 0x104e3cb0 */
  push32(0x104ee114u); f_104e3cb0();
  /* 104ee114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee117 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee119 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee11c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 104ee11f push eax */
  push32((uint32_t)(EAX));
  /* 104ee120 call 0x104e3cb0 */
  push32(0x104ee125u); f_104e3cb0();
  /* 104ee125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee128 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee12a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee12d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 104ee130 push edx */
  push32((uint32_t)(EDX));
  /* 104ee131 call 0x104e3cb0 */
  push32(0x104ee136u); f_104e3cb0();
  /* 104ee136 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee139 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee13b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee13e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 104ee141 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee142 call 0x104e3cb0 */
  push32(0x104ee147u); f_104e3cb0();
  /* 104ee147 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee14a push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee14c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee14f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104ee152 push eax */
  push32((uint32_t)(EAX));
  /* 104ee153 call 0x104e3cb0 */
  push32(0x104ee158u); f_104e3cb0();
  /* 104ee158 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee15b push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee15d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee160 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 104ee163 push edx */
  push32((uint32_t)(EDX));
  /* 104ee164 call 0x104e3cb0 */
  push32(0x104ee169u); f_104e3cb0();
  /* 104ee169 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee16c push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee16e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee171 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 104ee174 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee175 call 0x104e3cb0 */
  push32(0x104ee17au); f_104e3cb0();
  /* 104ee17a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee17d push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee17f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee182 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 104ee185 push eax */
  push32((uint32_t)(EAX));
  /* 104ee186 call 0x104e3cb0 */
  push32(0x104ee18bu); f_104e3cb0();
  /* 104ee18b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee18e push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee190 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee193 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 104ee196 push edx */
  push32((uint32_t)(EDX));
  /* 104ee197 call 0x104e3cb0 */
  push32(0x104ee19cu); f_104e3cb0();
  /* 104ee19c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee19f push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee1a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee1a4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 104ee1a7 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee1a8 call 0x104e3cb0 */
  push32(0x104ee1adu); f_104e3cb0();
  /* 104ee1ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee1b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee1b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee1b5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 104ee1b8 push eax */
  push32((uint32_t)(EAX));
  /* 104ee1b9 call 0x104e3cb0 */
  push32(0x104ee1beu); f_104e3cb0();
  /* 104ee1be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee1c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee1c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee1c6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 104ee1c9 push edx */
  push32((uint32_t)(EDX));
  /* 104ee1ca call 0x104e3cb0 */
  push32(0x104ee1cfu); f_104e3cb0();
  /* 104ee1cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee1d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee1d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee1d7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 104ee1da push ecx */
  push32((uint32_t)(ECX));
  /* 104ee1db call 0x104e3cb0 */
  push32(0x104ee1e0u); f_104e3cb0();
  /* 104ee1e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee1e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee1e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee1e8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 104ee1eb push eax */
  push32((uint32_t)(EAX));
  /* 104ee1ec call 0x104e3cb0 */
  push32(0x104ee1f1u); f_104e3cb0();
  /* 104ee1f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee1f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee1f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee1f9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 104ee1fc push edx */
  push32((uint32_t)(EDX));
  /* 104ee1fd call 0x104e3cb0 */
  push32(0x104ee202u); f_104e3cb0();
  /* 104ee202 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee205 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee207 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee20a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 104ee20d push ecx */
  push32((uint32_t)(ECX));
  /* 104ee20e call 0x104e3cb0 */
  push32(0x104ee213u); f_104e3cb0();
  /* 104ee213 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee216 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee21b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 104ee21e push eax */
  push32((uint32_t)(EAX));
  /* 104ee21f call 0x104e3cb0 */
  push32(0x104ee224u); f_104e3cb0();
  /* 104ee224 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee227 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee229 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee22c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 104ee22f push edx */
  push32((uint32_t)(EDX));
  /* 104ee230 call 0x104e3cb0 */
  push32(0x104ee235u); f_104e3cb0();
  /* 104ee235 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee238 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee23a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee23d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 104ee240 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee241 call 0x104e3cb0 */
  push32(0x104ee246u); f_104e3cb0();
  /* 104ee246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee249 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee24b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee24e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 104ee251 push eax */
  push32((uint32_t)(EAX));
  /* 104ee252 call 0x104e3cb0 */
  push32(0x104ee257u); f_104e3cb0();
  /* 104ee257 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee25a push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee25c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee25f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 104ee262 push edx */
  push32((uint32_t)(EDX));
  /* 104ee263 call 0x104e3cb0 */
  push32(0x104ee268u); f_104e3cb0();
  /* 104ee268 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee26b push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee26d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee270 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 104ee273 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee274 call 0x104e3cb0 */
  push32(0x104ee279u); f_104e3cb0();
  /* 104ee279 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee27c push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee27e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee281 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 104ee284 push eax */
  push32((uint32_t)(EAX));
  /* 104ee285 call 0x104e3cb0 */
  push32(0x104ee28au); f_104e3cb0();
  /* 104ee28a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee28d push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee28f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee292 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 104ee298 push edx */
  push32((uint32_t)(EDX));
  /* 104ee299 call 0x104e3cb0 */
  push32(0x104ee29eu); f_104e3cb0();
  /* 104ee29e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee2a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee2a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee2a6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 104ee2ac push ecx */
  push32((uint32_t)(ECX));
  /* 104ee2ad call 0x104e3cb0 */
  push32(0x104ee2b2u); f_104e3cb0();
  /* 104ee2b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee2b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee2b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee2ba mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 104ee2c0 push eax */
  push32((uint32_t)(EAX));
  /* 104ee2c1 call 0x104e3cb0 */
  push32(0x104ee2c6u); f_104e3cb0();
  /* 104ee2c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee2c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee2cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee2ce mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 104ee2d4 push edx */
  push32((uint32_t)(EDX));
  /* 104ee2d5 call 0x104e3cb0 */
  push32(0x104ee2dau); f_104e3cb0();
  /* 104ee2da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee2dd push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee2df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee2e2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 104ee2e8 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee2e9 call 0x104e3cb0 */
  push32(0x104ee2eeu); f_104e3cb0();
  /* 104ee2ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee2f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee2f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee2f6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 104ee2fc push eax */
  push32((uint32_t)(EAX));
  /* 104ee2fd call 0x104e3cb0 */
  push32(0x104ee302u); f_104e3cb0();
  /* 104ee302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee305 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee30a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 104ee310 push edx */
  push32((uint32_t)(EDX));
  /* 104ee311 call 0x104e3cb0 */
  push32(0x104ee316u); f_104e3cb0();
  /* 104ee316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee319 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee31b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee31e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 104ee324 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee325 call 0x104e3cb0 */
  push32(0x104ee32au); f_104e3cb0();
  /* 104ee32a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee32d push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee32f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee332 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 104ee338 push eax */
  push32((uint32_t)(EAX));
  /* 104ee339 call 0x104e3cb0 */
  push32(0x104ee33eu); f_104e3cb0();
  /* 104ee33e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee341 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee343 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee346 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 104ee34c push edx */
  push32((uint32_t)(EDX));
  /* 104ee34d call 0x104e3cb0 */
  push32(0x104ee352u); f_104e3cb0();
  /* 104ee352 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee355 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee357 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee35a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 104ee360 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee361 call 0x104e3cb0 */
  push32(0x104ee366u); f_104e3cb0();
  /* 104ee366 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ee369:;
  /* 104ee369 pop ebp */
  EBP = (pop32());
  /* 104ee36a ret  */
  ESPCHK(0x104ee060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e370 @ 0x104ee370 (678 bytes, 180 insns) */
void f_104ee370(void) {
  FTRACE(0x104ee370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ee370 push ebp */
  push32((uint32_t)(EBP));
  /* 104ee371 mov ebp, esp */
  EBP = (ESP);
  /* 104ee373 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ee376 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104ee37d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ee37f mov ax, word ptr [0x1050f722] */
  AX = (r16((uint32_t)(0x1050f722)));
  /* 104ee385 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ee388 cmp dword ptr [0x1050f6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ee38f je 0x104ee4ea */
  if (C.zf) goto L_104ee4ea;
  /* 104ee395 push 0x1050f6f0 */
  push32((uint32_t)(0x1050f6f0u));
  /* 104ee39a push 0xe */
  push32((uint32_t)(0xeu));
  /* 104ee39c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee39f push ecx */
  push32((uint32_t)(ECX));
  /* 104ee3a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ee3a2 call 0x104f13e0 */
  push32(0x104ee3a7u); f_104f13e0();
  /* 104ee3a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee3aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee3ad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104ee3af mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104ee3b2 push 0x1050f6f4 */
  push32((uint32_t)(0x1050f6f4u));
  /* 104ee3b7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 104ee3b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee3bc push eax */
  push32((uint32_t)(EAX));
  /* 104ee3bd push 1 */
  push32((uint32_t)(0x1u));
  /* 104ee3bf call 0x104f13e0 */
  push32(0x104ee3c4u); f_104f13e0();
  /* 104ee3c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee3c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee3ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee3cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee3cf push 0x1050f6f8 */
  push32((uint32_t)(0x1050f6f8u));
  /* 104ee3d4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 104ee3d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee3d9 push edx */
  push32((uint32_t)(EDX));
  /* 104ee3da push 1 */
  push32((uint32_t)(0x1u));
  /* 104ee3dc call 0x104f13e0 */
  push32(0x104ee3e1u); f_104f13e0();
  /* 104ee3e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee3e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee3e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee3e9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee3ec mov edx, dword ptr [0x1050f6f8] */
  EDX = (r32((uint32_t)(0x1050f6f8)));
  /* 104ee3f2 push edx */
  push32((uint32_t)(EDX));
  /* 104ee3f3 call 0x104ee620 */
  push32(0x104ee3f8u); f_104ee620();
  /* 104ee3f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee3fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ee3ff je 0x104ee459 */
  if (C.zf) goto L_104ee459;
  /* 104ee401 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee403 mov eax, dword ptr [0x1050f6f0] */
  EAX = (r32((uint32_t)(0x1050f6f0)));
  /* 104ee408 push eax */
  push32((uint32_t)(EAX));
  /* 104ee409 call 0x104e3cb0 */
  push32(0x104ee40eu); f_104e3cb0();
  /* 104ee40e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee411 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee413 mov ecx, dword ptr [0x1050f6f4] */
  ECX = (r32((uint32_t)(0x1050f6f4)));
  /* 104ee419 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee41a call 0x104e3cb0 */
  push32(0x104ee41fu); f_104e3cb0();
  /* 104ee41f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee422 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee424 mov edx, dword ptr [0x1050f6f8] */
  EDX = (r32((uint32_t)(0x1050f6f8)));
  /* 104ee42a push edx */
  push32((uint32_t)(EDX));
  /* 104ee42b call 0x104e3cb0 */
  push32(0x104ee430u); f_104e3cb0();
  /* 104ee430 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee433 mov dword ptr [0x1050f6f0], 0 */
  w32((uint32_t)(0x1050f6f0), (0x0u));
  /* 104ee43d mov dword ptr [0x1050f6f4], 0 */
  w32((uint32_t)(0x1050f6f4), (0x0u));
  /* 104ee447 mov dword ptr [0x1050f6f8], 0 */
  w32((uint32_t)(0x1050f6f8), (0x0u));
  /* 104ee451 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ee454 jmp 0x104ee612 */
  goto L_104ee612;
L_104ee459:;
  /* 104ee459 mov eax, dword ptr [0x1050ed88] */
  EAX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee45e cmp dword ptr [eax], 0x1050ed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1050ed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ee464 je 0x104ee4a0 */
  if (C.zf) goto L_104ee4a0;
  /* 104ee466 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee468 mov ecx, dword ptr [0x1050ed88] */
  ECX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee46e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104ee470 push edx */
  push32((uint32_t)(EDX));
  /* 104ee471 call 0x104e3cb0 */
  push32(0x104ee476u); f_104e3cb0();
  /* 104ee476 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee479 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee47b mov eax, dword ptr [0x1050ed88] */
  EAX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee480 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104ee483 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee484 call 0x104e3cb0 */
  push32(0x104ee489u); f_104e3cb0();
  /* 104ee489 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee48c push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee48e mov edx, dword ptr [0x1050ed88] */
  EDX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee494 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104ee497 push eax */
  push32((uint32_t)(EAX));
  /* 104ee498 call 0x104e3cb0 */
  push32(0x104ee49du); f_104e3cb0();
  /* 104ee49d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ee4a0:;
  /* 104ee4a0 mov ecx, dword ptr [0x1050ed88] */
  ECX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee4a6 mov edx, dword ptr [0x1050f6f0] */
  EDX = (r32((uint32_t)(0x1050f6f0)));
  /* 104ee4ac mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104ee4ae mov eax, dword ptr [0x1050ed88] */
  EAX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee4b3 mov ecx, dword ptr [0x1050f6f4] */
  ECX = (r32((uint32_t)(0x1050f6f4)));
  /* 104ee4b9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 104ee4bc mov edx, dword ptr [0x1050ed88] */
  EDX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee4c2 mov eax, dword ptr [0x1050f6f8] */
  EAX = (r32((uint32_t)(0x1050f6f8)));
  /* 104ee4c7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104ee4ca mov ecx, dword ptr [0x1050ed88] */
  ECX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee4d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104ee4d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104ee4d4 mov byte ptr [0x1050dea8], al */
  w8((uint32_t)(0x1050dea8), (AL));
  /* 104ee4d9 mov dword ptr [0x1050deac], 1 */
  w32((uint32_t)(0x1050deac), (0x1u));
  /* 104ee4e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ee4e5 jmp 0x104ee612 */
  goto L_104ee612;
L_104ee4ea:;
  /* 104ee4ea push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee4ec mov ecx, dword ptr [0x1050f6f0] */
  ECX = (r32((uint32_t)(0x1050f6f0)));
  /* 104ee4f2 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee4f3 call 0x104e3cb0 */
  push32(0x104ee4f8u); f_104e3cb0();
  /* 104ee4f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee4fb push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee4fd mov edx, dword ptr [0x1050f6f4] */
  EDX = (r32((uint32_t)(0x1050f6f4)));
  /* 104ee503 push edx */
  push32((uint32_t)(EDX));
  /* 104ee504 call 0x104e3cb0 */
  push32(0x104ee509u); f_104e3cb0();
  /* 104ee509 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee50c push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee50e mov eax, dword ptr [0x1050f6f8] */
  EAX = (r32((uint32_t)(0x1050f6f8)));
  /* 104ee513 push eax */
  push32((uint32_t)(EAX));
  /* 104ee514 call 0x104e3cb0 */
  push32(0x104ee519u); f_104e3cb0();
  /* 104ee519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee51c mov dword ptr [0x1050f6f0], 0 */
  w32((uint32_t)(0x1050f6f0), (0x0u));
  /* 104ee526 mov dword ptr [0x1050f6f4], 0 */
  w32((uint32_t)(0x1050f6f4), (0x0u));
  /* 104ee530 mov dword ptr [0x1050f6f8], 0 */
  w32((uint32_t)(0x1050f6f8), (0x0u));
  /* 104ee53a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 104ee53f push 0x1050b0fc */
  push32((uint32_t)(0x1050b0fcu));
  /* 104ee544 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee546 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee548 call 0x104e3220 */
  push32(0x104ee54du); f_104e3220();
  /* 104ee54d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee550 mov ecx, dword ptr [0x1050ed88] */
  ECX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee556 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104ee558 mov edx, dword ptr [0x1050ed88] */
  EDX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee55e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ee561 jne 0x104ee56b */
  if (!C.zf) goto L_104ee56b;
  /* 104ee563 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ee566 jmp 0x104ee612 */
  goto L_104ee612;
L_104ee56b:;
  /* 104ee56b push 0x1050b0cc */
  push32((uint32_t)(0x1050b0ccu));
  /* 104ee570 mov eax, dword ptr [0x1050ed88] */
  EAX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee575 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104ee577 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee578 call 0x104e61d0 */
  push32(0x104ee57du); f_104e61d0();
  /* 104ee57d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee580 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 104ee585 push 0x1050b0fc */
  push32((uint32_t)(0x1050b0fcu));
  /* 104ee58a push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee58c push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee58e call 0x104e3220 */
  push32(0x104ee593u); f_104e3220();
  /* 104ee593 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee596 mov edx, dword ptr [0x1050ed88] */
  EDX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee59c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 104ee59f mov eax, dword ptr [0x1050ed88] */
  EAX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee5a4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ee5a8 jne 0x104ee5af */
  if (!C.zf) goto L_104ee5af;
  /* 104ee5aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ee5ad jmp 0x104ee612 */
  goto L_104ee612;
L_104ee5af:;
  /* 104ee5af mov ecx, dword ptr [0x1050ed88] */
  ECX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee5b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104ee5b8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 104ee5bb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 104ee5c0 push 0x1050b0fc */
  push32((uint32_t)(0x1050b0fcu));
  /* 104ee5c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee5c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee5c9 call 0x104e3220 */
  push32(0x104ee5ceu); f_104e3220();
  /* 104ee5ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee5d1 mov ecx, dword ptr [0x1050ed88] */
  ECX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee5d7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 104ee5da mov edx, dword ptr [0x1050ed88] */
  EDX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee5e0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ee5e4 jne 0x104ee5eb */
  if (!C.zf) goto L_104ee5eb;
  /* 104ee5e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ee5e9 jmp 0x104ee612 */
  goto L_104ee612;
L_104ee5eb:;
  /* 104ee5eb mov eax, dword ptr [0x1050ed88] */
  EAX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee5f0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104ee5f3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 104ee5f6 mov edx, dword ptr [0x1050ed88] */
  EDX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee5fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104ee5fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104ee600 mov byte ptr [0x1050dea8], cl */
  w8((uint32_t)(0x1050dea8), (CL));
  /* 104ee606 mov dword ptr [0x1050deac], 1 */
  w32((uint32_t)(0x1050deac), (0x1u));
  /* 104ee610 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104ee612:;
  /* 104ee612 mov esp, ebp */
  ESP = (EBP);
  /* 104ee614 pop ebp */
  EBP = (pop32());
  /* 104ee615 ret  */
  ESPCHK(0x104ee370u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x104ee620 (125 bytes, 49 insns) */
void f_104ee620(void) {
  FTRACE(0x104ee620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ee620 push ebp */
  push32((uint32_t)(EBP));
  /* 104ee621 mov ebp, esp */
  EBP = (ESP);
  /* 104ee623 push ecx */
  push32((uint32_t)(ECX));
L_104ee624:;
  /* 104ee624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee627 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ee62a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ee62c je 0x104ee699 */
  if (C.zf) goto L_104ee699;
  /* 104ee62e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee631 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104ee634 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ee637 jl 0x104ee65d */
  if ((C.sf!=C.of)) goto L_104ee65d;
  /* 104ee639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee63c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104ee63f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ee642 jg 0x104ee65d */
  if ((!C.zf&&C.sf==C.of)) goto L_104ee65d;
  /* 104ee644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee647 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ee64a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ee64d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee650 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 104ee652 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee655 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee658 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104ee65b jmp 0x104ee697 */
  goto L_104ee697;
L_104ee65d:;
  /* 104ee65d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee660 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104ee663 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ee666 jne 0x104ee68e */
  if (!C.zf) goto L_104ee68e;
  /* 104ee668 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee66b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104ee66e:;
  /* 104ee66e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee674 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104ee677 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104ee679 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee67c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee67f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104ee682 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee685 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104ee688 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ee68a jne 0x104ee66e */
  if (!C.zf) goto L_104ee66e;
  /* 104ee68c jmp 0x104ee697 */
  goto L_104ee697;
L_104ee68e:;
  /* 104ee68e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee691 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee694 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_104ee697:;
  /* 104ee697 jmp 0x104ee624 */
  goto L_104ee624;
L_104ee699:;
  /* 104ee699 mov esp, ebp */
  ESP = (EBP);
  /* 104ee69b pop ebp */
  EBP = (pop32());
  /* 104ee69c ret  */
  ESPCHK(0x104ee620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6a0 @ 0x104ee6a0 (304 bytes, 85 insns) */
void f_104ee6a0(void) {
  FTRACE(0x104ee6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ee6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ee6a1 mov ebp, esp */
  EBP = (ESP);
  /* 104ee6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee6a4 cmp dword ptr [0x1050f6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ee6ab je 0x104ee76c */
  if (C.zf) goto L_104ee76c;
  /* 104ee6b1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 104ee6b3 push 0x1050b108 */
  push32((uint32_t)(0x1050b108u));
  /* 104ee6b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee6ba push 0x30 */
  push32((uint32_t)(0x30u));
  /* 104ee6bc push 1 */
  push32((uint32_t)(0x1u));
  /* 104ee6be call 0x104e3630 */
  push32(0x104ee6c3u); f_104e3630();
  /* 104ee6c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee6c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ee6c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ee6cd jne 0x104ee6d9 */
  if (!C.zf) goto L_104ee6d9;
  /* 104ee6cf mov eax, 1 */
  EAX = (0x1u);
  /* 104ee6d4 jmp 0x104ee7cc */
  goto L_104ee7cc;
L_104ee6d9:;
  /* 104ee6d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee6dc push eax */
  push32((uint32_t)(EAX));
  /* 104ee6dd call 0x104ee7d0 */
  push32(0x104ee6e2u); f_104ee7d0();
  /* 104ee6e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee6e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ee6e7 je 0x104ee70d */
  if (C.zf) goto L_104ee70d;
  /* 104ee6e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee6ec push ecx */
  push32((uint32_t)(ECX));
  /* 104ee6ed call 0x104eea60 */
  push32(0x104ee6f2u); f_104eea60();
  /* 104ee6f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee6f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee6f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee6fa push edx */
  push32((uint32_t)(EDX));
  /* 104ee6fb call 0x104e3cb0 */
  push32(0x104ee700u); f_104e3cb0();
  /* 104ee700 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee703 mov eax, 1 */
  EAX = (0x1u);
  /* 104ee708 jmp 0x104ee7cc */
  goto L_104ee7cc;
L_104ee70d:;
  /* 104ee70d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee710 mov ecx, dword ptr [0x1050ed88] */
  ECX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee716 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104ee718 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104ee71a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee71d mov ecx, dword ptr [0x1050ed88] */
  ECX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee723 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104ee726 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104ee729 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee72c mov ecx, dword ptr [0x1050ed88] */
  ECX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee732 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104ee735 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 104ee738 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee73b mov dword ptr [0x1050ed88], eax */
  w32((uint32_t)(0x1050ed88), (EAX));
  /* 104ee740 mov ecx, dword ptr [0x1050f6fc] */
  ECX = (r32((uint32_t)(0x1050f6fc)));
  /* 104ee746 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee747 call 0x104eea60 */
  push32(0x104ee74cu); f_104eea60();
  /* 104ee74c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee74f push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee751 mov edx, dword ptr [0x1050f6fc] */
  EDX = (r32((uint32_t)(0x1050f6fc)));
  /* 104ee757 push edx */
  push32((uint32_t)(EDX));
  /* 104ee758 call 0x104e3cb0 */
  push32(0x104ee75du); f_104e3cb0();
  /* 104ee75d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee760 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee763 mov dword ptr [0x1050f6fc], eax */
  w32((uint32_t)(0x1050f6fc), (EAX));
  /* 104ee768 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ee76a jmp 0x104ee7cc */
  goto L_104ee7cc;
L_104ee76c:;
  /* 104ee76c mov ecx, dword ptr [0x1050ed88] */
  ECX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee772 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104ee774 mov dword ptr [0x1050ed58], edx */
  w32((uint32_t)(0x1050ed58), (EDX));
  /* 104ee77a mov eax, dword ptr [0x1050ed88] */
  EAX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee77f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104ee782 mov dword ptr [0x1050ed5c], ecx */
  w32((uint32_t)(0x1050ed5c), (ECX));
  /* 104ee788 mov edx, dword ptr [0x1050ed88] */
  EDX = (r32((uint32_t)(0x1050ed88)));
  /* 104ee78e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104ee791 mov dword ptr [0x1050ed60], eax */
  w32((uint32_t)(0x1050ed60), (EAX));
  /* 104ee796 mov dword ptr [0x1050ed88], 0x1050ed58 */
  w32((uint32_t)(0x1050ed88), (0x1050ed58u));
  /* 104ee7a0 mov ecx, dword ptr [0x1050f6fc] */
  ECX = (r32((uint32_t)(0x1050f6fc)));
  /* 104ee7a6 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee7a7 call 0x104eea60 */
  push32(0x104ee7acu); f_104eea60();
  /* 104ee7ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee7af push 2 */
  push32((uint32_t)(0x2u));
  /* 104ee7b1 mov edx, dword ptr [0x1050f6fc] */
  EDX = (r32((uint32_t)(0x1050f6fc)));
  /* 104ee7b7 push edx */
  push32((uint32_t)(EDX));
  /* 104ee7b8 call 0x104e3cb0 */
  push32(0x104ee7bdu); f_104e3cb0();
  /* 104ee7bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee7c0 mov dword ptr [0x1050f6fc], 0 */
  w32((uint32_t)(0x1050f6fc), (0x0u));
  /* 104ee7ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104ee7cc:;
  /* 104ee7cc mov esp, ebp */
  ESP = (EBP);
  /* 104ee7ce pop ebp */
  EBP = (pop32());
  /* 104ee7cf ret  */
  ESPCHK(0x104ee6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7d0 @ 0x104ee7d0 (525 bytes, 200 insns) */
void f_104ee7d0(void) {
  FTRACE(0x104ee7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ee7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ee7d1 mov ebp, esp */
  EBP = (ESP);
  /* 104ee7d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ee7d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104ee7dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ee7df mov ax, word ptr [0x1050f71c] */
  AX = (r16((uint32_t)(0x1050f71c)));
  /* 104ee7e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ee7e8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ee7ec jne 0x104ee7f6 */
  if (!C.zf) goto L_104ee7f6;
  /* 104ee7ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ee7f1 jmp 0x104ee9d9 */
  goto L_104ee9d9;
L_104ee7f6:;
  /* 104ee7f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee7f9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee7fc push ecx */
  push32((uint32_t)(ECX));
  /* 104ee7fd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 104ee7ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee802 push edx */
  push32((uint32_t)(EDX));
  /* 104ee803 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ee805 call 0x104f13e0 */
  push32(0x104ee80au); f_104f13e0();
  /* 104ee80a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee80d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee810 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee812 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee815 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee818 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee81b push edx */
  push32((uint32_t)(EDX));
  /* 104ee81c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 104ee81e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee821 push eax */
  push32((uint32_t)(EAX));
  /* 104ee822 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ee824 call 0x104f13e0 */
  push32(0x104ee829u); f_104f13e0();
  /* 104ee829 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee82c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee82f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee831 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee834 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee837 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee83a push edx */
  push32((uint32_t)(EDX));
  /* 104ee83b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 104ee83d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee840 push eax */
  push32((uint32_t)(EAX));
  /* 104ee841 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ee843 call 0x104f13e0 */
  push32(0x104ee848u); f_104f13e0();
  /* 104ee848 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee84b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee84e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee850 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee853 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee856 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee859 push edx */
  push32((uint32_t)(EDX));
  /* 104ee85a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 104ee85c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee85f push eax */
  push32((uint32_t)(EAX));
  /* 104ee860 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ee862 call 0x104f13e0 */
  push32(0x104ee867u); f_104f13e0();
  /* 104ee867 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee86a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee86d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee86f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee872 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee875 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee878 push edx */
  push32((uint32_t)(EDX));
  /* 104ee879 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 104ee87b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee87e push eax */
  push32((uint32_t)(EAX));
  /* 104ee87f push 1 */
  push32((uint32_t)(0x1u));
  /* 104ee881 call 0x104f13e0 */
  push32(0x104ee886u); f_104f13e0();
  /* 104ee886 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee889 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee88c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee88e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee894 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104ee897 push eax */
  push32((uint32_t)(EAX));
  /* 104ee898 call 0x104ee9e0 */
  push32(0x104ee89du); f_104ee9e0();
  /* 104ee89d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee8a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee8a3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee8a6 push ecx */
  push32((uint32_t)(ECX));
  /* 104ee8a7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 104ee8a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee8ac push edx */
  push32((uint32_t)(EDX));
  /* 104ee8ad push 1 */
  push32((uint32_t)(0x1u));
  /* 104ee8af call 0x104f13e0 */
  push32(0x104ee8b4u); f_104f13e0();
  /* 104ee8b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee8b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee8ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee8bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee8bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee8c2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee8c5 push edx */
  push32((uint32_t)(EDX));
  /* 104ee8c6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 104ee8c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee8cb push eax */
  push32((uint32_t)(EAX));
  /* 104ee8cc push 1 */
  push32((uint32_t)(0x1u));
  /* 104ee8ce call 0x104f13e0 */
  push32(0x104ee8d3u); f_104f13e0();
  /* 104ee8d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee8d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee8d9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee8db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee8de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee8e1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee8e4 push edx */
  push32((uint32_t)(EDX));
  /* 104ee8e5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 104ee8e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee8ea push eax */
  push32((uint32_t)(EAX));
  /* 104ee8eb push 0 */
  push32((uint32_t)(0x0u));
  /* 104ee8ed call 0x104f13e0 */
  push32(0x104ee8f2u); f_104f13e0();
  /* 104ee8f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee8f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee8f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee8fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee8fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee900 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee903 push edx */
  push32((uint32_t)(EDX));
  /* 104ee904 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104ee906 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee909 push eax */
  push32((uint32_t)(EAX));
  /* 104ee90a push 0 */
  push32((uint32_t)(0x0u));
  /* 104ee90c call 0x104f13e0 */
  push32(0x104ee911u); f_104f13e0();
  /* 104ee911 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee914 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee917 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee919 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee91c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee91f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee922 push edx */
  push32((uint32_t)(EDX));
  /* 104ee923 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 104ee925 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee928 push eax */
  push32((uint32_t)(EAX));
  /* 104ee929 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ee92b call 0x104f13e0 */
  push32(0x104ee930u); f_104f13e0();
  /* 104ee930 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee933 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee936 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee938 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee93b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee93e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee941 push edx */
  push32((uint32_t)(EDX));
  /* 104ee942 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 104ee944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee947 push eax */
  push32((uint32_t)(EAX));
  /* 104ee948 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ee94a call 0x104f13e0 */
  push32(0x104ee94fu); f_104f13e0();
  /* 104ee94f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee952 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee955 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee957 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee95a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee95d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee960 push edx */
  push32((uint32_t)(EDX));
  /* 104ee961 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 104ee963 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee966 push eax */
  push32((uint32_t)(EAX));
  /* 104ee967 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ee969 call 0x104f13e0 */
  push32(0x104ee96eu); f_104f13e0();
  /* 104ee96e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee971 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee974 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee976 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee979 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee97c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee97f push edx */
  push32((uint32_t)(EDX));
  /* 104ee980 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 104ee982 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee985 push eax */
  push32((uint32_t)(EAX));
  /* 104ee986 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ee988 call 0x104f13e0 */
  push32(0x104ee98du); f_104f13e0();
  /* 104ee98d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee990 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee993 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee995 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee998 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee99b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee99e push edx */
  push32((uint32_t)(EDX));
  /* 104ee99f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 104ee9a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee9a4 push eax */
  push32((uint32_t)(EAX));
  /* 104ee9a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ee9a7 call 0x104f13e0 */
  push32(0x104ee9acu); f_104f13e0();
  /* 104ee9ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee9af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee9b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee9b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee9b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee9ba add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee9bd push edx */
  push32((uint32_t)(EDX));
  /* 104ee9be push 0x53 */
  push32((uint32_t)(0x53u));
  /* 104ee9c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ee9c3 push eax */
  push32((uint32_t)(EAX));
  /* 104ee9c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ee9c6 call 0x104f13e0 */
  push32(0x104ee9cbu); f_104f13e0();
  /* 104ee9cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ee9ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ee9d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104ee9d3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104ee9d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104ee9d9:;
  /* 104ee9d9 mov esp, ebp */
  ESP = (EBP);
  /* 104ee9db pop ebp */
  EBP = (pop32());
  /* 104ee9dc ret  */
  ESPCHK(0x104ee7d0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x104ee9e0 (125 bytes, 49 insns) */
void f_104ee9e0(void) {
  FTRACE(0x104ee9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ee9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ee9e1 mov ebp, esp */
  EBP = (ESP);
  /* 104ee9e3 push ecx */
  push32((uint32_t)(ECX));
L_104ee9e4:;
  /* 104ee9e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee9e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ee9ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ee9ec je 0x104eea59 */
  if (C.zf) goto L_104eea59;
  /* 104ee9ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee9f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104ee9f4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ee9f7 jl 0x104eea1d */
  if ((C.sf!=C.of)) goto L_104eea1d;
  /* 104ee9f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ee9fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104ee9ff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eea02 jg 0x104eea1d */
  if ((!C.zf&&C.sf==C.of)) goto L_104eea1d;
  /* 104eea04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eea07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104eea0a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eea0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eea10 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 104eea12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eea15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eea18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104eea1b jmp 0x104eea57 */
  goto L_104eea57;
L_104eea1d:;
  /* 104eea1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eea20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104eea23 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eea26 jne 0x104eea4e */
  if (!C.zf) goto L_104eea4e;
  /* 104eea28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eea2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104eea2e:;
  /* 104eea2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eea31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eea34 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104eea37 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104eea39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eea3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eea3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104eea42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104eea45 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104eea48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eea4a jne 0x104eea2e */
  if (!C.zf) goto L_104eea2e;
  /* 104eea4c jmp 0x104eea57 */
  goto L_104eea57;
L_104eea4e:;
  /* 104eea4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eea51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eea54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_104eea57:;
  /* 104eea57 jmp 0x104ee9e4 */
  goto L_104ee9e4;
L_104eea59:;
  /* 104eea59 mov esp, ebp */
  ESP = (EBP);
  /* 104eea5b pop ebp */
  EBP = (pop32());
  /* 104eea5c ret  */
  ESPCHK(0x104ee9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea60 @ 0x104eea60 (147 bytes, 52 insns) */
void f_104eea60(void) {
  FTRACE(0x104eea60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eea60 push ebp */
  push32((uint32_t)(EBP));
  /* 104eea61 mov ebp, esp */
  EBP = (ESP);
  /* 104eea63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eea67 jne 0x104eea6e */
  if (!C.zf) goto L_104eea6e;
  /* 104eea69 jmp 0x104eeaf1 */
  goto L_104eeaf1;
L_104eea6e:;
  /* 104eea6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eea71 cmp dword ptr [eax + 0xc], 0x1050f758 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1050f758u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eea78 je 0x104eeaf1 */
  if (C.zf) goto L_104eeaf1;
  /* 104eea7a push 2 */
  push32((uint32_t)(0x2u));
  /* 104eea7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eea7f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104eea82 push edx */
  push32((uint32_t)(EDX));
  /* 104eea83 call 0x104e3cb0 */
  push32(0x104eea88u); f_104e3cb0();
  /* 104eea88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eea8b push 2 */
  push32((uint32_t)(0x2u));
  /* 104eea8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eea90 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104eea93 push ecx */
  push32((uint32_t)(ECX));
  /* 104eea94 call 0x104e3cb0 */
  push32(0x104eea99u); f_104e3cb0();
  /* 104eea99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eea9c push 2 */
  push32((uint32_t)(0x2u));
  /* 104eea9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eeaa1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104eeaa4 push eax */
  push32((uint32_t)(EAX));
  /* 104eeaa5 call 0x104e3cb0 */
  push32(0x104eeaaau); f_104e3cb0();
  /* 104eeaaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eeaad push 2 */
  push32((uint32_t)(0x2u));
  /* 104eeaaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eeab2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104eeab5 push edx */
  push32((uint32_t)(EDX));
  /* 104eeab6 call 0x104e3cb0 */
  push32(0x104eeabbu); f_104e3cb0();
  /* 104eeabb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eeabe push 2 */
  push32((uint32_t)(0x2u));
  /* 104eeac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eeac3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104eeac6 push ecx */
  push32((uint32_t)(ECX));
  /* 104eeac7 call 0x104e3cb0 */
  push32(0x104eeaccu); f_104e3cb0();
  /* 104eeacc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eeacf push 2 */
  push32((uint32_t)(0x2u));
  /* 104eead1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eead4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 104eead7 push eax */
  push32((uint32_t)(EAX));
  /* 104eead8 call 0x104e3cb0 */
  push32(0x104eeaddu); f_104e3cb0();
  /* 104eeadd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eeae0 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eeae2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eeae5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 104eeae8 push edx */
  push32((uint32_t)(EDX));
  /* 104eeae9 call 0x104e3cb0 */
  push32(0x104eeaeeu); f_104e3cb0();
  /* 104eeaee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104eeaf1:;
  /* 104eeaf1 pop ebp */
  EBP = (pop32());
  /* 104eeaf2 ret  */
  ESPCHK(0x104eea60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb00 @ 0x104eeb00 (928 bytes, 284 insns) */
void f_104eeb00(void) {
  FTRACE(0x104eeb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eeb00 push ebp */
  push32((uint32_t)(EBP));
  /* 104eeb01 mov ebp, esp */
  EBP = (ESP);
  /* 104eeb03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eeb06 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 104eeb0d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 104eeb14 cmp dword ptr [0x1050f6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eeb1b je 0x104eee51 */
  if (C.zf) goto L_104eee51;
  /* 104eeb21 cmp dword ptr [0x1050f6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eeb28 jne 0x104eeb50 */
  if (!C.zf) goto L_104eeb50;
  /* 104eeb2a push 0x1050f6d0 */
  push32((uint32_t)(0x1050f6d0u));
  /* 104eeb2f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 104eeb34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eeb36 mov ax, word ptr [0x1050f714] */
  AX = (r16((uint32_t)(0x1050f714)));
  /* 104eeb3c push eax */
  push32((uint32_t)(EAX));
  /* 104eeb3d push 0 */
  push32((uint32_t)(0x0u));
  /* 104eeb3f call 0x104f13e0 */
  push32(0x104eeb44u); f_104f13e0();
  /* 104eeb44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eeb47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eeb49 je 0x104eeb50 */
  if (C.zf) goto L_104eeb50;
  /* 104eeb4b jmp 0x104eee12 */
  goto L_104eee12;
L_104eeb50:;
  /* 104eeb50 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 104eeb52 push 0x1050b114 */
  push32((uint32_t)(0x1050b114u));
  /* 104eeb57 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eeb59 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 104eeb5e call 0x104e3220 */
  push32(0x104eeb63u); f_104e3220();
  /* 104eeb63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eeb66 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 104eeb69 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 104eeb6b push 0x1050b114 */
  push32((uint32_t)(0x1050b114u));
  /* 104eeb70 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eeb72 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 104eeb77 call 0x104e3220 */
  push32(0x104eeb7cu); f_104e3220();
  /* 104eeb7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eeb7f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104eeb82 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 104eeb84 push 0x1050b114 */
  push32((uint32_t)(0x1050b114u));
  /* 104eeb89 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eeb8b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 104eeb90 call 0x104e3220 */
  push32(0x104eeb95u); f_104e3220();
  /* 104eeb95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eeb98 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 104eeb9b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 104eeb9d push 0x1050b114 */
  push32((uint32_t)(0x1050b114u));
  /* 104eeba2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eeba4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 104eeba9 call 0x104e3220 */
  push32(0x104eebaeu); f_104e3220();
  /* 104eebae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eebb1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104eebb4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eebb8 je 0x104eebcc */
  if (C.zf) goto L_104eebcc;
  /* 104eebba cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eebbe je 0x104eebcc */
  if (C.zf) goto L_104eebcc;
  /* 104eebc0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eebc4 je 0x104eebcc */
  if (C.zf) goto L_104eebcc;
  /* 104eebc6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eebca jne 0x104eebd1 */
  if (!C.zf) goto L_104eebd1;
L_104eebcc:;
  /* 104eebcc jmp 0x104eee12 */
  goto L_104eee12;
L_104eebd1:;
  /* 104eebd1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104eebd4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104eebd7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104eebde jmp 0x104eebe9 */
  goto L_104eebe9;
L_104eebe0:;
  /* 104eebe0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eebe3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eebe6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_104eebe9:;
  /* 104eebe9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eebf0 jge 0x104eec05 */
  if ((C.sf==C.of)) goto L_104eec05;
  /* 104eebf2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104eebf5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 104eebf8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 104eebfa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104eebfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eec00 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104eec03 jmp 0x104eebe0 */
  goto L_104eebe0;
L_104eec05:;
  /* 104eec05 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 104eec08 push eax */
  push32((uint32_t)(EAX));
  /* 104eec09 mov ecx, dword ptr [0x1050f6d0] */
  ECX = (r32((uint32_t)(0x1050f6d0)));
  /* 104eec0f push ecx */
  push32((uint32_t)(ECX));
  /* 104eec10 call dword ptr [0x10512334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512334))), 0x104eec16u);
  /* 104eec16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eec18 jne 0x104eec1f */
  if (!C.zf) goto L_104eec1f;
  /* 104eec1a jmp 0x104eee12 */
  goto L_104eee12;
L_104eec1f:;
  /* 104eec1f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eec23 jbe 0x104eec2a */
  if ((C.cf||C.zf)) goto L_104eec2a;
  /* 104eec25 jmp 0x104eee12 */
  goto L_104eee12;
L_104eec2a:;
  /* 104eec2a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104eec2d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104eec33 mov dword ptr [0x1050dea4], edx */
  w32((uint32_t)(0x1050dea4), (EDX));
  /* 104eec39 cmp dword ptr [0x1050dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eec40 jle 0x104eec99 */
  if ((C.zf||C.sf!=C.of)) goto L_104eec99;
  /* 104eec42 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 104eec45 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104eec48 jmp 0x104eec53 */
  goto L_104eec53;
L_104eec4a:;
  /* 104eec4a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104eec4d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eec50 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_104eec53:;
  /* 104eec53 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104eec56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eec58 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104eec5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eec5c je 0x104eec99 */
  if (C.zf) goto L_104eec99;
  /* 104eec5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104eec61 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104eec63 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 104eec66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104eec68 je 0x104eec99 */
  if (C.zf) goto L_104eec99;
  /* 104eec6a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104eec6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104eec6f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104eec71 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104eec74 jmp 0x104eec7f */
  goto L_104eec7f;
L_104eec76:;
  /* 104eec76 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eec79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eec7c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_104eec7f:;
  /* 104eec7f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104eec82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104eec84 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 104eec87 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eec8a jg 0x104eec97 */
  if ((!C.zf&&C.sf==C.of)) goto L_104eec97;
  /* 104eec8c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104eec8f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eec92 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 104eec95 jmp 0x104eec76 */
  goto L_104eec76;
L_104eec97:;
  /* 104eec97 jmp 0x104eec4a */
  goto L_104eec4a;
L_104eec99:;
  /* 104eec99 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eec9b push 0 */
  push32((uint32_t)(0x0u));
  /* 104eec9d push 0 */
  push32((uint32_t)(0x0u));
  /* 104eec9f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104eeca2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eeca5 push eax */
  push32((uint32_t)(EAX));
  /* 104eeca6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104eecab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104eecae push ecx */
  push32((uint32_t)(ECX));
  /* 104eecaf push 1 */
  push32((uint32_t)(0x1u));
  /* 104eecb1 call 0x104eb450 */
  push32(0x104eecb6u); f_104eb450();
  /* 104eecb6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eecb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eecbb jne 0x104eecc2 */
  if (!C.zf) goto L_104eecc2;
  /* 104eecbd jmp 0x104eee12 */
  goto L_104eee12;
L_104eecc2:;
  /* 104eecc2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104eecc5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 104eecca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104eeccd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104eecd0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104eecd7 jmp 0x104eece2 */
  goto L_104eece2;
L_104eecd9:;
  /* 104eecd9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eecdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eecdf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_104eece2:;
  /* 104eece2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eece9 jge 0x104eed00 */
  if ((C.sf==C.of)) goto L_104eed00;
  /* 104eeceb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104eecee mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 104eecf2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 104eecf5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104eecf8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eecfb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104eecfe jmp 0x104eecd9 */
  goto L_104eecd9;
L_104eed00:;
  /* 104eed00 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eed02 push 0 */
  push32((uint32_t)(0x0u));
  /* 104eed04 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104eed07 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eed0a push edx */
  push32((uint32_t)(EDX));
  /* 104eed0b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104eed10 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104eed13 push eax */
  push32((uint32_t)(EAX));
  /* 104eed14 push 1 */
  push32((uint32_t)(0x1u));
  /* 104eed16 call 0x104f1680 */
  push32(0x104eed1bu); f_104f1680();
  /* 104eed1b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eed1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104eed20 jne 0x104eed27 */
  if (!C.zf) goto L_104eed27;
  /* 104eed22 jmp 0x104eee12 */
  goto L_104eee12;
L_104eed27:;
  /* 104eed27 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104eed2a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 104eed2f cmp dword ptr [0x1050dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eed36 jle 0x104eed93 */
  if ((C.zf||C.sf!=C.of)) goto L_104eed93;
  /* 104eed38 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 104eed3b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104eed3e jmp 0x104eed49 */
  goto L_104eed49;
L_104eed40:;
  /* 104eed40 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104eed43 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eed46 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_104eed49:;
  /* 104eed49 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104eed4c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104eed4e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104eed50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104eed52 je 0x104eed93 */
  if (C.zf) goto L_104eed93;
  /* 104eed54 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104eed57 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104eed59 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 104eed5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104eed5e je 0x104eed93 */
  if (C.zf) goto L_104eed93;
  /* 104eed60 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104eed63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eed65 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104eed67 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104eed6a jmp 0x104eed75 */
  goto L_104eed75;
L_104eed6c:;
  /* 104eed6c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eed6f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eed72 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_104eed75:;
  /* 104eed75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104eed78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eed7a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104eed7d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eed80 jg 0x104eed91 */
  if ((!C.zf&&C.sf==C.of)) goto L_104eed91;
  /* 104eed82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104eed85 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104eed88 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 104eed8f jmp 0x104eed6c */
  goto L_104eed6c;
L_104eed91:;
  /* 104eed91 jmp 0x104eed40 */
  goto L_104eed40;
L_104eed93:;
  /* 104eed93 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104eed96 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eed99 mov dword ptr [0x1050dc98], eax */
  w32((uint32_t)(0x1050dc98), (EAX));
  /* 104eed9e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104eeda1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eeda4 mov dword ptr [0x1050dc9c], ecx */
  w32((uint32_t)(0x1050dc9c), (ECX));
  /* 104eedaa cmp dword ptr [0x1050f700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eedb1 je 0x104eedc4 */
  if (C.zf) goto L_104eedc4;
  /* 104eedb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eedb5 mov edx, dword ptr [0x1050f700] */
  EDX = (r32((uint32_t)(0x1050f700)));
  /* 104eedbb push edx */
  push32((uint32_t)(EDX));
  /* 104eedbc call 0x104e3cb0 */
  push32(0x104eedc1u); f_104e3cb0();
  /* 104eedc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104eedc4:;
  /* 104eedc4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104eedc7 mov dword ptr [0x1050f700], eax */
  w32((uint32_t)(0x1050f700), (EAX));
  /* 104eedcc cmp dword ptr [0x1050f704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104eedd3 je 0x104eede6 */
  if (C.zf) goto L_104eede6;
  /* 104eedd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eedd7 mov ecx, dword ptr [0x1050f704] */
  ECX = (r32((uint32_t)(0x1050f704)));
  /* 104eeddd push ecx */
  push32((uint32_t)(ECX));
  /* 104eedde call 0x104e3cb0 */
  push32(0x104eede3u); f_104e3cb0();
  /* 104eede3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104eede6:;
  /* 104eede6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104eede9 mov dword ptr [0x1050f704], edx */
  w32((uint32_t)(0x1050f704), (EDX));
  /* 104eedef push 2 */
  push32((uint32_t)(0x2u));
  /* 104eedf1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104eedf4 push eax */
  push32((uint32_t)(EAX));
  /* 104eedf5 call 0x104e3cb0 */
  push32(0x104eedfau); f_104e3cb0();
  /* 104eedfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eedfd push 2 */
  push32((uint32_t)(0x2u));
  /* 104eedff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104eee02 push ecx */
  push32((uint32_t)(ECX));
  /* 104eee03 call 0x104e3cb0 */
  push32(0x104eee08u); f_104e3cb0();
  /* 104eee08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eee0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eee0d jmp 0x104eee9c */
  goto L_104eee9c;
L_104eee12:;
  /* 104eee12 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eee14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104eee17 push edx */
  push32((uint32_t)(EDX));
  /* 104eee18 call 0x104e3cb0 */
  push32(0x104eee1du); f_104e3cb0();
  /* 104eee1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eee20 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eee22 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104eee25 push eax */
  push32((uint32_t)(EAX));
  /* 104eee26 call 0x104e3cb0 */
  push32(0x104eee2bu); f_104e3cb0();
  /* 104eee2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eee2e push 2 */
  push32((uint32_t)(0x2u));
  /* 104eee30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104eee33 push ecx */
  push32((uint32_t)(ECX));
  /* 104eee34 call 0x104e3cb0 */
  push32(0x104eee39u); f_104e3cb0();
  /* 104eee39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eee3c push 2 */
  push32((uint32_t)(0x2u));
  /* 104eee3e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 104eee41 push edx */
  push32((uint32_t)(EDX));
  /* 104eee42 call 0x104e3cb0 */
  push32(0x104eee47u); f_104e3cb0();
  /* 104eee47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eee4a mov eax, 1 */
  EAX = (0x1u);
  /* 104eee4f jmp 0x104eee9c */
  goto L_104eee9c;
L_104eee51:;
  /* 104eee51 mov dword ptr [0x1050dc98], 0x1050dca2 */
  w32((uint32_t)(0x1050dc98), (0x1050dca2u));
  /* 104eee5b mov dword ptr [0x1050dc9c], 0x1050dca2 */
  w32((uint32_t)(0x1050dc9c), (0x1050dca2u));
  /* 104eee65 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eee67 mov eax, dword ptr [0x1050f700] */
  EAX = (r32((uint32_t)(0x1050f700)));
  /* 104eee6c push eax */
  push32((uint32_t)(EAX));
  /* 104eee6d call 0x104e3cb0 */
  push32(0x104eee72u); f_104e3cb0();
  /* 104eee72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eee75 push 2 */
  push32((uint32_t)(0x2u));
  /* 104eee77 mov ecx, dword ptr [0x1050f704] */
  ECX = (r32((uint32_t)(0x1050f704)));
  /* 104eee7d push ecx */
  push32((uint32_t)(ECX));
  /* 104eee7e call 0x104e3cb0 */
  push32(0x104eee83u); f_104e3cb0();
  /* 104eee83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eee86 mov dword ptr [0x1050f700], 0 */
  w32((uint32_t)(0x1050f700), (0x0u));
  /* 104eee90 mov dword ptr [0x1050f704], 0 */
  w32((uint32_t)(0x1050f704), (0x0u));
  /* 104eee9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104eee9c:;
  /* 104eee9c mov esp, ebp */
  ESP = (EBP);
  /* 104eee9e pop ebp */
  EBP = (pop32());
  /* 104eee9f ret  */
  ESPCHK(0x104eeb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eea0 @ 0x104eeea0 (7 bytes, 5 insns) */
void f_104eeea0(void) {
  FTRACE(0x104eeea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eeea0 push ebp */
  push32((uint32_t)(EBP));
  /* 104eeea1 mov ebp, esp */
  EBP = (ESP);
  /* 104eeea3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eeea5 pop ebp */
  EBP = (pop32());
  /* 104eeea6 ret  */
  ESPCHK(0x104eeea0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x104eeeb0 (129 bytes, 56 insns) */
void f_104eeeb0(void) {
  FTRACE(0x104eeeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eeeb0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 104eeeb4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 104eeeb8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 104eeebe jne 0x104eeefc */
  if (!C.zf) goto L_104eeefc;
L_104eeec0:;
  /* 104eeec0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104eeec2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104eeec4 jne 0x104eeef4 */
  if (!C.zf) goto L_104eeef4;
  /* 104eeec6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104eeec8 je 0x104eeef0 */
  if (C.zf) goto L_104eeef0;
  /* 104eeeca cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104eeecd jne 0x104eeef4 */
  if (!C.zf) goto L_104eeef4;
  /* 104eeecf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 104eeed1 je 0x104eeef0 */
  if (C.zf) goto L_104eeef0;
  /* 104eeed3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 104eeed6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104eeed9 jne 0x104eeef4 */
  if (!C.zf) goto L_104eeef4;
  /* 104eeedb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104eeedd je 0x104eeef0 */
  if (C.zf) goto L_104eeef0;
  /* 104eeedf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104eeee2 jne 0x104eeef4 */
  if (!C.zf) goto L_104eeef4;
  /* 104eeee4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eeee7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eeeea or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 104eeeec jne 0x104eeec0 */
  if (!C.zf) goto L_104eeec0;
  /* 104eeeee mov edi, edi */
  EDI = (EDI);
L_104eeef0:;
  /* 104eeef0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eeef2 ret  */
  ESPCHK(0x104eeeb0u, _esp0);
  ESP += 4; return;
  /* 104eeef3 nop  */
  /* nop */
L_104eeef4:;
  /* 104eeef4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104eeef6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104eeef8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 104eeef9 ret  */
  ESPCHK(0x104eeeb0u, _esp0);
  ESP += 4; return;
  /* 104eeefa mov edi, edi */
  EDI = (EDI);
L_104eeefc:;
  /* 104eeefc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 104eef02 je 0x104eef18 */
  if (C.zf) goto L_104eef18;
  /* 104eef04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104eef06 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 104eef07 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104eef09 jne 0x104eeef4 */
  if (!C.zf) goto L_104eeef4;
  /* 104eef0b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 104eef0c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104eef0e je 0x104eeef0 */
  if (C.zf) goto L_104eeef0;
  /* 104eef10 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 104eef16 je 0x104eeec0 */
  if (C.zf) goto L_104eeec0;
L_104eef18:;
  /* 104eef18 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 104eef1b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eef1e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104eef20 jne 0x104eeef4 */
  if (!C.zf) goto L_104eeef4;
  /* 104eef22 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104eef24 je 0x104eeef0 */
  if (C.zf) goto L_104eeef0;
  /* 104eef26 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104eef29 jne 0x104eeef4 */
  if (!C.zf) goto L_104eeef4;
  /* 104eef2b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 104eef2d je 0x104eeef0 */
  if (C.zf) goto L_104eeef0;
  /* 104eef2f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eef32 jmp 0x104eeec0 */
  goto L_104eeec0;
}

/* FUN_1000ef40 @ 0x104eef40 (62 bytes, 35 insns) */
void f_104eef40(void) {
  FTRACE(0x104eef40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eef40 push ebp */
  push32((uint32_t)(EBP));
  /* 104eef41 mov ebp, esp */
  EBP = (ESP);
  /* 104eef43 push esi */
  push32((uint32_t)(ESI));
  /* 104eef44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eef46 push eax */
  push32((uint32_t)(EAX));
  /* 104eef47 push eax */
  push32((uint32_t)(EAX));
  /* 104eef48 push eax */
  push32((uint32_t)(EAX));
  /* 104eef49 push eax */
  push32((uint32_t)(EAX));
  /* 104eef4a push eax */
  push32((uint32_t)(EAX));
  /* 104eef4b push eax */
  push32((uint32_t)(EAX));
  /* 104eef4c push eax */
  push32((uint32_t)(EAX));
  /* 104eef4d push eax */
  push32((uint32_t)(EAX));
  /* 104eef4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eef51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104eef54:;
  /* 104eef54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104eef56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104eef58 je 0x104eef61 */
  if (C.zf) goto L_104eef61;
  /* 104eef5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 104eef5b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x104eef5b");
  /* 104eef5f jmp 0x104eef54 */
  goto L_104eef54;
L_104eef61:;
  /* 104eef61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 104eef64 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104eef67 nop  */
  /* nop */
L_104eef68:;
  /* 104eef68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 104eef69 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104eef6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104eef6d je 0x104eef76 */
  if (C.zf) goto L_104eef76;
  /* 104eef6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104eef70 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x104eef70");
  /* 104eef74 jae 0x104eef68 */
  if (!C.cf) goto L_104eef68;
L_104eef76:;
  /* 104eef76 mov eax, ecx */
  EAX = (ECX);
  /* 104eef78 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eef7b pop esi */
  ESI = (pop32());
  /* 104eef7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104eef7d ret  */
  ESPCHK(0x104eef40u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x104eef80 (56 bytes, 31 insns) */
void f_104eef80(void) {
  FTRACE(0x104eef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eef80 push ebp */
  push32((uint32_t)(EBP));
  /* 104eef81 mov ebp, esp */
  EBP = (ESP);
  /* 104eef83 push edi */
  push32((uint32_t)(EDI));
  /* 104eef84 push esi */
  push32((uint32_t)(ESI));
  /* 104eef85 push ebx */
  push32((uint32_t)(EBX));
  /* 104eef86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104eef89 jecxz 0x104eefb1 */
  x86_unimpl("jecxz @ 0x104eef89");
  /* 104eef8b mov ebx, ecx */
  EBX = (ECX);
  /* 104eef8d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 104eef90 mov esi, edi */
  ESI = (EDI);
  /* 104eef92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eef94 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 104eef96 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104eef98 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104eef9a mov edi, esi */
  EDI = (ESI);
  /* 104eef9c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104eef9f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 104eefa1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 104eefa4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104eefa6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104eefa9 ja 0x104eefaf */
  if ((!C.cf&&!C.zf)) goto L_104eefaf;
  /* 104eefab je 0x104eefb1 */
  if (C.zf) goto L_104eefb1;
  /* 104eefad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104eefae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_104eefaf:;
  /* 104eefaf not ecx */
  ECX = (~(ECX));
L_104eefb1:;
  /* 104eefb1 mov eax, ecx */
  EAX = (ECX);
  /* 104eefb3 pop ebx */
  EBX = (pop32());
  /* 104eefb4 pop esi */
  ESI = (pop32());
  /* 104eefb5 pop edi */
  EDI = (pop32());
  /* 104eefb6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104eefb7 ret  */
  ESPCHK(0x104eef80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efc0 @ 0x104eefc0 (58 bytes, 32 insns) */
void f_104eefc0(void) {
  FTRACE(0x104eefc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104eefc0 push ebp */
  push32((uint32_t)(EBP));
  /* 104eefc1 mov ebp, esp */
  EBP = (ESP);
  /* 104eefc3 push esi */
  push32((uint32_t)(ESI));
  /* 104eefc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104eefc6 push eax */
  push32((uint32_t)(EAX));
  /* 104eefc7 push eax */
  push32((uint32_t)(EAX));
  /* 104eefc8 push eax */
  push32((uint32_t)(EAX));
  /* 104eefc9 push eax */
  push32((uint32_t)(EAX));
  /* 104eefca push eax */
  push32((uint32_t)(EAX));
  /* 104eefcb push eax */
  push32((uint32_t)(EAX));
  /* 104eefcc push eax */
  push32((uint32_t)(EAX));
  /* 104eefcd push eax */
  push32((uint32_t)(EAX));
  /* 104eefce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104eefd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104eefd4:;
  /* 104eefd4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104eefd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104eefd8 je 0x104eefe1 */
  if (C.zf) goto L_104eefe1;
  /* 104eefda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 104eefdb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x104eefdb");
  /* 104eefdf jmp 0x104eefd4 */
  goto L_104eefd4;
L_104eefe1:;
  /* 104eefe1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_104eefe4:;
  /* 104eefe4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104eefe6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104eefe8 je 0x104eeff4 */
  if (C.zf) goto L_104eeff4;
  /* 104eefea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104eefeb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x104eefeb");
  /* 104eefef jae 0x104eefe4 */
  if (!C.cf) goto L_104eefe4;
  /* 104eeff1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_104eeff4:;
  /* 104eeff4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eeff7 pop esi */
  ESI = (pop32());
  /* 104eeff8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104eeff9 ret  */
  ESPCHK(0x104eefc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f000 @ 0x104ef000 (512 bytes, 147 insns) */
void f_104ef000(void) {
  FTRACE(0x104ef000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ef000 push ebp */
  push32((uint32_t)(EBP));
  /* 104ef001 mov ebp, esp */
  EBP = (ESP);
  /* 104ef003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef006 cmp dword ptr [0x1050f74c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f74c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef00d jne 0x104ef032 */
  if (!C.zf) goto L_104ef032;
  /* 104ef00f call 0x104efad0 */
  push32(0x104ef014u); f_104efad0();
  /* 104ef014 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef016 je 0x104ef022 */
  if (C.zf) goto L_104ef022;
  /* 104ef018 mov eax, dword ptr [0x10512264] */
  EAX = (r32((uint32_t)(0x10512264)));
  /* 104ef01d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ef020 jmp 0x104ef029 */
  goto L_104ef029;
L_104ef022:;
  /* 104ef022 mov dword ptr [ebp - 8], 0x104efb20 */
  w32((uint32_t)(EBP + -0x8), (0x104efb20u));
L_104ef029:;
  /* 104ef029 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104ef02c mov dword ptr [0x1050f74c], ecx */
  w32((uint32_t)(0x1050f74c), (ECX));
L_104ef032:;
  /* 104ef032 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef036 jne 0x104ef042 */
  if (!C.zf) goto L_104ef042;
  /* 104ef038 call 0x104ef920 */
  push32(0x104ef03du); f_104ef920();
  /* 104ef03d jmp 0x104ef10e */
  goto L_104ef10e;
L_104ef042:;
  /* 104ef042 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ef045 mov dword ptr [0x1050f73c], edx */
  w32((uint32_t)(0x1050f73c), (EDX));
  /* 104ef04b cmp dword ptr [0x1050f73c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f73c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef052 je 0x104ef074 */
  if (C.zf) goto L_104ef074;
  /* 104ef054 mov eax, dword ptr [0x1050f73c] */
  EAX = (r32((uint32_t)(0x1050f73c)));
  /* 104ef059 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ef05c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ef05e je 0x104ef074 */
  if (C.zf) goto L_104ef074;
  /* 104ef060 push 0x1050f73c */
  push32((uint32_t)(0x1050f73cu));
  /* 104ef065 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 104ef067 push 0x1050ea90 */
  push32((uint32_t)(0x1050ea90u));
  /* 104ef06c call 0x104ef200 */
  push32(0x104ef071u); f_104ef200();
  /* 104ef071 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ef074:;
  /* 104ef074 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ef077 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef07a mov dword ptr [0x1050f740], edx */
  w32((uint32_t)(0x1050f740), (EDX));
  /* 104ef080 cmp dword ptr [0x1050f740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef087 je 0x104ef0a9 */
  if (C.zf) goto L_104ef0a9;
  /* 104ef089 mov eax, dword ptr [0x1050f740] */
  EAX = (r32((uint32_t)(0x1050f740)));
  /* 104ef08e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ef091 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ef093 je 0x104ef0a9 */
  if (C.zf) goto L_104ef0a9;
  /* 104ef095 push 0x1050f740 */
  push32((uint32_t)(0x1050f740u));
  /* 104ef09a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 104ef09c push 0x1050e9d8 */
  push32((uint32_t)(0x1050e9d8u));
  /* 104ef0a1 call 0x104ef200 */
  push32(0x104ef0a6u); f_104ef200();
  /* 104ef0a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ef0a9:;
  /* 104ef0a9 mov dword ptr [0x1050f744], 0 */
  w32((uint32_t)(0x1050f744), (0x0u));
  /* 104ef0b3 cmp dword ptr [0x1050f73c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f73c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef0ba je 0x104ef0ed */
  if (C.zf) goto L_104ef0ed;
  /* 104ef0bc mov edx, dword ptr [0x1050f73c] */
  EDX = (r32((uint32_t)(0x1050f73c)));
  /* 104ef0c2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104ef0c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef0c7 je 0x104ef0ed */
  if (C.zf) goto L_104ef0ed;
  /* 104ef0c9 cmp dword ptr [0x1050f740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef0d0 je 0x104ef0e6 */
  if (C.zf) goto L_104ef0e6;
  /* 104ef0d2 mov ecx, dword ptr [0x1050f740] */
  ECX = (r32((uint32_t)(0x1050f740)));
  /* 104ef0d8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104ef0db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ef0dd je 0x104ef0e6 */
  if (C.zf) goto L_104ef0e6;
  /* 104ef0df call 0x104ef290 */
  push32(0x104ef0e4u); f_104ef290();
  /* 104ef0e4 jmp 0x104ef0eb */
  goto L_104ef0eb;
L_104ef0e6:;
  /* 104ef0e6 call 0x104ef680 */
  push32(0x104ef0ebu); f_104ef680();
L_104ef0eb:;
  /* 104ef0eb jmp 0x104ef10e */
  goto L_104ef10e;
L_104ef0ed:;
  /* 104ef0ed cmp dword ptr [0x1050f740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef0f4 je 0x104ef109 */
  if (C.zf) goto L_104ef109;
  /* 104ef0f6 mov eax, dword ptr [0x1050f740] */
  EAX = (r32((uint32_t)(0x1050f740)));
  /* 104ef0fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ef0fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ef100 je 0x104ef109 */
  if (C.zf) goto L_104ef109;
  /* 104ef102 call 0x104ef820 */
  push32(0x104ef107u); f_104ef820();
  /* 104ef107 jmp 0x104ef10e */
  goto L_104ef10e;
L_104ef109:;
  /* 104ef109 call 0x104ef920 */
  push32(0x104ef10eu); f_104ef920();
L_104ef10e:;
  /* 104ef10e cmp dword ptr [0x1050f744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef115 jne 0x104ef11e */
  if (!C.zf) goto L_104ef11e;
  /* 104ef117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ef119 jmp 0x104ef1fc */
  goto L_104ef1fc;
L_104ef11e:;
  /* 104ef11e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ef121 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef127 push edx */
  push32((uint32_t)(EDX));
  /* 104ef128 call 0x104ef950 */
  push32(0x104ef12du); f_104ef950();
  /* 104ef12d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef130 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ef133 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef137 je 0x104ef14c */
  if (C.zf) goto L_104ef14c;
  /* 104ef139 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ef13c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104ef141 push eax */
  push32((uint32_t)(EAX));
  /* 104ef142 call dword ptr [0x10512268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512268))), 0x104ef148u);
  /* 104ef148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef14a jne 0x104ef153 */
  if (!C.zf) goto L_104ef153;
L_104ef14c:;
  /* 104ef14c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ef14e jmp 0x104ef1fc */
  goto L_104ef1fc;
L_104ef153:;
  /* 104ef153 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ef155 mov ecx, dword ptr [0x1050f72c] */
  ECX = (r32((uint32_t)(0x1050f72c)));
  /* 104ef15b push ecx */
  push32((uint32_t)(ECX));
  /* 104ef15c call dword ptr [0x1051226c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051226c))), 0x104ef162u);
  /* 104ef162 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef164 jne 0x104ef16d */
  if (!C.zf) goto L_104ef16d;
  /* 104ef166 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ef168 jmp 0x104ef1fc */
  goto L_104ef1fc;
L_104ef16d:;
  /* 104ef16d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef171 je 0x104ef198 */
  if (C.zf) goto L_104ef198;
  /* 104ef173 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ef176 mov ax, word ptr [0x1050f72c] */
  AX = (r16((uint32_t)(0x1050f72c)));
  /* 104ef17c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 104ef17f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ef182 mov dx, word ptr [0x1050f748] */
  DX = (r16((uint32_t)(0x1050f748)));
  /* 104ef189 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 104ef18d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104ef190 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 104ef194 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_104ef198:;
  /* 104ef198 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef19c je 0x104ef1f7 */
  if (C.zf) goto L_104ef1f7;
  /* 104ef19e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 104ef1a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ef1a3 push edx */
  push32((uint32_t)(EDX));
  /* 104ef1a4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 104ef1a9 mov eax, dword ptr [0x1050f72c] */
  EAX = (r32((uint32_t)(0x1050f72c)));
  /* 104ef1ae push eax */
  push32((uint32_t)(EAX));
  /* 104ef1af call dword ptr [0x1050f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f74c))), 0x104ef1b5u);
  /* 104ef1b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef1b7 jne 0x104ef1bd */
  if (!C.zf) goto L_104ef1bd;
  /* 104ef1b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ef1bb jmp 0x104ef1fc */
  goto L_104ef1fc;
L_104ef1bd:;
  /* 104ef1bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 104ef1bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ef1c2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef1c5 push ecx */
  push32((uint32_t)(ECX));
  /* 104ef1c6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 104ef1cb mov edx, dword ptr [0x1050f748] */
  EDX = (r32((uint32_t)(0x1050f748)));
  /* 104ef1d1 push edx */
  push32((uint32_t)(EDX));
  /* 104ef1d2 call dword ptr [0x1050f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f74c))), 0x104ef1d8u);
  /* 104ef1d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef1da jne 0x104ef1e0 */
  if (!C.zf) goto L_104ef1e0;
  /* 104ef1dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ef1de jmp 0x104ef1fc */
  goto L_104ef1fc;
L_104ef1e0:;
  /* 104ef1e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 104ef1e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ef1e5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef1ea push eax */
  push32((uint32_t)(EAX));
  /* 104ef1eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ef1ee push ecx */
  push32((uint32_t)(ECX));
  /* 104ef1ef call 0x104e5d60 */
  push32(0x104ef1f4u); f_104e5d60();
  /* 104ef1f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ef1f7:;
  /* 104ef1f7 mov eax, 1 */
  EAX = (0x1u);
L_104ef1fc:;
  /* 104ef1fc mov esp, ebp */
  ESP = (EBP);
  /* 104ef1fe pop ebp */
  EBP = (pop32());
  /* 104ef1ff ret  */
  ESPCHK(0x104ef000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f200 @ 0x104ef200 (130 bytes, 47 insns) */
void f_104ef200(void) {
  FTRACE(0x104ef200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ef200 push ebp */
  push32((uint32_t)(EBP));
  /* 104ef201 mov ebp, esp */
  EBP = (ESP);
  /* 104ef203 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef206 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 104ef20d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_104ef214:;
  /* 104ef214 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ef217 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef21a jg 0x104ef27e */
  if ((!C.zf&&C.sf==C.of)) goto L_104ef27e;
  /* 104ef21c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef220 je 0x104ef27e */
  if (C.zf) goto L_104ef27e;
  /* 104ef222 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104ef225 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef228 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104ef229 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef22b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104ef22d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104ef230 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ef233 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ef236 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 104ef239 push eax */
  push32((uint32_t)(EAX));
  /* 104ef23a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ef23d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104ef23f push edx */
  push32((uint32_t)(EDX));
  /* 104ef240 call 0x104f18f0 */
  push32(0x104ef245u); f_104f18f0();
  /* 104ef245 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef248 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104ef24b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef24f jne 0x104ef262 */
  if (!C.zf) goto L_104ef262;
  /* 104ef251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ef254 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ef257 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 104ef25b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104ef25e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104ef260 jmp 0x104ef27c */
  goto L_104ef27c;
L_104ef262:;
  /* 104ef262 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef266 jge 0x104ef273 */
  if ((C.sf==C.of)) goto L_104ef273;
  /* 104ef268 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ef26b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef26e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 104ef271 jmp 0x104ef27c */
  goto L_104ef27c;
L_104ef273:;
  /* 104ef273 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ef276 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef279 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104ef27c:;
  /* 104ef27c jmp 0x104ef214 */
  goto L_104ef214;
L_104ef27e:;
  /* 104ef27e mov esp, ebp */
  ESP = (EBP);
  /* 104ef280 pop ebp */
  EBP = (pop32());
  /* 104ef281 ret  */
  ESPCHK(0x104ef200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f290 @ 0x104ef290 (186 bytes, 50 insns) */
void f_104ef290(void) {
  FTRACE(0x104ef290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ef290 push ebp */
  push32((uint32_t)(EBP));
  /* 104ef291 mov ebp, esp */
  EBP = (ESP);
  /* 104ef293 push ecx */
  push32((uint32_t)(ECX));
  /* 104ef294 mov eax, dword ptr [0x1050f73c] */
  EAX = (r32((uint32_t)(0x1050f73c)));
  /* 104ef299 push eax */
  push32((uint32_t)(EAX));
  /* 104ef29a call 0x104e6050 */
  push32(0x104ef29fu); f_104e6050();
  /* 104ef29f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef2a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ef2a4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef2a7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 104ef2aa mov dword ptr [0x1050f738], ecx */
  w32((uint32_t)(0x1050f738), (ECX));
  /* 104ef2b0 mov edx, dword ptr [0x1050f740] */
  EDX = (r32((uint32_t)(0x1050f740)));
  /* 104ef2b6 push edx */
  push32((uint32_t)(EDX));
  /* 104ef2b7 call 0x104e6050 */
  push32(0x104ef2bcu); f_104e6050();
  /* 104ef2bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef2bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ef2c1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef2c4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 104ef2c7 mov dword ptr [0x1050f730], ecx */
  w32((uint32_t)(0x1050f730), (ECX));
  /* 104ef2cd mov dword ptr [0x1050f72c], 0 */
  w32((uint32_t)(0x1050f72c), (0x0u));
  /* 104ef2d7 cmp dword ptr [0x1050f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef2de je 0x104ef2e9 */
  if (C.zf) goto L_104ef2e9;
  /* 104ef2e0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 104ef2e7 jmp 0x104ef2fb */
  goto L_104ef2fb;
L_104ef2e9:;
  /* 104ef2e9 mov edx, dword ptr [0x1050f73c] */
  EDX = (r32((uint32_t)(0x1050f73c)));
  /* 104ef2ef push edx */
  push32((uint32_t)(EDX));
  /* 104ef2f0 call 0x104efd30 */
  push32(0x104ef2f5u); f_104efd30();
  /* 104ef2f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef2f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104ef2fb:;
  /* 104ef2fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ef2fe mov dword ptr [0x1050f734], eax */
  w32((uint32_t)(0x1050f734), (EAX));
  /* 104ef303 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ef305 push 0x104ef350 */
  push32((uint32_t)(0x104ef350u));
  /* 104ef30a call dword ptr [0x10512260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512260))), 0x104ef310u);
  /* 104ef310 mov ecx, dword ptr [0x1050f744] */
  ECX = (r32((uint32_t)(0x1050f744)));
  /* 104ef316 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 104ef31c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ef31e je 0x104ef33c */
  if (C.zf) goto L_104ef33c;
  /* 104ef320 mov edx, dword ptr [0x1050f744] */
  EDX = (r32((uint32_t)(0x1050f744)));
  /* 104ef326 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 104ef32c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ef32e je 0x104ef33c */
  if (C.zf) goto L_104ef33c;
  /* 104ef330 mov eax, dword ptr [0x1050f744] */
  EAX = (r32((uint32_t)(0x1050f744)));
  /* 104ef335 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 104ef338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef33a jne 0x104ef346 */
  if (!C.zf) goto L_104ef346;
L_104ef33c:;
  /* 104ef33c mov dword ptr [0x1050f744], 0 */
  w32((uint32_t)(0x1050f744), (0x0u));
L_104ef346:;
  /* 104ef346 mov esp, ebp */
  ESP = (EBP);
  /* 104ef348 pop ebp */
  EBP = (pop32());
  /* 104ef349 ret  */
  ESPCHK(0x104ef290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f350 @ 0x104ef350 (804 bytes, 220 insns) */
void f_104ef350(void) {
  FTRACE(0x104ef350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ef350 push ebp */
  push32((uint32_t)(EBP));
  /* 104ef351 mov ebp, esp */
  EBP = (ESP);
  /* 104ef353 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ef359 push eax */
  push32((uint32_t)(EAX));
  /* 104ef35a call 0x104efcb0 */
  push32(0x104ef35fu); f_104efcb0();
  /* 104ef35f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef362 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 104ef365 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 104ef367 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104ef36a push ecx */
  push32((uint32_t)(ECX));
  /* 104ef36b mov edx, dword ptr [0x1050f730] */
  EDX = (r32((uint32_t)(0x1050f730)));
  /* 104ef371 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104ef373 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef375 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 104ef37b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef381 push edx */
  push32((uint32_t)(EDX));
  /* 104ef382 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef385 push eax */
  push32((uint32_t)(EAX));
  /* 104ef386 call dword ptr [0x1050f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f74c))), 0x104ef38cu);
  /* 104ef38c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef38e jne 0x104ef3a4 */
  if (!C.zf) goto L_104ef3a4;
  /* 104ef390 mov dword ptr [0x1050f744], 0 */
  w32((uint32_t)(0x1050f744), (0x0u));
  /* 104ef39a mov eax, 1 */
  EAX = (0x1u);
  /* 104ef39f jmp 0x104ef66e */
  goto L_104ef66e;
L_104ef3a4:;
  /* 104ef3a4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104ef3a7 push ecx */
  push32((uint32_t)(ECX));
  /* 104ef3a8 mov edx, dword ptr [0x1050f740] */
  EDX = (r32((uint32_t)(0x1050f740)));
  /* 104ef3ae push edx */
  push32((uint32_t)(EDX));
  /* 104ef3af call 0x104f18f0 */
  push32(0x104ef3b4u); f_104f18f0();
  /* 104ef3b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef3b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef3b9 jne 0x104ef4df */
  if (!C.zf) goto L_104ef4df;
  /* 104ef3bf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 104ef3c1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 104ef3c4 push eax */
  push32((uint32_t)(EAX));
  /* 104ef3c5 mov ecx, dword ptr [0x1050f738] */
  ECX = (r32((uint32_t)(0x1050f738)));
  /* 104ef3cb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104ef3cd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef3cf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 104ef3d5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef3db push ecx */
  push32((uint32_t)(ECX));
  /* 104ef3dc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef3df push edx */
  push32((uint32_t)(EDX));
  /* 104ef3e0 call dword ptr [0x1050f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f74c))), 0x104ef3e6u);
  /* 104ef3e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef3e8 jne 0x104ef3fe */
  if (!C.zf) goto L_104ef3fe;
  /* 104ef3ea mov dword ptr [0x1050f744], 0 */
  w32((uint32_t)(0x1050f744), (0x0u));
  /* 104ef3f4 mov eax, 1 */
  EAX = (0x1u);
  /* 104ef3f9 jmp 0x104ef66e */
  goto L_104ef66e;
L_104ef3fe:;
  /* 104ef3fe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 104ef401 push eax */
  push32((uint32_t)(EAX));
  /* 104ef402 mov ecx, dword ptr [0x1050f73c] */
  ECX = (r32((uint32_t)(0x1050f73c)));
  /* 104ef408 push ecx */
  push32((uint32_t)(ECX));
  /* 104ef409 call 0x104f18f0 */
  push32(0x104ef40eu); f_104f18f0();
  /* 104ef40e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef413 jne 0x104ef440 */
  if (!C.zf) goto L_104ef440;
  /* 104ef415 mov edx, dword ptr [0x1050f744] */
  EDX = (r32((uint32_t)(0x1050f744)));
  /* 104ef41b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 104ef421 mov dword ptr [0x1050f744], edx */
  w32((uint32_t)(0x1050f744), (EDX));
  /* 104ef427 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef42a mov dword ptr [0x1050f748], eax */
  w32((uint32_t)(0x1050f748), (EAX));
  /* 104ef42f mov ecx, dword ptr [0x1050f748] */
  ECX = (r32((uint32_t)(0x1050f748)));
  /* 104ef435 mov dword ptr [0x1050f72c], ecx */
  w32((uint32_t)(0x1050f72c), (ECX));
  /* 104ef43b jmp 0x104ef4df */
  goto L_104ef4df;
L_104ef440:;
  /* 104ef440 mov edx, dword ptr [0x1050f744] */
  EDX = (r32((uint32_t)(0x1050f744)));
  /* 104ef446 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 104ef449 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ef44b jne 0x104ef4df */
  if (!C.zf) goto L_104ef4df;
  /* 104ef451 cmp dword ptr [0x1050f734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef458 je 0x104ef4ad */
  if (C.zf) goto L_104ef4ad;
  /* 104ef45a mov eax, dword ptr [0x1050f734] */
  EAX = (r32((uint32_t)(0x1050f734)));
  /* 104ef45f push eax */
  push32((uint32_t)(EAX));
  /* 104ef460 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104ef463 push ecx */
  push32((uint32_t)(ECX));
  /* 104ef464 mov edx, dword ptr [0x1050f73c] */
  EDX = (r32((uint32_t)(0x1050f73c)));
  /* 104ef46a push edx */
  push32((uint32_t)(EDX));
  /* 104ef46b call 0x104f19c0 */
  push32(0x104ef470u); f_104f19c0();
  /* 104ef470 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef473 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef475 jne 0x104ef4ad */
  if (!C.zf) goto L_104ef4ad;
  /* 104ef477 mov eax, dword ptr [0x1050f744] */
  EAX = (r32((uint32_t)(0x1050f744)));
  /* 104ef47c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 104ef47e mov dword ptr [0x1050f744], eax */
  w32((uint32_t)(0x1050f744), (EAX));
  /* 104ef483 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef486 mov dword ptr [0x1050f748], ecx */
  w32((uint32_t)(0x1050f748), (ECX));
  /* 104ef48c mov edx, dword ptr [0x1050f73c] */
  EDX = (r32((uint32_t)(0x1050f73c)));
  /* 104ef492 push edx */
  push32((uint32_t)(EDX));
  /* 104ef493 call 0x104e6050 */
  push32(0x104ef498u); f_104e6050();
  /* 104ef498 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef49b cmp eax, dword ptr [0x1050f734] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1050f734))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef4a1 jne 0x104ef4ab */
  if (!C.zf) goto L_104ef4ab;
  /* 104ef4a3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef4a6 mov dword ptr [0x1050f72c], eax */
  w32((uint32_t)(0x1050f72c), (EAX));
L_104ef4ab:;
  /* 104ef4ab jmp 0x104ef4df */
  goto L_104ef4df;
L_104ef4ad:;
  /* 104ef4ad mov ecx, dword ptr [0x1050f744] */
  ECX = (r32((uint32_t)(0x1050f744)));
  /* 104ef4b3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104ef4b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ef4b8 jne 0x104ef4df */
  if (!C.zf) goto L_104ef4df;
  /* 104ef4ba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef4bd push edx */
  push32((uint32_t)(EDX));
  /* 104ef4be call 0x104ef9f0 */
  push32(0x104ef4c3u); f_104ef9f0();
  /* 104ef4c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef4c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef4c8 je 0x104ef4df */
  if (C.zf) goto L_104ef4df;
  /* 104ef4ca mov eax, dword ptr [0x1050f744] */
  EAX = (r32((uint32_t)(0x1050f744)));
  /* 104ef4cf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 104ef4d1 mov dword ptr [0x1050f744], eax */
  w32((uint32_t)(0x1050f744), (EAX));
  /* 104ef4d6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef4d9 mov dword ptr [0x1050f748], ecx */
  w32((uint32_t)(0x1050f748), (ECX));
L_104ef4df:;
  /* 104ef4df mov edx, dword ptr [0x1050f744] */
  EDX = (r32((uint32_t)(0x1050f744)));
  /* 104ef4e5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 104ef4eb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef4f1 je 0x104ef661 */
  if (C.zf) goto L_104ef661;
  /* 104ef4f7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 104ef4f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 104ef4fc push eax */
  push32((uint32_t)(EAX));
  /* 104ef4fd mov ecx, dword ptr [0x1050f738] */
  ECX = (r32((uint32_t)(0x1050f738)));
  /* 104ef503 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104ef505 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef507 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 104ef50d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef513 push ecx */
  push32((uint32_t)(ECX));
  /* 104ef514 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef517 push edx */
  push32((uint32_t)(EDX));
  /* 104ef518 call dword ptr [0x1050f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f74c))), 0x104ef51eu);
  /* 104ef51e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef520 jne 0x104ef536 */
  if (!C.zf) goto L_104ef536;
  /* 104ef522 mov dword ptr [0x1050f744], 0 */
  w32((uint32_t)(0x1050f744), (0x0u));
  /* 104ef52c mov eax, 1 */
  EAX = (0x1u);
  /* 104ef531 jmp 0x104ef66e */
  goto L_104ef66e;
L_104ef536:;
  /* 104ef536 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 104ef539 push eax */
  push32((uint32_t)(EAX));
  /* 104ef53a mov ecx, dword ptr [0x1050f73c] */
  ECX = (r32((uint32_t)(0x1050f73c)));
  /* 104ef540 push ecx */
  push32((uint32_t)(ECX));
  /* 104ef541 call 0x104f18f0 */
  push32(0x104ef546u); f_104f18f0();
  /* 104ef546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef549 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef54b jne 0x104ef600 */
  if (!C.zf) goto L_104ef600;
  /* 104ef551 mov edx, dword ptr [0x1050f744] */
  EDX = (r32((uint32_t)(0x1050f744)));
  /* 104ef557 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 104ef55a mov dword ptr [0x1050f744], edx */
  w32((uint32_t)(0x1050f744), (EDX));
  /* 104ef560 cmp dword ptr [0x1050f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef567 je 0x104ef58a */
  if (C.zf) goto L_104ef58a;
  /* 104ef569 mov eax, dword ptr [0x1050f744] */
  EAX = (r32((uint32_t)(0x1050f744)));
  /* 104ef56e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 104ef571 mov dword ptr [0x1050f744], eax */
  w32((uint32_t)(0x1050f744), (EAX));
  /* 104ef576 cmp dword ptr [0x1050f72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef57d jne 0x104ef588 */
  if (!C.zf) goto L_104ef588;
  /* 104ef57f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef582 mov dword ptr [0x1050f72c], ecx */
  w32((uint32_t)(0x1050f72c), (ECX));
L_104ef588:;
  /* 104ef588 jmp 0x104ef5fe */
  goto L_104ef5fe;
L_104ef58a:;
  /* 104ef58a cmp dword ptr [0x1050f734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef591 je 0x104ef5df */
  if (C.zf) goto L_104ef5df;
  /* 104ef593 mov edx, dword ptr [0x1050f73c] */
  EDX = (r32((uint32_t)(0x1050f73c)));
  /* 104ef599 push edx */
  push32((uint32_t)(EDX));
  /* 104ef59a call 0x104e6050 */
  push32(0x104ef59fu); f_104e6050();
  /* 104ef59f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef5a2 cmp eax, dword ptr [0x1050f734] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1050f734))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef5a8 jne 0x104ef5df */
  if (!C.zf) goto L_104ef5df;
  /* 104ef5aa push 1 */
  push32((uint32_t)(0x1u));
  /* 104ef5ac mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef5af push eax */
  push32((uint32_t)(EAX));
  /* 104ef5b0 call 0x104efa40 */
  push32(0x104ef5b5u); f_104efa40();
  /* 104ef5b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef5b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef5ba je 0x104ef5dd */
  if (C.zf) goto L_104ef5dd;
  /* 104ef5bc mov ecx, dword ptr [0x1050f744] */
  ECX = (r32((uint32_t)(0x1050f744)));
  /* 104ef5c2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 104ef5c5 mov dword ptr [0x1050f744], ecx */
  w32((uint32_t)(0x1050f744), (ECX));
  /* 104ef5cb cmp dword ptr [0x1050f72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef5d2 jne 0x104ef5dd */
  if (!C.zf) goto L_104ef5dd;
  /* 104ef5d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef5d7 mov dword ptr [0x1050f72c], edx */
  w32((uint32_t)(0x1050f72c), (EDX));
L_104ef5dd:;
  /* 104ef5dd jmp 0x104ef5fe */
  goto L_104ef5fe;
L_104ef5df:;
  /* 104ef5df mov eax, dword ptr [0x1050f744] */
  EAX = (r32((uint32_t)(0x1050f744)));
  /* 104ef5e4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 104ef5e7 mov dword ptr [0x1050f744], eax */
  w32((uint32_t)(0x1050f744), (EAX));
  /* 104ef5ec cmp dword ptr [0x1050f72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef5f3 jne 0x104ef5fe */
  if (!C.zf) goto L_104ef5fe;
  /* 104ef5f5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef5f8 mov dword ptr [0x1050f72c], ecx */
  w32((uint32_t)(0x1050f72c), (ECX));
L_104ef5fe:;
  /* 104ef5fe jmp 0x104ef661 */
  goto L_104ef661;
L_104ef600:;
  /* 104ef600 cmp dword ptr [0x1050f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef607 jne 0x104ef661 */
  if (!C.zf) goto L_104ef661;
  /* 104ef609 cmp dword ptr [0x1050f734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef610 je 0x104ef661 */
  if (C.zf) goto L_104ef661;
  /* 104ef612 mov edx, dword ptr [0x1050f734] */
  EDX = (r32((uint32_t)(0x1050f734)));
  /* 104ef618 push edx */
  push32((uint32_t)(EDX));
  /* 104ef619 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 104ef61c push eax */
  push32((uint32_t)(EAX));
  /* 104ef61d mov ecx, dword ptr [0x1050f73c] */
  ECX = (r32((uint32_t)(0x1050f73c)));
  /* 104ef623 push ecx */
  push32((uint32_t)(ECX));
  /* 104ef624 call 0x104f19c0 */
  push32(0x104ef629u); f_104f19c0();
  /* 104ef629 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef62c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef62e jne 0x104ef661 */
  if (!C.zf) goto L_104ef661;
  /* 104ef630 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ef632 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef635 push edx */
  push32((uint32_t)(EDX));
  /* 104ef636 call 0x104efa40 */
  push32(0x104ef63bu); f_104efa40();
  /* 104ef63b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef63e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef640 je 0x104ef661 */
  if (C.zf) goto L_104ef661;
  /* 104ef642 mov eax, dword ptr [0x1050f744] */
  EAX = (r32((uint32_t)(0x1050f744)));
  /* 104ef647 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 104ef64a mov dword ptr [0x1050f744], eax */
  w32((uint32_t)(0x1050f744), (EAX));
  /* 104ef64f cmp dword ptr [0x1050f72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef656 jne 0x104ef661 */
  if (!C.zf) goto L_104ef661;
  /* 104ef658 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef65b mov dword ptr [0x1050f72c], ecx */
  w32((uint32_t)(0x1050f72c), (ECX));
L_104ef661:;
  /* 104ef661 mov eax, dword ptr [0x1050f744] */
  EAX = (r32((uint32_t)(0x1050f744)));
  /* 104ef666 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104ef669 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104ef66b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef66d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_104ef66e:;
  /* 104ef66e mov esp, ebp */
  ESP = (EBP);
  /* 104ef670 pop ebp */
  EBP = (pop32());
  /* 104ef671 ret 4 */
  ESPCHK(0x104ef350u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f680 @ 0x104ef680 (116 bytes, 33 insns) */
void f_104ef680(void) {
  FTRACE(0x104ef680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ef680 push ebp */
  push32((uint32_t)(EBP));
  /* 104ef681 mov ebp, esp */
  EBP = (ESP);
  /* 104ef683 push ecx */
  push32((uint32_t)(ECX));
  /* 104ef684 mov eax, dword ptr [0x1050f73c] */
  EAX = (r32((uint32_t)(0x1050f73c)));
  /* 104ef689 push eax */
  push32((uint32_t)(EAX));
  /* 104ef68a call 0x104e6050 */
  push32(0x104ef68fu); f_104e6050();
  /* 104ef68f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef692 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ef694 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef697 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 104ef69a mov dword ptr [0x1050f738], ecx */
  w32((uint32_t)(0x1050f738), (ECX));
  /* 104ef6a0 cmp dword ptr [0x1050f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef6a7 je 0x104ef6b2 */
  if (C.zf) goto L_104ef6b2;
  /* 104ef6a9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 104ef6b0 jmp 0x104ef6c4 */
  goto L_104ef6c4;
L_104ef6b2:;
  /* 104ef6b2 mov edx, dword ptr [0x1050f73c] */
  EDX = (r32((uint32_t)(0x1050f73c)));
  /* 104ef6b8 push edx */
  push32((uint32_t)(EDX));
  /* 104ef6b9 call 0x104efd30 */
  push32(0x104ef6beu); f_104efd30();
  /* 104ef6be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef6c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104ef6c4:;
  /* 104ef6c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104ef6c7 mov dword ptr [0x1050f734], eax */
  w32((uint32_t)(0x1050f734), (EAX));
  /* 104ef6cc push 1 */
  push32((uint32_t)(0x1u));
  /* 104ef6ce push 0x104ef700 */
  push32((uint32_t)(0x104ef700u));
  /* 104ef6d3 call dword ptr [0x10512260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512260))), 0x104ef6d9u);
  /* 104ef6d9 mov ecx, dword ptr [0x1050f744] */
  ECX = (r32((uint32_t)(0x1050f744)));
  /* 104ef6df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104ef6e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ef6e4 jne 0x104ef6f0 */
  if (!C.zf) goto L_104ef6f0;
  /* 104ef6e6 mov dword ptr [0x1050f744], 0 */
  w32((uint32_t)(0x1050f744), (0x0u));
L_104ef6f0:;
  /* 104ef6f0 mov esp, ebp */
  ESP = (EBP);
  /* 104ef6f2 pop ebp */
  EBP = (pop32());
  /* 104ef6f3 ret  */
  ESPCHK(0x104ef680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f700 @ 0x104ef700 (287 bytes, 86 insns) */
void f_104ef700(void) {
  FTRACE(0x104ef700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ef700 push ebp */
  push32((uint32_t)(EBP));
  /* 104ef701 mov ebp, esp */
  EBP = (ESP);
  /* 104ef703 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ef709 push eax */
  push32((uint32_t)(EAX));
  /* 104ef70a call 0x104efcb0 */
  push32(0x104ef70fu); f_104efcb0();
  /* 104ef70f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef712 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 104ef715 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 104ef717 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104ef71a push ecx */
  push32((uint32_t)(ECX));
  /* 104ef71b mov edx, dword ptr [0x1050f738] */
  EDX = (r32((uint32_t)(0x1050f738)));
  /* 104ef721 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104ef723 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef725 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 104ef72b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef731 push edx */
  push32((uint32_t)(EDX));
  /* 104ef732 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef735 push eax */
  push32((uint32_t)(EAX));
  /* 104ef736 call dword ptr [0x1050f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f74c))), 0x104ef73cu);
  /* 104ef73c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef73e jne 0x104ef754 */
  if (!C.zf) goto L_104ef754;
  /* 104ef740 mov dword ptr [0x1050f744], 0 */
  w32((uint32_t)(0x1050f744), (0x0u));
  /* 104ef74a mov eax, 1 */
  EAX = (0x1u);
  /* 104ef74f jmp 0x104ef819 */
  goto L_104ef819;
L_104ef754:;
  /* 104ef754 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104ef757 push ecx */
  push32((uint32_t)(ECX));
  /* 104ef758 mov edx, dword ptr [0x1050f73c] */
  EDX = (r32((uint32_t)(0x1050f73c)));
  /* 104ef75e push edx */
  push32((uint32_t)(EDX));
  /* 104ef75f call 0x104f18f0 */
  push32(0x104ef764u); f_104f18f0();
  /* 104ef764 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef767 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef769 jne 0x104ef7a9 */
  if (!C.zf) goto L_104ef7a9;
  /* 104ef76b cmp dword ptr [0x1050f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef772 jne 0x104ef786 */
  if (!C.zf) goto L_104ef786;
  /* 104ef774 push 1 */
  push32((uint32_t)(0x1u));
  /* 104ef776 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef779 push eax */
  push32((uint32_t)(EAX));
  /* 104ef77a call 0x104efa40 */
  push32(0x104ef77fu); f_104efa40();
  /* 104ef77f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef784 je 0x104ef7a7 */
  if (C.zf) goto L_104ef7a7;
L_104ef786:;
  /* 104ef786 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef789 mov dword ptr [0x1050f748], ecx */
  w32((uint32_t)(0x1050f748), (ECX));
  /* 104ef78f mov edx, dword ptr [0x1050f748] */
  EDX = (r32((uint32_t)(0x1050f748)));
  /* 104ef795 mov dword ptr [0x1050f72c], edx */
  w32((uint32_t)(0x1050f72c), (EDX));
  /* 104ef79b mov eax, dword ptr [0x1050f744] */
  EAX = (r32((uint32_t)(0x1050f744)));
  /* 104ef7a0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 104ef7a2 mov dword ptr [0x1050f744], eax */
  w32((uint32_t)(0x1050f744), (EAX));
L_104ef7a7:;
  /* 104ef7a7 jmp 0x104ef80c */
  goto L_104ef80c;
L_104ef7a9:;
  /* 104ef7a9 cmp dword ptr [0x1050f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef7b0 jne 0x104ef80c */
  if (!C.zf) goto L_104ef80c;
  /* 104ef7b2 cmp dword ptr [0x1050f734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef7b9 je 0x104ef80c */
  if (C.zf) goto L_104ef80c;
  /* 104ef7bb mov ecx, dword ptr [0x1050f734] */
  ECX = (r32((uint32_t)(0x1050f734)));
  /* 104ef7c1 push ecx */
  push32((uint32_t)(ECX));
  /* 104ef7c2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 104ef7c5 push edx */
  push32((uint32_t)(EDX));
  /* 104ef7c6 mov eax, dword ptr [0x1050f73c] */
  EAX = (r32((uint32_t)(0x1050f73c)));
  /* 104ef7cb push eax */
  push32((uint32_t)(EAX));
  /* 104ef7cc call 0x104f19c0 */
  push32(0x104ef7d1u); f_104f19c0();
  /* 104ef7d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef7d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef7d6 jne 0x104ef80c */
  if (!C.zf) goto L_104ef80c;
  /* 104ef7d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104ef7da mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef7dd push ecx */
  push32((uint32_t)(ECX));
  /* 104ef7de call 0x104efa40 */
  push32(0x104ef7e3u); f_104efa40();
  /* 104ef7e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef7e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef7e8 je 0x104ef80c */
  if (C.zf) goto L_104ef80c;
  /* 104ef7ea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef7ed mov dword ptr [0x1050f748], edx */
  w32((uint32_t)(0x1050f748), (EDX));
  /* 104ef7f3 mov eax, dword ptr [0x1050f748] */
  EAX = (r32((uint32_t)(0x1050f748)));
  /* 104ef7f8 mov dword ptr [0x1050f72c], eax */
  w32((uint32_t)(0x1050f72c), (EAX));
  /* 104ef7fd mov ecx, dword ptr [0x1050f744] */
  ECX = (r32((uint32_t)(0x1050f744)));
  /* 104ef803 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104ef806 mov dword ptr [0x1050f744], ecx */
  w32((uint32_t)(0x1050f744), (ECX));
L_104ef80c:;
  /* 104ef80c mov eax, dword ptr [0x1050f744] */
  EAX = (r32((uint32_t)(0x1050f744)));
  /* 104ef811 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104ef814 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104ef816 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef818 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_104ef819:;
  /* 104ef819 mov esp, ebp */
  ESP = (EBP);
  /* 104ef81b pop ebp */
  EBP = (pop32());
  /* 104ef81c ret 4 */
  ESPCHK(0x104ef700u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f820 @ 0x104ef820 (69 bytes, 20 insns) */
void f_104ef820(void) {
  FTRACE(0x104ef820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ef820 push ebp */
  push32((uint32_t)(EBP));
  /* 104ef821 mov ebp, esp */
  EBP = (ESP);
  /* 104ef823 mov eax, dword ptr [0x1050f740] */
  EAX = (r32((uint32_t)(0x1050f740)));
  /* 104ef828 push eax */
  push32((uint32_t)(EAX));
  /* 104ef829 call 0x104e6050 */
  push32(0x104ef82eu); f_104e6050();
  /* 104ef82e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef831 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104ef833 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef836 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 104ef839 mov dword ptr [0x1050f730], ecx */
  w32((uint32_t)(0x1050f730), (ECX));
  /* 104ef83f push 1 */
  push32((uint32_t)(0x1u));
  /* 104ef841 push 0x104ef870 */
  push32((uint32_t)(0x104ef870u));
  /* 104ef846 call dword ptr [0x10512260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512260))), 0x104ef84cu);
  /* 104ef84c mov edx, dword ptr [0x1050f744] */
  EDX = (r32((uint32_t)(0x1050f744)));
  /* 104ef852 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104ef855 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104ef857 jne 0x104ef863 */
  if (!C.zf) goto L_104ef863;
  /* 104ef859 mov dword ptr [0x1050f744], 0 */
  w32((uint32_t)(0x1050f744), (0x0u));
L_104ef863:;
  /* 104ef863 pop ebp */
  EBP = (pop32());
  /* 104ef864 ret  */
  ESPCHK(0x104ef820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f870 @ 0x104ef870 (172 bytes, 54 insns) */
void f_104ef870(void) {
  FTRACE(0x104ef870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ef870 push ebp */
  push32((uint32_t)(EBP));
  /* 104ef871 mov ebp, esp */
  EBP = (ESP);
  /* 104ef873 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ef879 push eax */
  push32((uint32_t)(EAX));
  /* 104ef87a call 0x104efcb0 */
  push32(0x104ef87fu); f_104efcb0();
  /* 104ef87f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef882 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 104ef885 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 104ef887 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104ef88a push ecx */
  push32((uint32_t)(ECX));
  /* 104ef88b mov edx, dword ptr [0x1050f730] */
  EDX = (r32((uint32_t)(0x1050f730)));
  /* 104ef891 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104ef893 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef895 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 104ef89b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef8a1 push edx */
  push32((uint32_t)(EDX));
  /* 104ef8a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef8a5 push eax */
  push32((uint32_t)(EAX));
  /* 104ef8a6 call dword ptr [0x1050f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f74c))), 0x104ef8acu);
  /* 104ef8ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef8ae jne 0x104ef8c1 */
  if (!C.zf) goto L_104ef8c1;
  /* 104ef8b0 mov dword ptr [0x1050f744], 0 */
  w32((uint32_t)(0x1050f744), (0x0u));
  /* 104ef8ba mov eax, 1 */
  EAX = (0x1u);
  /* 104ef8bf jmp 0x104ef916 */
  goto L_104ef916;
L_104ef8c1:;
  /* 104ef8c1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104ef8c4 push ecx */
  push32((uint32_t)(ECX));
  /* 104ef8c5 mov edx, dword ptr [0x1050f740] */
  EDX = (r32((uint32_t)(0x1050f740)));
  /* 104ef8cb push edx */
  push32((uint32_t)(EDX));
  /* 104ef8cc call 0x104f18f0 */
  push32(0x104ef8d1u); f_104f18f0();
  /* 104ef8d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef8d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef8d6 jne 0x104ef909 */
  if (!C.zf) goto L_104ef909;
  /* 104ef8d8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef8db push eax */
  push32((uint32_t)(EAX));
  /* 104ef8dc call 0x104ef9f0 */
  push32(0x104ef8e1u); f_104ef9f0();
  /* 104ef8e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef8e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef8e6 je 0x104ef909 */
  if (C.zf) goto L_104ef909;
  /* 104ef8e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104ef8eb mov dword ptr [0x1050f748], ecx */
  w32((uint32_t)(0x1050f748), (ECX));
  /* 104ef8f1 mov edx, dword ptr [0x1050f748] */
  EDX = (r32((uint32_t)(0x1050f748)));
  /* 104ef8f7 mov dword ptr [0x1050f72c], edx */
  w32((uint32_t)(0x1050f72c), (EDX));
  /* 104ef8fd mov eax, dword ptr [0x1050f744] */
  EAX = (r32((uint32_t)(0x1050f744)));
  /* 104ef902 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 104ef904 mov dword ptr [0x1050f744], eax */
  w32((uint32_t)(0x1050f744), (EAX));
L_104ef909:;
  /* 104ef909 mov eax, dword ptr [0x1050f744] */
  EAX = (r32((uint32_t)(0x1050f744)));
  /* 104ef90e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104ef911 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104ef913 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef915 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_104ef916:;
  /* 104ef916 mov esp, ebp */
  ESP = (EBP);
  /* 104ef918 pop ebp */
  EBP = (pop32());
  /* 104ef919 ret 4 */
  ESPCHK(0x104ef870u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f920 @ 0x104ef920 (43 bytes, 11 insns) */
void f_104ef920(void) {
  FTRACE(0x104ef920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ef920 push ebp */
  push32((uint32_t)(EBP));
  /* 104ef921 mov ebp, esp */
  EBP = (ESP);
  /* 104ef923 mov eax, dword ptr [0x1050f744] */
  EAX = (r32((uint32_t)(0x1050f744)));
  /* 104ef928 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 104ef92d mov dword ptr [0x1050f744], eax */
  w32((uint32_t)(0x1050f744), (EAX));
  /* 104ef932 call dword ptr [0x1051225c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051225c))), 0x104ef938u);
  /* 104ef938 mov dword ptr [0x1050f748], eax */
  w32((uint32_t)(0x1050f748), (EAX));
  /* 104ef93d mov ecx, dword ptr [0x1050f748] */
  ECX = (r32((uint32_t)(0x1050f748)));
  /* 104ef943 mov dword ptr [0x1050f72c], ecx */
  w32((uint32_t)(0x1050f72c), (ECX));
  /* 104ef949 pop ebp */
  EBP = (pop32());
  /* 104ef94a ret  */
  ESPCHK(0x104ef920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f950 @ 0x104ef950 (155 bytes, 57 insns) */
void f_104ef950(void) {
  FTRACE(0x104ef950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ef950 push ebp */
  push32((uint32_t)(EBP));
  /* 104ef951 mov ebp, esp */
  EBP = (ESP);
  /* 104ef953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef956 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104ef95a je 0x104ef97b */
  if (C.zf) goto L_104ef97b;
  /* 104ef95c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ef95f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104ef962 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104ef964 je 0x104ef97b */
  if (C.zf) goto L_104ef97b;
  /* 104ef966 push 0x1050b7a4 */
  push32((uint32_t)(0x1050b7a4u));
  /* 104ef96b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ef96e push edx */
  push32((uint32_t)(EDX));
  /* 104ef96f call 0x104eeeb0 */
  push32(0x104ef974u); f_104eeeb0();
  /* 104ef974 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef979 jne 0x104ef9a3 */
  if (!C.zf) goto L_104ef9a3;
L_104ef97b:;
  /* 104ef97b push 8 */
  push32((uint32_t)(0x8u));
  /* 104ef97d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 104ef980 push eax */
  push32((uint32_t)(EAX));
  /* 104ef981 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 104ef986 mov ecx, dword ptr [0x1050f748] */
  ECX = (r32((uint32_t)(0x1050f748)));
  /* 104ef98c push ecx */
  push32((uint32_t)(ECX));
  /* 104ef98d call dword ptr [0x1050f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f74c))), 0x104ef993u);
  /* 104ef993 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef995 jne 0x104ef99b */
  if (!C.zf) goto L_104ef99b;
  /* 104ef997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ef999 jmp 0x104ef9e7 */
  goto L_104ef9e7;
L_104ef99b:;
  /* 104ef99b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 104ef99e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104ef9a1 jmp 0x104ef9db */
  goto L_104ef9db;
L_104ef9a3:;
  /* 104ef9a3 push 0x1050b7a0 */
  push32((uint32_t)(0x1050b7a0u));
  /* 104ef9a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ef9ab push eax */
  push32((uint32_t)(EAX));
  /* 104ef9ac call 0x104eeeb0 */
  push32(0x104ef9b1u); f_104eeeb0();
  /* 104ef9b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104ef9b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef9b6 jne 0x104ef9db */
  if (!C.zf) goto L_104ef9db;
  /* 104ef9b8 push 8 */
  push32((uint32_t)(0x8u));
  /* 104ef9ba lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 104ef9bd push ecx */
  push32((uint32_t)(ECX));
  /* 104ef9be push 0xb */
  push32((uint32_t)(0xbu));
  /* 104ef9c0 mov edx, dword ptr [0x1050f748] */
  EDX = (r32((uint32_t)(0x1050f748)));
  /* 104ef9c6 push edx */
  push32((uint32_t)(EDX));
  /* 104ef9c7 call dword ptr [0x1050f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f74c))), 0x104ef9cdu);
  /* 104ef9cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104ef9cf jne 0x104ef9d5 */
  if (!C.zf) goto L_104ef9d5;
  /* 104ef9d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104ef9d3 jmp 0x104ef9e7 */
  goto L_104ef9e7;
L_104ef9d5:;
  /* 104ef9d5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 104ef9d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104ef9db:;
  /* 104ef9db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104ef9de push ecx */
  push32((uint32_t)(ECX));
  /* 104ef9df call 0x104f1ad0 */
  push32(0x104ef9e4u); f_104f1ad0();
  /* 104ef9e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104ef9e7:;
  /* 104ef9e7 mov esp, ebp */
  ESP = (EBP);
  /* 104ef9e9 pop ebp */
  EBP = (pop32());
  /* 104ef9ea ret  */
  ESPCHK(0x104ef950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9f0 @ 0x104ef9f0 (79 bytes, 26 insns) */
void f_104ef9f0(void) {
  FTRACE(0x104ef9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104ef9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104ef9f1 mov ebp, esp */
  EBP = (ESP);
  /* 104ef9f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104ef9f6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 104ef9fa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 104ef9fe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104efa05 jmp 0x104efa10 */
  goto L_104efa10;
L_104efa07:;
  /* 104efa07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104efa0a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104efa0d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104efa10:;
  /* 104efa10 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efa14 jae 0x104efa36 */
  if (!C.cf) goto L_104efa36;
  /* 104efa16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104efa19 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104efa1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104efa22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104efa24 mov cx, word ptr [eax*2 + 0x1050e9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1050e9c4)));
  /* 104efa2c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efa2e jne 0x104efa34 */
  if (!C.zf) goto L_104efa34;
  /* 104efa30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104efa32 jmp 0x104efa3b */
  goto L_104efa3b;
L_104efa34:;
  /* 104efa34 jmp 0x104efa07 */
  goto L_104efa07;
L_104efa36:;
  /* 104efa36 mov eax, 1 */
  EAX = (0x1u);
L_104efa3b:;
  /* 104efa3b mov esp, ebp */
  ESP = (EBP);
  /* 104efa3d pop ebp */
  EBP = (pop32());
  /* 104efa3e ret  */
  ESPCHK(0x104ef9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa40 @ 0x104efa40 (135 bytes, 48 insns) */
void f_104efa40(void) {
  FTRACE(0x104efa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104efa40 push ebp */
  push32((uint32_t)(EBP));
  /* 104efa41 mov ebp, esp */
  EBP = (ESP);
  /* 104efa43 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104efa46 push esi */
  push32((uint32_t)(ESI));
  /* 104efa47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efa4a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104efa4f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 104efa54 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104efa59 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 104efa5c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104efa61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104efa64 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 104efa66 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 104efa69 push ecx */
  push32((uint32_t)(ECX));
  /* 104efa6a push 1 */
  push32((uint32_t)(0x1u));
  /* 104efa6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104efa6f push edx */
  push32((uint32_t)(EDX));
  /* 104efa70 call dword ptr [0x1050f74c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f74c))), 0x104efa76u);
  /* 104efa76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104efa78 jne 0x104efa7e */
  if (!C.zf) goto L_104efa7e;
  /* 104efa7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104efa7c jmp 0x104efac2 */
  goto L_104efac2;
L_104efa7e:;
  /* 104efa7e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 104efa81 push eax */
  push32((uint32_t)(EAX));
  /* 104efa82 call 0x104efcb0 */
  push32(0x104efa87u); f_104efcb0();
  /* 104efa87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104efa8a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efa8d je 0x104efabd */
  if (C.zf) goto L_104efabd;
  /* 104efa8f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efa93 je 0x104efabd */
  if (C.zf) goto L_104efabd;
  /* 104efa95 mov ecx, dword ptr [0x1050f73c] */
  ECX = (r32((uint32_t)(0x1050f73c)));
  /* 104efa9b push ecx */
  push32((uint32_t)(ECX));
  /* 104efa9c call 0x104efd30 */
  push32(0x104efaa1u); f_104efd30();
  /* 104efaa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104efaa4 mov esi, eax */
  ESI = (EAX);
  /* 104efaa6 mov edx, dword ptr [0x1050f73c] */
  EDX = (r32((uint32_t)(0x1050f73c)));
  /* 104efaac push edx */
  push32((uint32_t)(EDX));
  /* 104efaad call 0x104e6050 */
  push32(0x104efab2u); f_104e6050();
  /* 104efab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104efab5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efab7 jne 0x104efabd */
  if (!C.zf) goto L_104efabd;
  /* 104efab9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104efabb jmp 0x104efac2 */
  goto L_104efac2;
L_104efabd:;
  /* 104efabd mov eax, 1 */
  EAX = (0x1u);
L_104efac2:;
  /* 104efac2 pop esi */
  ESI = (pop32());
  /* 104efac3 mov esp, ebp */
  ESP = (EBP);
  /* 104efac5 pop ebp */
  EBP = (pop32());
  /* 104efac6 ret  */
  ESPCHK(0x104efa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fad0 @ 0x104efad0 (77 bytes, 18 insns) */
void f_104efad0(void) {
  FTRACE(0x104efad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104efad0 push ebp */
  push32((uint32_t)(EBP));
  /* 104efad1 mov ebp, esp */
  EBP = (ESP);
  /* 104efad3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104efad9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 104efae3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 104efae9 push eax */
  push32((uint32_t)(EAX));
  /* 104efaea call dword ptr [0x10512258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512258))), 0x104efaf0u);
  /* 104efaf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104efaf2 je 0x104efb09 */
  if (C.zf) goto L_104efb09;
  /* 104efaf4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efafb jne 0x104efb09 */
  if (!C.zf) goto L_104efb09;
  /* 104efafd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 104efb07 jmp 0x104efb13 */
  goto L_104efb13;
L_104efb09:;
  /* 104efb09 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_104efb13:;
  /* 104efb13 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 104efb19 mov esp, ebp */
  ESP = (EBP);
  /* 104efb1b pop ebp */
  EBP = (pop32());
  /* 104efb1c ret  */
  ESPCHK(0x104efad0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x104efb20 (388 bytes, 118 insns) */
void f_104efb20(void) {
  FTRACE(0x104efb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104efb20 push ebp */
  push32((uint32_t)(EBP));
  /* 104efb21 mov ebp, esp */
  EBP = (ESP);
  /* 104efb23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104efb26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104efb2d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 104efb34 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104efb3b:;
  /* 104efb3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104efb3e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efb41 jg 0x104efc88 */
  if ((!C.zf&&C.sf==C.of)) goto L_104efc88;
  /* 104efb47 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104efb4a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104efb4d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104efb4e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104efb50 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104efb52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104efb55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104efb58 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104efb5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efb5e cmp edx, dword ptr [ecx + 0x1050e520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1050e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efb64 jne 0x104efc5e */
  if (!C.zf) goto L_104efc5e;
  /* 104efb6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104efb6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104efb70 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efb74 ja 0x104efb97 */
  if ((!C.cf&&!C.zf)) goto L_104efb97;
  /* 104efb76 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efb7a je 0x104efc09 */
  if (C.zf) goto L_104efc09;
  /* 104efb80 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efb84 je 0x104efbb4 */
  if (C.zf) goto L_104efbb4;
  /* 104efb86 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efb8a je 0x104efbd6 */
  if (C.zf) goto L_104efbd6;
  /* 104efb8c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efb90 je 0x104efbf8 */
  if (C.zf) goto L_104efbf8;
  /* 104efb92 jmp 0x104efc28 */
  goto L_104efc28;
L_104efb97:;
  /* 104efb97 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efb9e je 0x104efbc5 */
  if (C.zf) goto L_104efbc5;
  /* 104efba0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efba7 je 0x104efbe7 */
  if (C.zf) goto L_104efbe7;
  /* 104efba9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efbb0 je 0x104efc1a */
  if (C.zf) goto L_104efc1a;
  /* 104efbb2 jmp 0x104efc28 */
  goto L_104efc28;
L_104efbb4:;
  /* 104efbb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104efbb7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104efbba add ecx, 0x1050e524 */
  { uint32_t _a=(ECX),_b=(0x1050e524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104efbc0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104efbc3 jmp 0x104efc28 */
  goto L_104efc28;
L_104efbc5:;
  /* 104efbc5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104efbc8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104efbcb mov eax, dword ptr [edx + 0x1050e52c] */
  EAX = (r32((uint32_t)(EDX + 0x1050e52c)));
  /* 104efbd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104efbd4 jmp 0x104efc28 */
  goto L_104efc28;
L_104efbd6:;
  /* 104efbd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104efbd9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104efbdc add ecx, 0x1050e530 */
  { uint32_t _a=(ECX),_b=(0x1050e530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104efbe2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104efbe5 jmp 0x104efc28 */
  goto L_104efc28;
L_104efbe7:;
  /* 104efbe7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104efbea imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104efbed mov eax, dword ptr [edx + 0x1050e534] */
  EAX = (r32((uint32_t)(EDX + 0x1050e534)));
  /* 104efbf3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104efbf6 jmp 0x104efc28 */
  goto L_104efc28;
L_104efbf8:;
  /* 104efbf8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104efbfb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104efbfe add ecx, 0x1050e538 */
  { uint32_t _a=(ECX),_b=(0x1050e538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104efc04 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104efc07 jmp 0x104efc28 */
  goto L_104efc28;
L_104efc09:;
  /* 104efc09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104efc0c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104efc0f add edx, 0x1050e53c */
  { uint32_t _a=(EDX),_b=(0x1050e53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104efc15 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104efc18 jmp 0x104efc28 */
  goto L_104efc28;
L_104efc1a:;
  /* 104efc1a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104efc1d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104efc20 add eax, 0x1050e544 */
  { uint32_t _a=(EAX),_b=(0x1050e544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104efc25 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104efc28:;
  /* 104efc28 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efc2c je 0x104efc34 */
  if (C.zf) goto L_104efc34;
  /* 104efc2e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efc32 jge 0x104efc36 */
  if ((C.sf==C.of)) goto L_104efc36;
L_104efc34:;
  /* 104efc34 jmp 0x104efc88 */
  goto L_104efc88;
L_104efc36:;
  /* 104efc36 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104efc39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104efc3c push ecx */
  push32((uint32_t)(ECX));
  /* 104efc3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104efc40 push edx */
  push32((uint32_t)(EDX));
  /* 104efc41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104efc44 push eax */
  push32((uint32_t)(EAX));
  /* 104efc45 call 0x104e6a40 */
  push32(0x104efc4au); f_104e6a40();
  /* 104efc4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104efc4d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104efc50 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104efc53 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 104efc57 mov eax, 1 */
  EAX = (0x1u);
  /* 104efc5c jmp 0x104efc9e */
  goto L_104efc9e;
L_104efc5e:;
  /* 104efc5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104efc61 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104efc64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efc67 cmp eax, dword ptr [edx + 0x1050e520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1050e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efc6d jae 0x104efc7a */
  if (!C.cf) goto L_104efc7a;
  /* 104efc6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104efc72 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104efc75 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104efc78 jmp 0x104efc83 */
  goto L_104efc83;
L_104efc7a:;
  /* 104efc7a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104efc7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104efc80 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104efc83:;
  /* 104efc83 jmp 0x104efb3b */
  goto L_104efb3b;
L_104efc88:;
  /* 104efc88 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104efc8b push eax */
  push32((uint32_t)(EAX));
  /* 104efc8c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104efc8f push ecx */
  push32((uint32_t)(ECX));
  /* 104efc90 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104efc93 push edx */
  push32((uint32_t)(EDX));
  /* 104efc94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efc97 push eax */
  push32((uint32_t)(EAX));
  /* 104efc98 call dword ptr [0x10512264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512264))), 0x104efc9eu);
L_104efc9e:;
  /* 104efc9e mov esp, ebp */
  ESP = (EBP);
  /* 104efca0 pop ebp */
  EBP = (pop32());
  /* 104efca1 ret 0x10 */
  ESPCHK(0x104efb20u, _esp0);
  ESP += 20; return;
}

/* FUN_1000fcb0 @ 0x104efcb0 (118 bytes, 42 insns) */
void f_104efcb0(void) {
  FTRACE(0x104efcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104efcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 104efcb1 mov ebp, esp */
  EBP = (ESP);
  /* 104efcb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104efcb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104efcbd:;
  /* 104efcbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efcc0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104efcc2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 104efcc5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104efcc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efccc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104efccf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104efcd2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104efcd4 je 0x104efd1f */
  if (C.zf) goto L_104efd1f;
  /* 104efcd6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104efcda cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efcdd jl 0x104efcf2 */
  if ((C.sf!=C.of)) goto L_104efcf2;
  /* 104efcdf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104efce3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efce6 jg 0x104efcf2 */
  if ((!C.zf&&C.sf==C.of)) goto L_104efcf2;
  /* 104efce8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 104efceb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104efced mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 104efcf0 jmp 0x104efd0c */
  goto L_104efd0c;
L_104efcf2:;
  /* 104efcf2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104efcf6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efcf9 jl 0x104efd0c */
  if ((C.sf!=C.of)) goto L_104efd0c;
  /* 104efcfb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104efcff cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efd02 jg 0x104efd0c */
  if ((!C.zf&&C.sf==C.of)) goto L_104efd0c;
  /* 104efd04 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 104efd07 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104efd09 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_104efd0c:;
  /* 104efd0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104efd0f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 104efd12 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104efd16 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 104efd1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104efd1d jmp 0x104efcbd */
  goto L_104efcbd;
L_104efd1f:;
  /* 104efd1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104efd22 mov esp, ebp */
  ESP = (EBP);
  /* 104efd24 pop ebp */
  EBP = (pop32());
  /* 104efd25 ret  */
  ESPCHK(0x104efcb0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x104efd30 (101 bytes, 36 insns) */
void f_104efd30(void) {
  FTRACE(0x104efd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104efd30 push ebp */
  push32((uint32_t)(EBP));
  /* 104efd31 mov ebp, esp */
  EBP = (ESP);
  /* 104efd33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104efd36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104efd3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efd40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104efd42 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 104efd45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efd48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104efd4b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_104efd4e:;
  /* 104efd4e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 104efd52 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efd55 jl 0x104efd60 */
  if ((C.sf!=C.of)) goto L_104efd60;
  /* 104efd57 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 104efd5b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efd5e jle 0x104efd72 */
  if ((C.zf||C.sf!=C.of)) goto L_104efd72;
L_104efd60:;
  /* 104efd60 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 104efd64 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efd67 jl 0x104efd8e */
  if ((C.sf!=C.of)) goto L_104efd8e;
  /* 104efd69 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 104efd6d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efd70 jg 0x104efd8e */
  if ((!C.zf&&C.sf==C.of)) goto L_104efd8e;
L_104efd72:;
  /* 104efd72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104efd75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104efd78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104efd7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efd7e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104efd80 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 104efd83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efd86 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104efd89 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 104efd8c jmp 0x104efd4e */
  goto L_104efd4e;
L_104efd8e:;
  /* 104efd8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104efd91 mov esp, ebp */
  ESP = (EBP);
  /* 104efd93 pop ebp */
  EBP = (pop32());
  /* 104efd94 ret  */
  ESPCHK(0x104efd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fda0 @ 0x104efda0 (122 bytes, 39 insns) */
void f_104efda0(void) {
  FTRACE(0x104efda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104efda0 push ebp */
  push32((uint32_t)(EBP));
  /* 104efda1 mov ebp, esp */
  EBP = (ESP);
  /* 104efda3 push ecx */
  push32((uint32_t)(ECX));
  /* 104efda4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efda7 cmp eax, dword ptr [0x10510fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10510fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efdad jae 0x104efdd1 */
  if (!C.cf) goto L_104efdd1;
  /* 104efdaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efdb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104efdb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efdb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104efdbb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104efdbe mov eax, dword ptr [ecx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10510ea0)));
  /* 104efdc5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104efdca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104efdcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104efdcf jne 0x104efdec */
  if (!C.zf) goto L_104efdec;
L_104efdd1:;
  /* 104efdd1 call 0x104eb0f0 */
  push32(0x104efdd6u); f_104eb0f0();
  /* 104efdd6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104efddc call 0x104eb100 */
  push32(0x104efde1u); f_104eb100();
  /* 104efde1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104efde7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104efdea jmp 0x104efe16 */
  goto L_104efe16;
L_104efdec:;
  /* 104efdec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efdef push edx */
  push32((uint32_t)(EDX));
  /* 104efdf0 call 0x104ec910 */
  push32(0x104efdf5u); f_104ec910();
  /* 104efdf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104efdf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efdfb push eax */
  push32((uint32_t)(EAX));
  /* 104efdfc call 0x104efe20 */
  push32(0x104efe01u); f_104efe20();
  /* 104efe01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104efe04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104efe07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efe0a push ecx */
  push32((uint32_t)(ECX));
  /* 104efe0b call 0x104ec9a0 */
  push32(0x104efe10u); f_104ec9a0();
  /* 104efe10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104efe13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104efe16:;
  /* 104efe16 mov esp, ebp */
  ESP = (EBP);
  /* 104efe18 pop ebp */
  EBP = (pop32());
  /* 104efe19 ret  */
  ESPCHK(0x104efda0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x104efe20 (170 bytes, 59 insns) */
void f_104efe20(void) {
  FTRACE(0x104efe20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104efe20 push ebp */
  push32((uint32_t)(EBP));
  /* 104efe21 mov ebp, esp */
  EBP = (ESP);
  /* 104efe23 push ecx */
  push32((uint32_t)(ECX));
  /* 104efe24 push esi */
  push32((uint32_t)(ESI));
  /* 104efe25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efe28 push eax */
  push32((uint32_t)(EAX));
  /* 104efe29 call 0x104ec790 */
  push32(0x104efe2eu); f_104ec790();
  /* 104efe2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104efe31 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efe34 je 0x104efe73 */
  if (C.zf) goto L_104efe73;
  /* 104efe36 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efe3a je 0x104efe42 */
  if (C.zf) goto L_104efe42;
  /* 104efe3c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efe40 jne 0x104efe5c */
  if (!C.zf) goto L_104efe5c;
L_104efe42:;
  /* 104efe42 push 1 */
  push32((uint32_t)(0x1u));
  /* 104efe44 call 0x104ec790 */
  push32(0x104efe49u); f_104ec790();
  /* 104efe49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104efe4c mov esi, eax */
  ESI = (EAX);
  /* 104efe4e push 2 */
  push32((uint32_t)(0x2u));
  /* 104efe50 call 0x104ec790 */
  push32(0x104efe55u); f_104ec790();
  /* 104efe55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104efe58 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efe5a je 0x104efe73 */
  if (C.zf) goto L_104efe73;
L_104efe5c:;
  /* 104efe5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efe5f push ecx */
  push32((uint32_t)(ECX));
  /* 104efe60 call 0x104ec790 */
  push32(0x104efe65u); f_104ec790();
  /* 104efe65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104efe68 push eax */
  push32((uint32_t)(EAX));
  /* 104efe69 call dword ptr [0x10512254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512254))), 0x104efe6fu);
  /* 104efe6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104efe71 je 0x104efe7c */
  if (C.zf) goto L_104efe7c;
L_104efe73:;
  /* 104efe73 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104efe7a jmp 0x104efe85 */
  goto L_104efe85;
L_104efe7c:;
  /* 104efe7c call dword ptr [0x105122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122c8))), 0x104efe82u);
  /* 104efe82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104efe85:;
  /* 104efe85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efe88 push edx */
  push32((uint32_t)(EDX));
  /* 104efe89 call 0x104ec6b0 */
  push32(0x104efe8eu); f_104ec6b0();
  /* 104efe8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104efe91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efe94 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104efe97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104efe9a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104efe9d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104efea0 mov edx, dword ptr [eax*4 + 0x10510ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10510ea0)));
  /* 104efea7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 104efeac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efeb0 je 0x104efec3 */
  if (C.zf) goto L_104efec3;
  /* 104efeb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104efeb5 push eax */
  push32((uint32_t)(EAX));
  /* 104efeb6 call 0x104eb050 */
  push32(0x104efebbu); f_104eb050();
  /* 104efebb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104efebe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104efec1 jmp 0x104efec5 */
  goto L_104efec5;
L_104efec3:;
  /* 104efec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104efec5:;
  /* 104efec5 pop esi */
  ESI = (pop32());
  /* 104efec6 mov esp, ebp */
  ESP = (EBP);
  /* 104efec8 pop ebp */
  EBP = (pop32());
  /* 104efec9 ret  */
  ESPCHK(0x104efe20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fed0 @ 0x104efed0 (146 bytes, 52 insns) */
void f_104efed0(void) {
  FTRACE(0x104efed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104efed0 push ebp */
  push32((uint32_t)(EBP));
  /* 104efed1 mov ebp, esp */
  EBP = (ESP);
  /* 104efed3 push ebx */
  push32((uint32_t)(EBX));
  /* 104efed4 push esi */
  push32((uint32_t)(ESI));
  /* 104efed5 push edi */
  push32((uint32_t)(EDI));
L_104efed6:;
  /* 104efed6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efeda jne 0x104efefa */
  if (!C.zf) goto L_104efefa;
  /* 104efedc push 0x1050b0e0 */
  push32((uint32_t)(0x1050b0e0u));
  /* 104efee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104efee3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 104efee5 push 0x1050b7a8 */
  push32((uint32_t)(0x1050b7a8u));
  /* 104efeea push 2 */
  push32((uint32_t)(0x2u));
  /* 104efeec call 0x104e22e0 */
  push32(0x104efef1u); f_104e22e0();
  /* 104efef1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104efef4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104efef7 jne 0x104efefa */
  if (!C.zf) goto L_104efefa;
  /* 104efef9 int3  */
  x86_unimpl("int3 @ 0x104efef9");
L_104efefa:;
  /* 104efefa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104efefc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104efefe jne 0x104efed6 */
  if (!C.zf) goto L_104efed6;
  /* 104eff00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eff03 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104eff06 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 104eff0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104eff0e je 0x104eff5d */
  if (C.zf) goto L_104eff5d;
  /* 104eff10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eff13 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104eff16 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 104eff19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104eff1b je 0x104eff5d */
  if (C.zf) goto L_104eff5d;
  /* 104eff1d push 2 */
  push32((uint32_t)(0x2u));
  /* 104eff1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eff22 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104eff25 push eax */
  push32((uint32_t)(EAX));
  /* 104eff26 call 0x104e3cb0 */
  push32(0x104eff2bu); f_104e3cb0();
  /* 104eff2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104eff2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eff31 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104eff34 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 104eff3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eff3d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 104eff40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eff43 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 104eff49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eff4c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 104eff53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104eff56 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_104eff5d:;
  /* 104eff5d pop edi */
  EDI = (pop32());
  /* 104eff5e pop esi */
  ESI = (pop32());
  /* 104eff5f pop ebx */
  EBX = (pop32());
  /* 104eff60 pop ebp */
  EBP = (pop32());
  /* 104eff61 ret  */
  ESPCHK(0x104efed0u, _esp0);
  ESP += 4; return;
}

