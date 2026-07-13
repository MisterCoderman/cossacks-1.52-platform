#include "recomp.h"

/* FUN_1000e320 @ 0x1256e320 (490 bytes, 165 insns) */
void f_1256e320(void) {
  FTRACE(0x1256e320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256e320 push ebp */
  push32((uint32_t)(EBP));
  /* 1256e321 mov ebp, esp */
  EBP = (ESP);
  /* 1256e323 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e326 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e32a jne 0x1256e33d */
  if (!C.zf) goto L_1256e33d;
  /* 1256e32c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256e32f push eax */
  push32((uint32_t)(EAX));
  /* 1256e330 call 0x1256e170 */
  push32(0x1256e335u); f_1256e170();
  /* 1256e335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e338 jmp 0x1256e506 */
  goto L_1256e506;
L_1256e33d:;
  /* 1256e33d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e341 jne 0x1256e356 */
  if (!C.zf) goto L_1256e356;
  /* 1256e343 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e346 push ecx */
  push32((uint32_t)(ECX));
  /* 1256e347 call 0x1256e510 */
  push32(0x1256e34cu); f_1256e510();
  /* 1256e34c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e34f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1256e351 jmp 0x1256e506 */
  goto L_1256e506;
L_1256e356:;
  /* 1256e356 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1256e35d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e361 ja 0x1256e4d9 */
  if ((!C.cf&&!C.zf)) goto L_1256e4d9;
  /* 1256e367 push 9 */
  push32((uint32_t)(0x9u));
  /* 1256e369 call 0x1256dda0 */
  push32(0x1256e36eu); f_1256dda0();
  /* 1256e36e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e371 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e374 push edx */
  push32((uint32_t)(EDX));
  /* 1256e375 call 0x1256e6a0 */
  push32(0x1256e37au); f_1256e6a0();
  /* 1256e37a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e37d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1256e380 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e384 je 0x1256e49c */
  if (C.zf) goto L_1256e49c;
  /* 1256e38a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256e38d cmp eax, dword ptr [0x12594c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12594c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e393 ja 0x1256e410 */
  if ((!C.cf&&!C.zf)) goto L_1256e410;
  /* 1256e395 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256e398 push ecx */
  push32((uint32_t)(ECX));
  /* 1256e399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e39c push edx */
  push32((uint32_t)(EDX));
  /* 1256e39d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1256e3a0 push eax */
  push32((uint32_t)(EAX));
  /* 1256e3a1 call 0x1256f570 */
  push32(0x1256e3a6u); f_1256f570();
  /* 1256e3a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e3a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1256e3ab je 0x1256e3b5 */
  if (C.zf) goto L_1256e3b5;
  /* 1256e3ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e3b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1256e3b3 jmp 0x1256e410 */
  goto L_1256e410;
L_1256e3b5:;
  /* 1256e3b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256e3b8 push edx */
  push32((uint32_t)(EDX));
  /* 1256e3b9 call 0x1256ed30 */
  push32(0x1256e3beu); f_1256ed30();
  /* 1256e3be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e3c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1256e3c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e3c8 je 0x1256e410 */
  if (C.zf) goto L_1256e410;
  /* 1256e3ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e3cd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1256e3d0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e3d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1256e3d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e3d9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e3dc jae 0x1256e3e6 */
  if (!C.cf) goto L_1256e3e6;
  /* 1256e3de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e3e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1256e3e4 jmp 0x1256e3ec */
  goto L_1256e3ec;
L_1256e3e6:;
  /* 1256e3e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256e3e9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1256e3ec:;
  /* 1256e3ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256e3ef push edx */
  push32((uint32_t)(EDX));
  /* 1256e3f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e3f3 push eax */
  push32((uint32_t)(EAX));
  /* 1256e3f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256e3f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1256e3f8 call 0x12570c80 */
  push32(0x1256e3fdu); f_12570c80();
  /* 1256e3fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e400 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e403 push edx */
  push32((uint32_t)(EDX));
  /* 1256e404 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1256e407 push eax */
  push32((uint32_t)(EAX));
  /* 1256e408 call 0x1256e760 */
  push32(0x1256e40du); f_1256e760();
  /* 1256e40d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1256e410:;
  /* 1256e410 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e414 jne 0x1256e490 */
  if (!C.zf) goto L_1256e490;
  /* 1256e416 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e41a jne 0x1256e423 */
  if (!C.zf) goto L_1256e423;
  /* 1256e41c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1256e423:;
  /* 1256e423 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256e426 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e429 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1256e42c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1256e42f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256e432 push edx */
  push32((uint32_t)(EDX));
  /* 1256e433 push 0 */
  push32((uint32_t)(0x0u));
  /* 1256e435 mov eax, dword ptr [0x1259836c] */
  EAX = (r32((uint32_t)(0x1259836c)));
  /* 1256e43a push eax */
  push32((uint32_t)(EAX));
  /* 1256e43b call dword ptr [0x12599344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599344))), 0x1256e441u);
  /* 1256e441 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1256e444 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e448 je 0x1256e490 */
  if (C.zf) goto L_1256e490;
  /* 1256e44a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e44d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1256e450 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e453 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1256e456 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e459 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e45c jae 0x1256e466 */
  if (!C.cf) goto L_1256e466;
  /* 1256e45e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e461 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1256e464 jmp 0x1256e46c */
  goto L_1256e46c;
L_1256e466:;
  /* 1256e466 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256e469 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1256e46c:;
  /* 1256e46c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256e46f push eax */
  push32((uint32_t)(EAX));
  /* 1256e470 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e473 push ecx */
  push32((uint32_t)(ECX));
  /* 1256e474 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256e477 push edx */
  push32((uint32_t)(EDX));
  /* 1256e478 call 0x12570c80 */
  push32(0x1256e47du); f_12570c80();
  /* 1256e47d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e483 push eax */
  push32((uint32_t)(EAX));
  /* 1256e484 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1256e487 push ecx */
  push32((uint32_t)(ECX));
  /* 1256e488 call 0x1256e760 */
  push32(0x1256e48du); f_1256e760();
  /* 1256e48d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1256e490:;
  /* 1256e490 push 9 */
  push32((uint32_t)(0x9u));
  /* 1256e492 call 0x1256de40 */
  push32(0x1256e497u); f_1256de40();
  /* 1256e497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e49a jmp 0x1256e4d9 */
  goto L_1256e4d9;
L_1256e49c:;
  /* 1256e49c push 9 */
  push32((uint32_t)(0x9u));
  /* 1256e49e call 0x1256de40 */
  push32(0x1256e4a3u); f_1256de40();
  /* 1256e4a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e4a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e4aa jne 0x1256e4b3 */
  if (!C.zf) goto L_1256e4b3;
  /* 1256e4ac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1256e4b3:;
  /* 1256e4b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256e4b6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e4b9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1256e4bc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1256e4bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256e4c2 push eax */
  push32((uint32_t)(EAX));
  /* 1256e4c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e4c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1256e4c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1256e4c9 mov edx, dword ptr [0x1259836c] */
  EDX = (r32((uint32_t)(0x1259836c)));
  /* 1256e4cf push edx */
  push32((uint32_t)(EDX));
  /* 1256e4d0 call dword ptr [0x1259934c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259934c))), 0x1256e4d6u);
  /* 1256e4d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1256e4d9:;
  /* 1256e4d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e4dd jne 0x1256e4e8 */
  if (!C.zf) goto L_1256e4e8;
  /* 1256e4df cmp dword ptr [0x12596bb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596bb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e4e6 jne 0x1256e4ed */
  if (!C.zf) goto L_1256e4ed;
L_1256e4e8:;
  /* 1256e4e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256e4eb jmp 0x1256e506 */
  goto L_1256e506;
L_1256e4ed:;
  /* 1256e4ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256e4f0 push eax */
  push32((uint32_t)(EAX));
  /* 1256e4f1 call 0x1256e0e0 */
  push32(0x1256e4f6u); f_1256e0e0();
  /* 1256e4f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e4f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1256e4fb jne 0x1256e501 */
  if (!C.zf) goto L_1256e501;
  /* 1256e4fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1256e4ff jmp 0x1256e506 */
  goto L_1256e506;
L_1256e501:;
  /* 1256e501 jmp 0x1256e356 */
  goto L_1256e356;
L_1256e506:;
  /* 1256e506 mov esp, ebp */
  ESP = (EBP);
  /* 1256e508 pop ebp */
  EBP = (pop32());
  /* 1256e509 ret  */
  ESPCHK(0x1256e320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e510 @ 0x1256e510 (104 bytes, 38 insns) */
void f_1256e510(void) {
  FTRACE(0x1256e510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256e510 push ebp */
  push32((uint32_t)(EBP));
  /* 1256e511 mov ebp, esp */
  EBP = (ESP);
  /* 1256e513 push ecx */
  push32((uint32_t)(ECX));
  /* 1256e514 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e518 jne 0x1256e51c */
  if (!C.zf) goto L_1256e51c;
  /* 1256e51a jmp 0x1256e574 */
  goto L_1256e574;
L_1256e51c:;
  /* 1256e51c push 9 */
  push32((uint32_t)(0x9u));
  /* 1256e51e call 0x1256dda0 */
  push32(0x1256e523u); f_1256dda0();
  /* 1256e523 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e529 push eax */
  push32((uint32_t)(EAX));
  /* 1256e52a call 0x1256e6a0 */
  push32(0x1256e52fu); f_1256e6a0();
  /* 1256e52f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e532 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1256e535 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e539 je 0x1256e557 */
  if (C.zf) goto L_1256e557;
  /* 1256e53b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e53e push ecx */
  push32((uint32_t)(ECX));
  /* 1256e53f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e542 push edx */
  push32((uint32_t)(EDX));
  /* 1256e543 call 0x1256e760 */
  push32(0x1256e548u); f_1256e760();
  /* 1256e548 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e54b push 9 */
  push32((uint32_t)(0x9u));
  /* 1256e54d call 0x1256de40 */
  push32(0x1256e552u); f_1256de40();
  /* 1256e552 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e555 jmp 0x1256e574 */
  goto L_1256e574;
L_1256e557:;
  /* 1256e557 push 9 */
  push32((uint32_t)(0x9u));
  /* 1256e559 call 0x1256de40 */
  push32(0x1256e55eu); f_1256de40();
  /* 1256e55e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e561 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e564 push eax */
  push32((uint32_t)(EAX));
  /* 1256e565 push 0 */
  push32((uint32_t)(0x0u));
  /* 1256e567 mov ecx, dword ptr [0x1259836c] */
  ECX = (r32((uint32_t)(0x1259836c)));
  /* 1256e56d push ecx */
  push32((uint32_t)(ECX));
  /* 1256e56e call dword ptr [0x12599370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599370))), 0x1256e574u);
L_1256e574:;
  /* 1256e574 mov esp, ebp */
  ESP = (EBP);
  /* 1256e576 pop ebp */
  EBP = (pop32());
  /* 1256e577 ret  */
  ESPCHK(0x1256e510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e580 @ 0x1256e580 (116 bytes, 34 insns) */
void f_1256e580(void) {
  FTRACE(0x1256e580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256e580 push ebp */
  push32((uint32_t)(EBP));
  /* 1256e581 mov ebp, esp */
  EBP = (ESP);
  /* 1256e583 push ecx */
  push32((uint32_t)(ECX));
  /* 1256e584 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1256e58b push 9 */
  push32((uint32_t)(0x9u));
  /* 1256e58d call 0x1256dda0 */
  push32(0x1256e592u); f_1256dda0();
  /* 1256e592 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e595 call 0x1256fc90 */
  push32(0x1256e59au); f_1256fc90();
  /* 1256e59a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1256e59c jge 0x1256e5a5 */
  if ((C.sf==C.of)) goto L_1256e5a5;
  /* 1256e59e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1256e5a5:;
  /* 1256e5a5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1256e5a7 call 0x1256de40 */
  push32(0x1256e5acu); f_1256de40();
  /* 1256e5ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e5af push 0 */
  push32((uint32_t)(0x0u));
  /* 1256e5b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1256e5b3 mov eax, dword ptr [0x1259836c] */
  EAX = (r32((uint32_t)(0x1259836c)));
  /* 1256e5b8 push eax */
  push32((uint32_t)(EAX));
  /* 1256e5b9 call dword ptr [0x12599384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599384))), 0x1256e5bfu);
  /* 1256e5bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1256e5c1 jne 0x1256e5ed */
  if (!C.zf) goto L_1256e5ed;
  /* 1256e5c3 call dword ptr [0x125993e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993e8))), 0x1256e5c9u);
  /* 1256e5c9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e5cc jne 0x1256e5e6 */
  if (!C.zf) goto L_1256e5e6;
  /* 1256e5ce call 0x12572280 */
  push32(0x1256e5d3u); f_12572280();
  /* 1256e5d3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1256e5d9 call 0x12572270 */
  push32(0x1256e5deu); f_12572270();
  /* 1256e5de mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1256e5e4 jmp 0x1256e5ed */
  goto L_1256e5ed;
L_1256e5e6:;
  /* 1256e5e6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1256e5ed:;
  /* 1256e5ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e5f0 mov esp, ebp */
  ESP = (EBP);
  /* 1256e5f2 pop ebp */
  EBP = (pop32());
  /* 1256e5f3 ret  */
  ESPCHK(0x1256e580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e600 @ 0x1256e600 (10 bytes, 5 insns) */
void f_1256e600(void) {
  FTRACE(0x1256e600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256e600 push ebp */
  push32((uint32_t)(EBP));
  /* 1256e601 mov ebp, esp */
  EBP = (ESP);
  /* 1256e603 call 0x1256e580 */
  push32(0x1256e608u); f_1256e580();
  /* 1256e608 pop ebp */
  EBP = (pop32());
  /* 1256e609 ret  */
  ESPCHK(0x1256e600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e610 @ 0x1256e610 (10 bytes, 5 insns) */
void f_1256e610(void) {
  FTRACE(0x1256e610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256e610 push ebp */
  push32((uint32_t)(EBP));
  /* 1256e611 mov ebp, esp */
  EBP = (ESP);
  /* 1256e613 mov eax, dword ptr [0x12594c94] */
  EAX = (r32((uint32_t)(0x12594c94)));
  /* 1256e618 pop ebp */
  EBP = (pop32());
  /* 1256e619 ret  */
  ESPCHK(0x1256e610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e620 @ 0x1256e620 (31 bytes, 11 insns) */
void f_1256e620(void) {
  FTRACE(0x1256e620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256e620 push ebp */
  push32((uint32_t)(EBP));
  /* 1256e621 mov ebp, esp */
  EBP = (ESP);
  /* 1256e623 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e62a jbe 0x1256e630 */
  if ((C.cf||C.zf)) goto L_1256e630;
  /* 1256e62c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1256e62e jmp 0x1256e63d */
  goto L_1256e63d;
L_1256e630:;
  /* 1256e630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e633 mov dword ptr [0x12594c94], eax */
  w32((uint32_t)(0x12594c94), (EAX));
  /* 1256e638 mov eax, 1 */
  EAX = (0x1u);
L_1256e63d:;
  /* 1256e63d pop ebp */
  EBP = (pop32());
  /* 1256e63e ret  */
  ESPCHK(0x1256e620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e640 @ 0x1256e640 (89 bytes, 20 insns) */
void f_1256e640(void) {
  FTRACE(0x1256e640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256e640 push ebp */
  push32((uint32_t)(EBP));
  /* 1256e641 mov ebp, esp */
  EBP = (ESP);
  /* 1256e643 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1256e648 push 0 */
  push32((uint32_t)(0x0u));
  /* 1256e64a mov eax, dword ptr [0x1259836c] */
  EAX = (r32((uint32_t)(0x1259836c)));
  /* 1256e64f push eax */
  push32((uint32_t)(EAX));
  /* 1256e650 call dword ptr [0x12599344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599344))), 0x1256e656u);
  /* 1256e656 mov dword ptr [0x12598368], eax */
  w32((uint32_t)(0x12598368), (EAX));
  /* 1256e65b cmp dword ptr [0x12598368], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12598368))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e662 jne 0x1256e668 */
  if (!C.zf) goto L_1256e668;
  /* 1256e664 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1256e666 jmp 0x1256e697 */
  goto L_1256e697;
L_1256e668:;
  /* 1256e668 mov ecx, dword ptr [0x12598368] */
  ECX = (r32((uint32_t)(0x12598368)));
  /* 1256e66e mov dword ptr [0x1259835c], ecx */
  w32((uint32_t)(0x1259835c), (ECX));
  /* 1256e674 mov dword ptr [0x12598360], 0 */
  w32((uint32_t)(0x12598360), (0x0u));
  /* 1256e67e mov dword ptr [0x12598364], 0 */
  w32((uint32_t)(0x12598364), (0x0u));
  /* 1256e688 mov dword ptr [0x12598348], 0x10 */
  w32((uint32_t)(0x12598348), (0x10u));
  /* 1256e692 mov eax, 1 */
  EAX = (0x1u);
L_1256e697:;
  /* 1256e697 pop ebp */
  EBP = (pop32());
  /* 1256e698 ret  */
  ESPCHK(0x1256e640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6a0 @ 0x1256e6a0 (85 bytes, 29 insns) */
void f_1256e6a0(void) {
  FTRACE(0x1256e6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256e6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1256e6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1256e6a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e6a6 mov eax, dword ptr [0x12598364] */
  EAX = (r32((uint32_t)(0x12598364)));
  /* 1256e6ab imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1256e6ae mov ecx, dword ptr [0x12598368] */
  ECX = (r32((uint32_t)(0x12598368)));
  /* 1256e6b4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e6b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1256e6b9 mov edx, dword ptr [0x12598368] */
  EDX = (r32((uint32_t)(0x12598368)));
  /* 1256e6bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1256e6c2:;
  /* 1256e6c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256e6c5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e6c8 jae 0x1256e6ef */
  if (!C.cf) goto L_1256e6ef;
  /* 1256e6ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256e6cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e6d0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e6d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1256e6d6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e6dd jae 0x1256e6e4 */
  if (!C.cf) goto L_1256e6e4;
  /* 1256e6df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256e6e2 jmp 0x1256e6f1 */
  goto L_1256e6f1;
L_1256e6e4:;
  /* 1256e6e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256e6e7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e6ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1256e6ed jmp 0x1256e6c2 */
  goto L_1256e6c2;
L_1256e6ef:;
  /* 1256e6ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1256e6f1:;
  /* 1256e6f1 mov esp, ebp */
  ESP = (EBP);
  /* 1256e6f3 pop ebp */
  EBP = (pop32());
  /* 1256e6f4 ret  */
  ESPCHK(0x1256e6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x1256e700 (95 bytes, 33 insns) */
void f_1256e700(void) {
  FTRACE(0x1256e700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256e700 push ebp */
  push32((uint32_t)(EBP));
  /* 1256e701 mov ebp, esp */
  EBP = (ESP);
  /* 1256e703 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e709 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256e70c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e70f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1256e712 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256e715 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1256e718 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1256e71b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256e720 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e723 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256e725 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e728 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1256e72b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1256e72d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1256e72f jne 0x1256e751 */
  if (!C.zf) goto L_1256e751;
  /* 1256e731 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256e734 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1256e737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1256e739 jne 0x1256e751 */
  if (!C.zf) goto L_1256e751;
  /* 1256e73b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256e73e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1256e744 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256e746 je 0x1256e751 */
  if (C.zf) goto L_1256e751;
  /* 1256e748 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1256e74f jmp 0x1256e758 */
  goto L_1256e758;
L_1256e751:;
  /* 1256e751 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1256e758:;
  /* 1256e758 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1256e75b mov esp, ebp */
  ESP = (EBP);
  /* 1256e75d pop ebp */
  EBP = (pop32());
  /* 1256e75e ret  */
  ESPCHK(0x1256e700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e760 @ 0x1256e760 (1485 bytes, 453 insns) */
void f_1256e760(void) {
  FTRACE(0x1256e760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256e760 push ebp */
  push32((uint32_t)(EBP));
  /* 1256e761 mov ebp, esp */
  EBP = (ESP);
  /* 1256e763 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e769 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1256e76c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1256e76f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e772 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256e775 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e778 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1256e77b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256e77e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1256e781 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1256e784 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e787 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1256e78d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e790 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1256e797 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1256e79a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256e79d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e7a0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1256e7a3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256e7a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1256e7a8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e7ab mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1256e7ae mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256e7b1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e7b4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1256e7b7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256e7ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1256e7bc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1256e7bf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256e7c2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1256e7c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1256e7c8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256e7cb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1256e7ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256e7d0 jne 0x1256e8f8 */
  if (!C.zf) goto L_1256e8f8;
  /* 1256e7d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256e7d9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1256e7dc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e7df mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1256e7e2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e7e6 jbe 0x1256e7ef */
  if ((C.cf||C.zf)) goto L_1256e7ef;
  /* 1256e7e8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1256e7ef:;
  /* 1256e7ef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256e7f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256e7f5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256e7f8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e7fb jne 0x1256e8d1 */
  if (!C.zf) goto L_1256e8d1;
  /* 1256e801 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e805 jae 0x1256e866 */
  if (!C.cf) goto L_1256e866;
  /* 1256e807 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256e80c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256e80f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256e811 not eax */
  EAX = (~(EAX));
  /* 1256e813 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e816 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e819 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1256e81d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1256e81f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e822 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e825 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1256e829 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e82c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e82f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1256e832 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1256e835 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e838 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e83b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1256e83e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e841 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e844 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1256e848 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1256e84a jne 0x1256e864 */
  if (!C.zf) goto L_1256e864;
  /* 1256e84c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256e851 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256e854 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256e856 not eax */
  EAX = (~(EAX));
  /* 1256e858 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e85b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1256e85d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1256e85f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e862 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1256e864:;
  /* 1256e864 jmp 0x1256e8d1 */
  goto L_1256e8d1;
L_1256e866:;
  /* 1256e866 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256e869 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e86c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256e871 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256e873 not edx */
  EDX = (~(EDX));
  /* 1256e875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e878 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e87b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1256e882 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1256e884 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e887 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e88a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1256e891 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e894 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e897 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1256e89a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1256e89d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e8a0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e8a3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1256e8a6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e8a9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e8ac movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1256e8b0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256e8b2 jne 0x1256e8d1 */
  if (!C.zf) goto L_1256e8d1;
  /* 1256e8b4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256e8b7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e8ba mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256e8bf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256e8c1 not edx */
  EDX = (~(EDX));
  /* 1256e8c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e8c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256e8c9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1256e8cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e8ce mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1256e8d1:;
  /* 1256e8d1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256e8d4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1256e8d7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256e8da mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1256e8dd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1256e8e0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256e8e3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256e8e6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256e8e9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1256e8ec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1256e8ef mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256e8f2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e8f5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1256e8f8:;
  /* 1256e8f8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256e8fb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1256e8fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e901 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1256e904 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e908 jbe 0x1256e911 */
  if ((C.cf||C.zf)) goto L_1256e911;
  /* 1256e90a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1256e911:;
  /* 1256e911 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1256e914 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1256e917 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256e919 jne 0x1256ea75 */
  if (!C.zf) goto L_1256ea75;
  /* 1256e91f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256e922 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e925 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1256e928 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1256e92b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1256e92e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e931 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1256e934 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e938 jbe 0x1256e941 */
  if ((C.cf||C.zf)) goto L_1256e941;
  /* 1256e93a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1256e941:;
  /* 1256e941 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256e944 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e947 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1256e94a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256e94d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1256e950 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e953 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1256e956 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e95a jbe 0x1256e963 */
  if ((C.cf||C.zf)) goto L_1256e963;
  /* 1256e95c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1256e963:;
  /* 1256e963 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256e966 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e969 je 0x1256ea6f */
  if (C.zf) goto L_1256ea6f;
  /* 1256e96f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1256e972 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1256e975 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256e978 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e97b jne 0x1256ea51 */
  if (!C.zf) goto L_1256ea51;
  /* 1256e981 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256e985 jae 0x1256e9e6 */
  if (!C.cf) goto L_1256e9e6;
  /* 1256e987 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256e98c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256e98f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256e991 not edx */
  EDX = (~(EDX));
  /* 1256e993 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e996 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e999 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1256e99d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1256e99f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e9a2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e9a5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1256e9a9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e9ac add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e9af mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1256e9b2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1256e9b5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e9b8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e9bb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1256e9be mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e9c1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256e9c4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1256e9c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256e9ca jne 0x1256e9e4 */
  if (!C.zf) goto L_1256e9e4;
  /* 1256e9cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256e9d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256e9d4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256e9d6 not edx */
  EDX = (~(EDX));
  /* 1256e9d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e9db mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1256e9dd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1256e9df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256e9e2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1256e9e4:;
  /* 1256e9e4 jmp 0x1256ea51 */
  goto L_1256ea51;
L_1256e9e6:;
  /* 1256e9e6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256e9e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256e9ec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256e9f1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256e9f3 not eax */
  EAX = (~(EAX));
  /* 1256e9f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256e9f8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256e9fb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1256ea02 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1256ea04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256ea07 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256ea0a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1256ea11 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256ea14 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ea17 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1256ea1a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1256ea1d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256ea20 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ea23 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1256ea26 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256ea29 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ea2c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1256ea30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1256ea32 jne 0x1256ea51 */
  if (!C.zf) goto L_1256ea51;
  /* 1256ea34 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256ea37 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256ea3a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256ea3f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256ea41 not eax */
  EAX = (~(EAX));
  /* 1256ea43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256ea46 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256ea49 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1256ea4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256ea4e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1256ea51:;
  /* 1256ea51 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1256ea54 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1256ea57 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1256ea5a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256ea5d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1256ea60 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1256ea63 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1256ea66 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1256ea69 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1256ea6c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1256ea6f:;
  /* 1256ea6f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1256ea72 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1256ea75:;
  /* 1256ea75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1256ea78 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1256ea7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256ea7d jne 0x1256ea8b */
  if (!C.zf) goto L_1256ea8b;
  /* 1256ea7f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256ea82 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ea85 je 0x1256eb9b */
  if (C.zf) goto L_1256eb9b;
L_1256ea8b:;
  /* 1256ea8b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256ea8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256ea91 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1256ea94 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1256ea97 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256ea9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256ea9d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256eaa0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1256eaa3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256eaa6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256eaa9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1256eaac mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256eaaf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256eab2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1256eab5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256eab8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256eabb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256eabe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1256eac1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256eac4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256eac7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256eaca cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256eacd jne 0x1256eb9b */
  if (!C.zf) goto L_1256eb9b;
  /* 1256ead3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ead7 jae 0x1256eb34 */
  if (!C.cf) goto L_1256eb34;
  /* 1256ead9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256eadc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256eadf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1256eae3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256eae6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256eae9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1256eaec add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1256eaef mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256eaf2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256eaf5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1256eaf8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1256eafa jne 0x1256eb12 */
  if (!C.zf) goto L_1256eb12;
  /* 1256eafc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256eb01 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256eb04 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256eb06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256eb09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1256eb0b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1256eb0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256eb10 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1256eb12:;
  /* 1256eb12 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256eb17 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256eb1a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256eb1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256eb1f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256eb22 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1256eb26 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1256eb28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256eb2b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256eb2e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1256eb32 jmp 0x1256eb9b */
  goto L_1256eb9b;
L_1256eb34:;
  /* 1256eb34 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256eb37 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256eb3a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1256eb3e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256eb41 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256eb44 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1256eb47 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1256eb4a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256eb4d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256eb50 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1256eb53 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1256eb55 jne 0x1256eb72 */
  if (!C.zf) goto L_1256eb72;
  /* 1256eb57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256eb5a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256eb5d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256eb62 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256eb64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256eb67 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256eb6a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1256eb6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256eb6f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1256eb72:;
  /* 1256eb72 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256eb75 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256eb78 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256eb7d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256eb7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256eb82 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256eb85 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1256eb8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1256eb8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256eb91 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1256eb94 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1256eb9b:;
  /* 1256eb9b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256eb9e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256eba1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1256eba3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256eba6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256eba9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256ebac mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1256ebaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256ebb2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1256ebb4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256ebb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256ebba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1256ebbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256ebbf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ebc2 jne 0x1256ed29 */
  if (!C.zf) goto L_1256ed29;
  /* 1256ebc8 cmp dword ptr [0x12598360], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12598360))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ebcf je 0x1256ed18 */
  if (C.zf) goto L_1256ed18;
  /* 1256ebd5 mov eax, dword ptr [0x12598358] */
  EAX = (r32((uint32_t)(0x12598358)));
  /* 1256ebda shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1256ebdd mov ecx, dword ptr [0x12598360] */
  ECX = (r32((uint32_t)(0x12598360)));
  /* 1256ebe3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1256ebe6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ebe8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1256ebeb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1256ebf0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1256ebf5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ebf8 push eax */
  push32((uint32_t)(EAX));
  /* 1256ebf9 call dword ptr [0x12599360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599360))), 0x1256ebffu);
  /* 1256ebff mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256ec04 mov ecx, dword ptr [0x12598358] */
  ECX = (r32((uint32_t)(0x12598358)));
  /* 1256ec0a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256ec0c mov eax, dword ptr [0x12598360] */
  EAX = (r32((uint32_t)(0x12598360)));
  /* 1256ec11 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1256ec14 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1256ec16 mov edx, dword ptr [0x12598360] */
  EDX = (r32((uint32_t)(0x12598360)));
  /* 1256ec1c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1256ec1f mov eax, dword ptr [0x12598360] */
  EAX = (r32((uint32_t)(0x12598360)));
  /* 1256ec24 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1256ec27 mov edx, dword ptr [0x12598358] */
  EDX = (r32((uint32_t)(0x12598358)));
  /* 1256ec2d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1256ec38 mov eax, dword ptr [0x12598360] */
  EAX = (r32((uint32_t)(0x12598360)));
  /* 1256ec3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1256ec40 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1256ec43 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1256ec46 mov eax, dword ptr [0x12598360] */
  EAX = (r32((uint32_t)(0x12598360)));
  /* 1256ec4b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1256ec4e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1256ec51 mov edx, dword ptr [0x12598360] */
  EDX = (r32((uint32_t)(0x12598360)));
  /* 1256ec57 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1256ec5a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1256ec5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256ec60 jne 0x1256ec76 */
  if (!C.zf) goto L_1256ec76;
  /* 1256ec62 mov edx, dword ptr [0x12598360] */
  EDX = (r32((uint32_t)(0x12598360)));
  /* 1256ec68 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1256ec6b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1256ec6d mov ecx, dword ptr [0x12598360] */
  ECX = (r32((uint32_t)(0x12598360)));
  /* 1256ec73 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1256ec76:;
  /* 1256ec76 mov edx, dword ptr [0x12598360] */
  EDX = (r32((uint32_t)(0x12598360)));
  /* 1256ec7c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ec80 jne 0x1256ed18 */
  if (!C.zf) goto L_1256ed18;
  /* 1256ec86 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1256ec8b push 0 */
  push32((uint32_t)(0x0u));
  /* 1256ec8d mov eax, dword ptr [0x12598360] */
  EAX = (r32((uint32_t)(0x12598360)));
  /* 1256ec92 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1256ec95 push ecx */
  push32((uint32_t)(ECX));
  /* 1256ec96 call dword ptr [0x12599360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599360))), 0x1256ec9cu);
  /* 1256ec9c mov edx, dword ptr [0x12598360] */
  EDX = (r32((uint32_t)(0x12598360)));
  /* 1256eca2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1256eca5 push eax */
  push32((uint32_t)(EAX));
  /* 1256eca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1256eca8 mov ecx, dword ptr [0x1259836c] */
  ECX = (r32((uint32_t)(0x1259836c)));
  /* 1256ecae push ecx */
  push32((uint32_t)(ECX));
  /* 1256ecaf call dword ptr [0x12599370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599370))), 0x1256ecb5u);
  /* 1256ecb5 mov edx, dword ptr [0x12598364] */
  EDX = (r32((uint32_t)(0x12598364)));
  /* 1256ecbb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1256ecbe mov eax, dword ptr [0x12598368] */
  EAX = (r32((uint32_t)(0x12598368)));
  /* 1256ecc3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ecc5 mov ecx, dword ptr [0x12598360] */
  ECX = (r32((uint32_t)(0x12598360)));
  /* 1256eccb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ecce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256ecd0 push eax */
  push32((uint32_t)(EAX));
  /* 1256ecd1 mov edx, dword ptr [0x12598360] */
  EDX = (r32((uint32_t)(0x12598360)));
  /* 1256ecd7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ecda push edx */
  push32((uint32_t)(EDX));
  /* 1256ecdb mov eax, dword ptr [0x12598360] */
  EAX = (r32((uint32_t)(0x12598360)));
  /* 1256ece0 push eax */
  push32((uint32_t)(EAX));
  /* 1256ece1 call 0x12572290 */
  push32(0x1256ece6u); f_12572290();
  /* 1256ece6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ece9 mov ecx, dword ptr [0x12598364] */
  ECX = (r32((uint32_t)(0x12598364)));
  /* 1256ecef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256ecf2 mov dword ptr [0x12598364], ecx */
  w32((uint32_t)(0x12598364), (ECX));
  /* 1256ecf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256ecfb cmp edx, dword ptr [0x12598360] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12598360))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ed01 jbe 0x1256ed0c */
  if ((C.cf||C.zf)) goto L_1256ed0c;
  /* 1256ed03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256ed06 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256ed09 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1256ed0c:;
  /* 1256ed0c mov ecx, dword ptr [0x12598368] */
  ECX = (r32((uint32_t)(0x12598368)));
  /* 1256ed12 mov dword ptr [0x1259835c], ecx */
  w32((uint32_t)(0x1259835c), (ECX));
L_1256ed18:;
  /* 1256ed18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256ed1b mov dword ptr [0x12598360], edx */
  w32((uint32_t)(0x12598360), (EDX));
  /* 1256ed21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256ed24 mov dword ptr [0x12598358], eax */
  w32((uint32_t)(0x12598358), (EAX));
L_1256ed29:;
  /* 1256ed29 mov esp, ebp */
  ESP = (EBP);
  /* 1256ed2b pop ebp */
  EBP = (pop32());
  /* 1256ed2c ret  */
  ESPCHK(0x1256e760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed30 @ 0x1256ed30 (1334 bytes, 427 insns) */
void f_1256ed30(void) {
  FTRACE(0x1256ed30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256ed30 push ebp */
  push32((uint32_t)(EBP));
  /* 1256ed31 mov ebp, esp */
  EBP = (ESP);
  /* 1256ed33 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256ed36 push esi */
  push32((uint32_t)(ESI));
  /* 1256ed37 mov eax, dword ptr [0x12598364] */
  EAX = (r32((uint32_t)(0x12598364)));
  /* 1256ed3c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1256ed3f mov ecx, dword ptr [0x12598368] */
  ECX = (r32((uint32_t)(0x12598368)));
  /* 1256ed45 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ed47 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1256ed4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256ed4d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ed50 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1256ed53 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1256ed56 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256ed59 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1256ed5c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256ed5f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1256ed62 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ed66 jge 0x1256ed7c */
  if ((C.sf==C.of)) goto L_1256ed7c;
  /* 1256ed68 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1256ed6b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256ed6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256ed70 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1256ed73 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1256ed7a jmp 0x1256ed91 */
  goto L_1256ed91;
L_1256ed7c:;
  /* 1256ed7c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1256ed83 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256ed86 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256ed89 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1256ed8c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256ed8e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1256ed91:;
  /* 1256ed91 mov ecx, dword ptr [0x1259835c] */
  ECX = (r32((uint32_t)(0x1259835c)));
  /* 1256ed97 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1256ed9a:;
  /* 1256ed9a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ed9d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256eda0 jae 0x1256edc6 */
  if (!C.cf) goto L_1256edc6;
  /* 1256eda2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256eda5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256eda8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1256edaa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256edad mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1256edb0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1256edb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1256edb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256edb7 je 0x1256edbb */
  if (C.zf) goto L_1256edbb;
  /* 1256edb9 jmp 0x1256edc6 */
  goto L_1256edc6;
L_1256edbb:;
  /* 1256edbb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256edbe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256edc1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1256edc4 jmp 0x1256ed9a */
  goto L_1256ed9a;
L_1256edc6:;
  /* 1256edc6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256edc9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256edcc jne 0x1256eead */
  if (!C.zf) goto L_1256eead;
  /* 1256edd2 mov eax, dword ptr [0x12598368] */
  EAX = (r32((uint32_t)(0x12598368)));
  /* 1256edd7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1256edda:;
  /* 1256edda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256eddd cmp ecx, dword ptr [0x1259835c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1259835c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ede3 jae 0x1256ee09 */
  if (!C.cf) goto L_1256ee09;
  /* 1256ede5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ede8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256edeb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1256eded mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256edf0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1256edf3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1256edf6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1256edf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1256edfa je 0x1256edfe */
  if (C.zf) goto L_1256edfe;
  /* 1256edfc jmp 0x1256ee09 */
  goto L_1256ee09;
L_1256edfe:;
  /* 1256edfe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ee01 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ee04 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1256ee07 jmp 0x1256edda */
  goto L_1256edda;
L_1256ee09:;
  /* 1256ee09 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ee0c cmp ecx, dword ptr [0x1259835c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1259835c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ee12 jne 0x1256eead */
  if (!C.zf) goto L_1256eead;
L_1256ee18:;
  /* 1256ee18 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ee1b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ee1e jae 0x1256ee36 */
  if (!C.cf) goto L_1256ee36;
  /* 1256ee20 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ee23 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ee27 je 0x1256ee2b */
  if (C.zf) goto L_1256ee2b;
  /* 1256ee29 jmp 0x1256ee36 */
  goto L_1256ee36;
L_1256ee2b:;
  /* 1256ee2b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ee2e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ee31 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1256ee34 jmp 0x1256ee18 */
  goto L_1256ee18;
L_1256ee36:;
  /* 1256ee36 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ee39 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ee3c jne 0x1256ee87 */
  if (!C.zf) goto L_1256ee87;
  /* 1256ee3e mov eax, dword ptr [0x12598368] */
  EAX = (r32((uint32_t)(0x12598368)));
  /* 1256ee43 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1256ee46:;
  /* 1256ee46 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ee49 cmp ecx, dword ptr [0x1259835c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1259835c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ee4f jae 0x1256ee67 */
  if (!C.cf) goto L_1256ee67;
  /* 1256ee51 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ee54 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ee58 je 0x1256ee5c */
  if (C.zf) goto L_1256ee5c;
  /* 1256ee5a jmp 0x1256ee67 */
  goto L_1256ee67;
L_1256ee5c:;
  /* 1256ee5c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ee5f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ee62 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1256ee65 jmp 0x1256ee46 */
  goto L_1256ee46;
L_1256ee67:;
  /* 1256ee67 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ee6a cmp ecx, dword ptr [0x1259835c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1259835c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ee70 jne 0x1256ee87 */
  if (!C.zf) goto L_1256ee87;
  /* 1256ee72 call 0x1256f270 */
  push32(0x1256ee77u); f_1256f270();
  /* 1256ee77 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1256ee7a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ee7e jne 0x1256ee87 */
  if (!C.zf) goto L_1256ee87;
  /* 1256ee80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1256ee82 jmp 0x1256f261 */
  goto L_1256f261;
L_1256ee87:;
  /* 1256ee87 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ee8a push edx */
  push32((uint32_t)(EDX));
  /* 1256ee8b call 0x1256f380 */
  push32(0x1256ee90u); f_1256f380();
  /* 1256ee90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ee93 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ee96 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1256ee99 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1256ee9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ee9e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1256eea1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256eea4 jne 0x1256eead */
  if (!C.zf) goto L_1256eead;
  /* 1256eea6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1256eea8 jmp 0x1256f261 */
  goto L_1256f261;
L_1256eead:;
  /* 1256eead mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256eeb0 mov dword ptr [0x1259835c], edx */
  w32((uint32_t)(0x1259835c), (EDX));
  /* 1256eeb6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256eeb9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1256eebc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1256eebf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256eec2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1256eec4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1256eec7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256eecb je 0x1256eef0 */
  if (C.zf) goto L_1256eef0;
  /* 1256eecd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256eed0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256eed3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256eed6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1256eeda mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256eedd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256eee0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1256eee3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1256eeea or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1256eeec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1256eeee jne 0x1256ef25 */
  if (!C.zf) goto L_1256ef25;
L_1256eef0:;
  /* 1256eef0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1256eef7:;
  /* 1256eef7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256eefa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256eefd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256ef00 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1256ef04 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256ef07 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256ef0a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1256ef0d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1256ef14 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1256ef16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1256ef18 jne 0x1256ef25 */
  if (!C.zf) goto L_1256ef25;
  /* 1256ef1a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256ef1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ef20 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1256ef23 jmp 0x1256eef7 */
  goto L_1256eef7;
L_1256ef25:;
  /* 1256ef25 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256ef28 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1256ef2e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256ef31 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1256ef38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1256ef3b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1256ef42 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256ef45 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256ef48 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256ef4b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1256ef4f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1256ef52 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ef56 jne 0x1256ef72 */
  if (!C.zf) goto L_1256ef72;
  /* 1256ef58 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1256ef5f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256ef62 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256ef65 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1256ef68 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1256ef6f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1256ef72:;
  /* 1256ef72 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ef76 jl 0x1256ef8b */
  if ((C.sf!=C.of)) goto L_1256ef8b;
  /* 1256ef78 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256ef7b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1256ef7d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1256ef80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256ef83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ef86 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1256ef89 jmp 0x1256ef72 */
  goto L_1256ef72;
L_1256ef8b:;
  /* 1256ef8b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256ef8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256ef91 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1256ef95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1256ef98 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256ef9b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1256ef9d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256efa0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1256efa3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256efa6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1256efa9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256efac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1256efaf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256efb3 jle 0x1256efbc */
  if ((C.zf||C.sf!=C.of)) goto L_1256efbc;
  /* 1256efb5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1256efbc:;
  /* 1256efbc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256efbf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256efc2 je 0x1256f1e0 */
  if (C.zf) goto L_1256f1e0;
  /* 1256efc8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256efcb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256efce mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256efd1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256efd4 jne 0x1256f0aa */
  if (!C.zf) goto L_1256f0aa;
  /* 1256efda cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256efde jge 0x1256f03f */
  if ((C.sf==C.of)) goto L_1256f03f;
  /* 1256efe0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256efe5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256efe8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256efea not eax */
  EAX = (~(EAX));
  /* 1256efec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256efef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256eff2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1256eff6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1256eff8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256effb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256effe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1256f002 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f005 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f008 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1256f00b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1256f00e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f011 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f014 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1256f017 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f01a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f01d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1256f021 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1256f023 jne 0x1256f03d */
  if (!C.zf) goto L_1256f03d;
  /* 1256f025 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256f02a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f02d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256f02f not eax */
  EAX = (~(EAX));
  /* 1256f031 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f034 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1256f036 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1256f038 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f03b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1256f03d:;
  /* 1256f03d jmp 0x1256f0aa */
  goto L_1256f0aa;
L_1256f03f:;
  /* 1256f03f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f042 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f045 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256f04a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256f04c not edx */
  EDX = (~(EDX));
  /* 1256f04e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f051 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f054 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1256f05b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1256f05d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f060 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f063 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1256f06a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f06d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f070 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1256f073 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1256f076 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f079 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f07c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1256f07f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f082 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f085 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1256f089 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256f08b jne 0x1256f0aa */
  if (!C.zf) goto L_1256f0aa;
  /* 1256f08d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f090 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f093 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256f098 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256f09a not edx */
  EDX = (~(EDX));
  /* 1256f09c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f09f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256f0a2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1256f0a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f0a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1256f0aa:;
  /* 1256f0aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f0ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1256f0b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f0b3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1256f0b6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1256f0b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f0bc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256f0bf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f0c2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1256f0c5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1256f0c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f0cc je 0x1256f1e0 */
  if (C.zf) goto L_1256f1e0;
  /* 1256f0d2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f0d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f0d8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1256f0db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1256f0de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f0e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1256f0e4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256f0e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1256f0ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f0ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1256f0f0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1256f0f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1256f0f6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f0f9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1256f0fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f0ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256f102 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f105 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1256f108 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f10b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f10e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256f111 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f114 jne 0x1256f1e0 */
  if (!C.zf) goto L_1256f1e0;
  /* 1256f11a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f11e jge 0x1256f17a */
  if ((C.sf==C.of)) goto L_1256f17a;
  /* 1256f120 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f123 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f126 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1256f12a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f12d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f130 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1256f133 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1256f135 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f138 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f13b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1256f13e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256f140 jne 0x1256f158 */
  if (!C.zf) goto L_1256f158;
  /* 1256f142 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256f147 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f14a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256f14c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f14f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1256f151 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1256f153 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f156 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1256f158:;
  /* 1256f158 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256f15d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f160 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256f162 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f165 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f168 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1256f16c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1256f16e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f171 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f174 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1256f178 jmp 0x1256f1e0 */
  goto L_1256f1e0;
L_1256f17a:;
  /* 1256f17a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f17d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f180 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1256f184 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f187 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f18a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1256f18d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1256f18f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f192 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f195 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1256f198 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256f19a jne 0x1256f1b7 */
  if (!C.zf) goto L_1256f1b7;
  /* 1256f19c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f19f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f1a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256f1a7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256f1a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f1ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256f1af or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1256f1b1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f1b4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1256f1b7:;
  /* 1256f1b7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f1ba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f1bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256f1c2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256f1c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f1c7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f1ca mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1256f1d1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1256f1d3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f1d6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f1d9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1256f1e0:;
  /* 1256f1e0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f1e4 je 0x1256f1fa */
  if (C.zf) goto L_1256f1fa;
  /* 1256f1e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f1e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256f1ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1256f1ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f1f1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f1f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256f1f7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1256f1fa:;
  /* 1256f1fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f1fd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f200 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1256f203 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256f206 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f209 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f20c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1256f20e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256f211 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f214 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f217 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f21a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1256f21d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f220 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1256f222 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f225 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1256f227 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f22a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f22d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1256f22f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256f231 jne 0x1256f253 */
  if (!C.zf) goto L_1256f253;
  /* 1256f233 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f236 cmp eax, dword ptr [0x12598360] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12598360))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f23c jne 0x1256f253 */
  if (!C.zf) goto L_1256f253;
  /* 1256f23e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f241 cmp ecx, dword ptr [0x12598358] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12598358))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f247 jne 0x1256f253 */
  if (!C.zf) goto L_1256f253;
  /* 1256f249 mov dword ptr [0x12598360], 0 */
  w32((uint32_t)(0x12598360), (0x0u));
L_1256f253:;
  /* 1256f253 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1256f256 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f259 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1256f25b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f25e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1256f261:;
  /* 1256f261 pop esi */
  ESI = (pop32());
  /* 1256f262 mov esp, ebp */
  ESP = (EBP);
  /* 1256f264 pop ebp */
  EBP = (pop32());
  /* 1256f265 ret  */
  ESPCHK(0x1256ed30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f270 @ 0x1256f270 (271 bytes, 78 insns) */
void f_1256f270(void) {
  FTRACE(0x1256f270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256f270 push ebp */
  push32((uint32_t)(EBP));
  /* 1256f271 mov ebp, esp */
  EBP = (ESP);
  /* 1256f273 push ecx */
  push32((uint32_t)(ECX));
  /* 1256f274 mov eax, dword ptr [0x12598364] */
  EAX = (r32((uint32_t)(0x12598364)));
  /* 1256f279 cmp eax, dword ptr [0x12598348] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12598348))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f27f jne 0x1256f2cb */
  if (!C.zf) goto L_1256f2cb;
  /* 1256f281 mov ecx, dword ptr [0x12598348] */
  ECX = (r32((uint32_t)(0x12598348)));
  /* 1256f287 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f28a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1256f28d push ecx */
  push32((uint32_t)(ECX));
  /* 1256f28e mov edx, dword ptr [0x12598368] */
  EDX = (r32((uint32_t)(0x12598368)));
  /* 1256f294 push edx */
  push32((uint32_t)(EDX));
  /* 1256f295 push 0 */
  push32((uint32_t)(0x0u));
  /* 1256f297 mov eax, dword ptr [0x1259836c] */
  EAX = (r32((uint32_t)(0x1259836c)));
  /* 1256f29c push eax */
  push32((uint32_t)(EAX));
  /* 1256f29d call dword ptr [0x1259934c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259934c))), 0x1256f2a3u);
  /* 1256f2a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1256f2a6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f2aa jne 0x1256f2b3 */
  if (!C.zf) goto L_1256f2b3;
  /* 1256f2ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1256f2ae jmp 0x1256f37b */
  goto L_1256f37b;
L_1256f2b3:;
  /* 1256f2b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f2b6 mov dword ptr [0x12598368], ecx */
  w32((uint32_t)(0x12598368), (ECX));
  /* 1256f2bc mov edx, dword ptr [0x12598348] */
  EDX = (r32((uint32_t)(0x12598348)));
  /* 1256f2c2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f2c5 mov dword ptr [0x12598348], edx */
  w32((uint32_t)(0x12598348), (EDX));
L_1256f2cb:;
  /* 1256f2cb mov eax, dword ptr [0x12598364] */
  EAX = (r32((uint32_t)(0x12598364)));
  /* 1256f2d0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1256f2d3 mov ecx, dword ptr [0x12598368] */
  ECX = (r32((uint32_t)(0x12598368)));
  /* 1256f2d9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f2db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1256f2de push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1256f2e3 push 8 */
  push32((uint32_t)(0x8u));
  /* 1256f2e5 mov edx, dword ptr [0x1259836c] */
  EDX = (r32((uint32_t)(0x1259836c)));
  /* 1256f2eb push edx */
  push32((uint32_t)(EDX));
  /* 1256f2ec call dword ptr [0x12599344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599344))), 0x1256f2f2u);
  /* 1256f2f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f2f5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1256f2f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f2fb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f2ff jne 0x1256f305 */
  if (!C.zf) goto L_1256f305;
  /* 1256f301 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1256f303 jmp 0x1256f37b */
  goto L_1256f37b;
L_1256f305:;
  /* 1256f305 push 4 */
  push32((uint32_t)(0x4u));
  /* 1256f307 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1256f30c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1256f311 push 0 */
  push32((uint32_t)(0x0u));
  /* 1256f313 call dword ptr [0x1259933c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259933c))), 0x1256f319u);
  /* 1256f319 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f31c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1256f31f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f322 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f326 jne 0x1256f342 */
  if (!C.zf) goto L_1256f342;
  /* 1256f328 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f32b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1256f32e push ecx */
  push32((uint32_t)(ECX));
  /* 1256f32f push 0 */
  push32((uint32_t)(0x0u));
  /* 1256f331 mov edx, dword ptr [0x1259836c] */
  EDX = (r32((uint32_t)(0x1259836c)));
  /* 1256f337 push edx */
  push32((uint32_t)(EDX));
  /* 1256f338 call dword ptr [0x12599370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599370))), 0x1256f33eu);
  /* 1256f33e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1256f340 jmp 0x1256f37b */
  goto L_1256f37b;
L_1256f342:;
  /* 1256f342 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f345 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1256f34b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f34e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1256f355 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f358 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1256f35f mov eax, dword ptr [0x12598364] */
  EAX = (r32((uint32_t)(0x12598364)));
  /* 1256f364 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f367 mov dword ptr [0x12598364], eax */
  w32((uint32_t)(0x12598364), (EAX));
  /* 1256f36c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f36f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1256f372 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1256f378 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1256f37b:;
  /* 1256f37b mov esp, ebp */
  ESP = (EBP);
  /* 1256f37d pop ebp */
  EBP = (pop32());
  /* 1256f37e ret  */
  ESPCHK(0x1256f270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f380 @ 0x1256f380 (494 bytes, 149 insns) */
void f_1256f380(void) {
  FTRACE(0x1256f380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256f380 push ebp */
  push32((uint32_t)(EBP));
  /* 1256f381 mov ebp, esp */
  EBP = (ESP);
  /* 1256f383 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f389 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1256f38c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1256f38f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f392 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1256f395 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1256f398 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1256f39f:;
  /* 1256f39f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f3a3 jl 0x1256f3b8 */
  if ((C.sf!=C.of)) goto L_1256f3b8;
  /* 1256f3a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256f3a8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1256f3aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1256f3ad mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256f3b0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f3b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1256f3b6 jmp 0x1256f39f */
  goto L_1256f39f;
L_1256f3b8:;
  /* 1256f3b8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256f3bb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1256f3c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f3c4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1256f3cb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1256f3ce mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1256f3d5 jmp 0x1256f3e0 */
  goto L_1256f3e0;
L_1256f3d7:;
  /* 1256f3d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f3da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f3dd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1256f3e0:;
  /* 1256f3e0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f3e4 jge 0x1256f406 */
  if ((C.sf==C.of)) goto L_1256f406;
  /* 1256f3e6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f3e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1256f3ec lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1256f3ef mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1256f3f2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f3f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f3f8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1256f3fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f3fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f401 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1256f404 jmp 0x1256f3d7 */
  goto L_1256f3d7;
L_1256f406:;
  /* 1256f406 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256f409 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1256f40c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f40f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1256f412 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f414 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1256f417 push 4 */
  push32((uint32_t)(0x4u));
  /* 1256f419 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1256f41e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1256f423 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f426 push edx */
  push32((uint32_t)(EDX));
  /* 1256f427 call dword ptr [0x1259933c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259933c))), 0x1256f42du);
  /* 1256f42d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1256f42f jne 0x1256f439 */
  if (!C.zf) goto L_1256f439;
  /* 1256f431 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1256f434 jmp 0x1256f56a */
  goto L_1256f56a;
L_1256f439:;
  /* 1256f439 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f43c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f441 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1256f444 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f447 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1256f44a jmp 0x1256f458 */
  goto L_1256f458;
L_1256f44c:;
  /* 1256f44c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f44f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f455 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1256f458:;
  /* 1256f458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f45b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f45e ja 0x1256f4bd */
  if ((!C.cf&&!C.zf)) goto L_1256f4bd;
  /* 1256f460 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f463 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1256f46a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f46d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1256f477 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f47a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f47d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1256f480 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f483 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1256f489 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f48c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f492 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f495 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1256f498 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f49b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f4a1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f4a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1256f4a7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f4aa add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f4af mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1256f4b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256f4b5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1256f4bb jmp 0x1256f44c */
  goto L_1256f44c;
L_1256f4bd:;
  /* 1256f4bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1256f4c0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f4c6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1256f4c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f4cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f4cf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f4d2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1256f4d5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f4d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1256f4db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1256f4de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f4e1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f4e4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1256f4e7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256f4ea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f4ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f4f0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1256f4f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f4f6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1256f4f9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1256f4fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f4ff mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f502 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1256f505 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256f508 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f50b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1256f513 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256f516 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f519 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1256f524 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f527 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1256f52b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f52e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1256f531 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1256f534 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f537 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1256f53a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1256f53c jne 0x1256f54d */
  if (!C.zf) goto L_1256f54d;
  /* 1256f53e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f541 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256f544 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1256f547 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f54a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1256f54d:;
  /* 1256f54d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256f552 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256f555 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256f557 not edx */
  EDX = (~(EDX));
  /* 1256f559 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f55c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1256f55f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1256f561 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f564 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1256f567 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1256f56a:;
  /* 1256f56a mov esp, ebp */
  ESP = (EBP);
  /* 1256f56c pop ebp */
  EBP = (pop32());
  /* 1256f56d ret  */
  ESPCHK(0x1256f380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f570 @ 0x1256f570 (1515 bytes, 489 insns) */
void f_1256f570(void) {
  FTRACE(0x1256f570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256f570 push ebp */
  push32((uint32_t)(EBP));
  /* 1256f571 mov ebp, esp */
  EBP = (ESP);
  /* 1256f573 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f576 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1256f579 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f57c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1256f57e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1256f581 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f584 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1256f587 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1256f58a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f58d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256f590 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f593 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1256f596 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1256f599 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1256f59c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1256f59f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f5a2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1256f5a8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f5ab lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1256f5b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1256f5b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1256f5b8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f5bb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1256f5be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f5c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1256f5c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f5c6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1256f5c9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f5cc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f5cf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1256f5d2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f5d5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1256f5d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1256f5da mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256f5dd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f5e0 jle 0x1256f896 */
  if ((C.zf||C.sf!=C.of)) goto L_1256f896;
  /* 1256f5e6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f5e9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1256f5ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256f5ee jne 0x1256f5fb */
  if (!C.zf) goto L_1256f5fb;
  /* 1256f5f0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256f5f3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f5f6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f5f9 jle 0x1256f602 */
  if ((C.zf||C.sf!=C.of)) goto L_1256f602;
L_1256f5fb:;
  /* 1256f5fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1256f5fd jmp 0x1256fb57 */
  goto L_1256fb57;
L_1256f602:;
  /* 1256f602 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f605 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1256f608 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f60b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1256f60e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f612 jbe 0x1256f61b */
  if ((C.cf||C.zf)) goto L_1256f61b;
  /* 1256f614 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1256f61b:;
  /* 1256f61b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f61e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f621 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256f624 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f627 jne 0x1256f6fd */
  if (!C.zf) goto L_1256f6fd;
  /* 1256f62d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f631 jae 0x1256f692 */
  if (!C.cf) goto L_1256f692;
  /* 1256f633 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256f638 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f63b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256f63d not edx */
  EDX = (~(EDX));
  /* 1256f63f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f642 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f645 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1256f649 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1256f64b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f64e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f651 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1256f655 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f658 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f65b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1256f65e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1256f661 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f664 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f667 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1256f66a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f66d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f670 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1256f674 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256f676 jne 0x1256f690 */
  if (!C.zf) goto L_1256f690;
  /* 1256f678 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256f67d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f680 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256f682 not edx */
  EDX = (~(EDX));
  /* 1256f684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f687 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1256f689 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1256f68b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f68e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1256f690:;
  /* 1256f690 jmp 0x1256f6fd */
  goto L_1256f6fd;
L_1256f692:;
  /* 1256f692 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f695 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f698 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256f69d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256f69f not eax */
  EAX = (~(EAX));
  /* 1256f6a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f6a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f6a7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1256f6ae and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1256f6b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f6b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f6b6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1256f6bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f6c0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f6c3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1256f6c6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1256f6c9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f6cc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f6cf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1256f6d2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f6d5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f6d8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1256f6dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1256f6de jne 0x1256f6fd */
  if (!C.zf) goto L_1256f6fd;
  /* 1256f6e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f6e3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f6e6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256f6eb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256f6ed not eax */
  EAX = (~(EAX));
  /* 1256f6ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f6f2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256f6f5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1256f6f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f6fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1256f6fd:;
  /* 1256f6fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f700 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1256f703 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f706 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256f709 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1256f70c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f70f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1256f712 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f715 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1256f718 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1256f71b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256f71e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f721 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f724 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1256f727 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f72b jle 0x1256f877 */
  if ((C.zf||C.sf!=C.of)) goto L_1256f877;
  /* 1256f731 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f734 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f737 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1256f73a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f73d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1256f740 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f743 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1256f746 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f74a jbe 0x1256f753 */
  if ((C.cf||C.zf)) goto L_1256f753;
  /* 1256f74c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1256f753:;
  /* 1256f753 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f756 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256f759 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1256f75c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1256f75f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f762 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f765 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256f768 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1256f76b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f76e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f771 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1256f774 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256f777 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f77a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1256f77d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f780 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256f783 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f786 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1256f789 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f78c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f78f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256f792 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f795 jne 0x1256f863 */
  if (!C.zf) goto L_1256f863;
  /* 1256f79b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f79f jae 0x1256f7fc */
  if (!C.cf) goto L_1256f7fc;
  /* 1256f7a1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f7a4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f7a7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1256f7ab mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f7ae add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f7b1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1256f7b4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1256f7b7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f7ba add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f7bd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1256f7c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1256f7c2 jne 0x1256f7da */
  if (!C.zf) goto L_1256f7da;
  /* 1256f7c4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256f7c9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f7cc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256f7ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f7d1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1256f7d3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1256f7d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f7d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1256f7da:;
  /* 1256f7da mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256f7df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f7e2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256f7e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f7e7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f7ea mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1256f7ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1256f7f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f7f3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f7f6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1256f7fa jmp 0x1256f863 */
  goto L_1256f863;
L_1256f7fc:;
  /* 1256f7fc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f7ff add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f802 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1256f806 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f809 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f80c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1256f80f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1256f812 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f815 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f818 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1256f81b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1256f81d jne 0x1256f83a */
  if (!C.zf) goto L_1256f83a;
  /* 1256f81f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f822 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f825 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256f82a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256f82c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f82f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256f832 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1256f834 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f837 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1256f83a:;
  /* 1256f83a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f83d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f840 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256f845 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256f847 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f84a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f84d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1256f854 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1256f856 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f859 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f85c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1256f863:;
  /* 1256f863 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f866 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f869 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1256f86b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f86e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f871 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f874 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1256f877:;
  /* 1256f877 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256f87a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f87d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f880 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1256f882 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256f885 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f888 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f88b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f88e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1256f891 jmp 0x1256fb52 */
  goto L_1256fb52;
L_1256f896:;
  /* 1256f896 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256f899 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f89c jge 0x1256fb52 */
  if ((C.sf==C.of)) goto L_1256fb52;
  /* 1256f8a2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256f8a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f8a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f8ab mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1256f8ad mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1256f8b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f8b3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f8b6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f8b9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1256f8bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256f8bf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f8c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1256f8c5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256f8c8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f8cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1256f8ce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256f8d1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1256f8d4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f8d7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1256f8da cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f8de jbe 0x1256f8e7 */
  if ((C.cf||C.zf)) goto L_1256f8e7;
  /* 1256f8e0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1256f8e7:;
  /* 1256f8e7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f8ea and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1256f8ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1256f8ef jne 0x1256fa30 */
  if (!C.zf) goto L_1256fa30;
  /* 1256f8f5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1256f8f8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1256f8fb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f8fe mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1256f901 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f905 jbe 0x1256f90e */
  if ((C.cf||C.zf)) goto L_1256f90e;
  /* 1256f907 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1256f90e:;
  /* 1256f90e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f911 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f914 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256f917 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f91a jne 0x1256f9f0 */
  if (!C.zf) goto L_1256f9f0;
  /* 1256f920 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256f924 jae 0x1256f985 */
  if (!C.cf) goto L_1256f985;
  /* 1256f926 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256f92b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f92e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256f930 not edx */
  EDX = (~(EDX));
  /* 1256f932 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f935 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f938 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1256f93c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1256f93e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f941 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f944 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1256f948 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f94b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f94e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1256f951 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1256f954 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f957 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f95a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1256f95d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f960 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f963 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1256f967 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256f969 jne 0x1256f983 */
  if (!C.zf) goto L_1256f983;
  /* 1256f96b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256f970 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f973 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256f975 not edx */
  EDX = (~(EDX));
  /* 1256f977 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f97a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1256f97c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1256f97e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f981 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1256f983:;
  /* 1256f983 jmp 0x1256f9f0 */
  goto L_1256f9f0;
L_1256f985:;
  /* 1256f985 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f988 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f98b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256f990 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256f992 not eax */
  EAX = (~(EAX));
  /* 1256f994 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f997 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f99a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1256f9a1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1256f9a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256f9a6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f9a9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1256f9b0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f9b3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f9b6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1256f9b9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1256f9bc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f9bf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f9c2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1256f9c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256f9c8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256f9cb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1256f9cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1256f9d1 jne 0x1256f9f0 */
  if (!C.zf) goto L_1256f9f0;
  /* 1256f9d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1256f9d6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256f9d9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256f9de shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256f9e0 not eax */
  EAX = (~(EAX));
  /* 1256f9e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f9e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256f9e8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1256f9ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256f9ed mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1256f9f0:;
  /* 1256f9f0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f9f3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1256f9f6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256f9f9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256f9fc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1256f9ff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256fa02 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1256fa05 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1256fa08 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1256fa0b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1256fa0e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256fa11 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fa14 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1256fa17 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256fa1a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1256fa1d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256fa20 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1256fa23 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256fa27 jbe 0x1256fa30 */
  if ((C.cf||C.zf)) goto L_1256fa30;
  /* 1256fa29 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1256fa30:;
  /* 1256fa30 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256fa33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256fa36 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1256fa39 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1256fa3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256fa3f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256fa42 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256fa45 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1256fa48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256fa4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256fa4e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1256fa51 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256fa54 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256fa57 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1256fa5a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256fa5d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256fa60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256fa63 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1256fa66 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256fa69 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256fa6c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256fa6f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256fa72 jne 0x1256fb3e */
  if (!C.zf) goto L_1256fb3e;
  /* 1256fa78 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256fa7c jae 0x1256fad8 */
  if (!C.cf) goto L_1256fad8;
  /* 1256fa7e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256fa81 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fa84 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1256fa88 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256fa8b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fa8e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1256fa91 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1256fa93 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256fa96 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fa99 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1256fa9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256fa9e jne 0x1256fab6 */
  if (!C.zf) goto L_1256fab6;
  /* 1256faa0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256faa5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256faa8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256faaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256faad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1256faaf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1256fab1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256fab4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1256fab6:;
  /* 1256fab6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256fabb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256fabe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256fac0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256fac3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256fac6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1256faca or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1256facc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256facf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256fad2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1256fad6 jmp 0x1256fb3e */
  goto L_1256fb3e;
L_1256fad8:;
  /* 1256fad8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256fadb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fade movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1256fae2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256fae5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fae8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1256faeb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1256faed mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256faf0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256faf3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1256faf6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256faf8 jne 0x1256fb15 */
  if (!C.zf) goto L_1256fb15;
  /* 1256fafa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256fafd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256fb00 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1256fb05 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1256fb07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256fb0a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1256fb0d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1256fb0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1256fb12 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1256fb15:;
  /* 1256fb15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1256fb18 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256fb1b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256fb20 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256fb22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256fb25 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256fb28 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1256fb2f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1256fb31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256fb34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1256fb37 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1256fb3e:;
  /* 1256fb3e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256fb41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256fb44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1256fb46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256fb49 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fb4c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1256fb4f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1256fb52:;
  /* 1256fb52 mov eax, 1 */
  EAX = (0x1u);
L_1256fb57:;
  /* 1256fb57 mov esp, ebp */
  ESP = (EBP);
  /* 1256fb59 pop ebp */
  EBP = (pop32());
  /* 1256fb5a ret  */
  ESPCHK(0x1256f570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb60 @ 0x1256fb60 (304 bytes, 79 insns) */
void f_1256fb60(void) {
  FTRACE(0x1256fb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256fb60 push ebp */
  push32((uint32_t)(EBP));
  /* 1256fb61 mov ebp, esp */
  EBP = (ESP);
  /* 1256fb63 push ecx */
  push32((uint32_t)(ECX));
  /* 1256fb64 cmp dword ptr [0x12598360], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12598360))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256fb6b je 0x1256fc8c */
  if (C.zf) goto L_1256fc8c;
  /* 1256fb71 mov eax, dword ptr [0x12598358] */
  EAX = (r32((uint32_t)(0x12598358)));
  /* 1256fb76 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1256fb79 mov ecx, dword ptr [0x12598360] */
  ECX = (r32((uint32_t)(0x12598360)));
  /* 1256fb7f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1256fb82 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fb84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1256fb87 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1256fb8c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1256fb91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1256fb94 push eax */
  push32((uint32_t)(EAX));
  /* 1256fb95 call dword ptr [0x12599360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599360))), 0x1256fb9bu);
  /* 1256fb9b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1256fba0 mov ecx, dword ptr [0x12598358] */
  ECX = (r32((uint32_t)(0x12598358)));
  /* 1256fba6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1256fba8 mov eax, dword ptr [0x12598360] */
  EAX = (r32((uint32_t)(0x12598360)));
  /* 1256fbad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1256fbb0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1256fbb2 mov edx, dword ptr [0x12598360] */
  EDX = (r32((uint32_t)(0x12598360)));
  /* 1256fbb8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1256fbbb mov eax, dword ptr [0x12598360] */
  EAX = (r32((uint32_t)(0x12598360)));
  /* 1256fbc0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1256fbc3 mov edx, dword ptr [0x12598358] */
  EDX = (r32((uint32_t)(0x12598358)));
  /* 1256fbc9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1256fbd4 mov eax, dword ptr [0x12598360] */
  EAX = (r32((uint32_t)(0x12598360)));
  /* 1256fbd9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1256fbdc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1256fbdf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1256fbe2 mov eax, dword ptr [0x12598360] */
  EAX = (r32((uint32_t)(0x12598360)));
  /* 1256fbe7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1256fbea mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1256fbed mov edx, dword ptr [0x12598360] */
  EDX = (r32((uint32_t)(0x12598360)));
  /* 1256fbf3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1256fbf6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1256fbfa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1256fbfc jne 0x1256fc12 */
  if (!C.zf) goto L_1256fc12;
  /* 1256fbfe mov edx, dword ptr [0x12598360] */
  EDX = (r32((uint32_t)(0x12598360)));
  /* 1256fc04 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1256fc07 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1256fc09 mov ecx, dword ptr [0x12598360] */
  ECX = (r32((uint32_t)(0x12598360)));
  /* 1256fc0f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1256fc12:;
  /* 1256fc12 mov edx, dword ptr [0x12598360] */
  EDX = (r32((uint32_t)(0x12598360)));
  /* 1256fc18 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256fc1c jne 0x1256fc82 */
  if (!C.zf) goto L_1256fc82;
  /* 1256fc1e cmp dword ptr [0x12598364], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12598364))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256fc25 jle 0x1256fc82 */
  if ((C.zf||C.sf!=C.of)) goto L_1256fc82;
  /* 1256fc27 mov eax, dword ptr [0x12598360] */
  EAX = (r32((uint32_t)(0x12598360)));
  /* 1256fc2c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1256fc2f push ecx */
  push32((uint32_t)(ECX));
  /* 1256fc30 push 0 */
  push32((uint32_t)(0x0u));
  /* 1256fc32 mov edx, dword ptr [0x1259836c] */
  EDX = (r32((uint32_t)(0x1259836c)));
  /* 1256fc38 push edx */
  push32((uint32_t)(EDX));
  /* 1256fc39 call dword ptr [0x12599370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599370))), 0x1256fc3fu);
  /* 1256fc3f mov eax, dword ptr [0x12598364] */
  EAX = (r32((uint32_t)(0x12598364)));
  /* 1256fc44 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1256fc47 mov ecx, dword ptr [0x12598368] */
  ECX = (r32((uint32_t)(0x12598368)));
  /* 1256fc4d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fc4f mov edx, dword ptr [0x12598360] */
  EDX = (r32((uint32_t)(0x12598360)));
  /* 1256fc55 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fc58 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256fc5a push ecx */
  push32((uint32_t)(ECX));
  /* 1256fc5b mov eax, dword ptr [0x12598360] */
  EAX = (r32((uint32_t)(0x12598360)));
  /* 1256fc60 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fc63 push eax */
  push32((uint32_t)(EAX));
  /* 1256fc64 mov ecx, dword ptr [0x12598360] */
  ECX = (r32((uint32_t)(0x12598360)));
  /* 1256fc6a push ecx */
  push32((uint32_t)(ECX));
  /* 1256fc6b call 0x12572290 */
  push32(0x1256fc70u); f_12572290();
  /* 1256fc70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fc73 mov edx, dword ptr [0x12598364] */
  EDX = (r32((uint32_t)(0x12598364)));
  /* 1256fc79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256fc7c mov dword ptr [0x12598364], edx */
  w32((uint32_t)(0x12598364), (EDX));
L_1256fc82:;
  /* 1256fc82 mov dword ptr [0x12598360], 0 */
  w32((uint32_t)(0x12598360), (0x0u));
L_1256fc8c:;
  /* 1256fc8c mov esp, ebp */
  ESP = (EBP);
  /* 1256fc8e pop ebp */
  EBP = (pop32());
  /* 1256fc8f ret  */
  ESPCHK(0x1256fb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc90 @ 0x1256fc90 (1565 bytes, 343 insns) */
void f_1256fc90(void) {
  FTRACE(0x1256fc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1256fc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1256fc91 mov ebp, esp */
  EBP = (ESP);
  /* 1256fc93 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256fc99 mov eax, dword ptr [0x12598364] */
  EAX = (r32((uint32_t)(0x12598364)));
  /* 1256fc9e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1256fca1 push eax */
  push32((uint32_t)(EAX));
  /* 1256fca2 mov ecx, dword ptr [0x12598368] */
  ECX = (r32((uint32_t)(0x12598368)));
  /* 1256fca8 push ecx */
  push32((uint32_t)(ECX));
  /* 1256fca9 call dword ptr [0x1259938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259938c))), 0x1256fcafu);
  /* 1256fcaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1256fcb1 je 0x1256fcbb */
  if (C.zf) goto L_1256fcbb;
  /* 1256fcb3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1256fcb6 jmp 0x125702a9 */
  goto L_125702a9;
L_1256fcbb:;
  /* 1256fcbb mov edx, dword ptr [0x12598368] */
  EDX = (r32((uint32_t)(0x12598368)));
  /* 1256fcc1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1256fcc7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1256fcd1 jmp 0x1256fce2 */
  goto L_1256fce2;
L_1256fcd3:;
  /* 1256fcd3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1256fcd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fcdc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1256fce2:;
  /* 1256fce2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1256fce8 cmp ecx, dword ptr [0x12598364] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12598364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256fcee jge 0x125702a7 */
  if ((C.sf==C.of)) goto L_125702a7;
  /* 1256fcf4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1256fcfa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1256fcfd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1256fd03 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1256fd08 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1256fd0e push ecx */
  push32((uint32_t)(ECX));
  /* 1256fd0f call dword ptr [0x1259938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259938c))), 0x1256fd15u);
  /* 1256fd15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1256fd17 je 0x1256fd23 */
  if (C.zf) goto L_1256fd23;
  /* 1256fd19 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1256fd1e jmp 0x125702a9 */
  goto L_125702a9;
L_1256fd23:;
  /* 1256fd23 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1256fd29 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1256fd2c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1256fd32 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1256fd38 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fd3e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1256fd41 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1256fd47 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1256fd4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1256fd4d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1256fd57 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1256fd61 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1256fd68 jmp 0x1256fd73 */
  goto L_1256fd73;
L_1256fd6a:;
  /* 1256fd6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1256fd6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fd70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1256fd73:;
  /* 1256fd73 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256fd77 jge 0x1257026b */
  if ((C.sf==C.of)) goto L_1257026b;
  /* 1256fd7d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1256fd87 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1256fd91 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1256fd9b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1256fda5 jmp 0x1256fdb6 */
  goto L_1256fdb6;
L_1256fda7:;
  /* 1256fda7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1256fdad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fdb0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1256fdb6:;
  /* 1256fdb6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256fdbd jge 0x1256fdd2 */
  if ((C.sf==C.of)) goto L_1256fdd2;
  /* 1256fdbf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1256fdc5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1256fdd0 jmp 0x1256fda7 */
  goto L_1256fda7;
L_1256fdd2:;
  /* 1256fdd2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256fdd6 jl 0x1257020d */
  if ((C.sf!=C.of)) goto L_1257020d;
  /* 1256fddc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1256fde1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1256fde7 push ecx */
  push32((uint32_t)(ECX));
  /* 1256fde8 call dword ptr [0x1259938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259938c))), 0x1256fdeeu);
  /* 1256fdee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1256fdf0 je 0x1256fdfc */
  if (C.zf) goto L_1256fdfc;
  /* 1256fdf2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1256fdf7 jmp 0x125702a9 */
  goto L_125702a9;
L_1256fdfc:;
  /* 1256fdfc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1256fe02 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1256fe05 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1256fe0f jmp 0x1256fe20 */
  goto L_1256fe20;
L_1256fe11:;
  /* 1256fe11 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1256fe17 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fe1a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1256fe20:;
  /* 1256fe20 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256fe27 jge 0x1256ffa4 */
  if ((C.sf==C.of)) goto L_1256ffa4;
  /* 1256fe2d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256fe30 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fe33 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1256fe39 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1256fe3f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fe45 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1256fe4b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1256fe51 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256fe55 jne 0x1256fe62 */
  if (!C.zf) goto L_1256fe62;
  /* 1256fe57 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1256fe5d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256fe60 je 0x1256fe6c */
  if (C.zf) goto L_1256fe6c;
L_1256fe62:;
  /* 1256fe62 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1256fe67 jmp 0x125702a9 */
  goto L_125702a9;
L_1256fe6c:;
  /* 1256fe6c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1256fe72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1256fe74 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1256fe7a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1256fe80 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1256fe86 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1256fe8c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1256fe8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1256fe91 je 0x1256fec9 */
  if (C.zf) goto L_1256fec9;
  /* 1256fe93 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1256fe99 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256fe9c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1256fea2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256feac jle 0x1256feb8 */
  if ((C.zf||C.sf!=C.of)) goto L_1256feb8;
  /* 1256feae mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1256feb3 jmp 0x125702a9 */
  goto L_125702a9;
L_1256feb8:;
  /* 1256feb8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1256febe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fec1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1256fec7 jmp 0x1256ff0b */
  goto L_1256ff0b;
L_1256fec9:;
  /* 1256fec9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1256fecf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1256fed2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1256fed5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1256fedb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256fee2 jle 0x1256feee */
  if ((C.zf||C.sf!=C.of)) goto L_1256feee;
  /* 1256fee4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1256feee:;
  /* 1256feee mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1256fef4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1256fefb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256fefe mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1256ff04 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1256ff0b:;
  /* 1256ff0b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ff12 jl 0x1256ff2d */
  if ((C.sf!=C.of)) goto L_1256ff2d;
  /* 1256ff14 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1256ff1a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1256ff1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1256ff1f jne 0x1256ff2d */
  if (!C.zf) goto L_1256ff2d;
  /* 1256ff21 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ff2b jle 0x1256ff37 */
  if ((C.zf||C.sf!=C.of)) goto L_1256ff37;
L_1256ff2d:;
  /* 1256ff2d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1256ff32 jmp 0x125702a9 */
  goto L_125702a9;
L_1256ff37:;
  /* 1256ff37 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1256ff3d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ff43 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1256ff46 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ff4c je 0x1256ff58 */
  if (C.zf) goto L_1256ff58;
  /* 1256ff4e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1256ff53 jmp 0x125702a9 */
  goto L_125702a9;
L_1256ff58:;
  /* 1256ff58 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1256ff5e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ff64 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1256ff6a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1256ff70 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ff76 jb 0x1256fe6c */
  if (C.cf) goto L_1256fe6c;
  /* 1256ff7c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1256ff82 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ff88 je 0x1256ff94 */
  if (C.zf) goto L_1256ff94;
  /* 1256ff8a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1256ff8f jmp 0x125702a9 */
  goto L_125702a9;
L_1256ff94:;
  /* 1256ff94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1256ff97 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ff9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1256ff9f jmp 0x1256fe11 */
  goto L_1256fe11;
L_1256ffa4:;
  /* 1256ffa4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ffa7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1256ffa9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ffaf je 0x1256ffbb */
  if (C.zf) goto L_1256ffbb;
  /* 1256ffb1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1256ffb6 jmp 0x125702a9 */
  goto L_125702a9;
L_1256ffbb:;
  /* 1256ffbb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1256ffbe mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1256ffc4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1256ffcb jmp 0x1256ffd6 */
  goto L_1256ffd6;
L_1256ffcd:;
  /* 1256ffcd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1256ffd0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1256ffd3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1256ffd6:;
  /* 1256ffd6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1256ffda jge 0x1257020d */
  if ((C.sf==C.of)) goto L_1257020d;
  /* 1256ffe0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1256ffea mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1256fff0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1256fff6:;
  /* 1256fff6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1256fffc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1256ffff mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12570005 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1257000b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570011 je 0x1257013a */
  if (C.zf) goto L_1257013a;
  /* 12570017 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1257001a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12570020 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570027 je 0x1257013a */
  if (C.zf) goto L_1257013a;
  /* 1257002d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12570033 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570039 jb 0x1257004e */
  if (C.cf) goto L_1257004e;
  /* 1257003b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12570041 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570046 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257004c jb 0x12570058 */
  if (C.cf) goto L_12570058;
L_1257004e:;
  /* 1257004e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12570053 jmp 0x125702a9 */
  goto L_125702a9;
L_12570058:;
  /* 12570058 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1257005e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12570064 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1257006a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12570070 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570073 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12570076 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12570079 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257007e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12570084:;
  /* 12570084 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12570087 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257008d je 0x125700ae */
  if (C.zf) goto L_125700ae;
  /* 1257008f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12570092 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570098 jne 0x1257009c */
  if (!C.zf) goto L_1257009c;
  /* 1257009a jmp 0x125700ae */
  goto L_125700ae;
L_1257009c:;
  /* 1257009c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257009f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125700a1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 125700a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125700a7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125700a9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125700ac jmp 0x12570084 */
  goto L_12570084;
L_125700ae:;
  /* 125700ae mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125700b1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125700b7 jne 0x125700c3 */
  if (!C.zf) goto L_125700c3;
  /* 125700b9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 125700be jmp 0x125702a9 */
  goto L_125702a9;
L_125700c3:;
  /* 125700c3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 125700c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125700cb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 125700ce sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125700d1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 125700d7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125700de jle 0x125700ea */
  if ((C.zf||C.sf!=C.of)) goto L_125700ea;
  /* 125700e0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_125700ea:;
  /* 125700ea mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 125700f0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125700f3 je 0x125700ff */
  if (C.zf) goto L_125700ff;
  /* 125700f5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 125700fa jmp 0x125702a9 */
  goto L_125702a9;
L_125700ff:;
  /* 125700ff mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12570105 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12570108 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257010e je 0x1257011a */
  if (C.zf) goto L_1257011a;
  /* 12570110 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12570115 jmp 0x125702a9 */
  goto L_125702a9;
L_1257011a:;
  /* 1257011a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12570120 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12570126 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1257012c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257012f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12570135 jmp 0x1256fff6 */
  goto L_1256fff6;
L_1257013a:;
  /* 1257013a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570141 je 0x125701b1 */
  if (C.zf) goto L_125701b1;
  /* 12570143 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570147 jge 0x1257017b */
  if ((C.sf==C.of)) goto L_1257017b;
  /* 12570149 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1257014e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12570151 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12570153 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12570159 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1257015b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12570161 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12570166 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12570169 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1257016b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12570171 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12570173 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12570179 jmp 0x125701b1 */
  goto L_125701b1;
L_1257017b:;
  /* 1257017b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1257017e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12570181 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12570186 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12570188 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1257018e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12570190 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12570196 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12570199 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257019c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125701a1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125701a3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 125701a9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125701ab mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_125701b1:;
  /* 125701b1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 125701b7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125701ba cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125701c0 jne 0x125701d4 */
  if (!C.zf) goto L_125701d4;
  /* 125701c2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125701c5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 125701cb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125701d2 je 0x125701de */
  if (C.zf) goto L_125701de;
L_125701d4:;
  /* 125701d4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 125701d9 jmp 0x125702a9 */
  goto L_125702a9;
L_125701de:;
  /* 125701de mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 125701e4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125701e7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125701ed je 0x125701f9 */
  if (C.zf) goto L_125701f9;
  /* 125701ef mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 125701f4 jmp 0x125702a9 */
  goto L_125702a9;
L_125701f9:;
  /* 125701f9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 125701ff add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570202 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12570208 jmp 0x1256ffcd */
  goto L_1256ffcd;
L_1257020d:;
  /* 1257020d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12570210 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12570216 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1257021c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570220 jne 0x1257023a */
  if (!C.zf) goto L_1257023a;
  /* 12570222 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12570225 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1257022b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12570231 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570238 je 0x12570241 */
  if (C.zf) goto L_12570241;
L_1257023a:;
  /* 1257023a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1257023f jmp 0x125702a9 */
  goto L_125702a9;
L_12570241:;
  /* 12570241 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12570247 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257024d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12570253 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12570256 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257025b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1257025e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12570261 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12570263 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12570266 jmp 0x1256fd6a */
  goto L_1256fd6a;
L_1257026b:;
  /* 1257026b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12570271 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12570277 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570279 jne 0x1257028c */
  if (!C.zf) goto L_1257028c;
  /* 1257027b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12570281 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12570287 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257028a je 0x12570293 */
  if (C.zf) goto L_12570293;
L_1257028c:;
  /* 1257028c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12570291 jmp 0x125702a9 */
  goto L_125702a9;
L_12570293:;
  /* 12570293 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12570299 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257029c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 125702a2 jmp 0x1256fcd3 */
  goto L_1256fcd3;
L_125702a7:;
  /* 125702a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125702a9:;
  /* 125702a9 mov esp, ebp */
  ESP = (EBP);
  /* 125702ab pop ebp */
  EBP = (pop32());
  /* 125702ac ret  */
  ESPCHK(0x1256fc90u, _esp0);
  ESP += 4; return;
}

/* FUN_100102b0 @ 0x125702b0 (250 bytes, 92 insns) */
void f_125702b0(void) {
  FTRACE(0x125702b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125702b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125702b1 mov ebp, esp */
  EBP = (ESP);
  /* 125702b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125702b6 push ebx */
  push32((uint32_t)(EBX));
  /* 125702b7 push esi */
  push32((uint32_t)(ESI));
  /* 125702b8 push edi */
  push32((uint32_t)(EDI));
  /* 125702b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 125702bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125702bf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 125702c2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_125702c5:;
  /* 125702c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125702c9 jne 0x125702e9 */
  if (!C.zf) goto L_125702e9;
  /* 125702cb push 0x125924c8 */
  push32((uint32_t)(0x125924c8u));
  /* 125702d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125702d2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 125702d4 push 0x125924bc */
  push32((uint32_t)(0x125924bcu));
  /* 125702d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125702db call 0x12569460 */
  push32(0x125702e0u); f_12569460();
  /* 125702e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125702e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125702e6 jne 0x125702e9 */
  if (!C.zf) goto L_125702e9;
  /* 125702e8 int3  */
  x86_unimpl("int3 @ 0x125702e8");
L_125702e9:;
  /* 125702e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125702eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125702ed jne 0x125702c5 */
  if (!C.zf) goto L_125702c5;
L_125702ef:;
  /* 125702ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125702f3 jne 0x12570313 */
  if (!C.zf) goto L_12570313;
  /* 125702f5 push 0x125924ac */
  push32((uint32_t)(0x125924acu));
  /* 125702fa push 0 */
  push32((uint32_t)(0x0u));
  /* 125702fc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 125702fe push 0x125924bc */
  push32((uint32_t)(0x125924bcu));
  /* 12570303 push 2 */
  push32((uint32_t)(0x2u));
  /* 12570305 call 0x12569460 */
  push32(0x1257030au); f_12569460();
  /* 1257030a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257030d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570310 jne 0x12570313 */
  if (!C.zf) goto L_12570313;
  /* 12570312 int3  */
  x86_unimpl("int3 @ 0x12570312");
L_12570313:;
  /* 12570313 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12570315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12570317 jne 0x125702ef */
  if (!C.zf) goto L_125702ef;
  /* 12570319 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1257031c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12570323 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570329 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1257032c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1257032f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570332 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12570334 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570337 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1257033e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12570341 push ecx */
  push32((uint32_t)(ECX));
  /* 12570342 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12570345 push edx */
  push32((uint32_t)(EDX));
  /* 12570346 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570349 push eax */
  push32((uint32_t)(EAX));
  /* 1257034a call 0x12571330 */
  push32(0x1257034fu); f_12571330();
  /* 1257034f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12570352 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12570355 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570358 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1257035b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257035e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570361 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12570364 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570367 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257036b jl 0x1257038f */
  if ((C.sf!=C.of)) goto L_1257038f;
  /* 1257036d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570370 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12570372 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12570375 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12570377 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1257037d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12570380 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570383 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12570385 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570388 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1257038b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1257038d jmp 0x125703a0 */
  goto L_125703a0;
L_1257038f:;
  /* 1257038f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570392 push edx */
  push32((uint32_t)(EDX));
  /* 12570393 push 0 */
  push32((uint32_t)(0x0u));
  /* 12570395 call 0x125710b0 */
  push32(0x1257039au); f_125710b0();
  /* 1257039a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257039d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_125703a0:;
  /* 125703a0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125703a3 pop edi */
  EDI = (pop32());
  /* 125703a4 pop esi */
  ESI = (pop32());
  /* 125703a5 pop ebx */
  EBX = (pop32());
  /* 125703a6 mov esp, ebp */
  ESP = (EBP);
  /* 125703a8 pop ebp */
  EBP = (pop32());
  /* 125703a9 ret  */
  ESPCHK(0x125702b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103b0 @ 0x125703b0 (183 bytes, 58 insns) */
void f_125703b0(void) {
  FTRACE(0x125703b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125703b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125703b1 mov ebp, esp */
  EBP = (ESP);
  /* 125703b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125703b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125703b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125703bc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125703c1 ja 0x125703da */
  if ((!C.cf&&!C.zf)) goto L_125703da;
  /* 125703c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125703c6 mov edx, dword ptr [0x12594c98] */
  EDX = (r32((uint32_t)(0x12594c98)));
  /* 125703cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125703ce mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 125703d2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 125703d5 jmp 0x12570463 */
  goto L_12570463;
L_125703da:;
  /* 125703da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125703dd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 125703e0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125703e6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125703ec mov edx, dword ptr [0x12594c98] */
  EDX = (r32((uint32_t)(0x12594c98)));
  /* 125703f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125703f4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 125703f8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 125703fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125703ff je 0x12570423 */
  if (C.zf) goto L_12570423;
  /* 12570401 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570404 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12570407 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1257040d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12570410 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12570413 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12570416 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1257041a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12570421 jmp 0x12570434 */
  goto L_12570434;
L_12570423:;
  /* 12570423 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12570426 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12570429 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1257042d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12570434:;
  /* 12570434 push 1 */
  push32((uint32_t)(0x1u));
  /* 12570436 push 0 */
  push32((uint32_t)(0x0u));
  /* 12570438 push 0 */
  push32((uint32_t)(0x0u));
  /* 1257043a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1257043d push ecx */
  push32((uint32_t)(ECX));
  /* 1257043e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12570441 push edx */
  push32((uint32_t)(EDX));
  /* 12570442 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12570445 push eax */
  push32((uint32_t)(EAX));
  /* 12570446 push 1 */
  push32((uint32_t)(0x1u));
  /* 12570448 call 0x125725d0 */
  push32(0x1257044du); f_125725d0();
  /* 1257044d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12570450 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12570452 jne 0x12570458 */
  if (!C.zf) goto L_12570458;
  /* 12570454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12570456 jmp 0x12570463 */
  goto L_12570463;
L_12570458:;
  /* 12570458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257045b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12570460 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12570463:;
  /* 12570463 mov esp, ebp */
  ESP = (EBP);
  /* 12570465 pop ebp */
  EBP = (pop32());
  /* 12570466 ret  */
  ESPCHK(0x125703b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010470 @ 0x12570470 (836 bytes, 238 insns) */
void f_12570470(void) {
  FTRACE(0x12570470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12570470 push ebp */
  push32((uint32_t)(EBP));
  /* 12570471 mov ebp, esp */
  EBP = (ESP);
  /* 12570473 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12570476 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12570478 call 0x1256dda0 */
  push32(0x1257047du); f_1256dda0();
  /* 1257047d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12570480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570483 push eax */
  push32((uint32_t)(EAX));
  /* 12570484 call 0x125707c0 */
  push32(0x12570489u); f_125707c0();
  /* 12570489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257048c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1257048f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570492 cmp ecx, dword ptr [0x125980a4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125980a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570498 jne 0x125704ab */
  if (!C.zf) goto L_125704ab;
  /* 1257049a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1257049c call 0x1256de40 */
  push32(0x125704a1u); f_1256de40();
  /* 125704a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125704a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125704a6 jmp 0x125707b0 */
  goto L_125707b0;
L_125704ab:;
  /* 125704ab cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125704af jne 0x125704cc */
  if (!C.zf) goto L_125704cc;
  /* 125704b1 call 0x125708a0 */
  push32(0x125704b6u); f_125708a0();
  /* 125704b6 call 0x12570920 */
  push32(0x125704bbu); f_12570920();
  /* 125704bb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125704bd call 0x1256de40 */
  push32(0x125704c2u); f_1256de40();
  /* 125704c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125704c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125704c7 jmp 0x125707b0 */
  goto L_125707b0;
L_125704cc:;
  /* 125704cc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125704d3 jmp 0x125704de */
  goto L_125704de;
L_125704d5:;
  /* 125704d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125704d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125704db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125704de:;
  /* 125704de cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125704e2 jae 0x1257062f */
  if (!C.cf) goto L_1257062f;
  /* 125704e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125704eb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125704ee mov ecx, dword ptr [eax + 0x12594eb8] */
  ECX = (r32((uint32_t)(EAX + 0x12594eb8)));
  /* 125704f4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125704f7 jne 0x1257062a */
  if (!C.zf) goto L_1257062a;
  /* 125704fd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12570504 jmp 0x1257050f */
  goto L_1257050f;
L_12570506:;
  /* 12570506 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570509 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257050c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1257050f:;
  /* 1257050f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570516 jae 0x12570524 */
  if (!C.cf) goto L_12570524;
  /* 12570518 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1257051b mov byte ptr [eax + 0x12598240], 0 */
  w8((uint32_t)(EAX + 0x12598240), (0x0u));
  /* 12570522 jmp 0x12570506 */
  goto L_12570506;
L_12570524:;
  /* 12570524 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1257052b jmp 0x12570536 */
  goto L_12570536;
L_1257052d:;
  /* 1257052d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12570530 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570533 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12570536:;
  /* 12570536 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257053a jae 0x125705b7 */
  if (!C.cf) goto L_125705b7;
  /* 1257053c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257053f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12570542 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12570545 lea ecx, [edx + eax*8 + 0x12594ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12594ec8));
  /* 1257054c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1257054f jmp 0x1257055a */
  goto L_1257055a;
L_12570551:;
  /* 12570551 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12570554 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570557 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1257055a:;
  /* 1257055a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257055d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1257055f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12570561 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12570563 je 0x125705b2 */
  if (C.zf) goto L_125705b2;
  /* 12570565 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12570568 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257056a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1257056d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257056f je 0x125705b2 */
  if (C.zf) goto L_125705b2;
  /* 12570571 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12570574 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12570576 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12570578 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1257057b jmp 0x12570586 */
  goto L_12570586;
L_1257057d:;
  /* 1257057d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570580 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570583 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12570586:;
  /* 12570586 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12570589 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1257058b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1257058e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570591 ja 0x125705b0 */
  if ((!C.cf&&!C.zf)) goto L_125705b0;
  /* 12570593 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570596 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12570599 mov dl, byte ptr [eax + 0x12598241] */
  DL = (r8((uint32_t)(EAX + 0x12598241)));
  /* 1257059f or dl, byte ptr [ecx + 0x12594eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12594eb0))); DL = (_r); fl_logic(_r,8); }
  /* 125705a5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125705a8 mov byte ptr [eax + 0x12598241], dl */
  w8((uint32_t)(EAX + 0x12598241), (DL));
  /* 125705ae jmp 0x1257057d */
  goto L_1257057d;
L_125705b0:;
  /* 125705b0 jmp 0x12570551 */
  goto L_12570551;
L_125705b2:;
  /* 125705b2 jmp 0x1257052d */
  goto L_1257052d;
L_125705b7:;
  /* 125705b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125705ba mov dword ptr [0x125980a4], ecx */
  w32((uint32_t)(0x125980a4), (ECX));
  /* 125705c0 mov dword ptr [0x1259812c], 1 */
  w32((uint32_t)(0x1259812c), (0x1u));
  /* 125705ca mov edx, dword ptr [0x125980a4] */
  EDX = (r32((uint32_t)(0x125980a4)));
  /* 125705d0 push edx */
  push32((uint32_t)(EDX));
  /* 125705d1 call 0x12570820 */
  push32(0x125705d6u); f_12570820();
  /* 125705d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125705d9 mov dword ptr [0x12598344], eax */
  w32((uint32_t)(0x12598344), (EAX));
  /* 125705de mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125705e5 jmp 0x125705f0 */
  goto L_125705f0;
L_125705e7:;
  /* 125705e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125705ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125705ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125705f0:;
  /* 125705f0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125705f4 jae 0x12570614 */
  if (!C.cf) goto L_12570614;
  /* 125705f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125705f9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125705fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125705ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12570602 mov cx, word ptr [ecx + eax*2 + 0x12594ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12594ebc)));
  /* 1257060a mov word ptr [edx*2 + 0x12598120], cx */
  w16((uint32_t)(EDX*2 + 0x12598120), (CX));
  /* 12570612 jmp 0x125705e7 */
  goto L_125705e7;
L_12570614:;
  /* 12570614 call 0x12570920 */
  push32(0x12570619u); f_12570920();
  /* 12570619 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1257061b call 0x1256de40 */
  push32(0x12570620u); f_1256de40();
  /* 12570620 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12570623 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12570625 jmp 0x125707b0 */
  goto L_125707b0;
L_1257062a:;
  /* 1257062a jmp 0x125704d5 */
  goto L_125704d5;
L_1257062f:;
  /* 1257062f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12570632 push edx */
  push32((uint32_t)(EDX));
  /* 12570633 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570636 push eax */
  push32((uint32_t)(EAX));
  /* 12570637 call dword ptr [0x12599338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599338))), 0x1257063du);
  /* 1257063d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570640 jne 0x12570782 */
  if (!C.zf) goto L_12570782;
  /* 12570646 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1257064d jmp 0x12570658 */
  goto L_12570658;
L_1257064f:;
  /* 1257064f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570652 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570655 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12570658:;
  /* 12570658 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257065f jae 0x1257066d */
  if (!C.cf) goto L_1257066d;
  /* 12570661 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570664 mov byte ptr [edx + 0x12598240], 0 */
  w8((uint32_t)(EDX + 0x12598240), (0x0u));
  /* 1257066b jmp 0x1257064f */
  goto L_1257064f;
L_1257066d:;
  /* 1257066d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570670 mov dword ptr [0x125980a4], eax */
  w32((uint32_t)(0x125980a4), (EAX));
  /* 12570675 mov dword ptr [0x12598344], 0 */
  w32((uint32_t)(0x12598344), (0x0u));
  /* 1257067f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570683 jbe 0x1257073e */
  if ((C.cf||C.zf)) goto L_1257073e;
  /* 12570689 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1257068c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1257068f jmp 0x1257069a */
  goto L_1257069a;
L_12570691:;
  /* 12570691 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12570694 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570697 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1257069a:;
  /* 1257069a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1257069d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1257069f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125706a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125706a3 je 0x125706ec */
  if (C.zf) goto L_125706ec;
  /* 125706a5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125706a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125706aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125706ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125706af je 0x125706ec */
  if (C.zf) goto L_125706ec;
  /* 125706b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125706b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125706b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125706b8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125706bb jmp 0x125706c6 */
  goto L_125706c6;
L_125706bd:;
  /* 125706bd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125706c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125706c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125706c6:;
  /* 125706c6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125706c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125706cb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 125706ce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125706d1 ja 0x125706ea */
  if ((!C.cf&&!C.zf)) goto L_125706ea;
  /* 125706d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125706d6 mov cl, byte ptr [eax + 0x12598241] */
  CL = (r8((uint32_t)(EAX + 0x12598241)));
  /* 125706dc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 125706df mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125706e2 mov byte ptr [edx + 0x12598241], cl */
  w8((uint32_t)(EDX + 0x12598241), (CL));
  /* 125706e8 jmp 0x125706bd */
  goto L_125706bd;
L_125706ea:;
  /* 125706ea jmp 0x12570691 */
  goto L_12570691;
L_125706ec:;
  /* 125706ec mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 125706f3 jmp 0x125706fe */
  goto L_125706fe;
L_125706f5:;
  /* 125706f5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125706f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125706fb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125706fe:;
  /* 125706fe cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570705 jae 0x1257071e */
  if (!C.cf) goto L_1257071e;
  /* 12570707 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1257070a mov dl, byte ptr [ecx + 0x12598241] */
  DL = (r8((uint32_t)(ECX + 0x12598241)));
  /* 12570710 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12570713 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12570716 mov byte ptr [eax + 0x12598241], dl */
  w8((uint32_t)(EAX + 0x12598241), (DL));
  /* 1257071c jmp 0x125706f5 */
  goto L_125706f5;
L_1257071e:;
  /* 1257071e mov ecx, dword ptr [0x125980a4] */
  ECX = (r32((uint32_t)(0x125980a4)));
  /* 12570724 push ecx */
  push32((uint32_t)(ECX));
  /* 12570725 call 0x12570820 */
  push32(0x1257072au); f_12570820();
  /* 1257072a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257072d mov dword ptr [0x12598344], eax */
  w32((uint32_t)(0x12598344), (EAX));
  /* 12570732 mov dword ptr [0x1259812c], 1 */
  w32((uint32_t)(0x1259812c), (0x1u));
  /* 1257073c jmp 0x12570748 */
  goto L_12570748;
L_1257073e:;
  /* 1257073e mov dword ptr [0x1259812c], 0 */
  w32((uint32_t)(0x1259812c), (0x0u));
L_12570748:;
  /* 12570748 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1257074f jmp 0x1257075a */
  goto L_1257075a;
L_12570751:;
  /* 12570751 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12570754 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570757 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1257075a:;
  /* 1257075a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257075e jae 0x1257076f */
  if (!C.cf) goto L_1257076f;
  /* 12570760 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12570763 mov word ptr [eax*2 + 0x12598120], 0 */
  w16((uint32_t)(EAX*2 + 0x12598120), (0x0u));
  /* 1257076d jmp 0x12570751 */
  goto L_12570751;
L_1257076f:;
  /* 1257076f call 0x12570920 */
  push32(0x12570774u); f_12570920();
  /* 12570774 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12570776 call 0x1256de40 */
  push32(0x1257077bu); f_1256de40();
  /* 1257077b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257077e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12570780 jmp 0x125707b0 */
  goto L_125707b0;
L_12570782:;
  /* 12570782 cmp dword ptr [0x12596bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570789 je 0x125707a3 */
  if (C.zf) goto L_125707a3;
  /* 1257078b call 0x125708a0 */
  push32(0x12570790u); f_125708a0();
  /* 12570790 call 0x12570920 */
  push32(0x12570795u); f_12570920();
  /* 12570795 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12570797 call 0x1256de40 */
  push32(0x1257079cu); f_1256de40();
  /* 1257079c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257079f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125707a1 jmp 0x125707b0 */
  goto L_125707b0;
L_125707a3:;
  /* 125707a3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125707a5 call 0x1256de40 */
  push32(0x125707aau); f_1256de40();
  /* 125707aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125707ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_125707b0:;
  /* 125707b0 mov esp, ebp */
  ESP = (EBP);
  /* 125707b2 pop ebp */
  EBP = (pop32());
  /* 125707b3 ret  */
  ESPCHK(0x12570470u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x125707c0 (89 bytes, 21 insns) */
void f_125707c0(void) {
  FTRACE(0x125707c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125707c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125707c1 mov ebp, esp */
  EBP = (ESP);
  /* 125707c3 mov dword ptr [0x12596bc0], 0 */
  w32((uint32_t)(0x12596bc0), (0x0u));
  /* 125707cd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125707d1 jne 0x125707e5 */
  if (!C.zf) goto L_125707e5;
  /* 125707d3 mov dword ptr [0x12596bc0], 1 */
  w32((uint32_t)(0x12596bc0), (0x1u));
  /* 125707dd call dword ptr [0x12599330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599330))), 0x125707e3u);
  /* 125707e3 jmp 0x12570817 */
  goto L_12570817;
L_125707e5:;
  /* 125707e5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125707e9 jne 0x125707fd */
  if (!C.zf) goto L_125707fd;
  /* 125707eb mov dword ptr [0x12596bc0], 1 */
  w32((uint32_t)(0x12596bc0), (0x1u));
  /* 125707f5 call dword ptr [0x12599340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599340))), 0x125707fbu);
  /* 125707fb jmp 0x12570817 */
  goto L_12570817;
L_125707fd:;
  /* 125707fd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570801 jne 0x12570814 */
  if (!C.zf) goto L_12570814;
  /* 12570803 mov dword ptr [0x12596bc0], 1 */
  w32((uint32_t)(0x12596bc0), (0x1u));
  /* 1257080d mov eax, dword ptr [0x12596be0] */
  EAX = (r32((uint32_t)(0x12596be0)));
  /* 12570812 jmp 0x12570817 */
  goto L_12570817;
L_12570814:;
  /* 12570814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12570817:;
  /* 12570817 pop ebp */
  EBP = (pop32());
  /* 12570818 ret  */
  ESPCHK(0x125707c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010820 @ 0x12570820 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12570820(void) {
  FTRACE(0x12570820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12570820 push ebp */
  push32((uint32_t)(EBP));
  /* 12570821 mov ebp, esp */
  EBP = (ESP);
  /* 12570823 push ecx */
  push32((uint32_t)(ECX));
  /* 12570824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570827 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1257082a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257082d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12570833 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12570836 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257083a ja 0x1257086a */
  if ((!C.cf&&!C.zf)) goto L_1257086a;
  /* 1257083c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257083f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12570841 mov dl, byte ptr [eax + 0x12570884] */
  DL = (r8((uint32_t)(EAX + 0x12570884)));
  /* 12570847 jmp dword ptr [edx*4 + 0x12570870] */
  switch (EDX) {
    case 0: goto L_1257084e;
    case 1: goto L_12570855;
    case 2: goto L_1257085c;
    case 3: goto L_12570863;
    case 4: goto L_1257086a;
    default: x86_unimpl("switch@0x12570847 out of table"); return;
  }
L_1257084e:;
  /* 1257084e mov eax, 0x411 */
  EAX = (0x411u);
  /* 12570853 jmp 0x1257086c */
  goto L_1257086c;
L_12570855:;
  /* 12570855 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1257085a jmp 0x1257086c */
  goto L_1257086c;
L_1257085c:;
  /* 1257085c mov eax, 0x412 */
  EAX = (0x412u);
  /* 12570861 jmp 0x1257086c */
  goto L_1257086c;
L_12570863:;
  /* 12570863 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12570868 jmp 0x1257086c */
  goto L_1257086c;
L_1257086a:;
  /* 1257086a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1257086c:;
  /* 1257086c mov esp, ebp */
  ESP = (EBP);
  /* 1257086e pop ebp */
  EBP = (pop32());
  /* 1257086f ret  */
  ESPCHK(0x12570820u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x125708a0 (116 bytes, 29 insns) */
void f_125708a0(void) {
  FTRACE(0x125708a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125708a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125708a1 mov ebp, esp */
  EBP = (ESP);
  /* 125708a3 push ecx */
  push32((uint32_t)(ECX));
  /* 125708a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125708ab jmp 0x125708b6 */
  goto L_125708b6;
L_125708ad:;
  /* 125708ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125708b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125708b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125708b6:;
  /* 125708b6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125708bd jge 0x125708cb */
  if ((C.sf==C.of)) goto L_125708cb;
  /* 125708bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125708c2 mov byte ptr [ecx + 0x12598240], 0 */
  w8((uint32_t)(ECX + 0x12598240), (0x0u));
  /* 125708c9 jmp 0x125708ad */
  goto L_125708ad;
L_125708cb:;
  /* 125708cb mov dword ptr [0x125980a4], 0 */
  w32((uint32_t)(0x125980a4), (0x0u));
  /* 125708d5 mov dword ptr [0x1259812c], 0 */
  w32((uint32_t)(0x1259812c), (0x0u));
  /* 125708df mov dword ptr [0x12598344], 0 */
  w32((uint32_t)(0x12598344), (0x0u));
  /* 125708e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125708f0 jmp 0x125708fb */
  goto L_125708fb;
L_125708f2:;
  /* 125708f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125708f5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125708f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125708fb:;
  /* 125708fb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125708ff jge 0x12570910 */
  if ((C.sf==C.of)) goto L_12570910;
  /* 12570901 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12570904 mov word ptr [eax*2 + 0x12598120], 0 */
  w16((uint32_t)(EAX*2 + 0x12598120), (0x0u));
  /* 1257090e jmp 0x125708f2 */
  goto L_125708f2;
L_12570910:;
  /* 12570910 mov esp, ebp */
  ESP = (EBP);
  /* 12570912 pop ebp */
  EBP = (pop32());
  /* 12570913 ret  */
  ESPCHK(0x125708a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010920 @ 0x12570920 (770 bytes, 175 insns) */
void f_12570920(void) {
  FTRACE(0x12570920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12570920 push ebp */
  push32((uint32_t)(EBP));
  /* 12570921 mov ebp, esp */
  EBP = (ESP);
  /* 12570923 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12570929 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1257092f push eax */
  push32((uint32_t)(EAX));
  /* 12570930 mov ecx, dword ptr [0x125980a4] */
  ECX = (r32((uint32_t)(0x125980a4)));
  /* 12570936 push ecx */
  push32((uint32_t)(ECX));
  /* 12570937 call dword ptr [0x12599338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599338))), 0x1257093du);
  /* 1257093d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570940 jne 0x12570b59 */
  if (!C.zf) goto L_12570b59;
  /* 12570946 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12570950 jmp 0x12570961 */
  goto L_12570961;
L_12570952:;
  /* 12570952 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570958 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257095b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12570961:;
  /* 12570961 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257096b jae 0x12570982 */
  if (!C.cf) goto L_12570982;
  /* 1257096d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570973 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12570979 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12570980 jmp 0x12570952 */
  goto L_12570952;
L_12570982:;
  /* 12570982 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12570989 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1257098f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12570992 jmp 0x1257099d */
  goto L_1257099d;
L_12570994:;
  /* 12570994 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12570997 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257099a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1257099d:;
  /* 1257099d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125709a0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125709a2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125709a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125709a6 je 0x125709e8 */
  if (C.zf) goto L_125709e8;
  /* 125709a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125709ab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125709ad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125709af mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 125709b5 jmp 0x125709c6 */
  goto L_125709c6;
L_125709b7:;
  /* 125709b7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125709bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125709c0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_125709c6:;
  /* 125709c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125709c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125709cb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 125709ce cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125709d4 ja 0x125709e6 */
  if ((!C.cf&&!C.zf)) goto L_125709e6;
  /* 125709d6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125709dc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 125709e4 jmp 0x125709b7 */
  goto L_125709b7;
L_125709e6:;
  /* 125709e6 jmp 0x12570994 */
  goto L_12570994;
L_125709e8:;
  /* 125709e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125709ea mov eax, dword ptr [0x12598344] */
  EAX = (r32((uint32_t)(0x12598344)));
  /* 125709ef push eax */
  push32((uint32_t)(EAX));
  /* 125709f0 mov ecx, dword ptr [0x125980a4] */
  ECX = (r32((uint32_t)(0x125980a4)));
  /* 125709f6 push ecx */
  push32((uint32_t)(ECX));
  /* 125709f7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 125709fd push edx */
  push32((uint32_t)(EDX));
  /* 125709fe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12570a03 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12570a09 push eax */
  push32((uint32_t)(EAX));
  /* 12570a0a push 1 */
  push32((uint32_t)(0x1u));
  /* 12570a0c call 0x125725d0 */
  push32(0x12570a11u); f_125725d0();
  /* 12570a11 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12570a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12570a16 mov ecx, dword ptr [0x125980a4] */
  ECX = (r32((uint32_t)(0x125980a4)));
  /* 12570a1c push ecx */
  push32((uint32_t)(ECX));
  /* 12570a1d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12570a22 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12570a28 push edx */
  push32((uint32_t)(EDX));
  /* 12570a29 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12570a2e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12570a34 push eax */
  push32((uint32_t)(EAX));
  /* 12570a35 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12570a3a mov ecx, dword ptr [0x12598344] */
  ECX = (r32((uint32_t)(0x12598344)));
  /* 12570a40 push ecx */
  push32((uint32_t)(ECX));
  /* 12570a41 call 0x12572790 */
  push32(0x12570a46u); f_12572790();
  /* 12570a46 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12570a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12570a4b mov edx, dword ptr [0x125980a4] */
  EDX = (r32((uint32_t)(0x125980a4)));
  /* 12570a51 push edx */
  push32((uint32_t)(EDX));
  /* 12570a52 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12570a57 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12570a5d push eax */
  push32((uint32_t)(EAX));
  /* 12570a5e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12570a63 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12570a69 push ecx */
  push32((uint32_t)(ECX));
  /* 12570a6a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12570a6f mov edx, dword ptr [0x12598344] */
  EDX = (r32((uint32_t)(0x12598344)));
  /* 12570a75 push edx */
  push32((uint32_t)(EDX));
  /* 12570a76 call 0x12572790 */
  push32(0x12570a7bu); f_12572790();
  /* 12570a7b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12570a7e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12570a88 jmp 0x12570a99 */
  goto L_12570a99;
L_12570a8a:;
  /* 12570a8a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570a90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570a93 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12570a99:;
  /* 12570a99 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570aa3 jae 0x12570b54 */
  if (!C.cf) goto L_12570b54;
  /* 12570aa9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570aaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12570ab1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12570ab9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12570abc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12570abe je 0x12570af6 */
  if (C.zf) goto L_12570af6;
  /* 12570ac0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570ac6 mov cl, byte ptr [eax + 0x12598241] */
  CL = (r8((uint32_t)(EAX + 0x12598241)));
  /* 12570acc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12570acf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570ad5 mov byte ptr [edx + 0x12598241], cl */
  w8((uint32_t)(EDX + 0x12598241), (CL));
  /* 12570adb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570ae1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570ae7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12570aee mov byte ptr [eax + 0x12598140], dl */
  w8((uint32_t)(EAX + 0x12598140), (DL));
  /* 12570af4 jmp 0x12570b4f */
  goto L_12570b4f;
L_12570af6:;
  /* 12570af6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570afc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12570afe mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12570b06 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12570b09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12570b0b je 0x12570b42 */
  if (C.zf) goto L_12570b42;
  /* 12570b0d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570b13 mov al, byte ptr [edx + 0x12598241] */
  AL = (r8((uint32_t)(EDX + 0x12598241)));
  /* 12570b19 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12570b1b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570b21 mov byte ptr [ecx + 0x12598241], al */
  w8((uint32_t)(ECX + 0x12598241), (AL));
  /* 12570b27 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570b2d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570b33 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12570b3a mov byte ptr [edx + 0x12598140], cl */
  w8((uint32_t)(EDX + 0x12598140), (CL));
  /* 12570b40 jmp 0x12570b4f */
  goto L_12570b4f;
L_12570b42:;
  /* 12570b42 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570b48 mov byte ptr [edx + 0x12598140], 0 */
  w8((uint32_t)(EDX + 0x12598140), (0x0u));
L_12570b4f:;
  /* 12570b4f jmp 0x12570a8a */
  goto L_12570a8a;
L_12570b54:;
  /* 12570b54 jmp 0x12570c1e */
  goto L_12570c1e;
L_12570b59:;
  /* 12570b59 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12570b63 jmp 0x12570b74 */
  goto L_12570b74;
L_12570b65:;
  /* 12570b65 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570b6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570b6e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12570b74:;
  /* 12570b74 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570b7e jae 0x12570c1e */
  if (!C.cf) goto L_12570c1e;
  /* 12570b84 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570b8b jb 0x12570bc8 */
  if (C.cf) goto L_12570bc8;
  /* 12570b8d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570b94 ja 0x12570bc8 */
  if ((!C.cf&&!C.zf)) goto L_12570bc8;
  /* 12570b96 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570b9c mov dl, byte ptr [ecx + 0x12598241] */
  DL = (r8((uint32_t)(ECX + 0x12598241)));
  /* 12570ba2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12570ba5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570bab mov byte ptr [eax + 0x12598241], dl */
  w8((uint32_t)(EAX + 0x12598241), (DL));
  /* 12570bb1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570bb7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570bba mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570bc0 mov byte ptr [edx + 0x12598140], cl */
  w8((uint32_t)(EDX + 0x12598140), (CL));
  /* 12570bc6 jmp 0x12570c19 */
  goto L_12570c19;
L_12570bc8:;
  /* 12570bc8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570bcf jb 0x12570c0c */
  if (C.cf) goto L_12570c0c;
  /* 12570bd1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570bd8 ja 0x12570c0c */
  if ((!C.cf&&!C.zf)) goto L_12570c0c;
  /* 12570bda mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570be0 mov cl, byte ptr [eax + 0x12598241] */
  CL = (r8((uint32_t)(EAX + 0x12598241)));
  /* 12570be6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12570be9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570bef mov byte ptr [edx + 0x12598241], cl */
  w8((uint32_t)(EDX + 0x12598241), (CL));
  /* 12570bf5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570bfb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12570bfe mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570c04 mov byte ptr [ecx + 0x12598140], al */
  w8((uint32_t)(ECX + 0x12598140), (AL));
  /* 12570c0a jmp 0x12570c19 */
  goto L_12570c19;
L_12570c0c:;
  /* 12570c0c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12570c12 mov byte ptr [edx + 0x12598140], 0 */
  w8((uint32_t)(EDX + 0x12598140), (0x0u));
L_12570c19:;
  /* 12570c19 jmp 0x12570b65 */
  goto L_12570b65;
L_12570c1e:;
  /* 12570c1e mov esp, ebp */
  ESP = (EBP);
  /* 12570c20 pop ebp */
  EBP = (pop32());
  /* 12570c21 ret  */
  ESPCHK(0x12570920u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c30 @ 0x12570c30 (23 bytes, 9 insns) */
void f_12570c30(void) {
  FTRACE(0x12570c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12570c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12570c31 mov ebp, esp */
  EBP = (ESP);
  /* 12570c33 cmp dword ptr [0x1259812c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1259812c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570c3a je 0x12570c43 */
  if (C.zf) goto L_12570c43;
  /* 12570c3c mov eax, dword ptr [0x125980a4] */
  EAX = (r32((uint32_t)(0x125980a4)));
  /* 12570c41 jmp 0x12570c45 */
  goto L_12570c45;
L_12570c43:;
  /* 12570c43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12570c45:;
  /* 12570c45 pop ebp */
  EBP = (pop32());
  /* 12570c46 ret  */
  ESPCHK(0x12570c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c50 @ 0x12570c50 (34 bytes, 10 insns) */
void f_12570c50(void) {
  FTRACE(0x12570c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12570c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12570c51 mov ebp, esp */
  EBP = (ESP);
  /* 12570c53 cmp dword ptr [0x125984f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125984f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570c5a jne 0x12570c70 */
  if (!C.zf) goto L_12570c70;
  /* 12570c5c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12570c5e call 0x12570470 */
  push32(0x12570c63u); f_12570470();
  /* 12570c63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12570c66 mov dword ptr [0x125984f0], 1 */
  w32((uint32_t)(0x125984f0), (0x1u));
L_12570c70:;
  /* 12570c70 pop ebp */
  EBP = (pop32());
  /* 12570c71 ret  */
  ESPCHK(0x12570c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c80 @ 0x12570c80 (664 bytes, 264 insns) [15 switch table(s)] */
void f_12570c80(void) {
  FTRACE(0x12570c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12570c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12570c81 mov ebp, esp */
  EBP = (ESP);
  /* 12570c83 push edi */
  push32((uint32_t)(EDI));
  /* 12570c84 push esi */
  push32((uint32_t)(ESI));
  /* 12570c85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12570c88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12570c8b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12570c8e mov eax, ecx */
  EAX = (ECX);
  /* 12570c90 mov edx, ecx */
  EDX = (ECX);
  /* 12570c92 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570c94 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570c96 jbe 0x12570ca0 */
  if ((C.cf||C.zf)) goto L_12570ca0;
  /* 12570c98 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570c9a jb 0x12570e18 */
  if (C.cf) goto L_12570e18;
L_12570ca0:;
  /* 12570ca0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12570ca6 jne 0x12570cbc */
  if (!C.zf) goto L_12570cbc;
  /* 12570ca8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12570cab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12570cae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570cb1 jb 0x12570cdc */
  if (C.cf) goto L_12570cdc;
  /* 12570cb3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12570cb5 jmp dword ptr [edx*4 + 0x12570dc8] */
  switch (EDX) {
    case 0: goto L_12570dd8;
    case 1: goto L_12570de0;
    case 2: goto L_12570dec;
    case 3: goto L_12570e00;
    default: x86_unimpl("switch@0x12570cb5 out of table"); return;
  }
L_12570cbc:;
  /* 12570cbc mov eax, edi */
  EAX = (EDI);
  /* 12570cbe mov edx, 3 */
  EDX = (0x3u);
  /* 12570cc3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12570cc6 jb 0x12570cd4 */
  if (C.cf) goto L_12570cd4;
  /* 12570cc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12570ccb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12570ccd jmp dword ptr [eax*4 + 0x12570ce0] */
  switch (EAX) {
    case 1: goto L_12570cf0;
    case 2: goto L_12570d1c;
    case 3: goto L_12570d40;
    default: x86_unimpl("switch@0x12570ccd out of table"); return;
  }
L_12570cd4:;
  /* 12570cd4 jmp dword ptr [ecx*4 + 0x12570dd8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12570dd8)))); return;
  /* 12570cdb nop  */
  /* nop */
L_12570cdc:;
  /* 12570cdc jmp dword ptr [ecx*4 + 0x12570d5c] */
  switch (ECX) {
    case 0: goto L_12570dbf;
    case 1: goto L_12570dac;
    case 2: goto L_12570da4;
    case 3: goto L_12570d9c;
    case 4: goto L_12570d94;
    case 5: goto L_12570d8c;
    case 6: goto L_12570d84;
    case 7: goto L_12570d7c;
    default: x86_unimpl("switch@0x12570cdc out of table"); return;
  }
  /* 12570ce3 nop  */
  /* nop */
L_12570cf0:;
  /* 12570cf0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12570cf2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12570cf4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12570cf6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12570cf9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12570cfc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12570cff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12570d02 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12570d05 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12570d08 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12570d0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570d0e jb 0x12570cdc */
  if (C.cf) goto L_12570cdc;
  /* 12570d10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12570d12 jmp dword ptr [edx*4 + 0x12570dc8] */
  switch (EDX) {
    case 0: goto L_12570dd8;
    case 1: goto L_12570de0;
    case 2: goto L_12570dec;
    case 3: goto L_12570e00;
    default: x86_unimpl("switch@0x12570d12 out of table"); return;
  }
  /* 12570d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12570d1c:;
  /* 12570d1c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12570d1e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12570d20 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12570d22 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12570d25 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12570d28 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12570d2b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12570d2e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12570d31 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570d34 jb 0x12570cdc */
  if (C.cf) goto L_12570cdc;
  /* 12570d36 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12570d38 jmp dword ptr [edx*4 + 0x12570dc8] */
  switch (EDX) {
    case 0: goto L_12570dd8;
    case 1: goto L_12570de0;
    case 2: goto L_12570dec;
    case 3: goto L_12570e00;
    default: x86_unimpl("switch@0x12570d38 out of table"); return;
  }
  /* 12570d3f nop  */
  /* nop */
L_12570d40:;
  /* 12570d40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12570d42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12570d44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12570d46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12570d47 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12570d4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12570d4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570d4e jb 0x12570cdc */
  if (C.cf) goto L_12570cdc;
  /* 12570d50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12570d52 jmp dword ptr [edx*4 + 0x12570dc8] */
  switch (EDX) {
    case 0: goto L_12570dd8;
    case 1: goto L_12570de0;
    case 2: goto L_12570dec;
    case 3: goto L_12570e00;
    default: x86_unimpl("switch@0x12570d52 out of table"); return;
  }
  /* 12570d59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12570d7c:;
  /* 12570d7c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12570d80 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12570d84:;
  /* 12570d84 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12570d88 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12570d8c:;
  /* 12570d8c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12570d90 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12570d94:;
  /* 12570d94 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12570d98 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12570d9c:;
  /* 12570d9c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12570da0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12570da4:;
  /* 12570da4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12570da8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12570dac:;
  /* 12570dac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12570db0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12570db4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12570dbb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12570dbd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12570dbf:;
  /* 12570dbf jmp dword ptr [edx*4 + 0x12570dc8] */
  switch (EDX) {
    case 0: goto L_12570dd8;
    case 1: goto L_12570de0;
    case 2: goto L_12570dec;
    case 3: goto L_12570e00;
    default: x86_unimpl("switch@0x12570dbf out of table"); return;
  }
  /* 12570dc6 mov edi, edi */
  EDI = (EDI);
L_12570dd8:;
  /* 12570dd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570ddb pop esi */
  ESI = (pop32());
  /* 12570ddc pop edi */
  EDI = (pop32());
  /* 12570ddd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12570dde ret  */
  ESPCHK(0x12570c80u, _esp0);
  ESP += 4; return;
  /* 12570ddf nop  */
  /* nop */
L_12570de0:;
  /* 12570de0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12570de2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12570de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570de7 pop esi */
  ESI = (pop32());
  /* 12570de8 pop edi */
  EDI = (pop32());
  /* 12570de9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12570dea ret  */
  ESPCHK(0x12570c80u, _esp0);
  ESP += 4; return;
  /* 12570deb nop  */
  /* nop */
L_12570dec:;
  /* 12570dec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12570dee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12570df0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12570df3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12570df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570df9 pop esi */
  ESI = (pop32());
  /* 12570dfa pop edi */
  EDI = (pop32());
  /* 12570dfb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12570dfc ret  */
  ESPCHK(0x12570c80u, _esp0);
  ESP += 4; return;
  /* 12570dfd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12570e00:;
  /* 12570e00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12570e02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12570e04 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12570e07 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12570e0a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12570e0d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12570e10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570e13 pop esi */
  ESI = (pop32());
  /* 12570e14 pop edi */
  EDI = (pop32());
  /* 12570e15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12570e16 ret  */
  ESPCHK(0x12570c80u, _esp0);
  ESP += 4; return;
  /* 12570e17 nop  */
  /* nop */
L_12570e18:;
  /* 12570e18 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12570e1c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12570e20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12570e26 jne 0x12570e4c */
  if (!C.zf) goto L_12570e4c;
  /* 12570e28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12570e2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12570e2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570e31 jb 0x12570e40 */
  if (C.cf) goto L_12570e40;
  /* 12570e33 std  */
  C.df=1;
  /* 12570e34 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12570e36 cld  */
  C.df=0;
  /* 12570e37 jmp dword ptr [edx*4 + 0x12570f60] */
  switch (EDX) {
    case 0: goto L_12570f70;
    case 1: goto L_12570f78;
    case 2: goto L_12570f88;
    case 3: goto L_12570f9c;
    default: x86_unimpl("switch@0x12570e37 out of table"); return;
  }
  /* 12570e3e mov edi, edi */
  EDI = (EDI);
L_12570e40:;
  /* 12570e40 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12570e42 jmp dword ptr [ecx*4 + 0x12570f10] */
  switch (ECX) {
    case 0: goto L_12570f57;
    default: x86_unimpl("switch@0x12570e42 out of table"); return;
  }
  /* 12570e49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12570e4c:;
  /* 12570e4c mov eax, edi */
  EAX = (EDI);
  /* 12570e4e mov edx, 3 */
  EDX = (0x3u);
  /* 12570e53 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570e56 jb 0x12570e64 */
  if (C.cf) goto L_12570e64;
  /* 12570e58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12570e5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12570e5d jmp dword ptr [eax*4 + 0x12570e68] */
  switch (EAX) {
    case 1: goto L_12570e78;
    case 2: goto L_12570e98;
    case 3: goto L_12570ec0;
    default: x86_unimpl("switch@0x12570e5d out of table"); return;
  }
L_12570e64:;
  /* 12570e64 jmp dword ptr [ecx*4 + 0x12570f60] */
  switch (ECX) {
    case 0: goto L_12570f70;
    case 1: goto L_12570f78;
    case 2: goto L_12570f88;
    case 3: goto L_12570f9c;
    default: x86_unimpl("switch@0x12570e64 out of table"); return;
  }
  /* 12570e6b nop  */
  /* nop */
L_12570e78:;
  /* 12570e78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12570e7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12570e7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12570e80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12570e81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12570e84 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12570e85 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570e88 jb 0x12570e40 */
  if (C.cf) goto L_12570e40;
  /* 12570e8a std  */
  C.df=1;
  /* 12570e8b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12570e8d cld  */
  C.df=0;
  /* 12570e8e jmp dword ptr [edx*4 + 0x12570f60] */
  switch (EDX) {
    case 0: goto L_12570f70;
    case 1: goto L_12570f78;
    case 2: goto L_12570f88;
    case 3: goto L_12570f9c;
    default: x86_unimpl("switch@0x12570e8e out of table"); return;
  }
  /* 12570e95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12570e98:;
  /* 12570e98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12570e9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12570e9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12570ea0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12570ea3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12570ea6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12570ea9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12570eac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12570eaf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570eb2 jb 0x12570e40 */
  if (C.cf) goto L_12570e40;
  /* 12570eb4 std  */
  C.df=1;
  /* 12570eb5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12570eb7 cld  */
  C.df=0;
  /* 12570eb8 jmp dword ptr [edx*4 + 0x12570f60] */
  switch (EDX) {
    case 0: goto L_12570f70;
    case 1: goto L_12570f78;
    case 2: goto L_12570f88;
    case 3: goto L_12570f9c;
    default: x86_unimpl("switch@0x12570eb8 out of table"); return;
  }
  /* 12570ebf nop  */
  /* nop */
L_12570ec0:;
  /* 12570ec0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12570ec3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12570ec5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12570ec8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12570ecb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12570ece mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12570ed1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12570ed4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12570ed7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12570eda sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12570edd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12570ee0 jb 0x12570e40 */
  if (C.cf) goto L_12570e40;
  /* 12570ee6 std  */
  C.df=1;
  /* 12570ee7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12570ee9 cld  */
  C.df=0;
  /* 12570eea jmp dword ptr [edx*4 + 0x12570f60] */
  switch (EDX) {
    case 0: goto L_12570f70;
    case 1: goto L_12570f78;
    case 2: goto L_12570f88;
    case 3: goto L_12570f9c;
    default: x86_unimpl("switch@0x12570eea out of table"); return;
  }
  /* 12570ef1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12570ef4 adc al, 0xf */
  { uint32_t _a=(AL),_b=(0xfu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12570ef6 push edi */
  push32((uint32_t)(EDI));
  /* 12570ef7 adc bl, byte ptr [edi + ecx] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EDI + ECX*1))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 12570efa push edi */
  push32((uint32_t)(EDI));
  /* 12570efb adc ah, byte ptr [edi + ecx] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EDI + ECX*1))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 12570efe push edi */
  push32((uint32_t)(EDI));
  /* 12570eff adc ch, byte ptr [edi + ecx] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EDI + ECX*1))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12570f02 push edi */
  push32((uint32_t)(EDI));
  /* 12570f03 adc dh, byte ptr [edi + ecx] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EDI + ECX*1))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12570f06 push edi */
  push32((uint32_t)(EDI));
  /* 12570f07 adc bh, byte ptr [edi + ecx] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EDI + ECX*1))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12570f0a push edi */
  push32((uint32_t)(EDI));
  /* 12570f0b adc al, byte ptr [edi + ecx + 0x57] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + ECX*1 + 0x57))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12570f14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12570f18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12570f1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12570f20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12570f24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12570f28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12570f2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12570f30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12570f34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12570f38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12570f3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12570f40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12570f44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12570f48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12570f4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12570f53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12570f55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12570f57:;
  /* 12570f57 jmp dword ptr [edx*4 + 0x12570f60] */
  switch (EDX) {
    case 0: goto L_12570f70;
    case 1: goto L_12570f78;
    case 2: goto L_12570f88;
    case 3: goto L_12570f9c;
    default: x86_unimpl("switch@0x12570f57 out of table"); return;
  }
  /* 12570f5e mov edi, edi */
  EDI = (EDI);
L_12570f70:;
  /* 12570f70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570f73 pop esi */
  ESI = (pop32());
  /* 12570f74 pop edi */
  EDI = (pop32());
  /* 12570f75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12570f76 ret  */
  ESPCHK(0x12570c80u, _esp0);
  ESP += 4; return;
  /* 12570f77 nop  */
  /* nop */
L_12570f78:;
  /* 12570f78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12570f7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12570f7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570f81 pop esi */
  ESI = (pop32());
  /* 12570f82 pop edi */
  EDI = (pop32());
  /* 12570f83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12570f84 ret  */
  ESPCHK(0x12570c80u, _esp0);
  ESP += 4; return;
  /* 12570f85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12570f88:;
  /* 12570f88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12570f8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12570f8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12570f91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12570f94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570f97 pop esi */
  ESI = (pop32());
  /* 12570f98 pop edi */
  EDI = (pop32());
  /* 12570f99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12570f9a ret  */
  ESPCHK(0x12570c80u, _esp0);
  ESP += 4; return;
  /* 12570f9b nop  */
  /* nop */
L_12570f9c:;
  /* 12570f9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12570f9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12570fa2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12570fa5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12570fa8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12570fab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12570fae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12570fb1 pop esi */
  ESI = (pop32());
  /* 12570fb2 pop edi */
  EDI = (pop32());
  /* 12570fb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12570fb4 ret  */
  ESPCHK(0x12570c80u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12570fc0 (104 bytes, 43 insns) */
void f_12570fc0(void) {
  FTRACE(0x12570fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12570fc0 push ebx */
  push32((uint32_t)(EBX));
  /* 12570fc1 push esi */
  push32((uint32_t)(ESI));
  /* 12570fc2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12570fc6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12570fc8 jne 0x12570fe2 */
  if (!C.zf) goto L_12570fe2;
  /* 12570fca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12570fce mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12570fd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12570fd4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12570fd6 mov ebx, eax */
  EBX = (EAX);
  /* 12570fd8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12570fdc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12570fde mov edx, ebx */
  EDX = (EBX);
  /* 12570fe0 jmp 0x12571023 */
  goto L_12571023;
L_12570fe2:;
  /* 12570fe2 mov ecx, eax */
  ECX = (EAX);
  /* 12570fe4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12570fe8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12570fec mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12570ff0:;
  /* 12570ff0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12570ff2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12570ff4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12570ff6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12570ff8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12570ffa jne 0x12570ff0 */
  if (!C.zf) goto L_12570ff0;
  /* 12570ffc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12570ffe mov esi, eax */
  ESI = (EAX);
  /* 12571000 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12571004 mov ecx, eax */
  ECX = (EAX);
  /* 12571006 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1257100a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1257100c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257100e jb 0x1257101e */
  if (C.cf) goto L_1257101e;
  /* 12571010 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571014 ja 0x1257101e */
  if ((!C.cf&&!C.zf)) goto L_1257101e;
  /* 12571016 jb 0x1257101f */
  if (C.cf) goto L_1257101f;
  /* 12571018 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257101c jbe 0x1257101f */
  if ((C.cf||C.zf)) goto L_1257101f;
L_1257101e:;
  /* 1257101e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1257101f:;
  /* 1257101f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12571021 mov eax, esi */
  EAX = (ESI);
L_12571023:;
  /* 12571023 pop esi */
  ESI = (pop32());
  /* 12571024 pop ebx */
  EBX = (pop32());
  /* 12571025 ret 0x10 */
  ESPCHK(0x12570fc0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12571030 (117 bytes, 44 insns) */
void f_12571030(void) {
  FTRACE(0x12571030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12571030 push ebx */
  push32((uint32_t)(EBX));
  /* 12571031 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12571035 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12571037 jne 0x12571051 */
  if (!C.zf) goto L_12571051;
  /* 12571039 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1257103d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12571041 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12571043 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12571045 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12571049 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1257104b mov eax, edx */
  EAX = (EDX);
  /* 1257104d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1257104f jmp 0x125710a1 */
  goto L_125710a1;
L_12571051:;
  /* 12571051 mov ecx, eax */
  ECX = (EAX);
  /* 12571053 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12571057 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1257105b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1257105f:;
  /* 1257105f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12571061 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12571063 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12571065 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12571067 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12571069 jne 0x1257105f */
  if (!C.zf) goto L_1257105f;
  /* 1257106b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1257106d mov ecx, eax */
  ECX = (EAX);
  /* 1257106f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12571073 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12571074 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12571078 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257107a jb 0x1257108a */
  if (C.cf) goto L_1257108a;
  /* 1257107c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571080 ja 0x1257108a */
  if ((!C.cf&&!C.zf)) goto L_1257108a;
  /* 12571082 jb 0x12571092 */
  if (C.cf) goto L_12571092;
  /* 12571084 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571088 jbe 0x12571092 */
  if ((C.cf||C.zf)) goto L_12571092;
L_1257108a:;
  /* 1257108a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257108e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12571092:;
  /* 12571092 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12571096 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257109a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1257109c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1257109e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_125710a1:;
  /* 125710a1 pop ebx */
  EBX = (pop32());
  /* 125710a2 ret 0x10 */
  ESPCHK(0x12571030u, _esp0);
  ESP += 20; return;
}

/* FUN_100110b0 @ 0x125710b0 (628 bytes, 214 insns) */
void f_125710b0(void) {
  FTRACE(0x125710b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125710b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125710b1 mov ebp, esp */
  EBP = (ESP);
  /* 125710b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125710b6 push ebx */
  push32((uint32_t)(EBX));
  /* 125710b7 push esi */
  push32((uint32_t)(ESI));
  /* 125710b8 push edi */
  push32((uint32_t)(EDI));
L_125710b9:;
  /* 125710b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125710bd jne 0x125710dd */
  if (!C.zf) goto L_125710dd;
  /* 125710bf push 0x12592574 */
  push32((uint32_t)(0x12592574u));
  /* 125710c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125710c6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 125710c8 push 0x12592568 */
  push32((uint32_t)(0x12592568u));
  /* 125710cd push 2 */
  push32((uint32_t)(0x2u));
  /* 125710cf call 0x12569460 */
  push32(0x125710d4u); f_12569460();
  /* 125710d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125710d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125710da jne 0x125710dd */
  if (!C.zf) goto L_125710dd;
  /* 125710dc int3  */
  x86_unimpl("int3 @ 0x125710dc");
L_125710dd:;
  /* 125710dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125710df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125710e1 jne 0x125710b9 */
  if (!C.zf) goto L_125710b9;
  /* 125710e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125710e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125710e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125710ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125710ef mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125710f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125710f5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125710f8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 125710fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12571100 je 0x1257110f */
  if (C.zf) goto L_1257110f;
  /* 12571102 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571105 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12571108 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1257110b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1257110d je 0x12571125 */
  if (C.zf) goto L_12571125;
L_1257110f:;
  /* 1257110f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571112 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12571115 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12571117 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257111a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1257111d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12571120 jmp 0x1257131d */
  goto L_1257131d;
L_12571125:;
  /* 12571125 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571128 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1257112b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1257112e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12571130 je 0x1257117c */
  if (C.zf) goto L_1257117c;
  /* 12571132 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571135 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1257113c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257113f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12571142 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12571145 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12571147 je 0x12571165 */
  if (C.zf) goto L_12571165;
  /* 12571149 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257114c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257114f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12571152 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12571154 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571157 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1257115a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1257115d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571160 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12571163 jmp 0x1257117c */
  goto L_1257117c;
L_12571165:;
  /* 12571165 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571168 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1257116b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1257116e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571171 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12571174 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12571177 jmp 0x1257131d */
  goto L_1257131d;
L_1257117c:;
  /* 1257117c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257117f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12571182 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12571185 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571188 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1257118b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257118e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12571191 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12571194 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571197 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1257119a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257119d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 125711a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125711ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125711ae mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125711b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125711b4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125711b7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 125711bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125711bf jne 0x125711ef */
  if (!C.zf) goto L_125711ef;
  /* 125711c1 cmp dword ptr [ebp - 8], 0x12595140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12595140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125711c8 je 0x125711d3 */
  if (C.zf) goto L_125711d3;
  /* 125711ca cmp dword ptr [ebp - 8], 0x12595160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12595160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125711d1 jne 0x125711e3 */
  if (!C.zf) goto L_125711e3;
L_125711d3:;
  /* 125711d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125711d6 push edx */
  push32((uint32_t)(EDX));
  /* 125711d7 call 0x12573020 */
  push32(0x125711dcu); f_12573020();
  /* 125711dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125711df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125711e1 jne 0x125711ef */
  if (!C.zf) goto L_125711ef;
L_125711e3:;
  /* 125711e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125711e6 push eax */
  push32((uint32_t)(EAX));
  /* 125711e7 call 0x12572f50 */
  push32(0x125711ecu); f_12572f50();
  /* 125711ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125711ef:;
  /* 125711ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125711f2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125711f5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 125711fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125711fd je 0x125712db */
  if (C.zf) goto L_125712db;
L_12571203:;
  /* 12571203 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571206 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571209 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1257120b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257120e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12571210 jge 0x12571233 */
  if ((C.sf==C.of)) goto L_12571233;
  /* 12571212 push 0x12592528 */
  push32((uint32_t)(0x12592528u));
  /* 12571217 push 0 */
  push32((uint32_t)(0x0u));
  /* 12571219 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1257121e push 0x12592568 */
  push32((uint32_t)(0x12592568u));
  /* 12571223 push 2 */
  push32((uint32_t)(0x2u));
  /* 12571225 call 0x12569460 */
  push32(0x1257122au); f_12569460();
  /* 1257122a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257122d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571230 jne 0x12571233 */
  if (!C.zf) goto L_12571233;
  /* 12571232 int3  */
  x86_unimpl("int3 @ 0x12571232");
L_12571233:;
  /* 12571233 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12571235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12571237 jne 0x12571203 */
  if (!C.zf) goto L_12571203;
  /* 12571239 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257123c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257123f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12571241 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12571244 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12571247 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257124a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1257124d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12571250 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571253 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12571255 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571258 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1257125b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257125e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571261 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12571264 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571268 jle 0x12571286 */
  if ((C.zf||C.sf!=C.of)) goto L_12571286;
  /* 1257126a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257126d push ecx */
  push32((uint32_t)(ECX));
  /* 1257126e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571271 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12571274 push eax */
  push32((uint32_t)(EAX));
  /* 12571275 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12571278 push ecx */
  push32((uint32_t)(ECX));
  /* 12571279 call 0x12572c40 */
  push32(0x1257127eu); f_12572c40();
  /* 1257127e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571281 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12571284 jmp 0x125712ce */
  goto L_125712ce;
L_12571286:;
  /* 12571286 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257128a je 0x125712a9 */
  if (C.zf) goto L_125712a9;
  /* 1257128c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257128f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12571292 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12571295 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12571298 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1257129b mov ecx, dword ptr [edx*4 + 0x125983a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x125983a0)));
  /* 125712a2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125712a4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125712a7 jmp 0x125712b0 */
  goto L_125712b0;
L_125712a9:;
  /* 125712a9 mov dword ptr [ebp - 0x14], 0x12594a60 */
  w32((uint32_t)(EBP + -0x14), (0x12594a60u));
L_125712b0:;
  /* 125712b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125712b3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 125712b7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 125712ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125712bc je 0x125712ce */
  if (C.zf) goto L_125712ce;
  /* 125712be push 2 */
  push32((uint32_t)(0x2u));
  /* 125712c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125712c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125712c5 push ecx */
  push32((uint32_t)(ECX));
  /* 125712c6 call 0x12572af0 */
  push32(0x125712cbu); f_12572af0();
  /* 125712cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125712ce:;
  /* 125712ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125712d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125712d4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 125712d7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 125712d9 jmp 0x125712f9 */
  goto L_125712f9;
L_125712db:;
  /* 125712db mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125712e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125712e5 push edx */
  push32((uint32_t)(EDX));
  /* 125712e6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 125712e9 push eax */
  push32((uint32_t)(EAX));
  /* 125712ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125712ed push ecx */
  push32((uint32_t)(ECX));
  /* 125712ee call 0x12572c40 */
  push32(0x125712f3u); f_12572c40();
  /* 125712f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125712f6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125712f9:;
  /* 125712f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125712fc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125712ff je 0x12571315 */
  if (C.zf) goto L_12571315;
  /* 12571301 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571304 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12571307 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1257130a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257130d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12571310 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12571313 jmp 0x1257131d */
  goto L_1257131d;
L_12571315:;
  /* 12571315 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12571318 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1257131d:;
  /* 1257131d pop edi */
  EDI = (pop32());
  /* 1257131e pop esi */
  ESI = (pop32());
  /* 1257131f pop ebx */
  EBX = (pop32());
  /* 12571320 mov esp, ebp */
  ESP = (EBP);
  /* 12571322 pop ebp */
  EBP = (pop32());
  /* 12571323 ret  */
  ESPCHK(0x125710b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011330 @ 0x12571330 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12571330(void) {
  FTRACE(0x12571330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12571330 push ebp */
  push32((uint32_t)(EBP));
  /* 12571331 mov ebp, esp */
  EBP = (ESP);
  /* 12571333 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12571339 push ebx */
  push32((uint32_t)(EBX));
  /* 1257133a push esi */
  push32((uint32_t)(ESI));
  /* 1257133b push edi */
  push32((uint32_t)(EDI));
  /* 1257133c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12571343 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1257134d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12571354:;
  /* 12571354 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12571357 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12571359 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1257135c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12571360 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12571363 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12571366 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12571369 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1257136b je 0x12571f47 */
  if (C.zf) goto L_12571f47;
  /* 12571371 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571378 jl 0x12571f47 */
  if ((C.sf!=C.of)) goto L_12571f47;
  /* 1257137e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12571382 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571385 jl 0x125713a6 */
  if ((C.sf!=C.of)) goto L_125713a6;
  /* 12571387 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1257138b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257138e jg 0x125713a6 */
  if ((!C.zf&&C.sf==C.of)) goto L_125713a6;
  /* 12571390 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12571394 movsx ecx, byte ptr [eax + 0x12592560] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12592560))));
  /* 1257139b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1257139e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 125713a4 jmp 0x125713b0 */
  goto L_125713b0;
L_125713a6:;
  /* 125713a6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_125713b0:;
  /* 125713b0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 125713b6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125713b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125713bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125713bf movsx edx, byte ptr [ecx + eax*8 + 0x12592580] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12592580))));
  /* 125713c7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 125713ca mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125713cd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125713d0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 125713d6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125713dd ja 0x12571f42 */
  if ((!C.cf&&!C.zf)) goto L_12571f42;
  /* 125713e3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 125713e9 jmp dword ptr [ecx*4 + 0x12571f54] */
  switch (ECX) {
    case 0: goto L_125713f0;
    case 1: goto L_1257148a;
    case 2: goto L_125714cc;
    case 3: goto L_1257153b;
    case 4: goto L_12571593;
    case 5: goto L_125715a2;
    case 6: goto L_125715ee;
    case 7: goto L_12571681;
    case 8: goto L_12571518;
    case 9: goto L_12571523;
    case 10: goto L_1257150e;
    case 11: goto L_12571503;
    case 12: goto L_1257152e;
    case 13: goto L_12571536;
    default: x86_unimpl("switch@0x125713e9 out of table"); return;
  }
L_125713f0:;
  /* 125713f0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 125713f7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125713fa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12571400 mov eax, dword ptr [0x12594c98] */
  EAX = (r32((uint32_t)(0x12594c98)));
  /* 12571405 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12571407 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1257140b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12571411 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12571413 je 0x1257146d */
  if (C.zf) goto L_1257146d;
  /* 12571415 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1257141b push edx */
  push32((uint32_t)(EDX));
  /* 1257141c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257141f push eax */
  push32((uint32_t)(EAX));
  /* 12571420 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12571424 push ecx */
  push32((uint32_t)(ECX));
  /* 12571425 call 0x12572060 */
  push32(0x1257142au); f_12572060();
  /* 1257142a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257142d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12571430 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12571432 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12571435 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12571438 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257143b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1257143e:;
  /* 1257143e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12571442 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12571444 jne 0x12571467 */
  if (!C.zf) goto L_12571467;
  /* 12571446 push 0x12592600 */
  push32((uint32_t)(0x12592600u));
  /* 1257144b push 0 */
  push32((uint32_t)(0x0u));
  /* 1257144d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12571452 push 0x125925f4 */
  push32((uint32_t)(0x125925f4u));
  /* 12571457 push 2 */
  push32((uint32_t)(0x2u));
  /* 12571459 call 0x12569460 */
  push32(0x1257145eu); f_12569460();
  /* 1257145e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571461 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571464 jne 0x12571467 */
  if (!C.zf) goto L_12571467;
  /* 12571466 int3  */
  x86_unimpl("int3 @ 0x12571466");
L_12571467:;
  /* 12571467 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12571469 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257146b jne 0x1257143e */
  if (!C.zf) goto L_1257143e;
L_1257146d:;
  /* 1257146d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12571473 push ecx */
  push32((uint32_t)(ECX));
  /* 12571474 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12571477 push edx */
  push32((uint32_t)(EDX));
  /* 12571478 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1257147c push eax */
  push32((uint32_t)(EAX));
  /* 1257147d call 0x12572060 */
  push32(0x12571482u); f_12572060();
  /* 12571482 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571485 jmp 0x12571f42 */
  goto L_12571f42;
L_1257148a:;
  /* 1257148a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12571491 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12571494 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1257149a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 125714a0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 125714a6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 125714ac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125714af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125714b6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 125714c0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 125714c7 jmp 0x12571f42 */
  goto L_12571f42;
L_125714cc:;
  /* 125714cc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125714d0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 125714d6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 125714dc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125714df mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 125714e5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125714ec ja 0x12571536 */
  if ((!C.cf&&!C.zf)) goto L_12571536;
  /* 125714ee mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 125714f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125714f6 mov al, byte ptr [ecx + 0x12571f8c] */
  AL = (r8((uint32_t)(ECX + 0x12571f8c)));
  /* 125714fc jmp dword ptr [eax*4 + 0x12571f74] */
  switch (EAX) {
    case 0: goto L_12571518;
    case 1: goto L_12571523;
    case 2: goto L_1257150e;
    case 3: goto L_12571503;
    case 4: goto L_1257152e;
    case 5: goto L_12571536;
    default: x86_unimpl("switch@0x125714fc out of table"); return;
  }
L_12571503:;
  /* 12571503 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571506 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12571509 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1257150c jmp 0x12571536 */
  goto L_12571536;
L_1257150e:;
  /* 1257150e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571511 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12571513 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12571516 jmp 0x12571536 */
  goto L_12571536;
L_12571518:;
  /* 12571518 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257151b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1257151e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12571521 jmp 0x12571536 */
  goto L_12571536;
L_12571523:;
  /* 12571523 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571526 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12571529 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1257152c jmp 0x12571536 */
  goto L_12571536;
L_1257152e:;
  /* 1257152e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571531 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12571533 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12571536:;
  /* 12571536 jmp 0x12571f42 */
  goto L_12571f42;
L_1257153b:;
  /* 1257153b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1257153f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571542 jne 0x12571577 */
  if (!C.zf) goto L_12571577;
  /* 12571544 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12571547 push edx */
  push32((uint32_t)(EDX));
  /* 12571548 call 0x12572170 */
  push32(0x1257154du); f_12572170();
  /* 1257154d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571550 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12571556 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257155d jge 0x12571575 */
  if ((C.sf==C.of)) goto L_12571575;
  /* 1257155f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571562 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12571564 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12571567 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1257156d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1257156f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12571575:;
  /* 12571575 jmp 0x1257158e */
  goto L_1257158e;
L_12571577:;
  /* 12571577 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1257157d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12571580 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12571584 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12571588 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1257158e:;
  /* 1257158e jmp 0x12571f42 */
  goto L_12571f42;
L_12571593:;
  /* 12571593 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1257159d jmp 0x12571f42 */
  goto L_12571f42;
L_125715a2:;
  /* 125715a2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125715a6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125715a9 jne 0x125715d2 */
  if (!C.zf) goto L_125715d2;
  /* 125715ab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 125715ae push eax */
  push32((uint32_t)(EAX));
  /* 125715af call 0x12572170 */
  push32(0x125715b4u); f_12572170();
  /* 125715b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125715b7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 125715bd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125715c4 jge 0x125715d0 */
  if ((C.sf==C.of)) goto L_125715d0;
  /* 125715c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_125715d0:;
  /* 125715d0 jmp 0x125715e9 */
  goto L_125715e9;
L_125715d2:;
  /* 125715d2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 125715d8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125715db movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125715df lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 125715e3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_125715e9:;
  /* 125715e9 jmp 0x12571f42 */
  goto L_12571f42;
L_125715ee:;
  /* 125715ee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125715f2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 125715f8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 125715fe sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12571601 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12571607 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257160e ja 0x1257167c */
  if ((!C.cf&&!C.zf)) goto L_1257167c;
  /* 12571610 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12571616 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12571618 mov al, byte ptr [ecx + 0x12571fb1] */
  AL = (r8((uint32_t)(ECX + 0x12571fb1)));
  /* 1257161e jmp dword ptr [eax*4 + 0x12571f9d] */
  switch (EAX) {
    case 0: goto L_12571630;
    case 1: goto L_12571669;
    case 2: goto L_12571625;
    case 3: goto L_12571673;
    case 4: goto L_1257167c;
    default: x86_unimpl("switch@0x1257161e out of table"); return;
  }
L_12571625:;
  /* 12571625 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571628 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1257162b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1257162e jmp 0x1257167c */
  goto L_1257167c;
L_12571630:;
  /* 12571630 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12571633 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12571636 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571639 jne 0x1257165b */
  if (!C.zf) goto L_1257165b;
  /* 1257163b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257163e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12571642 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571645 jne 0x1257165b */
  if (!C.zf) goto L_1257165b;
  /* 12571647 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257164a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257164d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12571650 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571653 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12571656 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12571659 jmp 0x12571667 */
  goto L_12571667;
L_1257165b:;
  /* 1257165b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12571662 jmp 0x125713f0 */
  goto L_125713f0;
L_12571667:;
  /* 12571667 jmp 0x1257167c */
  goto L_1257167c;
L_12571669:;
  /* 12571669 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257166c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1257166e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12571671 jmp 0x1257167c */
  goto L_1257167c;
L_12571673:;
  /* 12571673 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571676 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12571679 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1257167c:;
  /* 1257167c jmp 0x12571f42 */
  goto L_12571f42;
L_12571681:;
  /* 12571681 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12571685 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1257168b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12571691 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12571694 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1257169a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125716a1 ja 0x12571d67 */
  if ((!C.cf&&!C.zf)) goto L_12571d67;
  /* 125716a7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 125716ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125716af mov cl, byte ptr [edx + 0x1257201c] */
  CL = (r8((uint32_t)(EDX + 0x1257201c)));
  /* 125716b5 jmp dword ptr [ecx*4 + 0x12571fe0] */
  switch (ECX) {
    case 0: goto L_125716bc;
    case 1: goto L_12571950;
    case 2: goto L_125717e0;
    case 3: goto L_12571a89;
    case 4: goto L_1257174b;
    case 5: goto L_125716d1;
    case 6: goto L_12571a5b;
    case 7: goto L_12571960;
    case 8: goto L_12571905;
    case 9: goto L_12571ad5;
    case 10: goto L_12571a7f;
    case 11: goto L_125717f6;
    case 12: goto L_12571a73;
    case 13: goto L_12571a95;
    case 14: goto L_12571d67;
    default: x86_unimpl("switch@0x125716b5 out of table"); return;
  }
L_125716bc:;
  /* 125716bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125716bf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 125716c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125716c6 jne 0x125716d1 */
  if (!C.zf) goto L_125716d1;
  /* 125716c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125716cb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 125716ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125716d1:;
  /* 125716d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125716d4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 125716da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125716dc je 0x12571717 */
  if (C.zf) goto L_12571717;
  /* 125716de lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 125716e1 push eax */
  push32((uint32_t)(EAX));
  /* 125716e2 call 0x125721b0 */
  push32(0x125716e7u); f_125721b0();
  /* 125716e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125716ea mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 125716ee mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 125716f2 push ecx */
  push32((uint32_t)(ECX));
  /* 125716f3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 125716f9 push edx */
  push32((uint32_t)(EDX));
  /* 125716fa call 0x12573290 */
  push32(0x125716ffu); f_12573290();
  /* 125716ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571702 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12571705 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571709 jge 0x12571715 */
  if ((C.sf==C.of)) goto L_12571715;
  /* 1257170b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12571715:;
  /* 12571715 jmp 0x1257173d */
  goto L_1257173d;
L_12571717:;
  /* 12571717 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1257171a push eax */
  push32((uint32_t)(EAX));
  /* 1257171b call 0x12572170 */
  push32(0x12571720u); f_12572170();
  /* 12571720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571723 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1257172a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12571730 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12571736 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1257173d:;
  /* 1257173d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12571743 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12571746 jmp 0x12571d67 */
  goto L_12571d67;
L_1257174b:;
  /* 1257174b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1257174e push eax */
  push32((uint32_t)(EAX));
  /* 1257174f call 0x12572170 */
  push32(0x12571754u); f_12572170();
  /* 12571754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571757 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1257175d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571764 je 0x12571772 */
  if (C.zf) goto L_12571772;
  /* 12571766 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1257176c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571770 jne 0x1257178c */
  if (!C.zf) goto L_1257178c;
L_12571772:;
  /* 12571772 mov edx, dword ptr [0x12594fb0] */
  EDX = (r32((uint32_t)(0x12594fb0)));
  /* 12571778 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1257177b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1257177e push eax */
  push32((uint32_t)(EAX));
  /* 1257177f call 0x1256d1d0 */
  push32(0x12571784u); f_1256d1d0();
  /* 12571784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571787 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1257178a jmp 0x125717db */
  goto L_125717db;
L_1257178c:;
  /* 1257178c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257178f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12571795 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12571797 je 0x125717bc */
  if (C.zf) goto L_125717bc;
  /* 12571799 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1257179f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125717a2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125717a5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 125717ab movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 125717ae shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 125717b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125717b3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 125717ba jmp 0x125717db */
  goto L_125717db;
L_125717bc:;
  /* 125717bc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 125717c3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 125717c9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125717cc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125717cf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 125717d5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 125717d8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125717db:;
  /* 125717db jmp 0x12571d67 */
  goto L_12571d67;
L_125717e0:;
  /* 125717e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125717e3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 125717e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125717eb jne 0x125717f6 */
  if (!C.zf) goto L_125717f6;
  /* 125717ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125717f0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 125717f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125717f6:;
  /* 125717f6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125717fd jne 0x1257180b */
  if (!C.zf) goto L_1257180b;
  /* 125717ff mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12571809 jmp 0x12571817 */
  goto L_12571817;
L_1257180b:;
  /* 1257180b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12571811 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12571817:;
  /* 12571817 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1257181d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12571823 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12571826 push edx */
  push32((uint32_t)(EDX));
  /* 12571827 call 0x12572170 */
  push32(0x1257182cu); f_12572170();
  /* 1257182c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257182f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12571832 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571835 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1257183a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257183c je 0x125718a6 */
  if (C.zf) goto L_125718a6;
  /* 1257183e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571842 jne 0x1257184d */
  if (!C.zf) goto L_1257184d;
  /* 12571844 mov ecx, dword ptr [0x12594fb4] */
  ECX = (r32((uint32_t)(0x12594fb4)));
  /* 1257184a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1257184d:;
  /* 1257184d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12571854 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12571857 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1257185d:;
  /* 1257185d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12571863 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12571869 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257186c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12571872 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12571874 je 0x12571896 */
  if (C.zf) goto L_12571896;
  /* 12571876 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1257187c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257187e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12571881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12571883 je 0x12571896 */
  if (C.zf) goto L_12571896;
  /* 12571885 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1257188b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257188e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12571894 jmp 0x1257185d */
  goto L_1257185d;
L_12571896:;
  /* 12571896 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1257189c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257189f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 125718a1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125718a4 jmp 0x12571900 */
  goto L_12571900;
L_125718a6:;
  /* 125718a6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125718aa jne 0x125718b4 */
  if (!C.zf) goto L_125718b4;
  /* 125718ac mov eax, dword ptr [0x12594fb0] */
  EAX = (r32((uint32_t)(0x12594fb0)));
  /* 125718b1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_125718b4:;
  /* 125718b4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125718b7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_125718bd:;
  /* 125718bd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 125718c3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 125718c9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125718cc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 125718d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125718d4 je 0x125718f4 */
  if (C.zf) goto L_125718f4;
  /* 125718d6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 125718dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125718df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125718e1 je 0x125718f4 */
  if (C.zf) goto L_125718f4;
  /* 125718e3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 125718e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125718ec mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 125718f2 jmp 0x125718bd */
  goto L_125718bd;
L_125718f4:;
  /* 125718f4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 125718fa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125718fd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12571900:;
  /* 12571900 jmp 0x12571d67 */
  goto L_12571d67;
L_12571905:;
  /* 12571905 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12571908 push edx */
  push32((uint32_t)(EDX));
  /* 12571909 call 0x12572170 */
  push32(0x1257190eu); f_12572170();
  /* 1257190e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571911 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12571917 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257191a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1257191d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257191f je 0x12571933 */
  if (C.zf) goto L_12571933;
  /* 12571921 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12571927 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1257192e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12571931 jmp 0x12571941 */
  goto L_12571941;
L_12571933:;
  /* 12571933 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12571939 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1257193f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12571941:;
  /* 12571941 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1257194b jmp 0x12571d67 */
  goto L_12571d67;
L_12571950:;
  /* 12571950 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12571957 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1257195a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1257195d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12571960:;
  /* 12571960 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571963 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12571965 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12571968 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1257196e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12571971 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571978 jge 0x12571986 */
  if ((C.sf==C.of)) goto L_12571986;
  /* 1257197a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12571984 jmp 0x125719a2 */
  goto L_125719a2;
L_12571986:;
  /* 12571986 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257198d jne 0x125719a2 */
  if (!C.zf) goto L_125719a2;
  /* 1257198f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12571993 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571996 jne 0x125719a2 */
  if (!C.zf) goto L_125719a2;
  /* 12571998 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_125719a2:;
  /* 125719a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125719a5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125719a8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 125719ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125719ae sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125719b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125719b3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 125719b6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 125719bc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 125719c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125719c5 push ecx */
  push32((uint32_t)(ECX));
  /* 125719c6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 125719cc push edx */
  push32((uint32_t)(EDX));
  /* 125719cd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125719d1 push eax */
  push32((uint32_t)(EAX));
  /* 125719d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125719d5 push ecx */
  push32((uint32_t)(ECX));
  /* 125719d6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 125719dc push edx */
  push32((uint32_t)(EDX));
  /* 125719dd call dword ptr [0x125953a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125953a0))), 0x125719e3u);
  /* 125719e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125719e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125719e9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 125719ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125719f0 je 0x12571a08 */
  if (C.zf) goto L_12571a08;
  /* 125719f2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125719f9 jne 0x12571a08 */
  if (!C.zf) goto L_12571a08;
  /* 125719fb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125719fe push ecx */
  push32((uint32_t)(ECX));
  /* 125719ff call dword ptr [0x125953ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125953ac))), 0x12571a05u);
  /* 12571a05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12571a08:;
  /* 12571a08 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12571a0c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571a0f jne 0x12571a2a */
  if (!C.zf) goto L_12571a2a;
  /* 12571a11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571a14 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12571a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12571a1b jne 0x12571a2a */
  if (!C.zf) goto L_12571a2a;
  /* 12571a1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12571a20 push ecx */
  push32((uint32_t)(ECX));
  /* 12571a21 call dword ptr [0x125953a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125953a4))), 0x12571a27u);
  /* 12571a27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12571a2a:;
  /* 12571a2a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12571a2d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12571a30 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571a33 jne 0x12571a47 */
  if (!C.zf) goto L_12571a47;
  /* 12571a35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571a38 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12571a3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12571a3e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12571a41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12571a44 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12571a47:;
  /* 12571a47 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12571a4a push eax */
  push32((uint32_t)(EAX));
  /* 12571a4b call 0x1256d1d0 */
  push32(0x12571a50u); f_1256d1d0();
  /* 12571a50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571a53 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12571a56 jmp 0x12571d67 */
  goto L_12571d67;
L_12571a5b:;
  /* 12571a5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571a5e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12571a61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12571a64 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12571a6e jmp 0x12571af5 */
  goto L_12571af5;
L_12571a73:;
  /* 12571a73 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12571a7d jmp 0x12571af5 */
  goto L_12571af5;
L_12571a7f:;
  /* 12571a7f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12571a89:;
  /* 12571a89 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12571a93 jmp 0x12571a9f */
  goto L_12571a9f;
L_12571a95:;
  /* 12571a95 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12571a9f:;
  /* 12571a9f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12571aa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571aac and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12571ab2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12571ab4 je 0x12571ad3 */
  if (C.zf) goto L_12571ad3;
  /* 12571ab6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12571abd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12571ac3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12571ac6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12571acc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12571ad3:;
  /* 12571ad3 jmp 0x12571af5 */
  goto L_12571af5;
L_12571ad5:;
  /* 12571ad5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12571adf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571ae2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12571ae8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12571aea je 0x12571af5 */
  if (C.zf) goto L_12571af5;
  /* 12571aec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571aef or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12571af2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12571af5:;
  /* 12571af5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571af8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12571afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12571aff je 0x12571b1e */
  if (C.zf) goto L_12571b1e;
  /* 12571b01 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12571b04 push ecx */
  push32((uint32_t)(ECX));
  /* 12571b05 call 0x12572190 */
  push32(0x12571b0au); f_12572190();
  /* 12571b0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571b0d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12571b13 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12571b19 jmp 0x12571baf */
  goto L_12571baf;
L_12571b1e:;
  /* 12571b1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571b21 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12571b24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12571b26 je 0x12571b70 */
  if (C.zf) goto L_12571b70;
  /* 12571b28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571b2b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12571b2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12571b30 je 0x12571b50 */
  if (C.zf) goto L_12571b50;
  /* 12571b32 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12571b35 push ecx */
  push32((uint32_t)(ECX));
  /* 12571b36 call 0x12572170 */
  push32(0x12571b3bu); f_12572170();
  /* 12571b3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571b3e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12571b41 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12571b42 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12571b48 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12571b4e jmp 0x12571b6e */
  goto L_12571b6e;
L_12571b50:;
  /* 12571b50 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12571b53 push edx */
  push32((uint32_t)(EDX));
  /* 12571b54 call 0x12572170 */
  push32(0x12571b59u); f_12572170();
  /* 12571b59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571b5c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12571b61 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12571b62 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12571b68 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12571b6e:;
  /* 12571b6e jmp 0x12571baf */
  goto L_12571baf;
L_12571b70:;
  /* 12571b70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571b73 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12571b76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12571b78 je 0x12571b95 */
  if (C.zf) goto L_12571b95;
  /* 12571b7a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12571b7d push ecx */
  push32((uint32_t)(ECX));
  /* 12571b7e call 0x12572170 */
  push32(0x12571b83u); f_12572170();
  /* 12571b83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571b86 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12571b87 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12571b8d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12571b93 jmp 0x12571baf */
  goto L_12571baf;
L_12571b95:;
  /* 12571b95 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12571b98 push edx */
  push32((uint32_t)(EDX));
  /* 12571b99 call 0x12572170 */
  push32(0x12571b9eu); f_12572170();
  /* 12571b9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571ba1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12571ba3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12571ba9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12571baf:;
  /* 12571baf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571bb2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12571bb5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12571bb7 je 0x12571bf7 */
  if (C.zf) goto L_12571bf7;
  /* 12571bb9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571bc0 jg 0x12571bf7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12571bf7;
  /* 12571bc2 jl 0x12571bcd */
  if ((C.sf!=C.of)) goto L_12571bcd;
  /* 12571bc4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571bcb jae 0x12571bf7 */
  if (!C.cf) goto L_12571bf7;
L_12571bcd:;
  /* 12571bcd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12571bd3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12571bd5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12571bdb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12571bde neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12571be0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12571be6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12571bec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571bef or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12571bf2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12571bf5 jmp 0x12571c0f */
  goto L_12571c0f;
L_12571bf7:;
  /* 12571bf7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12571bfd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12571c03 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12571c09 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12571c0f:;
  /* 12571c0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571c12 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12571c18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12571c1a jne 0x12571c37 */
  if (!C.zf) goto L_12571c37;
  /* 12571c1c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12571c22 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12571c28 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12571c2b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12571c31 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12571c37:;
  /* 12571c37 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571c3e jge 0x12571c4c */
  if ((C.sf==C.of)) goto L_12571c4c;
  /* 12571c40 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12571c4a jmp 0x12571c55 */
  goto L_12571c55;
L_12571c4c:;
  /* 12571c4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571c4f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12571c52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12571c55:;
  /* 12571c55 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12571c5b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12571c61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12571c63 jne 0x12571c6c */
  if (!C.zf) goto L_12571c6c;
  /* 12571c65 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12571c6c:;
  /* 12571c6c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12571c6f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12571c72:;
  /* 12571c72 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12571c78 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12571c7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12571c81 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12571c87 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12571c89 jg 0x12571c9f */
  if ((!C.zf&&C.sf==C.of)) goto L_12571c9f;
  /* 12571c8b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12571c91 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12571c97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12571c99 je 0x12571d20 */
  if (C.zf) goto L_12571d20;
L_12571c9f:;
  /* 12571c9f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12571ca5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12571ca6 push edx */
  push32((uint32_t)(EDX));
  /* 12571ca7 push eax */
  push32((uint32_t)(EAX));
  /* 12571ca8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12571cae push edx */
  push32((uint32_t)(EDX));
  /* 12571caf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12571cb5 push eax */
  push32((uint32_t)(EAX));
  /* 12571cb6 call 0x12571030 */
  push32(0x12571cbbu); f_12571030();
  /* 12571cbb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12571cbe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12571cc4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12571cca cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12571ccb push edx */
  push32((uint32_t)(EDX));
  /* 12571ccc push eax */
  push32((uint32_t)(EAX));
  /* 12571ccd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12571cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12571cd4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12571cda push edx */
  push32((uint32_t)(EDX));
  /* 12571cdb call 0x12570fc0 */
  push32(0x12571ce0u); f_12570fc0();
  /* 12571ce0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12571ce6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12571cec cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571cf3 jle 0x12571d07 */
  if ((C.zf||C.sf!=C.of)) goto L_12571d07;
  /* 12571cf5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12571cfb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12571d01 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12571d07:;
  /* 12571d07 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12571d0a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12571d10 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12571d12 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12571d15 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12571d18 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12571d1b jmp 0x12571c72 */
  goto L_12571c72;
L_12571d20:;
  /* 12571d20 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12571d23 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12571d26 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12571d29 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12571d2c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12571d2f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12571d32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571d35 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12571d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12571d3c je 0x12571d67 */
  if (C.zf) goto L_12571d67;
  /* 12571d3e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12571d41 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12571d44 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571d47 jne 0x12571d4f */
  if (!C.zf) goto L_12571d4f;
  /* 12571d49 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571d4d jne 0x12571d67 */
  if (!C.zf) goto L_12571d67;
L_12571d4f:;
  /* 12571d4f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12571d52 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12571d55 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12571d58 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12571d5b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12571d5e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12571d61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12571d64 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12571d67:;
  /* 12571d67 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571d6e jne 0x12571f42 */
  if (!C.zf) goto L_12571f42;
  /* 12571d74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571d77 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12571d7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12571d7c je 0x12571dcd */
  if (C.zf) goto L_12571dcd;
  /* 12571d7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571d81 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12571d87 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12571d89 je 0x12571d9b */
  if (C.zf) goto L_12571d9b;
  /* 12571d8b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12571d92 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12571d99 jmp 0x12571dcd */
  goto L_12571dcd;
L_12571d9b:;
  /* 12571d9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571d9e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12571da1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12571da3 je 0x12571db5 */
  if (C.zf) goto L_12571db5;
  /* 12571da5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12571dac mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12571db3 jmp 0x12571dcd */
  goto L_12571dcd;
L_12571db5:;
  /* 12571db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571db8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12571dbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12571dbd je 0x12571dcd */
  if (C.zf) goto L_12571dcd;
  /* 12571dbf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12571dc6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12571dcd:;
  /* 12571dcd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12571dd3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12571dd6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12571dd9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12571ddf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571de2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12571de5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12571de7 jne 0x12571e05 */
  if (!C.zf) goto L_12571e05;
  /* 12571de9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12571def push eax */
  push32((uint32_t)(EAX));
  /* 12571df0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12571df3 push ecx */
  push32((uint32_t)(ECX));
  /* 12571df4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12571dfa push edx */
  push32((uint32_t)(EDX));
  /* 12571dfb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12571dfd call 0x125720e0 */
  push32(0x12571e02u); f_125720e0();
  /* 12571e02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12571e05:;
  /* 12571e05 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12571e0b push eax */
  push32((uint32_t)(EAX));
  /* 12571e0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12571e0f push ecx */
  push32((uint32_t)(ECX));
  /* 12571e10 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12571e13 push edx */
  push32((uint32_t)(EDX));
  /* 12571e14 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12571e1a push eax */
  push32((uint32_t)(EAX));
  /* 12571e1b call 0x12572120 */
  push32(0x12571e20u); f_12572120();
  /* 12571e20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571e23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571e26 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12571e29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12571e2b je 0x12571e53 */
  if (C.zf) goto L_12571e53;
  /* 12571e2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571e30 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12571e33 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12571e35 jne 0x12571e53 */
  if (!C.zf) goto L_12571e53;
  /* 12571e37 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12571e3d push eax */
  push32((uint32_t)(EAX));
  /* 12571e3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12571e41 push ecx */
  push32((uint32_t)(ECX));
  /* 12571e42 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12571e48 push edx */
  push32((uint32_t)(EDX));
  /* 12571e49 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12571e4b call 0x125720e0 */
  push32(0x12571e50u); f_125720e0();
  /* 12571e50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12571e53:;
  /* 12571e53 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571e57 je 0x12571f01 */
  if (C.zf) goto L_12571f01;
  /* 12571e5d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571e61 jle 0x12571f01 */
  if ((C.zf||C.sf!=C.of)) goto L_12571f01;
  /* 12571e67 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12571e6a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12571e70 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12571e73 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12571e79:;
  /* 12571e79 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12571e7f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12571e85 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12571e88 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12571e8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12571e90 je 0x12571eff */
  if (C.zf) goto L_12571eff;
  /* 12571e92 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12571e98 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12571e9b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12571ea2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12571ea9 push eax */
  push32((uint32_t)(EAX));
  /* 12571eaa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12571eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12571eb1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12571eb7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12571eba mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12571ec0 call 0x12573290 */
  push32(0x12571ec5u); f_12573290();
  /* 12571ec5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571ec8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12571ece cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12571ed5 jg 0x12571ed9 */
  if ((!C.zf&&C.sf==C.of)) goto L_12571ed9;
  /* 12571ed7 jmp 0x12571eff */
  goto L_12571eff;
L_12571ed9:;
  /* 12571ed9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12571edf push eax */
  push32((uint32_t)(EAX));
  /* 12571ee0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12571ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 12571ee4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12571eea push edx */
  push32((uint32_t)(EDX));
  /* 12571eeb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12571ef1 push eax */
  push32((uint32_t)(EAX));
  /* 12571ef2 call 0x12572120 */
  push32(0x12571ef7u); f_12572120();
  /* 12571ef7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12571efa jmp 0x12571e79 */
  goto L_12571e79;
L_12571eff:;
  /* 12571eff jmp 0x12571f1c */
  goto L_12571f1c;
L_12571f01:;
  /* 12571f01 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12571f07 push ecx */
  push32((uint32_t)(ECX));
  /* 12571f08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12571f0b push edx */
  push32((uint32_t)(EDX));
  /* 12571f0c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12571f0f push eax */
  push32((uint32_t)(EAX));
  /* 12571f10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12571f13 push ecx */
  push32((uint32_t)(ECX));
  /* 12571f14 call 0x12572120 */
  push32(0x12571f19u); f_12572120();
  /* 12571f19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12571f1c:;
  /* 12571f1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12571f1f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12571f22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12571f24 je 0x12571f42 */
  if (C.zf) goto L_12571f42;
  /* 12571f26 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12571f2c push eax */
  push32((uint32_t)(EAX));
  /* 12571f2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12571f30 push ecx */
  push32((uint32_t)(ECX));
  /* 12571f31 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12571f37 push edx */
  push32((uint32_t)(EDX));
  /* 12571f38 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12571f3a call 0x125720e0 */
  push32(0x12571f3fu); f_125720e0();
  /* 12571f3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12571f42:;
  /* 12571f42 jmp 0x12571354 */
  goto L_12571354;
L_12571f47:;
  /* 12571f47 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12571f4d pop edi */
  EDI = (pop32());
  /* 12571f4e pop esi */
  ESI = (pop32());
  /* 12571f4f pop ebx */
  EBX = (pop32());
  /* 12571f50 mov esp, ebp */
  ESP = (EBP);
  /* 12571f52 pop ebp */
  EBP = (pop32());
  /* 12571f53 ret  */
  ESPCHK(0x12571330u, _esp0);
  ESP += 4; return;
}

/* FUN_10012060 @ 0x12572060 (119 bytes, 44 insns) */
void f_12572060(void) {
  FTRACE(0x12572060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12572060 push ebp */
  push32((uint32_t)(EBP));
  /* 12572061 mov ebp, esp */
  EBP = (ESP);
  /* 12572063 push ecx */
  push32((uint32_t)(ECX));
  /* 12572064 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572067 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1257206a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257206d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572070 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12572073 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572076 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257207a jl 0x125720a2 */
  if ((C.sf!=C.of)) goto L_125720a2;
  /* 1257207c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257207f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12572081 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12572084 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12572086 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1257208a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12572090 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12572093 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572096 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12572098 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257209b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257209e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125720a0 jmp 0x125720b5 */
  goto L_125720b5;
L_125720a2:;
  /* 125720a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125720a5 push edx */
  push32((uint32_t)(EDX));
  /* 125720a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125720a9 push eax */
  push32((uint32_t)(EAX));
  /* 125720aa call 0x125710b0 */
  push32(0x125720afu); f_125710b0();
  /* 125720af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125720b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125720b5:;
  /* 125720b5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125720b9 jne 0x125720c6 */
  if (!C.zf) goto L_125720c6;
  /* 125720bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125720be mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 125720c4 jmp 0x125720d3 */
  goto L_125720d3;
L_125720c6:;
  /* 125720c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125720c9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125720cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125720ce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125720d1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_125720d3:;
  /* 125720d3 mov esp, ebp */
  ESP = (EBP);
  /* 125720d5 pop ebp */
  EBP = (pop32());
  /* 125720d6 ret  */
  ESPCHK(0x12572060u, _esp0);
  ESP += 4; return;
}

/* FUN_100120e0 @ 0x125720e0 (53 bytes, 23 insns) */
void f_125720e0(void) {
  FTRACE(0x125720e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125720e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125720e1 mov ebp, esp */
  EBP = (ESP);
L_125720e3:;
  /* 125720e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125720e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125720e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125720ec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 125720ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125720f1 jle 0x12572113 */
  if ((C.zf||C.sf!=C.of)) goto L_12572113;
  /* 125720f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125720f6 push edx */
  push32((uint32_t)(EDX));
  /* 125720f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125720fa push eax */
  push32((uint32_t)(EAX));
  /* 125720fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125720fe push ecx */
  push32((uint32_t)(ECX));
  /* 125720ff call 0x12572060 */
  push32(0x12572104u); f_12572060();
  /* 12572104 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12572107 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257210a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257210d jne 0x12572111 */
  if (!C.zf) goto L_12572111;
  /* 1257210f jmp 0x12572113 */
  goto L_12572113;
L_12572111:;
  /* 12572111 jmp 0x125720e3 */
  goto L_125720e3;
L_12572113:;
  /* 12572113 pop ebp */
  EBP = (pop32());
  /* 12572114 ret  */
  ESPCHK(0x125720e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012120 @ 0x12572120 (74 bytes, 31 insns) */
void f_12572120(void) {
  FTRACE(0x12572120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12572120 push ebp */
  push32((uint32_t)(EBP));
  /* 12572121 mov ebp, esp */
  EBP = (ESP);
  /* 12572123 push ecx */
  push32((uint32_t)(ECX));
L_12572124:;
  /* 12572124 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572127 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257212a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257212d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12572130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12572132 jle 0x12572166 */
  if ((C.zf||C.sf!=C.of)) goto L_12572166;
  /* 12572134 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12572137 push edx */
  push32((uint32_t)(EDX));
  /* 12572138 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257213b push eax */
  push32((uint32_t)(EAX));
  /* 1257213c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257213f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12572142 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12572145 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572148 push eax */
  push32((uint32_t)(EAX));
  /* 12572149 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257214c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257214f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12572152 call 0x12572060 */
  push32(0x12572157u); f_12572060();
  /* 12572157 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257215a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257215d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572160 jne 0x12572164 */
  if (!C.zf) goto L_12572164;
  /* 12572162 jmp 0x12572166 */
  goto L_12572166;
L_12572164:;
  /* 12572164 jmp 0x12572124 */
  goto L_12572124;
L_12572166:;
  /* 12572166 mov esp, ebp */
  ESP = (EBP);
  /* 12572168 pop ebp */
  EBP = (pop32());
  /* 12572169 ret  */
  ESPCHK(0x12572120u, _esp0);
  ESP += 4; return;
}

/* FUN_10012170 @ 0x12572170 (26 bytes, 12 insns) */
void f_12572170(void) {
  FTRACE(0x12572170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12572170 push ebp */
  push32((uint32_t)(EBP));
  /* 12572171 mov ebp, esp */
  EBP = (ESP);
  /* 12572173 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572176 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12572178 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257217b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257217e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12572180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572183 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12572185 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12572188 pop ebp */
  EBP = (pop32());
  /* 12572189 ret  */
  ESPCHK(0x12572170u, _esp0);
  ESP += 4; return;
}

/* FUN_10012190 @ 0x12572190 (31 bytes, 14 insns) */
void f_12572190(void) {
  FTRACE(0x12572190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12572190 push ebp */
  push32((uint32_t)(EBP));
  /* 12572191 mov ebp, esp */
  EBP = (ESP);
  /* 12572193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572196 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12572198 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257219b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257219e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125721a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125721a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125721a5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125721a8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 125721aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125721ad pop ebp */
  EBP = (pop32());
  /* 125721ae ret  */
  ESPCHK(0x12572190u, _esp0);
  ESP += 4; return;
}

/* FUN_100121b0 @ 0x125721b0 (27 bytes, 12 insns) */
void f_125721b0(void) {
  FTRACE(0x125721b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125721b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125721b1 mov ebp, esp */
  EBP = (ESP);
  /* 125721b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125721b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125721b8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125721bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125721be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125721c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125721c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125721c5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 125721c9 pop ebp */
  EBP = (pop32());
  /* 125721ca ret  */
  ESPCHK(0x125721b0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x125721d0 (145 bytes, 42 insns) */
void f_125721d0(void) {
  FTRACE(0x125721d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125721d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125721d1 mov ebp, esp */
  EBP = (ESP);
  /* 125721d3 push ecx */
  push32((uint32_t)(ECX));
  /* 125721d4 call 0x12572280 */
  push32(0x125721d9u); f_12572280();
  /* 125721d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125721dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125721de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125721e5 jmp 0x125721f0 */
  goto L_125721f0;
L_125721e7:;
  /* 125721e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125721ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125721ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125721f0:;
  /* 125721f0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125721f4 jae 0x1257221a */
  if (!C.cf) goto L_1257221a;
  /* 125721f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125721f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125721fc cmp ecx, dword ptr [eax*8 + 0x12594fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12594fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572203 jne 0x12572218 */
  if (!C.zf) goto L_12572218;
  /* 12572205 call 0x12572270 */
  push32(0x1257220au); f_12572270();
  /* 1257220a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257220d mov ecx, dword ptr [edx*8 + 0x12594fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12594fbc)));
  /* 12572214 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12572216 jmp 0x1257225d */
  goto L_1257225d;
L_12572218:;
  /* 12572218 jmp 0x125721e7 */
  goto L_125721e7;
L_1257221a:;
  /* 1257221a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257221e jb 0x12572233 */
  if (C.cf) goto L_12572233;
  /* 12572220 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572224 ja 0x12572233 */
  if ((!C.cf&&!C.zf)) goto L_12572233;
  /* 12572226 call 0x12572270 */
  push32(0x1257222bu); f_12572270();
  /* 1257222b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12572231 jmp 0x1257225d */
  goto L_1257225d;
L_12572233:;
  /* 12572233 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257223a jb 0x12572252 */
  if (C.cf) goto L_12572252;
  /* 1257223c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572243 ja 0x12572252 */
  if ((!C.cf&&!C.zf)) goto L_12572252;
  /* 12572245 call 0x12572270 */
  push32(0x1257224au); f_12572270();
  /* 1257224a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12572250 jmp 0x1257225d */
  goto L_1257225d;
L_12572252:;
  /* 12572252 call 0x12572270 */
  push32(0x12572257u); f_12572270();
  /* 12572257 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1257225d:;
  /* 1257225d mov esp, ebp */
  ESP = (EBP);
  /* 1257225f pop ebp */
  EBP = (pop32());
  /* 12572260 ret  */
  ESPCHK(0x125721d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012270 @ 0x12572270 (13 bytes, 6 insns) */
void f_12572270(void) {
  FTRACE(0x12572270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12572270 push ebp */
  push32((uint32_t)(EBP));
  /* 12572271 mov ebp, esp */
  EBP = (ESP);
  /* 12572273 call 0x12569de0 */
  push32(0x12572278u); f_12569de0();
  /* 12572278 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257227b pop ebp */
  EBP = (pop32());
  /* 1257227c ret  */
  ESPCHK(0x12572270u, _esp0);
  ESP += 4; return;
}

/* FUN_10012280 @ 0x12572280 (13 bytes, 6 insns) */
void f_12572280(void) {
  FTRACE(0x12572280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12572280 push ebp */
  push32((uint32_t)(EBP));
  /* 12572281 mov ebp, esp */
  EBP = (ESP);
  /* 12572283 call 0x12569de0 */
  push32(0x12572288u); f_12569de0();
  /* 12572288 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257228b pop ebp */
  EBP = (pop32());
  /* 1257228c ret  */
  ESPCHK(0x12572280u, _esp0);
  ESP += 4; return;
}

/* FUN_10012290 @ 0x12572290 (664 bytes, 259 insns) [15 switch table(s)] */
void f_12572290(void) {
  FTRACE(0x12572290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12572290 push ebp */
  push32((uint32_t)(EBP));
  /* 12572291 mov ebp, esp */
  EBP = (ESP);
  /* 12572293 push edi */
  push32((uint32_t)(EDI));
  /* 12572294 push esi */
  push32((uint32_t)(ESI));
  /* 12572295 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12572298 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257229b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1257229e mov eax, ecx */
  EAX = (ECX);
  /* 125722a0 mov edx, ecx */
  EDX = (ECX);
  /* 125722a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125722a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125722a6 jbe 0x125722b0 */
  if ((C.cf||C.zf)) goto L_125722b0;
  /* 125722a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125722aa jb 0x12572428 */
  if (C.cf) goto L_12572428;
L_125722b0:;
  /* 125722b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 125722b6 jne 0x125722cc */
  if (!C.zf) goto L_125722cc;
  /* 125722b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125722bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125722be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125722c1 jb 0x125722ec */
  if (C.cf) goto L_125722ec;
  /* 125722c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125722c5 jmp dword ptr [edx*4 + 0x125723d8] */
  switch (EDX) {
    case 0: goto L_125723e8;
    case 1: goto L_125723f0;
    case 2: goto L_125723fc;
    case 3: goto L_12572410;
    default: x86_unimpl("switch@0x125722c5 out of table"); return;
  }
L_125722cc:;
  /* 125722cc mov eax, edi */
  EAX = (EDI);
  /* 125722ce mov edx, 3 */
  EDX = (0x3u);
  /* 125722d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125722d6 jb 0x125722e4 */
  if (C.cf) goto L_125722e4;
  /* 125722d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 125722db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125722dd jmp dword ptr [eax*4 + 0x125722f0] */
  switch (EAX) {
    case 1: goto L_12572300;
    case 2: goto L_1257232c;
    case 3: goto L_12572350;
    default: x86_unimpl("switch@0x125722dd out of table"); return;
  }
L_125722e4:;
  /* 125722e4 jmp dword ptr [ecx*4 + 0x125723e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x125723e8)))); return;
  /* 125722eb nop  */
  /* nop */
L_125722ec:;
  /* 125722ec jmp dword ptr [ecx*4 + 0x1257236c] */
  switch (ECX) {
    case 0: goto L_125723cf;
    case 1: goto L_125723bc;
    case 2: goto L_125723b4;
    case 3: goto L_125723ac;
    case 4: goto L_125723a4;
    case 5: goto L_1257239c;
    case 6: goto L_12572394;
    case 7: goto L_1257238c;
    default: x86_unimpl("switch@0x125722ec out of table"); return;
  }
  /* 125722f3 nop  */
  /* nop */
L_12572300:;
  /* 12572300 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12572302 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12572304 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12572306 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12572309 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1257230c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1257230f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12572312 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12572315 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12572318 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1257231b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257231e jb 0x125722ec */
  if (C.cf) goto L_125722ec;
  /* 12572320 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12572322 jmp dword ptr [edx*4 + 0x125723d8] */
  switch (EDX) {
    case 0: goto L_125723e8;
    case 1: goto L_125723f0;
    case 2: goto L_125723fc;
    case 3: goto L_12572410;
    default: x86_unimpl("switch@0x12572322 out of table"); return;
  }
  /* 12572329 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1257232c:;
  /* 1257232c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1257232e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12572330 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12572332 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12572335 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12572338 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1257233b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1257233e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12572341 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572344 jb 0x125722ec */
  if (C.cf) goto L_125722ec;
  /* 12572346 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12572348 jmp dword ptr [edx*4 + 0x125723d8] */
  switch (EDX) {
    case 0: goto L_125723e8;
    case 1: goto L_125723f0;
    case 2: goto L_125723fc;
    case 3: goto L_12572410;
    default: x86_unimpl("switch@0x12572348 out of table"); return;
  }
  /* 1257234f nop  */
  /* nop */
L_12572350:;
  /* 12572350 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12572352 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12572354 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12572356 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12572357 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1257235a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1257235b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257235e jb 0x125722ec */
  if (C.cf) goto L_125722ec;
  /* 12572360 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12572362 jmp dword ptr [edx*4 + 0x125723d8] */
  switch (EDX) {
    case 0: goto L_125723e8;
    case 1: goto L_125723f0;
    case 2: goto L_125723fc;
    case 3: goto L_12572410;
    default: x86_unimpl("switch@0x12572362 out of table"); return;
  }
  /* 12572369 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1257238c:;
  /* 1257238c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12572390 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12572394:;
  /* 12572394 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12572398 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1257239c:;
  /* 1257239c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 125723a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_125723a4:;
  /* 125723a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 125723a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_125723ac:;
  /* 125723ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 125723b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_125723b4:;
  /* 125723b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 125723b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_125723bc:;
  /* 125723bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 125723c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 125723c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 125723cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125723cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_125723cf:;
  /* 125723cf jmp dword ptr [edx*4 + 0x125723d8] */
  switch (EDX) {
    case 0: goto L_125723e8;
    case 1: goto L_125723f0;
    case 2: goto L_125723fc;
    case 3: goto L_12572410;
    default: x86_unimpl("switch@0x125723cf out of table"); return;
  }
  /* 125723d6 mov edi, edi */
  EDI = (EDI);
L_125723e8:;
  /* 125723e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125723eb pop esi */
  ESI = (pop32());
  /* 125723ec pop edi */
  EDI = (pop32());
  /* 125723ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125723ee ret  */
  ESPCHK(0x12572290u, _esp0);
  ESP += 4; return;
  /* 125723ef nop  */
  /* nop */
L_125723f0:;
  /* 125723f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125723f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125723f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125723f7 pop esi */
  ESI = (pop32());
  /* 125723f8 pop edi */
  EDI = (pop32());
  /* 125723f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125723fa ret  */
  ESPCHK(0x12572290u, _esp0);
  ESP += 4; return;
  /* 125723fb nop  */
  /* nop */
L_125723fc:;
  /* 125723fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125723fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12572400 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12572403 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12572406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572409 pop esi */
  ESI = (pop32());
  /* 1257240a pop edi */
  EDI = (pop32());
  /* 1257240b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1257240c ret  */
  ESPCHK(0x12572290u, _esp0);
  ESP += 4; return;
  /* 1257240d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12572410:;
  /* 12572410 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12572412 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12572414 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12572417 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1257241a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1257241d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12572420 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572423 pop esi */
  ESI = (pop32());
  /* 12572424 pop edi */
  EDI = (pop32());
  /* 12572425 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12572426 ret  */
  ESPCHK(0x12572290u, _esp0);
  ESP += 4; return;
  /* 12572427 nop  */
  /* nop */
L_12572428:;
  /* 12572428 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1257242c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12572430 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12572436 jne 0x1257245c */
  if (!C.zf) goto L_1257245c;
  /* 12572438 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1257243b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1257243e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572441 jb 0x12572450 */
  if (C.cf) goto L_12572450;
  /* 12572443 std  */
  C.df=1;
  /* 12572444 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12572446 cld  */
  C.df=0;
  /* 12572447 jmp dword ptr [edx*4 + 0x12572570] */
  switch (EDX) {
    case 0: goto L_12572580;
    case 1: goto L_12572588;
    case 2: goto L_12572598;
    case 3: goto L_125725ac;
    default: x86_unimpl("switch@0x12572447 out of table"); return;
  }
  /* 1257244e mov edi, edi */
  EDI = (EDI);
L_12572450:;
  /* 12572450 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12572452 jmp dword ptr [ecx*4 + 0x12572520] */
  switch (ECX) {
    case 0: goto L_12572567;
    default: x86_unimpl("switch@0x12572452 out of table"); return;
  }
  /* 12572459 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1257245c:;
  /* 1257245c mov eax, edi */
  EAX = (EDI);
  /* 1257245e mov edx, 3 */
  EDX = (0x3u);
  /* 12572463 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572466 jb 0x12572474 */
  if (C.cf) goto L_12572474;
  /* 12572468 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1257246b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257246d jmp dword ptr [eax*4 + 0x12572478] */
  switch (EAX) {
    case 1: goto L_12572488;
    case 2: goto L_125724a8;
    case 3: goto L_125724d0;
    default: x86_unimpl("switch@0x1257246d out of table"); return;
  }
L_12572474:;
  /* 12572474 jmp dword ptr [ecx*4 + 0x12572570] */
  switch (ECX) {
    case 0: goto L_12572580;
    case 1: goto L_12572588;
    case 2: goto L_12572598;
    case 3: goto L_125725ac;
    default: x86_unimpl("switch@0x12572474 out of table"); return;
  }
  /* 1257247b nop  */
  /* nop */
L_12572488:;
  /* 12572488 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1257248b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1257248d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12572490 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12572491 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12572494 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12572495 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572498 jb 0x12572450 */
  if (C.cf) goto L_12572450;
  /* 1257249a std  */
  C.df=1;
  /* 1257249b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1257249d cld  */
  C.df=0;
  /* 1257249e jmp dword ptr [edx*4 + 0x12572570] */
  switch (EDX) {
    case 0: goto L_12572580;
    case 1: goto L_12572588;
    case 2: goto L_12572598;
    case 3: goto L_125725ac;
    default: x86_unimpl("switch@0x1257249e out of table"); return;
  }
  /* 125724a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125724a8:;
  /* 125724a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125724ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125724ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125724b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125724b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125724b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125724b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125724bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125724bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125724c2 jb 0x12572450 */
  if (C.cf) goto L_12572450;
  /* 125724c4 std  */
  C.df=1;
  /* 125724c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125724c7 cld  */
  C.df=0;
  /* 125724c8 jmp dword ptr [edx*4 + 0x12572570] */
  switch (EDX) {
    case 0: goto L_12572580;
    case 1: goto L_12572588;
    case 2: goto L_12572598;
    case 3: goto L_125725ac;
    default: x86_unimpl("switch@0x125724c8 out of table"); return;
  }
  /* 125724cf nop  */
  /* nop */
L_125724d0:;
  /* 125724d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125724d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125724d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125724d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125724db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125724de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125724e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125724e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125724e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125724ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125724ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125724f0 jb 0x12572450 */
  if (C.cf) goto L_12572450;
  /* 125724f6 std  */
  C.df=1;
  /* 125724f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125724f9 cld  */
  C.df=0;
  /* 125724fa jmp dword ptr [edx*4 + 0x12572570] */
  switch (EDX) {
    case 0: goto L_12572580;
    case 1: goto L_12572588;
    case 2: goto L_12572598;
    case 3: goto L_125725ac;
    default: x86_unimpl("switch@0x125724fa out of table"); return;
  }
  /* 12572501 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12572504 and al, 0x25 */
  { uint32_t _r=(AL)&(0x25u); AL = (_r); fl_logic(_r,8); }
  /* 12572506 push edi */
  push32((uint32_t)(EDI));
  /* 12572507 adc ch, byte ptr [0x25341257] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(0x25341257))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1257250e push edi */
  push32((uint32_t)(EDI));
  /* 1257250f adc bh, byte ptr [0x25441257] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(0x25441257))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12572516 push edi */
  push32((uint32_t)(EDI));
  /* 12572517 adc cl, byte ptr [ebp + 0x57] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + 0x57))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1257251b adc dl, byte ptr [ebp + 0x57] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EBP + 0x57))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12572524 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12572528 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1257252c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12572530 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12572534 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12572538 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1257253c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12572540 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12572544 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12572548 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1257254c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12572550 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12572554 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12572558 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1257255c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12572563 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12572565 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12572567:;
  /* 12572567 jmp dword ptr [edx*4 + 0x12572570] */
  switch (EDX) {
    case 0: goto L_12572580;
    case 1: goto L_12572588;
    case 2: goto L_12572598;
    case 3: goto L_125725ac;
    default: x86_unimpl("switch@0x12572567 out of table"); return;
  }
  /* 1257256e mov edi, edi */
  EDI = (EDI);
L_12572580:;
  /* 12572580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572583 pop esi */
  ESI = (pop32());
  /* 12572584 pop edi */
  EDI = (pop32());
  /* 12572585 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12572586 ret  */
  ESPCHK(0x12572290u, _esp0);
  ESP += 4; return;
  /* 12572587 nop  */
  /* nop */
L_12572588:;
  /* 12572588 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1257258b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1257258e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572591 pop esi */
  ESI = (pop32());
  /* 12572592 pop edi */
  EDI = (pop32());
  /* 12572593 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12572594 ret  */
  ESPCHK(0x12572290u, _esp0);
  ESP += 4; return;
  /* 12572595 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12572598:;
  /* 12572598 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1257259b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1257259e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125725a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125725a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125725a7 pop esi */
  ESI = (pop32());
  /* 125725a8 pop edi */
  EDI = (pop32());
  /* 125725a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125725aa ret  */
  ESPCHK(0x12572290u, _esp0);
  ESP += 4; return;
  /* 125725ab nop  */
  /* nop */
L_125725ac:;
  /* 125725ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125725af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125725b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125725b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125725b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125725bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125725be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125725c1 pop esi */
  ESI = (pop32());
  /* 125725c2 pop edi */
  EDI = (pop32());
  /* 125725c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125725c4 ret  */
  ESPCHK(0x12572290u, _esp0);
  ESP += 4; return;
}

/* FUN_100125d0 @ 0x125725d0 (421 bytes, 148 insns) */
void f_125725d0(void) {
  FTRACE(0x125725d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125725d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125725d1 mov ebp, esp */
  EBP = (ESP);
  /* 125725d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125725d5 push 0x12592618 */
  push32((uint32_t)(0x12592618u));
  /* 125725da push 0x125734a8 */
  push32((uint32_t)(0x125734a8u));
  /* 125725df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125725e5 push eax */
  push32((uint32_t)(EAX));
  /* 125725e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125725ed add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125725f0 push ebx */
  push32((uint32_t)(EBX));
  /* 125725f1 push esi */
  push32((uint32_t)(ESI));
  /* 125725f2 push edi */
  push32((uint32_t)(EDI));
  /* 125725f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125725f6 cmp dword ptr [0x12596bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125725fd jne 0x1257264e */
  if (!C.zf) goto L_1257264e;
  /* 125725ff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12572602 push eax */
  push32((uint32_t)(EAX));
  /* 12572603 push 1 */
  push32((uint32_t)(0x1u));
  /* 12572605 push 0x12592614 */
  push32((uint32_t)(0x12592614u));
  /* 1257260a push 1 */
  push32((uint32_t)(0x1u));
  /* 1257260c call dword ptr [0x12599324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599324))), 0x12572612u);
  /* 12572612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12572614 je 0x12572622 */
  if (C.zf) goto L_12572622;
  /* 12572616 mov dword ptr [0x12596bc4], 1 */
  w32((uint32_t)(0x12596bc4), (0x1u));
  /* 12572620 jmp 0x1257264e */
  goto L_1257264e;
L_12572622:;
  /* 12572622 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12572625 push ecx */
  push32((uint32_t)(ECX));
  /* 12572626 push 1 */
  push32((uint32_t)(0x1u));
  /* 12572628 push 0x12592610 */
  push32((uint32_t)(0x12592610u));
  /* 1257262d push 1 */
  push32((uint32_t)(0x1u));
  /* 1257262f push 0 */
  push32((uint32_t)(0x0u));
  /* 12572631 call dword ptr [0x12599334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599334))), 0x12572637u);
  /* 12572637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12572639 je 0x12572647 */
  if (C.zf) goto L_12572647;
  /* 1257263b mov dword ptr [0x12596bc4], 2 */
  w32((uint32_t)(0x12596bc4), (0x2u));
  /* 12572645 jmp 0x1257264e */
  goto L_1257264e;
L_12572647:;
  /* 12572647 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12572649 jmp 0x12572778 */
  goto L_12572778;
L_1257264e:;
  /* 1257264e cmp dword ptr [0x12596bc4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12596bc4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572655 jne 0x12572685 */
  if (!C.zf) goto L_12572685;
  /* 12572657 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257265b jne 0x12572666 */
  if (!C.zf) goto L_12572666;
  /* 1257265d mov edx, dword ptr [0x12596bd0] */
  EDX = (r32((uint32_t)(0x12596bd0)));
  /* 12572663 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12572666:;
  /* 12572666 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12572669 push eax */
  push32((uint32_t)(EAX));
  /* 1257266a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1257266d push ecx */
  push32((uint32_t)(ECX));
  /* 1257266e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572671 push edx */
  push32((uint32_t)(EDX));
  /* 12572672 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572675 push eax */
  push32((uint32_t)(EAX));
  /* 12572676 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12572679 push ecx */
  push32((uint32_t)(ECX));
  /* 1257267a call dword ptr [0x12599334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599334))), 0x12572680u);
  /* 12572680 jmp 0x12572778 */
  goto L_12572778;
L_12572685:;
  /* 12572685 cmp dword ptr [0x12596bc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12596bc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257268c jne 0x12572776 */
  if (!C.zf) goto L_12572776;
  /* 12572692 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572696 jne 0x125726a1 */
  if (!C.zf) goto L_125726a1;
  /* 12572698 mov edx, dword ptr [0x12596be0] */
  EDX = (r32((uint32_t)(0x12596be0)));
  /* 1257269e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_125726a1:;
  /* 125726a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125726a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125726a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125726a8 push eax */
  push32((uint32_t)(EAX));
  /* 125726a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125726ac push ecx */
  push32((uint32_t)(ECX));
  /* 125726ad mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 125726b0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125726b2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125726b4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 125726b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125726ba push edx */
  push32((uint32_t)(EDX));
  /* 125726bb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125726be push eax */
  push32((uint32_t)(EAX));
  /* 125726bf call dword ptr [0x1259932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259932c))), 0x125726c5u);
  /* 125726c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125726c8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125726cc jne 0x125726d5 */
  if (!C.zf) goto L_125726d5;
  /* 125726ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125726d0 jmp 0x12572778 */
  goto L_12572778;
L_125726d5:;
  /* 125726d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125726dc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125726df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125726e1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125726e4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125726e6 call 0x1256d540 */
  push32(0x125726ebu); f_1256d540();
  /* 125726eb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 125726ee mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125726f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125726f4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125726f7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125726fa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 125726fc push edx */
  push32((uint32_t)(EDX));
  /* 125726fd push 0 */
  push32((uint32_t)(0x0u));
  /* 125726ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12572702 push eax */
  push32((uint32_t)(EAX));
  /* 12572703 call 0x1256e110 */
  push32(0x12572708u); f_1256e110();
  /* 12572708 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257270b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12572712 jmp 0x1257272b */
  goto L_1257272b;
  /* 12572714 mov eax, 1 */
  EAX = (0x1u);
  /* 12572719 ret  */
  ESPCHK(0x125725d0u, _esp0);
  ESP += 4; return;
  /* 1257271a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1257271d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12572724 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1257272b:;
  /* 1257272b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257272f jne 0x12572735 */
  if (!C.zf) goto L_12572735;
  /* 12572731 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12572733 jmp 0x12572778 */
  goto L_12572778;
L_12572735:;
  /* 12572735 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12572738 push ecx */
  push32((uint32_t)(ECX));
  /* 12572739 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1257273c push edx */
  push32((uint32_t)(EDX));
  /* 1257273d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12572740 push eax */
  push32((uint32_t)(EAX));
  /* 12572741 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572744 push ecx */
  push32((uint32_t)(ECX));
  /* 12572745 push 1 */
  push32((uint32_t)(0x1u));
  /* 12572747 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1257274a push edx */
  push32((uint32_t)(EDX));
  /* 1257274b call dword ptr [0x1259932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259932c))), 0x12572751u);
  /* 12572751 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12572754 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572758 jne 0x1257275e */
  if (!C.zf) goto L_1257275e;
  /* 1257275a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257275c jmp 0x12572778 */
  goto L_12572778;
L_1257275e:;
  /* 1257275e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12572761 push eax */
  push32((uint32_t)(EAX));
  /* 12572762 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12572765 push ecx */
  push32((uint32_t)(ECX));
  /* 12572766 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12572769 push edx */
  push32((uint32_t)(EDX));
  /* 1257276a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257276d push eax */
  push32((uint32_t)(EAX));
  /* 1257276e call dword ptr [0x12599324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599324))), 0x12572774u);
  /* 12572774 jmp 0x12572778 */
  goto L_12572778;
L_12572776:;
  /* 12572776 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12572778:;
  /* 12572778 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1257277b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257277e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12572785 pop edi */
  EDI = (pop32());
  /* 12572786 pop esi */
  ESI = (pop32());
  /* 12572787 pop ebx */
  EBX = (pop32());
  /* 12572788 mov esp, ebp */
  ESP = (EBP);
  /* 1257278a pop ebp */
  EBP = (pop32());
  /* 1257278b ret  */
  ESPCHK(0x125725d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012790 @ 0x12572790 (727 bytes, 263 insns) */
void f_12572790(void) {
  FTRACE(0x12572790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12572790 push ebp */
  push32((uint32_t)(EBP));
  /* 12572791 mov ebp, esp */
  EBP = (ESP);
  /* 12572793 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12572795 push 0x12592628 */
  push32((uint32_t)(0x12592628u));
  /* 1257279a push 0x125734a8 */
  push32((uint32_t)(0x125734a8u));
  /* 1257279f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125727a5 push eax */
  push32((uint32_t)(EAX));
  /* 125727a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125727ad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125727b0 push ebx */
  push32((uint32_t)(EBX));
  /* 125727b1 push esi */
  push32((uint32_t)(ESI));
  /* 125727b2 push edi */
  push32((uint32_t)(EDI));
  /* 125727b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125727b6 cmp dword ptr [0x12596be8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596be8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125727bd jne 0x12572816 */
  if (!C.zf) goto L_12572816;
  /* 125727bf push 0 */
  push32((uint32_t)(0x0u));
  /* 125727c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125727c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125727c5 push 0x12592614 */
  push32((uint32_t)(0x12592614u));
  /* 125727ca push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125727cf push 0 */
  push32((uint32_t)(0x0u));
  /* 125727d1 call dword ptr [0x12599328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599328))), 0x125727d7u);
  /* 125727d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125727d9 je 0x125727e7 */
  if (C.zf) goto L_125727e7;
  /* 125727db mov dword ptr [0x12596be8], 1 */
  w32((uint32_t)(0x12596be8), (0x1u));
  /* 125727e5 jmp 0x12572816 */
  goto L_12572816;
L_125727e7:;
  /* 125727e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125727e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125727eb push 1 */
  push32((uint32_t)(0x1u));
  /* 125727ed push 0x12592610 */
  push32((uint32_t)(0x12592610u));
  /* 125727f2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125727f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125727f9 call dword ptr [0x12599320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599320))), 0x125727ffu);
  /* 125727ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12572801 je 0x1257280f */
  if (C.zf) goto L_1257280f;
  /* 12572803 mov dword ptr [0x12596be8], 2 */
  w32((uint32_t)(0x12596be8), (0x2u));
  /* 1257280d jmp 0x12572816 */
  goto L_12572816;
L_1257280f:;
  /* 1257280f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12572811 jmp 0x12572a81 */
  goto L_12572a81;
L_12572816:;
  /* 12572816 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257281a jle 0x1257282f */
  if ((C.zf||C.sf!=C.of)) goto L_1257282f;
  /* 1257281c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257281f push eax */
  push32((uint32_t)(EAX));
  /* 12572820 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12572823 push ecx */
  push32((uint32_t)(ECX));
  /* 12572824 call 0x12572aa0 */
  push32(0x12572829u); f_12572aa0();
  /* 12572829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257282c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1257282f:;
  /* 1257282f cmp dword ptr [0x12596be8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12596be8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572836 jne 0x1257285b */
  if (!C.zf) goto L_1257285b;
  /* 12572838 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1257283b push edx */
  push32((uint32_t)(EDX));
  /* 1257283c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1257283f push eax */
  push32((uint32_t)(EAX));
  /* 12572840 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12572843 push ecx */
  push32((uint32_t)(ECX));
  /* 12572844 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12572847 push edx */
  push32((uint32_t)(EDX));
  /* 12572848 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257284b push eax */
  push32((uint32_t)(EAX));
  /* 1257284c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257284f push ecx */
  push32((uint32_t)(ECX));
  /* 12572850 call dword ptr [0x12599320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599320))), 0x12572856u);
  /* 12572856 jmp 0x12572a81 */
  goto L_12572a81;
L_1257285b:;
  /* 1257285b cmp dword ptr [0x12596be8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12596be8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572862 jne 0x12572a7f */
  if (!C.zf) goto L_12572a7f;
  /* 12572868 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257286c jne 0x12572877 */
  if (!C.zf) goto L_12572877;
  /* 1257286e mov edx, dword ptr [0x12596be0] */
  EDX = (r32((uint32_t)(0x12596be0)));
  /* 12572874 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12572877:;
  /* 12572877 push 0 */
  push32((uint32_t)(0x0u));
  /* 12572879 push 0 */
  push32((uint32_t)(0x0u));
  /* 1257287b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1257287e push eax */
  push32((uint32_t)(EAX));
  /* 1257287f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12572882 push ecx */
  push32((uint32_t)(ECX));
  /* 12572883 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12572886 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12572888 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257288a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1257288d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12572890 push edx */
  push32((uint32_t)(EDX));
  /* 12572891 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12572894 push eax */
  push32((uint32_t)(EAX));
  /* 12572895 call dword ptr [0x1259932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259932c))), 0x1257289bu);
  /* 1257289b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1257289e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125728a2 jne 0x125728ab */
  if (!C.zf) goto L_125728ab;
  /* 125728a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125728a6 jmp 0x12572a81 */
  goto L_12572a81;
L_125728ab:;
  /* 125728ab mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125728b2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125728b5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125728b7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125728ba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125728bc call 0x1256d540 */
  push32(0x125728c1u); f_1256d540();
  /* 125728c1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 125728c4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125728c7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125728ca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125728cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125728d4 jmp 0x125728ed */
  goto L_125728ed;
  /* 125728d6 mov eax, 1 */
  EAX = (0x1u);
  /* 125728db ret  */
  ESPCHK(0x12572790u, _esp0);
  ESP += 4; return;
  /* 125728dc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125728df mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125728e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125728ed:;
  /* 125728ed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125728f1 jne 0x125728fa */
  if (!C.zf) goto L_125728fa;
  /* 125728f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125728f5 jmp 0x12572a81 */
  goto L_12572a81;
L_125728fa:;
  /* 125728fa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125728fd push edx */
  push32((uint32_t)(EDX));
  /* 125728fe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12572901 push eax */
  push32((uint32_t)(EAX));
  /* 12572902 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12572905 push ecx */
  push32((uint32_t)(ECX));
  /* 12572906 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12572909 push edx */
  push32((uint32_t)(EDX));
  /* 1257290a push 1 */
  push32((uint32_t)(0x1u));
  /* 1257290c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1257290f push eax */
  push32((uint32_t)(EAX));
  /* 12572910 call dword ptr [0x1259932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259932c))), 0x12572916u);
  /* 12572916 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12572918 jne 0x12572921 */
  if (!C.zf) goto L_12572921;
  /* 1257291a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257291c jmp 0x12572a81 */
  goto L_12572a81;
L_12572921:;
  /* 12572921 push 0 */
  push32((uint32_t)(0x0u));
  /* 12572923 push 0 */
  push32((uint32_t)(0x0u));
  /* 12572925 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12572928 push ecx */
  push32((uint32_t)(ECX));
  /* 12572929 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1257292c push edx */
  push32((uint32_t)(EDX));
  /* 1257292d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572930 push eax */
  push32((uint32_t)(EAX));
  /* 12572931 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572934 push ecx */
  push32((uint32_t)(ECX));
  /* 12572935 call dword ptr [0x12599328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599328))), 0x1257293bu);
  /* 1257293b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1257293e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572942 jne 0x1257294b */
  if (!C.zf) goto L_1257294b;
  /* 12572944 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12572946 jmp 0x12572a81 */
  goto L_12572a81;
L_1257294b:;
  /* 1257294b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257294e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12572954 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12572956 je 0x1257299b */
  if (C.zf) goto L_1257299b;
  /* 12572958 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257295c je 0x12572996 */
  if (C.zf) goto L_12572996;
  /* 1257295e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12572961 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572964 jle 0x1257296d */
  if ((C.zf||C.sf!=C.of)) goto L_1257296d;
  /* 12572966 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12572968 jmp 0x12572a81 */
  goto L_12572a81;
L_1257296d:;
  /* 1257296d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12572970 push ecx */
  push32((uint32_t)(ECX));
  /* 12572971 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12572974 push edx */
  push32((uint32_t)(EDX));
  /* 12572975 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12572978 push eax */
  push32((uint32_t)(EAX));
  /* 12572979 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1257297c push ecx */
  push32((uint32_t)(ECX));
  /* 1257297d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572980 push edx */
  push32((uint32_t)(EDX));
  /* 12572981 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572984 push eax */
  push32((uint32_t)(EAX));
  /* 12572985 call dword ptr [0x12599328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599328))), 0x1257298bu);
  /* 1257298b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257298d jne 0x12572996 */
  if (!C.zf) goto L_12572996;
  /* 1257298f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12572991 jmp 0x12572a81 */
  goto L_12572a81;
L_12572996:;
  /* 12572996 jmp 0x12572a7a */
  goto L_12572a7a;
L_1257299b:;
  /* 1257299b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1257299e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 125729a1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125729a8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125729ab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125729ad add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125729b0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125729b2 call 0x1256d540 */
  push32(0x125729b7u); f_1256d540();
  /* 125729b7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 125729ba mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125729bd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 125729c0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125729c3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125729ca jmp 0x125729e3 */
  goto L_125729e3;
  /* 125729cc mov eax, 1 */
  EAX = (0x1u);
  /* 125729d1 ret  */
  ESPCHK(0x12572790u, _esp0);
  ESP += 4; return;
  /* 125729d2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125729d5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125729dc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125729e3:;
  /* 125729e3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125729e7 jne 0x125729f0 */
  if (!C.zf) goto L_125729f0;
  /* 125729e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125729eb jmp 0x12572a81 */
  goto L_12572a81;
L_125729f0:;
  /* 125729f0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125729f3 push eax */
  push32((uint32_t)(EAX));
  /* 125729f4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125729f7 push ecx */
  push32((uint32_t)(ECX));
  /* 125729f8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125729fb push edx */
  push32((uint32_t)(EDX));
  /* 125729fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125729ff push eax */
  push32((uint32_t)(EAX));
  /* 12572a00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572a03 push ecx */
  push32((uint32_t)(ECX));
  /* 12572a04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572a07 push edx */
  push32((uint32_t)(EDX));
  /* 12572a08 call dword ptr [0x12599328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599328))), 0x12572a0eu);
  /* 12572a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12572a10 jne 0x12572a16 */
  if (!C.zf) goto L_12572a16;
  /* 12572a12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12572a14 jmp 0x12572a81 */
  goto L_12572a81;
L_12572a16:;
  /* 12572a16 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572a1a jne 0x12572a4a */
  if (!C.zf) goto L_12572a4a;
  /* 12572a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12572a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12572a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12572a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12572a24 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12572a27 push eax */
  push32((uint32_t)(EAX));
  /* 12572a28 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12572a2b push ecx */
  push32((uint32_t)(ECX));
  /* 12572a2c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12572a31 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12572a34 push edx */
  push32((uint32_t)(EDX));
  /* 12572a35 call dword ptr [0x12599378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599378))), 0x12572a3bu);
  /* 12572a3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12572a3e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572a42 jne 0x12572a48 */
  if (!C.zf) goto L_12572a48;
  /* 12572a44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12572a46 jmp 0x12572a81 */
  goto L_12572a81;
L_12572a48:;
  /* 12572a48 jmp 0x12572a7a */
  goto L_12572a7a;
L_12572a4a:;
  /* 12572a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12572a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12572a4e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12572a51 push eax */
  push32((uint32_t)(EAX));
  /* 12572a52 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12572a55 push ecx */
  push32((uint32_t)(ECX));
  /* 12572a56 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12572a59 push edx */
  push32((uint32_t)(EDX));
  /* 12572a5a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12572a5d push eax */
  push32((uint32_t)(EAX));
  /* 12572a5e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12572a63 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12572a66 push ecx */
  push32((uint32_t)(ECX));
  /* 12572a67 call dword ptr [0x12599378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599378))), 0x12572a6du);
  /* 12572a6d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12572a70 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572a74 jne 0x12572a7a */
  if (!C.zf) goto L_12572a7a;
  /* 12572a76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12572a78 jmp 0x12572a81 */
  goto L_12572a81;
L_12572a7a:;
  /* 12572a7a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12572a7d jmp 0x12572a81 */
  goto L_12572a81;
L_12572a7f:;
  /* 12572a7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12572a81:;
  /* 12572a81 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12572a84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12572a87 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12572a8e pop edi */
  EDI = (pop32());
  /* 12572a8f pop esi */
  ESI = (pop32());
  /* 12572a90 pop ebx */
  EBX = (pop32());
  /* 12572a91 mov esp, ebp */
  ESP = (EBP);
  /* 12572a93 pop ebp */
  EBP = (pop32());
  /* 12572a94 ret  */
  ESPCHK(0x12572790u, _esp0);
  ESP += 4; return;
}

/* FUN_10012aa0 @ 0x12572aa0 (80 bytes, 32 insns) */
void f_12572aa0(void) {
  FTRACE(0x12572aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12572aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12572aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12572aa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12572aa6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572aa9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12572aac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572aaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12572ab2:;
  /* 12572ab2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12572ab5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12572ab8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12572abb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12572abe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12572ac0 je 0x12572ad7 */
  if (C.zf) goto L_12572ad7;
  /* 12572ac2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572ac5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12572ac8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12572aca je 0x12572ad7 */
  if (C.zf) goto L_12572ad7;
  /* 12572acc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572acf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12572ad2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12572ad5 jmp 0x12572ab2 */
  goto L_12572ab2;
L_12572ad7:;
  /* 12572ad7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572ada movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12572add test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12572adf jne 0x12572ae9 */
  if (!C.zf) goto L_12572ae9;
  /* 12572ae1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572ae4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12572ae7 jmp 0x12572aec */
  goto L_12572aec;
L_12572ae9:;
  /* 12572ae9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12572aec:;
  /* 12572aec mov esp, ebp */
  ESP = (EBP);
  /* 12572aee pop ebp */
  EBP = (pop32());
  /* 12572aef ret  */
  ESPCHK(0x12572aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012af0 @ 0x12572af0 (130 bytes, 43 insns) */
void f_12572af0(void) {
  FTRACE(0x12572af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12572af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12572af1 mov ebp, esp */
  EBP = (ESP);
  /* 12572af3 push ecx */
  push32((uint32_t)(ECX));
  /* 12572af4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572af7 cmp eax, dword ptr [0x125984dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125984dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572afd jae 0x12572b21 */
  if (!C.cf) goto L_12572b21;
  /* 12572aff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572b02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12572b05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572b08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12572b0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12572b0e mov eax, dword ptr [ecx*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125983a0)));
  /* 12572b15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12572b1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12572b1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12572b1f jne 0x12572b3c */
  if (!C.zf) goto L_12572b3c;
L_12572b21:;
  /* 12572b21 call 0x12572270 */
  push32(0x12572b26u); f_12572270();
  /* 12572b26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12572b2c call 0x12572280 */
  push32(0x12572b31u); f_12572280();
  /* 12572b31 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12572b37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12572b3a jmp 0x12572b6e */
  goto L_12572b6e;
L_12572b3c:;
  /* 12572b3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572b3f push edx */
  push32((uint32_t)(EDX));
  /* 12572b40 call 0x12573a90 */
  push32(0x12572b45u); f_12573a90();
  /* 12572b45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12572b48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12572b4b push eax */
  push32((uint32_t)(EAX));
  /* 12572b4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572b4f push ecx */
  push32((uint32_t)(ECX));
  /* 12572b50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572b53 push edx */
  push32((uint32_t)(EDX));
  /* 12572b54 call 0x12572b80 */
  push32(0x12572b59u); f_12572b80();
  /* 12572b59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12572b5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12572b5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572b62 push eax */
  push32((uint32_t)(EAX));
  /* 12572b63 call 0x12573b20 */
  push32(0x12572b68u); f_12573b20();
  /* 12572b68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12572b6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12572b6e:;
  /* 12572b6e mov esp, ebp */
  ESP = (EBP);
  /* 12572b70 pop ebp */
  EBP = (pop32());
  /* 12572b71 ret  */
  ESPCHK(0x12572af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b80 @ 0x12572b80 (178 bytes, 56 insns) */
void f_12572b80(void) {
  FTRACE(0x12572b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12572b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12572b81 mov ebp, esp */
  EBP = (ESP);
  /* 12572b83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12572b86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572b89 push eax */
  push32((uint32_t)(EAX));
  /* 12572b8a call 0x12573910 */
  push32(0x12572b8fu); f_12573910();
  /* 12572b8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12572b92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12572b95 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572b99 jne 0x12572bae */
  if (!C.zf) goto L_12572bae;
  /* 12572b9b call 0x12572270 */
  push32(0x12572ba0u); f_12572270();
  /* 12572ba0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12572ba6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12572ba9 jmp 0x12572c2e */
  goto L_12572c2e;
L_12572bae:;
  /* 12572bae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12572bb1 push ecx */
  push32((uint32_t)(ECX));
  /* 12572bb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12572bb4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572bb7 push edx */
  push32((uint32_t)(EDX));
  /* 12572bb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12572bbb push eax */
  push32((uint32_t)(EAX));
  /* 12572bbc call dword ptr [0x12599318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599318))), 0x12572bc2u);
  /* 12572bc2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12572bc5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572bc9 jne 0x12572bd6 */
  if (!C.zf) goto L_12572bd6;
  /* 12572bcb call dword ptr [0x125993e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993e8))), 0x12572bd1u);
  /* 12572bd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12572bd4 jmp 0x12572bdd */
  goto L_12572bdd;
L_12572bd6:;
  /* 12572bd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12572bdd:;
  /* 12572bdd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572be1 je 0x12572bf4 */
  if (C.zf) goto L_12572bf4;
  /* 12572be3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572be6 push ecx */
  push32((uint32_t)(ECX));
  /* 12572be7 call 0x125721d0 */
  push32(0x12572becu); f_125721d0();
  /* 12572bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12572bef or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12572bf2 jmp 0x12572c2e */
  goto L_12572c2e;
L_12572bf4:;
  /* 12572bf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572bf7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12572bfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572bfd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12572c00 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12572c03 mov ecx, dword ptr [edx*4 + 0x125983a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x125983a0)));
  /* 12572c0a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12572c0e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12572c11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572c14 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12572c17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572c1a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12572c1d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12572c20 mov eax, dword ptr [eax*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x125983a0)));
  /* 12572c27 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12572c2b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12572c2e:;
  /* 12572c2e mov esp, ebp */
  ESP = (EBP);
  /* 12572c30 pop ebp */
  EBP = (pop32());
  /* 12572c31 ret  */
  ESPCHK(0x12572b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c40 @ 0x12572c40 (130 bytes, 43 insns) */
void f_12572c40(void) {
  FTRACE(0x12572c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12572c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12572c41 mov ebp, esp */
  EBP = (ESP);
  /* 12572c43 push ecx */
  push32((uint32_t)(ECX));
  /* 12572c44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572c47 cmp eax, dword ptr [0x125984dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125984dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572c4d jae 0x12572c71 */
  if (!C.cf) goto L_12572c71;
  /* 12572c4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572c52 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12572c55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572c58 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12572c5b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12572c5e mov eax, dword ptr [ecx*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125983a0)));
  /* 12572c65 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12572c6a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12572c6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12572c6f jne 0x12572c8c */
  if (!C.zf) goto L_12572c8c;
L_12572c71:;
  /* 12572c71 call 0x12572270 */
  push32(0x12572c76u); f_12572270();
  /* 12572c76 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12572c7c call 0x12572280 */
  push32(0x12572c81u); f_12572280();
  /* 12572c81 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12572c87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12572c8a jmp 0x12572cbe */
  goto L_12572cbe;
L_12572c8c:;
  /* 12572c8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572c8f push edx */
  push32((uint32_t)(EDX));
  /* 12572c90 call 0x12573a90 */
  push32(0x12572c95u); f_12573a90();
  /* 12572c95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12572c98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12572c9b push eax */
  push32((uint32_t)(EAX));
  /* 12572c9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572c9f push ecx */
  push32((uint32_t)(ECX));
  /* 12572ca0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572ca3 push edx */
  push32((uint32_t)(EDX));
  /* 12572ca4 call 0x12572cd0 */
  push32(0x12572ca9u); f_12572cd0();
  /* 12572ca9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12572cac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12572caf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572cb2 push eax */
  push32((uint32_t)(EAX));
  /* 12572cb3 call 0x12573b20 */
  push32(0x12572cb8u); f_12573b20();
  /* 12572cb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12572cbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12572cbe:;
  /* 12572cbe mov esp, ebp */
  ESP = (EBP);
  /* 12572cc0 pop ebp */
  EBP = (pop32());
  /* 12572cc1 ret  */
  ESPCHK(0x12572c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cd0 @ 0x12572cd0 (627 bytes, 182 insns) */
void f_12572cd0(void) {
  FTRACE(0x12572cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12572cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12572cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12572cd3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12572cd9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12572ce0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12572ce3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12572ce9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572ced jne 0x12572cf6 */
  if (!C.zf) goto L_12572cf6;
  /* 12572cef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12572cf1 jmp 0x12572f3f */
  goto L_12572f3f;
L_12572cf6:;
  /* 12572cf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572cf9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12572cfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572cff and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12572d02 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12572d05 mov eax, dword ptr [ecx*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125983a0)));
  /* 12572d0c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12572d11 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12572d14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12572d16 je 0x12572d28 */
  if (C.zf) goto L_12572d28;
  /* 12572d18 push 2 */
  push32((uint32_t)(0x2u));
  /* 12572d1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12572d1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572d1f push edx */
  push32((uint32_t)(EDX));
  /* 12572d20 call 0x12572b80 */
  push32(0x12572d25u); f_12572b80();
  /* 12572d25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12572d28:;
  /* 12572d28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572d2b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12572d2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572d31 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12572d34 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12572d37 mov edx, dword ptr [eax*4 + 0x125983a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125983a0)));
  /* 12572d3e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12572d43 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12572d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12572d4a je 0x12572e5c */
  if (C.zf) goto L_12572e5c;
  /* 12572d50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572d53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12572d56 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12572d5d:;
  /* 12572d5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572d60 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12572d63 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572d66 jae 0x12572e5a */
  if (!C.cf) goto L_12572e5a;
  /* 12572d6c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12572d72 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12572d75:;
  /* 12572d75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12572d78 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12572d7e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12572d80 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572d86 jge 0x12572de7 */
  if ((C.sf==C.of)) goto L_12572de7;
  /* 12572d88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572d8b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12572d8e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572d91 jae 0x12572de7 */
  if (!C.cf) goto L_12572de7;
  /* 12572d93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572d96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12572d98 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12572d9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572da1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12572da4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12572da7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12572dae cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572db1 jne 0x12572dd1 */
  if (!C.zf) goto L_12572dd1;
  /* 12572db3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12572db9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12572dbc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12572dc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12572dc5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12572dc8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12572dcb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12572dce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12572dd1:;
  /* 12572dd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12572dd4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12572dda mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12572ddc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12572ddf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12572de2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12572de5 jmp 0x12572d75 */
  goto L_12572d75;
L_12572de7:;
  /* 12572de7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12572de9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12572def push edx */
  push32((uint32_t)(EDX));
  /* 12572df0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12572df3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12572df9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12572dfb push eax */
  push32((uint32_t)(EAX));
  /* 12572dfc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12572e02 push edx */
  push32((uint32_t)(EDX));
  /* 12572e03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572e06 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12572e09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572e0c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12572e0f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12572e12 mov edx, dword ptr [eax*4 + 0x125983a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125983a0)));
  /* 12572e19 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12572e1c push eax */
  push32((uint32_t)(EAX));
  /* 12572e1d call dword ptr [0x125993a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993a8))), 0x12572e23u);
  /* 12572e23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12572e25 je 0x12572e4a */
  if (C.zf) goto L_12572e4a;
  /* 12572e27 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12572e2a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12572e30 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12572e33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12572e36 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12572e3c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12572e3e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572e44 jge 0x12572e48 */
  if ((C.sf==C.of)) goto L_12572e48;
  /* 12572e46 jmp 0x12572e5a */
  goto L_12572e5a;
L_12572e48:;
  /* 12572e48 jmp 0x12572e55 */
  goto L_12572e55;
L_12572e4a:;
  /* 12572e4a call dword ptr [0x125993e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993e8))), 0x12572e50u);
  /* 12572e50 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12572e53 jmp 0x12572e5a */
  goto L_12572e5a;
L_12572e55:;
  /* 12572e55 jmp 0x12572d5d */
  goto L_12572d5d;
L_12572e5a:;
  /* 12572e5a jmp 0x12572eac */
  goto L_12572eac;
L_12572e5c:;
  /* 12572e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12572e5e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12572e64 push ecx */
  push32((uint32_t)(ECX));
  /* 12572e65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12572e68 push edx */
  push32((uint32_t)(EDX));
  /* 12572e69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572e6c push eax */
  push32((uint32_t)(EAX));
  /* 12572e6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572e70 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12572e73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572e76 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12572e79 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12572e7c mov eax, dword ptr [ecx*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125983a0)));
  /* 12572e83 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12572e86 push ecx */
  push32((uint32_t)(ECX));
  /* 12572e87 call dword ptr [0x125993a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993a8))), 0x12572e8du);
  /* 12572e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12572e8f je 0x12572ea3 */
  if (C.zf) goto L_12572ea3;
  /* 12572e91 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12572e98 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12572e9e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12572ea1 jmp 0x12572eac */
  goto L_12572eac;
L_12572ea3:;
  /* 12572ea3 call dword ptr [0x125993e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993e8))), 0x12572ea9u);
  /* 12572ea9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12572eac:;
  /* 12572eac cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572eb0 jne 0x12572f36 */
  if (!C.zf) goto L_12572f36;
  /* 12572eb6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572eba je 0x12572eea */
  if (C.zf) goto L_12572eea;
  /* 12572ebc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572ec0 jne 0x12572ed9 */
  if (!C.zf) goto L_12572ed9;
  /* 12572ec2 call 0x12572270 */
  push32(0x12572ec7u); f_12572270();
  /* 12572ec7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12572ecd call 0x12572280 */
  push32(0x12572ed2u); f_12572280();
  /* 12572ed2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12572ed5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12572ed7 jmp 0x12572ee5 */
  goto L_12572ee5;
L_12572ed9:;
  /* 12572ed9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12572edc push edx */
  push32((uint32_t)(EDX));
  /* 12572edd call 0x125721d0 */
  push32(0x12572ee2u); f_125721d0();
  /* 12572ee2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12572ee5:;
  /* 12572ee5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12572ee8 jmp 0x12572f3f */
  goto L_12572f3f;
L_12572eea:;
  /* 12572eea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572eed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12572ef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572ef3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12572ef6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12572ef9 mov edx, dword ptr [eax*4 + 0x125983a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125983a0)));
  /* 12572f00 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12572f05 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12572f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12572f0a je 0x12572f1b */
  if (C.zf) goto L_12572f1b;
  /* 12572f0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12572f0f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12572f12 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572f15 jne 0x12572f1b */
  if (!C.zf) goto L_12572f1b;
  /* 12572f17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12572f19 jmp 0x12572f3f */
  goto L_12572f3f;
L_12572f1b:;
  /* 12572f1b call 0x12572270 */
  push32(0x12572f20u); f_12572270();
  /* 12572f20 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12572f26 call 0x12572280 */
  push32(0x12572f2bu); f_12572280();
  /* 12572f2b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12572f31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12572f34 jmp 0x12572f3f */
  goto L_12572f3f;
L_12572f36:;
  /* 12572f36 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12572f39 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12572f3f:;
  /* 12572f3f mov esp, ebp */
  ESP = (EBP);
  /* 12572f41 pop ebp */
  EBP = (pop32());
  /* 12572f42 ret  */
  ESPCHK(0x12572cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f50 @ 0x12572f50 (199 bytes, 68 insns) */
void f_12572f50(void) {
  FTRACE(0x12572f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12572f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12572f51 mov ebp, esp */
  EBP = (ESP);
  /* 12572f53 push ecx */
  push32((uint32_t)(ECX));
  /* 12572f54 push ebx */
  push32((uint32_t)(EBX));
  /* 12572f55 push esi */
  push32((uint32_t)(ESI));
  /* 12572f56 push edi */
  push32((uint32_t)(EDI));
L_12572f57:;
  /* 12572f57 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572f5b jne 0x12572f7b */
  if (!C.zf) goto L_12572f7b;
  /* 12572f5d push 0x12592574 */
  push32((uint32_t)(0x12592574u));
  /* 12572f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12572f64 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12572f66 push 0x12592640 */
  push32((uint32_t)(0x12592640u));
  /* 12572f6b push 2 */
  push32((uint32_t)(0x2u));
  /* 12572f6d call 0x12569460 */
  push32(0x12572f72u); f_12569460();
  /* 12572f72 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12572f75 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572f78 jne 0x12572f7b */
  if (!C.zf) goto L_12572f7b;
  /* 12572f7a int3  */
  x86_unimpl("int3 @ 0x12572f7a");
L_12572f7b:;
  /* 12572f7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12572f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12572f7f jne 0x12572f57 */
  if (!C.zf) goto L_12572f57;
  /* 12572f81 mov ecx, dword ptr [0x12596bec] */
  ECX = (r32((uint32_t)(0x12596bec)));
  /* 12572f87 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12572f8a mov dword ptr [0x12596bec], ecx */
  w32((uint32_t)(0x12596bec), (ECX));
  /* 12572f90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12572f93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12572f96 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12572f98 push 0x12592640 */
  push32((uint32_t)(0x12592640u));
  /* 12572f9d push 2 */
  push32((uint32_t)(0x2u));
  /* 12572f9f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12572fa4 call 0x1256a3a0 */
  push32(0x12572fa9u); f_1256a3a0();
  /* 12572fa9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12572fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572faf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12572fb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572fb5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12572fb9 je 0x12572fd6 */
  if (C.zf) goto L_12572fd6;
  /* 12572fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572fbe mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12572fc1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12572fc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572fc7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12572fca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572fcd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12572fd4 jmp 0x12572ffb */
  goto L_12572ffb;
L_12572fd6:;
  /* 12572fd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572fd9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12572fdc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12572fdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572fe2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12572fe5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572fe8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12572feb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572fee mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12572ff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572ff4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12572ffb:;
  /* 12572ffb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12572ffe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573001 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12573004 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12573006 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573009 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12573010 pop edi */
  EDI = (pop32());
  /* 12573011 pop esi */
  ESI = (pop32());
  /* 12573012 pop ebx */
  EBX = (pop32());
  /* 12573013 mov esp, ebp */
  ESP = (EBP);
  /* 12573015 pop ebp */
  EBP = (pop32());
  /* 12573016 ret  */
  ESPCHK(0x12572f50u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12573020 (50 bytes, 17 insns) */
void f_12573020(void) {
  FTRACE(0x12573020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573020 push ebp */
  push32((uint32_t)(EBP));
  /* 12573021 mov ebp, esp */
  EBP = (ESP);
  /* 12573023 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573026 cmp eax, dword ptr [0x125984dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125984dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257302c jb 0x12573032 */
  if (C.cf) goto L_12573032;
  /* 1257302e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12573030 jmp 0x12573050 */
  goto L_12573050;
L_12573032:;
  /* 12573032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573035 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12573038 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257303b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1257303e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12573041 mov eax, dword ptr [ecx*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125983a0)));
  /* 12573048 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1257304d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12573050:;
  /* 12573050 pop ebp */
  EBP = (pop32());
  /* 12573051 ret  */
  ESPCHK(0x12573020u, _esp0);
  ESP += 4; return;
}

/* FUN_10013060 @ 0x12573060 (300 bytes, 80 insns) */
void f_12573060(void) {
  FTRACE(0x12573060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573060 push ebp */
  push32((uint32_t)(EBP));
  /* 12573061 mov ebp, esp */
  EBP = (ESP);
  /* 12573063 push ecx */
  push32((uint32_t)(ECX));
  /* 12573064 cmp dword ptr [0x125980a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125980a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257306b jne 0x12573079 */
  if (!C.zf) goto L_12573079;
  /* 1257306d mov dword ptr [0x125980a0], 0x200 */
  w32((uint32_t)(0x125980a0), (0x200u));
  /* 12573077 jmp 0x1257308c */
  goto L_1257308c;
L_12573079:;
  /* 12573079 cmp dword ptr [0x125980a0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x125980a0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573080 jge 0x1257308c */
  if ((C.sf==C.of)) goto L_1257308c;
  /* 12573082 mov dword ptr [0x125980a0], 0x14 */
  w32((uint32_t)(0x125980a0), (0x14u));
L_1257308c:;
  /* 1257308c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12573091 push 0x1259264c */
  push32((uint32_t)(0x1259264cu));
  /* 12573096 push 2 */
  push32((uint32_t)(0x2u));
  /* 12573098 push 4 */
  push32((uint32_t)(0x4u));
  /* 1257309a mov eax, dword ptr [0x125980a0] */
  EAX = (r32((uint32_t)(0x125980a0)));
  /* 1257309f push eax */
  push32((uint32_t)(EAX));
  /* 125730a0 call 0x1256a7b0 */
  push32(0x125730a5u); f_1256a7b0();
  /* 125730a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125730a8 mov dword ptr [0x12596d60], eax */
  w32((uint32_t)(0x12596d60), (EAX));
  /* 125730ad cmp dword ptr [0x12596d60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125730b4 jne 0x125730f5 */
  if (!C.zf) goto L_125730f5;
  /* 125730b6 mov dword ptr [0x125980a0], 0x14 */
  w32((uint32_t)(0x125980a0), (0x14u));
  /* 125730c0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 125730c5 push 0x1259264c */
  push32((uint32_t)(0x1259264cu));
  /* 125730ca push 2 */
  push32((uint32_t)(0x2u));
  /* 125730cc push 4 */
  push32((uint32_t)(0x4u));
  /* 125730ce mov ecx, dword ptr [0x125980a0] */
  ECX = (r32((uint32_t)(0x125980a0)));
  /* 125730d4 push ecx */
  push32((uint32_t)(ECX));
  /* 125730d5 call 0x1256a7b0 */
  push32(0x125730dau); f_1256a7b0();
  /* 125730da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125730dd mov dword ptr [0x12596d60], eax */
  w32((uint32_t)(0x12596d60), (EAX));
  /* 125730e2 cmp dword ptr [0x12596d60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125730e9 jne 0x125730f5 */
  if (!C.zf) goto L_125730f5;
  /* 125730eb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 125730ed call 0x12569310 */
  push32(0x125730f2u); f_12569310();
  /* 125730f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125730f5:;
  /* 125730f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125730fc jmp 0x12573107 */
  goto L_12573107;
L_125730fe:;
  /* 125730fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573101 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573104 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12573107:;
  /* 12573107 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257310b jge 0x12573126 */
  if ((C.sf==C.of)) goto L_12573126;
  /* 1257310d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573110 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12573113 add eax, 0x12595120 */
  { uint32_t _a=(EAX),_b=(0x12595120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573118 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257311b mov edx, dword ptr [0x12596d60] */
  EDX = (r32((uint32_t)(0x12596d60)));
  /* 12573121 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12573124 jmp 0x125730fe */
  goto L_125730fe;
L_12573126:;
  /* 12573126 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1257312d jmp 0x12573138 */
  goto L_12573138;
L_1257312f:;
  /* 1257312f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573132 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573135 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12573138:;
  /* 12573138 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257313c jge 0x12573188 */
  if ((C.sf==C.of)) goto L_12573188;
  /* 1257313e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573141 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12573144 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573147 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1257314a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1257314d mov eax, dword ptr [ecx*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125983a0)));
  /* 12573154 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573158 je 0x12573176 */
  if (C.zf) goto L_12573176;
  /* 1257315a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257315d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12573160 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573163 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12573166 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12573169 mov eax, dword ptr [ecx*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125983a0)));
  /* 12573170 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573174 jne 0x12573186 */
  if (!C.zf) goto L_12573186;
L_12573176:;
  /* 12573176 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573179 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1257317c mov dword ptr [ecx + 0x12595130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12595130), (0xffffffffu));
L_12573186:;
  /* 12573186 jmp 0x1257312f */
  goto L_1257312f;
L_12573188:;
  /* 12573188 mov esp, ebp */
  ESP = (EBP);
  /* 1257318a pop ebp */
  EBP = (pop32());
  /* 1257318b ret  */
  ESPCHK(0x12573060u, _esp0);
  ESP += 4; return;
}

/* FUN_10013190 @ 0x12573190 (26 bytes, 9 insns) */
void f_12573190(void) {
  FTRACE(0x12573190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573190 push ebp */
  push32((uint32_t)(EBP));
  /* 12573191 mov ebp, esp */
  EBP = (ESP);
  /* 12573193 call 0x12573d90 */
  push32(0x12573198u); f_12573d90();
  /* 12573198 movsx eax, byte ptr [0x12596a04] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12596a04))));
  /* 1257319f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125731a1 je 0x125731a8 */
  if (C.zf) goto L_125731a8;
  /* 125731a3 call 0x12573b50 */
  push32(0x125731a8u); f_12573b50();
L_125731a8:;
  /* 125731a8 pop ebp */
  EBP = (pop32());
  /* 125731a9 ret  */
  ESPCHK(0x12573190u, _esp0);
  ESP += 4; return;
}

/* FUN_100131b0 @ 0x125731b0 (61 bytes, 20 insns) */
void f_125731b0(void) {
  FTRACE(0x125731b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125731b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125731b1 mov ebp, esp */
  EBP = (ESP);
  /* 125731b3 cmp dword ptr [ebp + 8], 0x12595120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12595120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125731ba jb 0x125731de */
  if (C.cf) goto L_125731de;
  /* 125731bc cmp dword ptr [ebp + 8], 0x12595380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12595380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125731c3 ja 0x125731de */
  if ((!C.cf&&!C.zf)) goto L_125731de;
  /* 125731c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125731c8 sub eax, 0x12595120 */
  { uint32_t _a=(EAX),_b=(0x12595120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125731cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125731d0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125731d3 push eax */
  push32((uint32_t)(EAX));
  /* 125731d4 call 0x1256dda0 */
  push32(0x125731d9u); f_1256dda0();
  /* 125731d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125731dc jmp 0x125731eb */
  goto L_125731eb;
L_125731de:;
  /* 125731de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125731e1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125731e4 push ecx */
  push32((uint32_t)(ECX));
  /* 125731e5 call dword ptr [0x12599354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599354))), 0x125731ebu);
L_125731eb:;
  /* 125731eb pop ebp */
  EBP = (pop32());
  /* 125731ec ret  */
  ESPCHK(0x125731b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100131f0 @ 0x125731f0 (41 bytes, 16 insns) */
void f_125731f0(void) {
  FTRACE(0x125731f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125731f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125731f1 mov ebp, esp */
  EBP = (ESP);
  /* 125731f3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125731f7 jge 0x1257320a */
  if ((C.sf==C.of)) goto L_1257320a;
  /* 125731f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125731fc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125731ff push eax */
  push32((uint32_t)(EAX));
  /* 12573200 call 0x1256dda0 */
  push32(0x12573205u); f_1256dda0();
  /* 12573205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573208 jmp 0x12573217 */
  goto L_12573217;
L_1257320a:;
  /* 1257320a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257320d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573210 push ecx */
  push32((uint32_t)(ECX));
  /* 12573211 call dword ptr [0x12599354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599354))), 0x12573217u);
L_12573217:;
  /* 12573217 pop ebp */
  EBP = (pop32());
  /* 12573218 ret  */
  ESPCHK(0x125731f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013220 @ 0x12573220 (61 bytes, 20 insns) */
void f_12573220(void) {
  FTRACE(0x12573220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573220 push ebp */
  push32((uint32_t)(EBP));
  /* 12573221 mov ebp, esp */
  EBP = (ESP);
  /* 12573223 cmp dword ptr [ebp + 8], 0x12595120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12595120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257322a jb 0x1257324e */
  if (C.cf) goto L_1257324e;
  /* 1257322c cmp dword ptr [ebp + 8], 0x12595380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12595380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573233 ja 0x1257324e */
  if ((!C.cf&&!C.zf)) goto L_1257324e;
  /* 12573235 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573238 sub eax, 0x12595120 */
  { uint32_t _a=(EAX),_b=(0x12595120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257323d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12573240 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573243 push eax */
  push32((uint32_t)(EAX));
  /* 12573244 call 0x1256de40 */
  push32(0x12573249u); f_1256de40();
  /* 12573249 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257324c jmp 0x1257325b */
  goto L_1257325b;
L_1257324e:;
  /* 1257324e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573251 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573254 push ecx */
  push32((uint32_t)(ECX));
  /* 12573255 call dword ptr [0x12599350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599350))), 0x1257325bu);
L_1257325b:;
  /* 1257325b pop ebp */
  EBP = (pop32());
  /* 1257325c ret  */
  ESPCHK(0x12573220u, _esp0);
  ESP += 4; return;
}

/* FUN_10013260 @ 0x12573260 (41 bytes, 16 insns) */
void f_12573260(void) {
  FTRACE(0x12573260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573260 push ebp */
  push32((uint32_t)(EBP));
  /* 12573261 mov ebp, esp */
  EBP = (ESP);
  /* 12573263 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573267 jge 0x1257327a */
  if ((C.sf==C.of)) goto L_1257327a;
  /* 12573269 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257326c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257326f push eax */
  push32((uint32_t)(EAX));
  /* 12573270 call 0x1256de40 */
  push32(0x12573275u); f_1256de40();
  /* 12573275 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573278 jmp 0x12573287 */
  goto L_12573287;
L_1257327a:;
  /* 1257327a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257327d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573280 push ecx */
  push32((uint32_t)(ECX));
  /* 12573281 call dword ptr [0x12599350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599350))), 0x12573287u);
L_12573287:;
  /* 12573287 pop ebp */
  EBP = (pop32());
  /* 12573288 ret  */
  ESPCHK(0x12573260u, _esp0);
  ESP += 4; return;
}

/* FUN_10013290 @ 0x12573290 (119 bytes, 34 insns) */
void f_12573290(void) {
  FTRACE(0x12573290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573290 push ebp */
  push32((uint32_t)(EBP));
  /* 12573291 mov ebp, esp */
  EBP = (ESP);
  /* 12573293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12573296 push 0x12596d5c */
  push32((uint32_t)(0x12596d5cu));
  /* 1257329b call dword ptr [0x125993bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993bc))), 0x125732a1u);
  /* 125732a1 cmp dword ptr [0x12596d4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125732a8 je 0x125732c8 */
  if (C.zf) goto L_125732c8;
  /* 125732aa push 0x12596d5c */
  push32((uint32_t)(0x12596d5cu));
  /* 125732af call dword ptr [0x125993ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993ac))), 0x125732b5u);
  /* 125732b5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125732b7 call 0x1256dda0 */
  push32(0x125732bcu); f_1256dda0();
  /* 125732bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125732bf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125732c6 jmp 0x125732cf */
  goto L_125732cf;
L_125732c8:;
  /* 125732c8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125732cf:;
  /* 125732cf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 125732d3 push eax */
  push32((uint32_t)(EAX));
  /* 125732d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125732d7 push ecx */
  push32((uint32_t)(ECX));
  /* 125732d8 call 0x12573310 */
  push32(0x125732ddu); f_12573310();
  /* 125732dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125732e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125732e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125732e7 je 0x125732f5 */
  if (C.zf) goto L_125732f5;
  /* 125732e9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125732eb call 0x1256de40 */
  push32(0x125732f0u); f_1256de40();
  /* 125732f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125732f3 jmp 0x12573300 */
  goto L_12573300;
L_125732f5:;
  /* 125732f5 push 0x12596d5c */
  push32((uint32_t)(0x12596d5cu));
  /* 125732fa call dword ptr [0x125993ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993ac))), 0x12573300u);
L_12573300:;
  /* 12573300 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573303 mov esp, ebp */
  ESP = (EBP);
  /* 12573305 pop ebp */
  EBP = (pop32());
  /* 12573306 ret  */
  ESPCHK(0x12573290u, _esp0);
  ESP += 4; return;
}

/* FUN_10013310 @ 0x12573310 (160 bytes, 50 insns) */
void f_12573310(void) {
  FTRACE(0x12573310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573310 push ebp */
  push32((uint32_t)(EBP));
  /* 12573311 mov ebp, esp */
  EBP = (ESP);
  /* 12573313 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12573316 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257331a jne 0x12573323 */
  if (!C.zf) goto L_12573323;
  /* 1257331c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257331e jmp 0x125733ac */
  goto L_125733ac;
L_12573323:;
  /* 12573323 cmp dword ptr [0x12596bd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596bd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257332a jne 0x1257335a */
  if (!C.zf) goto L_1257335a;
  /* 1257332c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257332f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12573334 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573339 jle 0x1257334b */
  if ((C.zf||C.sf!=C.of)) goto L_1257334b;
  /* 1257333b call 0x12572270 */
  push32(0x12573340u); f_12572270();
  /* 12573340 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12573346 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12573349 jmp 0x125733ac */
  goto L_125733ac;
L_1257334b:;
  /* 1257334b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257334e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12573351 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12573353 mov eax, 1 */
  EAX = (0x1u);
  /* 12573358 jmp 0x125733ac */
  goto L_125733ac;
L_1257335a:;
  /* 1257335a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12573361 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12573364 push eax */
  push32((uint32_t)(EAX));
  /* 12573365 push 0 */
  push32((uint32_t)(0x0u));
  /* 12573367 mov ecx, dword ptr [0x12594ea4] */
  ECX = (r32((uint32_t)(0x12594ea4)));
  /* 1257336d push ecx */
  push32((uint32_t)(ECX));
  /* 1257336e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573371 push edx */
  push32((uint32_t)(EDX));
  /* 12573372 push 1 */
  push32((uint32_t)(0x1u));
  /* 12573374 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12573377 push eax */
  push32((uint32_t)(EAX));
  /* 12573378 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1257337d mov ecx, dword ptr [0x12596be0] */
  ECX = (r32((uint32_t)(0x12596be0)));
  /* 12573383 push ecx */
  push32((uint32_t)(ECX));
  /* 12573384 call dword ptr [0x12599378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599378))), 0x1257338au);
  /* 1257338a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1257338d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573391 je 0x12573399 */
  if (C.zf) goto L_12573399;
  /* 12573393 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573397 je 0x125733a9 */
  if (C.zf) goto L_125733a9;
L_12573399:;
  /* 12573399 call 0x12572270 */
  push32(0x1257339eu); f_12572270();
  /* 1257339e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 125733a4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125733a7 jmp 0x125733ac */
  goto L_125733ac;
L_125733a9:;
  /* 125733a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125733ac:;
  /* 125733ac mov esp, ebp */
  ESP = (EBP);
  /* 125733ae pop ebp */
  EBP = (pop32());
  /* 125733af ret  */
  ESPCHK(0x12573310u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x125733b0 (32 bytes, 18 insns) */
void f_125733b0(void) {
  FTRACE(0x125733b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125733b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125733b1 mov ebp, esp */
  EBP = (ESP);
  /* 125733b3 push ebx */
  push32((uint32_t)(EBX));
  /* 125733b4 push esi */
  push32((uint32_t)(ESI));
  /* 125733b5 push edi */
  push32((uint32_t)(EDI));
  /* 125733b6 push ebp */
  push32((uint32_t)(EBP));
  /* 125733b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125733b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125733bb push 0x125733c8 */
  push32((uint32_t)(0x125733c8u));
  /* 125733c0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 125733c3 call 0x1257aafc */
  push32(0x125733c8u); f_1257aafc();
  /* 125733c8 pop ebp */
  EBP = (pop32());
  /* 125733c9 pop edi */
  EDI = (pop32());
  /* 125733ca pop esi */
  ESI = (pop32());
  /* 125733cb pop ebx */
  EBX = (pop32());
  /* 125733cc mov esp, ebp */
  ESP = (EBP);
  /* 125733ce pop ebp */
  EBP = (pop32());
  /* 125733cf ret  */
  ESPCHK(0x125733b0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x125733f2 (104 bytes, 33 insns) */
void f_125733f2(void) {
  FTRACE(0x125733f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125733f2 push ebx */
  push32((uint32_t)(EBX));
  /* 125733f3 push esi */
  push32((uint32_t)(ESI));
  /* 125733f4 push edi */
  push32((uint32_t)(EDI));
  /* 125733f5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 125733f9 push eax */
  push32((uint32_t)(EAX));
  /* 125733fa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 125733fc push 0x125733d0 */
  push32((uint32_t)(0x125733d0u));
  /* 12573401 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12573408 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1257340f:;
  /* 1257340f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12573413 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12573416 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12573419 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257341c je 0x1257344c */
  if (C.zf) goto L_1257344c;
  /* 1257341e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573422 je 0x1257344c */
  if (C.zf) goto L_1257344c;
  /* 12573424 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12573427 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1257342a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1257342e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12573431 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573436 jne 0x1257344a */
  if (!C.zf) goto L_1257344a;
  /* 12573438 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1257343d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12573441 call 0x12573486 */
  push32(0x12573446u); f_12573486();
  /* 12573446 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1257344au);
L_1257344a:;
  /* 1257344a jmp 0x1257340f */
  goto L_1257340f;
L_1257344c:;
  /* 1257344c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12573453 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573456 pop edi */
  EDI = (pop32());
  /* 12573457 pop esi */
  ESI = (pop32());
  /* 12573458 pop ebx */
  EBX = (pop32());
  /* 12573459 ret  */
  ESPCHK(0x125733f2u, _esp0);
  ESP += 4; return;
}

/* FUN_10013486 @ 0x12573486 (24 bytes, 10 insns) */
void f_12573486(void) {
  FTRACE(0x12573486u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573486 push ebx */
  push32((uint32_t)(EBX));
  /* 12573487 push ecx */
  push32((uint32_t)(ECX));
  /* 12573488 mov ebx, 0x125953b8 */
  EBX = (0x125953b8u);
  /* 1257348d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573490 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12573493 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12573496 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12573499 pop ecx */
  ECX = (pop32());
  /* 1257349a pop ebx */
  EBX = (pop32());
  /* 1257349b ret 4 */
  ESPCHK(0x12573486u, _esp0);
  ESP += 8; return;
}

/* FUN_10013565 @ 0x12573565 (27 bytes, 11 insns) */
void f_12573565(void) {
  FTRACE(0x12573565u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573565 push ebp */
  push32((uint32_t)(EBP));
  /* 12573566 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1257356a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1257356c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1257356f push eax */
  push32((uint32_t)(EAX));
  /* 12573570 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12573573 push eax */
  push32((uint32_t)(EAX));
  /* 12573574 call 0x125733f2 */
  push32(0x12573579u); f_125733f2();
  /* 12573579 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257357c pop ebp */
  EBP = (pop32());
  /* 1257357d ret 4 */
  ESPCHK(0x12573565u, _esp0);
  ESP += 8; return;
}

/* FUN_10013580 @ 0x12573580 (482 bytes, 138 insns) */
void f_12573580(void) {
  FTRACE(0x12573580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573580 push ebp */
  push32((uint32_t)(EBP));
  /* 12573581 mov ebp, esp */
  EBP = (ESP);
  /* 12573583 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12573586 push esi */
  push32((uint32_t)(ESI));
  /* 12573587 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1257358e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12573590 call 0x1256dda0 */
  push32(0x12573595u); f_1256dda0();
  /* 12573595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573598 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1257359f jmp 0x125735aa */
  goto L_125735aa;
L_125735a1:;
  /* 125735a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125735a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125735a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125735aa:;
  /* 125735aa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125735ae jge 0x12573750 */
  if ((C.sf==C.of)) goto L_12573750;
  /* 125735b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125735b7 cmp dword ptr [ecx*4 + 0x125983a0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x125983a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125735bf je 0x125736b6 */
  if (C.zf) goto L_125736b6;
  /* 125735c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125735c8 mov eax, dword ptr [edx*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x125983a0)));
  /* 125735cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125735d2 jmp 0x125735dd */
  goto L_125735dd;
L_125735d4:;
  /* 125735d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125735d7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125735da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125735dd:;
  /* 125735dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125735e0 mov eax, dword ptr [edx*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x125983a0)));
  /* 125735e7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125735ec cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125735ef jae 0x125736a6 */
  if (!C.cf) goto L_125736a6;
  /* 125735f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125735f8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125735fc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125735ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12573601 jne 0x125736a1 */
  if (!C.zf) goto L_125736a1;
  /* 12573607 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257360a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257360e jne 0x12573649 */
  if (!C.zf) goto L_12573649;
  /* 12573610 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12573612 call 0x1256dda0 */
  push32(0x12573617u); f_1256dda0();
  /* 12573617 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257361a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257361d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573621 jne 0x1257363f */
  if (!C.zf) goto L_1257363f;
  /* 12573623 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573626 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573629 push edx */
  push32((uint32_t)(EDX));
  /* 1257362a call dword ptr [0x12599364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599364))), 0x12573630u);
  /* 12573630 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573633 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12573636 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573639 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257363c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1257363f:;
  /* 1257363f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12573641 call 0x1256de40 */
  push32(0x12573646u); f_1256de40();
  /* 12573646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12573649:;
  /* 12573649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257364c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257364f push eax */
  push32((uint32_t)(EAX));
  /* 12573650 call dword ptr [0x12599354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599354))), 0x12573656u);
  /* 12573656 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573659 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1257365d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12573660 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12573662 je 0x12573676 */
  if (C.zf) goto L_12573676;
  /* 12573664 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573667 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257366a push eax */
  push32((uint32_t)(EAX));
  /* 1257366b call dword ptr [0x12599350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599350))), 0x12573671u);
  /* 12573671 jmp 0x125735d4 */
  goto L_125735d4;
L_12573676:;
  /* 12573676 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573679 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1257367f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573682 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12573685 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573688 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257368b sub eax, dword ptr [edx*4 + 0x125983a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x125983a0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12573692 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12573693 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12573698 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1257369a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257369c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1257369f jmp 0x125736a6 */
  goto L_125736a6;
L_125736a1:;
  /* 125736a1 jmp 0x125735d4 */
  goto L_125735d4;
L_125736a6:;
  /* 125736a6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125736aa je 0x125736b1 */
  if (C.zf) goto L_125736b1;
  /* 125736ac jmp 0x12573750 */
  goto L_12573750;
L_125736b1:;
  /* 125736b1 jmp 0x1257374b */
  goto L_1257374b;
L_125736b6:;
  /* 125736b6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 125736b8 push 0x12592654 */
  push32((uint32_t)(0x12592654u));
  /* 125736bd push 2 */
  push32((uint32_t)(0x2u));
  /* 125736bf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 125736c4 call 0x1256a3a0 */
  push32(0x125736c9u); f_1256a3a0();
  /* 125736c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125736cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125736cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125736d3 je 0x12573749 */
  if (C.zf) goto L_12573749;
  /* 125736d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125736d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125736db mov dword ptr [eax*4 + 0x125983a0], ecx */
  w32((uint32_t)(EAX*4 + 0x125983a0), (ECX));
  /* 125736e2 mov edx, dword ptr [0x125984dc] */
  EDX = (r32((uint32_t)(0x125984dc)));
  /* 125736e8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125736eb mov dword ptr [0x125984dc], edx */
  w32((uint32_t)(0x125984dc), (EDX));
  /* 125736f1 jmp 0x125736fc */
  goto L_125736fc;
L_125736f3:;
  /* 125736f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125736f6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125736f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125736fc:;
  /* 125736fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125736ff mov edx, dword ptr [ecx*4 + 0x125983a0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x125983a0)));
  /* 12573706 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257370c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257370f jae 0x12573734 */
  if (!C.cf) goto L_12573734;
  /* 12573711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573714 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12573718 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257371b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12573721 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573724 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12573728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257372b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12573732 jmp 0x125736f3 */
  goto L_125736f3;
L_12573734:;
  /* 12573734 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573737 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1257373a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1257373d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573740 push edx */
  push32((uint32_t)(EDX));
  /* 12573741 call 0x12573a90 */
  push32(0x12573746u); f_12573a90();
  /* 12573746 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12573749:;
  /* 12573749 jmp 0x12573750 */
  goto L_12573750;
L_1257374b:;
  /* 1257374b jmp 0x125735a1 */
  goto L_125735a1;
L_12573750:;
  /* 12573750 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12573752 call 0x1256de40 */
  push32(0x12573757u); f_1256de40();
  /* 12573757 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257375a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257375d pop esi */
  ESI = (pop32());
  /* 1257375e mov esp, ebp */
  ESP = (EBP);
  /* 12573760 pop ebp */
  EBP = (pop32());
  /* 12573761 ret  */
  ESPCHK(0x12573580u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12573770 (183 bytes, 57 insns) */
void f_12573770(void) {
  FTRACE(0x12573770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573770 push ebp */
  push32((uint32_t)(EBP));
  /* 12573771 mov ebp, esp */
  EBP = (ESP);
  /* 12573773 push ecx */
  push32((uint32_t)(ECX));
  /* 12573774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573777 cmp eax, dword ptr [0x125984dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125984dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257377d jae 0x1257380a */
  if (!C.cf) goto L_1257380a;
  /* 12573783 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573786 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12573789 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257378c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1257378f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12573792 mov eax, dword ptr [ecx*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125983a0)));
  /* 12573799 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257379d jne 0x1257380a */
  if (!C.zf) goto L_1257380a;
  /* 1257379f cmp dword ptr [0x125969c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125969c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125737a6 jne 0x125737ea */
  if (!C.zf) goto L_125737ea;
  /* 125737a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125737ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125737ae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125737b2 je 0x125737c2 */
  if (C.zf) goto L_125737c2;
  /* 125737b4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125737b8 je 0x125737d0 */
  if (C.zf) goto L_125737d0;
  /* 125737ba cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125737be je 0x125737de */
  if (C.zf) goto L_125737de;
  /* 125737c0 jmp 0x125737ea */
  goto L_125737ea;
L_125737c2:;
  /* 125737c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125737c5 push edx */
  push32((uint32_t)(EDX));
  /* 125737c6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 125737c8 call dword ptr [0x1259931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259931c))), 0x125737ceu);
  /* 125737ce jmp 0x125737ea */
  goto L_125737ea;
L_125737d0:;
  /* 125737d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125737d3 push eax */
  push32((uint32_t)(EAX));
  /* 125737d4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 125737d6 call dword ptr [0x1259931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259931c))), 0x125737dcu);
  /* 125737dc jmp 0x125737ea */
  goto L_125737ea;
L_125737de:;
  /* 125737de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125737e1 push ecx */
  push32((uint32_t)(ECX));
  /* 125737e2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 125737e4 call dword ptr [0x1259931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259931c))), 0x125737eau);
L_125737ea:;
  /* 125737ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125737ed sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 125737f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125737f3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 125737f6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125737f9 mov ecx, dword ptr [edx*4 + 0x125983a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x125983a0)));
  /* 12573800 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12573803 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12573806 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12573808 jmp 0x12573823 */
  goto L_12573823;
L_1257380a:;
  /* 1257380a call 0x12572270 */
  push32(0x1257380fu); f_12572270();
  /* 1257380f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12573815 call 0x12572280 */
  push32(0x1257381au); f_12572280();
  /* 1257381a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12573820 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12573823:;
  /* 12573823 mov esp, ebp */
  ESP = (EBP);
  /* 12573825 pop ebp */
  EBP = (pop32());
  /* 12573826 ret  */
  ESPCHK(0x12573770u, _esp0);
  ESP += 4; return;
}

/* FUN_10013830 @ 0x12573830 (216 bytes, 63 insns) */
void f_12573830(void) {
  FTRACE(0x12573830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573830 push ebp */
  push32((uint32_t)(EBP));
  /* 12573831 mov ebp, esp */
  EBP = (ESP);
  /* 12573833 push ecx */
  push32((uint32_t)(ECX));
  /* 12573834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573837 cmp eax, dword ptr [0x125984dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125984dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257383d jae 0x125738eb */
  if (!C.cf) goto L_125738eb;
  /* 12573843 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573846 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12573849 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257384c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1257384f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12573852 mov eax, dword ptr [ecx*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125983a0)));
  /* 12573859 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1257385e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12573861 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12573863 je 0x125738eb */
  if (C.zf) goto L_125738eb;
  /* 12573869 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257386c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1257386f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573872 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12573875 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12573878 mov ecx, dword ptr [edx*4 + 0x125983a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x125983a0)));
  /* 1257387f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573883 je 0x125738eb */
  if (C.zf) goto L_125738eb;
  /* 12573885 cmp dword ptr [0x125969c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125969c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257388c jne 0x125738ca */
  if (!C.zf) goto L_125738ca;
  /* 1257388e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573891 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12573894 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573898 je 0x125738a8 */
  if (C.zf) goto L_125738a8;
  /* 1257389a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257389e je 0x125738b4 */
  if (C.zf) goto L_125738b4;
  /* 125738a0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125738a4 je 0x125738c0 */
  if (C.zf) goto L_125738c0;
  /* 125738a6 jmp 0x125738ca */
  goto L_125738ca;
L_125738a8:;
  /* 125738a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125738aa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 125738ac call dword ptr [0x1259931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259931c))), 0x125738b2u);
  /* 125738b2 jmp 0x125738ca */
  goto L_125738ca;
L_125738b4:;
  /* 125738b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125738b6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 125738b8 call dword ptr [0x1259931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259931c))), 0x125738beu);
  /* 125738be jmp 0x125738ca */
  goto L_125738ca;
L_125738c0:;
  /* 125738c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125738c2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 125738c4 call dword ptr [0x1259931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259931c))), 0x125738cau);
L_125738ca:;
  /* 125738ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125738cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125738d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125738d3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125738d6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125738d9 mov edx, dword ptr [eax*4 + 0x125983a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125983a0)));
  /* 125738e0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 125738e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125738e9 jmp 0x12573904 */
  goto L_12573904;
L_125738eb:;
  /* 125738eb call 0x12572270 */
  push32(0x125738f0u); f_12572270();
  /* 125738f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125738f6 call 0x12572280 */
  push32(0x125738fbu); f_12572280();
  /* 125738fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12573901 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12573904:;
  /* 12573904 mov esp, ebp */
  ESP = (EBP);
  /* 12573906 pop ebp */
  EBP = (pop32());
  /* 12573907 ret  */
  ESPCHK(0x12573830u, _esp0);
  ESP += 4; return;
}

/* FUN_10013910 @ 0x12573910 (102 bytes, 30 insns) */
void f_12573910(void) {
  FTRACE(0x12573910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573910 push ebp */
  push32((uint32_t)(EBP));
  /* 12573911 mov ebp, esp */
  EBP = (ESP);
  /* 12573913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573916 cmp eax, dword ptr [0x125984dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125984dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257391c jae 0x1257395b */
  if (!C.cf) goto L_1257395b;
  /* 1257391e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573921 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12573924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573927 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1257392a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1257392d mov eax, dword ptr [ecx*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125983a0)));
  /* 12573934 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12573939 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1257393c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1257393e je 0x1257395b */
  if (C.zf) goto L_1257395b;
  /* 12573940 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573943 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12573946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573949 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1257394c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1257394f mov ecx, dword ptr [edx*4 + 0x125983a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x125983a0)));
  /* 12573956 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12573959 jmp 0x12573974 */
  goto L_12573974;
L_1257395b:;
  /* 1257395b call 0x12572270 */
  push32(0x12573960u); f_12572270();
  /* 12573960 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12573966 call 0x12572280 */
  push32(0x1257396bu); f_12572280();
  /* 1257396b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12573971 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12573974:;
  /* 12573974 pop ebp */
  EBP = (pop32());
  /* 12573975 ret  */
  ESPCHK(0x12573910u, _esp0);
  ESP += 4; return;
}

/* FUN_10013980 @ 0x12573980 (260 bytes, 83 insns) */
void f_12573980(void) {
  FTRACE(0x12573980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573980 push ebp */
  push32((uint32_t)(EBP));
  /* 12573981 mov ebp, esp */
  EBP = (ESP);
  /* 12573983 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12573986 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1257398a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257398d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12573990 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12573992 je 0x1257399d */
  if (C.zf) goto L_1257399d;
  /* 12573994 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12573997 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1257399a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1257399d:;
  /* 1257399d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125739a0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 125739a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125739a8 je 0x125739b2 */
  if (C.zf) goto L_125739b2;
  /* 125739aa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 125739ad or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 125739af mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_125739b2:;
  /* 125739b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125739b5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 125739bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125739bd je 0x125739c8 */
  if (C.zf) goto L_125739c8;
  /* 125739bf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 125739c2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 125739c5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_125739c8:;
  /* 125739c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125739cb push eax */
  push32((uint32_t)(EAX));
  /* 125739cc call dword ptr [0x125993dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993dc))), 0x125739d2u);
  /* 125739d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125739d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125739d9 jne 0x125739f2 */
  if (!C.zf) goto L_125739f2;
  /* 125739db call dword ptr [0x125993e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993e8))), 0x125739e1u);
  /* 125739e1 push eax */
  push32((uint32_t)(EAX));
  /* 125739e2 call 0x125721d0 */
  push32(0x125739e7u); f_125721d0();
  /* 125739e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125739ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125739ed jmp 0x12573a80 */
  goto L_12573a80;
L_125739f2:;
  /* 125739f2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125739f6 jne 0x12573a03 */
  if (!C.zf) goto L_12573a03;
  /* 125739f8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 125739fb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 125739fe mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12573a01 jmp 0x12573a12 */
  goto L_12573a12;
L_12573a03:;
  /* 12573a03 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573a07 jne 0x12573a12 */
  if (!C.zf) goto L_12573a12;
  /* 12573a09 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12573a0c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12573a0f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12573a12:;
  /* 12573a12 call 0x12573580 */
  push32(0x12573a17u); f_12573580();
  /* 12573a17 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12573a1a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573a1e jne 0x12573a3b */
  if (!C.zf) goto L_12573a3b;
  /* 12573a20 call 0x12572270 */
  push32(0x12573a25u); f_12572270();
  /* 12573a25 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12573a2b call 0x12572280 */
  push32(0x12573a30u); f_12572280();
  /* 12573a30 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12573a36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12573a39 jmp 0x12573a80 */
  goto L_12573a80;
L_12573a3b:;
  /* 12573a3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573a3e push eax */
  push32((uint32_t)(EAX));
  /* 12573a3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573a42 push ecx */
  push32((uint32_t)(ECX));
  /* 12573a43 call 0x12573770 */
  push32(0x12573a48u); f_12573770();
  /* 12573a48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573a4b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12573a4e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12573a51 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12573a54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573a57 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12573a5a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573a5d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12573a60 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12573a63 mov edx, dword ptr [eax*4 + 0x125983a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125983a0)));
  /* 12573a6a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12573a6d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12573a71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573a74 push ecx */
  push32((uint32_t)(ECX));
  /* 12573a75 call 0x12573b20 */
  push32(0x12573a7au); f_12573b20();
  /* 12573a7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573a7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12573a80:;
  /* 12573a80 mov esp, ebp */
  ESP = (EBP);
  /* 12573a82 pop ebp */
  EBP = (pop32());
  /* 12573a83 ret  */
  ESPCHK(0x12573980u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a90 @ 0x12573a90 (134 bytes, 44 insns) */
void f_12573a90(void) {
  FTRACE(0x12573a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12573a91 mov ebp, esp */
  EBP = (ESP);
  /* 12573a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12573a94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573a97 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12573a9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573a9d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12573aa0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12573aa3 mov edx, dword ptr [eax*4 + 0x125983a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125983a0)));
  /* 12573aaa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573aac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12573aaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573ab2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573ab6 jne 0x12573af1 */
  if (!C.zf) goto L_12573af1;
  /* 12573ab8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12573aba call 0x1256dda0 */
  push32(0x12573abfu); f_1256dda0();
  /* 12573abf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573ac2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573ac5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573ac9 jne 0x12573ae7 */
  if (!C.zf) goto L_12573ae7;
  /* 12573acb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573ace add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573ad1 push edx */
  push32((uint32_t)(EDX));
  /* 12573ad2 call dword ptr [0x12599364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599364))), 0x12573ad8u);
  /* 12573ad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573adb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12573ade add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573ae1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573ae4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12573ae7:;
  /* 12573ae7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12573ae9 call 0x1256de40 */
  push32(0x12573aeeu); f_1256de40();
  /* 12573aee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12573af1:;
  /* 12573af1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573af4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12573af7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573afa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12573afd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12573b00 mov edx, dword ptr [eax*4 + 0x125983a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125983a0)));
  /* 12573b07 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12573b0b push eax */
  push32((uint32_t)(EAX));
  /* 12573b0c call dword ptr [0x12599354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599354))), 0x12573b12u);
  /* 12573b12 mov esp, ebp */
  ESP = (EBP);
  /* 12573b14 pop ebp */
  EBP = (pop32());
  /* 12573b15 ret  */
  ESPCHK(0x12573a90u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12573b20 (38 bytes, 13 insns) */
void f_12573b20(void) {
  FTRACE(0x12573b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12573b21 mov ebp, esp */
  EBP = (ESP);
  /* 12573b23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573b26 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12573b29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573b2c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12573b2f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12573b32 mov edx, dword ptr [eax*4 + 0x125983a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125983a0)));
  /* 12573b39 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12573b3d push eax */
  push32((uint32_t)(EAX));
  /* 12573b3e call dword ptr [0x12599350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599350))), 0x12573b44u);
  /* 12573b44 pop ebp */
  EBP = (pop32());
  /* 12573b45 ret  */
  ESPCHK(0x12573b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b50 @ 0x12573b50 (218 bytes, 63 insns) */
void f_12573b50(void) {
  FTRACE(0x12573b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12573b51 mov ebp, esp */
  EBP = (ESP);
  /* 12573b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12573b56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12573b5d push 2 */
  push32((uint32_t)(0x2u));
  /* 12573b5f call 0x1256dda0 */
  push32(0x12573b64u); f_1256dda0();
  /* 12573b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573b67 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12573b6e jmp 0x12573b79 */
  goto L_12573b79;
L_12573b70:;
  /* 12573b70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573b73 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573b76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12573b79:;
  /* 12573b79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573b7c cmp ecx, dword ptr [0x125980a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125980a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573b82 jge 0x12573c19 */
  if ((C.sf==C.of)) goto L_12573c19;
  /* 12573b88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573b8b mov eax, dword ptr [0x12596d60] */
  EAX = (r32((uint32_t)(0x12596d60)));
  /* 12573b90 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573b94 je 0x12573c14 */
  if (C.zf) goto L_12573c14;
  /* 12573b96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573b99 mov edx, dword ptr [0x12596d60] */
  EDX = (r32((uint32_t)(0x12596d60)));
  /* 12573b9f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12573ba2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12573ba5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12573bab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12573bad je 0x12573bd1 */
  if (C.zf) goto L_12573bd1;
  /* 12573baf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573bb2 mov eax, dword ptr [0x12596d60] */
  EAX = (r32((uint32_t)(0x12596d60)));
  /* 12573bb7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12573bba push ecx */
  push32((uint32_t)(ECX));
  /* 12573bbb call 0x12574940 */
  push32(0x12573bc0u); f_12574940();
  /* 12573bc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573bc3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573bc6 je 0x12573bd1 */
  if (C.zf) goto L_12573bd1;
  /* 12573bc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573bcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573bce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12573bd1:;
  /* 12573bd1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573bd5 jl 0x12573c14 */
  if ((C.sf!=C.of)) goto L_12573c14;
  /* 12573bd7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573bda mov ecx, dword ptr [0x12596d60] */
  ECX = (r32((uint32_t)(0x12596d60)));
  /* 12573be0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12573be3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573be6 push edx */
  push32((uint32_t)(EDX));
  /* 12573be7 call dword ptr [0x12599390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599390))), 0x12573bedu);
  /* 12573bed push 2 */
  push32((uint32_t)(0x2u));
  /* 12573bef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573bf2 mov ecx, dword ptr [0x12596d60] */
  ECX = (r32((uint32_t)(0x12596d60)));
  /* 12573bf8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12573bfb push edx */
  push32((uint32_t)(EDX));
  /* 12573bfc call 0x1256ae30 */
  push32(0x12573c01u); f_1256ae30();
  /* 12573c01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573c04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573c07 mov ecx, dword ptr [0x12596d60] */
  ECX = (r32((uint32_t)(0x12596d60)));
  /* 12573c0d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12573c14:;
  /* 12573c14 jmp 0x12573b70 */
  goto L_12573b70;
L_12573c19:;
  /* 12573c19 push 2 */
  push32((uint32_t)(0x2u));
  /* 12573c1b call 0x1256de40 */
  push32(0x12573c20u); f_1256de40();
  /* 12573c20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573c26 mov esp, ebp */
  ESP = (EBP);
  /* 12573c28 pop ebp */
  EBP = (pop32());
  /* 12573c29 ret  */
  ESPCHK(0x12573b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c30 @ 0x12573c30 (68 bytes, 26 insns) */
void f_12573c30(void) {
  FTRACE(0x12573c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12573c31 mov ebp, esp */
  EBP = (ESP);
  /* 12573c33 push ecx */
  push32((uint32_t)(ECX));
  /* 12573c34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573c38 jne 0x12573c46 */
  if (!C.zf) goto L_12573c46;
  /* 12573c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12573c3c call 0x12573da0 */
  push32(0x12573c41u); f_12573da0();
  /* 12573c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573c44 jmp 0x12573c70 */
  goto L_12573c70;
L_12573c46:;
  /* 12573c46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573c49 push eax */
  push32((uint32_t)(EAX));
  /* 12573c4a call 0x125731b0 */
  push32(0x12573c4fu); f_125731b0();
  /* 12573c4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573c52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573c55 push ecx */
  push32((uint32_t)(ECX));
  /* 12573c56 call 0x12573c80 */
  push32(0x12573c5bu); f_12573c80();
  /* 12573c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573c5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12573c61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573c64 push edx */
  push32((uint32_t)(EDX));
  /* 12573c65 call 0x12573220 */
  push32(0x12573c6au); f_12573220();
  /* 12573c6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573c6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12573c70:;
  /* 12573c70 mov esp, ebp */
  ESP = (EBP);
  /* 12573c72 pop ebp */
  EBP = (pop32());
  /* 12573c73 ret  */
  ESPCHK(0x12573c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c80 @ 0x12573c80 (65 bytes, 26 insns) */
void f_12573c80(void) {
  FTRACE(0x12573c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12573c81 mov ebp, esp */
  EBP = (ESP);
  /* 12573c83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573c86 push eax */
  push32((uint32_t)(EAX));
  /* 12573c87 call 0x12573cd0 */
  push32(0x12573c8cu); f_12573cd0();
  /* 12573c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573c8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12573c91 je 0x12573c98 */
  if (C.zf) goto L_12573c98;
  /* 12573c93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12573c96 jmp 0x12573cbf */
  goto L_12573cbf;
L_12573c98:;
  /* 12573c98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573c9b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12573c9e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12573ca4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12573ca6 je 0x12573cbd */
  if (C.zf) goto L_12573cbd;
  /* 12573ca8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573cab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12573cae push ecx */
  push32((uint32_t)(ECX));
  /* 12573caf call 0x12574a90 */
  push32(0x12573cb4u); f_12574a90();
  /* 12573cb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573cb7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12573cb9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12573cbb jmp 0x12573cbf */
  goto L_12573cbf;
L_12573cbd:;
  /* 12573cbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12573cbf:;
  /* 12573cbf pop ebp */
  EBP = (pop32());
  /* 12573cc0 ret  */
  ESPCHK(0x12573c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013cd0 @ 0x12573cd0 (183 bytes, 62 insns) */
void f_12573cd0(void) {
  FTRACE(0x12573cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12573cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12573cd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12573cd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12573cdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573ce0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12573ce3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573ce6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12573ce9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12573cec cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573cef jne 0x12573d6b */
  if (!C.zf) goto L_12573d6b;
  /* 12573cf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573cf4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12573cf7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12573cfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12573cff je 0x12573d6b */
  if (C.zf) goto L_12573d6b;
  /* 12573d01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573d04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573d07 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12573d09 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12573d0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12573d0f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573d13 jle 0x12573d6b */
  if ((C.zf||C.sf!=C.of)) goto L_12573d6b;
  /* 12573d15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573d18 push edx */
  push32((uint32_t)(EDX));
  /* 12573d19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573d1c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12573d1f push ecx */
  push32((uint32_t)(ECX));
  /* 12573d20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573d23 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12573d26 push eax */
  push32((uint32_t)(EAX));
  /* 12573d27 call 0x12572c40 */
  push32(0x12573d2cu); f_12572c40();
  /* 12573d2c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573d2f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573d32 jne 0x12573d55 */
  if (!C.zf) goto L_12573d55;
  /* 12573d34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573d37 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12573d3a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12573d40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12573d42 je 0x12573d53 */
  if (C.zf) goto L_12573d53;
  /* 12573d44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573d47 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12573d4a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12573d4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573d50 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12573d53:;
  /* 12573d53 jmp 0x12573d6b */
  goto L_12573d6b;
L_12573d55:;
  /* 12573d55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573d58 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12573d5b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12573d5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573d61 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12573d64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12573d6b:;
  /* 12573d6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573d6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573d71 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12573d74 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12573d76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12573d79 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12573d80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573d83 mov esp, ebp */
  ESP = (EBP);
  /* 12573d85 pop ebp */
  EBP = (pop32());
  /* 12573d86 ret  */
  ESPCHK(0x12573cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d90 @ 0x12573d90 (15 bytes, 7 insns) */
void f_12573d90(void) {
  FTRACE(0x12573d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12573d91 mov ebp, esp */
  EBP = (ESP);
  /* 12573d93 push 1 */
  push32((uint32_t)(0x1u));
  /* 12573d95 call 0x12573da0 */
  push32(0x12573d9au); f_12573da0();
  /* 12573d9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573d9d pop ebp */
  EBP = (pop32());
  /* 12573d9e ret  */
  ESPCHK(0x12573d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013da0 @ 0x12573da0 (319 bytes, 94 insns) */
void f_12573da0(void) {
  FTRACE(0x12573da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12573da1 mov ebp, esp */
  EBP = (ESP);
  /* 12573da3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12573da6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12573dad mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12573db4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12573db6 call 0x1256dda0 */
  push32(0x12573dbbu); f_1256dda0();
  /* 12573dbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573dbe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12573dc5 jmp 0x12573dd0 */
  goto L_12573dd0;
L_12573dc7:;
  /* 12573dc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573dca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573dcd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12573dd0:;
  /* 12573dd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573dd3 cmp ecx, dword ptr [0x125980a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125980a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573dd9 jge 0x12573ec3 */
  if ((C.sf==C.of)) goto L_12573ec3;
  /* 12573ddf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573de2 mov eax, dword ptr [0x12596d60] */
  EAX = (r32((uint32_t)(0x12596d60)));
  /* 12573de7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573deb je 0x12573ebe */
  if (C.zf) goto L_12573ebe;
  /* 12573df1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573df4 mov edx, dword ptr [0x12596d60] */
  EDX = (r32((uint32_t)(0x12596d60)));
  /* 12573dfa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12573dfd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12573e00 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12573e06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12573e08 je 0x12573ebe */
  if (C.zf) goto L_12573ebe;
  /* 12573e0e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573e11 mov eax, dword ptr [0x12596d60] */
  EAX = (r32((uint32_t)(0x12596d60)));
  /* 12573e16 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12573e19 push ecx */
  push32((uint32_t)(ECX));
  /* 12573e1a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573e1d push edx */
  push32((uint32_t)(EDX));
  /* 12573e1e call 0x125731f0 */
  push32(0x12573e23u); f_125731f0();
  /* 12573e23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573e26 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573e29 mov ecx, dword ptr [0x12596d60] */
  ECX = (r32((uint32_t)(0x12596d60)));
  /* 12573e2f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12573e32 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12573e35 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12573e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12573e3c je 0x12573ea5 */
  if (C.zf) goto L_12573ea5;
  /* 12573e3e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573e42 jne 0x12573e69 */
  if (!C.zf) goto L_12573e69;
  /* 12573e44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573e47 mov edx, dword ptr [0x12596d60] */
  EDX = (r32((uint32_t)(0x12596d60)));
  /* 12573e4d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12573e50 push eax */
  push32((uint32_t)(EAX));
  /* 12573e51 call 0x12573c80 */
  push32(0x12573e56u); f_12573c80();
  /* 12573e56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573e59 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573e5c je 0x12573e67 */
  if (C.zf) goto L_12573e67;
  /* 12573e5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573e61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573e64 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12573e67:;
  /* 12573e67 jmp 0x12573ea5 */
  goto L_12573ea5;
L_12573e69:;
  /* 12573e69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573e6d jne 0x12573ea5 */
  if (!C.zf) goto L_12573ea5;
  /* 12573e6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573e72 mov eax, dword ptr [0x12596d60] */
  EAX = (r32((uint32_t)(0x12596d60)));
  /* 12573e77 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12573e7a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12573e7d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12573e80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12573e82 je 0x12573ea5 */
  if (C.zf) goto L_12573ea5;
  /* 12573e84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573e87 mov ecx, dword ptr [0x12596d60] */
  ECX = (r32((uint32_t)(0x12596d60)));
  /* 12573e8d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12573e90 push edx */
  push32((uint32_t)(EDX));
  /* 12573e91 call 0x12573c80 */
  push32(0x12573e96u); f_12573c80();
  /* 12573e96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573e99 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573e9c jne 0x12573ea5 */
  if (!C.zf) goto L_12573ea5;
  /* 12573e9e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12573ea5:;
  /* 12573ea5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573ea8 mov ecx, dword ptr [0x12596d60] */
  ECX = (r32((uint32_t)(0x12596d60)));
  /* 12573eae mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12573eb1 push edx */
  push32((uint32_t)(EDX));
  /* 12573eb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12573eb5 push eax */
  push32((uint32_t)(EAX));
  /* 12573eb6 call 0x12573260 */
  push32(0x12573ebbu); f_12573260();
  /* 12573ebb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12573ebe:;
  /* 12573ebe jmp 0x12573dc7 */
  goto L_12573dc7;
L_12573ec3:;
  /* 12573ec3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12573ec5 call 0x1256de40 */
  push32(0x12573ecau); f_1256de40();
  /* 12573eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573ecd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573ed1 jne 0x12573ed8 */
  if (!C.zf) goto L_12573ed8;
  /* 12573ed3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12573ed6 jmp 0x12573edb */
  goto L_12573edb;
L_12573ed8:;
  /* 12573ed8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12573edb:;
  /* 12573edb mov esp, ebp */
  ESP = (EBP);
  /* 12573edd pop ebp */
  EBP = (pop32());
  /* 12573ede ret  */
  ESPCHK(0x12573da0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12573ee0 (15 bytes, 7 insns) */
void f_12573ee0(void) {
  FTRACE(0x12573ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12573ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12573ee3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12573ee5 call 0x12569310 */
  push32(0x12573eeau); f_12569310();
  /* 12573eea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573eed pop ebp */
  EBP = (pop32());
  /* 12573eee ret  */
  ESPCHK(0x12573ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ef0 @ 0x12573ef0 (1007 bytes, 269 insns) */
void f_12573ef0(void) {
  FTRACE(0x12573ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12573ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12573ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12573ef3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12573ef9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573efd jl 0x12573f05 */
  if ((C.sf!=C.of)) goto L_12573f05;
  /* 12573eff cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573f03 jle 0x12573f0c */
  if ((C.zf||C.sf!=C.of)) goto L_12573f0c;
L_12573f05:;
  /* 12573f05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12573f07 jmp 0x125742db */
  goto L_125742db;
L_12573f0c:;
  /* 12573f0c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12573f0e call 0x1256dda0 */
  push32(0x12573f13u); f_1256dda0();
  /* 12573f13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573f16 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12573f1d mov eax, dword ptr [0x12596d4c] */
  EAX = (r32((uint32_t)(0x12596d4c)));
  /* 12573f22 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12573f25 mov dword ptr [0x12596d4c], eax */
  w32((uint32_t)(0x12596d4c), (EAX));
L_12573f2a:;
  /* 12573f2a cmp dword ptr [0x12596d5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596d5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573f31 je 0x12573f3d */
  if (C.zf) goto L_12573f3d;
  /* 12573f33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12573f35 call dword ptr [0x1259930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1259930c))), 0x12573f3bu);
  /* 12573f3b jmp 0x12573f2a */
  goto L_12573f2a;
L_12573f3d:;
  /* 12573f3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573f41 je 0x12573f81 */
  if (C.zf) goto L_12573f81;
  /* 12573f43 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573f47 je 0x12573f61 */
  if (C.zf) goto L_12573f61;
  /* 12573f49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12573f4c push ecx */
  push32((uint32_t)(ECX));
  /* 12573f4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573f50 push edx */
  push32((uint32_t)(EDX));
  /* 12573f51 call 0x125742e0 */
  push32(0x12573f56u); f_125742e0();
  /* 12573f56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573f59 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12573f5f jmp 0x12573f73 */
  goto L_12573f73;
L_12573f61:;
  /* 12573f61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12573f64 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12573f67 mov ecx, dword ptr [eax + 0x125954dc] */
  ECX = (r32((uint32_t)(EAX + 0x125954dc)));
  /* 12573f6d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12573f73:;
  /* 12573f73 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12573f79 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12573f7c jmp 0x125742bb */
  goto L_125742bb;
L_12573f81:;
  /* 12573f81 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12573f88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12573f8f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573f93 je 0x125742b3 */
  if (C.zf) goto L_125742b3;
  /* 12573f99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12573f9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12573f9f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573fa2 jne 0x125741c4 */
  if (!C.zf) goto L_125741c4;
  /* 12573fa8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12573fab movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12573faf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573fb2 jne 0x125741c4 */
  if (!C.zf) goto L_125741c4;
  /* 12573fb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12573fbb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12573fbf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573fc2 jne 0x125741c4 */
  if (!C.zf) goto L_125741c4;
  /* 12573fc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12573fcb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12573fd1:;
  /* 12573fd1 push 0x125926a4 */
  push32((uint32_t)(0x125926a4u));
  /* 12573fd6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12573fdc push ecx */
  push32((uint32_t)(ECX));
  /* 12573fdd call 0x12576140 */
  push32(0x12573fe2u); f_12576140();
  /* 12573fe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12573fe5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12573feb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12573ff2 je 0x1257401d */
  if (C.zf) goto L_1257401d;
  /* 12573ff4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12573ffa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12574000 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12574006 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257400d je 0x1257401d */
  if (C.zf) goto L_1257401d;
  /* 1257400f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12574015 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12574018 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257401b jne 0x12574043 */
  if (!C.zf) goto L_12574043;
L_1257401d:;
  /* 1257401d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574021 je 0x1257403c */
  if (C.zf) goto L_1257403c;
  /* 12574023 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12574025 call 0x1256de40 */
  push32(0x1257402au); f_1256de40();
  /* 1257402a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257402d mov edx, dword ptr [0x12596d4c] */
  EDX = (r32((uint32_t)(0x12596d4c)));
  /* 12574033 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12574036 mov dword ptr [0x12596d4c], edx */
  w32((uint32_t)(0x12596d4c), (EDX));
L_1257403c:;
  /* 1257403c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257403e jmp 0x125742db */
  goto L_125742db;
L_12574043:;
  /* 12574043 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1257404a jmp 0x12574055 */
  goto L_12574055;
L_1257404c:;
  /* 1257404c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257404f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574052 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12574055:;
  /* 12574055 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574059 jg 0x125740a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_125740a3;
  /* 1257405b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12574061 push ecx */
  push32((uint32_t)(ECX));
  /* 12574062 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12574068 push edx */
  push32((uint32_t)(EDX));
  /* 12574069 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257406c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1257406f mov ecx, dword ptr [eax + 0x125954d8] */
  ECX = (r32((uint32_t)(EAX + 0x125954d8)));
  /* 12574075 push ecx */
  push32((uint32_t)(ECX));
  /* 12574076 call 0x12576100 */
  push32(0x1257407bu); f_12576100();
  /* 1257407b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257407e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574080 jne 0x125740a1 */
  if (!C.zf) goto L_125740a1;
  /* 12574082 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12574085 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12574088 mov eax, dword ptr [edx + 0x125954d8] */
  EAX = (r32((uint32_t)(EDX + 0x125954d8)));
  /* 1257408e push eax */
  push32((uint32_t)(EAX));
  /* 1257408f call 0x1256d1d0 */
  push32(0x12574094u); f_1256d1d0();
  /* 12574094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574097 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257409d jne 0x125740a1 */
  if (!C.zf) goto L_125740a1;
  /* 1257409f jmp 0x125740a3 */
  goto L_125740a3;
L_125740a1:;
  /* 125740a1 jmp 0x1257404c */
  goto L_1257404c;
L_125740a3:;
  /* 125740a3 push 0x125926a0 */
  push32((uint32_t)(0x125926a0u));
  /* 125740a8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125740ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125740b1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 125740b7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125740bd push edx */
  push32((uint32_t)(EDX));
  /* 125740be call 0x125760c0 */
  push32(0x125740c3u); f_125760c0();
  /* 125740c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125740c6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 125740cc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125740d3 jne 0x12574109 */
  if (!C.zf) goto L_12574109;
  /* 125740d5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125740db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125740de cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125740e1 je 0x12574109 */
  if (C.zf) goto L_12574109;
  /* 125740e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125740e7 je 0x12574102 */
  if (C.zf) goto L_12574102;
  /* 125740e9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125740eb call 0x1256de40 */
  push32(0x125740f0u); f_1256de40();
  /* 125740f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125740f3 mov edx, dword ptr [0x12596d4c] */
  EDX = (r32((uint32_t)(0x12596d4c)));
  /* 125740f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125740fc mov dword ptr [0x12596d4c], edx */
  w32((uint32_t)(0x12596d4c), (EDX));
L_12574102:;
  /* 12574102 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12574104 jmp 0x125742db */
  goto L_125742db;
L_12574109:;
  /* 12574109 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257410d jg 0x1257415a */
  if ((!C.zf&&C.sf==C.of)) goto L_1257415a;
  /* 1257410f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12574115 push eax */
  push32((uint32_t)(EAX));
  /* 12574116 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1257411c push ecx */
  push32((uint32_t)(ECX));
  /* 1257411d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12574123 push edx */
  push32((uint32_t)(EDX));
  /* 12574124 call 0x1256dbc0 */
  push32(0x12574129u); f_1256dbc0();
  /* 12574129 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257412c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12574132 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1257413a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12574140 push ecx */
  push32((uint32_t)(ECX));
  /* 12574141 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12574144 push edx */
  push32((uint32_t)(EDX));
  /* 12574145 call 0x125742e0 */
  push32(0x1257414au); f_125742e0();
  /* 1257414a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257414d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257414f je 0x1257415a */
  if (C.zf) goto L_1257415a;
  /* 12574151 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574154 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574157 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1257415a:;
  /* 1257415a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12574160 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574166 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1257416c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12574172 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12574175 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574177 je 0x12574188 */
  if (C.zf) goto L_12574188;
  /* 12574179 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1257417f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574182 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12574188:;
  /* 12574188 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1257418e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12574191 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574193 jne 0x12573fd1 */
  if (!C.zf) goto L_12573fd1;
  /* 12574199 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257419d je 0x125741ac */
  if (C.zf) goto L_125741ac;
  /* 1257419f call 0x12574480 */
  push32(0x125741a4u); f_12574480();
  /* 125741a4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 125741aa jmp 0x125741b6 */
  goto L_125741b6;
L_125741ac:;
  /* 125741ac mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_125741b6:;
  /* 125741b6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 125741bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125741bf jmp 0x125742b1 */
  goto L_125742b1;
L_125741c4:;
  /* 125741c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125741c7 push edx */
  push32((uint32_t)(EDX));
  /* 125741c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125741ca push 0 */
  push32((uint32_t)(0x0u));
  /* 125741cc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 125741d2 push eax */
  push32((uint32_t)(EAX));
  /* 125741d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125741d6 push ecx */
  push32((uint32_t)(ECX));
  /* 125741d7 call 0x12574580 */
  push32(0x125741dcu); f_12574580();
  /* 125741dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125741df mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125741e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125741e6 je 0x125742b1 */
  if (C.zf) goto L_125742b1;
  /* 125741ec mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125741f3 jmp 0x125741fe */
  goto L_125741fe;
L_125741f5:;
  /* 125741f5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125741f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125741fb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125741fe:;
  /* 125741fe cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574202 jg 0x12574260 */
  if ((!C.zf&&C.sf==C.of)) goto L_12574260;
  /* 12574204 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574208 je 0x1257425e */
  if (C.zf) goto L_1257425e;
  /* 1257420a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1257420d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12574210 mov ecx, dword ptr [eax + 0x125954dc] */
  ECX = (r32((uint32_t)(EAX + 0x125954dc)));
  /* 12574216 push ecx */
  push32((uint32_t)(ECX));
  /* 12574217 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1257421d push edx */
  push32((uint32_t)(EDX));
  /* 1257421e call 0x12576030 */
  push32(0x12574223u); f_12576030();
  /* 12574223 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574226 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574228 je 0x12574255 */
  if (C.zf) goto L_12574255;
  /* 1257422a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12574230 push eax */
  push32((uint32_t)(EAX));
  /* 12574231 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12574234 push ecx */
  push32((uint32_t)(ECX));
  /* 12574235 call 0x125742e0 */
  push32(0x1257423au); f_125742e0();
  /* 1257423a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257423d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257423f je 0x1257424c */
  if (C.zf) goto L_1257424c;
  /* 12574241 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574244 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574247 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1257424a jmp 0x12574253 */
  goto L_12574253;
L_1257424c:;
  /* 1257424c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12574253:;
  /* 12574253 jmp 0x1257425e */
  goto L_1257425e;
L_12574255:;
  /* 12574255 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574258 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257425b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1257425e:;
  /* 1257425e jmp 0x125741f5 */
  goto L_125741f5;
L_12574260:;
  /* 12574260 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574264 je 0x1257428b */
  if (C.zf) goto L_1257428b;
  /* 12574266 call 0x12574480 */
  push32(0x1257426bu); f_12574480();
  /* 1257426b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1257426e push 2 */
  push32((uint32_t)(0x2u));
  /* 12574270 mov ecx, dword ptr [0x125954dc] */
  ECX = (r32((uint32_t)(0x125954dc)));
  /* 12574276 push ecx */
  push32((uint32_t)(ECX));
  /* 12574277 call 0x1256ae30 */
  push32(0x1257427cu); f_1256ae30();
  /* 1257427c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257427f mov dword ptr [0x125954dc], 0 */
  w32((uint32_t)(0x125954dc), (0x0u));
  /* 12574289 jmp 0x125742b1 */
  goto L_125742b1;
L_1257428b:;
  /* 1257428b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257428f je 0x1257429e */
  if (C.zf) goto L_1257429e;
  /* 12574291 call 0x12574480 */
  push32(0x12574296u); f_12574480();
  /* 12574296 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1257429c jmp 0x125742a8 */
  goto L_125742a8;
L_1257429e:;
  /* 1257429e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_125742a8:;
  /* 125742a8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 125742ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125742b1:;
  /* 125742b1 jmp 0x125742bb */
  goto L_125742bb;
L_125742b3:;
  /* 125742b3 call 0x12574480 */
  push32(0x125742b8u); f_12574480();
  /* 125742b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125742bb:;
  /* 125742bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125742bf je 0x125742d8 */
  if (C.zf) goto L_125742d8;
  /* 125742c1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125742c3 call 0x1256de40 */
  push32(0x125742c8u); f_1256de40();
  /* 125742c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125742cb mov eax, dword ptr [0x12596d4c] */
  EAX = (r32((uint32_t)(0x12596d4c)));
  /* 125742d0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125742d3 mov dword ptr [0x12596d4c], eax */
  w32((uint32_t)(0x12596d4c), (EAX));
L_125742d8:;
  /* 125742d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125742db:;
  /* 125742db mov esp, ebp */
  ESP = (EBP);
  /* 125742dd pop ebp */
  EBP = (pop32());
  /* 125742de ret  */
  ESPCHK(0x12573ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_100142e0 @ 0x125742e0 (403 bytes, 117 insns) */
void f_125742e0(void) {
  FTRACE(0x125742e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125742e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125742e1 mov ebp, esp */
  EBP = (ESP);
  /* 125742e3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125742e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125742ec push eax */
  push32((uint32_t)(EAX));
  /* 125742ed lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 125742f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125742f4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 125742fa push edx */
  push32((uint32_t)(EDX));
  /* 125742fb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12574301 push eax */
  push32((uint32_t)(EAX));
  /* 12574302 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12574305 push ecx */
  push32((uint32_t)(ECX));
  /* 12574306 call 0x12574580 */
  push32(0x1257430bu); f_12574580();
  /* 1257430b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257430e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574310 jne 0x12574319 */
  if (!C.zf) goto L_12574319;
  /* 12574312 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12574314 jmp 0x1257446f */
  goto L_1257446f;
L_12574319:;
  /* 12574319 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1257431e push 0x125926a8 */
  push32((uint32_t)(0x125926a8u));
  /* 12574323 push 2 */
  push32((uint32_t)(0x2u));
  /* 12574325 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1257432b push edx */
  push32((uint32_t)(EDX));
  /* 1257432c call 0x1256d1d0 */
  push32(0x12574331u); f_1256d1d0();
  /* 12574331 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574334 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574337 push eax */
  push32((uint32_t)(EAX));
  /* 12574338 call 0x1256a3a0 */
  push32(0x1257433du); f_1256a3a0();
  /* 1257433d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574340 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12574343 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574347 jne 0x12574350 */
  if (!C.zf) goto L_12574350;
  /* 12574349 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257434b jmp 0x1257446f */
  goto L_1257446f;
L_12574350:;
  /* 12574350 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574353 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12574356 mov ecx, dword ptr [eax + 0x125954dc] */
  ECX = (r32((uint32_t)(EAX + 0x125954dc)));
  /* 1257435c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1257435f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574362 mov eax, dword ptr [edx*4 + 0x12596bc8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12596bc8)));
  /* 12574369 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1257436c push 6 */
  push32((uint32_t)(0x6u));
  /* 1257436e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574371 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12574374 add ecx, 0x12596c18 */
  { uint32_t _a=(ECX),_b=(0x12596c18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257437a push ecx */
  push32((uint32_t)(ECX));
  /* 1257437b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1257437e push edx */
  push32((uint32_t)(EDX));
  /* 1257437f call 0x12570c80 */
  push32(0x12574384u); f_12570c80();
  /* 12574384 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574387 mov eax, dword ptr [0x12596be0] */
  EAX = (r32((uint32_t)(0x12596be0)));
  /* 1257438c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1257438f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12574395 push ecx */
  push32((uint32_t)(ECX));
  /* 12574396 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12574399 push edx */
  push32((uint32_t)(EDX));
  /* 1257439a call 0x1256d350 */
  push32(0x1257439fu); f_1256d350();
  /* 1257439f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125743a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125743a5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125743a8 mov dword ptr [ecx + 0x125954dc], eax */
  w32((uint32_t)(ECX + 0x125954dc), (EAX));
  /* 125743ae mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 125743b4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125743ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125743bd mov dword ptr [eax*4 + 0x12596bc8], edx */
  w32((uint32_t)(EAX*4 + 0x12596bc8), (EDX));
  /* 125743c4 push 6 */
  push32((uint32_t)(0x6u));
  /* 125743c6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 125743cc push ecx */
  push32((uint32_t)(ECX));
  /* 125743cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125743d0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125743d3 add edx, 0x12596c18 */
  { uint32_t _a=(EDX),_b=(0x12596c18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125743d9 push edx */
  push32((uint32_t)(EDX));
  /* 125743da call 0x12570c80 */
  push32(0x125743dfu); f_12570c80();
  /* 125743df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125743e2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125743e6 jne 0x125743f3 */
  if (!C.zf) goto L_125743f3;
  /* 125743e8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125743ee mov dword ptr [0x12596be0], eax */
  w32((uint32_t)(0x12596be0), (EAX));
L_125743f3:;
  /* 125743f3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125743f7 jne 0x12574405 */
  if (!C.zf) goto L_12574405;
  /* 125743f9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125743ff mov dword ptr [0x12596be4], ecx */
  w32((uint32_t)(0x12596be4), (ECX));
L_12574405:;
  /* 12574405 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574408 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1257440b call dword ptr [edx + 0x125954e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x125954e0))), 0x12574411u);
  /* 12574411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574413 je 0x1257444c */
  if (C.zf) goto L_1257444c;
  /* 12574415 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574418 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1257441b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257441e mov dword ptr [eax + 0x125954dc], ecx */
  w32((uint32_t)(EAX + 0x125954dc), (ECX));
  /* 12574424 push 2 */
  push32((uint32_t)(0x2u));
  /* 12574426 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12574429 push edx */
  push32((uint32_t)(EDX));
  /* 1257442a call 0x1256ae30 */
  push32(0x1257442fu); f_1256ae30();
  /* 1257442f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574432 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574435 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574438 mov dword ptr [eax*4 + 0x12596bc8], ecx */
  w32((uint32_t)(EAX*4 + 0x12596bc8), (ECX));
  /* 1257443f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12574442 mov dword ptr [0x12596be0], edx */
  w32((uint32_t)(0x12596be0), (EDX));
  /* 12574448 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257444a jmp 0x1257446f */
  goto L_1257446f;
L_1257444c:;
  /* 1257444c cmp dword ptr [ebp - 0xc], 0x125953c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x125953c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574453 je 0x12574463 */
  if (C.zf) goto L_12574463;
  /* 12574455 push 2 */
  push32((uint32_t)(0x2u));
  /* 12574457 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257445a push eax */
  push32((uint32_t)(EAX));
  /* 1257445b call 0x1256ae30 */
  push32(0x12574460u); f_1256ae30();
  /* 12574460 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12574463:;
  /* 12574463 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574466 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12574469 mov eax, dword ptr [ecx + 0x125954dc] */
  EAX = (r32((uint32_t)(ECX + 0x125954dc)));
L_1257446f:;
  /* 1257446f mov esp, ebp */
  ESP = (EBP);
  /* 12574471 pop ebp */
  EBP = (pop32());
  /* 12574472 ret  */
  ESPCHK(0x125742e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014480 @ 0x12574480 (256 bytes, 72 insns) */
void f_12574480(void) {
  FTRACE(0x12574480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12574480 push ebp */
  push32((uint32_t)(EBP));
  /* 12574481 mov ebp, esp */
  EBP = (ESP);
  /* 12574483 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12574486 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1257448d cmp dword ptr [0x125954dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125954dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574494 jne 0x125744b4 */
  if (!C.zf) goto L_125744b4;
  /* 12574496 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1257449b push 0x125926a8 */
  push32((uint32_t)(0x125926a8u));
  /* 125744a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 125744a2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 125744a7 call 0x1256a3a0 */
  push32(0x125744acu); f_1256a3a0();
  /* 125744ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125744af mov dword ptr [0x125954dc], eax */
  w32((uint32_t)(0x125954dc), (EAX));
L_125744b4:;
  /* 125744b4 mov eax, dword ptr [0x125954dc] */
  EAX = (r32((uint32_t)(0x125954dc)));
  /* 125744b9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125744bc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125744c3 jmp 0x125744ce */
  goto L_125744ce;
L_125744c5:;
  /* 125744c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125744c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125744cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125744ce:;
  /* 125744ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125744d1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125744d4 mov eax, dword ptr [edx + 0x125954dc] */
  EAX = (r32((uint32_t)(EDX + 0x125954dc)));
  /* 125744da push eax */
  push32((uint32_t)(EAX));
  /* 125744db push 0x125926b4 */
  push32((uint32_t)(0x125926b4u));
  /* 125744e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125744e3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125744e6 mov edx, dword ptr [ecx + 0x125954d8] */
  EDX = (r32((uint32_t)(ECX + 0x125954d8)));
  /* 125744ec push edx */
  push32((uint32_t)(EDX));
  /* 125744ed push 3 */
  push32((uint32_t)(0x3u));
  /* 125744ef mov eax, dword ptr [0x125954dc] */
  EAX = (r32((uint32_t)(0x125954dc)));
  /* 125744f4 push eax */
  push32((uint32_t)(EAX));
  /* 125744f5 call 0x12574720 */
  push32(0x125744fau); f_12574720();
  /* 125744fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125744fd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574501 jge 0x12574549 */
  if ((C.sf==C.of)) goto L_12574549;
  /* 12574503 push 0x125926a0 */
  push32((uint32_t)(0x125926a0u));
  /* 12574508 mov ecx, dword ptr [0x125954dc] */
  ECX = (r32((uint32_t)(0x125954dc)));
  /* 1257450e push ecx */
  push32((uint32_t)(ECX));
  /* 1257450f call 0x1256d360 */
  push32(0x12574514u); f_1256d360();
  /* 12574514 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574517 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257451a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257451d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12574520 mov eax, dword ptr [edx + 0x125954dc] */
  EAX = (r32((uint32_t)(EDX + 0x125954dc)));
  /* 12574526 push eax */
  push32((uint32_t)(EAX));
  /* 12574527 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257452a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1257452d mov edx, dword ptr [ecx + 0x125954dc] */
  EDX = (r32((uint32_t)(ECX + 0x125954dc)));
  /* 12574533 push edx */
  push32((uint32_t)(EDX));
  /* 12574534 call 0x12576030 */
  push32(0x12574539u); f_12576030();
  /* 12574539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257453c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257453e je 0x12574547 */
  if (C.zf) goto L_12574547;
  /* 12574540 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12574547:;
  /* 12574547 jmp 0x12574577 */
  goto L_12574577;
L_12574549:;
  /* 12574549 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257454d jne 0x12574556 */
  if (!C.zf) goto L_12574556;
  /* 1257454f mov eax, dword ptr [0x125954dc] */
  EAX = (r32((uint32_t)(0x125954dc)));
  /* 12574554 jmp 0x1257457c */
  goto L_1257457c;
L_12574556:;
  /* 12574556 push 2 */
  push32((uint32_t)(0x2u));
  /* 12574558 mov eax, dword ptr [0x125954dc] */
  EAX = (r32((uint32_t)(0x125954dc)));
  /* 1257455d push eax */
  push32((uint32_t)(EAX));
  /* 1257455e call 0x1256ae30 */
  push32(0x12574563u); f_1256ae30();
  /* 12574563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574566 mov dword ptr [0x125954dc], 0 */
  w32((uint32_t)(0x125954dc), (0x0u));
  /* 12574570 mov eax, dword ptr [0x125954f4] */
  EAX = (r32((uint32_t)(0x125954f4)));
  /* 12574575 jmp 0x1257457c */
  goto L_1257457c;
L_12574577:;
  /* 12574577 jmp 0x125744c5 */
  goto L_125744c5;
L_1257457c:;
  /* 1257457c mov esp, ebp */
  ESP = (EBP);
  /* 1257457e pop ebp */
  EBP = (pop32());
  /* 1257457f ret  */
  ESPCHK(0x12574480u, _esp0);
  ESP += 4; return;
}

/* FUN_10014580 @ 0x12574580 (388 bytes, 115 insns) */
void f_12574580(void) {
  FTRACE(0x12574580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12574580 push ebp */
  push32((uint32_t)(EBP));
  /* 12574581 mov ebp, esp */
  EBP = (ESP);
  /* 12574583 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12574589 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257458d jne 0x12574596 */
  if (!C.zf) goto L_12574596;
  /* 1257458f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12574591 jmp 0x12574700 */
  goto L_12574700;
L_12574596:;
  /* 12574596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574599 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1257459c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257459f jne 0x125745f0 */
  if (!C.zf) goto L_125745f0;
  /* 125745a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125745a4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125745a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125745aa jne 0x125745f0 */
  if (!C.zf) goto L_125745f0;
  /* 125745ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125745af mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 125745b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125745b5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 125745b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125745bd je 0x125745d9 */
  if (C.zf) goto L_125745d9;
  /* 125745bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125745c2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 125745c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125745ca mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 125745d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125745d3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_125745d9:;
  /* 125745d9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125745dd je 0x125745e8 */
  if (C.zf) goto L_125745e8;
  /* 125745df mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125745e2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_125745e8:;
  /* 125745e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125745eb jmp 0x12574700 */
  goto L_12574700;
L_125745f0:;
  /* 125745f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125745f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125745f4 push 0x12595450 */
  push32((uint32_t)(0x12595450u));
  /* 125745f9 call 0x12576030 */
  push32(0x125745feu); f_12576030();
  /* 125745fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574601 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574603 je 0x125746b8 */
  if (C.zf) goto L_125746b8;
  /* 12574609 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257460c push edx */
  push32((uint32_t)(EDX));
  /* 1257460d push 0x125953cc */
  push32((uint32_t)(0x125953ccu));
  /* 12574612 call 0x12576030 */
  push32(0x12574617u); f_12576030();
  /* 12574617 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257461a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257461c je 0x125746b8 */
  if (C.zf) goto L_125746b8;
  /* 12574622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574625 push eax */
  push32((uint32_t)(EAX));
  /* 12574626 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1257462c push ecx */
  push32((uint32_t)(ECX));
  /* 1257462d call 0x12574770 */
  push32(0x12574632u); f_12574770();
  /* 12574632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574635 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574637 je 0x12574640 */
  if (C.zf) goto L_12574640;
  /* 12574639 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257463b jmp 0x12574700 */
  goto L_12574700;
L_12574640:;
  /* 12574640 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12574646 push edx */
  push32((uint32_t)(EDX));
  /* 12574647 push 0x12596bf0 */
  push32((uint32_t)(0x12596bf0u));
  /* 1257464c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12574652 push eax */
  push32((uint32_t)(EAX));
  /* 12574653 call 0x12576180 */
  push32(0x12574658u); f_12576180();
  /* 12574658 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257465b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257465d jne 0x12574666 */
  if (!C.zf) goto L_12574666;
  /* 1257465f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12574661 jmp 0x12574700 */
  goto L_12574700;
L_12574666:;
  /* 12574666 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12574668 mov cx, word ptr [0x12596bf4] */
  CX = (r16((uint32_t)(0x12596bf4)));
  /* 1257466f mov dword ptr [0x12596bf8], ecx */
  w32((uint32_t)(0x12596bf8), (ECX));
  /* 12574675 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1257467b push edx */
  push32((uint32_t)(EDX));
  /* 1257467c push 0x12595450 */
  push32((uint32_t)(0x12595450u));
  /* 12574681 call 0x125748d0 */
  push32(0x12574686u); f_125748d0();
  /* 12574686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574689 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257468c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1257468f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12574691 je 0x125746a6 */
  if (C.zf) goto L_125746a6;
  /* 12574693 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574696 push edx */
  push32((uint32_t)(EDX));
  /* 12574697 push 0x125953cc */
  push32((uint32_t)(0x125953ccu));
  /* 1257469c call 0x1256d350 */
  push32(0x125746a1u); f_1256d350();
  /* 125746a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125746a4 jmp 0x125746b8 */
  goto L_125746b8;
L_125746a6:;
  /* 125746a6 push 0x12595450 */
  push32((uint32_t)(0x12595450u));
  /* 125746ab push 0x125953cc */
  push32((uint32_t)(0x125953ccu));
  /* 125746b0 call 0x1256d350 */
  push32(0x125746b5u); f_1256d350();
  /* 125746b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125746b8:;
  /* 125746b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125746bc je 0x125746d1 */
  if (C.zf) goto L_125746d1;
  /* 125746be push 6 */
  push32((uint32_t)(0x6u));
  /* 125746c0 push 0x12596bf0 */
  push32((uint32_t)(0x12596bf0u));
  /* 125746c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125746c8 push eax */
  push32((uint32_t)(EAX));
  /* 125746c9 call 0x12570c80 */
  push32(0x125746ceu); f_12570c80();
  /* 125746ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125746d1:;
  /* 125746d1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125746d5 je 0x125746ea */
  if (C.zf) goto L_125746ea;
  /* 125746d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 125746d9 push 0x12596bf8 */
  push32((uint32_t)(0x12596bf8u));
  /* 125746de mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125746e1 push ecx */
  push32((uint32_t)(ECX));
  /* 125746e2 call 0x12570c80 */
  push32(0x125746e7u); f_12570c80();
  /* 125746e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125746ea:;
  /* 125746ea push 0x12595450 */
  push32((uint32_t)(0x12595450u));
  /* 125746ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125746f2 push edx */
  push32((uint32_t)(EDX));
  /* 125746f3 call 0x1256d350 */
  push32(0x125746f8u); f_1256d350();
  /* 125746f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125746fb mov eax, 0x12595450 */
  EAX = (0x12595450u);
L_12574700:;
  /* 12574700 mov esp, ebp */
  ESP = (EBP);
  /* 12574702 pop ebp */
  EBP = (pop32());
  /* 12574703 ret  */
  ESPCHK(0x12574580u, _esp0);
  ESP += 4; return;
}

/* FUN_10014710 @ 0x12574710 (7 bytes, 5 insns) */
void f_12574710(void) {
  FTRACE(0x12574710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12574710 push ebp */
  push32((uint32_t)(EBP));
  /* 12574711 mov ebp, esp */
  EBP = (ESP);
  /* 12574713 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12574715 pop ebp */
  EBP = (pop32());
  /* 12574716 ret  */
  ESPCHK(0x12574710u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12574720 (79 bytes, 28 insns) */
void f_12574720(void) {
  FTRACE(0x12574720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12574720 push ebp */
  push32((uint32_t)(EBP));
  /* 12574721 mov ebp, esp */
  EBP = (ESP);
  /* 12574723 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12574726 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12574729 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1257472c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12574733 jmp 0x1257473e */
  goto L_1257473e;
L_12574735:;
  /* 12574735 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12574738 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257473b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1257473e:;
  /* 1257473e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12574741 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574744 jge 0x12574764 */
  if ((C.sf==C.of)) goto L_12574764;
  /* 12574746 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574749 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257474c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1257474f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574752 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12574755 push edx */
  push32((uint32_t)(EDX));
  /* 12574756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574759 push eax */
  push32((uint32_t)(EAX));
  /* 1257475a call 0x1256d360 */
  push32(0x1257475fu); f_1256d360();
  /* 1257475f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574762 jmp 0x12574735 */
  goto L_12574735;
L_12574764:;
  /* 12574764 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1257476b mov esp, ebp */
  ESP = (EBP);
  /* 1257476d pop ebp */
  EBP = (pop32());
  /* 1257476e ret  */
  ESPCHK(0x12574720u, _esp0);
  ESP += 4; return;
}

/* FUN_10014770 @ 0x12574770 (349 bytes, 122 insns) */
void f_12574770(void) {
  FTRACE(0x12574770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12574770 push ebp */
  push32((uint32_t)(EBP));
  /* 12574771 mov ebp, esp */
  EBP = (ESP);
  /* 12574773 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12574776 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1257477b push 0 */
  push32((uint32_t)(0x0u));
  /* 1257477d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574780 push eax */
  push32((uint32_t)(EAX));
  /* 12574781 call 0x1256e110 */
  push32(0x12574786u); f_1256e110();
  /* 12574786 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574789 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257478c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1257478f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12574791 jne 0x1257479a */
  if (!C.zf) goto L_1257479a;
  /* 12574793 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12574795 jmp 0x125748c9 */
  goto L_125748c9;
L_1257479a:;
  /* 1257479a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257479d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125747a0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125747a3 jne 0x125747d0 */
  if (!C.zf) goto L_125747d0;
  /* 125747a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125747a8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125747ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125747ae je 0x125747d0 */
  if (C.zf) goto L_125747d0;
  /* 125747b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125747b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125747b6 push ecx */
  push32((uint32_t)(ECX));
  /* 125747b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125747ba add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125747c0 push edx */
  push32((uint32_t)(EDX));
  /* 125747c1 call 0x1256d350 */
  push32(0x125747c6u); f_1256d350();
  /* 125747c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125747c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125747cb jmp 0x125748c9 */
  goto L_125748c9;
L_125747d0:;
  /* 125747d0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125747d7 jmp 0x125747e2 */
  goto L_125747e2;
L_125747d9:;
  /* 125747d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125747dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125747df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125747e2:;
  /* 125747e2 push 0x125926b8 */
  push32((uint32_t)(0x125926b8u));
  /* 125747e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125747ea push ecx */
  push32((uint32_t)(ECX));
  /* 125747eb call 0x125760c0 */
  push32(0x125747f0u); f_125760c0();
  /* 125747f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125747f3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125747f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125747fa jne 0x12574804 */
  if (!C.zf) goto L_12574804;
  /* 125747fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125747ff jmp 0x125748c9 */
  goto L_125748c9;
L_12574804:;
  /* 12574804 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12574807 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257480a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1257480c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1257480f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574813 jne 0x1257483a */
  if (!C.zf) goto L_1257483a;
  /* 12574815 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574819 jge 0x1257483a */
  if ((C.sf==C.of)) goto L_1257483a;
  /* 1257481b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1257481f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574822 je 0x1257483a */
  if (C.zf) goto L_1257483a;
  /* 12574824 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574827 push edx */
  push32((uint32_t)(EDX));
  /* 12574828 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257482b push eax */
  push32((uint32_t)(EAX));
  /* 1257482c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257482f push ecx */
  push32((uint32_t)(ECX));
  /* 12574830 call 0x1256dbc0 */
  push32(0x12574835u); f_1256dbc0();
  /* 12574835 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574838 jmp 0x125748a0 */
  goto L_125748a0;
L_1257483a:;
  /* 1257483a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257483e jne 0x12574868 */
  if (!C.zf) goto L_12574868;
  /* 12574840 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574844 jge 0x12574868 */
  if ((C.sf==C.of)) goto L_12574868;
  /* 12574846 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1257484a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257484d je 0x12574868 */
  if (C.zf) goto L_12574868;
  /* 1257484f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574852 push eax */
  push32((uint32_t)(EAX));
  /* 12574853 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12574856 push ecx */
  push32((uint32_t)(ECX));
  /* 12574857 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257485a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257485d push edx */
  push32((uint32_t)(EDX));
  /* 1257485e call 0x1256dbc0 */
  push32(0x12574863u); f_1256dbc0();
  /* 12574863 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574866 jmp 0x125748a0 */
  goto L_125748a0;
L_12574868:;
  /* 12574868 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257486c jne 0x1257489b */
  if (!C.zf) goto L_1257489b;
  /* 1257486e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12574872 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574874 je 0x1257487f */
  if (C.zf) goto L_1257487f;
  /* 12574876 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1257487a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257487d jne 0x1257489b */
  if (!C.zf) goto L_1257489b;
L_1257487f:;
  /* 1257487f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574882 push edx */
  push32((uint32_t)(EDX));
  /* 12574883 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12574886 push eax */
  push32((uint32_t)(EAX));
  /* 12574887 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257488a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574890 push ecx */
  push32((uint32_t)(ECX));
  /* 12574891 call 0x1256dbc0 */
  push32(0x12574896u); f_1256dbc0();
  /* 12574896 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574899 jmp 0x125748a0 */
  goto L_125748a0;
L_1257489b:;
  /* 1257489b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1257489e jmp 0x125748c9 */
  goto L_125748c9;
L_125748a0:;
  /* 125748a0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125748a4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125748a7 jne 0x125748ab */
  if (!C.zf) goto L_125748ab;
  /* 125748a9 jmp 0x125748c7 */
  goto L_125748c7;
L_125748ab:;
  /* 125748ab movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125748af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125748b1 jne 0x125748b5 */
  if (!C.zf) goto L_125748b5;
  /* 125748b3 jmp 0x125748c7 */
  goto L_125748c7;
L_125748b5:;
  /* 125748b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125748b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125748bb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 125748bf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 125748c2 jmp 0x125747d9 */
  goto L_125747d9;
L_125748c7:;
  /* 125748c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125748c9:;
  /* 125748c9 mov esp, ebp */
  ESP = (EBP);
  /* 125748cb pop ebp */
  EBP = (pop32());
  /* 125748cc ret  */
  ESPCHK(0x12574770u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x125748d0 (101 bytes, 36 insns) */
void f_125748d0(void) {
  FTRACE(0x125748d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125748d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125748d1 mov ebp, esp */
  EBP = (ESP);
  /* 125748d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125748d6 push eax */
  push32((uint32_t)(EAX));
  /* 125748d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125748da push ecx */
  push32((uint32_t)(ECX));
  /* 125748db call 0x1256d350 */
  push32(0x125748e0u); f_1256d350();
  /* 125748e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125748e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125748e6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 125748ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125748ec je 0x12574908 */
  if (C.zf) goto L_12574908;
  /* 125748ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125748f1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125748f4 push ecx */
  push32((uint32_t)(ECX));
  /* 125748f5 push 0x125926c0 */
  push32((uint32_t)(0x125926c0u));
  /* 125748fa push 2 */
  push32((uint32_t)(0x2u));
  /* 125748fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125748ff push edx */
  push32((uint32_t)(EDX));
  /* 12574900 call 0x12574720 */
  push32(0x12574905u); f_12574720();
  /* 12574905 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12574908:;
  /* 12574908 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1257490b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12574912 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12574914 je 0x12574933 */
  if (C.zf) goto L_12574933;
  /* 12574916 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12574919 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257491f push edx */
  push32((uint32_t)(EDX));
  /* 12574920 push 0x125926bc */
  push32((uint32_t)(0x125926bcu));
  /* 12574925 push 2 */
  push32((uint32_t)(0x2u));
  /* 12574927 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257492a push eax */
  push32((uint32_t)(EAX));
  /* 1257492b call 0x12574720 */
  push32(0x12574930u); f_12574720();
  /* 12574930 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12574933:;
  /* 12574933 pop ebp */
  EBP = (pop32());
  /* 12574934 ret  */
  ESPCHK(0x125748d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014940 @ 0x12574940 (130 bytes, 50 insns) */
void f_12574940(void) {
  FTRACE(0x12574940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12574940 push ebp */
  push32((uint32_t)(EBP));
  /* 12574941 mov ebp, esp */
  EBP = (ESP);
  /* 12574943 push ecx */
  push32((uint32_t)(ECX));
  /* 12574944 push ebx */
  push32((uint32_t)(EBX));
  /* 12574945 push esi */
  push32((uint32_t)(ESI));
  /* 12574946 push edi */
  push32((uint32_t)(EDI));
  /* 12574947 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1257494e:;
  /* 1257494e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574952 jne 0x12574972 */
  if (!C.zf) goto L_12574972;
  /* 12574954 push 0x125926d0 */
  push32((uint32_t)(0x125926d0u));
  /* 12574959 push 0 */
  push32((uint32_t)(0x0u));
  /* 1257495b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1257495d push 0x125926c4 */
  push32((uint32_t)(0x125926c4u));
  /* 12574962 push 2 */
  push32((uint32_t)(0x2u));
  /* 12574964 call 0x12569460 */
  push32(0x12574969u); f_12569460();
  /* 12574969 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257496c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257496f jne 0x12574972 */
  if (!C.zf) goto L_12574972;
  /* 12574971 int3  */
  x86_unimpl("int3 @ 0x12574971");
L_12574972:;
  /* 12574972 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12574974 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574976 jne 0x1257494e */
  if (!C.zf) goto L_1257494e;
  /* 12574978 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257497b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1257497e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12574981 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12574983 je 0x12574991 */
  if (C.zf) goto L_12574991;
  /* 12574985 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574988 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1257498f jmp 0x125749b8 */
  goto L_125749b8;
L_12574991:;
  /* 12574991 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574994 push ecx */
  push32((uint32_t)(ECX));
  /* 12574995 call 0x125731b0 */
  push32(0x1257499au); f_125731b0();
  /* 1257499a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257499d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125749a0 push edx */
  push32((uint32_t)(EDX));
  /* 125749a1 call 0x125749d0 */
  push32(0x125749a6u); f_125749d0();
  /* 125749a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125749a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125749ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125749af push eax */
  push32((uint32_t)(EAX));
  /* 125749b0 call 0x12573220 */
  push32(0x125749b5u); f_12573220();
  /* 125749b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125749b8:;
  /* 125749b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125749bb pop edi */
  EDI = (pop32());
  /* 125749bc pop esi */
  ESI = (pop32());
  /* 125749bd pop ebx */
  EBX = (pop32());
  /* 125749be mov esp, ebp */
  ESP = (EBP);
  /* 125749c0 pop ebp */
  EBP = (pop32());
  /* 125749c1 ret  */
  ESPCHK(0x12574940u, _esp0);
  ESP += 4; return;
}

/* FUN_100149d0 @ 0x125749d0 (190 bytes, 67 insns) */
void f_125749d0(void) {
  FTRACE(0x125749d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125749d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125749d1 mov ebp, esp */
  EBP = (ESP);
  /* 125749d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125749d6 push ebx */
  push32((uint32_t)(EBX));
  /* 125749d7 push esi */
  push32((uint32_t)(ESI));
  /* 125749d8 push edi */
  push32((uint32_t)(EDI));
  /* 125749d9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125749e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125749e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125749e6:;
  /* 125749e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125749ea jne 0x12574a0a */
  if (!C.zf) goto L_12574a0a;
  /* 125749ec push 0x12592574 */
  push32((uint32_t)(0x12592574u));
  /* 125749f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125749f3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 125749f5 push 0x125926c4 */
  push32((uint32_t)(0x125926c4u));
  /* 125749fa push 2 */
  push32((uint32_t)(0x2u));
  /* 125749fc call 0x12569460 */
  push32(0x12574a01u); f_12569460();
  /* 12574a01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574a04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574a07 jne 0x12574a0a */
  if (!C.zf) goto L_12574a0a;
  /* 12574a09 int3  */
  x86_unimpl("int3 @ 0x12574a09");
L_12574a0a:;
  /* 12574a0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12574a0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12574a0e jne 0x125749e6 */
  if (!C.zf) goto L_125749e6;
  /* 12574a10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12574a13 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12574a16 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12574a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574a1d je 0x12574a7a */
  if (C.zf) goto L_12574a7a;
  /* 12574a1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12574a22 push ecx */
  push32((uint32_t)(ECX));
  /* 12574a23 call 0x12573cd0 */
  push32(0x12574a28u); f_12573cd0();
  /* 12574a28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574a2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12574a2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12574a31 push edx */
  push32((uint32_t)(EDX));
  /* 12574a32 call 0x12577050 */
  push32(0x12574a37u); f_12577050();
  /* 12574a37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574a3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12574a3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12574a40 push ecx */
  push32((uint32_t)(ECX));
  /* 12574a41 call 0x12576f20 */
  push32(0x12574a46u); f_12576f20();
  /* 12574a46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574a4b jge 0x12574a56 */
  if ((C.sf==C.of)) goto L_12574a56;
  /* 12574a4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12574a54 jmp 0x12574a7a */
  goto L_12574a7a;
L_12574a56:;
  /* 12574a56 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12574a59 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574a5d je 0x12574a7a */
  if (C.zf) goto L_12574a7a;
  /* 12574a5f push 2 */
  push32((uint32_t)(0x2u));
  /* 12574a61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12574a64 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12574a67 push ecx */
  push32((uint32_t)(ECX));
  /* 12574a68 call 0x1256ae30 */
  push32(0x12574a6du); f_1256ae30();
  /* 12574a6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574a70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12574a73 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12574a7a:;
  /* 12574a7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12574a7d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12574a84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574a87 pop edi */
  EDI = (pop32());
  /* 12574a88 pop esi */
  ESI = (pop32());
  /* 12574a89 pop ebx */
  EBX = (pop32());
  /* 12574a8a mov esp, ebp */
  ESP = (EBP);
  /* 12574a8c pop ebp */
  EBP = (pop32());
  /* 12574a8d ret  */
  ESPCHK(0x125749d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a90 @ 0x12574a90 (210 bytes, 63 insns) */
void f_12574a90(void) {
  FTRACE(0x12574a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12574a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12574a91 mov ebp, esp */
  EBP = (ESP);
  /* 12574a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12574a94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574a97 cmp eax, dword ptr [0x125984dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125984dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574a9d jae 0x12574ac1 */
  if (!C.cf) goto L_12574ac1;
  /* 12574a9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574aa2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12574aa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574aa8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12574aab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12574aae mov eax, dword ptr [ecx*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125983a0)));
  /* 12574ab5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12574aba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12574abd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12574abf jne 0x12574ad4 */
  if (!C.zf) goto L_12574ad4;
L_12574ac1:;
  /* 12574ac1 call 0x12572270 */
  push32(0x12574ac6u); f_12572270();
  /* 12574ac6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12574acc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12574acf jmp 0x12574b5e */
  goto L_12574b5e;
L_12574ad4:;
  /* 12574ad4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574ad7 push edx */
  push32((uint32_t)(EDX));
  /* 12574ad8 call 0x12573a90 */
  push32(0x12574addu); f_12573a90();
  /* 12574add add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574ae3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12574ae6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574ae9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12574aec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12574aef mov edx, dword ptr [eax*4 + 0x125983a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125983a0)));
  /* 12574af6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12574afb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12574afe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574b00 je 0x12574b3d */
  if (C.zf) goto L_12574b3d;
  /* 12574b02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574b05 push ecx */
  push32((uint32_t)(ECX));
  /* 12574b06 call 0x12573910 */
  push32(0x12574b0bu); f_12573910();
  /* 12574b0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574b0e push eax */
  push32((uint32_t)(EAX));
  /* 12574b0f call dword ptr [0x12599308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599308))), 0x12574b15u);
  /* 12574b15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574b17 jne 0x12574b24 */
  if (!C.zf) goto L_12574b24;
  /* 12574b19 call dword ptr [0x125993e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993e8))), 0x12574b1fu);
  /* 12574b1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12574b22 jmp 0x12574b2b */
  goto L_12574b2b;
L_12574b24:;
  /* 12574b24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12574b2b:;
  /* 12574b2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574b2f jne 0x12574b33 */
  if (!C.zf) goto L_12574b33;
  /* 12574b31 jmp 0x12574b4f */
  goto L_12574b4f;
L_12574b33:;
  /* 12574b33 call 0x12572280 */
  push32(0x12574b38u); f_12572280();
  /* 12574b38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574b3b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12574b3d:;
  /* 12574b3d call 0x12572270 */
  push32(0x12574b42u); f_12572270();
  /* 12574b42 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12574b48 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12574b4f:;
  /* 12574b4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574b52 push eax */
  push32((uint32_t)(EAX));
  /* 12574b53 call 0x12573b20 */
  push32(0x12574b58u); f_12573b20();
  /* 12574b58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574b5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12574b5e:;
  /* 12574b5e mov esp, ebp */
  ESP = (EBP);
  /* 12574b60 pop ebp */
  EBP = (pop32());
  /* 12574b61 ret  */
  ESPCHK(0x12574a90u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12574b70 (219 bytes, 64 insns) */
void f_12574b70(void) {
  FTRACE(0x12574b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12574b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12574b71 mov ebp, esp */
  EBP = (ESP);
  /* 12574b73 push ecx */
  push32((uint32_t)(ECX));
  /* 12574b74 cmp dword ptr [0x12596bdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596bdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574b7b je 0x12574c11 */
  if (C.zf) goto L_12574c11;
  /* 12574b81 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12574b83 push 0x125926e0 */
  push32((uint32_t)(0x125926e0u));
  /* 12574b88 push 2 */
  push32((uint32_t)(0x2u));
  /* 12574b8a push 0xac */
  push32((uint32_t)(0xacu));
  /* 12574b8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12574b91 call 0x1256a7b0 */
  push32(0x12574b96u); f_1256a7b0();
  /* 12574b96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574b99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12574b9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574ba0 jne 0x12574bac */
  if (!C.zf) goto L_12574bac;
  /* 12574ba2 mov eax, 1 */
  EAX = (0x1u);
  /* 12574ba7 jmp 0x12574c47 */
  goto L_12574c47;
L_12574bac:;
  /* 12574bac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574baf push eax */
  push32((uint32_t)(EAX));
  /* 12574bb0 call 0x12574c50 */
  push32(0x12574bb5u); f_12574c50();
  /* 12574bb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574bb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12574bba je 0x12574bdd */
  if (C.zf) goto L_12574bdd;
  /* 12574bbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574bbf push ecx */
  push32((uint32_t)(ECX));
  /* 12574bc0 call 0x125751e0 */
  push32(0x12574bc5u); f_125751e0();
  /* 12574bc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574bc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12574bca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574bcd push edx */
  push32((uint32_t)(EDX));
  /* 12574bce call 0x1256ae30 */
  push32(0x12574bd3u); f_1256ae30();
  /* 12574bd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574bd6 mov eax, 1 */
  EAX = (0x1u);
  /* 12574bdb jmp 0x12574c47 */
  goto L_12574c47;
L_12574bdd:;
  /* 12574bdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574be0 mov dword ptr [0x12595c98], eax */
  w32((uint32_t)(0x12595c98), (EAX));
  /* 12574be5 mov ecx, dword ptr [0x12596bfc] */
  ECX = (r32((uint32_t)(0x12596bfc)));
  /* 12574beb push ecx */
  push32((uint32_t)(ECX));
  /* 12574bec call 0x125751e0 */
  push32(0x12574bf1u); f_125751e0();
  /* 12574bf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574bf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12574bf6 mov edx, dword ptr [0x12596bfc] */
  EDX = (r32((uint32_t)(0x12596bfc)));
  /* 12574bfc push edx */
  push32((uint32_t)(EDX));
  /* 12574bfd call 0x1256ae30 */
  push32(0x12574c02u); f_1256ae30();
  /* 12574c02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574c08 mov dword ptr [0x12596bfc], eax */
  w32((uint32_t)(0x12596bfc), (EAX));
  /* 12574c0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12574c0f jmp 0x12574c47 */
  goto L_12574c47;
L_12574c11:;
  /* 12574c11 mov dword ptr [0x12595c98], 0x12595ca0 */
  w32((uint32_t)(0x12595c98), (0x12595ca0u));
  /* 12574c1b mov ecx, dword ptr [0x12596bfc] */
  ECX = (r32((uint32_t)(0x12596bfc)));
  /* 12574c21 push ecx */
  push32((uint32_t)(ECX));
  /* 12574c22 call 0x125751e0 */
  push32(0x12574c27u); f_125751e0();
  /* 12574c27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574c2a push 2 */
  push32((uint32_t)(0x2u));
  /* 12574c2c mov edx, dword ptr [0x12596bfc] */
  EDX = (r32((uint32_t)(0x12596bfc)));
  /* 12574c32 push edx */
  push32((uint32_t)(EDX));
  /* 12574c33 call 0x1256ae30 */
  push32(0x12574c38u); f_1256ae30();
  /* 12574c38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574c3b mov dword ptr [0x12596bfc], 0 */
  w32((uint32_t)(0x12596bfc), (0x0u));
  /* 12574c45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12574c47:;
  /* 12574c47 mov esp, ebp */
  ESP = (EBP);
  /* 12574c49 pop ebp */
  EBP = (pop32());
  /* 12574c4a ret  */
  ESPCHK(0x12574b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c50 @ 0x12574c50 (1423 bytes, 533 insns) */
void f_12574c50(void) {
  FTRACE(0x12574c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12574c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12574c51 mov ebp, esp */
  EBP = (ESP);
  /* 12574c53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12574c56 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12574c5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12574c5f mov ax, word ptr [0x12596c36] */
  AX = (r16((uint32_t)(0x12596c36)));
  /* 12574c65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12574c68 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12574c6a mov cx, word ptr [0x12596c38] */
  CX = (r16((uint32_t)(0x12596c38)));
  /* 12574c71 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12574c74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12574c78 jne 0x12574c82 */
  if (!C.zf) goto L_12574c82;
  /* 12574c7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12574c7d jmp 0x125751db */
  goto L_125751db;
L_12574c82:;
  /* 12574c82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574c85 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574c88 push edx */
  push32((uint32_t)(EDX));
  /* 12574c89 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12574c8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574c8e push eax */
  push32((uint32_t)(EAX));
  /* 12574c8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12574c91 call 0x12578560 */
  push32(0x12574c96u); f_12578560();
  /* 12574c96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574c99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574c9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574c9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574ca1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574ca4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574ca7 push edx */
  push32((uint32_t)(EDX));
  /* 12574ca8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12574caa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574cad push eax */
  push32((uint32_t)(EAX));
  /* 12574cae push 1 */
  push32((uint32_t)(0x1u));
  /* 12574cb0 call 0x12578560 */
  push32(0x12574cb5u); f_12578560();
  /* 12574cb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574cb8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574cbb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574cbd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574cc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574cc3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574cc6 push edx */
  push32((uint32_t)(EDX));
  /* 12574cc7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12574cc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574ccc push eax */
  push32((uint32_t)(EAX));
  /* 12574ccd push 1 */
  push32((uint32_t)(0x1u));
  /* 12574ccf call 0x12578560 */
  push32(0x12574cd4u); f_12578560();
  /* 12574cd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574cd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574cda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574cdc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574cdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574ce2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574ce5 push edx */
  push32((uint32_t)(EDX));
  /* 12574ce6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12574ce8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574ceb push eax */
  push32((uint32_t)(EAX));
  /* 12574cec push 1 */
  push32((uint32_t)(0x1u));
  /* 12574cee call 0x12578560 */
  push32(0x12574cf3u); f_12578560();
  /* 12574cf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574cf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574cf9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574cfb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574cfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574d01 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574d04 push edx */
  push32((uint32_t)(EDX));
  /* 12574d05 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12574d07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574d0a push eax */
  push32((uint32_t)(EAX));
  /* 12574d0b push 1 */
  push32((uint32_t)(0x1u));
  /* 12574d0d call 0x12578560 */
  push32(0x12574d12u); f_12578560();
  /* 12574d12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574d15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574d18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574d1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574d1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574d20 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574d23 push edx */
  push32((uint32_t)(EDX));
  /* 12574d24 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12574d26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574d29 push eax */
  push32((uint32_t)(EAX));
  /* 12574d2a push 1 */
  push32((uint32_t)(0x1u));
  /* 12574d2c call 0x12578560 */
  push32(0x12574d31u); f_12578560();
  /* 12574d31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574d34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574d37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574d39 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574d3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574d3f push edx */
  push32((uint32_t)(EDX));
  /* 12574d40 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12574d42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574d45 push eax */
  push32((uint32_t)(EAX));
  /* 12574d46 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574d48 call 0x12578560 */
  push32(0x12574d4du); f_12578560();
  /* 12574d4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574d50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574d53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574d55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574d58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574d5b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574d5e push edx */
  push32((uint32_t)(EDX));
  /* 12574d5f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12574d61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574d64 push eax */
  push32((uint32_t)(EAX));
  /* 12574d65 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574d67 call 0x12578560 */
  push32(0x12574d6cu); f_12578560();
  /* 12574d6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574d6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574d72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574d74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574d77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574d7a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574d7d push edx */
  push32((uint32_t)(EDX));
  /* 12574d7e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12574d80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574d83 push eax */
  push32((uint32_t)(EAX));
  /* 12574d84 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574d86 call 0x12578560 */
  push32(0x12574d8bu); f_12578560();
  /* 12574d8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574d8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574d91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574d93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574d96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574d99 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574d9c push edx */
  push32((uint32_t)(EDX));
  /* 12574d9d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12574d9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574da2 push eax */
  push32((uint32_t)(EAX));
  /* 12574da3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574da5 call 0x12578560 */
  push32(0x12574daau); f_12578560();
  /* 12574daa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574dad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574db0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574db2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574db5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574db8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574dbb push edx */
  push32((uint32_t)(EDX));
  /* 12574dbc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12574dbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574dc1 push eax */
  push32((uint32_t)(EAX));
  /* 12574dc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574dc4 call 0x12578560 */
  push32(0x12574dc9u); f_12578560();
  /* 12574dc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574dcc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574dcf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574dd1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574dd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574dd7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574dda push edx */
  push32((uint32_t)(EDX));
  /* 12574ddb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12574ddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574de0 push eax */
  push32((uint32_t)(EAX));
  /* 12574de1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574de3 call 0x12578560 */
  push32(0x12574de8u); f_12578560();
  /* 12574de8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574deb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574dee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574df0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574df3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574df6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574df9 push edx */
  push32((uint32_t)(EDX));
  /* 12574dfa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12574dfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574dff push eax */
  push32((uint32_t)(EAX));
  /* 12574e00 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574e02 call 0x12578560 */
  push32(0x12574e07u); f_12578560();
  /* 12574e07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574e0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574e0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574e0f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574e12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574e15 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574e18 push edx */
  push32((uint32_t)(EDX));
  /* 12574e19 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12574e1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574e1e push eax */
  push32((uint32_t)(EAX));
  /* 12574e1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12574e21 call 0x12578560 */
  push32(0x12574e26u); f_12578560();
  /* 12574e26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574e29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574e2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574e2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574e31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574e34 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574e37 push edx */
  push32((uint32_t)(EDX));
  /* 12574e38 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12574e3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574e3d push eax */
  push32((uint32_t)(EAX));
  /* 12574e3e push 1 */
  push32((uint32_t)(0x1u));
  /* 12574e40 call 0x12578560 */
  push32(0x12574e45u); f_12578560();
  /* 12574e45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574e48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574e4b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574e4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574e50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574e53 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574e56 push edx */
  push32((uint32_t)(EDX));
  /* 12574e57 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12574e59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574e5c push eax */
  push32((uint32_t)(EAX));
  /* 12574e5d push 1 */
  push32((uint32_t)(0x1u));
  /* 12574e5f call 0x12578560 */
  push32(0x12574e64u); f_12578560();
  /* 12574e64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574e67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574e6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574e6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574e6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574e72 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574e75 push edx */
  push32((uint32_t)(EDX));
  /* 12574e76 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12574e78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574e7b push eax */
  push32((uint32_t)(EAX));
  /* 12574e7c push 1 */
  push32((uint32_t)(0x1u));
  /* 12574e7e call 0x12578560 */
  push32(0x12574e83u); f_12578560();
  /* 12574e83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574e86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574e89 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574e8b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574e8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574e91 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574e94 push edx */
  push32((uint32_t)(EDX));
  /* 12574e95 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12574e97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574e9a push eax */
  push32((uint32_t)(EAX));
  /* 12574e9b push 1 */
  push32((uint32_t)(0x1u));
  /* 12574e9d call 0x12578560 */
  push32(0x12574ea2u); f_12578560();
  /* 12574ea2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574ea5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574ea8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574eaa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574ead mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574eb0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574eb3 push edx */
  push32((uint32_t)(EDX));
  /* 12574eb4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12574eb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574eb9 push eax */
  push32((uint32_t)(EAX));
  /* 12574eba push 1 */
  push32((uint32_t)(0x1u));
  /* 12574ebc call 0x12578560 */
  push32(0x12574ec1u); f_12578560();
  /* 12574ec1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574ec4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574ec7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574ec9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574ecc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574ecf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574ed2 push edx */
  push32((uint32_t)(EDX));
  /* 12574ed3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12574ed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574ed8 push eax */
  push32((uint32_t)(EAX));
  /* 12574ed9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574edb call 0x12578560 */
  push32(0x12574ee0u); f_12578560();
  /* 12574ee0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574ee3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574ee6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574ee8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574eeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574eee add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574ef1 push edx */
  push32((uint32_t)(EDX));
  /* 12574ef2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12574ef4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574ef7 push eax */
  push32((uint32_t)(EAX));
  /* 12574ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574efa call 0x12578560 */
  push32(0x12574effu); f_12578560();
  /* 12574eff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574f02 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574f05 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574f07 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574f0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574f0d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574f10 push edx */
  push32((uint32_t)(EDX));
  /* 12574f11 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12574f13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574f16 push eax */
  push32((uint32_t)(EAX));
  /* 12574f17 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574f19 call 0x12578560 */
  push32(0x12574f1eu); f_12578560();
  /* 12574f1e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574f21 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574f24 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574f26 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574f29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574f2c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574f2f push edx */
  push32((uint32_t)(EDX));
  /* 12574f30 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12574f32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574f35 push eax */
  push32((uint32_t)(EAX));
  /* 12574f36 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574f38 call 0x12578560 */
  push32(0x12574f3du); f_12578560();
  /* 12574f3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574f40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574f43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574f45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574f48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574f4b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574f4e push edx */
  push32((uint32_t)(EDX));
  /* 12574f4f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12574f51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574f54 push eax */
  push32((uint32_t)(EAX));
  /* 12574f55 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574f57 call 0x12578560 */
  push32(0x12574f5cu); f_12578560();
  /* 12574f5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574f5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574f62 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574f64 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574f67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574f6a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574f6d push edx */
  push32((uint32_t)(EDX));
  /* 12574f6e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12574f70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574f73 push eax */
  push32((uint32_t)(EAX));
  /* 12574f74 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574f76 call 0x12578560 */
  push32(0x12574f7bu); f_12578560();
  /* 12574f7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574f7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574f81 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574f83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574f86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574f89 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574f8c push edx */
  push32((uint32_t)(EDX));
  /* 12574f8d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12574f8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574f92 push eax */
  push32((uint32_t)(EAX));
  /* 12574f93 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574f95 call 0x12578560 */
  push32(0x12574f9au); f_12578560();
  /* 12574f9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574f9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574fa0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574fa2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574fa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574fa8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574fab push edx */
  push32((uint32_t)(EDX));
  /* 12574fac push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12574fae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574fb1 push eax */
  push32((uint32_t)(EAX));
  /* 12574fb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574fb4 call 0x12578560 */
  push32(0x12574fb9u); f_12578560();
  /* 12574fb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574fbc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574fbf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574fc1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574fc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574fc7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574fca push edx */
  push32((uint32_t)(EDX));
  /* 12574fcb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12574fcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574fd0 push eax */
  push32((uint32_t)(EAX));
  /* 12574fd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574fd3 call 0x12578560 */
  push32(0x12574fd8u); f_12578560();
  /* 12574fd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574fdb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574fde or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574fe0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12574fe3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12574fe6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12574fe9 push edx */
  push32((uint32_t)(EDX));
  /* 12574fea push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12574fec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12574fef push eax */
  push32((uint32_t)(EAX));
  /* 12574ff0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12574ff2 call 0x12578560 */
  push32(0x12574ff7u); f_12578560();
  /* 12574ff7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12574ffa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12574ffd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12574fff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12575002 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575005 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575008 push edx */
  push32((uint32_t)(EDX));
  /* 12575009 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1257500b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257500e push eax */
  push32((uint32_t)(EAX));
  /* 1257500f push 1 */
  push32((uint32_t)(0x1u));
  /* 12575011 call 0x12578560 */
  push32(0x12575016u); f_12578560();
  /* 12575016 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575019 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257501c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1257501e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12575021 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575024 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575027 push edx */
  push32((uint32_t)(EDX));
  /* 12575028 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1257502a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257502d push eax */
  push32((uint32_t)(EAX));
  /* 1257502e push 1 */
  push32((uint32_t)(0x1u));
  /* 12575030 call 0x12578560 */
  push32(0x12575035u); f_12578560();
  /* 12575035 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575038 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257503b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1257503d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12575040 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575043 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575046 push edx */
  push32((uint32_t)(EDX));
  /* 12575047 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12575049 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257504c push eax */
  push32((uint32_t)(EAX));
  /* 1257504d push 1 */
  push32((uint32_t)(0x1u));
  /* 1257504f call 0x12578560 */
  push32(0x12575054u); f_12578560();
  /* 12575054 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575057 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257505a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1257505c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1257505f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575062 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575068 push edx */
  push32((uint32_t)(EDX));
  /* 12575069 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1257506b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257506e push eax */
  push32((uint32_t)(EAX));
  /* 1257506f push 1 */
  push32((uint32_t)(0x1u));
  /* 12575071 call 0x12578560 */
  push32(0x12575076u); f_12578560();
  /* 12575076 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575079 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257507c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1257507e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12575081 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575084 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257508a push edx */
  push32((uint32_t)(EDX));
  /* 1257508b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1257508d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575090 push eax */
  push32((uint32_t)(EAX));
  /* 12575091 push 1 */
  push32((uint32_t)(0x1u));
  /* 12575093 call 0x12578560 */
  push32(0x12575098u); f_12578560();
  /* 12575098 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257509b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257509e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125750a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125750a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125750a6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125750ac push edx */
  push32((uint32_t)(EDX));
  /* 125750ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125750af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125750b2 push eax */
  push32((uint32_t)(EAX));
  /* 125750b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125750b5 call 0x12578560 */
  push32(0x125750bau); f_12578560();
  /* 125750ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125750bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125750c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125750c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125750c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125750c8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125750ce push edx */
  push32((uint32_t)(EDX));
  /* 125750cf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 125750d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125750d4 push eax */
  push32((uint32_t)(EAX));
  /* 125750d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 125750d7 call 0x12578560 */
  push32(0x125750dcu); f_12578560();
  /* 125750dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125750df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125750e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125750e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125750e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125750ea add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125750f0 push edx */
  push32((uint32_t)(EDX));
  /* 125750f1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 125750f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125750f6 push eax */
  push32((uint32_t)(EAX));
  /* 125750f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125750f9 call 0x12578560 */
  push32(0x125750feu); f_12578560();
  /* 125750fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575101 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12575104 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575106 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12575109 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257510c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575112 push edx */
  push32((uint32_t)(EDX));
  /* 12575113 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12575115 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575118 push eax */
  push32((uint32_t)(EAX));
  /* 12575119 push 1 */
  push32((uint32_t)(0x1u));
  /* 1257511b call 0x12578560 */
  push32(0x12575120u); f_12578560();
  /* 12575120 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575123 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12575126 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575128 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1257512b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257512e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575134 push edx */
  push32((uint32_t)(EDX));
  /* 12575135 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12575137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257513a push eax */
  push32((uint32_t)(EAX));
  /* 1257513b push 1 */
  push32((uint32_t)(0x1u));
  /* 1257513d call 0x12578560 */
  push32(0x12575142u); f_12578560();
  /* 12575142 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575145 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12575148 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1257514a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1257514d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575150 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575156 push edx */
  push32((uint32_t)(EDX));
  /* 12575157 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12575159 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257515c push eax */
  push32((uint32_t)(EAX));
  /* 1257515d push 1 */
  push32((uint32_t)(0x1u));
  /* 1257515f call 0x12578560 */
  push32(0x12575164u); f_12578560();
  /* 12575164 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575167 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257516a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1257516c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1257516f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575172 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575178 push edx */
  push32((uint32_t)(EDX));
  /* 12575179 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1257517b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257517e push eax */
  push32((uint32_t)(EAX));
  /* 1257517f push 1 */
  push32((uint32_t)(0x1u));
  /* 12575181 call 0x12578560 */
  push32(0x12575186u); f_12578560();
  /* 12575186 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575189 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1257518c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1257518e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12575191 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575194 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257519a push edx */
  push32((uint32_t)(EDX));
  /* 1257519b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1257519d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125751a0 push eax */
  push32((uint32_t)(EAX));
  /* 125751a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125751a3 call 0x12578560 */
  push32(0x125751a8u); f_12578560();
  /* 125751a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125751ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125751ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125751b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125751b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125751b6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125751bc push edx */
  push32((uint32_t)(EDX));
  /* 125751bd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 125751c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125751c5 push eax */
  push32((uint32_t)(EAX));
  /* 125751c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125751c8 call 0x12578560 */
  push32(0x125751cdu); f_12578560();
  /* 125751cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125751d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125751d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125751d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125751d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_125751db:;
  /* 125751db mov esp, ebp */
  ESP = (EBP);
  /* 125751dd pop ebp */
  EBP = (pop32());
  /* 125751de ret  */
  ESPCHK(0x12574c50u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x125751e0 (779 bytes, 265 insns) */
void f_125751e0(void) {
  FTRACE(0x125751e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125751e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125751e1 mov ebp, esp */
  EBP = (ESP);
  /* 125751e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125751e7 jne 0x125751ee */
  if (!C.zf) goto L_125751ee;
  /* 125751e9 jmp 0x125754e9 */
  goto L_125754e9;
L_125751ee:;
  /* 125751ee push 2 */
  push32((uint32_t)(0x2u));
  /* 125751f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125751f3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125751f6 push ecx */
  push32((uint32_t)(ECX));
  /* 125751f7 call 0x1256ae30 */
  push32(0x125751fcu); f_1256ae30();
  /* 125751fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125751ff push 2 */
  push32((uint32_t)(0x2u));
  /* 12575201 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575204 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12575207 push eax */
  push32((uint32_t)(EAX));
  /* 12575208 call 0x1256ae30 */
  push32(0x1257520du); f_1256ae30();
  /* 1257520d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575210 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575212 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575215 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12575218 push edx */
  push32((uint32_t)(EDX));
  /* 12575219 call 0x1256ae30 */
  push32(0x1257521eu); f_1256ae30();
  /* 1257521e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575221 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575226 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12575229 push ecx */
  push32((uint32_t)(ECX));
  /* 1257522a call 0x1256ae30 */
  push32(0x1257522fu); f_1256ae30();
  /* 1257522f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575232 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575234 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575237 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1257523a push eax */
  push32((uint32_t)(EAX));
  /* 1257523b call 0x1256ae30 */
  push32(0x12575240u); f_1256ae30();
  /* 12575240 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575243 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575245 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575248 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1257524b push edx */
  push32((uint32_t)(EDX));
  /* 1257524c call 0x1256ae30 */
  push32(0x12575251u); f_1256ae30();
  /* 12575251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575254 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575259 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1257525b push ecx */
  push32((uint32_t)(ECX));
  /* 1257525c call 0x1256ae30 */
  push32(0x12575261u); f_1256ae30();
  /* 12575261 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575264 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575266 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575269 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1257526c push eax */
  push32((uint32_t)(EAX));
  /* 1257526d call 0x1256ae30 */
  push32(0x12575272u); f_1256ae30();
  /* 12575272 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575275 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575277 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257527a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1257527d push edx */
  push32((uint32_t)(EDX));
  /* 1257527e call 0x1256ae30 */
  push32(0x12575283u); f_1256ae30();
  /* 12575283 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575286 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257528b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1257528e push ecx */
  push32((uint32_t)(ECX));
  /* 1257528f call 0x1256ae30 */
  push32(0x12575294u); f_1256ae30();
  /* 12575294 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575297 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575299 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257529c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1257529f push eax */
  push32((uint32_t)(EAX));
  /* 125752a0 call 0x1256ae30 */
  push32(0x125752a5u); f_1256ae30();
  /* 125752a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125752a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 125752aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125752ad mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 125752b0 push edx */
  push32((uint32_t)(EDX));
  /* 125752b1 call 0x1256ae30 */
  push32(0x125752b6u); f_1256ae30();
  /* 125752b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125752b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125752bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125752be mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 125752c1 push ecx */
  push32((uint32_t)(ECX));
  /* 125752c2 call 0x1256ae30 */
  push32(0x125752c7u); f_1256ae30();
  /* 125752c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125752ca push 2 */
  push32((uint32_t)(0x2u));
  /* 125752cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125752cf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125752d2 push eax */
  push32((uint32_t)(EAX));
  /* 125752d3 call 0x1256ae30 */
  push32(0x125752d8u); f_1256ae30();
  /* 125752d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125752db push 2 */
  push32((uint32_t)(0x2u));
  /* 125752dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125752e0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 125752e3 push edx */
  push32((uint32_t)(EDX));
  /* 125752e4 call 0x1256ae30 */
  push32(0x125752e9u); f_1256ae30();
  /* 125752e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125752ec push 2 */
  push32((uint32_t)(0x2u));
  /* 125752ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125752f1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 125752f4 push ecx */
  push32((uint32_t)(ECX));
  /* 125752f5 call 0x1256ae30 */
  push32(0x125752fau); f_1256ae30();
  /* 125752fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125752fd push 2 */
  push32((uint32_t)(0x2u));
  /* 125752ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575302 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12575305 push eax */
  push32((uint32_t)(EAX));
  /* 12575306 call 0x1256ae30 */
  push32(0x1257530bu); f_1256ae30();
  /* 1257530b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257530e push 2 */
  push32((uint32_t)(0x2u));
  /* 12575310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575313 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12575316 push edx */
  push32((uint32_t)(EDX));
  /* 12575317 call 0x1256ae30 */
  push32(0x1257531cu); f_1256ae30();
  /* 1257531c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257531f push 2 */
  push32((uint32_t)(0x2u));
  /* 12575321 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575324 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12575327 push ecx */
  push32((uint32_t)(ECX));
  /* 12575328 call 0x1256ae30 */
  push32(0x1257532du); f_1256ae30();
  /* 1257532d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575330 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575332 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575335 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12575338 push eax */
  push32((uint32_t)(EAX));
  /* 12575339 call 0x1256ae30 */
  push32(0x1257533eu); f_1256ae30();
  /* 1257533e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575341 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575343 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575346 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12575349 push edx */
  push32((uint32_t)(EDX));
  /* 1257534a call 0x1256ae30 */
  push32(0x1257534fu); f_1256ae30();
  /* 1257534f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575352 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575357 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1257535a push ecx */
  push32((uint32_t)(ECX));
  /* 1257535b call 0x1256ae30 */
  push32(0x12575360u); f_1256ae30();
  /* 12575360 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575363 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575365 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575368 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1257536b push eax */
  push32((uint32_t)(EAX));
  /* 1257536c call 0x1256ae30 */
  push32(0x12575371u); f_1256ae30();
  /* 12575371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575374 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575376 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575379 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1257537c push edx */
  push32((uint32_t)(EDX));
  /* 1257537d call 0x1256ae30 */
  push32(0x12575382u); f_1256ae30();
  /* 12575382 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575385 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575387 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257538a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1257538d push ecx */
  push32((uint32_t)(ECX));
  /* 1257538e call 0x1256ae30 */
  push32(0x12575393u); f_1256ae30();
  /* 12575393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575396 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575398 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257539b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1257539e push eax */
  push32((uint32_t)(EAX));
  /* 1257539f call 0x1256ae30 */
  push32(0x125753a4u); f_1256ae30();
  /* 125753a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125753a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 125753a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125753ac mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 125753af push edx */
  push32((uint32_t)(EDX));
  /* 125753b0 call 0x1256ae30 */
  push32(0x125753b5u); f_1256ae30();
  /* 125753b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125753b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 125753ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125753bd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 125753c0 push ecx */
  push32((uint32_t)(ECX));
  /* 125753c1 call 0x1256ae30 */
  push32(0x125753c6u); f_1256ae30();
  /* 125753c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125753c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125753cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125753ce mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 125753d1 push eax */
  push32((uint32_t)(EAX));
  /* 125753d2 call 0x1256ae30 */
  push32(0x125753d7u); f_1256ae30();
  /* 125753d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125753da push 2 */
  push32((uint32_t)(0x2u));
  /* 125753dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125753df mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 125753e2 push edx */
  push32((uint32_t)(EDX));
  /* 125753e3 call 0x1256ae30 */
  push32(0x125753e8u); f_1256ae30();
  /* 125753e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125753eb push 2 */
  push32((uint32_t)(0x2u));
  /* 125753ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125753f0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 125753f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125753f4 call 0x1256ae30 */
  push32(0x125753f9u); f_1256ae30();
  /* 125753f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125753fc push 2 */
  push32((uint32_t)(0x2u));
  /* 125753fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575401 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12575404 push eax */
  push32((uint32_t)(EAX));
  /* 12575405 call 0x1256ae30 */
  push32(0x1257540au); f_1256ae30();
  /* 1257540a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257540d push 2 */
  push32((uint32_t)(0x2u));
  /* 1257540f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575412 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12575418 push edx */
  push32((uint32_t)(EDX));
  /* 12575419 call 0x1256ae30 */
  push32(0x1257541eu); f_1256ae30();
  /* 1257541e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575421 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575423 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575426 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1257542c push ecx */
  push32((uint32_t)(ECX));
  /* 1257542d call 0x1256ae30 */
  push32(0x12575432u); f_1256ae30();
  /* 12575432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575435 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575437 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257543a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12575440 push eax */
  push32((uint32_t)(EAX));
  /* 12575441 call 0x1256ae30 */
  push32(0x12575446u); f_1256ae30();
  /* 12575446 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575449 push 2 */
  push32((uint32_t)(0x2u));
  /* 1257544b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257544e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12575454 push edx */
  push32((uint32_t)(EDX));
  /* 12575455 call 0x1256ae30 */
  push32(0x1257545au); f_1256ae30();
  /* 1257545a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257545d push 2 */
  push32((uint32_t)(0x2u));
  /* 1257545f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575462 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12575468 push ecx */
  push32((uint32_t)(ECX));
  /* 12575469 call 0x1256ae30 */
  push32(0x1257546eu); f_1256ae30();
  /* 1257546e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575471 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575473 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575476 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1257547c push eax */
  push32((uint32_t)(EAX));
  /* 1257547d call 0x1256ae30 */
  push32(0x12575482u); f_1256ae30();
  /* 12575482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575485 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575487 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257548a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12575490 push edx */
  push32((uint32_t)(EDX));
  /* 12575491 call 0x1256ae30 */
  push32(0x12575496u); f_1256ae30();
  /* 12575496 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575499 push 2 */
  push32((uint32_t)(0x2u));
  /* 1257549b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257549e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 125754a4 push ecx */
  push32((uint32_t)(ECX));
  /* 125754a5 call 0x1256ae30 */
  push32(0x125754aau); f_1256ae30();
  /* 125754aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125754ad push 2 */
  push32((uint32_t)(0x2u));
  /* 125754af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125754b2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 125754b8 push eax */
  push32((uint32_t)(EAX));
  /* 125754b9 call 0x1256ae30 */
  push32(0x125754beu); f_1256ae30();
  /* 125754be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125754c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 125754c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125754c6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 125754cc push edx */
  push32((uint32_t)(EDX));
  /* 125754cd call 0x1256ae30 */
  push32(0x125754d2u); f_1256ae30();
  /* 125754d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125754d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125754d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125754da mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 125754e0 push ecx */
  push32((uint32_t)(ECX));
  /* 125754e1 call 0x1256ae30 */
  push32(0x125754e6u); f_1256ae30();
  /* 125754e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125754e9:;
  /* 125754e9 pop ebp */
  EBP = (pop32());
  /* 125754ea ret  */
  ESPCHK(0x125751e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100154f0 @ 0x125754f0 (678 bytes, 180 insns) */
void f_125754f0(void) {
  FTRACE(0x125754f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125754f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125754f1 mov ebp, esp */
  EBP = (ESP);
  /* 125754f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125754f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125754fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125754ff mov ax, word ptr [0x12596c32] */
  AX = (r16((uint32_t)(0x12596c32)));
  /* 12575505 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12575508 cmp dword ptr [0x12596bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257550f je 0x1257566a */
  if (C.zf) goto L_1257566a;
  /* 12575515 push 0x12596c00 */
  push32((uint32_t)(0x12596c00u));
  /* 1257551a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1257551c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257551f push ecx */
  push32((uint32_t)(ECX));
  /* 12575520 push 1 */
  push32((uint32_t)(0x1u));
  /* 12575522 call 0x12578560 */
  push32(0x12575527u); f_12578560();
  /* 12575527 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257552a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257552d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1257552f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12575532 push 0x12596c04 */
  push32((uint32_t)(0x12596c04u));
  /* 12575537 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12575539 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257553c push eax */
  push32((uint32_t)(EAX));
  /* 1257553d push 1 */
  push32((uint32_t)(0x1u));
  /* 1257553f call 0x12578560 */
  push32(0x12575544u); f_12578560();
  /* 12575544 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575547 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1257554a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1257554c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1257554f push 0x12596c08 */
  push32((uint32_t)(0x12596c08u));
  /* 12575554 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12575556 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575559 push edx */
  push32((uint32_t)(EDX));
  /* 1257555a push 1 */
  push32((uint32_t)(0x1u));
  /* 1257555c call 0x12578560 */
  push32(0x12575561u); f_12578560();
  /* 12575561 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575564 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12575567 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575569 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1257556c mov edx, dword ptr [0x12596c08] */
  EDX = (r32((uint32_t)(0x12596c08)));
  /* 12575572 push edx */
  push32((uint32_t)(EDX));
  /* 12575573 call 0x125757a0 */
  push32(0x12575578u); f_125757a0();
  /* 12575578 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257557b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257557f je 0x125755d9 */
  if (C.zf) goto L_125755d9;
  /* 12575581 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575583 mov eax, dword ptr [0x12596c00] */
  EAX = (r32((uint32_t)(0x12596c00)));
  /* 12575588 push eax */
  push32((uint32_t)(EAX));
  /* 12575589 call 0x1256ae30 */
  push32(0x1257558eu); f_1256ae30();
  /* 1257558e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575591 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575593 mov ecx, dword ptr [0x12596c04] */
  ECX = (r32((uint32_t)(0x12596c04)));
  /* 12575599 push ecx */
  push32((uint32_t)(ECX));
  /* 1257559a call 0x1256ae30 */
  push32(0x1257559fu); f_1256ae30();
  /* 1257559f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125755a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 125755a4 mov edx, dword ptr [0x12596c08] */
  EDX = (r32((uint32_t)(0x12596c08)));
  /* 125755aa push edx */
  push32((uint32_t)(EDX));
  /* 125755ab call 0x1256ae30 */
  push32(0x125755b0u); f_1256ae30();
  /* 125755b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125755b3 mov dword ptr [0x12596c00], 0 */
  w32((uint32_t)(0x12596c00), (0x0u));
  /* 125755bd mov dword ptr [0x12596c04], 0 */
  w32((uint32_t)(0x12596c04), (0x0u));
  /* 125755c7 mov dword ptr [0x12596c08], 0 */
  w32((uint32_t)(0x12596c08), (0x0u));
  /* 125755d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125755d4 jmp 0x12575792 */
  goto L_12575792;
L_125755d9:;
  /* 125755d9 mov eax, dword ptr [0x12595d88] */
  EAX = (r32((uint32_t)(0x12595d88)));
  /* 125755de cmp dword ptr [eax], 0x12595d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12595d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125755e4 je 0x12575620 */
  if (C.zf) goto L_12575620;
  /* 125755e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125755e8 mov ecx, dword ptr [0x12595d88] */
  ECX = (r32((uint32_t)(0x12595d88)));
  /* 125755ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125755f0 push edx */
  push32((uint32_t)(EDX));
  /* 125755f1 call 0x1256ae30 */
  push32(0x125755f6u); f_1256ae30();
  /* 125755f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125755f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125755fb mov eax, dword ptr [0x12595d88] */
  EAX = (r32((uint32_t)(0x12595d88)));
  /* 12575600 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12575603 push ecx */
  push32((uint32_t)(ECX));
  /* 12575604 call 0x1256ae30 */
  push32(0x12575609u); f_1256ae30();
  /* 12575609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257560c push 2 */
  push32((uint32_t)(0x2u));
  /* 1257560e mov edx, dword ptr [0x12595d88] */
  EDX = (r32((uint32_t)(0x12595d88)));
  /* 12575614 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12575617 push eax */
  push32((uint32_t)(EAX));
  /* 12575618 call 0x1256ae30 */
  push32(0x1257561du); f_1256ae30();
  /* 1257561d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12575620:;
  /* 12575620 mov ecx, dword ptr [0x12595d88] */
  ECX = (r32((uint32_t)(0x12595d88)));
  /* 12575626 mov edx, dword ptr [0x12596c00] */
  EDX = (r32((uint32_t)(0x12596c00)));
  /* 1257562c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1257562e mov eax, dword ptr [0x12595d88] */
  EAX = (r32((uint32_t)(0x12595d88)));
  /* 12575633 mov ecx, dword ptr [0x12596c04] */
  ECX = (r32((uint32_t)(0x12596c04)));
  /* 12575639 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1257563c mov edx, dword ptr [0x12595d88] */
  EDX = (r32((uint32_t)(0x12595d88)));
  /* 12575642 mov eax, dword ptr [0x12596c08] */
  EAX = (r32((uint32_t)(0x12596c08)));
  /* 12575647 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1257564a mov ecx, dword ptr [0x12595d88] */
  ECX = (r32((uint32_t)(0x12595d88)));
  /* 12575650 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12575652 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12575654 mov byte ptr [0x12594ea8], al */
  w8((uint32_t)(0x12594ea8), (AL));
  /* 12575659 mov dword ptr [0x12594eac], 1 */
  w32((uint32_t)(0x12594eac), (0x1u));
  /* 12575663 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12575665 jmp 0x12575792 */
  goto L_12575792;
L_1257566a:;
  /* 1257566a push 2 */
  push32((uint32_t)(0x2u));
  /* 1257566c mov ecx, dword ptr [0x12596c00] */
  ECX = (r32((uint32_t)(0x12596c00)));
  /* 12575672 push ecx */
  push32((uint32_t)(ECX));
  /* 12575673 call 0x1256ae30 */
  push32(0x12575678u); f_1256ae30();
  /* 12575678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257567b push 2 */
  push32((uint32_t)(0x2u));
  /* 1257567d mov edx, dword ptr [0x12596c04] */
  EDX = (r32((uint32_t)(0x12596c04)));
  /* 12575683 push edx */
  push32((uint32_t)(EDX));
  /* 12575684 call 0x1256ae30 */
  push32(0x12575689u); f_1256ae30();
  /* 12575689 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257568c push 2 */
  push32((uint32_t)(0x2u));
  /* 1257568e mov eax, dword ptr [0x12596c08] */
  EAX = (r32((uint32_t)(0x12596c08)));
  /* 12575693 push eax */
  push32((uint32_t)(EAX));
  /* 12575694 call 0x1256ae30 */
  push32(0x12575699u); f_1256ae30();
  /* 12575699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257569c mov dword ptr [0x12596c00], 0 */
  w32((uint32_t)(0x12596c00), (0x0u));
  /* 125756a6 mov dword ptr [0x12596c04], 0 */
  w32((uint32_t)(0x12596c04), (0x0u));
  /* 125756b0 mov dword ptr [0x12596c08], 0 */
  w32((uint32_t)(0x12596c08), (0x0u));
  /* 125756ba push 0x88 */
  push32((uint32_t)(0x88u));
  /* 125756bf push 0x125926ec */
  push32((uint32_t)(0x125926ecu));
  /* 125756c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 125756c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125756c8 call 0x1256a3a0 */
  push32(0x125756cdu); f_1256a3a0();
  /* 125756cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125756d0 mov ecx, dword ptr [0x12595d88] */
  ECX = (r32((uint32_t)(0x12595d88)));
  /* 125756d6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125756d8 mov edx, dword ptr [0x12595d88] */
  EDX = (r32((uint32_t)(0x12595d88)));
  /* 125756de cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125756e1 jne 0x125756eb */
  if (!C.zf) goto L_125756eb;
  /* 125756e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125756e6 jmp 0x12575792 */
  goto L_12575792;
L_125756eb:;
  /* 125756eb push 0x125926bc */
  push32((uint32_t)(0x125926bcu));
  /* 125756f0 mov eax, dword ptr [0x12595d88] */
  EAX = (r32((uint32_t)(0x12595d88)));
  /* 125756f5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125756f7 push ecx */
  push32((uint32_t)(ECX));
  /* 125756f8 call 0x1256d350 */
  push32(0x125756fdu); f_1256d350();
  /* 125756fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575700 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12575705 push 0x125926ec */
  push32((uint32_t)(0x125926ecu));
  /* 1257570a push 2 */
  push32((uint32_t)(0x2u));
  /* 1257570c push 2 */
  push32((uint32_t)(0x2u));
  /* 1257570e call 0x1256a3a0 */
  push32(0x12575713u); f_1256a3a0();
  /* 12575713 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575716 mov edx, dword ptr [0x12595d88] */
  EDX = (r32((uint32_t)(0x12595d88)));
  /* 1257571c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1257571f mov eax, dword ptr [0x12595d88] */
  EAX = (r32((uint32_t)(0x12595d88)));
  /* 12575724 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575728 jne 0x1257572f */
  if (!C.zf) goto L_1257572f;
  /* 1257572a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1257572d jmp 0x12575792 */
  goto L_12575792;
L_1257572f:;
  /* 1257572f mov ecx, dword ptr [0x12595d88] */
  ECX = (r32((uint32_t)(0x12595d88)));
  /* 12575735 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12575738 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1257573b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12575740 push 0x125926ec */
  push32((uint32_t)(0x125926ecu));
  /* 12575745 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575747 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575749 call 0x1256a3a0 */
  push32(0x1257574eu); f_1256a3a0();
  /* 1257574e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575751 mov ecx, dword ptr [0x12595d88] */
  ECX = (r32((uint32_t)(0x12595d88)));
  /* 12575757 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1257575a mov edx, dword ptr [0x12595d88] */
  EDX = (r32((uint32_t)(0x12595d88)));
  /* 12575760 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575764 jne 0x1257576b */
  if (!C.zf) goto L_1257576b;
  /* 12575766 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12575769 jmp 0x12575792 */
  goto L_12575792;
L_1257576b:;
  /* 1257576b mov eax, dword ptr [0x12595d88] */
  EAX = (r32((uint32_t)(0x12595d88)));
  /* 12575770 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12575773 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12575776 mov edx, dword ptr [0x12595d88] */
  EDX = (r32((uint32_t)(0x12595d88)));
  /* 1257577c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1257577e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12575780 mov byte ptr [0x12594ea8], cl */
  w8((uint32_t)(0x12594ea8), (CL));
  /* 12575786 mov dword ptr [0x12594eac], 1 */
  w32((uint32_t)(0x12594eac), (0x1u));
  /* 12575790 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12575792:;
  /* 12575792 mov esp, ebp */
  ESP = (EBP);
  /* 12575794 pop ebp */
  EBP = (pop32());
  /* 12575795 ret  */
  ESPCHK(0x125754f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x125757a0 (125 bytes, 49 insns) */
void f_125757a0(void) {
  FTRACE(0x125757a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125757a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125757a1 mov ebp, esp */
  EBP = (ESP);
  /* 125757a3 push ecx */
  push32((uint32_t)(ECX));
L_125757a4:;
  /* 125757a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125757a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125757aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125757ac je 0x12575819 */
  if (C.zf) goto L_12575819;
  /* 125757ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125757b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125757b4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125757b7 jl 0x125757dd */
  if ((C.sf!=C.of)) goto L_125757dd;
  /* 125757b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125757bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125757bf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125757c2 jg 0x125757dd */
  if ((!C.zf&&C.sf==C.of)) goto L_125757dd;
  /* 125757c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125757c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125757ca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125757cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125757d0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 125757d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125757d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125757d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125757db jmp 0x12575817 */
  goto L_12575817;
L_125757dd:;
  /* 125757dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125757e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125757e3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125757e6 jne 0x1257580e */
  if (!C.zf) goto L_1257580e;
  /* 125757e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125757eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125757ee:;
  /* 125757ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125757f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125757f4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125757f7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125757f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125757fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125757ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12575802 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575805 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12575808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257580a jne 0x125757ee */
  if (!C.zf) goto L_125757ee;
  /* 1257580c jmp 0x12575817 */
  goto L_12575817;
L_1257580e:;
  /* 1257580e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575811 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575814 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12575817:;
  /* 12575817 jmp 0x125757a4 */
  goto L_125757a4;
L_12575819:;
  /* 12575819 mov esp, ebp */
  ESP = (EBP);
  /* 1257581b pop ebp */
  EBP = (pop32());
  /* 1257581c ret  */
  ESPCHK(0x125757a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015820 @ 0x12575820 (304 bytes, 85 insns) */
void f_12575820(void) {
  FTRACE(0x12575820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12575820 push ebp */
  push32((uint32_t)(EBP));
  /* 12575821 mov ebp, esp */
  EBP = (ESP);
  /* 12575823 push ecx */
  push32((uint32_t)(ECX));
  /* 12575824 cmp dword ptr [0x12596bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257582b je 0x125758ec */
  if (C.zf) goto L_125758ec;
  /* 12575831 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12575833 push 0x125926f8 */
  push32((uint32_t)(0x125926f8u));
  /* 12575838 push 2 */
  push32((uint32_t)(0x2u));
  /* 1257583a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1257583c push 1 */
  push32((uint32_t)(0x1u));
  /* 1257583e call 0x1256a7b0 */
  push32(0x12575843u); f_1256a7b0();
  /* 12575843 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575846 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12575849 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257584d jne 0x12575859 */
  if (!C.zf) goto L_12575859;
  /* 1257584f mov eax, 1 */
  EAX = (0x1u);
  /* 12575854 jmp 0x1257594c */
  goto L_1257594c;
L_12575859:;
  /* 12575859 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257585c push eax */
  push32((uint32_t)(EAX));
  /* 1257585d call 0x12575950 */
  push32(0x12575862u); f_12575950();
  /* 12575862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12575867 je 0x1257588d */
  if (C.zf) goto L_1257588d;
  /* 12575869 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257586c push ecx */
  push32((uint32_t)(ECX));
  /* 1257586d call 0x12575be0 */
  push32(0x12575872u); f_12575be0();
  /* 12575872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575875 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575877 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257587a push edx */
  push32((uint32_t)(EDX));
  /* 1257587b call 0x1256ae30 */
  push32(0x12575880u); f_1256ae30();
  /* 12575880 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575883 mov eax, 1 */
  EAX = (0x1u);
  /* 12575888 jmp 0x1257594c */
  goto L_1257594c;
L_1257588d:;
  /* 1257588d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575890 mov ecx, dword ptr [0x12595d88] */
  ECX = (r32((uint32_t)(0x12595d88)));
  /* 12575896 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12575898 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1257589a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257589d mov ecx, dword ptr [0x12595d88] */
  ECX = (r32((uint32_t)(0x12595d88)));
  /* 125758a3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125758a6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125758a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125758ac mov ecx, dword ptr [0x12595d88] */
  ECX = (r32((uint32_t)(0x12595d88)));
  /* 125758b2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125758b5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 125758b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125758bb mov dword ptr [0x12595d88], eax */
  w32((uint32_t)(0x12595d88), (EAX));
  /* 125758c0 mov ecx, dword ptr [0x12596c0c] */
  ECX = (r32((uint32_t)(0x12596c0c)));
  /* 125758c6 push ecx */
  push32((uint32_t)(ECX));
  /* 125758c7 call 0x12575be0 */
  push32(0x125758ccu); f_12575be0();
  /* 125758cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125758cf push 2 */
  push32((uint32_t)(0x2u));
  /* 125758d1 mov edx, dword ptr [0x12596c0c] */
  EDX = (r32((uint32_t)(0x12596c0c)));
  /* 125758d7 push edx */
  push32((uint32_t)(EDX));
  /* 125758d8 call 0x1256ae30 */
  push32(0x125758ddu); f_1256ae30();
  /* 125758dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125758e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125758e3 mov dword ptr [0x12596c0c], eax */
  w32((uint32_t)(0x12596c0c), (EAX));
  /* 125758e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125758ea jmp 0x1257594c */
  goto L_1257594c;
L_125758ec:;
  /* 125758ec mov ecx, dword ptr [0x12595d88] */
  ECX = (r32((uint32_t)(0x12595d88)));
  /* 125758f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125758f4 mov dword ptr [0x12595d58], edx */
  w32((uint32_t)(0x12595d58), (EDX));
  /* 125758fa mov eax, dword ptr [0x12595d88] */
  EAX = (r32((uint32_t)(0x12595d88)));
  /* 125758ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12575902 mov dword ptr [0x12595d5c], ecx */
  w32((uint32_t)(0x12595d5c), (ECX));
  /* 12575908 mov edx, dword ptr [0x12595d88] */
  EDX = (r32((uint32_t)(0x12595d88)));
  /* 1257590e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12575911 mov dword ptr [0x12595d60], eax */
  w32((uint32_t)(0x12595d60), (EAX));
  /* 12575916 mov dword ptr [0x12595d88], 0x12595d58 */
  w32((uint32_t)(0x12595d88), (0x12595d58u));
  /* 12575920 mov ecx, dword ptr [0x12596c0c] */
  ECX = (r32((uint32_t)(0x12596c0c)));
  /* 12575926 push ecx */
  push32((uint32_t)(ECX));
  /* 12575927 call 0x12575be0 */
  push32(0x1257592cu); f_12575be0();
  /* 1257592c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257592f push 2 */
  push32((uint32_t)(0x2u));
  /* 12575931 mov edx, dword ptr [0x12596c0c] */
  EDX = (r32((uint32_t)(0x12596c0c)));
  /* 12575937 push edx */
  push32((uint32_t)(EDX));
  /* 12575938 call 0x1256ae30 */
  push32(0x1257593du); f_1256ae30();
  /* 1257593d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575940 mov dword ptr [0x12596c0c], 0 */
  w32((uint32_t)(0x12596c0c), (0x0u));
  /* 1257594a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1257594c:;
  /* 1257594c mov esp, ebp */
  ESP = (EBP);
  /* 1257594e pop ebp */
  EBP = (pop32());
  /* 1257594f ret  */
  ESPCHK(0x12575820u, _esp0);
  ESP += 4; return;
}

/* FUN_10015950 @ 0x12575950 (525 bytes, 200 insns) */
void f_12575950(void) {
  FTRACE(0x12575950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12575950 push ebp */
  push32((uint32_t)(EBP));
  /* 12575951 mov ebp, esp */
  EBP = (ESP);
  /* 12575953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12575956 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1257595d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257595f mov ax, word ptr [0x12596c2c] */
  AX = (r16((uint32_t)(0x12596c2c)));
  /* 12575965 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12575968 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257596c jne 0x12575976 */
  if (!C.zf) goto L_12575976;
  /* 1257596e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12575971 jmp 0x12575b59 */
  goto L_12575b59;
L_12575976:;
  /* 12575976 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575979 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257597c push ecx */
  push32((uint32_t)(ECX));
  /* 1257597d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1257597f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575982 push edx */
  push32((uint32_t)(EDX));
  /* 12575983 push 1 */
  push32((uint32_t)(0x1u));
  /* 12575985 call 0x12578560 */
  push32(0x1257598au); f_12578560();
  /* 1257598a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257598d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12575990 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575992 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12575995 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575998 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257599b push edx */
  push32((uint32_t)(EDX));
  /* 1257599c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1257599e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125759a1 push eax */
  push32((uint32_t)(EAX));
  /* 125759a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125759a4 call 0x12578560 */
  push32(0x125759a9u); f_12578560();
  /* 125759a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125759ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125759af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125759b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125759b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125759b7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125759ba push edx */
  push32((uint32_t)(EDX));
  /* 125759bb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 125759bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125759c0 push eax */
  push32((uint32_t)(EAX));
  /* 125759c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125759c3 call 0x12578560 */
  push32(0x125759c8u); f_12578560();
  /* 125759c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125759cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125759ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125759d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125759d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125759d6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125759d9 push edx */
  push32((uint32_t)(EDX));
  /* 125759da push 0x17 */
  push32((uint32_t)(0x17u));
  /* 125759dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125759df push eax */
  push32((uint32_t)(EAX));
  /* 125759e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125759e2 call 0x12578560 */
  push32(0x125759e7u); f_12578560();
  /* 125759e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125759ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125759ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125759ef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125759f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125759f5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125759f8 push edx */
  push32((uint32_t)(EDX));
  /* 125759f9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 125759fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125759fe push eax */
  push32((uint32_t)(EAX));
  /* 125759ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12575a01 call 0x12578560 */
  push32(0x12575a06u); f_12578560();
  /* 12575a06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575a09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12575a0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575a0e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12575a11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575a14 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12575a17 push eax */
  push32((uint32_t)(EAX));
  /* 12575a18 call 0x12575b60 */
  push32(0x12575a1du); f_12575b60();
  /* 12575a1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575a20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575a23 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575a26 push ecx */
  push32((uint32_t)(ECX));
  /* 12575a27 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12575a29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575a2c push edx */
  push32((uint32_t)(EDX));
  /* 12575a2d push 1 */
  push32((uint32_t)(0x1u));
  /* 12575a2f call 0x12578560 */
  push32(0x12575a34u); f_12578560();
  /* 12575a34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575a37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12575a3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575a3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12575a3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575a42 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575a45 push edx */
  push32((uint32_t)(EDX));
  /* 12575a46 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12575a48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575a4b push eax */
  push32((uint32_t)(EAX));
  /* 12575a4c push 1 */
  push32((uint32_t)(0x1u));
  /* 12575a4e call 0x12578560 */
  push32(0x12575a53u); f_12578560();
  /* 12575a53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575a56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12575a59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575a5b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12575a5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575a61 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575a64 push edx */
  push32((uint32_t)(EDX));
  /* 12575a65 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12575a67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575a6a push eax */
  push32((uint32_t)(EAX));
  /* 12575a6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12575a6d call 0x12578560 */
  push32(0x12575a72u); f_12578560();
  /* 12575a72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575a75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12575a78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575a7a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12575a7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575a80 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575a83 push edx */
  push32((uint32_t)(EDX));
  /* 12575a84 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12575a86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575a89 push eax */
  push32((uint32_t)(EAX));
  /* 12575a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12575a8c call 0x12578560 */
  push32(0x12575a91u); f_12578560();
  /* 12575a91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575a94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12575a97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575a99 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12575a9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575a9f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575aa2 push edx */
  push32((uint32_t)(EDX));
  /* 12575aa3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12575aa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575aa8 push eax */
  push32((uint32_t)(EAX));
  /* 12575aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12575aab call 0x12578560 */
  push32(0x12575ab0u); f_12578560();
  /* 12575ab0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575ab3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12575ab6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575ab8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12575abb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575abe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575ac1 push edx */
  push32((uint32_t)(EDX));
  /* 12575ac2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12575ac4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575ac7 push eax */
  push32((uint32_t)(EAX));
  /* 12575ac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12575aca call 0x12578560 */
  push32(0x12575acfu); f_12578560();
  /* 12575acf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575ad2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12575ad5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575ad7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12575ada mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575add add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575ae0 push edx */
  push32((uint32_t)(EDX));
  /* 12575ae1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12575ae3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575ae6 push eax */
  push32((uint32_t)(EAX));
  /* 12575ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12575ae9 call 0x12578560 */
  push32(0x12575aeeu); f_12578560();
  /* 12575aee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575af1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12575af4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575af6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12575af9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575afc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575aff push edx */
  push32((uint32_t)(EDX));
  /* 12575b00 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12575b02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575b05 push eax */
  push32((uint32_t)(EAX));
  /* 12575b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12575b08 call 0x12578560 */
  push32(0x12575b0du); f_12578560();
  /* 12575b0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575b10 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12575b13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575b15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12575b18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575b1b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575b1e push edx */
  push32((uint32_t)(EDX));
  /* 12575b1f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12575b21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575b24 push eax */
  push32((uint32_t)(EAX));
  /* 12575b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12575b27 call 0x12578560 */
  push32(0x12575b2cu); f_12578560();
  /* 12575b2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575b2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12575b32 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575b34 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12575b37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575b3a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575b3d push edx */
  push32((uint32_t)(EDX));
  /* 12575b3e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12575b40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575b43 push eax */
  push32((uint32_t)(EAX));
  /* 12575b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12575b46 call 0x12578560 */
  push32(0x12575b4bu); f_12578560();
  /* 12575b4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575b4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12575b51 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12575b53 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12575b56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12575b59:;
  /* 12575b59 mov esp, ebp */
  ESP = (EBP);
  /* 12575b5b pop ebp */
  EBP = (pop32());
  /* 12575b5c ret  */
  ESPCHK(0x12575950u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12575b60 (125 bytes, 49 insns) */
void f_12575b60(void) {
  FTRACE(0x12575b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12575b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12575b61 mov ebp, esp */
  EBP = (ESP);
  /* 12575b63 push ecx */
  push32((uint32_t)(ECX));
L_12575b64:;
  /* 12575b64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575b67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12575b6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12575b6c je 0x12575bd9 */
  if (C.zf) goto L_12575bd9;
  /* 12575b6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575b71 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12575b74 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575b77 jl 0x12575b9d */
  if ((C.sf!=C.of)) goto L_12575b9d;
  /* 12575b79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575b7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12575b7f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575b82 jg 0x12575b9d */
  if ((!C.zf&&C.sf==C.of)) goto L_12575b9d;
  /* 12575b84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575b87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12575b8a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12575b8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575b90 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12575b92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575b95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575b98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12575b9b jmp 0x12575bd7 */
  goto L_12575bd7;
L_12575b9d:;
  /* 12575b9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575ba0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12575ba3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575ba6 jne 0x12575bce */
  if (!C.zf) goto L_12575bce;
  /* 12575ba8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575bab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12575bae:;
  /* 12575bae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575bb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575bb4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12575bb7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12575bb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575bbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575bbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12575bc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12575bc5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12575bc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12575bca jne 0x12575bae */
  if (!C.zf) goto L_12575bae;
  /* 12575bcc jmp 0x12575bd7 */
  goto L_12575bd7;
L_12575bce:;
  /* 12575bce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575bd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575bd4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12575bd7:;
  /* 12575bd7 jmp 0x12575b64 */
  goto L_12575b64;
L_12575bd9:;
  /* 12575bd9 mov esp, ebp */
  ESP = (EBP);
  /* 12575bdb pop ebp */
  EBP = (pop32());
  /* 12575bdc ret  */
  ESPCHK(0x12575b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015be0 @ 0x12575be0 (147 bytes, 52 insns) */
void f_12575be0(void) {
  FTRACE(0x12575be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12575be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12575be1 mov ebp, esp */
  EBP = (ESP);
  /* 12575be3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575be7 jne 0x12575bee */
  if (!C.zf) goto L_12575bee;
  /* 12575be9 jmp 0x12575c71 */
  goto L_12575c71;
L_12575bee:;
  /* 12575bee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575bf1 cmp dword ptr [eax + 0xc], 0x12596c68 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12596c68u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575bf8 je 0x12575c71 */
  if (C.zf) goto L_12575c71;
  /* 12575bfa push 2 */
  push32((uint32_t)(0x2u));
  /* 12575bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575bff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12575c02 push edx */
  push32((uint32_t)(EDX));
  /* 12575c03 call 0x1256ae30 */
  push32(0x12575c08u); f_1256ae30();
  /* 12575c08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575c0b push 2 */
  push32((uint32_t)(0x2u));
  /* 12575c0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575c10 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12575c13 push ecx */
  push32((uint32_t)(ECX));
  /* 12575c14 call 0x1256ae30 */
  push32(0x12575c19u); f_1256ae30();
  /* 12575c19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575c1c push 2 */
  push32((uint32_t)(0x2u));
  /* 12575c1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575c21 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12575c24 push eax */
  push32((uint32_t)(EAX));
  /* 12575c25 call 0x1256ae30 */
  push32(0x12575c2au); f_1256ae30();
  /* 12575c2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575c2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12575c2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575c32 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12575c35 push edx */
  push32((uint32_t)(EDX));
  /* 12575c36 call 0x1256ae30 */
  push32(0x12575c3bu); f_1256ae30();
  /* 12575c3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575c3e push 2 */
  push32((uint32_t)(0x2u));
  /* 12575c40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575c43 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12575c46 push ecx */
  push32((uint32_t)(ECX));
  /* 12575c47 call 0x1256ae30 */
  push32(0x12575c4cu); f_1256ae30();
  /* 12575c4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575c4f push 2 */
  push32((uint32_t)(0x2u));
  /* 12575c51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575c54 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12575c57 push eax */
  push32((uint32_t)(EAX));
  /* 12575c58 call 0x1256ae30 */
  push32(0x12575c5du); f_1256ae30();
  /* 12575c5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575c60 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575c62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12575c65 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12575c68 push edx */
  push32((uint32_t)(EDX));
  /* 12575c69 call 0x1256ae30 */
  push32(0x12575c6eu); f_1256ae30();
  /* 12575c6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12575c71:;
  /* 12575c71 pop ebp */
  EBP = (pop32());
  /* 12575c72 ret  */
  ESPCHK(0x12575be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c80 @ 0x12575c80 (928 bytes, 284 insns) */
void f_12575c80(void) {
  FTRACE(0x12575c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12575c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12575c81 mov ebp, esp */
  EBP = (ESP);
  /* 12575c83 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12575c86 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12575c8d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12575c94 cmp dword ptr [0x12596bd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596bd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575c9b je 0x12575fd1 */
  if (C.zf) goto L_12575fd1;
  /* 12575ca1 cmp dword ptr [0x12596be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575ca8 jne 0x12575cd0 */
  if (!C.zf) goto L_12575cd0;
  /* 12575caa push 0x12596be0 */
  push32((uint32_t)(0x12596be0u));
  /* 12575caf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12575cb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12575cb6 mov ax, word ptr [0x12596c24] */
  AX = (r16((uint32_t)(0x12596c24)));
  /* 12575cbc push eax */
  push32((uint32_t)(EAX));
  /* 12575cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 12575cbf call 0x12578560 */
  push32(0x12575cc4u); f_12578560();
  /* 12575cc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575cc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12575cc9 je 0x12575cd0 */
  if (C.zf) goto L_12575cd0;
  /* 12575ccb jmp 0x12575f92 */
  goto L_12575f92;
L_12575cd0:;
  /* 12575cd0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12575cd2 push 0x12592704 */
  push32((uint32_t)(0x12592704u));
  /* 12575cd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575cd9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12575cde call 0x1256a3a0 */
  push32(0x12575ce3u); f_1256a3a0();
  /* 12575ce3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575ce6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12575ce9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12575ceb push 0x12592704 */
  push32((uint32_t)(0x12592704u));
  /* 12575cf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575cf2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12575cf7 call 0x1256a3a0 */
  push32(0x12575cfcu); f_1256a3a0();
  /* 12575cfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575cff mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12575d02 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12575d04 push 0x12592704 */
  push32((uint32_t)(0x12592704u));
  /* 12575d09 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575d0b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12575d10 call 0x1256a3a0 */
  push32(0x12575d15u); f_1256a3a0();
  /* 12575d15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575d18 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12575d1b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12575d1d push 0x12592704 */
  push32((uint32_t)(0x12592704u));
  /* 12575d22 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575d24 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12575d29 call 0x1256a3a0 */
  push32(0x12575d2eu); f_1256a3a0();
  /* 12575d2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575d31 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12575d34 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575d38 je 0x12575d4c */
  if (C.zf) goto L_12575d4c;
  /* 12575d3a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575d3e je 0x12575d4c */
  if (C.zf) goto L_12575d4c;
  /* 12575d40 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575d44 je 0x12575d4c */
  if (C.zf) goto L_12575d4c;
  /* 12575d46 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575d4a jne 0x12575d51 */
  if (!C.zf) goto L_12575d51;
L_12575d4c:;
  /* 12575d4c jmp 0x12575f92 */
  goto L_12575f92;
L_12575d51:;
  /* 12575d51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12575d54 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12575d57 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12575d5e jmp 0x12575d69 */
  goto L_12575d69;
L_12575d60:;
  /* 12575d60 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12575d63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575d66 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12575d69:;
  /* 12575d69 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575d70 jge 0x12575d85 */
  if ((C.sf==C.of)) goto L_12575d85;
  /* 12575d72 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12575d75 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12575d78 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12575d7a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12575d7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575d80 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12575d83 jmp 0x12575d60 */
  goto L_12575d60;
L_12575d85:;
  /* 12575d85 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12575d88 push eax */
  push32((uint32_t)(EAX));
  /* 12575d89 mov ecx, dword ptr [0x12596be0] */
  ECX = (r32((uint32_t)(0x12596be0)));
  /* 12575d8f push ecx */
  push32((uint32_t)(ECX));
  /* 12575d90 call dword ptr [0x12599338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599338))), 0x12575d96u);
  /* 12575d96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12575d98 jne 0x12575d9f */
  if (!C.zf) goto L_12575d9f;
  /* 12575d9a jmp 0x12575f92 */
  goto L_12575f92;
L_12575d9f:;
  /* 12575d9f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575da3 jbe 0x12575daa */
  if ((C.cf||C.zf)) goto L_12575daa;
  /* 12575da5 jmp 0x12575f92 */
  goto L_12575f92;
L_12575daa:;
  /* 12575daa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12575dad and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12575db3 mov dword ptr [0x12594ea4], edx */
  w32((uint32_t)(0x12594ea4), (EDX));
  /* 12575db9 cmp dword ptr [0x12594ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12594ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575dc0 jle 0x12575e19 */
  if ((C.zf||C.sf!=C.of)) goto L_12575e19;
  /* 12575dc2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12575dc5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12575dc8 jmp 0x12575dd3 */
  goto L_12575dd3;
L_12575dca:;
  /* 12575dca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12575dcd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575dd0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12575dd3:;
  /* 12575dd3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12575dd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12575dd8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12575dda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12575ddc je 0x12575e19 */
  if (C.zf) goto L_12575e19;
  /* 12575dde mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12575de1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12575de3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12575de6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12575de8 je 0x12575e19 */
  if (C.zf) goto L_12575e19;
  /* 12575dea mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12575ded xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12575def mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12575df1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12575df4 jmp 0x12575dff */
  goto L_12575dff;
L_12575df6:;
  /* 12575df6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12575df9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575dfc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12575dff:;
  /* 12575dff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12575e02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12575e04 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12575e07 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575e0a jg 0x12575e17 */
  if ((!C.zf&&C.sf==C.of)) goto L_12575e17;
  /* 12575e0c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12575e0f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575e12 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12575e15 jmp 0x12575df6 */
  goto L_12575df6;
L_12575e17:;
  /* 12575e17 jmp 0x12575dca */
  goto L_12575dca;
L_12575e19:;
  /* 12575e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12575e1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12575e1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12575e1f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12575e22 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575e25 push eax */
  push32((uint32_t)(EAX));
  /* 12575e26 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12575e2b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12575e2e push ecx */
  push32((uint32_t)(ECX));
  /* 12575e2f push 1 */
  push32((uint32_t)(0x1u));
  /* 12575e31 call 0x125725d0 */
  push32(0x12575e36u); f_125725d0();
  /* 12575e36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12575e3b jne 0x12575e42 */
  if (!C.zf) goto L_12575e42;
  /* 12575e3d jmp 0x12575f92 */
  goto L_12575f92;
L_12575e42:;
  /* 12575e42 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12575e45 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12575e4a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12575e4d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12575e50 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12575e57 jmp 0x12575e62 */
  goto L_12575e62;
L_12575e59:;
  /* 12575e59 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12575e5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575e5f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12575e62:;
  /* 12575e62 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575e69 jge 0x12575e80 */
  if ((C.sf==C.of)) goto L_12575e80;
  /* 12575e6b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12575e6e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12575e72 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12575e75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12575e78 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575e7b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12575e7e jmp 0x12575e59 */
  goto L_12575e59;
L_12575e80:;
  /* 12575e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12575e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12575e84 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12575e87 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575e8a push edx */
  push32((uint32_t)(EDX));
  /* 12575e8b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12575e90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12575e93 push eax */
  push32((uint32_t)(EAX));
  /* 12575e94 push 1 */
  push32((uint32_t)(0x1u));
  /* 12575e96 call 0x12578800 */
  push32(0x12575e9bu); f_12578800();
  /* 12575e9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575e9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12575ea0 jne 0x12575ea7 */
  if (!C.zf) goto L_12575ea7;
  /* 12575ea2 jmp 0x12575f92 */
  goto L_12575f92;
L_12575ea7:;
  /* 12575ea7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12575eaa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12575eaf cmp dword ptr [0x12594ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12594ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575eb6 jle 0x12575f13 */
  if ((C.zf||C.sf!=C.of)) goto L_12575f13;
  /* 12575eb8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12575ebb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12575ebe jmp 0x12575ec9 */
  goto L_12575ec9;
L_12575ec0:;
  /* 12575ec0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12575ec3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575ec6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12575ec9:;
  /* 12575ec9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12575ecc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12575ece mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12575ed0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12575ed2 je 0x12575f13 */
  if (C.zf) goto L_12575f13;
  /* 12575ed4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12575ed7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12575ed9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12575edc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12575ede je 0x12575f13 */
  if (C.zf) goto L_12575f13;
  /* 12575ee0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12575ee3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12575ee5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12575ee7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12575eea jmp 0x12575ef5 */
  goto L_12575ef5;
L_12575eec:;
  /* 12575eec mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12575eef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575ef2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12575ef5:;
  /* 12575ef5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12575ef8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12575efa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12575efd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575f00 jg 0x12575f11 */
  if ((!C.zf&&C.sf==C.of)) goto L_12575f11;
  /* 12575f02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12575f05 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12575f08 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12575f0f jmp 0x12575eec */
  goto L_12575eec;
L_12575f11:;
  /* 12575f11 jmp 0x12575ec0 */
  goto L_12575ec0;
L_12575f13:;
  /* 12575f13 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12575f16 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575f19 mov dword ptr [0x12594c98], eax */
  w32((uint32_t)(0x12594c98), (EAX));
  /* 12575f1e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12575f21 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12575f24 mov dword ptr [0x12594c9c], ecx */
  w32((uint32_t)(0x12594c9c), (ECX));
  /* 12575f2a cmp dword ptr [0x12596c10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575f31 je 0x12575f44 */
  if (C.zf) goto L_12575f44;
  /* 12575f33 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575f35 mov edx, dword ptr [0x12596c10] */
  EDX = (r32((uint32_t)(0x12596c10)));
  /* 12575f3b push edx */
  push32((uint32_t)(EDX));
  /* 12575f3c call 0x1256ae30 */
  push32(0x12575f41u); f_1256ae30();
  /* 12575f41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12575f44:;
  /* 12575f44 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12575f47 mov dword ptr [0x12596c10], eax */
  w32((uint32_t)(0x12596c10), (EAX));
  /* 12575f4c cmp dword ptr [0x12596c14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12575f53 je 0x12575f66 */
  if (C.zf) goto L_12575f66;
  /* 12575f55 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575f57 mov ecx, dword ptr [0x12596c14] */
  ECX = (r32((uint32_t)(0x12596c14)));
  /* 12575f5d push ecx */
  push32((uint32_t)(ECX));
  /* 12575f5e call 0x1256ae30 */
  push32(0x12575f63u); f_1256ae30();
  /* 12575f63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12575f66:;
  /* 12575f66 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12575f69 mov dword ptr [0x12596c14], edx */
  w32((uint32_t)(0x12596c14), (EDX));
  /* 12575f6f push 2 */
  push32((uint32_t)(0x2u));
  /* 12575f71 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12575f74 push eax */
  push32((uint32_t)(EAX));
  /* 12575f75 call 0x1256ae30 */
  push32(0x12575f7au); f_1256ae30();
  /* 12575f7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575f7d push 2 */
  push32((uint32_t)(0x2u));
  /* 12575f7f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12575f82 push ecx */
  push32((uint32_t)(ECX));
  /* 12575f83 call 0x1256ae30 */
  push32(0x12575f88u); f_1256ae30();
  /* 12575f88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575f8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12575f8d jmp 0x1257601c */
  goto L_1257601c;
L_12575f92:;
  /* 12575f92 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575f94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12575f97 push edx */
  push32((uint32_t)(EDX));
  /* 12575f98 call 0x1256ae30 */
  push32(0x12575f9du); f_1256ae30();
  /* 12575f9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575fa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575fa2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12575fa5 push eax */
  push32((uint32_t)(EAX));
  /* 12575fa6 call 0x1256ae30 */
  push32(0x12575fabu); f_1256ae30();
  /* 12575fab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575fae push 2 */
  push32((uint32_t)(0x2u));
  /* 12575fb0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12575fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12575fb4 call 0x1256ae30 */
  push32(0x12575fb9u); f_1256ae30();
  /* 12575fb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575fbc push 2 */
  push32((uint32_t)(0x2u));
  /* 12575fbe mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12575fc1 push edx */
  push32((uint32_t)(EDX));
  /* 12575fc2 call 0x1256ae30 */
  push32(0x12575fc7u); f_1256ae30();
  /* 12575fc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575fca mov eax, 1 */
  EAX = (0x1u);
  /* 12575fcf jmp 0x1257601c */
  goto L_1257601c;
L_12575fd1:;
  /* 12575fd1 mov dword ptr [0x12594c98], 0x12594ca2 */
  w32((uint32_t)(0x12594c98), (0x12594ca2u));
  /* 12575fdb mov dword ptr [0x12594c9c], 0x12594ca2 */
  w32((uint32_t)(0x12594c9c), (0x12594ca2u));
  /* 12575fe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575fe7 mov eax, dword ptr [0x12596c10] */
  EAX = (r32((uint32_t)(0x12596c10)));
  /* 12575fec push eax */
  push32((uint32_t)(EAX));
  /* 12575fed call 0x1256ae30 */
  push32(0x12575ff2u); f_1256ae30();
  /* 12575ff2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12575ff5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12575ff7 mov ecx, dword ptr [0x12596c14] */
  ECX = (r32((uint32_t)(0x12596c14)));
  /* 12575ffd push ecx */
  push32((uint32_t)(ECX));
  /* 12575ffe call 0x1256ae30 */
  push32(0x12576003u); f_1256ae30();
  /* 12576003 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576006 mov dword ptr [0x12596c10], 0 */
  w32((uint32_t)(0x12596c10), (0x0u));
  /* 12576010 mov dword ptr [0x12596c14], 0 */
  w32((uint32_t)(0x12596c14), (0x0u));
  /* 1257601a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1257601c:;
  /* 1257601c mov esp, ebp */
  ESP = (EBP);
  /* 1257601e pop ebp */
  EBP = (pop32());
  /* 1257601f ret  */
  ESPCHK(0x12575c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10016020 @ 0x12576020 (7 bytes, 5 insns) */
void f_12576020(void) {
  FTRACE(0x12576020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576020 push ebp */
  push32((uint32_t)(EBP));
  /* 12576021 mov ebp, esp */
  EBP = (ESP);
  /* 12576023 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12576025 pop ebp */
  EBP = (pop32());
  /* 12576026 ret  */
  ESPCHK(0x12576020u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12576030 (129 bytes, 56 insns) */
void f_12576030(void) {
  FTRACE(0x12576030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576030 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12576034 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12576038 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1257603e jne 0x1257607c */
  if (!C.zf) goto L_1257607c;
L_12576040:;
  /* 12576040 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12576042 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12576044 jne 0x12576074 */
  if (!C.zf) goto L_12576074;
  /* 12576046 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12576048 je 0x12576070 */
  if (C.zf) goto L_12576070;
  /* 1257604a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1257604d jne 0x12576074 */
  if (!C.zf) goto L_12576074;
  /* 1257604f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12576051 je 0x12576070 */
  if (C.zf) goto L_12576070;
  /* 12576053 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12576056 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12576059 jne 0x12576074 */
  if (!C.zf) goto L_12576074;
  /* 1257605b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1257605d je 0x12576070 */
  if (C.zf) goto L_12576070;
  /* 1257605f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12576062 jne 0x12576074 */
  if (!C.zf) goto L_12576074;
  /* 12576064 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576067 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257606a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1257606c jne 0x12576040 */
  if (!C.zf) goto L_12576040;
  /* 1257606e mov edi, edi */
  EDI = (EDI);
L_12576070:;
  /* 12576070 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12576072 ret  */
  ESPCHK(0x12576030u, _esp0);
  ESP += 4; return;
  /* 12576073 nop  */
  /* nop */
L_12576074:;
  /* 12576074 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576076 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12576078 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12576079 ret  */
  ESPCHK(0x12576030u, _esp0);
  ESP += 4; return;
  /* 1257607a mov edi, edi */
  EDI = (EDI);
L_1257607c:;
  /* 1257607c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12576082 je 0x12576098 */
  if (C.zf) goto L_12576098;
  /* 12576084 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12576086 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12576087 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12576089 jne 0x12576074 */
  if (!C.zf) goto L_12576074;
  /* 1257608b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1257608c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1257608e je 0x12576070 */
  if (C.zf) goto L_12576070;
  /* 12576090 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12576096 je 0x12576040 */
  if (C.zf) goto L_12576040;
L_12576098:;
  /* 12576098 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1257609b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257609e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125760a0 jne 0x12576074 */
  if (!C.zf) goto L_12576074;
  /* 125760a2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125760a4 je 0x12576070 */
  if (C.zf) goto L_12576070;
  /* 125760a6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125760a9 jne 0x12576074 */
  if (!C.zf) goto L_12576074;
  /* 125760ab or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 125760ad je 0x12576070 */
  if (C.zf) goto L_12576070;
  /* 125760af add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125760b2 jmp 0x12576040 */
  goto L_12576040;
}

/* FUN_100160c0 @ 0x125760c0 (62 bytes, 35 insns) */
void f_125760c0(void) {
  FTRACE(0x125760c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125760c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125760c1 mov ebp, esp */
  EBP = (ESP);
  /* 125760c3 push esi */
  push32((uint32_t)(ESI));
  /* 125760c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125760c6 push eax */
  push32((uint32_t)(EAX));
  /* 125760c7 push eax */
  push32((uint32_t)(EAX));
  /* 125760c8 push eax */
  push32((uint32_t)(EAX));
  /* 125760c9 push eax */
  push32((uint32_t)(EAX));
  /* 125760ca push eax */
  push32((uint32_t)(EAX));
  /* 125760cb push eax */
  push32((uint32_t)(EAX));
  /* 125760cc push eax */
  push32((uint32_t)(EAX));
  /* 125760cd push eax */
  push32((uint32_t)(EAX));
  /* 125760ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125760d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125760d4:;
  /* 125760d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125760d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125760d8 je 0x125760e1 */
  if (C.zf) goto L_125760e1;
  /* 125760da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 125760db bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x125760db");
  /* 125760df jmp 0x125760d4 */
  goto L_125760d4;
L_125760e1:;
  /* 125760e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 125760e4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125760e7 nop  */
  /* nop */
L_125760e8:;
  /* 125760e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 125760e9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125760eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125760ed je 0x125760f6 */
  if (C.zf) goto L_125760f6;
  /* 125760ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125760f0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x125760f0");
  /* 125760f4 jae 0x125760e8 */
  if (!C.cf) goto L_125760e8;
L_125760f6:;
  /* 125760f6 mov eax, ecx */
  EAX = (ECX);
  /* 125760f8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125760fb pop esi */
  ESI = (pop32());
  /* 125760fc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125760fd ret  */
  ESPCHK(0x125760c0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12576100 (56 bytes, 31 insns) */
void f_12576100(void) {
  FTRACE(0x12576100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576100 push ebp */
  push32((uint32_t)(EBP));
  /* 12576101 mov ebp, esp */
  EBP = (ESP);
  /* 12576103 push edi */
  push32((uint32_t)(EDI));
  /* 12576104 push esi */
  push32((uint32_t)(ESI));
  /* 12576105 push ebx */
  push32((uint32_t)(EBX));
  /* 12576106 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12576109 jecxz 0x12576131 */
  x86_unimpl("jecxz @ 0x12576109");
  /* 1257610b mov ebx, ecx */
  EBX = (ECX);
  /* 1257610d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12576110 mov esi, edi */
  ESI = (EDI);
  /* 12576112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12576114 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12576116 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12576118 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257611a mov edi, esi */
  EDI = (ESI);
  /* 1257611c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1257611f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12576121 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12576124 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12576126 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12576129 ja 0x1257612f */
  if ((!C.cf&&!C.zf)) goto L_1257612f;
  /* 1257612b je 0x12576131 */
  if (C.zf) goto L_12576131;
  /* 1257612d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1257612e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1257612f:;
  /* 1257612f not ecx */
  ECX = (~(ECX));
L_12576131:;
  /* 12576131 mov eax, ecx */
  EAX = (ECX);
  /* 12576133 pop ebx */
  EBX = (pop32());
  /* 12576134 pop esi */
  ESI = (pop32());
  /* 12576135 pop edi */
  EDI = (pop32());
  /* 12576136 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12576137 ret  */
  ESPCHK(0x12576100u, _esp0);
  ESP += 4; return;
}

/* FUN_10016140 @ 0x12576140 (58 bytes, 32 insns) */
void f_12576140(void) {
  FTRACE(0x12576140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576140 push ebp */
  push32((uint32_t)(EBP));
  /* 12576141 mov ebp, esp */
  EBP = (ESP);
  /* 12576143 push esi */
  push32((uint32_t)(ESI));
  /* 12576144 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12576146 push eax */
  push32((uint32_t)(EAX));
  /* 12576147 push eax */
  push32((uint32_t)(EAX));
  /* 12576148 push eax */
  push32((uint32_t)(EAX));
  /* 12576149 push eax */
  push32((uint32_t)(EAX));
  /* 1257614a push eax */
  push32((uint32_t)(EAX));
  /* 1257614b push eax */
  push32((uint32_t)(EAX));
  /* 1257614c push eax */
  push32((uint32_t)(EAX));
  /* 1257614d push eax */
  push32((uint32_t)(EAX));
  /* 1257614e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12576151 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12576154:;
  /* 12576154 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12576156 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12576158 je 0x12576161 */
  if (C.zf) goto L_12576161;
  /* 1257615a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1257615b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1257615b");
  /* 1257615f jmp 0x12576154 */
  goto L_12576154;
L_12576161:;
  /* 12576161 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12576164:;
  /* 12576164 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12576166 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12576168 je 0x12576174 */
  if (C.zf) goto L_12576174;
  /* 1257616a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1257616b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1257616b");
  /* 1257616f jae 0x12576164 */
  if (!C.cf) goto L_12576164;
  /* 12576171 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12576174:;
  /* 12576174 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576177 pop esi */
  ESI = (pop32());
  /* 12576178 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12576179 ret  */
  ESPCHK(0x12576140u, _esp0);
  ESP += 4; return;
}

/* FUN_10016180 @ 0x12576180 (512 bytes, 147 insns) */
void f_12576180(void) {
  FTRACE(0x12576180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576180 push ebp */
  push32((uint32_t)(EBP));
  /* 12576181 mov ebp, esp */
  EBP = (ESP);
  /* 12576183 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576186 cmp dword ptr [0x12596c5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257618d jne 0x125761b2 */
  if (!C.zf) goto L_125761b2;
  /* 1257618f call 0x12576c50 */
  push32(0x12576194u); f_12576c50();
  /* 12576194 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576196 je 0x125761a2 */
  if (C.zf) goto L_125761a2;
  /* 12576198 mov eax, dword ptr [0x125992fc] */
  EAX = (r32((uint32_t)(0x125992fc)));
  /* 1257619d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125761a0 jmp 0x125761a9 */
  goto L_125761a9;
L_125761a2:;
  /* 125761a2 mov dword ptr [ebp - 8], 0x12576ca0 */
  w32((uint32_t)(EBP + -0x8), (0x12576ca0u));
L_125761a9:;
  /* 125761a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125761ac mov dword ptr [0x12596c5c], ecx */
  w32((uint32_t)(0x12596c5c), (ECX));
L_125761b2:;
  /* 125761b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125761b6 jne 0x125761c2 */
  if (!C.zf) goto L_125761c2;
  /* 125761b8 call 0x12576aa0 */
  push32(0x125761bdu); f_12576aa0();
  /* 125761bd jmp 0x1257628e */
  goto L_1257628e;
L_125761c2:;
  /* 125761c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125761c5 mov dword ptr [0x12596c4c], edx */
  w32((uint32_t)(0x12596c4c), (EDX));
  /* 125761cb cmp dword ptr [0x12596c4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125761d2 je 0x125761f4 */
  if (C.zf) goto L_125761f4;
  /* 125761d4 mov eax, dword ptr [0x12596c4c] */
  EAX = (r32((uint32_t)(0x12596c4c)));
  /* 125761d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125761dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125761de je 0x125761f4 */
  if (C.zf) goto L_125761f4;
  /* 125761e0 push 0x12596c4c */
  push32((uint32_t)(0x12596c4cu));
  /* 125761e5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125761e7 push 0x12595a90 */
  push32((uint32_t)(0x12595a90u));
  /* 125761ec call 0x12576380 */
  push32(0x125761f1u); f_12576380();
  /* 125761f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125761f4:;
  /* 125761f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125761f7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125761fa mov dword ptr [0x12596c50], edx */
  w32((uint32_t)(0x12596c50), (EDX));
  /* 12576200 cmp dword ptr [0x12596c50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576207 je 0x12576229 */
  if (C.zf) goto L_12576229;
  /* 12576209 mov eax, dword ptr [0x12596c50] */
  EAX = (r32((uint32_t)(0x12596c50)));
  /* 1257620e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12576211 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12576213 je 0x12576229 */
  if (C.zf) goto L_12576229;
  /* 12576215 push 0x12596c50 */
  push32((uint32_t)(0x12596c50u));
  /* 1257621a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1257621c push 0x125959d8 */
  push32((uint32_t)(0x125959d8u));
  /* 12576221 call 0x12576380 */
  push32(0x12576226u); f_12576380();
  /* 12576226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12576229:;
  /* 12576229 mov dword ptr [0x12596c54], 0 */
  w32((uint32_t)(0x12596c54), (0x0u));
  /* 12576233 cmp dword ptr [0x12596c4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257623a je 0x1257626d */
  if (C.zf) goto L_1257626d;
  /* 1257623c mov edx, dword ptr [0x12596c4c] */
  EDX = (r32((uint32_t)(0x12596c4c)));
  /* 12576242 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12576245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576247 je 0x1257626d */
  if (C.zf) goto L_1257626d;
  /* 12576249 cmp dword ptr [0x12596c50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576250 je 0x12576266 */
  if (C.zf) goto L_12576266;
  /* 12576252 mov ecx, dword ptr [0x12596c50] */
  ECX = (r32((uint32_t)(0x12596c50)));
  /* 12576258 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1257625b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1257625d je 0x12576266 */
  if (C.zf) goto L_12576266;
  /* 1257625f call 0x12576410 */
  push32(0x12576264u); f_12576410();
  /* 12576264 jmp 0x1257626b */
  goto L_1257626b;
L_12576266:;
  /* 12576266 call 0x12576800 */
  push32(0x1257626bu); f_12576800();
L_1257626b:;
  /* 1257626b jmp 0x1257628e */
  goto L_1257628e;
L_1257626d:;
  /* 1257626d cmp dword ptr [0x12596c50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576274 je 0x12576289 */
  if (C.zf) goto L_12576289;
  /* 12576276 mov eax, dword ptr [0x12596c50] */
  EAX = (r32((uint32_t)(0x12596c50)));
  /* 1257627b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1257627e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12576280 je 0x12576289 */
  if (C.zf) goto L_12576289;
  /* 12576282 call 0x125769a0 */
  push32(0x12576287u); f_125769a0();
  /* 12576287 jmp 0x1257628e */
  goto L_1257628e;
L_12576289:;
  /* 12576289 call 0x12576aa0 */
  push32(0x1257628eu); f_12576aa0();
L_1257628e:;
  /* 1257628e cmp dword ptr [0x12596c54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576295 jne 0x1257629e */
  if (!C.zf) goto L_1257629e;
  /* 12576297 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12576299 jmp 0x1257637c */
  goto L_1257637c;
L_1257629e:;
  /* 1257629e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125762a1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125762a7 push edx */
  push32((uint32_t)(EDX));
  /* 125762a8 call 0x12576ad0 */
  push32(0x125762adu); f_12576ad0();
  /* 125762ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125762b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125762b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125762b7 je 0x125762cc */
  if (C.zf) goto L_125762cc;
  /* 125762b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125762bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125762c1 push eax */
  push32((uint32_t)(EAX));
  /* 125762c2 call dword ptr [0x12599300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599300))), 0x125762c8u);
  /* 125762c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125762ca jne 0x125762d3 */
  if (!C.zf) goto L_125762d3;
L_125762cc:;
  /* 125762cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125762ce jmp 0x1257637c */
  goto L_1257637c;
L_125762d3:;
  /* 125762d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125762d5 mov ecx, dword ptr [0x12596c3c] */
  ECX = (r32((uint32_t)(0x12596c3c)));
  /* 125762db push ecx */
  push32((uint32_t)(ECX));
  /* 125762dc call dword ptr [0x12599310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599310))), 0x125762e2u);
  /* 125762e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125762e4 jne 0x125762ed */
  if (!C.zf) goto L_125762ed;
  /* 125762e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125762e8 jmp 0x1257637c */
  goto L_1257637c;
L_125762ed:;
  /* 125762ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125762f1 je 0x12576318 */
  if (C.zf) goto L_12576318;
  /* 125762f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125762f6 mov ax, word ptr [0x12596c3c] */
  AX = (r16((uint32_t)(0x12596c3c)));
  /* 125762fc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 125762ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12576302 mov dx, word ptr [0x12596c58] */
  DX = (r16((uint32_t)(0x12596c58)));
  /* 12576309 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1257630d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12576310 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12576314 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12576318:;
  /* 12576318 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257631c je 0x12576377 */
  if (C.zf) goto L_12576377;
  /* 1257631e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12576320 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12576323 push edx */
  push32((uint32_t)(EDX));
  /* 12576324 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12576329 mov eax, dword ptr [0x12596c3c] */
  EAX = (r32((uint32_t)(0x12596c3c)));
  /* 1257632e push eax */
  push32((uint32_t)(EAX));
  /* 1257632f call dword ptr [0x12596c5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12596c5c))), 0x12576335u);
  /* 12576335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576337 jne 0x1257633d */
  if (!C.zf) goto L_1257633d;
  /* 12576339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257633b jmp 0x1257637c */
  goto L_1257637c;
L_1257633d:;
  /* 1257633d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1257633f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12576342 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576345 push ecx */
  push32((uint32_t)(ECX));
  /* 12576346 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1257634b mov edx, dword ptr [0x12596c58] */
  EDX = (r32((uint32_t)(0x12596c58)));
  /* 12576351 push edx */
  push32((uint32_t)(EDX));
  /* 12576352 call dword ptr [0x12596c5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12596c5c))), 0x12576358u);
  /* 12576358 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257635a jne 0x12576360 */
  if (!C.zf) goto L_12576360;
  /* 1257635c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257635e jmp 0x1257637c */
  goto L_1257637c;
L_12576360:;
  /* 12576360 push 0xa */
  push32((uint32_t)(0xau));
  /* 12576362 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12576365 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257636a push eax */
  push32((uint32_t)(EAX));
  /* 1257636b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257636e push ecx */
  push32((uint32_t)(ECX));
  /* 1257636f call 0x1256cee0 */
  push32(0x12576374u); f_1256cee0();
  /* 12576374 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12576377:;
  /* 12576377 mov eax, 1 */
  EAX = (0x1u);
L_1257637c:;
  /* 1257637c mov esp, ebp */
  ESP = (EBP);
  /* 1257637e pop ebp */
  EBP = (pop32());
  /* 1257637f ret  */
  ESPCHK(0x12576180u, _esp0);
  ESP += 4; return;
}

/* FUN_10016380 @ 0x12576380 (130 bytes, 47 insns) */
void f_12576380(void) {
  FTRACE(0x12576380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576380 push ebp */
  push32((uint32_t)(EBP));
  /* 12576381 mov ebp, esp */
  EBP = (ESP);
  /* 12576383 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576386 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1257638d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12576394:;
  /* 12576394 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12576397 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257639a jg 0x125763fe */
  if ((!C.zf&&C.sf==C.of)) goto L_125763fe;
  /* 1257639c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125763a0 je 0x125763fe */
  if (C.zf) goto L_125763fe;
  /* 125763a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125763a5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125763a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125763a9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125763ab sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125763ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125763b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125763b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125763b6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 125763b9 push eax */
  push32((uint32_t)(EAX));
  /* 125763ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125763bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125763bf push edx */
  push32((uint32_t)(EDX));
  /* 125763c0 call 0x12578a70 */
  push32(0x125763c5u); f_12578a70();
  /* 125763c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125763c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125763cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125763cf jne 0x125763e2 */
  if (!C.zf) goto L_125763e2;
  /* 125763d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125763d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125763d7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 125763db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125763de mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125763e0 jmp 0x125763fc */
  goto L_125763fc;
L_125763e2:;
  /* 125763e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125763e6 jge 0x125763f3 */
  if ((C.sf==C.of)) goto L_125763f3;
  /* 125763e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125763eb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125763ee mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 125763f1 jmp 0x125763fc */
  goto L_125763fc;
L_125763f3:;
  /* 125763f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125763f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125763f9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125763fc:;
  /* 125763fc jmp 0x12576394 */
  goto L_12576394;
L_125763fe:;
  /* 125763fe mov esp, ebp */
  ESP = (EBP);
  /* 12576400 pop ebp */
  EBP = (pop32());
  /* 12576401 ret  */
  ESPCHK(0x12576380u, _esp0);
  ESP += 4; return;
}

/* FUN_10016410 @ 0x12576410 (186 bytes, 50 insns) */
void f_12576410(void) {
  FTRACE(0x12576410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576410 push ebp */
  push32((uint32_t)(EBP));
  /* 12576411 mov ebp, esp */
  EBP = (ESP);
  /* 12576413 push ecx */
  push32((uint32_t)(ECX));
  /* 12576414 mov eax, dword ptr [0x12596c4c] */
  EAX = (r32((uint32_t)(0x12596c4c)));
  /* 12576419 push eax */
  push32((uint32_t)(EAX));
  /* 1257641a call 0x1256d1d0 */
  push32(0x1257641fu); f_1256d1d0();
  /* 1257641f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576422 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12576424 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576427 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1257642a mov dword ptr [0x12596c48], ecx */
  w32((uint32_t)(0x12596c48), (ECX));
  /* 12576430 mov edx, dword ptr [0x12596c50] */
  EDX = (r32((uint32_t)(0x12596c50)));
  /* 12576436 push edx */
  push32((uint32_t)(EDX));
  /* 12576437 call 0x1256d1d0 */
  push32(0x1257643cu); f_1256d1d0();
  /* 1257643c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257643f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12576441 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576444 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12576447 mov dword ptr [0x12596c40], ecx */
  w32((uint32_t)(0x12596c40), (ECX));
  /* 1257644d mov dword ptr [0x12596c3c], 0 */
  w32((uint32_t)(0x12596c3c), (0x0u));
  /* 12576457 cmp dword ptr [0x12596c48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257645e je 0x12576469 */
  if (C.zf) goto L_12576469;
  /* 12576460 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12576467 jmp 0x1257647b */
  goto L_1257647b;
L_12576469:;
  /* 12576469 mov edx, dword ptr [0x12596c4c] */
  EDX = (r32((uint32_t)(0x12596c4c)));
  /* 1257646f push edx */
  push32((uint32_t)(EDX));
  /* 12576470 call 0x12576eb0 */
  push32(0x12576475u); f_12576eb0();
  /* 12576475 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576478 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1257647b:;
  /* 1257647b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1257647e mov dword ptr [0x12596c44], eax */
  w32((uint32_t)(0x12596c44), (EAX));
  /* 12576483 push 1 */
  push32((uint32_t)(0x1u));
  /* 12576485 push 0x125764d0 */
  push32((uint32_t)(0x125764d0u));
  /* 1257648a call dword ptr [0x12599304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599304))), 0x12576490u);
  /* 12576490 mov ecx, dword ptr [0x12596c54] */
  ECX = (r32((uint32_t)(0x12596c54)));
  /* 12576496 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1257649c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1257649e je 0x125764bc */
  if (C.zf) goto L_125764bc;
  /* 125764a0 mov edx, dword ptr [0x12596c54] */
  EDX = (r32((uint32_t)(0x12596c54)));
  /* 125764a6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 125764ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125764ae je 0x125764bc */
  if (C.zf) goto L_125764bc;
  /* 125764b0 mov eax, dword ptr [0x12596c54] */
  EAX = (r32((uint32_t)(0x12596c54)));
  /* 125764b5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 125764b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125764ba jne 0x125764c6 */
  if (!C.zf) goto L_125764c6;
L_125764bc:;
  /* 125764bc mov dword ptr [0x12596c54], 0 */
  w32((uint32_t)(0x12596c54), (0x0u));
L_125764c6:;
  /* 125764c6 mov esp, ebp */
  ESP = (EBP);
  /* 125764c8 pop ebp */
  EBP = (pop32());
  /* 125764c9 ret  */
  ESPCHK(0x12576410u, _esp0);
  ESP += 4; return;
}

/* FUN_100164d0 @ 0x125764d0 (804 bytes, 220 insns) */
void f_125764d0(void) {
  FTRACE(0x125764d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125764d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125764d1 mov ebp, esp */
  EBP = (ESP);
  /* 125764d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125764d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125764d9 push eax */
  push32((uint32_t)(EAX));
  /* 125764da call 0x12576e30 */
  push32(0x125764dfu); f_12576e30();
  /* 125764df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125764e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 125764e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 125764e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125764ea push ecx */
  push32((uint32_t)(ECX));
  /* 125764eb mov edx, dword ptr [0x12596c40] */
  EDX = (r32((uint32_t)(0x12596c40)));
  /* 125764f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125764f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125764f5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 125764fb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576501 push edx */
  push32((uint32_t)(EDX));
  /* 12576502 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12576505 push eax */
  push32((uint32_t)(EAX));
  /* 12576506 call dword ptr [0x12596c5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12596c5c))), 0x1257650cu);
  /* 1257650c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257650e jne 0x12576524 */
  if (!C.zf) goto L_12576524;
  /* 12576510 mov dword ptr [0x12596c54], 0 */
  w32((uint32_t)(0x12596c54), (0x0u));
  /* 1257651a mov eax, 1 */
  EAX = (0x1u);
  /* 1257651f jmp 0x125767ee */
  goto L_125767ee;
L_12576524:;
  /* 12576524 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12576527 push ecx */
  push32((uint32_t)(ECX));
  /* 12576528 mov edx, dword ptr [0x12596c50] */
  EDX = (r32((uint32_t)(0x12596c50)));
  /* 1257652e push edx */
  push32((uint32_t)(EDX));
  /* 1257652f call 0x12578a70 */
  push32(0x12576534u); f_12578a70();
  /* 12576534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576537 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576539 jne 0x1257665f */
  if (!C.zf) goto L_1257665f;
  /* 1257653f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12576541 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12576544 push eax */
  push32((uint32_t)(EAX));
  /* 12576545 mov ecx, dword ptr [0x12596c48] */
  ECX = (r32((uint32_t)(0x12596c48)));
  /* 1257654b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1257654d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1257654f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12576555 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1257655b push ecx */
  push32((uint32_t)(ECX));
  /* 1257655c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1257655f push edx */
  push32((uint32_t)(EDX));
  /* 12576560 call dword ptr [0x12596c5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12596c5c))), 0x12576566u);
  /* 12576566 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576568 jne 0x1257657e */
  if (!C.zf) goto L_1257657e;
  /* 1257656a mov dword ptr [0x12596c54], 0 */
  w32((uint32_t)(0x12596c54), (0x0u));
  /* 12576574 mov eax, 1 */
  EAX = (0x1u);
  /* 12576579 jmp 0x125767ee */
  goto L_125767ee;
L_1257657e:;
  /* 1257657e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12576581 push eax */
  push32((uint32_t)(EAX));
  /* 12576582 mov ecx, dword ptr [0x12596c4c] */
  ECX = (r32((uint32_t)(0x12596c4c)));
  /* 12576588 push ecx */
  push32((uint32_t)(ECX));
  /* 12576589 call 0x12578a70 */
  push32(0x1257658eu); f_12578a70();
  /* 1257658e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576591 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576593 jne 0x125765c0 */
  if (!C.zf) goto L_125765c0;
  /* 12576595 mov edx, dword ptr [0x12596c54] */
  EDX = (r32((uint32_t)(0x12596c54)));
  /* 1257659b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 125765a1 mov dword ptr [0x12596c54], edx */
  w32((uint32_t)(0x12596c54), (EDX));
  /* 125765a7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125765aa mov dword ptr [0x12596c58], eax */
  w32((uint32_t)(0x12596c58), (EAX));
  /* 125765af mov ecx, dword ptr [0x12596c58] */
  ECX = (r32((uint32_t)(0x12596c58)));
  /* 125765b5 mov dword ptr [0x12596c3c], ecx */
  w32((uint32_t)(0x12596c3c), (ECX));
  /* 125765bb jmp 0x1257665f */
  goto L_1257665f;
L_125765c0:;
  /* 125765c0 mov edx, dword ptr [0x12596c54] */
  EDX = (r32((uint32_t)(0x12596c54)));
  /* 125765c6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 125765c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125765cb jne 0x1257665f */
  if (!C.zf) goto L_1257665f;
  /* 125765d1 cmp dword ptr [0x12596c44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125765d8 je 0x1257662d */
  if (C.zf) goto L_1257662d;
  /* 125765da mov eax, dword ptr [0x12596c44] */
  EAX = (r32((uint32_t)(0x12596c44)));
  /* 125765df push eax */
  push32((uint32_t)(EAX));
  /* 125765e0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125765e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125765e4 mov edx, dword ptr [0x12596c4c] */
  EDX = (r32((uint32_t)(0x12596c4c)));
  /* 125765ea push edx */
  push32((uint32_t)(EDX));
  /* 125765eb call 0x12578b40 */
  push32(0x125765f0u); f_12578b40();
  /* 125765f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125765f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125765f5 jne 0x1257662d */
  if (!C.zf) goto L_1257662d;
  /* 125765f7 mov eax, dword ptr [0x12596c54] */
  EAX = (r32((uint32_t)(0x12596c54)));
  /* 125765fc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 125765fe mov dword ptr [0x12596c54], eax */
  w32((uint32_t)(0x12596c54), (EAX));
  /* 12576603 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12576606 mov dword ptr [0x12596c58], ecx */
  w32((uint32_t)(0x12596c58), (ECX));
  /* 1257660c mov edx, dword ptr [0x12596c4c] */
  EDX = (r32((uint32_t)(0x12596c4c)));
  /* 12576612 push edx */
  push32((uint32_t)(EDX));
  /* 12576613 call 0x1256d1d0 */
  push32(0x12576618u); f_1256d1d0();
  /* 12576618 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257661b cmp eax, dword ptr [0x12596c44] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12596c44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576621 jne 0x1257662b */
  if (!C.zf) goto L_1257662b;
  /* 12576623 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12576626 mov dword ptr [0x12596c3c], eax */
  w32((uint32_t)(0x12596c3c), (EAX));
L_1257662b:;
  /* 1257662b jmp 0x1257665f */
  goto L_1257665f;
L_1257662d:;
  /* 1257662d mov ecx, dword ptr [0x12596c54] */
  ECX = (r32((uint32_t)(0x12596c54)));
  /* 12576633 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12576636 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12576638 jne 0x1257665f */
  if (!C.zf) goto L_1257665f;
  /* 1257663a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1257663d push edx */
  push32((uint32_t)(EDX));
  /* 1257663e call 0x12576b70 */
  push32(0x12576643u); f_12576b70();
  /* 12576643 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576646 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576648 je 0x1257665f */
  if (C.zf) goto L_1257665f;
  /* 1257664a mov eax, dword ptr [0x12596c54] */
  EAX = (r32((uint32_t)(0x12596c54)));
  /* 1257664f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12576651 mov dword ptr [0x12596c54], eax */
  w32((uint32_t)(0x12596c54), (EAX));
  /* 12576656 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12576659 mov dword ptr [0x12596c58], ecx */
  w32((uint32_t)(0x12596c58), (ECX));
L_1257665f:;
  /* 1257665f mov edx, dword ptr [0x12596c54] */
  EDX = (r32((uint32_t)(0x12596c54)));
  /* 12576665 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1257666b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576671 je 0x125767e1 */
  if (C.zf) goto L_125767e1;
  /* 12576677 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12576679 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1257667c push eax */
  push32((uint32_t)(EAX));
  /* 1257667d mov ecx, dword ptr [0x12596c48] */
  ECX = (r32((uint32_t)(0x12596c48)));
  /* 12576683 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12576685 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576687 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1257668d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576693 push ecx */
  push32((uint32_t)(ECX));
  /* 12576694 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12576697 push edx */
  push32((uint32_t)(EDX));
  /* 12576698 call dword ptr [0x12596c5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12596c5c))), 0x1257669eu);
  /* 1257669e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125766a0 jne 0x125766b6 */
  if (!C.zf) goto L_125766b6;
  /* 125766a2 mov dword ptr [0x12596c54], 0 */
  w32((uint32_t)(0x12596c54), (0x0u));
  /* 125766ac mov eax, 1 */
  EAX = (0x1u);
  /* 125766b1 jmp 0x125767ee */
  goto L_125767ee;
L_125766b6:;
  /* 125766b6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 125766b9 push eax */
  push32((uint32_t)(EAX));
  /* 125766ba mov ecx, dword ptr [0x12596c4c] */
  ECX = (r32((uint32_t)(0x12596c4c)));
  /* 125766c0 push ecx */
  push32((uint32_t)(ECX));
  /* 125766c1 call 0x12578a70 */
  push32(0x125766c6u); f_12578a70();
  /* 125766c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125766c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125766cb jne 0x12576780 */
  if (!C.zf) goto L_12576780;
  /* 125766d1 mov edx, dword ptr [0x12596c54] */
  EDX = (r32((uint32_t)(0x12596c54)));
  /* 125766d7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 125766da mov dword ptr [0x12596c54], edx */
  w32((uint32_t)(0x12596c54), (EDX));
  /* 125766e0 cmp dword ptr [0x12596c48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125766e7 je 0x1257670a */
  if (C.zf) goto L_1257670a;
  /* 125766e9 mov eax, dword ptr [0x12596c54] */
  EAX = (r32((uint32_t)(0x12596c54)));
  /* 125766ee or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 125766f1 mov dword ptr [0x12596c54], eax */
  w32((uint32_t)(0x12596c54), (EAX));
  /* 125766f6 cmp dword ptr [0x12596c3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125766fd jne 0x12576708 */
  if (!C.zf) goto L_12576708;
  /* 125766ff mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12576702 mov dword ptr [0x12596c3c], ecx */
  w32((uint32_t)(0x12596c3c), (ECX));
L_12576708:;
  /* 12576708 jmp 0x1257677e */
  goto L_1257677e;
L_1257670a:;
  /* 1257670a cmp dword ptr [0x12596c44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576711 je 0x1257675f */
  if (C.zf) goto L_1257675f;
  /* 12576713 mov edx, dword ptr [0x12596c4c] */
  EDX = (r32((uint32_t)(0x12596c4c)));
  /* 12576719 push edx */
  push32((uint32_t)(EDX));
  /* 1257671a call 0x1256d1d0 */
  push32(0x1257671fu); f_1256d1d0();
  /* 1257671f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576722 cmp eax, dword ptr [0x12596c44] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12596c44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576728 jne 0x1257675f */
  if (!C.zf) goto L_1257675f;
  /* 1257672a push 1 */
  push32((uint32_t)(0x1u));
  /* 1257672c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1257672f push eax */
  push32((uint32_t)(EAX));
  /* 12576730 call 0x12576bc0 */
  push32(0x12576735u); f_12576bc0();
  /* 12576735 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576738 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257673a je 0x1257675d */
  if (C.zf) goto L_1257675d;
  /* 1257673c mov ecx, dword ptr [0x12596c54] */
  ECX = (r32((uint32_t)(0x12596c54)));
  /* 12576742 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12576745 mov dword ptr [0x12596c54], ecx */
  w32((uint32_t)(0x12596c54), (ECX));
  /* 1257674b cmp dword ptr [0x12596c3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576752 jne 0x1257675d */
  if (!C.zf) goto L_1257675d;
  /* 12576754 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12576757 mov dword ptr [0x12596c3c], edx */
  w32((uint32_t)(0x12596c3c), (EDX));
L_1257675d:;
  /* 1257675d jmp 0x1257677e */
  goto L_1257677e;
L_1257675f:;
  /* 1257675f mov eax, dword ptr [0x12596c54] */
  EAX = (r32((uint32_t)(0x12596c54)));
  /* 12576764 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12576767 mov dword ptr [0x12596c54], eax */
  w32((uint32_t)(0x12596c54), (EAX));
  /* 1257676c cmp dword ptr [0x12596c3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576773 jne 0x1257677e */
  if (!C.zf) goto L_1257677e;
  /* 12576775 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12576778 mov dword ptr [0x12596c3c], ecx */
  w32((uint32_t)(0x12596c3c), (ECX));
L_1257677e:;
  /* 1257677e jmp 0x125767e1 */
  goto L_125767e1;
L_12576780:;
  /* 12576780 cmp dword ptr [0x12596c48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576787 jne 0x125767e1 */
  if (!C.zf) goto L_125767e1;
  /* 12576789 cmp dword ptr [0x12596c44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576790 je 0x125767e1 */
  if (C.zf) goto L_125767e1;
  /* 12576792 mov edx, dword ptr [0x12596c44] */
  EDX = (r32((uint32_t)(0x12596c44)));
  /* 12576798 push edx */
  push32((uint32_t)(EDX));
  /* 12576799 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1257679c push eax */
  push32((uint32_t)(EAX));
  /* 1257679d mov ecx, dword ptr [0x12596c4c] */
  ECX = (r32((uint32_t)(0x12596c4c)));
  /* 125767a3 push ecx */
  push32((uint32_t)(ECX));
  /* 125767a4 call 0x12578b40 */
  push32(0x125767a9u); f_12578b40();
  /* 125767a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125767ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125767ae jne 0x125767e1 */
  if (!C.zf) goto L_125767e1;
  /* 125767b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125767b2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125767b5 push edx */
  push32((uint32_t)(EDX));
  /* 125767b6 call 0x12576bc0 */
  push32(0x125767bbu); f_12576bc0();
  /* 125767bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125767be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125767c0 je 0x125767e1 */
  if (C.zf) goto L_125767e1;
  /* 125767c2 mov eax, dword ptr [0x12596c54] */
  EAX = (r32((uint32_t)(0x12596c54)));
  /* 125767c7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 125767ca mov dword ptr [0x12596c54], eax */
  w32((uint32_t)(0x12596c54), (EAX));
  /* 125767cf cmp dword ptr [0x12596c3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125767d6 jne 0x125767e1 */
  if (!C.zf) goto L_125767e1;
  /* 125767d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125767db mov dword ptr [0x12596c3c], ecx */
  w32((uint32_t)(0x12596c3c), (ECX));
L_125767e1:;
  /* 125767e1 mov eax, dword ptr [0x12596c54] */
  EAX = (r32((uint32_t)(0x12596c54)));
  /* 125767e6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 125767e9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125767eb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125767ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_125767ee:;
  /* 125767ee mov esp, ebp */
  ESP = (EBP);
  /* 125767f0 pop ebp */
  EBP = (pop32());
  /* 125767f1 ret 4 */
  ESPCHK(0x125764d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10016800 @ 0x12576800 (116 bytes, 33 insns) */
void f_12576800(void) {
  FTRACE(0x12576800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576800 push ebp */
  push32((uint32_t)(EBP));
  /* 12576801 mov ebp, esp */
  EBP = (ESP);
  /* 12576803 push ecx */
  push32((uint32_t)(ECX));
  /* 12576804 mov eax, dword ptr [0x12596c4c] */
  EAX = (r32((uint32_t)(0x12596c4c)));
  /* 12576809 push eax */
  push32((uint32_t)(EAX));
  /* 1257680a call 0x1256d1d0 */
  push32(0x1257680fu); f_1256d1d0();
  /* 1257680f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576812 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12576814 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576817 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1257681a mov dword ptr [0x12596c48], ecx */
  w32((uint32_t)(0x12596c48), (ECX));
  /* 12576820 cmp dword ptr [0x12596c48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576827 je 0x12576832 */
  if (C.zf) goto L_12576832;
  /* 12576829 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12576830 jmp 0x12576844 */
  goto L_12576844;
L_12576832:;
  /* 12576832 mov edx, dword ptr [0x12596c4c] */
  EDX = (r32((uint32_t)(0x12596c4c)));
  /* 12576838 push edx */
  push32((uint32_t)(EDX));
  /* 12576839 call 0x12576eb0 */
  push32(0x1257683eu); f_12576eb0();
  /* 1257683e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576841 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12576844:;
  /* 12576844 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12576847 mov dword ptr [0x12596c44], eax */
  w32((uint32_t)(0x12596c44), (EAX));
  /* 1257684c push 1 */
  push32((uint32_t)(0x1u));
  /* 1257684e push 0x12576880 */
  push32((uint32_t)(0x12576880u));
  /* 12576853 call dword ptr [0x12599304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599304))), 0x12576859u);
  /* 12576859 mov ecx, dword ptr [0x12596c54] */
  ECX = (r32((uint32_t)(0x12596c54)));
  /* 1257685f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12576862 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12576864 jne 0x12576870 */
  if (!C.zf) goto L_12576870;
  /* 12576866 mov dword ptr [0x12596c54], 0 */
  w32((uint32_t)(0x12596c54), (0x0u));
L_12576870:;
  /* 12576870 mov esp, ebp */
  ESP = (EBP);
  /* 12576872 pop ebp */
  EBP = (pop32());
  /* 12576873 ret  */
  ESPCHK(0x12576800u, _esp0);
  ESP += 4; return;
}

/* FUN_10016880 @ 0x12576880 (287 bytes, 86 insns) */
void f_12576880(void) {
  FTRACE(0x12576880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576880 push ebp */
  push32((uint32_t)(EBP));
  /* 12576881 mov ebp, esp */
  EBP = (ESP);
  /* 12576883 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576886 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576889 push eax */
  push32((uint32_t)(EAX));
  /* 1257688a call 0x12576e30 */
  push32(0x1257688fu); f_12576e30();
  /* 1257688f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576892 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12576895 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12576897 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1257689a push ecx */
  push32((uint32_t)(ECX));
  /* 1257689b mov edx, dword ptr [0x12596c48] */
  EDX = (r32((uint32_t)(0x12596c48)));
  /* 125768a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125768a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125768a5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 125768ab add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125768b1 push edx */
  push32((uint32_t)(EDX));
  /* 125768b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125768b5 push eax */
  push32((uint32_t)(EAX));
  /* 125768b6 call dword ptr [0x12596c5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12596c5c))), 0x125768bcu);
  /* 125768bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125768be jne 0x125768d4 */
  if (!C.zf) goto L_125768d4;
  /* 125768c0 mov dword ptr [0x12596c54], 0 */
  w32((uint32_t)(0x12596c54), (0x0u));
  /* 125768ca mov eax, 1 */
  EAX = (0x1u);
  /* 125768cf jmp 0x12576999 */
  goto L_12576999;
L_125768d4:;
  /* 125768d4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125768d7 push ecx */
  push32((uint32_t)(ECX));
  /* 125768d8 mov edx, dword ptr [0x12596c4c] */
  EDX = (r32((uint32_t)(0x12596c4c)));
  /* 125768de push edx */
  push32((uint32_t)(EDX));
  /* 125768df call 0x12578a70 */
  push32(0x125768e4u); f_12578a70();
  /* 125768e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125768e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125768e9 jne 0x12576929 */
  if (!C.zf) goto L_12576929;
  /* 125768eb cmp dword ptr [0x12596c48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125768f2 jne 0x12576906 */
  if (!C.zf) goto L_12576906;
  /* 125768f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125768f6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125768f9 push eax */
  push32((uint32_t)(EAX));
  /* 125768fa call 0x12576bc0 */
  push32(0x125768ffu); f_12576bc0();
  /* 125768ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576902 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576904 je 0x12576927 */
  if (C.zf) goto L_12576927;
L_12576906:;
  /* 12576906 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12576909 mov dword ptr [0x12596c58], ecx */
  w32((uint32_t)(0x12596c58), (ECX));
  /* 1257690f mov edx, dword ptr [0x12596c58] */
  EDX = (r32((uint32_t)(0x12596c58)));
  /* 12576915 mov dword ptr [0x12596c3c], edx */
  w32((uint32_t)(0x12596c3c), (EDX));
  /* 1257691b mov eax, dword ptr [0x12596c54] */
  EAX = (r32((uint32_t)(0x12596c54)));
  /* 12576920 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12576922 mov dword ptr [0x12596c54], eax */
  w32((uint32_t)(0x12596c54), (EAX));
L_12576927:;
  /* 12576927 jmp 0x1257698c */
  goto L_1257698c;
L_12576929:;
  /* 12576929 cmp dword ptr [0x12596c48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576930 jne 0x1257698c */
  if (!C.zf) goto L_1257698c;
  /* 12576932 cmp dword ptr [0x12596c44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12596c44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576939 je 0x1257698c */
  if (C.zf) goto L_1257698c;
  /* 1257693b mov ecx, dword ptr [0x12596c44] */
  ECX = (r32((uint32_t)(0x12596c44)));
  /* 12576941 push ecx */
  push32((uint32_t)(ECX));
  /* 12576942 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12576945 push edx */
  push32((uint32_t)(EDX));
  /* 12576946 mov eax, dword ptr [0x12596c4c] */
  EAX = (r32((uint32_t)(0x12596c4c)));
  /* 1257694b push eax */
  push32((uint32_t)(EAX));
  /* 1257694c call 0x12578b40 */
  push32(0x12576951u); f_12578b40();
  /* 12576951 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576954 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576956 jne 0x1257698c */
  if (!C.zf) goto L_1257698c;
  /* 12576958 push 0 */
  push32((uint32_t)(0x0u));
  /* 1257695a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1257695d push ecx */
  push32((uint32_t)(ECX));
  /* 1257695e call 0x12576bc0 */
  push32(0x12576963u); f_12576bc0();
  /* 12576963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576966 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576968 je 0x1257698c */
  if (C.zf) goto L_1257698c;
  /* 1257696a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1257696d mov dword ptr [0x12596c58], edx */
  w32((uint32_t)(0x12596c58), (EDX));
  /* 12576973 mov eax, dword ptr [0x12596c58] */
  EAX = (r32((uint32_t)(0x12596c58)));
  /* 12576978 mov dword ptr [0x12596c3c], eax */
  w32((uint32_t)(0x12596c3c), (EAX));
  /* 1257697d mov ecx, dword ptr [0x12596c54] */
  ECX = (r32((uint32_t)(0x12596c54)));
  /* 12576983 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12576986 mov dword ptr [0x12596c54], ecx */
  w32((uint32_t)(0x12596c54), (ECX));
L_1257698c:;
  /* 1257698c mov eax, dword ptr [0x12596c54] */
  EAX = (r32((uint32_t)(0x12596c54)));
  /* 12576991 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12576994 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12576996 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576998 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12576999:;
  /* 12576999 mov esp, ebp */
  ESP = (EBP);
  /* 1257699b pop ebp */
  EBP = (pop32());
  /* 1257699c ret 4 */
  ESPCHK(0x12576880u, _esp0);
  ESP += 8; return;
}

/* FUN_100169a0 @ 0x125769a0 (69 bytes, 20 insns) */
void f_125769a0(void) {
  FTRACE(0x125769a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125769a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125769a1 mov ebp, esp */
  EBP = (ESP);
  /* 125769a3 mov eax, dword ptr [0x12596c50] */
  EAX = (r32((uint32_t)(0x12596c50)));
  /* 125769a8 push eax */
  push32((uint32_t)(EAX));
  /* 125769a9 call 0x1256d1d0 */
  push32(0x125769aeu); f_1256d1d0();
  /* 125769ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125769b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125769b3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125769b6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 125769b9 mov dword ptr [0x12596c40], ecx */
  w32((uint32_t)(0x12596c40), (ECX));
  /* 125769bf push 1 */
  push32((uint32_t)(0x1u));
  /* 125769c1 push 0x125769f0 */
  push32((uint32_t)(0x125769f0u));
  /* 125769c6 call dword ptr [0x12599304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12599304))), 0x125769ccu);
  /* 125769cc mov edx, dword ptr [0x12596c54] */
  EDX = (r32((uint32_t)(0x12596c54)));
  /* 125769d2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125769d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125769d7 jne 0x125769e3 */
  if (!C.zf) goto L_125769e3;
  /* 125769d9 mov dword ptr [0x12596c54], 0 */
  w32((uint32_t)(0x12596c54), (0x0u));
L_125769e3:;
  /* 125769e3 pop ebp */
  EBP = (pop32());
  /* 125769e4 ret  */
  ESPCHK(0x125769a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100169f0 @ 0x125769f0 (172 bytes, 54 insns) */
void f_125769f0(void) {
  FTRACE(0x125769f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125769f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125769f1 mov ebp, esp */
  EBP = (ESP);
  /* 125769f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125769f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125769f9 push eax */
  push32((uint32_t)(EAX));
  /* 125769fa call 0x12576e30 */
  push32(0x125769ffu); f_12576e30();
  /* 125769ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576a02 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12576a05 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12576a07 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12576a0a push ecx */
  push32((uint32_t)(ECX));
  /* 12576a0b mov edx, dword ptr [0x12596c40] */
  EDX = (r32((uint32_t)(0x12596c40)));
  /* 12576a11 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12576a13 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576a15 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12576a1b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576a21 push edx */
  push32((uint32_t)(EDX));
  /* 12576a22 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12576a25 push eax */
  push32((uint32_t)(EAX));
  /* 12576a26 call dword ptr [0x12596c5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12596c5c))), 0x12576a2cu);
  /* 12576a2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576a2e jne 0x12576a41 */
  if (!C.zf) goto L_12576a41;
  /* 12576a30 mov dword ptr [0x12596c54], 0 */
  w32((uint32_t)(0x12596c54), (0x0u));
  /* 12576a3a mov eax, 1 */
  EAX = (0x1u);
  /* 12576a3f jmp 0x12576a96 */
  goto L_12576a96;
L_12576a41:;
  /* 12576a41 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12576a44 push ecx */
  push32((uint32_t)(ECX));
  /* 12576a45 mov edx, dword ptr [0x12596c50] */
  EDX = (r32((uint32_t)(0x12596c50)));
  /* 12576a4b push edx */
  push32((uint32_t)(EDX));
  /* 12576a4c call 0x12578a70 */
  push32(0x12576a51u); f_12578a70();
  /* 12576a51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576a54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576a56 jne 0x12576a89 */
  if (!C.zf) goto L_12576a89;
  /* 12576a58 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12576a5b push eax */
  push32((uint32_t)(EAX));
  /* 12576a5c call 0x12576b70 */
  push32(0x12576a61u); f_12576b70();
  /* 12576a61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576a64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576a66 je 0x12576a89 */
  if (C.zf) goto L_12576a89;
  /* 12576a68 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12576a6b mov dword ptr [0x12596c58], ecx */
  w32((uint32_t)(0x12596c58), (ECX));
  /* 12576a71 mov edx, dword ptr [0x12596c58] */
  EDX = (r32((uint32_t)(0x12596c58)));
  /* 12576a77 mov dword ptr [0x12596c3c], edx */
  w32((uint32_t)(0x12596c3c), (EDX));
  /* 12576a7d mov eax, dword ptr [0x12596c54] */
  EAX = (r32((uint32_t)(0x12596c54)));
  /* 12576a82 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12576a84 mov dword ptr [0x12596c54], eax */
  w32((uint32_t)(0x12596c54), (EAX));
L_12576a89:;
  /* 12576a89 mov eax, dword ptr [0x12596c54] */
  EAX = (r32((uint32_t)(0x12596c54)));
  /* 12576a8e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12576a91 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12576a93 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576a95 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12576a96:;
  /* 12576a96 mov esp, ebp */
  ESP = (EBP);
  /* 12576a98 pop ebp */
  EBP = (pop32());
  /* 12576a99 ret 4 */
  ESPCHK(0x125769f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10016aa0 @ 0x12576aa0 (43 bytes, 11 insns) */
void f_12576aa0(void) {
  FTRACE(0x12576aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12576aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12576aa3 mov eax, dword ptr [0x12596c54] */
  EAX = (r32((uint32_t)(0x12596c54)));
  /* 12576aa8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12576aad mov dword ptr [0x12596c54], eax */
  w32((uint32_t)(0x12596c54), (EAX));
  /* 12576ab2 call dword ptr [0x125992f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992f4))), 0x12576ab8u);
  /* 12576ab8 mov dword ptr [0x12596c58], eax */
  w32((uint32_t)(0x12596c58), (EAX));
  /* 12576abd mov ecx, dword ptr [0x12596c58] */
  ECX = (r32((uint32_t)(0x12596c58)));
  /* 12576ac3 mov dword ptr [0x12596c3c], ecx */
  w32((uint32_t)(0x12596c3c), (ECX));
  /* 12576ac9 pop ebp */
  EBP = (pop32());
  /* 12576aca ret  */
  ESPCHK(0x12576aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ad0 @ 0x12576ad0 (155 bytes, 57 insns) */
void f_12576ad0(void) {
  FTRACE(0x12576ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12576ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12576ad3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576ad6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576ada je 0x12576afb */
  if (C.zf) goto L_12576afb;
  /* 12576adc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576adf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12576ae2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12576ae4 je 0x12576afb */
  if (C.zf) goto L_12576afb;
  /* 12576ae6 push 0x12592d94 */
  push32((uint32_t)(0x12592d94u));
  /* 12576aeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576aee push edx */
  push32((uint32_t)(EDX));
  /* 12576aef call 0x12576030 */
  push32(0x12576af4u); f_12576030();
  /* 12576af4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576af7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576af9 jne 0x12576b23 */
  if (!C.zf) goto L_12576b23;
L_12576afb:;
  /* 12576afb push 8 */
  push32((uint32_t)(0x8u));
  /* 12576afd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12576b00 push eax */
  push32((uint32_t)(EAX));
  /* 12576b01 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12576b06 mov ecx, dword ptr [0x12596c58] */
  ECX = (r32((uint32_t)(0x12596c58)));
  /* 12576b0c push ecx */
  push32((uint32_t)(ECX));
  /* 12576b0d call dword ptr [0x12596c5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12596c5c))), 0x12576b13u);
  /* 12576b13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576b15 jne 0x12576b1b */
  if (!C.zf) goto L_12576b1b;
  /* 12576b17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12576b19 jmp 0x12576b67 */
  goto L_12576b67;
L_12576b1b:;
  /* 12576b1b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12576b1e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12576b21 jmp 0x12576b5b */
  goto L_12576b5b;
L_12576b23:;
  /* 12576b23 push 0x12592d90 */
  push32((uint32_t)(0x12592d90u));
  /* 12576b28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576b2b push eax */
  push32((uint32_t)(EAX));
  /* 12576b2c call 0x12576030 */
  push32(0x12576b31u); f_12576030();
  /* 12576b31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576b34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576b36 jne 0x12576b5b */
  if (!C.zf) goto L_12576b5b;
  /* 12576b38 push 8 */
  push32((uint32_t)(0x8u));
  /* 12576b3a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12576b3d push ecx */
  push32((uint32_t)(ECX));
  /* 12576b3e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12576b40 mov edx, dword ptr [0x12596c58] */
  EDX = (r32((uint32_t)(0x12596c58)));
  /* 12576b46 push edx */
  push32((uint32_t)(EDX));
  /* 12576b47 call dword ptr [0x12596c5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12596c5c))), 0x12576b4du);
  /* 12576b4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576b4f jne 0x12576b55 */
  if (!C.zf) goto L_12576b55;
  /* 12576b51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12576b53 jmp 0x12576b67 */
  goto L_12576b67;
L_12576b55:;
  /* 12576b55 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12576b58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12576b5b:;
  /* 12576b5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576b5e push ecx */
  push32((uint32_t)(ECX));
  /* 12576b5f call 0x12578c50 */
  push32(0x12576b64u); f_12578c50();
  /* 12576b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12576b67:;
  /* 12576b67 mov esp, ebp */
  ESP = (EBP);
  /* 12576b69 pop ebp */
  EBP = (pop32());
  /* 12576b6a ret  */
  ESPCHK(0x12576ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b70 @ 0x12576b70 (79 bytes, 26 insns) */
void f_12576b70(void) {
  FTRACE(0x12576b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12576b71 mov ebp, esp */
  EBP = (ESP);
  /* 12576b73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576b76 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12576b7a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12576b7e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12576b85 jmp 0x12576b90 */
  goto L_12576b90;
L_12576b87:;
  /* 12576b87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12576b8a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576b8d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12576b90:;
  /* 12576b90 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576b94 jae 0x12576bb6 */
  if (!C.cf) goto L_12576bb6;
  /* 12576b96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12576b99 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12576b9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12576ba2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12576ba4 mov cx, word ptr [eax*2 + 0x125959c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x125959c4)));
  /* 12576bac cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576bae jne 0x12576bb4 */
  if (!C.zf) goto L_12576bb4;
  /* 12576bb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12576bb2 jmp 0x12576bbb */
  goto L_12576bbb;
L_12576bb4:;
  /* 12576bb4 jmp 0x12576b87 */
  goto L_12576b87;
L_12576bb6:;
  /* 12576bb6 mov eax, 1 */
  EAX = (0x1u);
L_12576bbb:;
  /* 12576bbb mov esp, ebp */
  ESP = (EBP);
  /* 12576bbd pop ebp */
  EBP = (pop32());
  /* 12576bbe ret  */
  ESPCHK(0x12576b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10016bc0 @ 0x12576bc0 (135 bytes, 48 insns) */
void f_12576bc0(void) {
  FTRACE(0x12576bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12576bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12576bc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576bc6 push esi */
  push32((uint32_t)(ESI));
  /* 12576bc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576bca and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12576bcf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12576bd4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12576bd9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12576bdc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12576be1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12576be4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12576be6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12576be9 push ecx */
  push32((uint32_t)(ECX));
  /* 12576bea push 1 */
  push32((uint32_t)(0x1u));
  /* 12576bec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12576bef push edx */
  push32((uint32_t)(EDX));
  /* 12576bf0 call dword ptr [0x12596c5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12596c5c))), 0x12576bf6u);
  /* 12576bf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576bf8 jne 0x12576bfe */
  if (!C.zf) goto L_12576bfe;
  /* 12576bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12576bfc jmp 0x12576c42 */
  goto L_12576c42;
L_12576bfe:;
  /* 12576bfe lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12576c01 push eax */
  push32((uint32_t)(EAX));
  /* 12576c02 call 0x12576e30 */
  push32(0x12576c07u); f_12576e30();
  /* 12576c07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576c0a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576c0d je 0x12576c3d */
  if (C.zf) goto L_12576c3d;
  /* 12576c0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576c13 je 0x12576c3d */
  if (C.zf) goto L_12576c3d;
  /* 12576c15 mov ecx, dword ptr [0x12596c4c] */
  ECX = (r32((uint32_t)(0x12596c4c)));
  /* 12576c1b push ecx */
  push32((uint32_t)(ECX));
  /* 12576c1c call 0x12576eb0 */
  push32(0x12576c21u); f_12576eb0();
  /* 12576c21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576c24 mov esi, eax */
  ESI = (EAX);
  /* 12576c26 mov edx, dword ptr [0x12596c4c] */
  EDX = (r32((uint32_t)(0x12596c4c)));
  /* 12576c2c push edx */
  push32((uint32_t)(EDX));
  /* 12576c2d call 0x1256d1d0 */
  push32(0x12576c32u); f_1256d1d0();
  /* 12576c32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576c35 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576c37 jne 0x12576c3d */
  if (!C.zf) goto L_12576c3d;
  /* 12576c39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12576c3b jmp 0x12576c42 */
  goto L_12576c42;
L_12576c3d:;
  /* 12576c3d mov eax, 1 */
  EAX = (0x1u);
L_12576c42:;
  /* 12576c42 pop esi */
  ESI = (pop32());
  /* 12576c43 mov esp, ebp */
  ESP = (EBP);
  /* 12576c45 pop ebp */
  EBP = (pop32());
  /* 12576c46 ret  */
  ESPCHK(0x12576bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016c50 @ 0x12576c50 (77 bytes, 18 insns) */
void f_12576c50(void) {
  FTRACE(0x12576c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12576c51 mov ebp, esp */
  EBP = (ESP);
  /* 12576c53 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576c59 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12576c63 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12576c69 push eax */
  push32((uint32_t)(EAX));
  /* 12576c6a call dword ptr [0x125992f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992f0))), 0x12576c70u);
  /* 12576c70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576c72 je 0x12576c89 */
  if (C.zf) goto L_12576c89;
  /* 12576c74 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576c7b jne 0x12576c89 */
  if (!C.zf) goto L_12576c89;
  /* 12576c7d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12576c87 jmp 0x12576c93 */
  goto L_12576c93;
L_12576c89:;
  /* 12576c89 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12576c93:;
  /* 12576c93 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12576c99 mov esp, ebp */
  ESP = (EBP);
  /* 12576c9b pop ebp */
  EBP = (pop32());
  /* 12576c9c ret  */
  ESPCHK(0x12576c50u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12576ca0 (388 bytes, 118 insns) */
void f_12576ca0(void) {
  FTRACE(0x12576ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12576ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12576ca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576ca6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12576cad mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12576cb4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12576cbb:;
  /* 12576cbb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12576cbe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576cc1 jg 0x12576e08 */
  if ((!C.zf&&C.sf==C.of)) goto L_12576e08;
  /* 12576cc7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12576cca add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576ccd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12576cce sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576cd0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12576cd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12576cd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12576cd8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12576cdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576cde cmp edx, dword ptr [ecx + 0x12595520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12595520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576ce4 jne 0x12576dde */
  if (!C.zf) goto L_12576dde;
  /* 12576cea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12576ced mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12576cf0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576cf4 ja 0x12576d17 */
  if ((!C.cf&&!C.zf)) goto L_12576d17;
  /* 12576cf6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576cfa je 0x12576d89 */
  if (C.zf) goto L_12576d89;
  /* 12576d00 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576d04 je 0x12576d34 */
  if (C.zf) goto L_12576d34;
  /* 12576d06 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576d0a je 0x12576d56 */
  if (C.zf) goto L_12576d56;
  /* 12576d0c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576d10 je 0x12576d78 */
  if (C.zf) goto L_12576d78;
  /* 12576d12 jmp 0x12576da8 */
  goto L_12576da8;
L_12576d17:;
  /* 12576d17 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576d1e je 0x12576d45 */
  if (C.zf) goto L_12576d45;
  /* 12576d20 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576d27 je 0x12576d67 */
  if (C.zf) goto L_12576d67;
  /* 12576d29 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576d30 je 0x12576d9a */
  if (C.zf) goto L_12576d9a;
  /* 12576d32 jmp 0x12576da8 */
  goto L_12576da8;
L_12576d34:;
  /* 12576d34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12576d37 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12576d3a add ecx, 0x12595524 */
  { uint32_t _a=(ECX),_b=(0x12595524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576d40 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12576d43 jmp 0x12576da8 */
  goto L_12576da8;
L_12576d45:;
  /* 12576d45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12576d48 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12576d4b mov eax, dword ptr [edx + 0x1259552c] */
  EAX = (r32((uint32_t)(EDX + 0x1259552c)));
  /* 12576d51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12576d54 jmp 0x12576da8 */
  goto L_12576da8;
L_12576d56:;
  /* 12576d56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12576d59 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12576d5c add ecx, 0x12595530 */
  { uint32_t _a=(ECX),_b=(0x12595530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576d62 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12576d65 jmp 0x12576da8 */
  goto L_12576da8;
L_12576d67:;
  /* 12576d67 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12576d6a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12576d6d mov eax, dword ptr [edx + 0x12595534] */
  EAX = (r32((uint32_t)(EDX + 0x12595534)));
  /* 12576d73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12576d76 jmp 0x12576da8 */
  goto L_12576da8;
L_12576d78:;
  /* 12576d78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12576d7b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12576d7e add ecx, 0x12595538 */
  { uint32_t _a=(ECX),_b=(0x12595538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576d84 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12576d87 jmp 0x12576da8 */
  goto L_12576da8;
L_12576d89:;
  /* 12576d89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12576d8c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12576d8f add edx, 0x1259553c */
  { uint32_t _a=(EDX),_b=(0x1259553cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576d95 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12576d98 jmp 0x12576da8 */
  goto L_12576da8;
L_12576d9a:;
  /* 12576d9a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12576d9d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12576da0 add eax, 0x12595544 */
  { uint32_t _a=(EAX),_b=(0x12595544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576da5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12576da8:;
  /* 12576da8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576dac je 0x12576db4 */
  if (C.zf) goto L_12576db4;
  /* 12576dae cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576db2 jge 0x12576db6 */
  if ((C.sf==C.of)) goto L_12576db6;
L_12576db4:;
  /* 12576db4 jmp 0x12576e08 */
  goto L_12576e08;
L_12576db6:;
  /* 12576db6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12576db9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576dbc push ecx */
  push32((uint32_t)(ECX));
  /* 12576dbd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12576dc0 push edx */
  push32((uint32_t)(EDX));
  /* 12576dc1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12576dc4 push eax */
  push32((uint32_t)(EAX));
  /* 12576dc5 call 0x1256dbc0 */
  push32(0x12576dcau); f_1256dbc0();
  /* 12576dca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576dcd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12576dd0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576dd3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12576dd7 mov eax, 1 */
  EAX = (0x1u);
  /* 12576ddc jmp 0x12576e1e */
  goto L_12576e1e;
L_12576dde:;
  /* 12576dde mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12576de1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12576de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576de7 cmp eax, dword ptr [edx + 0x12595520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12595520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576ded jae 0x12576dfa */
  if (!C.cf) goto L_12576dfa;
  /* 12576def mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12576df2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576df5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12576df8 jmp 0x12576e03 */
  goto L_12576e03;
L_12576dfa:;
  /* 12576dfa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12576dfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576e00 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12576e03:;
  /* 12576e03 jmp 0x12576cbb */
  goto L_12576cbb;
L_12576e08:;
  /* 12576e08 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12576e0b push eax */
  push32((uint32_t)(EAX));
  /* 12576e0c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12576e0f push ecx */
  push32((uint32_t)(ECX));
  /* 12576e10 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12576e13 push edx */
  push32((uint32_t)(EDX));
  /* 12576e14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576e17 push eax */
  push32((uint32_t)(EAX));
  /* 12576e18 call dword ptr [0x125992fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992fc))), 0x12576e1eu);
L_12576e1e:;
  /* 12576e1e mov esp, ebp */
  ESP = (EBP);
  /* 12576e20 pop ebp */
  EBP = (pop32());
  /* 12576e21 ret 0x10 */
  ESPCHK(0x12576ca0u, _esp0);
  ESP += 20; return;
}

/* FUN_10016e30 @ 0x12576e30 (118 bytes, 42 insns) */
void f_12576e30(void) {
  FTRACE(0x12576e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12576e31 mov ebp, esp */
  EBP = (ESP);
  /* 12576e33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576e36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12576e3d:;
  /* 12576e3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576e40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12576e42 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12576e45 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12576e49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576e4c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576e4f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12576e52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12576e54 je 0x12576e9f */
  if (C.zf) goto L_12576e9f;
  /* 12576e56 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12576e5a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576e5d jl 0x12576e72 */
  if ((C.sf!=C.of)) goto L_12576e72;
  /* 12576e5f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12576e63 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576e66 jg 0x12576e72 */
  if ((!C.zf&&C.sf==C.of)) goto L_12576e72;
  /* 12576e68 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12576e6b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12576e6d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12576e70 jmp 0x12576e8c */
  goto L_12576e8c;
L_12576e72:;
  /* 12576e72 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12576e76 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576e79 jl 0x12576e8c */
  if ((C.sf!=C.of)) goto L_12576e8c;
  /* 12576e7b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12576e7f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576e82 jg 0x12576e8c */
  if ((!C.zf&&C.sf==C.of)) goto L_12576e8c;
  /* 12576e84 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12576e87 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12576e89 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12576e8c:;
  /* 12576e8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12576e8f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12576e92 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12576e96 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12576e9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12576e9d jmp 0x12576e3d */
  goto L_12576e3d;
L_12576e9f:;
  /* 12576e9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12576ea2 mov esp, ebp */
  ESP = (EBP);
  /* 12576ea4 pop ebp */
  EBP = (pop32());
  /* 12576ea5 ret  */
  ESPCHK(0x12576e30u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12576eb0 (101 bytes, 36 insns) */
void f_12576eb0(void) {
  FTRACE(0x12576eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12576eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12576eb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12576eb6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12576ebd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576ec0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12576ec2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12576ec5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576ec8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576ecb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12576ece:;
  /* 12576ece movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12576ed2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576ed5 jl 0x12576ee0 */
  if ((C.sf!=C.of)) goto L_12576ee0;
  /* 12576ed7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12576edb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576ede jle 0x12576ef2 */
  if ((C.zf||C.sf!=C.of)) goto L_12576ef2;
L_12576ee0:;
  /* 12576ee0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12576ee4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576ee7 jl 0x12576f0e */
  if ((C.sf!=C.of)) goto L_12576f0e;
  /* 12576ee9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12576eed cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576ef0 jg 0x12576f0e */
  if ((!C.zf&&C.sf==C.of)) goto L_12576f0e;
L_12576ef2:;
  /* 12576ef2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12576ef5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576ef8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12576efb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576efe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12576f00 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12576f03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576f06 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12576f09 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12576f0c jmp 0x12576ece */
  goto L_12576ece;
L_12576f0e:;
  /* 12576f0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12576f11 mov esp, ebp */
  ESP = (EBP);
  /* 12576f13 pop ebp */
  EBP = (pop32());
  /* 12576f14 ret  */
  ESPCHK(0x12576eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f20 @ 0x12576f20 (122 bytes, 39 insns) */
void f_12576f20(void) {
  FTRACE(0x12576f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12576f21 mov ebp, esp */
  EBP = (ESP);
  /* 12576f23 push ecx */
  push32((uint32_t)(ECX));
  /* 12576f24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576f27 cmp eax, dword ptr [0x125984dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125984dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576f2d jae 0x12576f51 */
  if (!C.cf) goto L_12576f51;
  /* 12576f2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576f32 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12576f35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576f38 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12576f3b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12576f3e mov eax, dword ptr [ecx*4 + 0x125983a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x125983a0)));
  /* 12576f45 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12576f4a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12576f4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12576f4f jne 0x12576f6c */
  if (!C.zf) goto L_12576f6c;
L_12576f51:;
  /* 12576f51 call 0x12572270 */
  push32(0x12576f56u); f_12572270();
  /* 12576f56 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12576f5c call 0x12572280 */
  push32(0x12576f61u); f_12572280();
  /* 12576f61 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12576f67 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12576f6a jmp 0x12576f96 */
  goto L_12576f96;
L_12576f6c:;
  /* 12576f6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576f6f push edx */
  push32((uint32_t)(EDX));
  /* 12576f70 call 0x12573a90 */
  push32(0x12576f75u); f_12573a90();
  /* 12576f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576f78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576f7b push eax */
  push32((uint32_t)(EAX));
  /* 12576f7c call 0x12576fa0 */
  push32(0x12576f81u); f_12576fa0();
  /* 12576f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576f84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12576f87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576f8a push ecx */
  push32((uint32_t)(ECX));
  /* 12576f8b call 0x12573b20 */
  push32(0x12576f90u); f_12573b20();
  /* 12576f90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576f93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12576f96:;
  /* 12576f96 mov esp, ebp */
  ESP = (EBP);
  /* 12576f98 pop ebp */
  EBP = (pop32());
  /* 12576f99 ret  */
  ESPCHK(0x12576f20u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12576fa0 (170 bytes, 59 insns) */
void f_12576fa0(void) {
  FTRACE(0x12576fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12576fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12576fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12576fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12576fa4 push esi */
  push32((uint32_t)(ESI));
  /* 12576fa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576fa8 push eax */
  push32((uint32_t)(EAX));
  /* 12576fa9 call 0x12573910 */
  push32(0x12576faeu); f_12573910();
  /* 12576fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576fb1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576fb4 je 0x12576ff3 */
  if (C.zf) goto L_12576ff3;
  /* 12576fb6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576fba je 0x12576fc2 */
  if (C.zf) goto L_12576fc2;
  /* 12576fbc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576fc0 jne 0x12576fdc */
  if (!C.zf) goto L_12576fdc;
L_12576fc2:;
  /* 12576fc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12576fc4 call 0x12573910 */
  push32(0x12576fc9u); f_12573910();
  /* 12576fc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576fcc mov esi, eax */
  ESI = (EAX);
  /* 12576fce push 2 */
  push32((uint32_t)(0x2u));
  /* 12576fd0 call 0x12573910 */
  push32(0x12576fd5u); f_12573910();
  /* 12576fd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576fd8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12576fda je 0x12576ff3 */
  if (C.zf) goto L_12576ff3;
L_12576fdc:;
  /* 12576fdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12576fdf push ecx */
  push32((uint32_t)(ECX));
  /* 12576fe0 call 0x12573910 */
  push32(0x12576fe5u); f_12573910();
  /* 12576fe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12576fe8 push eax */
  push32((uint32_t)(EAX));
  /* 12576fe9 call dword ptr [0x125992f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125992f8))), 0x12576fefu);
  /* 12576fef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12576ff1 je 0x12576ffc */
  if (C.zf) goto L_12576ffc;
L_12576ff3:;
  /* 12576ff3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12576ffa jmp 0x12577005 */
  goto L_12577005;
L_12576ffc:;
  /* 12576ffc call dword ptr [0x125993e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125993e8))), 0x12577002u);
  /* 12577002 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12577005:;
  /* 12577005 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12577008 push edx */
  push32((uint32_t)(EDX));
  /* 12577009 call 0x12573830 */
  push32(0x1257700eu); f_12573830();
  /* 1257700e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577011 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12577014 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12577017 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1257701a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1257701d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12577020 mov edx, dword ptr [eax*4 + 0x125983a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125983a0)));
  /* 12577027 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1257702c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577030 je 0x12577043 */
  if (C.zf) goto L_12577043;
  /* 12577032 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12577035 push eax */
  push32((uint32_t)(EAX));
  /* 12577036 call 0x125721d0 */
  push32(0x1257703bu); f_125721d0();
  /* 1257703b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1257703e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12577041 jmp 0x12577045 */
  goto L_12577045;
L_12577043:;
  /* 12577043 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12577045:;
  /* 12577045 pop esi */
  ESI = (pop32());
  /* 12577046 mov esp, ebp */
  ESP = (EBP);
  /* 12577048 pop ebp */
  EBP = (pop32());
  /* 12577049 ret  */
  ESPCHK(0x12576fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017050 @ 0x12577050 (146 bytes, 52 insns) */
void f_12577050(void) {
  FTRACE(0x12577050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12577050 push ebp */
  push32((uint32_t)(EBP));
  /* 12577051 mov ebp, esp */
  EBP = (ESP);
  /* 12577053 push ebx */
  push32((uint32_t)(EBX));
  /* 12577054 push esi */
  push32((uint32_t)(ESI));
  /* 12577055 push edi */
  push32((uint32_t)(EDI));
L_12577056:;
  /* 12577056 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1257705a jne 0x1257707a */
  if (!C.zf) goto L_1257707a;
  /* 1257705c push 0x125926d0 */
  push32((uint32_t)(0x125926d0u));
  /* 12577061 push 0 */
  push32((uint32_t)(0x0u));
  /* 12577063 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12577065 push 0x12592d98 */
  push32((uint32_t)(0x12592d98u));
  /* 1257706a push 2 */
  push32((uint32_t)(0x2u));
  /* 1257706c call 0x12569460 */
  push32(0x12577071u); f_12569460();
  /* 12577071 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12577074 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12577077 jne 0x1257707a */
  if (!C.zf) goto L_1257707a;
  /* 12577079 int3  */
  x86_unimpl("int3 @ 0x12577079");
L_1257707a:;
  /* 1257707a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1257707c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1257707e jne 0x12577056 */
  if (!C.zf) goto L_12577056;
  /* 12577080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12577083 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12577086 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1257708c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1257708e je 0x125770dd */
  if (C.zf) goto L_125770dd;
  /* 12577090 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12577093 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12577096 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12577099 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1257709b je 0x125770dd */
  if (C.zf) goto L_125770dd;
  /* 1257709d push 2 */
  push32((uint32_t)(0x2u));
  /* 1257709f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125770a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125770a5 push eax */
  push32((uint32_t)(EAX));
  /* 125770a6 call 0x1256ae30 */
  push32(0x125770abu); f_1256ae30();
  /* 125770ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125770ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125770b1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125770b4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 125770ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125770bd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125770c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125770c3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 125770c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125770cc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 125770d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125770d6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_125770dd:;
  /* 125770dd pop edi */
  EDI = (pop32());
  /* 125770de pop esi */
  ESI = (pop32());
  /* 125770df pop ebx */
  EBX = (pop32());
  /* 125770e0 pop ebp */
  EBP = (pop32());
  /* 125770e1 ret  */
  ESPCHK(0x12577050u, _esp0);
  ESP += 4; return;
}

