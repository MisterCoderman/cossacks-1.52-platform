#include "recomp.h"

/* FUN_10012400 @ 0x103f2400 (289 bytes, 97 insns) */
void f_103f2400(void) {
  FTRACE(0x103f2400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f2400 push ebp */
  push32((uint32_t)(EBP));
  /* 103f2401 mov ebp, esp */
  EBP = (ESP);
  /* 103f2403 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f2406 push esi */
  push32((uint32_t)(ESI));
  /* 103f2407 mov eax, dword ptr [0x10410c98] */
  EAX = (r32((uint32_t)(0x10410c98)));
  /* 103f240c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f240f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103f2416 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103f241d jmp 0x103f2428 */
  goto L_103f2428;
L_103f241f:;
  /* 103f241f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f2422 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2425 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_103f2428:;
  /* 103f2428 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f242c jae 0x103f2461 */
  if (!C.cf) goto L_103f2461;
  /* 103f242e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f2431 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2434 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 103f2437 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2438 call 0x103e84e0 */
  push32(0x103f243du); f_103e84e0();
  /* 103f243d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2440 mov esi, eax */
  ESI = (EAX);
  /* 103f2442 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f2445 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2448 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 103f244c push ecx */
  push32((uint32_t)(ECX));
  /* 103f244d call 0x103e84e0 */
  push32(0x103f2452u); f_103e84e0();
  /* 103f2452 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2455 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2458 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 103f245c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103f245f jmp 0x103f241f */
  goto L_103f241f;
L_103f2461:;
  /* 103f2461 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f2464 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2467 push eax */
  push32((uint32_t)(EAX));
  /* 103f2468 call 0x103e5690 */
  push32(0x103f246du); f_103e5690();
  /* 103f246d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2470 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f2473 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2477 je 0x103f2519 */
  if (C.zf) goto L_103f2519;
  /* 103f247d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f2480 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103f2483 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103f248a jmp 0x103f2495 */
  goto L_103f2495;
L_103f248c:;
  /* 103f248c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f248f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2492 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103f2495:;
  /* 103f2495 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2499 jae 0x103f250a */
  if (!C.cf) goto L_103f250a;
  /* 103f249b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f249e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 103f24a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f24a4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f24a7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103f24aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f24ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f24b0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 103f24b3 push ecx */
  push32((uint32_t)(ECX));
  /* 103f24b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f24b7 push edx */
  push32((uint32_t)(EDX));
  /* 103f24b8 call 0x103e8660 */
  push32(0x103f24bdu); f_103e8660();
  /* 103f24bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f24c0 push eax */
  push32((uint32_t)(EAX));
  /* 103f24c1 call 0x103e84e0 */
  push32(0x103f24c6u); f_103e84e0();
  /* 103f24c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f24c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f24cc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f24ce mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103f24d1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f24d4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 103f24d7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f24da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f24dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103f24e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f24e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f24e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 103f24ea push eax */
  push32((uint32_t)(EAX));
  /* 103f24eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f24ee push ecx */
  push32((uint32_t)(ECX));
  /* 103f24ef call 0x103e8660 */
  push32(0x103f24f4u); f_103e8660();
  /* 103f24f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f24f7 push eax */
  push32((uint32_t)(EAX));
  /* 103f24f8 call 0x103e84e0 */
  push32(0x103f24fdu); f_103e84e0();
  /* 103f24fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2500 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2503 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2505 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103f2508 jmp 0x103f248c */
  goto L_103f248c;
L_103f250a:;
  /* 103f250a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f250d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 103f2510 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2513 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2516 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_103f2519:;
  /* 103f2519 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f251c pop esi */
  ESI = (pop32());
  /* 103f251d mov esp, ebp */
  ESP = (EBP);
  /* 103f251f pop ebp */
  EBP = (pop32());
  /* 103f2520 ret  */
  ESPCHK(0x103f2400u, _esp0);
  ESP += 4; return;
}

/* FUN_10012530 @ 0x103f2530 (291 bytes, 97 insns) */
void f_103f2530(void) {
  FTRACE(0x103f2530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f2530 push ebp */
  push32((uint32_t)(EBP));
  /* 103f2531 mov ebp, esp */
  EBP = (ESP);
  /* 103f2533 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f2536 push esi */
  push32((uint32_t)(ESI));
  /* 103f2537 mov eax, dword ptr [0x10410c98] */
  EAX = (r32((uint32_t)(0x10410c98)));
  /* 103f253c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f253f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103f2546 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103f254d jmp 0x103f2558 */
  goto L_103f2558;
L_103f254f:;
  /* 103f254f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f2552 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2555 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_103f2558:;
  /* 103f2558 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f255c jae 0x103f2592 */
  if (!C.cf) goto L_103f2592;
  /* 103f255e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f2561 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2564 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 103f2568 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2569 call 0x103e84e0 */
  push32(0x103f256eu); f_103e84e0();
  /* 103f256e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2571 mov esi, eax */
  ESI = (EAX);
  /* 103f2573 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f2576 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2579 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 103f257d push ecx */
  push32((uint32_t)(ECX));
  /* 103f257e call 0x103e84e0 */
  push32(0x103f2583u); f_103e84e0();
  /* 103f2583 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2586 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2589 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 103f258d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103f2590 jmp 0x103f254f */
  goto L_103f254f;
L_103f2592:;
  /* 103f2592 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f2595 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2598 push eax */
  push32((uint32_t)(EAX));
  /* 103f2599 call 0x103e5690 */
  push32(0x103f259eu); f_103e5690();
  /* 103f259e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f25a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f25a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f25a8 je 0x103f264b */
  if (C.zf) goto L_103f264b;
  /* 103f25ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f25b1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103f25b4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103f25bb jmp 0x103f25c6 */
  goto L_103f25c6;
L_103f25bd:;
  /* 103f25bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f25c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f25c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103f25c6:;
  /* 103f25c6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f25ca jae 0x103f263c */
  if (!C.cf) goto L_103f263c;
  /* 103f25cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f25cf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 103f25d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f25d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f25d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103f25db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f25de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f25e1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 103f25e5 push ecx */
  push32((uint32_t)(ECX));
  /* 103f25e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f25e9 push edx */
  push32((uint32_t)(EDX));
  /* 103f25ea call 0x103e8660 */
  push32(0x103f25efu); f_103e8660();
  /* 103f25ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f25f2 push eax */
  push32((uint32_t)(EAX));
  /* 103f25f3 call 0x103e84e0 */
  push32(0x103f25f8u); f_103e84e0();
  /* 103f25f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f25fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f25fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2600 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103f2603 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2606 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 103f2609 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f260c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f260f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103f2612 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f2615 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2618 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 103f261c push eax */
  push32((uint32_t)(EAX));
  /* 103f261d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2620 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2621 call 0x103e8660 */
  push32(0x103f2626u); f_103e8660();
  /* 103f2626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2629 push eax */
  push32((uint32_t)(EAX));
  /* 103f262a call 0x103e84e0 */
  push32(0x103f262fu); f_103e84e0();
  /* 103f262f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2632 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2635 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2637 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103f263a jmp 0x103f25bd */
  goto L_103f25bd;
L_103f263c:;
  /* 103f263c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f263f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 103f2642 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2645 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2648 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_103f264b:;
  /* 103f264b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f264e pop esi */
  ESI = (pop32());
  /* 103f264f mov esp, ebp */
  ESP = (EBP);
  /* 103f2651 pop ebp */
  EBP = (pop32());
  /* 103f2652 ret  */
  ESPCHK(0x103f2530u, _esp0);
  ESP += 4; return;
}

/* FUN_10012660 @ 0x103f2660 (878 bytes, 273 insns) */
void f_103f2660(void) {
  FTRACE(0x103f2660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f2660 push ebp */
  push32((uint32_t)(EBP));
  /* 103f2661 mov ebp, esp */
  EBP = (ESP);
  /* 103f2663 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f2666 push esi */
  push32((uint32_t)(ESI));
  /* 103f2667 mov eax, dword ptr [0x10410c98] */
  EAX = (r32((uint32_t)(0x10410c98)));
  /* 103f266c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f266f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103f2676 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103f267d jmp 0x103f2688 */
  goto L_103f2688;
L_103f267f:;
  /* 103f267f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f2682 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2685 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_103f2688:;
  /* 103f2688 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f268c jae 0x103f26c1 */
  if (!C.cf) goto L_103f26c1;
  /* 103f268e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f2691 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2694 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 103f2697 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2698 call 0x103e84e0 */
  push32(0x103f269du); f_103e84e0();
  /* 103f269d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f26a0 mov esi, eax */
  ESI = (EAX);
  /* 103f26a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f26a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f26a8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 103f26ac push ecx */
  push32((uint32_t)(ECX));
  /* 103f26ad call 0x103e84e0 */
  push32(0x103f26b2u); f_103e84e0();
  /* 103f26b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f26b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f26b8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 103f26bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103f26bf jmp 0x103f267f */
  goto L_103f267f;
L_103f26c1:;
  /* 103f26c1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103f26c8 jmp 0x103f26d3 */
  goto L_103f26d3;
L_103f26ca:;
  /* 103f26ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f26cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f26d0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_103f26d3:;
  /* 103f26d3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f26d7 jae 0x103f270d */
  if (!C.cf) goto L_103f270d;
  /* 103f26d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f26dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f26df mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 103f26e3 push eax */
  push32((uint32_t)(EAX));
  /* 103f26e4 call 0x103e84e0 */
  push32(0x103f26e9u); f_103e84e0();
  /* 103f26e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f26ec mov esi, eax */
  ESI = (EAX);
  /* 103f26ee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f26f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f26f4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 103f26f8 push eax */
  push32((uint32_t)(EAX));
  /* 103f26f9 call 0x103e84e0 */
  push32(0x103f26feu); f_103e84e0();
  /* 103f26fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2701 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2704 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 103f2708 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f270b jmp 0x103f26ca */
  goto L_103f26ca;
L_103f270d:;
  /* 103f270d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2710 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 103f2716 push eax */
  push32((uint32_t)(EAX));
  /* 103f2717 call 0x103e84e0 */
  push32(0x103f271cu); f_103e84e0();
  /* 103f271c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f271f mov esi, eax */
  ESI = (EAX);
  /* 103f2721 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2724 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 103f272a push edx */
  push32((uint32_t)(EDX));
  /* 103f272b call 0x103e84e0 */
  push32(0x103f2730u); f_103e84e0();
  /* 103f2730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2733 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2736 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 103f273a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f273d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2740 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 103f2746 push edx */
  push32((uint32_t)(EDX));
  /* 103f2747 call 0x103e84e0 */
  push32(0x103f274cu); f_103e84e0();
  /* 103f274c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f274f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f2752 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 103f2756 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103f2759 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f275c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 103f2762 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2763 call 0x103e84e0 */
  push32(0x103f2768u); f_103e84e0();
  /* 103f2768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f276b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f276e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 103f2772 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f2775 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2778 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 103f277e push edx */
  push32((uint32_t)(EDX));
  /* 103f277f call 0x103e84e0 */
  push32(0x103f2784u); f_103e84e0();
  /* 103f2784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2787 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f278a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 103f278e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103f2791 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f2794 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2799 push eax */
  push32((uint32_t)(EAX));
  /* 103f279a call 0x103e5690 */
  push32(0x103f279fu); f_103e5690();
  /* 103f279f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f27a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f27a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f27a9 je 0x103f29c6 */
  if (C.zf) goto L_103f29c6;
  /* 103f27af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f27b2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103f27b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f27b8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f27be mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103f27c1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 103f27c6 mov eax, dword ptr [0x10410c98] */
  EAX = (r32((uint32_t)(0x10410c98)));
  /* 103f27cb push eax */
  push32((uint32_t)(EAX));
  /* 103f27cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f27cf push ecx */
  push32((uint32_t)(ECX));
  /* 103f27d0 call 0x103ebf90 */
  push32(0x103f27d5u); f_103ebf90();
  /* 103f27d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f27d8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103f27df jmp 0x103f27ea */
  goto L_103f27ea;
L_103f27e1:;
  /* 103f27e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f27e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f27e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103f27ea:;
  /* 103f27ea cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f27ee jae 0x103f285e */
  if (!C.cf) goto L_103f285e;
  /* 103f27f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f27f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f27f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f27f9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 103f27fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f27ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2802 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 103f2805 push edx */
  push32((uint32_t)(EDX));
  /* 103f2806 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2809 push eax */
  push32((uint32_t)(EAX));
  /* 103f280a call 0x103e8660 */
  push32(0x103f280fu); f_103e8660();
  /* 103f280f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2812 push eax */
  push32((uint32_t)(EAX));
  /* 103f2813 call 0x103e84e0 */
  push32(0x103f2818u); f_103e84e0();
  /* 103f2818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f281b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f281e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 103f2822 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103f2825 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f2828 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f282b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f282e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 103f2832 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f2835 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2838 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 103f283c push edx */
  push32((uint32_t)(EDX));
  /* 103f283d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2840 push eax */
  push32((uint32_t)(EAX));
  /* 103f2841 call 0x103e8660 */
  push32(0x103f2846u); f_103e8660();
  /* 103f2846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2849 push eax */
  push32((uint32_t)(EAX));
  /* 103f284a call 0x103e84e0 */
  push32(0x103f284fu); f_103e84e0();
  /* 103f284f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2852 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2855 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 103f2859 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103f285c jmp 0x103f27e1 */
  goto L_103f27e1;
L_103f285e:;
  /* 103f285e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103f2865 jmp 0x103f2870 */
  goto L_103f2870;
L_103f2867:;
  /* 103f2867 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f286a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f286d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_103f2870:;
  /* 103f2870 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2874 jae 0x103f28e6 */
  if (!C.cf) goto L_103f28e6;
  /* 103f2876 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f2879 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f287c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f287f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 103f2883 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f2886 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2889 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 103f288d push eax */
  push32((uint32_t)(EAX));
  /* 103f288e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2891 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2892 call 0x103e8660 */
  push32(0x103f2897u); f_103e8660();
  /* 103f2897 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f289a push eax */
  push32((uint32_t)(EAX));
  /* 103f289b call 0x103e84e0 */
  push32(0x103f28a0u); f_103e84e0();
  /* 103f28a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f28a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f28a6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 103f28aa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103f28ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f28b0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f28b3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f28b6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 103f28ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f28bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f28c0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 103f28c4 push eax */
  push32((uint32_t)(EAX));
  /* 103f28c5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f28c8 push ecx */
  push32((uint32_t)(ECX));
  /* 103f28c9 call 0x103e8660 */
  push32(0x103f28ceu); f_103e8660();
  /* 103f28ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f28d1 push eax */
  push32((uint32_t)(EAX));
  /* 103f28d2 call 0x103e84e0 */
  push32(0x103f28d7u); f_103e84e0();
  /* 103f28d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f28da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f28dd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 103f28e1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103f28e4 jmp 0x103f2867 */
  goto L_103f2867;
L_103f28e6:;
  /* 103f28e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f28e9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f28ec mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 103f28f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f28f5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 103f28fb push ecx */
  push32((uint32_t)(ECX));
  /* 103f28fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f28ff push edx */
  push32((uint32_t)(EDX));
  /* 103f2900 call 0x103e8660 */
  push32(0x103f2905u); f_103e8660();
  /* 103f2905 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2908 push eax */
  push32((uint32_t)(EAX));
  /* 103f2909 call 0x103e84e0 */
  push32(0x103f290eu); f_103e84e0();
  /* 103f290e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2911 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2914 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 103f2918 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103f291b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f291e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2921 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 103f2927 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f292a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 103f2930 push eax */
  push32((uint32_t)(EAX));
  /* 103f2931 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2934 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2935 call 0x103e8660 */
  push32(0x103f293au); f_103e8660();
  /* 103f293a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f293d push eax */
  push32((uint32_t)(EAX));
  /* 103f293e call 0x103e84e0 */
  push32(0x103f2943u); f_103e84e0();
  /* 103f2943 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2946 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2949 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 103f294d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103f2950 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f2953 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2956 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 103f295c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f295f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 103f2965 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2966 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f2969 push edx */
  push32((uint32_t)(EDX));
  /* 103f296a call 0x103e8660 */
  push32(0x103f296fu); f_103e8660();
  /* 103f296f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2972 push eax */
  push32((uint32_t)(EAX));
  /* 103f2973 call 0x103e84e0 */
  push32(0x103f2978u); f_103e84e0();
  /* 103f2978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f297b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f297e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 103f2982 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103f2985 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f2988 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f298b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 103f2991 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2994 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 103f299a push eax */
  push32((uint32_t)(EAX));
  /* 103f299b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f299e push ecx */
  push32((uint32_t)(ECX));
  /* 103f299f call 0x103e8660 */
  push32(0x103f29a4u); f_103e8660();
  /* 103f29a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f29a7 push eax */
  push32((uint32_t)(EAX));
  /* 103f29a8 call 0x103e84e0 */
  push32(0x103f29adu); f_103e84e0();
  /* 103f29ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f29b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f29b3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 103f29b7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103f29ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f29bd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f29c0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_103f29c6:;
  /* 103f29c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f29c9 pop esi */
  ESI = (pop32());
  /* 103f29ca mov esp, ebp */
  ESP = (EBP);
  /* 103f29cc pop ebp */
  EBP = (pop32());
  /* 103f29cd ret  */
  ESPCHK(0x103f2660u, _esp0);
  ESP += 4; return;
}

/* FUN_100129d0 @ 0x103f29d0 (31 bytes, 15 insns) */
void f_103f29d0(void) {
  FTRACE(0x103f29d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f29d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f29d1 mov ebp, esp */
  EBP = (ESP);
  /* 103f29d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f29d5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f29d8 push eax */
  push32((uint32_t)(EAX));
  /* 103f29d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f29dc push ecx */
  push32((uint32_t)(ECX));
  /* 103f29dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f29e0 push edx */
  push32((uint32_t)(EDX));
  /* 103f29e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f29e4 push eax */
  push32((uint32_t)(EAX));
  /* 103f29e5 call 0x103f29f0 */
  push32(0x103f29eau); f_103f29f0();
  /* 103f29ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f29ed pop ebp */
  EBP = (pop32());
  /* 103f29ee ret  */
  ESPCHK(0x103f29d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100129f0 @ 0x103f29f0 (393 bytes, 123 insns) */
void f_103f29f0(void) {
  FTRACE(0x103f29f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f29f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f29f1 mov ebp, esp */
  EBP = (ESP);
  /* 103f29f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f29f6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f29fa jne 0x103f2a06 */
  if (!C.zf) goto L_103f2a06;
  /* 103f29fc mov eax, dword ptr [0x10410c98] */
  EAX = (r32((uint32_t)(0x10410c98)));
  /* 103f2a01 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103f2a04 jmp 0x103f2a0c */
  goto L_103f2a0c;
L_103f2a06:;
  /* 103f2a06 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2a09 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_103f2a0c:;
  /* 103f2a0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f2a0f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103f2a12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2a15 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f2a18 push 0x10411a04 */
  push32((uint32_t)(0x10411a04u));
  /* 103f2a1d call dword ptr [0x10414390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414390))), 0x103f2a23u);
  /* 103f2a23 cmp dword ptr [0x104119f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2a2a je 0x103f2a4a */
  if (C.zf) goto L_103f2a4a;
  /* 103f2a2c push 0x10411a04 */
  push32((uint32_t)(0x10411a04u));
  /* 103f2a31 call dword ptr [0x10414380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414380))), 0x103f2a37u);
  /* 103f2a37 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103f2a39 call 0x103e90b0 */
  push32(0x103f2a3eu); f_103e90b0();
  /* 103f2a3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2a41 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 103f2a48 jmp 0x103f2a51 */
  goto L_103f2a51;
L_103f2a4a:;
  /* 103f2a4a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_103f2a51:;
  /* 103f2a51 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2a55 jbe 0x103f2b42 */
  if ((C.cf||C.zf)) goto L_103f2b42;
  /* 103f2a5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2a5e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103f2a60 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 103f2a63 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f2a67 je 0x103f2a71 */
  if (C.zf) goto L_103f2a71;
  /* 103f2a69 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f2a6d je 0x103f2a76 */
  if (C.zf) goto L_103f2a76;
  /* 103f2a6f jmp 0x103f2ad0 */
  goto L_103f2ad0;
L_103f2a71:;
  /* 103f2a71 jmp 0x103f2b42 */
  goto L_103f2b42;
L_103f2a76:;
  /* 103f2a76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2a79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2a7c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 103f2a7f mov dword ptr [0x104119e0], 0 */
  w32((uint32_t)(0x104119e0), (0x0u));
  /* 103f2a89 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2a8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103f2a8f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2a92 jne 0x103f2aa7 */
  if (!C.zf) goto L_103f2aa7;
  /* 103f2a94 mov dword ptr [0x104119e0], 1 */
  w32((uint32_t)(0x104119e0), (0x1u));
  /* 103f2a9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2aa1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2aa4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_103f2aa7:;
  /* 103f2aa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f2aaa push ecx */
  push32((uint32_t)(ECX));
  /* 103f2aab lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 103f2aae push edx */
  push32((uint32_t)(EDX));
  /* 103f2aaf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 103f2ab2 push eax */
  push32((uint32_t)(EAX));
  /* 103f2ab3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2ab7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2aba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f2abc push eax */
  push32((uint32_t)(EAX));
  /* 103f2abd call 0x103f2b80 */
  push32(0x103f2ac2u); f_103f2b80();
  /* 103f2ac2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2ac5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2ac8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2acb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 103f2ace jmp 0x103f2b3d */
  goto L_103f2b3d;
L_103f2ad0:;
  /* 103f2ad0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2ad3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f2ad5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f2ad7 mov ecx, dword ptr [0x1040fc98] */
  ECX = (r32((uint32_t)(0x1040fc98)));
  /* 103f2add xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f2adf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103f2ae3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 103f2ae9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f2aeb je 0x103f2b18 */
  if (C.zf) goto L_103f2b18;
  /* 103f2aed cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2af1 jbe 0x103f2b18 */
  if ((C.cf||C.zf)) goto L_103f2b18;
  /* 103f2af3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f2af6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2af9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103f2afb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103f2afd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f2b00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2b03 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f2b06 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2b09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2b0c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 103f2b0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2b12 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f2b15 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_103f2b18:;
  /* 103f2b18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f2b1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2b1e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103f2b20 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103f2b22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f2b25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2b28 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f2b2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2b2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2b31 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 103f2b34 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2b37 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f2b3a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_103f2b3d:;
  /* 103f2b3d jmp 0x103f2a51 */
  goto L_103f2a51;
L_103f2b42:;
  /* 103f2b42 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2b46 je 0x103f2b54 */
  if (C.zf) goto L_103f2b54;
  /* 103f2b48 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103f2b4a call 0x103e9150 */
  push32(0x103f2b4fu); f_103e9150();
  /* 103f2b4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2b52 jmp 0x103f2b5f */
  goto L_103f2b5f;
L_103f2b54:;
  /* 103f2b54 push 0x10411a04 */
  push32((uint32_t)(0x10411a04u));
  /* 103f2b59 call dword ptr [0x10414380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414380))), 0x103f2b5fu);
L_103f2b5f:;
  /* 103f2b5f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2b63 jbe 0x103f2b73 */
  if ((C.cf||C.zf)) goto L_103f2b73;
  /* 103f2b65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f2b68 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 103f2b6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2b6e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f2b71 jmp 0x103f2b75 */
  goto L_103f2b75;
L_103f2b73:;
  /* 103f2b73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103f2b75:;
  /* 103f2b75 mov esp, ebp */
  ESP = (EBP);
  /* 103f2b77 pop ebp */
  EBP = (pop32());
  /* 103f2b78 ret  */
  ESPCHK(0x103f29f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b80 @ 0x103f2b80 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_103f2b80(void) {
  FTRACE(0x103f2b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f2b80 push ebp */
  push32((uint32_t)(EBP));
  /* 103f2b81 mov ebp, esp */
  EBP = (ESP);
  /* 103f2b83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f2b86 push esi */
  push32((uint32_t)(ESI));
  /* 103f2b87 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 103f2b8b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f2b8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2b91 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f2b94 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f2b97 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2b9b ja 0x103f30e8 */
  if ((!C.cf&&!C.zf)) goto L_103f30e8;
  /* 103f2ba1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f2ba4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f2ba6 mov dl, byte ptr [eax + 0x103f3149] */
  DL = (r8((uint32_t)(EAX + 0x103f3149)));
  /* 103f2bac jmp dword ptr [edx*4 + 0x103f30ed] */
  switch (EDX) {
    case 0: goto L_103f30c6;
    case 1: goto L_103f2bd5;
    case 2: goto L_103f2c1b;
    case 3: goto L_103f2d68;
    case 4: goto L_103f2d90;
    case 5: goto L_103f2e2f;
    case 6: goto L_103f2e9b;
    case 7: goto L_103f2ec4;
    case 8: goto L_103f2f05;
    case 9: goto L_103f2fe7;
    case 10: goto L_103f304e;
    case 11: goto L_103f309b;
    case 12: goto L_103f2bb3;
    case 13: goto L_103f2bf8;
    case 14: goto L_103f2c3e;
    case 15: goto L_103f2d3e;
    case 16: goto L_103f2dd5;
    case 17: goto L_103f2e02;
    case 18: goto L_103f2e57;
    case 19: goto L_103f2edb;
    case 20: goto L_103f2f89;
    case 21: goto L_103f3018;
    case 22: goto L_103f30e8;
    default: x86_unimpl("switch@0x103f2bac out of table"); return;
  }
L_103f2bb3:;
  /* 103f2bb3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2bb6 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2bb7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2bba push edx */
  push32((uint32_t)(EDX));
  /* 103f2bbb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2bbe mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 103f2bc1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2bc4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 103f2bc7 push eax */
  push32((uint32_t)(EAX));
  /* 103f2bc8 call 0x103f31a0 */
  push32(0x103f2bcdu); f_103f31a0();
  /* 103f2bcd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2bd0 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2bd5:;
  /* 103f2bd5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2bd8 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2bd9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2bdc push edx */
  push32((uint32_t)(EDX));
  /* 103f2bdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2be0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 103f2be3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2be6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 103f2bea push eax */
  push32((uint32_t)(EAX));
  /* 103f2beb call 0x103f31a0 */
  push32(0x103f2bf0u); f_103f31a0();
  /* 103f2bf0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2bf3 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2bf8:;
  /* 103f2bf8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2bfb push ecx */
  push32((uint32_t)(ECX));
  /* 103f2bfc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2bff push edx */
  push32((uint32_t)(EDX));
  /* 103f2c00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2c03 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103f2c06 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2c09 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 103f2c0d push eax */
  push32((uint32_t)(EAX));
  /* 103f2c0e call 0x103f31a0 */
  push32(0x103f2c13u); f_103f31a0();
  /* 103f2c13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2c16 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2c1b:;
  /* 103f2c1b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2c1e push ecx */
  push32((uint32_t)(ECX));
  /* 103f2c1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2c22 push edx */
  push32((uint32_t)(EDX));
  /* 103f2c23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2c26 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103f2c29 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2c2c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 103f2c30 push eax */
  push32((uint32_t)(EAX));
  /* 103f2c31 call 0x103f31a0 */
  push32(0x103f2c36u); f_103f31a0();
  /* 103f2c36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2c39 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2c3e:;
  /* 103f2c3e cmp dword ptr [0x104119e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2c45 je 0x103f2cc6 */
  if (C.zf) goto L_103f2cc6;
  /* 103f2c47 mov dword ptr [0x104119e0], 0 */
  w32((uint32_t)(0x104119e0), (0x0u));
  /* 103f2c51 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2c54 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2c55 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2c58 push edx */
  push32((uint32_t)(EDX));
  /* 103f2c59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2c5c push eax */
  push32((uint32_t)(EAX));
  /* 103f2c5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2c60 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2c61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2c64 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 103f2c6a push eax */
  push32((uint32_t)(EAX));
  /* 103f2c6b call 0x103f3350 */
  push32(0x103f2c70u); f_103f3350();
  /* 103f2c70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2c73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2c76 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2c79 jne 0x103f2c80 */
  if (!C.zf) goto L_103f2c80;
  /* 103f2c7b jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2c80:;
  /* 103f2c80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2c83 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f2c85 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 103f2c88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2c8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f2c8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2c90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2c93 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103f2c95 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2c98 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f2c9a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f2c9d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2ca0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103f2ca2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2ca6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2ca9 push edx */
  push32((uint32_t)(EDX));
  /* 103f2caa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2cad push eax */
  push32((uint32_t)(EAX));
  /* 103f2cae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2cb1 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2cb2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2cb5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 103f2cbb push eax */
  push32((uint32_t)(EAX));
  /* 103f2cbc call 0x103f3350 */
  push32(0x103f2cc1u); f_103f3350();
  /* 103f2cc1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2cc4 jmp 0x103f2d39 */
  goto L_103f2d39;
L_103f2cc6:;
  /* 103f2cc6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2cca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2ccd push edx */
  push32((uint32_t)(EDX));
  /* 103f2cce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2cd1 push eax */
  push32((uint32_t)(EAX));
  /* 103f2cd2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2cd5 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2cd6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2cd9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 103f2cdf push eax */
  push32((uint32_t)(EAX));
  /* 103f2ce0 call 0x103f3350 */
  push32(0x103f2ce5u); f_103f3350();
  /* 103f2ce5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2ce8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2ceb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2cee jne 0x103f2cf5 */
  if (!C.zf) goto L_103f2cf5;
  /* 103f2cf0 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2cf5:;
  /* 103f2cf5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2cf8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f2cfa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 103f2cfd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2d00 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f2d02 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2d05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2d08 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103f2d0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2d0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f2d0f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f2d12 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2d15 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103f2d17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2d1a push ecx */
  push32((uint32_t)(ECX));
  /* 103f2d1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2d1e push edx */
  push32((uint32_t)(EDX));
  /* 103f2d1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2d22 push eax */
  push32((uint32_t)(EAX));
  /* 103f2d23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2d26 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2d27 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2d2a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 103f2d30 push eax */
  push32((uint32_t)(EAX));
  /* 103f2d31 call 0x103f3350 */
  push32(0x103f2d36u); f_103f3350();
  /* 103f2d36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f2d39:;
  /* 103f2d39 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2d3e:;
  /* 103f2d3e mov ecx, dword ptr [0x104119e0] */
  ECX = (r32((uint32_t)(0x104119e0)));
  /* 103f2d44 mov dword ptr [0x104119f0], ecx */
  w32((uint32_t)(0x104119f0), (ECX));
  /* 103f2d4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2d4d push edx */
  push32((uint32_t)(EDX));
  /* 103f2d4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2d51 push eax */
  push32((uint32_t)(EAX));
  /* 103f2d52 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f2d54 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2d57 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103f2d5a push edx */
  push32((uint32_t)(EDX));
  /* 103f2d5b call 0x103f31f0 */
  push32(0x103f2d60u); f_103f31f0();
  /* 103f2d60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2d63 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2d68:;
  /* 103f2d68 mov eax, dword ptr [0x104119e0] */
  EAX = (r32((uint32_t)(0x104119e0)));
  /* 103f2d6d mov dword ptr [0x104119f0], eax */
  w32((uint32_t)(0x104119f0), (EAX));
  /* 103f2d72 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2d75 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2d76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2d79 push edx */
  push32((uint32_t)(EDX));
  /* 103f2d7a push 2 */
  push32((uint32_t)(0x2u));
  /* 103f2d7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2d7f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103f2d82 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2d83 call 0x103f31f0 */
  push32(0x103f2d88u); f_103f31f0();
  /* 103f2d88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2d8b jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2d90:;
  /* 103f2d90 mov edx, dword ptr [0x104119e0] */
  EDX = (r32((uint32_t)(0x104119e0)));
  /* 103f2d96 mov dword ptr [0x104119f0], edx */
  w32((uint32_t)(0x104119f0), (EDX));
  /* 103f2d9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2d9f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 103f2da2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103f2da3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 103f2da8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103f2daa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103f2dad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2db1 jne 0x103f2dba */
  if (!C.zf) goto L_103f2dba;
  /* 103f2db3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_103f2dba:;
  /* 103f2dba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2dbd push edx */
  push32((uint32_t)(EDX));
  /* 103f2dbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2dc1 push eax */
  push32((uint32_t)(EAX));
  /* 103f2dc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f2dc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f2dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2dc8 call 0x103f31f0 */
  push32(0x103f2dcdu); f_103f31f0();
  /* 103f2dcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2dd0 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2dd5:;
  /* 103f2dd5 mov edx, dword ptr [0x104119e0] */
  EDX = (r32((uint32_t)(0x104119e0)));
  /* 103f2ddb mov dword ptr [0x104119f0], edx */
  w32((uint32_t)(0x104119f0), (EDX));
  /* 103f2de1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2de4 push eax */
  push32((uint32_t)(EAX));
  /* 103f2de5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2de8 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2de9 push 3 */
  push32((uint32_t)(0x3u));
  /* 103f2deb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2dee mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 103f2df1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2df4 push eax */
  push32((uint32_t)(EAX));
  /* 103f2df5 call 0x103f31f0 */
  push32(0x103f2dfau); f_103f31f0();
  /* 103f2dfa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2dfd jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2e02:;
  /* 103f2e02 mov ecx, dword ptr [0x104119e0] */
  ECX = (r32((uint32_t)(0x104119e0)));
  /* 103f2e08 mov dword ptr [0x104119f0], ecx */
  w32((uint32_t)(0x104119f0), (ECX));
  /* 103f2e0e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2e11 push edx */
  push32((uint32_t)(EDX));
  /* 103f2e12 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2e15 push eax */
  push32((uint32_t)(EAX));
  /* 103f2e16 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f2e18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2e1b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103f2e1e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2e21 push edx */
  push32((uint32_t)(EDX));
  /* 103f2e22 call 0x103f31f0 */
  push32(0x103f2e27u); f_103f31f0();
  /* 103f2e27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2e2a jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2e2f:;
  /* 103f2e2f mov eax, dword ptr [0x104119e0] */
  EAX = (r32((uint32_t)(0x104119e0)));
  /* 103f2e34 mov dword ptr [0x104119f0], eax */
  w32((uint32_t)(0x104119f0), (EAX));
  /* 103f2e39 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2e3c push ecx */
  push32((uint32_t)(ECX));
  /* 103f2e3d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2e40 push edx */
  push32((uint32_t)(EDX));
  /* 103f2e41 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f2e43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2e46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103f2e49 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2e4a call 0x103f31f0 */
  push32(0x103f2e4fu); f_103f31f0();
  /* 103f2e4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2e52 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2e57:;
  /* 103f2e57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2e5a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2e5e jg 0x103f2e7c */
  if ((!C.zf&&C.sf==C.of)) goto L_103f2e7c;
  /* 103f2e60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2e63 push eax */
  push32((uint32_t)(EAX));
  /* 103f2e64 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2e67 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2e68 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2e6b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 103f2e71 push eax */
  push32((uint32_t)(EAX));
  /* 103f2e72 call 0x103f31a0 */
  push32(0x103f2e77u); f_103f31a0();
  /* 103f2e77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2e7a jmp 0x103f2e96 */
  goto L_103f2e96;
L_103f2e7c:;
  /* 103f2e7c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2e7f push ecx */
  push32((uint32_t)(ECX));
  /* 103f2e80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2e83 push edx */
  push32((uint32_t)(EDX));
  /* 103f2e84 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2e87 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 103f2e8d push ecx */
  push32((uint32_t)(ECX));
  /* 103f2e8e call 0x103f31a0 */
  push32(0x103f2e93u); f_103f31a0();
  /* 103f2e93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f2e96:;
  /* 103f2e96 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2e9b:;
  /* 103f2e9b mov edx, dword ptr [0x104119e0] */
  EDX = (r32((uint32_t)(0x104119e0)));
  /* 103f2ea1 mov dword ptr [0x104119f0], edx */
  w32((uint32_t)(0x104119f0), (EDX));
  /* 103f2ea7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2eaa push eax */
  push32((uint32_t)(EAX));
  /* 103f2eab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2eae push ecx */
  push32((uint32_t)(ECX));
  /* 103f2eaf push 2 */
  push32((uint32_t)(0x2u));
  /* 103f2eb1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2eb4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f2eb6 push eax */
  push32((uint32_t)(EAX));
  /* 103f2eb7 call 0x103f31f0 */
  push32(0x103f2ebcu); f_103f31f0();
  /* 103f2ebc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2ebf jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2ec4:;
  /* 103f2ec4 mov ecx, dword ptr [0x104119e0] */
  ECX = (r32((uint32_t)(0x104119e0)));
  /* 103f2eca mov dword ptr [0x104119f0], ecx */
  w32((uint32_t)(0x104119f0), (ECX));
  /* 103f2ed0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2ed3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 103f2ed6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f2ed9 jmp 0x103f2f2d */
  goto L_103f2f2d;
L_103f2edb:;
  /* 103f2edb mov ecx, dword ptr [0x104119e0] */
  ECX = (r32((uint32_t)(0x104119e0)));
  /* 103f2ee1 mov dword ptr [0x104119f0], ecx */
  w32((uint32_t)(0x104119f0), (ECX));
  /* 103f2ee7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2eea push edx */
  push32((uint32_t)(EDX));
  /* 103f2eeb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2eee push eax */
  push32((uint32_t)(EAX));
  /* 103f2eef push 1 */
  push32((uint32_t)(0x1u));
  /* 103f2ef1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2ef4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103f2ef7 push edx */
  push32((uint32_t)(EDX));
  /* 103f2ef8 call 0x103f31f0 */
  push32(0x103f2efdu); f_103f31f0();
  /* 103f2efd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2f00 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2f05:;
  /* 103f2f05 mov eax, dword ptr [0x104119e0] */
  EAX = (r32((uint32_t)(0x104119e0)));
  /* 103f2f0a mov dword ptr [0x104119f0], eax */
  w32((uint32_t)(0x104119f0), (EAX));
  /* 103f2f0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2f12 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2f16 jne 0x103f2f21 */
  if (!C.zf) goto L_103f2f21;
  /* 103f2f18 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 103f2f1f jmp 0x103f2f2d */
  goto L_103f2f2d;
L_103f2f21:;
  /* 103f2f21 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2f24 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 103f2f27 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f2f2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103f2f2d:;
  /* 103f2f2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2f30 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 103f2f33 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2f36 jge 0x103f2f41 */
  if ((C.sf==C.of)) goto L_103f2f41;
  /* 103f2f38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103f2f3f jmp 0x103f2f6e */
  goto L_103f2f6e;
L_103f2f41:;
  /* 103f2f41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2f44 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 103f2f47 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103f2f48 mov ecx, 7 */
  ECX = (0x7u);
  /* 103f2f4d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103f2f4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f2f52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2f55 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 103f2f58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103f2f59 mov ecx, 7 */
  ECX = (0x7u);
  /* 103f2f5e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103f2f60 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2f63 jl 0x103f2f6e */
  if ((C.sf!=C.of)) goto L_103f2f6e;
  /* 103f2f65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f2f68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2f6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103f2f6e:;
  /* 103f2f6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2f71 push eax */
  push32((uint32_t)(EAX));
  /* 103f2f72 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2f75 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2f76 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f2f78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f2f7b push edx */
  push32((uint32_t)(EDX));
  /* 103f2f7c call 0x103f31f0 */
  push32(0x103f2f81u); f_103f31f0();
  /* 103f2f81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2f84 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2f89:;
  /* 103f2f89 cmp dword ptr [0x104119e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f2f90 je 0x103f2fc0 */
  if (C.zf) goto L_103f2fc0;
  /* 103f2f92 mov dword ptr [0x104119e0], 0 */
  w32((uint32_t)(0x104119e0), (0x0u));
  /* 103f2f9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2f9f push eax */
  push32((uint32_t)(EAX));
  /* 103f2fa0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2fa4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2fa7 push edx */
  push32((uint32_t)(EDX));
  /* 103f2fa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2fab push eax */
  push32((uint32_t)(EAX));
  /* 103f2fac mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2faf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 103f2fb5 push edx */
  push32((uint32_t)(EDX));
  /* 103f2fb6 call 0x103f3350 */
  push32(0x103f2fbbu); f_103f3350();
  /* 103f2fbb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f2fbe jmp 0x103f2fe2 */
  goto L_103f2fe2;
L_103f2fc0:;
  /* 103f2fc0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2fc3 push eax */
  push32((uint32_t)(EAX));
  /* 103f2fc4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2fc7 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2fc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2fcb push edx */
  push32((uint32_t)(EDX));
  /* 103f2fcc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f2fcf push eax */
  push32((uint32_t)(EAX));
  /* 103f2fd0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2fd3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 103f2fd9 push edx */
  push32((uint32_t)(EDX));
  /* 103f2fda call 0x103f3350 */
  push32(0x103f2fdfu); f_103f3350();
  /* 103f2fdf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f2fe2:;
  /* 103f2fe2 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f2fe7:;
  /* 103f2fe7 mov dword ptr [0x104119e0], 0 */
  w32((uint32_t)(0x104119e0), (0x0u));
  /* 103f2ff1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f2ff4 push eax */
  push32((uint32_t)(EAX));
  /* 103f2ff5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f2ff8 push ecx */
  push32((uint32_t)(ECX));
  /* 103f2ff9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f2ffc push edx */
  push32((uint32_t)(EDX));
  /* 103f2ffd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3000 push eax */
  push32((uint32_t)(EAX));
  /* 103f3001 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f3004 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 103f300a push edx */
  push32((uint32_t)(EDX));
  /* 103f300b call 0x103f3350 */
  push32(0x103f3010u); f_103f3350();
  /* 103f3010 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3013 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f3018:;
  /* 103f3018 mov eax, dword ptr [0x104119e0] */
  EAX = (r32((uint32_t)(0x104119e0)));
  /* 103f301d mov dword ptr [0x104119f0], eax */
  w32((uint32_t)(0x104119f0), (EAX));
  /* 103f3022 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3025 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 103f3028 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103f3029 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 103f302e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103f3030 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103f3033 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f3036 push edx */
  push32((uint32_t)(EDX));
  /* 103f3037 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f303a push eax */
  push32((uint32_t)(EAX));
  /* 103f303b push 2 */
  push32((uint32_t)(0x2u));
  /* 103f303d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f3040 push ecx */
  push32((uint32_t)(ECX));
  /* 103f3041 call 0x103f31f0 */
  push32(0x103f3046u); f_103f31f0();
  /* 103f3046 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3049 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f304e:;
  /* 103f304e mov edx, dword ptr [0x104119e0] */
  EDX = (r32((uint32_t)(0x104119e0)));
  /* 103f3054 mov dword ptr [0x104119f0], edx */
  w32((uint32_t)(0x104119f0), (EDX));
  /* 103f305a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f305d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 103f3060 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103f3061 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 103f3066 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103f3068 mov ecx, eax */
  ECX = (EAX);
  /* 103f306a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f306d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f3070 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3073 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103f3076 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103f3077 mov esi, 0x64 */
  ESI = (0x64u);
  /* 103f307c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103f307e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3080 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103f3083 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f3086 push eax */
  push32((uint32_t)(EAX));
  /* 103f3087 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f308a push ecx */
  push32((uint32_t)(ECX));
  /* 103f308b push 4 */
  push32((uint32_t)(0x4u));
  /* 103f308d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f3090 push edx */
  push32((uint32_t)(EDX));
  /* 103f3091 call 0x103f31f0 */
  push32(0x103f3096u); f_103f31f0();
  /* 103f3096 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3099 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f309b:;
  /* 103f309b call 0x103f41b0 */
  push32(0x103f30a0u); f_103f41b0();
  /* 103f30a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f30a3 push eax */
  push32((uint32_t)(EAX));
  /* 103f30a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f30a7 push ecx */
  push32((uint32_t)(ECX));
  /* 103f30a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f30ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f30ad cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f30b1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 103f30b4 mov ecx, dword ptr [eax*4 + 0x10410e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10410e1c)));
  /* 103f30bb push ecx */
  push32((uint32_t)(ECX));
  /* 103f30bc call 0x103f31a0 */
  push32(0x103f30c1u); f_103f31a0();
  /* 103f30c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f30c4 jmp 0x103f30e8 */
  goto L_103f30e8;
L_103f30c6:;
  /* 103f30c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f30c9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f30cb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 103f30ce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f30d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f30d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f30d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f30d9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103f30db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f30de mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f30e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f30e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f30e6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103f30e8:;
  /* 103f30e8 pop esi */
  ESI = (pop32());
  /* 103f30e9 mov esp, ebp */
  ESP = (EBP);
  /* 103f30eb pop ebp */
  EBP = (pop32());
  /* 103f30ec ret  */
  ESPCHK(0x103f2b80u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x103f31a0 (72 bytes, 30 insns) */
void f_103f31a0(void) {
  FTRACE(0x103f31a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f31a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f31a1 mov ebp, esp */
  EBP = (ESP);
L_103f31a3:;
  /* 103f31a3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f31a6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f31a9 je 0x103f31e6 */
  if (C.zf) goto L_103f31e6;
  /* 103f31ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f31ae movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103f31b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f31b3 je 0x103f31e6 */
  if (C.zf) goto L_103f31e6;
  /* 103f31b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f31b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f31ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f31bd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f31bf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103f31c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f31c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f31c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f31c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f31cc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103f31ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f31d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f31d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 103f31d7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f31da mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f31dc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f31df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f31e2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103f31e4 jmp 0x103f31a3 */
  goto L_103f31a3;
L_103f31e6:;
  /* 103f31e6 pop ebp */
  EBP = (pop32());
  /* 103f31e7 ret  */
  ESPCHK(0x103f31a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100131f0 @ 0x103f31f0 (173 bytes, 64 insns) */
void f_103f31f0(void) {
  FTRACE(0x103f31f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f31f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f31f1 mov ebp, esp */
  EBP = (ESP);
  /* 103f31f3 push ecx */
  push32((uint32_t)(ECX));
  /* 103f31f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103f31fb cmp dword ptr [0x104119f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3202 je 0x103f321a */
  if (C.zf) goto L_103f321a;
  /* 103f3204 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f3207 push eax */
  push32((uint32_t)(EAX));
  /* 103f3208 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f320b push ecx */
  push32((uint32_t)(ECX));
  /* 103f320c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f320f push edx */
  push32((uint32_t)(EDX));
  /* 103f3210 call 0x103f32a0 */
  push32(0x103f3215u); f_103f32a0();
  /* 103f3215 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3218 jmp 0x103f3299 */
  goto L_103f3299;
L_103f321a:;
  /* 103f321a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f321d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3220 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3222 jae 0x103f3290 */
  if (!C.cf) goto L_103f3290;
  /* 103f3224 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3227 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f322a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 103f322d jmp 0x103f3238 */
  goto L_103f3238;
L_103f322f:;
  /* 103f322f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3232 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f3235 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_103f3238:;
  /* 103f3238 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f323b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f323e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f3240 je 0x103f3274 */
  if (C.zf) goto L_103f3274;
  /* 103f3242 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3245 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103f3246 mov ecx, 0xa */
  ECX = (0xau);
  /* 103f324b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103f324d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3250 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3253 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f3255 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3258 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 103f325b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f325e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103f325f mov ecx, 0xa */
  ECX = (0xau);
  /* 103f3264 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103f3266 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f3269 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f326c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f326f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103f3272 jmp 0x103f322f */
  goto L_103f322f;
L_103f3274:;
  /* 103f3274 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3277 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f3279 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f327c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f327f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103f3281 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f3284 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f3286 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f3289 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f328c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103f328e jmp 0x103f3299 */
  goto L_103f3299;
L_103f3290:;
  /* 103f3290 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f3293 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_103f3299:;
  /* 103f3299 mov esp, ebp */
  ESP = (EBP);
  /* 103f329b pop ebp */
  EBP = (pop32());
  /* 103f329c ret  */
  ESPCHK(0x103f31f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x103f32a0 (172 bytes, 65 insns) */
void f_103f32a0(void) {
  FTRACE(0x103f32a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f32a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f32a1 mov ebp, esp */
  EBP = (ESP);
  /* 103f32a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f32a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f32a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f32ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103f32ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f32b1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f32b4 jbe 0x103f32fb */
  if ((C.cf||C.zf)) goto L_103f32fb;
L_103f32b6:;
  /* 103f32b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f32b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103f32ba mov ecx, 0xa */
  ECX = (0xau);
  /* 103f32bf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103f32c1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f32c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f32c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103f32c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f32cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f32cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103f32d2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f32d5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f32d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f32da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f32dd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103f32df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f32e2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103f32e3 mov ecx, 0xa */
  ECX = (0xau);
  /* 103f32e8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103f32ea mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f32ed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f32f1 jle 0x103f32fb */
  if ((C.zf||C.sf!=C.of)) goto L_103f32fb;
  /* 103f32f3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f32f6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f32f9 ja 0x103f32b6 */
  if ((!C.cf&&!C.zf)) goto L_103f32b6;
L_103f32fb:;
  /* 103f32fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f32fe mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f3300 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f3303 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3306 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f3309 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103f330b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f330e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f3311 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103f3314:;
  /* 103f3314 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f3317 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f3319 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 103f331c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f331f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f3322 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f3324 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103f3326 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f3329 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f332c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103f332f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f3332 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 103f3335 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 103f3337 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f333a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f333d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f3340 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f3343 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3346 jb 0x103f3314 */
  if (C.cf) goto L_103f3314;
  /* 103f3348 mov esp, ebp */
  ESP = (EBP);
  /* 103f334a pop ebp */
  EBP = (pop32());
  /* 103f334b ret  */
  ESPCHK(0x103f32a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013350 @ 0x103f3350 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_103f3350(void) {
  FTRACE(0x103f3350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f3350 push ebp */
  push32((uint32_t)(EBP));
  /* 103f3351 mov ebp, esp */
  EBP = (ESP);
  /* 103f3353 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_103f3356:;
  /* 103f3356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3359 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f335c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f335e je 0x103f37cc */
  if (C.zf) goto L_103f37cc;
  /* 103f3364 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f3367 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f336a je 0x103f37cc */
  if (C.zf) goto L_103f37cc;
  /* 103f3370 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 103f3374 mov dword ptr [0x104119f0], 0 */
  w32((uint32_t)(0x104119f0), (0x0u));
  /* 103f337e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103f3385 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3388 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f338b jmp 0x103f3396 */
  goto L_103f3396;
L_103f338d:;
  /* 103f338d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f3390 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3393 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_103f3396:;
  /* 103f3396 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f3399 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103f339c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f339f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103f33a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f33a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f33a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103f33ab cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f33ad jne 0x103f33b1 */
  if (!C.zf) goto L_103f33b1;
  /* 103f33af jmp 0x103f338d */
  goto L_103f338d;
L_103f33b1:;
  /* 103f33b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f33b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f33b7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103f33ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f33bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f33c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103f33c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f33c6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f33c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103f33cc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f33d0 ja 0x103f3720 */
  if ((!C.cf&&!C.zf)) goto L_103f3720;
  /* 103f33d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f33d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f33db mov al, byte ptr [ecx + 0x103f37fc] */
  AL = (r8((uint32_t)(ECX + 0x103f37fc)));
  /* 103f33e1 jmp dword ptr [eax*4 + 0x103f37d0] */
  switch (EAX) {
    case 0: goto L_103f363f;
    case 1: goto L_103f3523;
    case 2: goto L_103f34ae;
    case 3: goto L_103f33e8;
    case 4: goto L_103f3426;
    case 5: goto L_103f3487;
    case 6: goto L_103f34d5;
    case 7: goto L_103f34fc;
    case 8: goto L_103f356a;
    case 9: goto L_103f3464;
    case 10: goto L_103f3720;
    default: x86_unimpl("switch@0x103f33e1 out of table"); return;
  }
L_103f33e8:;
  /* 103f33e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f33eb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103f33ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f33f1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f33f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103f33f7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f33fb ja 0x103f3421 */
  if ((!C.cf&&!C.zf)) goto L_103f3421;
  /* 103f33fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f3400 jmp dword ptr [ecx*4 + 0x103f384f] */
  switch (ECX) {
    case 0: goto L_103f3407;
    case 1: goto L_103f3411;
    case 2: goto L_103f3417;
    case 3: goto L_103f341d;
    case 4: goto L_103f3445;
    case 5: goto L_103f344f;
    case 6: goto L_103f3455;
    case 7: goto L_103f345b;
    default: x86_unimpl("switch@0x103f3400 out of table"); return;
  }
L_103f3407:;
  /* 103f3407 mov dword ptr [0x104119f0], 1 */
  w32((uint32_t)(0x104119f0), (0x1u));
L_103f3411:;
  /* 103f3411 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 103f3415 jmp 0x103f3421 */
  goto L_103f3421;
L_103f3417:;
  /* 103f3417 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 103f341b jmp 0x103f3421 */
  goto L_103f3421;
L_103f341d:;
  /* 103f341d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_103f3421:;
  /* 103f3421 jmp 0x103f3720 */
  goto L_103f3720;
L_103f3426:;
  /* 103f3426 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f3429 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103f342c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103f342f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f3432 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103f3435 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3439 ja 0x103f345f */
  if ((!C.cf&&!C.zf)) goto L_103f345f;
  /* 103f343b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103f343e jmp dword ptr [ecx*4 + 0x103f385f] */
  switch (ECX) {
    case 0: goto L_103f3445;
    case 1: goto L_103f344f;
    case 2: goto L_103f3455;
    case 3: goto L_103f345b;
    default: x86_unimpl("switch@0x103f343e out of table"); return;
  }
L_103f3445:;
  /* 103f3445 mov dword ptr [0x104119f0], 1 */
  w32((uint32_t)(0x104119f0), (0x1u));
L_103f344f:;
  /* 103f344f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 103f3453 jmp 0x103f345f */
  goto L_103f345f;
L_103f3455:;
  /* 103f3455 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 103f3459 jmp 0x103f345f */
  goto L_103f345f;
L_103f345b:;
  /* 103f345b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_103f345f:;
  /* 103f345f jmp 0x103f3720 */
  goto L_103f3720;
L_103f3464:;
  /* 103f3464 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f3467 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 103f346a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f346e je 0x103f3478 */
  if (C.zf) goto L_103f3478;
  /* 103f3470 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3474 je 0x103f347e */
  if (C.zf) goto L_103f347e;
  /* 103f3476 jmp 0x103f3482 */
  goto L_103f3482;
L_103f3478:;
  /* 103f3478 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 103f347c jmp 0x103f3482 */
  goto L_103f3482;
L_103f347e:;
  /* 103f347e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_103f3482:;
  /* 103f3482 jmp 0x103f3720 */
  goto L_103f3720;
L_103f3487:;
  /* 103f3487 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f348a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103f348d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3491 je 0x103f349b */
  if (C.zf) goto L_103f349b;
  /* 103f3493 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3497 je 0x103f34a5 */
  if (C.zf) goto L_103f34a5;
  /* 103f3499 jmp 0x103f34a9 */
  goto L_103f34a9;
L_103f349b:;
  /* 103f349b mov dword ptr [0x104119f0], 1 */
  w32((uint32_t)(0x104119f0), (0x1u));
L_103f34a5:;
  /* 103f34a5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_103f34a9:;
  /* 103f34a9 jmp 0x103f3720 */
  goto L_103f3720;
L_103f34ae:;
  /* 103f34ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f34b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 103f34b4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f34b8 je 0x103f34c2 */
  if (C.zf) goto L_103f34c2;
  /* 103f34ba cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f34be je 0x103f34cc */
  if (C.zf) goto L_103f34cc;
  /* 103f34c0 jmp 0x103f34d0 */
  goto L_103f34d0;
L_103f34c2:;
  /* 103f34c2 mov dword ptr [0x104119f0], 1 */
  w32((uint32_t)(0x104119f0), (0x1u));
L_103f34cc:;
  /* 103f34cc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_103f34d0:;
  /* 103f34d0 jmp 0x103f3720 */
  goto L_103f3720;
L_103f34d5:;
  /* 103f34d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f34d8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 103f34db cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f34df je 0x103f34e9 */
  if (C.zf) goto L_103f34e9;
  /* 103f34e1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f34e5 je 0x103f34f3 */
  if (C.zf) goto L_103f34f3;
  /* 103f34e7 jmp 0x103f34f7 */
  goto L_103f34f7;
L_103f34e9:;
  /* 103f34e9 mov dword ptr [0x104119f0], 1 */
  w32((uint32_t)(0x104119f0), (0x1u));
L_103f34f3:;
  /* 103f34f3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_103f34f7:;
  /* 103f34f7 jmp 0x103f3720 */
  goto L_103f3720;
L_103f34fc:;
  /* 103f34fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f34ff mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 103f3502 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3506 je 0x103f3510 */
  if (C.zf) goto L_103f3510;
  /* 103f3508 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f350c je 0x103f351a */
  if (C.zf) goto L_103f351a;
  /* 103f350e jmp 0x103f351e */
  goto L_103f351e;
L_103f3510:;
  /* 103f3510 mov dword ptr [0x104119f0], 1 */
  w32((uint32_t)(0x104119f0), (0x1u));
L_103f351a:;
  /* 103f351a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_103f351e:;
  /* 103f351e jmp 0x103f3720 */
  goto L_103f3720;
L_103f3523:;
  /* 103f3523 push 0x1040db54 */
  push32((uint32_t)(0x1040db54u));
  /* 103f3528 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f352b push ecx */
  push32((uint32_t)(ECX));
  /* 103f352c call 0x103f3d80 */
  push32(0x103f3531u); f_103f3d80();
  /* 103f3531 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3534 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f3536 jne 0x103f3543 */
  if (!C.zf) goto L_103f3543;
  /* 103f3538 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f353b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f353e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103f3541 jmp 0x103f3561 */
  goto L_103f3561;
L_103f3543:;
  /* 103f3543 push 0x1040db50 */
  push32((uint32_t)(0x1040db50u));
  /* 103f3548 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f354b push eax */
  push32((uint32_t)(EAX));
  /* 103f354c call 0x103f3d80 */
  push32(0x103f3551u); f_103f3d80();
  /* 103f3551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f3556 jne 0x103f3561 */
  if (!C.zf) goto L_103f3561;
  /* 103f3558 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f355b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f355e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103f3561:;
  /* 103f3561 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 103f3565 jmp 0x103f3720 */
  goto L_103f3720;
L_103f356a:;
  /* 103f356a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f356d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3571 jg 0x103f3581 */
  if ((!C.zf&&C.sf==C.of)) goto L_103f3581;
  /* 103f3573 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f3576 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 103f357c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103f357f jmp 0x103f358d */
  goto L_103f358d;
L_103f3581:;
  /* 103f3581 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f3584 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 103f358a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_103f358d:;
  /* 103f358d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3591 jle 0x103f3634 */
  if ((C.zf||C.sf!=C.of)) goto L_103f3634;
  /* 103f3597 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f359a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f359d jbe 0x103f3634 */
  if ((C.cf||C.zf)) goto L_103f3634;
  /* 103f35a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f35a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f35a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f35aa mov ecx, dword ptr [0x1040fc98] */
  ECX = (r32((uint32_t)(0x1040fc98)));
  /* 103f35b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f35b2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103f35b6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 103f35bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f35be je 0x103f35f7 */
  if (C.zf) goto L_103f35f7;
  /* 103f35c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f35c3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f35c6 jbe 0x103f35f7 */
  if ((C.cf||C.zf)) goto L_103f35f7;
  /* 103f35c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f35cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f35cd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f35d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103f35d2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 103f35d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f35d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f35d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f35dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f35df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103f35e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f35e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f35e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103f35ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f35ed mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f35ef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f35f2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f35f5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103f35f7:;
  /* 103f35f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f35fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f35fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f35ff mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f3601 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103f3603 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3606 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f3608 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f360b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f360e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103f3610 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f3613 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3616 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103f3619 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f361c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f361e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f3621 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f3624 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103f3626 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f3629 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f362c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103f362f jmp 0x103f358d */
  goto L_103f358d;
L_103f3634:;
  /* 103f3634 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f3637 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f363a jmp 0x103f3356 */
  goto L_103f3356;
L_103f363f:;
  /* 103f363f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f3642 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103f3645 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f3647 je 0x103f3712 */
  if (C.zf) goto L_103f3712;
  /* 103f364d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3650 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3653 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_103f3656:;
  /* 103f3656 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3659 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f365c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f365e je 0x103f3710 */
  if (C.zf) goto L_103f3710;
  /* 103f3664 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f3667 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f366a je 0x103f3710 */
  if (C.zf) goto L_103f3710;
  /* 103f3670 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3673 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f3676 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3679 jne 0x103f3689 */
  if (!C.zf) goto L_103f3689;
  /* 103f367b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f367e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3681 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 103f3684 jmp 0x103f3710 */
  goto L_103f3710;
L_103f3689:;
  /* 103f3689 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f368c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f368e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103f3690 mov edx, dword ptr [0x1040fc98] */
  EDX = (r32((uint32_t)(0x1040fc98)));
  /* 103f3696 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3698 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 103f369c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 103f36a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f36a3 je 0x103f36dc */
  if (C.zf) goto L_103f36dc;
  /* 103f36a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f36a8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f36ab jbe 0x103f36dc */
  if ((C.cf||C.zf)) goto L_103f36dc;
  /* 103f36ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f36b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f36b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f36b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103f36b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103f36b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f36bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f36be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f36c1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f36c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103f36c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f36c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f36cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f36cf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f36d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f36d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f36d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f36da mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103f36dc:;
  /* 103f36dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f36df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f36e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f36e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103f36e6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 103f36e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f36eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f36ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f36f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f36f3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103f36f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f36f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f36fb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 103f36fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f3701 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f3703 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f3706 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f3709 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103f370b jmp 0x103f3656 */
  goto L_103f3656;
L_103f3710:;
  /* 103f3710 jmp 0x103f371b */
  goto L_103f371b;
L_103f3712:;
  /* 103f3712 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3715 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3718 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103f371b:;
  /* 103f371b jmp 0x103f3356 */
  goto L_103f3356;
L_103f3720:;
  /* 103f3720 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103f3724 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f3726 je 0x103f374c */
  if (C.zf) goto L_103f374c;
  /* 103f3728 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f372b push edx */
  push32((uint32_t)(EDX));
  /* 103f372c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f372f push eax */
  push32((uint32_t)(EAX));
  /* 103f3730 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3733 push ecx */
  push32((uint32_t)(ECX));
  /* 103f3734 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3737 push edx */
  push32((uint32_t)(EDX));
  /* 103f3738 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 103f373b push eax */
  push32((uint32_t)(EAX));
  /* 103f373c call 0x103f2b80 */
  push32(0x103f3741u); f_103f2b80();
  /* 103f3741 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3744 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f3747 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 103f374a jmp 0x103f37c7 */
  goto L_103f37c7;
L_103f374c:;
  /* 103f374c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f374f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3751 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f3753 mov ecx, dword ptr [0x1040fc98] */
  ECX = (r32((uint32_t)(0x1040fc98)));
  /* 103f3759 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f375b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103f375f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 103f3765 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f3767 je 0x103f3798 */
  if (C.zf) goto L_103f3798;
  /* 103f3769 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f376c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f376e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3771 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f3773 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103f3775 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3778 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f377a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f377d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3780 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103f3782 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3785 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3788 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 103f378b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f378e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f3790 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f3793 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f3796 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_103f3798:;
  /* 103f3798 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f379b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f379d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f37a0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103f37a2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103f37a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f37a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f37a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f37ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f37af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103f37b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f37b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f37b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f37ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f37bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f37bf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f37c2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f37c5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103f37c7:;
  /* 103f37c7 jmp 0x103f3356 */
  goto L_103f3356;
L_103f37cc:;
  /* 103f37cc mov esp, ebp */
  ESP = (EBP);
  /* 103f37ce pop ebp */
  EBP = (pop32());
  /* 103f37cf ret  */
  ESPCHK(0x103f3350u, _esp0);
  ESP += 4; return;
}

/* FUN_10013870 @ 0x103f3870 (650 bytes, 178 insns) */
void f_103f3870(void) {
  FTRACE(0x103f3870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f3870 push ebp */
  push32((uint32_t)(EBP));
  /* 103f3871 mov ebp, esp */
  EBP = (ESP);
  /* 103f3873 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f3879 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f387d jne 0x103f39d9 */
  if (!C.zf) goto L_103f39d9;
  /* 103f3883 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f3886 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 103f388c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 103f3892 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f3895 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103f389c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 103f38a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f38a8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 103f38ae push edx */
  push32((uint32_t)(EDX));
  /* 103f38af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f38b2 push eax */
  push32((uint32_t)(EAX));
  /* 103f38b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f38b6 push ecx */
  push32((uint32_t)(ECX));
  /* 103f38b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f38ba push edx */
  push32((uint32_t)(EDX));
  /* 103f38bb call 0x103f4c90 */
  push32(0x103f38c0u); f_103f4c90();
  /* 103f38c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f38c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f38c6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f38ca jne 0x103f395f */
  if (!C.zf) goto L_103f395f;
  /* 103f38d0 call dword ptr [0x104143bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143bc))), 0x103f38d6u);
  /* 103f38d6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f38d9 je 0x103f38e0 */
  if (C.zf) goto L_103f38e0;
  /* 103f38db jmp 0x103f39bd */
  goto L_103f39bd;
L_103f38e0:;
  /* 103f38e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f38e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f38e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f38e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f38e9 push eax */
  push32((uint32_t)(EAX));
  /* 103f38ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f38ed push ecx */
  push32((uint32_t)(ECX));
  /* 103f38ee call 0x103f4c90 */
  push32(0x103f38f3u); f_103f4c90();
  /* 103f38f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f38f6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 103f38fc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3903 jne 0x103f390a */
  if (!C.zf) goto L_103f390a;
  /* 103f3905 jmp 0x103f39bd */
  goto L_103f39bd;
L_103f390a:;
  /* 103f390a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 103f390c push 0x1040db5c */
  push32((uint32_t)(0x1040db5cu));
  /* 103f3911 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f3913 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 103f3919 push edx */
  push32((uint32_t)(EDX));
  /* 103f391a call 0x103e56b0 */
  push32(0x103f391fu); f_103e56b0();
  /* 103f391f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3922 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f3925 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3929 jne 0x103f3930 */
  if (!C.zf) goto L_103f3930;
  /* 103f392b jmp 0x103f39bd */
  goto L_103f39bd;
L_103f3930:;
  /* 103f3930 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103f3937 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f3939 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 103f393f push eax */
  push32((uint32_t)(EAX));
  /* 103f3940 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f3943 push ecx */
  push32((uint32_t)(ECX));
  /* 103f3944 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3947 push edx */
  push32((uint32_t)(EDX));
  /* 103f3948 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f394b push eax */
  push32((uint32_t)(EAX));
  /* 103f394c call 0x103f4c90 */
  push32(0x103f3951u); f_103f4c90();
  /* 103f3951 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3954 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f3957 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f395b jne 0x103f395f */
  if (!C.zf) goto L_103f395f;
  /* 103f395d jmp 0x103f39bd */
  goto L_103f39bd;
L_103f395f:;
  /* 103f395f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 103f3961 push 0x1040db5c */
  push32((uint32_t)(0x1040db5cu));
  /* 103f3966 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f3968 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f396b push ecx */
  push32((uint32_t)(ECX));
  /* 103f396c call 0x103e56b0 */
  push32(0x103f3971u); f_103e56b0();
  /* 103f3971 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3974 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 103f397a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103f397c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 103f3982 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3985 jne 0x103f3989 */
  if (!C.zf) goto L_103f3989;
  /* 103f3987 jmp 0x103f39bd */
  goto L_103f39bd;
L_103f3989:;
  /* 103f3989 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f398c push ecx */
  push32((uint32_t)(ECX));
  /* 103f398d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f3990 push edx */
  push32((uint32_t)(EDX));
  /* 103f3991 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 103f3997 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f3999 push ecx */
  push32((uint32_t)(ECX));
  /* 103f399a call 0x103e8ed0 */
  push32(0x103f399fu); f_103e8ed0();
  /* 103f399f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f39a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f39a6 je 0x103f39b6 */
  if (C.zf) goto L_103f39b6;
  /* 103f39a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f39aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f39ad push edx */
  push32((uint32_t)(EDX));
  /* 103f39ae call 0x103e6140 */
  push32(0x103f39b3u); f_103e6140();
  /* 103f39b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f39b6:;
  /* 103f39b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f39b8 jmp 0x103f3af6 */
  goto L_103f3af6;
L_103f39bd:;
  /* 103f39bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f39c1 je 0x103f39d1 */
  if (C.zf) goto L_103f39d1;
  /* 103f39c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f39c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f39c8 push eax */
  push32((uint32_t)(EAX));
  /* 103f39c9 call 0x103e6140 */
  push32(0x103f39ceu); f_103e6140();
  /* 103f39ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f39d1:;
  /* 103f39d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f39d4 jmp 0x103f3af6 */
  goto L_103f3af6;
L_103f39d9:;
  /* 103f39d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f39dd jne 0x103f3af3 */
  if (!C.zf) goto L_103f3af3;
  /* 103f39e3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 103f39ed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f39f0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 103f39f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f39f8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 103f39fe push edx */
  push32((uint32_t)(EDX));
  /* 103f39ff push 0x10411908 */
  push32((uint32_t)(0x10411908u));
  /* 103f3a04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3a07 push eax */
  push32((uint32_t)(EAX));
  /* 103f3a08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3a0b push ecx */
  push32((uint32_t)(ECX));
  /* 103f3a0c call 0x103f4af0 */
  push32(0x103f3a11u); f_103f4af0();
  /* 103f3a11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3a14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f3a16 jne 0x103f3a20 */
  if (!C.zf) goto L_103f3a20;
  /* 103f3a18 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f3a1b jmp 0x103f3af6 */
  goto L_103f3af6;
L_103f3a20:;
  /* 103f3a20 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103f3a26 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 103f3a29 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 103f3a33 jmp 0x103f3a44 */
  goto L_103f3a44;
L_103f3a35:;
  /* 103f3a35 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103f3a3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3a3e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_103f3a44:;
  /* 103f3a44 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3a4b jge 0x103f3aef */
  if ((C.sf==C.of)) goto L_103f3aef;
  /* 103f3a51 cmp dword ptr [0x1040fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1040fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3a58 jle 0x103f3a8b */
  if ((C.zf||C.sf!=C.of)) goto L_103f3a8b;
  /* 103f3a5a push 4 */
  push32((uint32_t)(0x4u));
  /* 103f3a5c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103f3a62 mov dl, byte ptr [ecx*2 + 0x10411908] */
  DL = (r8((uint32_t)(ECX*2 + 0x10411908)));
  /* 103f3a69 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 103f3a6f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 103f3a75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f3a7a push eax */
  push32((uint32_t)(EAX));
  /* 103f3a7b call 0x103eb6c0 */
  push32(0x103f3a80u); f_103eb6c0();
  /* 103f3a80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3a83 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 103f3a89 jmp 0x103f3abe */
  goto L_103f3abe;
L_103f3a8b:;
  /* 103f3a8b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103f3a91 mov dl, byte ptr [ecx*2 + 0x10411908] */
  DL = (r8((uint32_t)(ECX*2 + 0x10411908)));
  /* 103f3a98 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 103f3a9e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 103f3aa4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f3aa9 mov ecx, dword ptr [0x1040fc98] */
  ECX = (r32((uint32_t)(0x1040fc98)));
  /* 103f3aaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f3ab1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103f3ab5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103f3ab8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_103f3abe:;
  /* 103f3abe cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3ac5 je 0x103f3ae8 */
  if (C.zf) goto L_103f3ae8;
  /* 103f3ac7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103f3acd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f3ad0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f3ad3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 103f3ada lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 103f3ade mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103f3ae4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103f3ae6 jmp 0x103f3aea */
  goto L_103f3aea;
L_103f3ae8:;
  /* 103f3ae8 jmp 0x103f3aef */
  goto L_103f3aef;
L_103f3aea:;
  /* 103f3aea jmp 0x103f3a35 */
  goto L_103f3a35;
L_103f3aef:;
  /* 103f3aef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3af1 jmp 0x103f3af6 */
  goto L_103f3af6;
L_103f3af3:;
  /* 103f3af3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_103f3af6:;
  /* 103f3af6 mov esp, ebp */
  ESP = (EBP);
  /* 103f3af8 pop ebp */
  EBP = (pop32());
  /* 103f3af9 ret  */
  ESPCHK(0x103f3870u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b00 @ 0x103f3b00 (10 bytes, 5 insns) */
void f_103f3b00(void) {
  FTRACE(0x103f3b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f3b00 push ebp */
  push32((uint32_t)(EBP));
  /* 103f3b01 mov ebp, esp */
  EBP = (ESP);
  /* 103f3b03 mov eax, dword ptr [0x10410d88] */
  EAX = (r32((uint32_t)(0x10410d88)));
  /* 103f3b08 pop ebp */
  EBP = (pop32());
  /* 103f3b09 ret  */
  ESPCHK(0x103f3b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b10 @ 0x103f3b10 (575 bytes, 196 insns) */
void f_103f3b10(void) {
  FTRACE(0x103f3b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f3b10 push ebp */
  push32((uint32_t)(EBP));
  /* 103f3b11 mov ebp, esp */
  EBP = (ESP);
  /* 103f3b13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103f3b15 push 0x1040db68 */
  push32((uint32_t)(0x1040db68u));
  /* 103f3b1a push 0x103ee7b8 */
  push32((uint32_t)(0x103ee7b8u));
  /* 103f3b1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 103f3b25 push eax */
  push32((uint32_t)(EAX));
  /* 103f3b26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 103f3b2d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3b30 push ebx */
  push32((uint32_t)(EBX));
  /* 103f3b31 push esi */
  push32((uint32_t)(ESI));
  /* 103f3b32 push edi */
  push32((uint32_t)(EDI));
  /* 103f3b33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103f3b36 cmp dword ptr [0x10411914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3b3d jne 0x103f3b8e */
  if (!C.zf) goto L_103f3b8e;
  /* 103f3b3f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 103f3b42 push eax */
  push32((uint32_t)(EAX));
  /* 103f3b43 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f3b45 push 0x1040d298 */
  push32((uint32_t)(0x1040d298u));
  /* 103f3b4a push 1 */
  push32((uint32_t)(0x1u));
  /* 103f3b4c call dword ptr [0x10414310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414310))), 0x103f3b52u);
  /* 103f3b52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f3b54 je 0x103f3b62 */
  if (C.zf) goto L_103f3b62;
  /* 103f3b56 mov dword ptr [0x10411914], 1 */
  w32((uint32_t)(0x10411914), (0x1u));
  /* 103f3b60 jmp 0x103f3b8e */
  goto L_103f3b8e;
L_103f3b62:;
  /* 103f3b62 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 103f3b65 push ecx */
  push32((uint32_t)(ECX));
  /* 103f3b66 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f3b68 push 0x1040d294 */
  push32((uint32_t)(0x1040d294u));
  /* 103f3b6d push 1 */
  push32((uint32_t)(0x1u));
  /* 103f3b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 103f3b71 call dword ptr [0x10414314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414314))), 0x103f3b77u);
  /* 103f3b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f3b79 je 0x103f3b87 */
  if (C.zf) goto L_103f3b87;
  /* 103f3b7b mov dword ptr [0x10411914], 2 */
  w32((uint32_t)(0x10411914), (0x2u));
  /* 103f3b85 jmp 0x103f3b8e */
  goto L_103f3b8e;
L_103f3b87:;
  /* 103f3b87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3b89 jmp 0x103f3d69 */
  goto L_103f3d69;
L_103f3b8e:;
  /* 103f3b8e cmp dword ptr [0x10411914], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10411914))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3b95 jne 0x103f3bb2 */
  if (!C.zf) goto L_103f3bb2;
  /* 103f3b97 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f3b9a push edx */
  push32((uint32_t)(EDX));
  /* 103f3b9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3b9e push eax */
  push32((uint32_t)(EAX));
  /* 103f3b9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 103f3ba3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3ba6 push edx */
  push32((uint32_t)(EDX));
  /* 103f3ba7 call dword ptr [0x10414310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414310))), 0x103f3badu);
  /* 103f3bad jmp 0x103f3d69 */
  goto L_103f3d69;
L_103f3bb2:;
  /* 103f3bb2 cmp dword ptr [0x10411914], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10411914))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3bb9 jne 0x103f3d67 */
  if (!C.zf) goto L_103f3d67;
  /* 103f3bbf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3bc3 jne 0x103f3bcd */
  if (!C.zf) goto L_103f3bcd;
  /* 103f3bc5 mov eax, dword ptr [0x10411888] */
  EAX = (r32((uint32_t)(0x10411888)));
  /* 103f3bca mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_103f3bcd:;
  /* 103f3bcd push 0 */
  push32((uint32_t)(0x0u));
  /* 103f3bcf push 0 */
  push32((uint32_t)(0x0u));
  /* 103f3bd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f3bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f3bd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3bd8 push ecx */
  push32((uint32_t)(ECX));
  /* 103f3bd9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3bdc push edx */
  push32((uint32_t)(EDX));
  /* 103f3bdd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103f3be2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f3be5 push eax */
  push32((uint32_t)(EAX));
  /* 103f3be6 call dword ptr [0x10414364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414364))), 0x103f3becu);
  /* 103f3bec mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103f3bef cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3bf3 jne 0x103f3bfc */
  if (!C.zf) goto L_103f3bfc;
  /* 103f3bf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3bf7 jmp 0x103f3d69 */
  goto L_103f3d69;
L_103f3bfc:;
  /* 103f3bfc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103f3c03 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103f3c06 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3c09 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103f3c0b call 0x103e8850 */
  push32(0x103f3c10u); f_103e8850();
  /* 103f3c10 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 103f3c13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103f3c16 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103f3c19 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 103f3c1c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103f3c1f push edx */
  push32((uint32_t)(EDX));
  /* 103f3c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f3c22 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103f3c25 push eax */
  push32((uint32_t)(EAX));
  /* 103f3c26 call 0x103e9420 */
  push32(0x103f3c2bu); f_103e9420();
  /* 103f3c2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3c2e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103f3c35 jmp 0x103f3c4e */
  goto L_103f3c4e;
  /* 103f3c37 mov eax, 1 */
  EAX = (0x1u);
  /* 103f3c3c ret  */
  ESPCHK(0x103f3b10u, _esp0);
  ESP += 4; return;
  /* 103f3c3d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103f3c40 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 103f3c47 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103f3c4e:;
  /* 103f3c4e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3c52 jne 0x103f3c5b */
  if (!C.zf) goto L_103f3c5b;
  /* 103f3c54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3c56 jmp 0x103f3d69 */
  goto L_103f3d69;
L_103f3c5b:;
  /* 103f3c5b push 0 */
  push32((uint32_t)(0x0u));
  /* 103f3c5d push 0 */
  push32((uint32_t)(0x0u));
  /* 103f3c5f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103f3c62 push ecx */
  push32((uint32_t)(ECX));
  /* 103f3c63 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103f3c66 push edx */
  push32((uint32_t)(EDX));
  /* 103f3c67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3c6a push eax */
  push32((uint32_t)(EAX));
  /* 103f3c6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3c6e push ecx */
  push32((uint32_t)(ECX));
  /* 103f3c6f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103f3c74 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f3c77 push edx */
  push32((uint32_t)(EDX));
  /* 103f3c78 call dword ptr [0x10414364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414364))), 0x103f3c7eu);
  /* 103f3c7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f3c80 jne 0x103f3c89 */
  if (!C.zf) goto L_103f3c89;
  /* 103f3c82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3c84 jmp 0x103f3d69 */
  goto L_103f3d69;
L_103f3c89:;
  /* 103f3c89 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103f3c90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103f3c93 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 103f3c97 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3c9a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103f3c9c call 0x103e8850 */
  push32(0x103f3ca1u); f_103e8850();
  /* 103f3ca1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 103f3ca4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103f3ca7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 103f3caa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103f3cad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103f3cb4 jmp 0x103f3ccd */
  goto L_103f3ccd;
  /* 103f3cb6 mov eax, 1 */
  EAX = (0x1u);
  /* 103f3cbb ret  */
  ESPCHK(0x103f3b10u, _esp0);
  ESP += 4; return;
  /* 103f3cbc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103f3cbf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103f3cc6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103f3ccd:;
  /* 103f3ccd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3cd1 jne 0x103f3cda */
  if (!C.zf) goto L_103f3cda;
  /* 103f3cd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3cd5 jmp 0x103f3d69 */
  goto L_103f3d69;
L_103f3cda:;
  /* 103f3cda cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3cde jne 0x103f3ce9 */
  if (!C.zf) goto L_103f3ce9;
  /* 103f3ce0 mov edx, dword ptr [0x10411878] */
  EDX = (r32((uint32_t)(0x10411878)));
  /* 103f3ce6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_103f3ce9:;
  /* 103f3ce9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3cec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103f3cef mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 103f3cf5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3cf8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103f3cfb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 103f3d02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103f3d05 push ecx */
  push32((uint32_t)(ECX));
  /* 103f3d06 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103f3d09 push edx */
  push32((uint32_t)(EDX));
  /* 103f3d0a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103f3d0d push eax */
  push32((uint32_t)(EAX));
  /* 103f3d0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3d11 push ecx */
  push32((uint32_t)(ECX));
  /* 103f3d12 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103f3d15 push edx */
  push32((uint32_t)(EDX));
  /* 103f3d16 call dword ptr [0x10414314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414314))), 0x103f3d1cu);
  /* 103f3d1c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103f3d1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3d22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103f3d25 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f3d27 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 103f3d2c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3d32 je 0x103f3d48 */
  if (C.zf) goto L_103f3d48;
  /* 103f3d34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3d37 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103f3d3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f3d3c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103f3d40 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3d46 je 0x103f3d4c */
  if (C.zf) goto L_103f3d4c;
L_103f3d48:;
  /* 103f3d48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3d4a jmp 0x103f3d69 */
  goto L_103f3d69;
L_103f3d4c:;
  /* 103f3d4c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3d4f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103f3d51 push eax */
  push32((uint32_t)(EAX));
  /* 103f3d52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103f3d55 push ecx */
  push32((uint32_t)(ECX));
  /* 103f3d56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f3d59 push edx */
  push32((uint32_t)(EDX));
  /* 103f3d5a call 0x103ed5a0 */
  push32(0x103f3d5fu); f_103ed5a0();
  /* 103f3d5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3d62 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f3d65 jmp 0x103f3d69 */
  goto L_103f3d69;
L_103f3d67:;
  /* 103f3d67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103f3d69:;
  /* 103f3d69 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 103f3d6c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f3d6f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 103f3d76 pop edi */
  EDI = (pop32());
  /* 103f3d77 pop esi */
  ESI = (pop32());
  /* 103f3d78 pop ebx */
  EBX = (pop32());
  /* 103f3d79 mov esp, ebp */
  ESP = (EBP);
  /* 103f3d7b pop ebp */
  EBP = (pop32());
  /* 103f3d7c ret  */
  ESPCHK(0x103f3b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d80 @ 0x103f3d80 (208 bytes, 85 insns) */
void f_103f3d80(void) {
  FTRACE(0x103f3d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f3d80 push ebp */
  push32((uint32_t)(EBP));
  /* 103f3d81 mov ebp, esp */
  EBP = (ESP);
  /* 103f3d83 push edi */
  push32((uint32_t)(EDI));
  /* 103f3d84 push esi */
  push32((uint32_t)(ESI));
  /* 103f3d85 push ebx */
  push32((uint32_t)(EBX));
  /* 103f3d86 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3d89 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3d8c lea eax, [0x10411870] */
  EAX = ((uint32_t)(0x10411870));
  /* 103f3d92 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3d96 jne 0x103f3dd3 */
  if (!C.zf) goto L_103f3dd3;
  /* 103f3d98 mov al, 0xff */
  AL = (0xffu);
  /* 103f3d9a mov edi, edi */
  EDI = (EDI);
L_103f3d9c:;
  /* 103f3d9c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103f3d9e je 0x103f3dce */
  if (C.zf) goto L_103f3dce;
  /* 103f3da0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103f3da2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103f3da3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 103f3da5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103f3da6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f3da8 je 0x103f3d9c */
  if (C.zf) goto L_103f3d9c;
  /* 103f3daa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103f3dac cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f3dae sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103f3db0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 103f3db3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103f3db5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103f3db7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 103f3db9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103f3dbb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f3dbd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103f3dbf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 103f3dc2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103f3dc4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103f3dc6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f3dc8 je 0x103f3d9c */
  if (C.zf) goto L_103f3d9c;
  /* 103f3dca sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103f3dcc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_103f3dce:;
  /* 103f3dce movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 103f3dd1 jmp 0x103f3e4b */
  goto L_103f3e4b;
L_103f3dd3:;
  /* 103f3dd3 lock inc dword ptr [0x10411a04] */
  x86_unimpl("lock inc @ 0x103f3dd3");
  /* 103f3dda cmp dword ptr [0x104119f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3de1 jg 0x103f3de7 */
  if ((!C.zf&&C.sf==C.of)) goto L_103f3de7;
  /* 103f3de3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f3de5 jmp 0x103f3dfc */
  goto L_103f3dfc;
L_103f3de7:;
  /* 103f3de7 lock dec dword ptr [0x10411a04] */
  x86_unimpl("lock dec @ 0x103f3de7");
  /* 103f3dee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103f3df0 call 0x103e90b0 */
  push32(0x103f3df5u); f_103e90b0();
  /* 103f3df5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_103f3dfc:;
  /* 103f3dfc mov eax, 0xff */
  EAX = (0xffu);
  /* 103f3e01 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103f3e03 nop  */
  /* nop */
L_103f3e04:;
  /* 103f3e04 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103f3e06 je 0x103f3e2f */
  if (C.zf) goto L_103f3e2f;
  /* 103f3e08 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103f3e0a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103f3e0b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 103f3e0d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103f3e0e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f3e10 je 0x103f3e04 */
  if (C.zf) goto L_103f3e04;
  /* 103f3e12 push eax */
  push32((uint32_t)(EAX));
  /* 103f3e13 push ebx */
  push32((uint32_t)(EBX));
  /* 103f3e14 call 0x103f4ef0 */
  push32(0x103f3e19u); f_103f4ef0();
  /* 103f3e19 mov ebx, eax */
  EBX = (EAX);
  /* 103f3e1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3e1e call 0x103f4ef0 */
  push32(0x103f3e23u); f_103f4ef0();
  /* 103f3e23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3e26 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f3e28 je 0x103f3e04 */
  if (C.zf) goto L_103f3e04;
  /* 103f3e2a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f3e2c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_103f3e2f:;
  /* 103f3e2f mov ebx, eax */
  EBX = (EAX);
  /* 103f3e31 pop eax */
  EAX = (pop32());
  /* 103f3e32 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3e34 jne 0x103f3e3f */
  if (!C.zf) goto L_103f3e3f;
  /* 103f3e36 lock dec dword ptr [0x10411a04] */
  x86_unimpl("lock dec @ 0x103f3e36");
  /* 103f3e3d jmp 0x103f3e49 */
  goto L_103f3e49;
L_103f3e3f:;
  /* 103f3e3f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103f3e41 call 0x103e9150 */
  push32(0x103f3e46u); f_103e9150();
  /* 103f3e46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f3e49:;
  /* 103f3e49 mov eax, ebx */
  EAX = (EBX);
L_103f3e4b:;
  /* 103f3e4b pop ebx */
  EBX = (pop32());
  /* 103f3e4c pop esi */
  ESI = (pop32());
  /* 103f3e4d pop edi */
  EDI = (pop32());
  /* 103f3e4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103f3e4f ret  */
  ESPCHK(0x103f3d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e50 @ 0x103f3e50 (257 bytes, 103 insns) */
void f_103f3e50(void) {
  FTRACE(0x103f3e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f3e50 push ebp */
  push32((uint32_t)(EBP));
  /* 103f3e51 mov ebp, esp */
  EBP = (ESP);
  /* 103f3e53 push edi */
  push32((uint32_t)(EDI));
  /* 103f3e54 push esi */
  push32((uint32_t)(ESI));
  /* 103f3e55 push ebx */
  push32((uint32_t)(EBX));
  /* 103f3e56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f3e59 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f3e5b je 0x103f3f4a */
  if (C.zf) goto L_103f3f4a;
  /* 103f3e61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3e64 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 103f3e67 lea eax, [0x10411870] */
  EAX = ((uint32_t)(0x10411870));
  /* 103f3e6d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3e71 jne 0x103f3ec1 */
  if (!C.zf) goto L_103f3ec1;
  /* 103f3e73 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 103f3e75 mov bl, 0x5a */
  BL = (0x5au);
  /* 103f3e77 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 103f3e79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103f3e7c:;
  /* 103f3e7c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 103f3e7e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 103f3e80 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 103f3e82 je 0x103f3ea5 */
  if (C.zf) goto L_103f3ea5;
  /* 103f3e84 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103f3e86 je 0x103f3ea5 */
  if (C.zf) goto L_103f3ea5;
  /* 103f3e88 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103f3e89 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103f3e8a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f3e8c jb 0x103f3e94 */
  if (C.cf) goto L_103f3e94;
  /* 103f3e8e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f3e90 ja 0x103f3e94 */
  if ((!C.cf&&!C.zf)) goto L_103f3e94;
  /* 103f3e92 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_103f3e94:;
  /* 103f3e94 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f3e96 jb 0x103f3e9e */
  if (C.cf) goto L_103f3e9e;
  /* 103f3e98 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f3e9a ja 0x103f3e9e */
  if ((!C.cf&&!C.zf)) goto L_103f3e9e;
  /* 103f3e9c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_103f3e9e:;
  /* 103f3e9e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f3ea0 jne 0x103f3eaf */
  if (!C.zf) goto L_103f3eaf;
  /* 103f3ea2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103f3ea3 jne 0x103f3e7c */
  if (!C.zf) goto L_103f3e7c;
L_103f3ea5:;
  /* 103f3ea5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f3ea7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f3ea9 je 0x103f3f4a */
  if (C.zf) goto L_103f3f4a;
L_103f3eaf:;
  /* 103f3eaf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 103f3eb4 jb 0x103f3f4a */
  if (C.cf) goto L_103f3f4a;
  /* 103f3eba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f3ebc jmp 0x103f3f4a */
  goto L_103f3f4a;
L_103f3ec1:;
  /* 103f3ec1 lock inc dword ptr [0x10411a04] */
  x86_unimpl("lock inc @ 0x103f3ec1");
  /* 103f3ec8 cmp dword ptr [0x104119f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3ecf jg 0x103f3ed5 */
  if ((!C.zf&&C.sf==C.of)) goto L_103f3ed5;
  /* 103f3ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f3ed3 jmp 0x103f3eee */
  goto L_103f3eee;
L_103f3ed5:;
  /* 103f3ed5 lock dec dword ptr [0x10411a04] */
  x86_unimpl("lock dec @ 0x103f3ed5");
  /* 103f3edc mov ebx, ecx */
  EBX = (ECX);
  /* 103f3ede push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103f3ee0 call 0x103e90b0 */
  push32(0x103f3ee5u); f_103e90b0();
  /* 103f3ee5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 103f3eec mov ecx, ebx */
  ECX = (EBX);
L_103f3eee:;
  /* 103f3eee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3ef0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103f3ef2 mov edi, edi */
  EDI = (EDI);
L_103f3ef4:;
  /* 103f3ef4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103f3ef6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3ef8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 103f3efa je 0x103f3f1f */
  if (C.zf) goto L_103f3f1f;
  /* 103f3efc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103f3efe je 0x103f3f1f */
  if (C.zf) goto L_103f3f1f;
  /* 103f3f00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103f3f01 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103f3f02 push ecx */
  push32((uint32_t)(ECX));
  /* 103f3f03 push eax */
  push32((uint32_t)(EAX));
  /* 103f3f04 push ebx */
  push32((uint32_t)(EBX));
  /* 103f3f05 call 0x103f4ef0 */
  push32(0x103f3f0au); f_103f4ef0();
  /* 103f3f0a mov ebx, eax */
  EBX = (EAX);
  /* 103f3f0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3f0f call 0x103f4ef0 */
  push32(0x103f3f14u); f_103f4ef0();
  /* 103f3f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3f17 pop ecx */
  ECX = (pop32());
  /* 103f3f18 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3f1a jne 0x103f3f25 */
  if (!C.zf) goto L_103f3f25;
  /* 103f3f1c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103f3f1d jne 0x103f3ef4 */
  if (!C.zf) goto L_103f3ef4;
L_103f3f1f:;
  /* 103f3f1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f3f21 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3f23 je 0x103f3f2e */
  if (C.zf) goto L_103f3f2e;
L_103f3f25:;
  /* 103f3f25 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 103f3f2a jb 0x103f3f2e */
  if (C.cf) goto L_103f3f2e;
  /* 103f3f2c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_103f3f2e:;
  /* 103f3f2e pop eax */
  EAX = (pop32());
  /* 103f3f2f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3f31 jne 0x103f3f3c */
  if (!C.zf) goto L_103f3f3c;
  /* 103f3f33 lock dec dword ptr [0x10411a04] */
  x86_unimpl("lock dec @ 0x103f3f33");
  /* 103f3f3a jmp 0x103f3f4a */
  goto L_103f3f4a;
L_103f3f3c:;
  /* 103f3f3c mov ebx, ecx */
  EBX = (ECX);
  /* 103f3f3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103f3f40 call 0x103e9150 */
  push32(0x103f3f45u); f_103e9150();
  /* 103f3f45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3f48 mov ecx, ebx */
  ECX = (EBX);
L_103f3f4a:;
  /* 103f3f4a mov eax, ecx */
  EAX = (ECX);
  /* 103f3f4c pop ebx */
  EBX = (pop32());
  /* 103f3f4d pop esi */
  ESI = (pop32());
  /* 103f3f4e pop edi */
  EDI = (pop32());
  /* 103f3f4f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103f3f50 ret  */
  ESPCHK(0x103f3e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f60 @ 0x103f3f60 (255 bytes, 88 insns) */
void f_103f3f60(void) {
  FTRACE(0x103f3f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f3f60 push ebp */
  push32((uint32_t)(EBP));
  /* 103f3f61 mov ebp, esp */
  EBP = (ESP);
  /* 103f3f63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_103f3f66:;
  /* 103f3f66 cmp dword ptr [0x1040fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1040fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3f6d jle 0x103f3f86 */
  if ((C.zf||C.sf!=C.of)) goto L_103f3f86;
  /* 103f3f6f push 8 */
  push32((uint32_t)(0x8u));
  /* 103f3f71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3f74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f3f76 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103f3f78 push ecx */
  push32((uint32_t)(ECX));
  /* 103f3f79 call 0x103eb6c0 */
  push32(0x103f3f7eu); f_103eb6c0();
  /* 103f3f7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3f81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103f3f84 jmp 0x103f3f9f */
  goto L_103f3f9f;
L_103f3f86:;
  /* 103f3f86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3f89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3f8b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f3f8d mov ecx, dword ptr [0x1040fc98] */
  ECX = (r32((uint32_t)(0x1040fc98)));
  /* 103f3f93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f3f95 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103f3f99 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 103f3f9c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103f3f9f:;
  /* 103f3f9f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3fa3 je 0x103f3fb0 */
  if (C.zf) goto L_103f3fb0;
  /* 103f3fa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3fa8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3fab mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f3fae jmp 0x103f3f66 */
  goto L_103f3f66;
L_103f3fb0:;
  /* 103f3fb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3fb3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f3fb5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103f3fb7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103f3fba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3fbd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3fc0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f3fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f3fc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f3fc9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3fcd je 0x103f3fd5 */
  if (C.zf) goto L_103f3fd5;
  /* 103f3fcf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3fd3 jne 0x103f3fe8 */
  if (!C.zf) goto L_103f3fe8;
L_103f3fd5:;
  /* 103f3fd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3fd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f3fda mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f3fdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f3fdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f3fe2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f3fe5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_103f3fe8:;
  /* 103f3fe8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_103f3fef:;
  /* 103f3fef cmp dword ptr [0x1040fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1040fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f3ff6 jle 0x103f400b */
  if ((C.zf||C.sf!=C.of)) goto L_103f400b;
  /* 103f3ff8 push 4 */
  push32((uint32_t)(0x4u));
  /* 103f3ffa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f3ffd push edx */
  push32((uint32_t)(EDX));
  /* 103f3ffe call 0x103eb6c0 */
  push32(0x103f4003u); f_103eb6c0();
  /* 103f4003 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4006 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103f4009 jmp 0x103f4020 */
  goto L_103f4020;
L_103f400b:;
  /* 103f400b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f400e mov ecx, dword ptr [0x1040fc98] */
  ECX = (r32((uint32_t)(0x1040fc98)));
  /* 103f4014 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f4016 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103f401a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103f401d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_103f4020:;
  /* 103f4020 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4024 je 0x103f404b */
  if (C.zf) goto L_103f404b;
  /* 103f4026 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f4029 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f402c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f402f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 103f4033 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103f4036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4039 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f403b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103f403d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103f4040 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4043 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4046 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 103f4049 jmp 0x103f3fef */
  goto L_103f3fef;
L_103f404b:;
  /* 103f404b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f404f jne 0x103f4058 */
  if (!C.zf) goto L_103f4058;
  /* 103f4051 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f4054 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f4056 jmp 0x103f405b */
  goto L_103f405b;
L_103f4058:;
  /* 103f4058 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103f405b:;
  /* 103f405b mov esp, ebp */
  ESP = (EBP);
  /* 103f405d pop ebp */
  EBP = (pop32());
  /* 103f405e ret  */
  ESPCHK(0x103f3f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014060 @ 0x103f4060 (17 bytes, 8 insns) */
void f_103f4060(void) {
  FTRACE(0x103f4060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f4060 push ebp */
  push32((uint32_t)(EBP));
  /* 103f4061 mov ebp, esp */
  EBP = (ESP);
  /* 103f4063 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4066 push eax */
  push32((uint32_t)(EAX));
  /* 103f4067 call 0x103f3f60 */
  push32(0x103f406cu); f_103f3f60();
  /* 103f406c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f406f pop ebp */
  EBP = (pop32());
  /* 103f4070 ret  */
  ESPCHK(0x103f4060u, _esp0);
  ESP += 4; return;
}

/* FUN_10014080 @ 0x103f4080 (297 bytes, 106 insns) */
void f_103f4080(void) {
  FTRACE(0x103f4080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f4080 push ebp */
  push32((uint32_t)(EBP));
  /* 103f4081 mov ebp, esp */
  EBP = (ESP);
  /* 103f4083 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f4086 push esi */
  push32((uint32_t)(ESI));
L_103f4087:;
  /* 103f4087 cmp dword ptr [0x1040fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1040fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f408e jle 0x103f40a7 */
  if ((C.zf||C.sf!=C.of)) goto L_103f40a7;
  /* 103f4090 push 8 */
  push32((uint32_t)(0x8u));
  /* 103f4092 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4095 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f4097 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103f4099 push ecx */
  push32((uint32_t)(ECX));
  /* 103f409a call 0x103eb6c0 */
  push32(0x103f409fu); f_103eb6c0();
  /* 103f409f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f40a2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103f40a5 jmp 0x103f40c0 */
  goto L_103f40c0;
L_103f40a7:;
  /* 103f40a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f40aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f40ac mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f40ae mov ecx, dword ptr [0x1040fc98] */
  ECX = (r32((uint32_t)(0x1040fc98)));
  /* 103f40b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f40b6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103f40ba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 103f40bd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_103f40c0:;
  /* 103f40c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f40c4 je 0x103f40d1 */
  if (C.zf) goto L_103f40d1;
  /* 103f40c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f40c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f40cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f40cf jmp 0x103f4087 */
  goto L_103f4087;
L_103f40d1:;
  /* 103f40d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f40d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f40d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103f40d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103f40db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f40de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f40e1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f40e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f40e7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103f40ea cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f40ee je 0x103f40f6 */
  if (C.zf) goto L_103f40f6;
  /* 103f40f0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f40f4 jne 0x103f4109 */
  if (!C.zf) goto L_103f4109;
L_103f40f6:;
  /* 103f40f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f40f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f40fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f40fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f4100 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4103 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4106 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_103f4109:;
  /* 103f4109 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103f4110 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_103f4117:;
  /* 103f4117 cmp dword ptr [0x1040fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1040fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f411e jle 0x103f4133 */
  if ((C.zf||C.sf!=C.of)) goto L_103f4133;
  /* 103f4120 push 4 */
  push32((uint32_t)(0x4u));
  /* 103f4122 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f4125 push edx */
  push32((uint32_t)(EDX));
  /* 103f4126 call 0x103eb6c0 */
  push32(0x103f412bu); f_103eb6c0();
  /* 103f412b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f412e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103f4131 jmp 0x103f4148 */
  goto L_103f4148;
L_103f4133:;
  /* 103f4133 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f4136 mov ecx, dword ptr [0x1040fc98] */
  ECX = (r32((uint32_t)(0x1040fc98)));
  /* 103f413c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f413e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103f4142 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103f4145 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_103f4148:;
  /* 103f4148 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f414c je 0x103f4189 */
  if (C.zf) goto L_103f4189;
  /* 103f414e push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4150 push 0xa */
  push32((uint32_t)(0xau));
  /* 103f4152 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f4155 push eax */
  push32((uint32_t)(EAX));
  /* 103f4156 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4159 push ecx */
  push32((uint32_t)(ECX));
  /* 103f415a call 0x103f5020 */
  push32(0x103f415fu); f_103f5020();
  /* 103f415f mov ecx, eax */
  ECX = (EAX);
  /* 103f4161 mov esi, edx */
  ESI = (EDX);
  /* 103f4163 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f4166 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f4169 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103f416a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f416c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103f416e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f4171 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 103f4174 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4177 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f4179 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f417b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f417e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4181 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4184 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 103f4187 jmp 0x103f4117 */
  goto L_103f4117;
L_103f4189:;
  /* 103f4189 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f418d jne 0x103f419e */
  if (!C.zf) goto L_103f419e;
  /* 103f418f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4192 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f4194 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f4197 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f419a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f419c jmp 0x103f41a4 */
  goto L_103f41a4;
L_103f419e:;
  /* 103f419e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f41a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_103f41a4:;
  /* 103f41a4 pop esi */
  ESI = (pop32());
  /* 103f41a5 mov esp, ebp */
  ESP = (EBP);
  /* 103f41a7 pop ebp */
  EBP = (pop32());
  /* 103f41a8 ret  */
  ESPCHK(0x103f4080u, _esp0);
  ESP += 4; return;
}

/* FUN_100141b0 @ 0x103f41b0 (61 bytes, 18 insns) */
void f_103f41b0(void) {
  FTRACE(0x103f41b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f41b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f41b1 mov ebp, esp */
  EBP = (ESP);
  /* 103f41b3 cmp dword ptr [0x104119d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f41ba jne 0x103f41eb */
  if (!C.zf) goto L_103f41eb;
  /* 103f41bc push 0xb */
  push32((uint32_t)(0xbu));
  /* 103f41be call 0x103e90b0 */
  push32(0x103f41c3u); f_103e90b0();
  /* 103f41c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f41c6 cmp dword ptr [0x104119d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f41cd jne 0x103f41e1 */
  if (!C.zf) goto L_103f41e1;
  /* 103f41cf call 0x103f4210 */
  push32(0x103f41d4u); f_103f4210();
  /* 103f41d4 mov eax, dword ptr [0x104119d0] */
  EAX = (r32((uint32_t)(0x104119d0)));
  /* 103f41d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f41dc mov dword ptr [0x104119d0], eax */
  w32((uint32_t)(0x104119d0), (EAX));
L_103f41e1:;
  /* 103f41e1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103f41e3 call 0x103e9150 */
  push32(0x103f41e8u); f_103e9150();
  /* 103f41e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f41eb:;
  /* 103f41eb pop ebp */
  EBP = (pop32());
  /* 103f41ec ret  */
  ESPCHK(0x103f41b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100141f0 @ 0x103f41f0 (30 bytes, 11 insns) */
void f_103f41f0(void) {
  FTRACE(0x103f41f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f41f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f41f1 mov ebp, esp */
  EBP = (ESP);
  /* 103f41f3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103f41f5 call 0x103e90b0 */
  push32(0x103f41fau); f_103e90b0();
  /* 103f41fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f41fd call 0x103f4210 */
  push32(0x103f4202u); f_103f4210();
  /* 103f4202 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103f4204 call 0x103e9150 */
  push32(0x103f4209u); f_103e9150();
  /* 103f4209 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f420c pop ebp */
  EBP = (pop32());
  /* 103f420d ret  */
  ESPCHK(0x103f41f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014210 @ 0x103f4210 (939 bytes, 266 insns) */
void f_103f4210(void) {
  FTRACE(0x103f4210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f4210 push ebp */
  push32((uint32_t)(EBP));
  /* 103f4211 mov ebp, esp */
  EBP = (ESP);
  /* 103f4213 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f4216 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103f421d push 0xc */
  push32((uint32_t)(0xcu));
  /* 103f421f call 0x103e90b0 */
  push32(0x103f4224u); f_103e90b0();
  /* 103f4224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4227 mov dword ptr [0x10411918], 0 */
  w32((uint32_t)(0x10411918), (0x0u));
  /* 103f4231 mov dword ptr [0x10410e38], 0xffffffff */
  w32((uint32_t)(0x10410e38), (0xffffffffu));
  /* 103f423b mov eax, dword ptr [0x10410e38] */
  EAX = (r32((uint32_t)(0x10410e38)));
  /* 103f4240 mov dword ptr [0x10410e28], eax */
  w32((uint32_t)(0x10410e28), (EAX));
  /* 103f4245 push 0x1040dbc8 */
  push32((uint32_t)(0x1040dbc8u));
  /* 103f424a call 0x103f5090 */
  push32(0x103f424fu); f_103f5090();
  /* 103f424f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4252 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f4255 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4259 jne 0x103f4393 */
  if (!C.zf) goto L_103f4393;
  /* 103f425f push 0xc */
  push32((uint32_t)(0xcu));
  /* 103f4261 call 0x103e9150 */
  push32(0x103f4266u); f_103e9150();
  /* 103f4266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4269 push 0x10411920 */
  push32((uint32_t)(0x10411920u));
  /* 103f426e call dword ptr [0x104142d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142d4))), 0x103f4274u);
  /* 103f4274 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4277 je 0x103f438e */
  if (C.zf) goto L_103f438e;
  /* 103f427d mov dword ptr [0x10411918], 1 */
  w32((uint32_t)(0x10411918), (0x1u));
  /* 103f4287 mov ecx, dword ptr [0x10411920] */
  ECX = (r32((uint32_t)(0x10411920)));
  /* 103f428d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f4290 mov dword ptr [0x10410d90], ecx */
  w32((uint32_t)(0x10410d90), (ECX));
  /* 103f4296 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f4298 mov dx, word ptr [0x10411966] */
  DX = (r16((uint32_t)(0x10411966)));
  /* 103f429f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f42a1 je 0x103f42b9 */
  if (C.zf) goto L_103f42b9;
  /* 103f42a3 mov eax, dword ptr [0x10411974] */
  EAX = (r32((uint32_t)(0x10411974)));
  /* 103f42a8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f42ab mov ecx, dword ptr [0x10410d90] */
  ECX = (r32((uint32_t)(0x10410d90)));
  /* 103f42b1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f42b3 mov dword ptr [0x10410d90], ecx */
  w32((uint32_t)(0x10410d90), (ECX));
L_103f42b9:;
  /* 103f42b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f42bb mov dx, word ptr [0x104119ba] */
  DX = (r16((uint32_t)(0x104119ba)));
  /* 103f42c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f42c4 je 0x103f42ee */
  if (C.zf) goto L_103f42ee;
  /* 103f42c6 cmp dword ptr [0x104119c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f42cd je 0x103f42ee */
  if (C.zf) goto L_103f42ee;
  /* 103f42cf mov dword ptr [0x10410d94], 1 */
  w32((uint32_t)(0x10410d94), (0x1u));
  /* 103f42d9 mov eax, dword ptr [0x104119c8] */
  EAX = (r32((uint32_t)(0x104119c8)));
  /* 103f42de sub eax, dword ptr [0x10411974] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10411974))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f42e4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f42e7 mov dword ptr [0x10410d98], eax */
  w32((uint32_t)(0x10410d98), (EAX));
  /* 103f42ec jmp 0x103f4302 */
  goto L_103f4302;
L_103f42ee:;
  /* 103f42ee mov dword ptr [0x10410d94], 0 */
  w32((uint32_t)(0x10410d94), (0x0u));
  /* 103f42f8 mov dword ptr [0x10410d98], 0 */
  w32((uint32_t)(0x10410d98), (0x0u));
L_103f4302:;
  /* 103f4302 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 103f4305 push ecx */
  push32((uint32_t)(ECX));
  /* 103f4306 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4308 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 103f430a mov edx, dword ptr [0x10410e1c] */
  EDX = (r32((uint32_t)(0x10410e1c)));
  /* 103f4310 push edx */
  push32((uint32_t)(EDX));
  /* 103f4311 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103f4313 push 0x10411924 */
  push32((uint32_t)(0x10411924u));
  /* 103f4318 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103f431d mov eax, dword ptr [0x10411888] */
  EAX = (r32((uint32_t)(0x10411888)));
  /* 103f4322 push eax */
  push32((uint32_t)(EAX));
  /* 103f4323 call dword ptr [0x10414364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414364))), 0x103f4329u);
  /* 103f4329 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f432b je 0x103f433f */
  if (C.zf) goto L_103f433f;
  /* 103f432d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4331 jne 0x103f433f */
  if (!C.zf) goto L_103f433f;
  /* 103f4333 mov ecx, dword ptr [0x10410e1c] */
  ECX = (r32((uint32_t)(0x10410e1c)));
  /* 103f4339 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 103f433d jmp 0x103f4348 */
  goto L_103f4348;
L_103f433f:;
  /* 103f433f mov edx, dword ptr [0x10410e1c] */
  EDX = (r32((uint32_t)(0x10410e1c)));
  /* 103f4345 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_103f4348:;
  /* 103f4348 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 103f434b push eax */
  push32((uint32_t)(EAX));
  /* 103f434c push 0 */
  push32((uint32_t)(0x0u));
  /* 103f434e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 103f4350 mov ecx, dword ptr [0x10410e20] */
  ECX = (r32((uint32_t)(0x10410e20)));
  /* 103f4356 push ecx */
  push32((uint32_t)(ECX));
  /* 103f4357 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103f4359 push 0x10411978 */
  push32((uint32_t)(0x10411978u));
  /* 103f435e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103f4363 mov edx, dword ptr [0x10411888] */
  EDX = (r32((uint32_t)(0x10411888)));
  /* 103f4369 push edx */
  push32((uint32_t)(EDX));
  /* 103f436a call dword ptr [0x10414364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414364))), 0x103f4370u);
  /* 103f4370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f4372 je 0x103f4385 */
  if (C.zf) goto L_103f4385;
  /* 103f4374 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4378 jne 0x103f4385 */
  if (!C.zf) goto L_103f4385;
  /* 103f437a mov eax, dword ptr [0x10410e20] */
  EAX = (r32((uint32_t)(0x10410e20)));
  /* 103f437f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 103f4383 jmp 0x103f438e */
  goto L_103f438e;
L_103f4385:;
  /* 103f4385 mov ecx, dword ptr [0x10410e20] */
  ECX = (r32((uint32_t)(0x10410e20)));
  /* 103f438b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_103f438e:;
  /* 103f438e jmp 0x103f45b7 */
  goto L_103f45b7;
L_103f4393:;
  /* 103f4393 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4396 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103f4399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f439b je 0x103f43bd */
  if (C.zf) goto L_103f43bd;
  /* 103f439d cmp dword ptr [0x104119cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f43a4 je 0x103f43cc */
  if (C.zf) goto L_103f43cc;
  /* 103f43a6 mov ecx, dword ptr [0x104119cc] */
  ECX = (r32((uint32_t)(0x104119cc)));
  /* 103f43ac push ecx */
  push32((uint32_t)(ECX));
  /* 103f43ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f43b0 push edx */
  push32((uint32_t)(EDX));
  /* 103f43b1 call 0x103f1340 */
  push32(0x103f43b6u); f_103f1340();
  /* 103f43b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f43b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f43bb jne 0x103f43cc */
  if (!C.zf) goto L_103f43cc;
L_103f43bd:;
  /* 103f43bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 103f43bf call 0x103e9150 */
  push32(0x103f43c4u); f_103e9150();
  /* 103f43c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f43c7 jmp 0x103f45b7 */
  goto L_103f45b7;
L_103f43cc:;
  /* 103f43cc push 2 */
  push32((uint32_t)(0x2u));
  /* 103f43ce mov eax, dword ptr [0x104119cc] */
  EAX = (r32((uint32_t)(0x104119cc)));
  /* 103f43d3 push eax */
  push32((uint32_t)(EAX));
  /* 103f43d4 call 0x103e6140 */
  push32(0x103f43d9u); f_103e6140();
  /* 103f43d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f43dc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 103f43e1 push 0x1040dbc0 */
  push32((uint32_t)(0x1040dbc0u));
  /* 103f43e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f43e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f43eb push ecx */
  push32((uint32_t)(ECX));
  /* 103f43ec call 0x103e84e0 */
  push32(0x103f43f1u); f_103e84e0();
  /* 103f43f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f43f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f43f7 push eax */
  push32((uint32_t)(EAX));
  /* 103f43f8 call 0x103e56b0 */
  push32(0x103f43fdu); f_103e56b0();
  /* 103f43fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4400 mov dword ptr [0x104119cc], eax */
  w32((uint32_t)(0x104119cc), (EAX));
  /* 103f4405 cmp dword ptr [0x104119cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f440c jne 0x103f441d */
  if (!C.zf) goto L_103f441d;
  /* 103f440e push 0xc */
  push32((uint32_t)(0xcu));
  /* 103f4410 call 0x103e9150 */
  push32(0x103f4415u); f_103e9150();
  /* 103f4415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4418 jmp 0x103f45b7 */
  goto L_103f45b7;
L_103f441d:;
  /* 103f441d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4420 push edx */
  push32((uint32_t)(EDX));
  /* 103f4421 mov eax, dword ptr [0x104119cc] */
  EAX = (r32((uint32_t)(0x104119cc)));
  /* 103f4426 push eax */
  push32((uint32_t)(EAX));
  /* 103f4427 call 0x103e8660 */
  push32(0x103f442cu); f_103e8660();
  /* 103f442c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f442f push 0xc */
  push32((uint32_t)(0xcu));
  /* 103f4431 call 0x103e9150 */
  push32(0x103f4436u); f_103e9150();
  /* 103f4436 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4439 push 3 */
  push32((uint32_t)(0x3u));
  /* 103f443b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f443e push ecx */
  push32((uint32_t)(ECX));
  /* 103f443f mov edx, dword ptr [0x10410e1c] */
  EDX = (r32((uint32_t)(0x10410e1c)));
  /* 103f4445 push edx */
  push32((uint32_t)(EDX));
  /* 103f4446 call 0x103e8ed0 */
  push32(0x103f444bu); f_103e8ed0();
  /* 103f444b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f444e mov eax, dword ptr [0x10410e1c] */
  EAX = (r32((uint32_t)(0x10410e1c)));
  /* 103f4453 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 103f4457 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f445a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f445d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f4460 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4463 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103f4466 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4469 jne 0x103f447d */
  if (!C.zf) goto L_103f447d;
  /* 103f446b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f446e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4471 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103f4474 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4477 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f447a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_103f447d:;
  /* 103f447d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4480 push eax */
  push32((uint32_t)(EAX));
  /* 103f4481 call 0x103f3f60 */
  push32(0x103f4486u); f_103f3f60();
  /* 103f4486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4489 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f448f mov dword ptr [0x10410d90], eax */
  w32((uint32_t)(0x10410d90), (EAX));
L_103f4494:;
  /* 103f4494 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4497 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103f449a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f449d je 0x103f44b5 */
  if (C.zf) goto L_103f44b5;
  /* 103f449f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f44a2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f44a5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f44a8 jl 0x103f44c0 */
  if ((C.sf!=C.of)) goto L_103f44c0;
  /* 103f44aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f44ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103f44b0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f44b3 jg 0x103f44c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_103f44c0;
L_103f44b5:;
  /* 103f44b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f44b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f44bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f44be jmp 0x103f4494 */
  goto L_103f4494;
L_103f44c0:;
  /* 103f44c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f44c3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103f44c6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f44c9 jne 0x103f4565 */
  if (!C.zf) goto L_103f4565;
  /* 103f44cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f44d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f44d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f44d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f44db push edx */
  push32((uint32_t)(EDX));
  /* 103f44dc call 0x103f3f60 */
  push32(0x103f44e1u); f_103f3f60();
  /* 103f44e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f44e4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f44e7 mov ecx, dword ptr [0x10410d90] */
  ECX = (r32((uint32_t)(0x10410d90)));
  /* 103f44ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f44ef mov dword ptr [0x10410d90], ecx */
  w32((uint32_t)(0x10410d90), (ECX));
L_103f44f5:;
  /* 103f44f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f44f8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103f44fb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f44fe jl 0x103f4516 */
  if ((C.sf!=C.of)) goto L_103f4516;
  /* 103f4500 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4503 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103f4506 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4509 jg 0x103f4516 */
  if ((!C.zf&&C.sf==C.of)) goto L_103f4516;
  /* 103f450b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f450e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4511 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f4514 jmp 0x103f44f5 */
  goto L_103f44f5;
L_103f4516:;
  /* 103f4516 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4519 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103f451c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f451f jne 0x103f4565 */
  if (!C.zf) goto L_103f4565;
  /* 103f4521 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4524 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4527 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f452a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f452d push ecx */
  push32((uint32_t)(ECX));
  /* 103f452e call 0x103f3f60 */
  push32(0x103f4533u); f_103f3f60();
  /* 103f4533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4536 mov edx, dword ptr [0x10410d90] */
  EDX = (r32((uint32_t)(0x10410d90)));
  /* 103f453c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f453e mov dword ptr [0x10410d90], edx */
  w32((uint32_t)(0x10410d90), (EDX));
L_103f4544:;
  /* 103f4544 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4547 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f454a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f454d jl 0x103f4565 */
  if ((C.sf!=C.of)) goto L_103f4565;
  /* 103f454f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4552 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103f4555 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4558 jg 0x103f4565 */
  if ((!C.zf&&C.sf==C.of)) goto L_103f4565;
  /* 103f455a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f455d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4560 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f4563 jmp 0x103f4544 */
  goto L_103f4544;
L_103f4565:;
  /* 103f4565 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4569 je 0x103f4579 */
  if (C.zf) goto L_103f4579;
  /* 103f456b mov edx, dword ptr [0x10410d90] */
  EDX = (r32((uint32_t)(0x10410d90)));
  /* 103f4571 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f4573 mov dword ptr [0x10410d90], edx */
  w32((uint32_t)(0x10410d90), (EDX));
L_103f4579:;
  /* 103f4579 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f457c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103f457f mov dword ptr [0x10410d94], ecx */
  w32((uint32_t)(0x10410d94), (ECX));
  /* 103f4585 cmp dword ptr [0x10410d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10410d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f458c je 0x103f45ae */
  if (C.zf) goto L_103f45ae;
  /* 103f458e push 3 */
  push32((uint32_t)(0x3u));
  /* 103f4590 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4593 push edx */
  push32((uint32_t)(EDX));
  /* 103f4594 mov eax, dword ptr [0x10410e20] */
  EAX = (r32((uint32_t)(0x10410e20)));
  /* 103f4599 push eax */
  push32((uint32_t)(EAX));
  /* 103f459a call 0x103e8ed0 */
  push32(0x103f459fu); f_103e8ed0();
  /* 103f459f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f45a2 mov ecx, dword ptr [0x10410e20] */
  ECX = (r32((uint32_t)(0x10410e20)));
  /* 103f45a8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 103f45ac jmp 0x103f45b7 */
  goto L_103f45b7;
L_103f45ae:;
  /* 103f45ae mov edx, dword ptr [0x10410e20] */
  EDX = (r32((uint32_t)(0x10410e20)));
  /* 103f45b4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_103f45b7:;
  /* 103f45b7 mov esp, ebp */
  ESP = (EBP);
  /* 103f45b9 pop ebp */
  EBP = (pop32());
  /* 103f45ba ret  */
  ESPCHK(0x103f4210u, _esp0);
  ESP += 4; return;
}

/* FUN_100145c0 @ 0x103f45c0 (46 bytes, 18 insns) */
void f_103f45c0(void) {
  FTRACE(0x103f45c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f45c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f45c1 mov ebp, esp */
  EBP = (ESP);
  /* 103f45c3 push ecx */
  push32((uint32_t)(ECX));
  /* 103f45c4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103f45c6 call 0x103e90b0 */
  push32(0x103f45cbu); f_103e90b0();
  /* 103f45cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f45ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f45d1 push eax */
  push32((uint32_t)(EAX));
  /* 103f45d2 call 0x103f45f0 */
  push32(0x103f45d7u); f_103f45f0();
  /* 103f45d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f45da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f45dd push 0xb */
  push32((uint32_t)(0xbu));
  /* 103f45df call 0x103e9150 */
  push32(0x103f45e4u); f_103e9150();
  /* 103f45e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f45e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f45ea mov esp, ebp */
  ESP = (EBP);
  /* 103f45ec pop ebp */
  EBP = (pop32());
  /* 103f45ed ret  */
  ESPCHK(0x103f45c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100145f0 @ 0x103f45f0 (762 bytes, 246 insns) */
void f_103f45f0(void) {
  FTRACE(0x103f45f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f45f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f45f1 mov ebp, esp */
  EBP = (ESP);
  /* 103f45f3 push ecx */
  push32((uint32_t)(ECX));
  /* 103f45f4 cmp dword ptr [0x10410d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10410d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f45fb jne 0x103f4604 */
  if (!C.zf) goto L_103f4604;
  /* 103f45fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f45ff jmp 0x103f48e6 */
  goto L_103f48e6;
L_103f4604:;
  /* 103f4604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4607 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103f460a cmp ecx, dword ptr [0x10410e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10410e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4610 jne 0x103f4624 */
  if (!C.zf) goto L_103f4624;
  /* 103f4612 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4615 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103f4618 cmp eax, dword ptr [0x10410e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10410e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f461e je 0x103f47eb */
  if (C.zf) goto L_103f47eb;
L_103f4624:;
  /* 103f4624 cmp dword ptr [0x10411918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f462b je 0x103f47a5 */
  if (C.zf) goto L_103f47a5;
  /* 103f4631 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f4633 mov cx, word ptr [0x104119b8] */
  CX = (r16((uint32_t)(0x104119b8)));
  /* 103f463a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f463c jne 0x103f4699 */
  if (!C.zf) goto L_103f4699;
  /* 103f463e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f4640 mov dx, word ptr [0x104119c6] */
  DX = (r16((uint32_t)(0x104119c6)));
  /* 103f4647 push edx */
  push32((uint32_t)(EDX));
  /* 103f4648 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f464a mov ax, word ptr [0x104119c4] */
  AX = (r16((uint32_t)(0x104119c4)));
  /* 103f4650 push eax */
  push32((uint32_t)(EAX));
  /* 103f4651 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f4653 mov cx, word ptr [0x104119c2] */
  CX = (r16((uint32_t)(0x104119c2)));
  /* 103f465a push ecx */
  push32((uint32_t)(ECX));
  /* 103f465b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f465d mov dx, word ptr [0x104119c0] */
  DX = (r16((uint32_t)(0x104119c0)));
  /* 103f4664 push edx */
  push32((uint32_t)(EDX));
  /* 103f4665 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4667 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f4669 mov ax, word ptr [0x104119bc] */
  AX = (r16((uint32_t)(0x104119bc)));
  /* 103f466f push eax */
  push32((uint32_t)(EAX));
  /* 103f4670 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f4672 mov cx, word ptr [0x104119be] */
  CX = (r16((uint32_t)(0x104119be)));
  /* 103f4679 push ecx */
  push32((uint32_t)(ECX));
  /* 103f467a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f467c mov dx, word ptr [0x104119ba] */
  DX = (r16((uint32_t)(0x104119ba)));
  /* 103f4683 push edx */
  push32((uint32_t)(EDX));
  /* 103f4684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4687 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103f468a push ecx */
  push32((uint32_t)(ECX));
  /* 103f468b push 1 */
  push32((uint32_t)(0x1u));
  /* 103f468d push 1 */
  push32((uint32_t)(0x1u));
  /* 103f468f call 0x103f48f0 */
  push32(0x103f4694u); f_103f48f0();
  /* 103f4694 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4697 jmp 0x103f46ea */
  goto L_103f46ea;
L_103f4699:;
  /* 103f4699 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f469b mov dx, word ptr [0x104119c6] */
  DX = (r16((uint32_t)(0x104119c6)));
  /* 103f46a2 push edx */
  push32((uint32_t)(EDX));
  /* 103f46a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f46a5 mov ax, word ptr [0x104119c4] */
  AX = (r16((uint32_t)(0x104119c4)));
  /* 103f46ab push eax */
  push32((uint32_t)(EAX));
  /* 103f46ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f46ae mov cx, word ptr [0x104119c2] */
  CX = (r16((uint32_t)(0x104119c2)));
  /* 103f46b5 push ecx */
  push32((uint32_t)(ECX));
  /* 103f46b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f46b8 mov dx, word ptr [0x104119c0] */
  DX = (r16((uint32_t)(0x104119c0)));
  /* 103f46bf push edx */
  push32((uint32_t)(EDX));
  /* 103f46c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f46c2 mov ax, word ptr [0x104119be] */
  AX = (r16((uint32_t)(0x104119be)));
  /* 103f46c8 push eax */
  push32((uint32_t)(EAX));
  /* 103f46c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f46cb push 0 */
  push32((uint32_t)(0x0u));
  /* 103f46cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f46cf mov cx, word ptr [0x104119ba] */
  CX = (r16((uint32_t)(0x104119ba)));
  /* 103f46d6 push ecx */
  push32((uint32_t)(ECX));
  /* 103f46d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f46da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103f46dd push eax */
  push32((uint32_t)(EAX));
  /* 103f46de push 0 */
  push32((uint32_t)(0x0u));
  /* 103f46e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f46e2 call 0x103f48f0 */
  push32(0x103f46e7u); f_103f48f0();
  /* 103f46e7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f46ea:;
  /* 103f46ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f46ec mov cx, word ptr [0x10411964] */
  CX = (r16((uint32_t)(0x10411964)));
  /* 103f46f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f46f5 jne 0x103f4752 */
  if (!C.zf) goto L_103f4752;
  /* 103f46f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f46f9 mov dx, word ptr [0x10411972] */
  DX = (r16((uint32_t)(0x10411972)));
  /* 103f4700 push edx */
  push32((uint32_t)(EDX));
  /* 103f4701 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f4703 mov ax, word ptr [0x10411970] */
  AX = (r16((uint32_t)(0x10411970)));
  /* 103f4709 push eax */
  push32((uint32_t)(EAX));
  /* 103f470a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f470c mov cx, word ptr [0x1041196e] */
  CX = (r16((uint32_t)(0x1041196e)));
  /* 103f4713 push ecx */
  push32((uint32_t)(ECX));
  /* 103f4714 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f4716 mov dx, word ptr [0x1041196c] */
  DX = (r16((uint32_t)(0x1041196c)));
  /* 103f471d push edx */
  push32((uint32_t)(EDX));
  /* 103f471e push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4720 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f4722 mov ax, word ptr [0x10411968] */
  AX = (r16((uint32_t)(0x10411968)));
  /* 103f4728 push eax */
  push32((uint32_t)(EAX));
  /* 103f4729 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f472b mov cx, word ptr [0x1041196a] */
  CX = (r16((uint32_t)(0x1041196a)));
  /* 103f4732 push ecx */
  push32((uint32_t)(ECX));
  /* 103f4733 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f4735 mov dx, word ptr [0x10411966] */
  DX = (r16((uint32_t)(0x10411966)));
  /* 103f473c push edx */
  push32((uint32_t)(EDX));
  /* 103f473d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4740 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103f4743 push ecx */
  push32((uint32_t)(ECX));
  /* 103f4744 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f4746 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4748 call 0x103f48f0 */
  push32(0x103f474du); f_103f48f0();
  /* 103f474d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4750 jmp 0x103f47a3 */
  goto L_103f47a3;
L_103f4752:;
  /* 103f4752 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f4754 mov dx, word ptr [0x10411972] */
  DX = (r16((uint32_t)(0x10411972)));
  /* 103f475b push edx */
  push32((uint32_t)(EDX));
  /* 103f475c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f475e mov ax, word ptr [0x10411970] */
  AX = (r16((uint32_t)(0x10411970)));
  /* 103f4764 push eax */
  push32((uint32_t)(EAX));
  /* 103f4765 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f4767 mov cx, word ptr [0x1041196e] */
  CX = (r16((uint32_t)(0x1041196e)));
  /* 103f476e push ecx */
  push32((uint32_t)(ECX));
  /* 103f476f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f4771 mov dx, word ptr [0x1041196c] */
  DX = (r16((uint32_t)(0x1041196c)));
  /* 103f4778 push edx */
  push32((uint32_t)(EDX));
  /* 103f4779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f477b mov ax, word ptr [0x1041196a] */
  AX = (r16((uint32_t)(0x1041196a)));
  /* 103f4781 push eax */
  push32((uint32_t)(EAX));
  /* 103f4782 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4784 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4786 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f4788 mov cx, word ptr [0x10411966] */
  CX = (r16((uint32_t)(0x10411966)));
  /* 103f478f push ecx */
  push32((uint32_t)(ECX));
  /* 103f4790 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4793 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103f4796 push eax */
  push32((uint32_t)(EAX));
  /* 103f4797 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4799 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f479b call 0x103f48f0 */
  push32(0x103f47a0u); f_103f48f0();
  /* 103f47a0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f47a3:;
  /* 103f47a3 jmp 0x103f47eb */
  goto L_103f47eb;
L_103f47a5:;
  /* 103f47a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f47a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f47a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f47ab push 2 */
  push32((uint32_t)(0x2u));
  /* 103f47ad push 0 */
  push32((uint32_t)(0x0u));
  /* 103f47af push 0 */
  push32((uint32_t)(0x0u));
  /* 103f47b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f47b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 103f47b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f47b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103f47bb push edx */
  push32((uint32_t)(EDX));
  /* 103f47bc push 1 */
  push32((uint32_t)(0x1u));
  /* 103f47be push 1 */
  push32((uint32_t)(0x1u));
  /* 103f47c0 call 0x103f48f0 */
  push32(0x103f47c5u); f_103f48f0();
  /* 103f47c5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f47c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f47ca push 0 */
  push32((uint32_t)(0x0u));
  /* 103f47cc push 0 */
  push32((uint32_t)(0x0u));
  /* 103f47ce push 2 */
  push32((uint32_t)(0x2u));
  /* 103f47d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f47d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f47d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 103f47d6 push 0xa */
  push32((uint32_t)(0xau));
  /* 103f47d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f47db mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103f47de push ecx */
  push32((uint32_t)(ECX));
  /* 103f47df push 1 */
  push32((uint32_t)(0x1u));
  /* 103f47e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f47e3 call 0x103f48f0 */
  push32(0x103f47e8u); f_103f48f0();
  /* 103f47e8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f47eb:;
  /* 103f47eb mov edx, dword ptr [0x10410e2c] */
  EDX = (r32((uint32_t)(0x10410e2c)));
  /* 103f47f1 cmp edx, dword ptr [0x10410e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10410e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f47f7 jge 0x103f4844 */
  if ((C.sf==C.of)) goto L_103f4844;
  /* 103f47f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f47fc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 103f47ff cmp ecx, dword ptr [0x10410e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10410e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4805 jl 0x103f4815 */
  if ((C.sf!=C.of)) goto L_103f4815;
  /* 103f4807 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f480a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 103f480d cmp eax, dword ptr [0x10410e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10410e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4813 jle 0x103f481c */
  if ((C.zf||C.sf!=C.of)) goto L_103f481c;
L_103f4815:;
  /* 103f4815 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f4817 jmp 0x103f48e6 */
  goto L_103f48e6;
L_103f481c:;
  /* 103f481c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f481f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 103f4822 cmp edx, dword ptr [0x10410e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10410e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4828 jle 0x103f4842 */
  if ((C.zf||C.sf!=C.of)) goto L_103f4842;
  /* 103f482a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f482d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 103f4830 cmp ecx, dword ptr [0x10410e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10410e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4836 jge 0x103f4842 */
  if ((C.sf==C.of)) goto L_103f4842;
  /* 103f4838 mov eax, 1 */
  EAX = (0x1u);
  /* 103f483d jmp 0x103f48e6 */
  goto L_103f48e6;
L_103f4842:;
  /* 103f4842 jmp 0x103f4887 */
  goto L_103f4887;
L_103f4844:;
  /* 103f4844 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4847 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 103f484a cmp eax, dword ptr [0x10410e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10410e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4850 jl 0x103f4860 */
  if ((C.sf!=C.of)) goto L_103f4860;
  /* 103f4852 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4855 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 103f4858 cmp edx, dword ptr [0x10410e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10410e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f485e jle 0x103f4867 */
  if ((C.zf||C.sf!=C.of)) goto L_103f4867;
L_103f4860:;
  /* 103f4860 mov eax, 1 */
  EAX = (0x1u);
  /* 103f4865 jmp 0x103f48e6 */
  goto L_103f48e6;
L_103f4867:;
  /* 103f4867 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f486a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 103f486d cmp ecx, dword ptr [0x10410e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10410e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4873 jle 0x103f4887 */
  if ((C.zf||C.sf!=C.of)) goto L_103f4887;
  /* 103f4875 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4878 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 103f487b cmp eax, dword ptr [0x10410e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10410e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4881 jge 0x103f4887 */
  if ((C.sf==C.of)) goto L_103f4887;
  /* 103f4883 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f4885 jmp 0x103f48e6 */
  goto L_103f48e6;
L_103f4887:;
  /* 103f4887 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f488a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103f488d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f4890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4893 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f4895 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4897 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f489a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103f489d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f48a3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f48a5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f48ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103f48ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f48b1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 103f48b4 cmp edx, dword ptr [0x10410e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10410e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f48ba jne 0x103f48d2 */
  if (!C.zf) goto L_103f48d2;
  /* 103f48bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f48bf cmp eax, dword ptr [0x10410e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10410e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f48c5 jl 0x103f48ce */
  if ((C.sf!=C.of)) goto L_103f48ce;
  /* 103f48c7 mov eax, 1 */
  EAX = (0x1u);
  /* 103f48cc jmp 0x103f48e6 */
  goto L_103f48e6;
L_103f48ce:;
  /* 103f48ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f48d0 jmp 0x103f48e6 */
  goto L_103f48e6;
L_103f48d2:;
  /* 103f48d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f48d5 cmp ecx, dword ptr [0x10410e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10410e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f48db jge 0x103f48e4 */
  if ((C.sf==C.of)) goto L_103f48e4;
  /* 103f48dd mov eax, 1 */
  EAX = (0x1u);
  /* 103f48e2 jmp 0x103f48e6 */
  goto L_103f48e6;
L_103f48e4:;
  /* 103f48e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103f48e6:;
  /* 103f48e6 mov esp, ebp */
  ESP = (EBP);
  /* 103f48e8 pop ebp */
  EBP = (pop32());
  /* 103f48e9 ret  */
  ESPCHK(0x103f45f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100148f0 @ 0x103f48f0 (504 bytes, 145 insns) */
void f_103f48f0(void) {
  FTRACE(0x103f48f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f48f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f48f1 mov ebp, esp */
  EBP = (ESP);
  /* 103f48f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f48f6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f48fa jne 0x103f49cc */
  if (!C.zf) goto L_103f49cc;
  /* 103f4900 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f4903 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103f4906 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f4908 jne 0x103f4919 */
  if (!C.zf) goto L_103f4919;
  /* 103f490a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f490d mov edx, dword ptr [ecx*4 + 0x10410e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10410e4c)));
  /* 103f4914 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103f4917 jmp 0x103f4926 */
  goto L_103f4926;
L_103f4919:;
  /* 103f4919 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f491c mov ecx, dword ptr [eax*4 + 0x10410e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10410e80)));
  /* 103f4923 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_103f4926:;
  /* 103f4926 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4929 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f492c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103f492f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f4932 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f4935 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f493b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f493e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4940 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f4943 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f4946 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 103f4949 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 103f494d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103f494e mov ecx, 7 */
  ECX = (0x7u);
  /* 103f4953 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103f4955 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103f4958 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f495b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f495e jge 0x103f4979 */
  if ((C.sf==C.of)) goto L_103f4979;
  /* 103f4960 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103f4963 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f4966 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f4969 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f496c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f496f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4972 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4974 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f4977 jmp 0x103f498d */
  goto L_103f498d;
L_103f4979:;
  /* 103f4979 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103f497c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f497f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f4982 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f4985 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4988 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f498a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103f498d:;
  /* 103f498d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4991 jne 0x103f49ca */
  if (!C.zf) goto L_103f49ca;
  /* 103f4993 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f4996 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 103f4999 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f499b jne 0x103f49ac */
  if (!C.zf) goto L_103f49ac;
  /* 103f499d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f49a0 mov eax, dword ptr [edx*4 + 0x10410e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10410e50)));
  /* 103f49a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103f49aa jmp 0x103f49b9 */
  goto L_103f49b9;
L_103f49ac:;
  /* 103f49ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f49af mov edx, dword ptr [ecx*4 + 0x10410e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10410e84)));
  /* 103f49b6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103f49b9:;
  /* 103f49b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f49bc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f49bf jle 0x103f49ca */
  if ((C.zf||C.sf!=C.of)) goto L_103f49ca;
  /* 103f49c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f49c4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f49c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103f49ca:;
  /* 103f49ca jmp 0x103f4a01 */
  goto L_103f4a01;
L_103f49cc:;
  /* 103f49cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f49cf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103f49d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f49d4 jne 0x103f49e5 */
  if (!C.zf) goto L_103f49e5;
  /* 103f49d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f49d9 mov ecx, dword ptr [eax*4 + 0x10410e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10410e4c)));
  /* 103f49e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103f49e3 jmp 0x103f49f2 */
  goto L_103f49f2;
L_103f49e5:;
  /* 103f49e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f49e8 mov eax, dword ptr [edx*4 + 0x10410e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10410e80)));
  /* 103f49ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_103f49f2:;
  /* 103f49f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f49f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103f49f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f49fb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f49fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103f4a01:;
  /* 103f4a01 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4a05 jne 0x103f4a41 */
  if (!C.zf) goto L_103f4a41;
  /* 103f4a07 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f4a0a mov dword ptr [0x10410e2c], eax */
  w32((uint32_t)(0x10410e2c), (EAX));
  /* 103f4a0f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 103f4a12 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f4a15 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 103f4a18 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4a1a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f4a1d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 103f4a20 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4a22 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f4a28 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 103f4a2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4a2d mov dword ptr [0x10410e30], ecx */
  w32((uint32_t)(0x10410e30), (ECX));
  /* 103f4a33 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f4a36 mov dword ptr [0x10410e28], edx */
  w32((uint32_t)(0x10410e28), (EDX));
  /* 103f4a3c jmp 0x103f4ae4 */
  goto L_103f4ae4;
L_103f4a41:;
  /* 103f4a41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f4a44 mov dword ptr [0x10410e3c], eax */
  w32((uint32_t)(0x10410e3c), (EAX));
  /* 103f4a49 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 103f4a4c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f4a4f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 103f4a52 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4a54 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f4a57 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 103f4a5a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4a5c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f4a62 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 103f4a65 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4a67 mov dword ptr [0x10410e40], ecx */
  w32((uint32_t)(0x10410e40), (ECX));
  /* 103f4a6d mov edx, dword ptr [0x10410d98] */
  EDX = (r32((uint32_t)(0x10410d98)));
  /* 103f4a73 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103f4a79 mov eax, dword ptr [0x10410e40] */
  EAX = (r32((uint32_t)(0x10410e40)));
  /* 103f4a7e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4a80 mov dword ptr [0x10410e40], eax */
  w32((uint32_t)(0x10410e40), (EAX));
  /* 103f4a85 cmp dword ptr [0x10410e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10410e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4a8c jge 0x103f4ab1 */
  if ((C.sf==C.of)) goto L_103f4ab1;
  /* 103f4a8e mov ecx, dword ptr [0x10410e40] */
  ECX = (r32((uint32_t)(0x10410e40)));
  /* 103f4a94 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4a9a mov dword ptr [0x10410e40], ecx */
  w32((uint32_t)(0x10410e40), (ECX));
  /* 103f4aa0 mov edx, dword ptr [0x10410e3c] */
  EDX = (r32((uint32_t)(0x10410e3c)));
  /* 103f4aa6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f4aa9 mov dword ptr [0x10410e3c], edx */
  w32((uint32_t)(0x10410e3c), (EDX));
  /* 103f4aaf jmp 0x103f4adb */
  goto L_103f4adb;
L_103f4ab1:;
  /* 103f4ab1 cmp dword ptr [0x10410e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10410e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4abb jl 0x103f4adb */
  if ((C.sf!=C.of)) goto L_103f4adb;
  /* 103f4abd mov eax, dword ptr [0x10410e40] */
  EAX = (r32((uint32_t)(0x10410e40)));
  /* 103f4ac2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f4ac7 mov dword ptr [0x10410e40], eax */
  w32((uint32_t)(0x10410e40), (EAX));
  /* 103f4acc mov ecx, dword ptr [0x10410e3c] */
  ECX = (r32((uint32_t)(0x10410e3c)));
  /* 103f4ad2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4ad5 mov dword ptr [0x10410e3c], ecx */
  w32((uint32_t)(0x10410e3c), (ECX));
L_103f4adb:;
  /* 103f4adb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f4ade mov dword ptr [0x10410e38], edx */
  w32((uint32_t)(0x10410e38), (EDX));
L_103f4ae4:;
  /* 103f4ae4 mov esp, ebp */
  ESP = (EBP);
  /* 103f4ae6 pop ebp */
  EBP = (pop32());
  /* 103f4ae7 ret  */
  ESPCHK(0x103f48f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014af0 @ 0x103f4af0 (382 bytes, 135 insns) */
void f_103f4af0(void) {
  FTRACE(0x103f4af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f4af0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f4af1 mov ebp, esp */
  EBP = (ESP);
  /* 103f4af3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103f4af5 push 0x1040dbd0 */
  push32((uint32_t)(0x1040dbd0u));
  /* 103f4afa push 0x103ee7b8 */
  push32((uint32_t)(0x103ee7b8u));
  /* 103f4aff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 103f4b05 push eax */
  push32((uint32_t)(EAX));
  /* 103f4b06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 103f4b0d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4b10 push ebx */
  push32((uint32_t)(EBX));
  /* 103f4b11 push esi */
  push32((uint32_t)(ESI));
  /* 103f4b12 push edi */
  push32((uint32_t)(EDI));
  /* 103f4b13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103f4b16 cmp dword ptr [0x104119d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4b1d jne 0x103f4b62 */
  if (!C.zf) goto L_103f4b62;
  /* 103f4b1f push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4b21 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4b23 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f4b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4b27 call dword ptr [0x104142d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142d0))), 0x103f4b2du);
  /* 103f4b2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f4b2f je 0x103f4b3d */
  if (C.zf) goto L_103f4b3d;
  /* 103f4b31 mov dword ptr [0x104119d4], 1 */
  w32((uint32_t)(0x104119d4), (0x1u));
  /* 103f4b3b jmp 0x103f4b62 */
  goto L_103f4b62;
L_103f4b3d:;
  /* 103f4b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4b41 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f4b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4b45 call dword ptr [0x104142e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142e8))), 0x103f4b4bu);
  /* 103f4b4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f4b4d je 0x103f4b5b */
  if (C.zf) goto L_103f4b5b;
  /* 103f4b4f mov dword ptr [0x104119d4], 2 */
  w32((uint32_t)(0x104119d4), (0x2u));
  /* 103f4b59 jmp 0x103f4b62 */
  goto L_103f4b62;
L_103f4b5b:;
  /* 103f4b5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f4b5d jmp 0x103f4c71 */
  goto L_103f4c71;
L_103f4b62:;
  /* 103f4b62 cmp dword ptr [0x104119d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104119d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4b69 jne 0x103f4b86 */
  if (!C.zf) goto L_103f4b86;
  /* 103f4b6b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f4b6e push eax */
  push32((uint32_t)(EAX));
  /* 103f4b6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f4b72 push ecx */
  push32((uint32_t)(ECX));
  /* 103f4b73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f4b76 push edx */
  push32((uint32_t)(EDX));
  /* 103f4b77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4b7a push eax */
  push32((uint32_t)(EAX));
  /* 103f4b7b call dword ptr [0x104142d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142d0))), 0x103f4b81u);
  /* 103f4b81 jmp 0x103f4c71 */
  goto L_103f4c71;
L_103f4b86:;
  /* 103f4b86 cmp dword ptr [0x104119d4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104119d4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4b8d jne 0x103f4c6f */
  if (!C.zf) goto L_103f4c6f;
  /* 103f4b93 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4b97 jne 0x103f4ba2 */
  if (!C.zf) goto L_103f4ba2;
  /* 103f4b99 mov ecx, dword ptr [0x10411888] */
  ECX = (r32((uint32_t)(0x10411888)));
  /* 103f4b9f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_103f4ba2:;
  /* 103f4ba2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4ba6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f4ba9 push edx */
  push32((uint32_t)(EDX));
  /* 103f4baa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4bad push eax */
  push32((uint32_t)(EAX));
  /* 103f4bae call dword ptr [0x104142e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142e8))), 0x103f4bb4u);
  /* 103f4bb4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103f4bb7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4bbb jne 0x103f4bc4 */
  if (!C.zf) goto L_103f4bc4;
  /* 103f4bbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f4bbf jmp 0x103f4c71 */
  goto L_103f4c71;
L_103f4bc4:;
  /* 103f4bc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103f4bcb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103f4bce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4bd1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103f4bd3 call 0x103e8850 */
  push32(0x103f4bd8u); f_103e8850();
  /* 103f4bd8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 103f4bdb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103f4bde mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103f4be1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103f4be4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103f4beb jmp 0x103f4c04 */
  goto L_103f4c04;
  /* 103f4bed mov eax, 1 */
  EAX = (0x1u);
  /* 103f4bf2 ret  */
  ESPCHK(0x103f4af0u, _esp0);
  ESP += 4; return;
  /* 103f4bf3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103f4bf6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103f4bfd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103f4c04:;
  /* 103f4c04 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4c08 jne 0x103f4c0e */
  if (!C.zf) goto L_103f4c0e;
  /* 103f4c0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f4c0c jmp 0x103f4c71 */
  goto L_103f4c71;
L_103f4c0e:;
  /* 103f4c0e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103f4c11 push edx */
  push32((uint32_t)(EDX));
  /* 103f4c12 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f4c15 push eax */
  push32((uint32_t)(EAX));
  /* 103f4c16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f4c19 push ecx */
  push32((uint32_t)(ECX));
  /* 103f4c1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4c1d push edx */
  push32((uint32_t)(EDX));
  /* 103f4c1e call dword ptr [0x104142e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142e8))), 0x103f4c24u);
  /* 103f4c24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f4c26 jne 0x103f4c2c */
  if (!C.zf) goto L_103f4c2c;
  /* 103f4c28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f4c2a jmp 0x103f4c71 */
  goto L_103f4c71;
L_103f4c2c:;
  /* 103f4c2c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4c30 jne 0x103f4c4d */
  if (!C.zf) goto L_103f4c4d;
  /* 103f4c32 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4c36 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103f4c38 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f4c3b push eax */
  push32((uint32_t)(EAX));
  /* 103f4c3c push 1 */
  push32((uint32_t)(0x1u));
  /* 103f4c3e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f4c41 push ecx */
  push32((uint32_t)(ECX));
  /* 103f4c42 call dword ptr [0x10414318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414318))), 0x103f4c48u);
  /* 103f4c48 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103f4c4b jmp 0x103f4c6a */
  goto L_103f4c6a;
L_103f4c4d:;
  /* 103f4c4d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f4c50 push edx */
  push32((uint32_t)(EDX));
  /* 103f4c51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f4c54 push eax */
  push32((uint32_t)(EAX));
  /* 103f4c55 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103f4c57 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f4c5a push ecx */
  push32((uint32_t)(ECX));
  /* 103f4c5b push 1 */
  push32((uint32_t)(0x1u));
  /* 103f4c5d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f4c60 push edx */
  push32((uint32_t)(EDX));
  /* 103f4c61 call dword ptr [0x10414318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414318))), 0x103f4c67u);
  /* 103f4c67 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103f4c6a:;
  /* 103f4c6a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103f4c6d jmp 0x103f4c71 */
  goto L_103f4c71;
L_103f4c6f:;
  /* 103f4c6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103f4c71:;
  /* 103f4c71 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 103f4c74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f4c77 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 103f4c7e pop edi */
  EDI = (pop32());
  /* 103f4c7f pop esi */
  ESI = (pop32());
  /* 103f4c80 pop ebx */
  EBX = (pop32());
  /* 103f4c81 mov esp, ebp */
  ESP = (EBP);
  /* 103f4c83 pop ebp */
  EBP = (pop32());
  /* 103f4c84 ret  */
  ESPCHK(0x103f4af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c90 @ 0x103f4c90 (398 bytes, 140 insns) */
void f_103f4c90(void) {
  FTRACE(0x103f4c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f4c90 push ebp */
  push32((uint32_t)(EBP));
  /* 103f4c91 mov ebp, esp */
  EBP = (ESP);
  /* 103f4c93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103f4c95 push 0x1040dbe0 */
  push32((uint32_t)(0x1040dbe0u));
  /* 103f4c9a push 0x103ee7b8 */
  push32((uint32_t)(0x103ee7b8u));
  /* 103f4c9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 103f4ca5 push eax */
  push32((uint32_t)(EAX));
  /* 103f4ca6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 103f4cad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4cb0 push ebx */
  push32((uint32_t)(EBX));
  /* 103f4cb1 push esi */
  push32((uint32_t)(ESI));
  /* 103f4cb2 push edi */
  push32((uint32_t)(EDI));
  /* 103f4cb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103f4cb6 cmp dword ptr [0x104119d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4cbd jne 0x103f4d02 */
  if (!C.zf) goto L_103f4d02;
  /* 103f4cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4cc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4cc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f4cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4cc7 call dword ptr [0x104142d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142d0))), 0x103f4ccdu);
  /* 103f4ccd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f4ccf je 0x103f4cdd */
  if (C.zf) goto L_103f4cdd;
  /* 103f4cd1 mov dword ptr [0x104119d8], 1 */
  w32((uint32_t)(0x104119d8), (0x1u));
  /* 103f4cdb jmp 0x103f4d02 */
  goto L_103f4d02;
L_103f4cdd:;
  /* 103f4cdd push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4cdf push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4ce1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f4ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4ce5 call dword ptr [0x104142e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142e8))), 0x103f4cebu);
  /* 103f4ceb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f4ced je 0x103f4cfb */
  if (C.zf) goto L_103f4cfb;
  /* 103f4cef mov dword ptr [0x104119d8], 2 */
  w32((uint32_t)(0x104119d8), (0x2u));
  /* 103f4cf9 jmp 0x103f4d02 */
  goto L_103f4d02;
L_103f4cfb:;
  /* 103f4cfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f4cfd jmp 0x103f4e21 */
  goto L_103f4e21;
L_103f4d02:;
  /* 103f4d02 cmp dword ptr [0x104119d8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104119d8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4d09 jne 0x103f4d26 */
  if (!C.zf) goto L_103f4d26;
  /* 103f4d0b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f4d0e push eax */
  push32((uint32_t)(EAX));
  /* 103f4d0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f4d12 push ecx */
  push32((uint32_t)(ECX));
  /* 103f4d13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f4d16 push edx */
  push32((uint32_t)(EDX));
  /* 103f4d17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4d1a push eax */
  push32((uint32_t)(EAX));
  /* 103f4d1b call dword ptr [0x104142e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142e8))), 0x103f4d21u);
  /* 103f4d21 jmp 0x103f4e21 */
  goto L_103f4e21;
L_103f4d26:;
  /* 103f4d26 cmp dword ptr [0x104119d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104119d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4d2d jne 0x103f4e1f */
  if (!C.zf) goto L_103f4e1f;
  /* 103f4d33 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4d37 jne 0x103f4d42 */
  if (!C.zf) goto L_103f4d42;
  /* 103f4d39 mov ecx, dword ptr [0x10411888] */
  ECX = (r32((uint32_t)(0x10411888)));
  /* 103f4d3f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_103f4d42:;
  /* 103f4d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4d46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f4d49 push edx */
  push32((uint32_t)(EDX));
  /* 103f4d4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4d4d push eax */
  push32((uint32_t)(EAX));
  /* 103f4d4e call dword ptr [0x104142d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142d0))), 0x103f4d54u);
  /* 103f4d54 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103f4d57 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4d5b jne 0x103f4d64 */
  if (!C.zf) goto L_103f4d64;
  /* 103f4d5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f4d5f jmp 0x103f4e21 */
  goto L_103f4e21;
L_103f4d64:;
  /* 103f4d64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103f4d6b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103f4d6e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103f4d70 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4d73 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103f4d75 call 0x103e8850 */
  push32(0x103f4d7au); f_103e8850();
  /* 103f4d7a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 103f4d7d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103f4d80 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103f4d83 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103f4d86 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103f4d8d jmp 0x103f4da6 */
  goto L_103f4da6;
  /* 103f4d8f mov eax, 1 */
  EAX = (0x1u);
  /* 103f4d94 ret  */
  ESPCHK(0x103f4c90u, _esp0);
  ESP += 4; return;
  /* 103f4d95 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103f4d98 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103f4d9f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103f4da6:;
  /* 103f4da6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4daa jne 0x103f4db0 */
  if (!C.zf) goto L_103f4db0;
  /* 103f4dac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f4dae jmp 0x103f4e21 */
  goto L_103f4e21;
L_103f4db0:;
  /* 103f4db0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103f4db3 push edx */
  push32((uint32_t)(EDX));
  /* 103f4db4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f4db7 push eax */
  push32((uint32_t)(EAX));
  /* 103f4db8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f4dbb push ecx */
  push32((uint32_t)(ECX));
  /* 103f4dbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4dbf push edx */
  push32((uint32_t)(EDX));
  /* 103f4dc0 call dword ptr [0x104142d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142d0))), 0x103f4dc6u);
  /* 103f4dc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f4dc8 jne 0x103f4dce */
  if (!C.zf) goto L_103f4dce;
  /* 103f4dca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f4dcc jmp 0x103f4e21 */
  goto L_103f4e21;
L_103f4dce:;
  /* 103f4dce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4dd2 jne 0x103f4df6 */
  if (!C.zf) goto L_103f4df6;
  /* 103f4dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4dd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4dd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4dda push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4ddc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103f4dde mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f4de1 push eax */
  push32((uint32_t)(EAX));
  /* 103f4de2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103f4de7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f4dea push ecx */
  push32((uint32_t)(ECX));
  /* 103f4deb call dword ptr [0x10414364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414364))), 0x103f4df1u);
  /* 103f4df1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103f4df4 jmp 0x103f4e1a */
  goto L_103f4e1a;
L_103f4df6:;
  /* 103f4df6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4df8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4dfa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f4dfd push edx */
  push32((uint32_t)(EDX));
  /* 103f4dfe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f4e01 push eax */
  push32((uint32_t)(EAX));
  /* 103f4e02 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103f4e04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f4e07 push ecx */
  push32((uint32_t)(ECX));
  /* 103f4e08 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103f4e0d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f4e10 push edx */
  push32((uint32_t)(EDX));
  /* 103f4e11 call dword ptr [0x10414364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414364))), 0x103f4e17u);
  /* 103f4e17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103f4e1a:;
  /* 103f4e1a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103f4e1d jmp 0x103f4e21 */
  goto L_103f4e21;
L_103f4e1f:;
  /* 103f4e1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103f4e21:;
  /* 103f4e21 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 103f4e24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f4e27 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 103f4e2e pop edi */
  EDI = (pop32());
  /* 103f4e2f pop esi */
  ESI = (pop32());
  /* 103f4e30 pop ebx */
  EBX = (pop32());
  /* 103f4e31 mov esp, ebp */
  ESP = (EBP);
  /* 103f4e33 pop ebp */
  EBP = (pop32());
  /* 103f4e34 ret  */
  ESPCHK(0x103f4c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e40 @ 0x103f4e40 (11 bytes, 6 insns) */
void f_103f4e40(void) {
  FTRACE(0x103f4e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f4e40 push ebp */
  push32((uint32_t)(EBP));
  /* 103f4e41 mov ebp, esp */
  EBP = (ESP);
  /* 103f4e43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4e46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4e49 pop ebp */
  EBP = (pop32());
  /* 103f4e4a ret  */
  ESPCHK(0x103f4e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e50 @ 0x103f4e50 (147 bytes, 43 insns) */
void f_103f4e50(void) {
  FTRACE(0x103f4e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f4e50 push ebp */
  push32((uint32_t)(EBP));
  /* 103f4e51 mov ebp, esp */
  EBP = (ESP);
  /* 103f4e53 push ecx */
  push32((uint32_t)(ECX));
  /* 103f4e54 cmp dword ptr [0x10411878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4e5b jne 0x103f4e77 */
  if (!C.zf) goto L_103f4e77;
  /* 103f4e5d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4e61 jl 0x103f4e72 */
  if ((C.sf!=C.of)) goto L_103f4e72;
  /* 103f4e63 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4e67 jg 0x103f4e72 */
  if ((!C.zf&&C.sf==C.of)) goto L_103f4e72;
  /* 103f4e69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4e6c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4e6f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103f4e72:;
  /* 103f4e72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4e75 jmp 0x103f4edf */
  goto L_103f4edf;
L_103f4e77:;
  /* 103f4e77 push 0x10411a04 */
  push32((uint32_t)(0x10411a04u));
  /* 103f4e7c call dword ptr [0x10414390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414390))), 0x103f4e82u);
  /* 103f4e82 cmp dword ptr [0x104119f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4e89 je 0x103f4ea9 */
  if (C.zf) goto L_103f4ea9;
  /* 103f4e8b push 0x10411a04 */
  push32((uint32_t)(0x10411a04u));
  /* 103f4e90 call dword ptr [0x10414380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414380))), 0x103f4e96u);
  /* 103f4e96 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103f4e98 call 0x103e90b0 */
  push32(0x103f4e9du); f_103e90b0();
  /* 103f4e9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4ea0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103f4ea7 jmp 0x103f4eb0 */
  goto L_103f4eb0;
L_103f4ea9:;
  /* 103f4ea9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103f4eb0:;
  /* 103f4eb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 103f4eb4 call 0x103f4ef0 */
  push32(0x103f4eb9u); f_103f4ef0();
  /* 103f4eb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4ebc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103f4ebf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4ec3 je 0x103f4ed1 */
  if (C.zf) goto L_103f4ed1;
  /* 103f4ec5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103f4ec7 call 0x103e9150 */
  push32(0x103f4eccu); f_103e9150();
  /* 103f4ecc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4ecf jmp 0x103f4edc */
  goto L_103f4edc;
L_103f4ed1:;
  /* 103f4ed1 push 0x10411a04 */
  push32((uint32_t)(0x10411a04u));
  /* 103f4ed6 call dword ptr [0x10414380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414380))), 0x103f4edcu);
L_103f4edc:;
  /* 103f4edc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_103f4edf:;
  /* 103f4edf mov esp, ebp */
  ESP = (EBP);
  /* 103f4ee1 pop ebp */
  EBP = (pop32());
  /* 103f4ee2 ret  */
  ESPCHK(0x103f4e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ef0 @ 0x103f4ef0 (299 bytes, 91 insns) */
void f_103f4ef0(void) {
  FTRACE(0x103f4ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f4ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f4ef1 mov ebp, esp */
  EBP = (ESP);
  /* 103f4ef3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f4ef6 cmp dword ptr [0x10411878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4efd jne 0x103f4f1c */
  if (!C.zf) goto L_103f4f1c;
  /* 103f4eff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4f03 jl 0x103f4f14 */
  if ((C.sf!=C.of)) goto L_103f4f14;
  /* 103f4f05 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4f09 jg 0x103f4f14 */
  if ((!C.zf&&C.sf==C.of)) goto L_103f4f14;
  /* 103f4f0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4f0e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4f11 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103f4f14:;
  /* 103f4f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4f17 jmp 0x103f5017 */
  goto L_103f5017;
L_103f4f1c:;
  /* 103f4f1c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4f23 jge 0x103f4f63 */
  if ((C.sf==C.of)) goto L_103f4f63;
  /* 103f4f25 cmp dword ptr [0x1040fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1040fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4f2c jle 0x103f4f41 */
  if ((C.zf||C.sf!=C.of)) goto L_103f4f41;
  /* 103f4f2e push 1 */
  push32((uint32_t)(0x1u));
  /* 103f4f30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4f33 push ecx */
  push32((uint32_t)(ECX));
  /* 103f4f34 call 0x103eb6c0 */
  push32(0x103f4f39u); f_103eb6c0();
  /* 103f4f39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4f3c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103f4f3f jmp 0x103f4f55 */
  goto L_103f4f55;
L_103f4f41:;
  /* 103f4f41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4f44 mov eax, dword ptr [0x1040fc98] */
  EAX = (r32((uint32_t)(0x1040fc98)));
  /* 103f4f49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f4f4b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 103f4f4f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103f4f52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_103f4f55:;
  /* 103f4f55 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4f59 jne 0x103f4f63 */
  if (!C.zf) goto L_103f4f63;
  /* 103f4f5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4f5e jmp 0x103f5017 */
  goto L_103f5017;
L_103f4f63:;
  /* 103f4f63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4f66 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 103f4f69 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103f4f6f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103f4f75 mov eax, dword ptr [0x1040fc98] */
  EAX = (r32((uint32_t)(0x1040fc98)));
  /* 103f4f7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f4f7c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 103f4f80 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 103f4f86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f4f88 je 0x103f4fac */
  if (C.zf) goto L_103f4fac;
  /* 103f4f8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4f8d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 103f4f90 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103f4f96 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 103f4f99 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 103f4f9c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 103f4f9f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 103f4fa3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 103f4faa jmp 0x103f4fbd */
  goto L_103f4fbd;
L_103f4fac:;
  /* 103f4fac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 103f4faf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 103f4fb2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 103f4fb6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_103f4fbd:;
  /* 103f4fbd push 1 */
  push32((uint32_t)(0x1u));
  /* 103f4fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 103f4fc1 push 3 */
  push32((uint32_t)(0x3u));
  /* 103f4fc3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 103f4fc6 push edx */
  push32((uint32_t)(EDX));
  /* 103f4fc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f4fca push eax */
  push32((uint32_t)(EAX));
  /* 103f4fcb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 103f4fce push ecx */
  push32((uint32_t)(ECX));
  /* 103f4fcf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103f4fd4 mov edx, dword ptr [0x10411878] */
  EDX = (r32((uint32_t)(0x10411878)));
  /* 103f4fda push edx */
  push32((uint32_t)(EDX));
  /* 103f4fdb call 0x103edaa0 */
  push32(0x103f4fe0u); f_103edaa0();
  /* 103f4fe0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f4fe3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f4fe6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4fea jne 0x103f4ff1 */
  if (!C.zf) goto L_103f4ff1;
  /* 103f4fec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f4fef jmp 0x103f5017 */
  goto L_103f5017;
L_103f4ff1:;
  /* 103f4ff1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f4ff5 jne 0x103f5001 */
  if (!C.zf) goto L_103f5001;
  /* 103f4ff7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f4ffa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f4fff jmp 0x103f5017 */
  goto L_103f5017;
L_103f5001:;
  /* 103f5001 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f5004 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f5009 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 103f500c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103f5012 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 103f5015 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_103f5017:;
  /* 103f5017 mov esp, ebp */
  ESP = (EBP);
  /* 103f5019 pop ebp */
  EBP = (pop32());
  /* 103f501a ret  */
  ESPCHK(0x103f4ef0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x103f5020 (52 bytes, 19 insns) */
void f_103f5020(void) {
  FTRACE(0x103f5020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f5020 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103f5024 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 103f5028 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103f502a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 103f502e jne 0x103f5039 */
  if (!C.zf) goto L_103f5039;
  /* 103f5030 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 103f5034 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103f5036 ret 0x10 */
  ESPCHK(0x103f5020u, _esp0);
  ESP += 20; return;
L_103f5039:;
  /* 103f5039 push ebx */
  push32((uint32_t)(EBX));
  /* 103f503a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103f503c mov ebx, eax */
  EBX = (EAX);
  /* 103f503e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103f5042 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103f5046 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5048 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103f504c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103f504e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5050 pop ebx */
  EBX = (pop32());
  /* 103f5051 ret 0x10 */
  ESPCHK(0x103f5020u, _esp0);
  ESP += 20; return;
}

/* FUN_10015060 @ 0x103f5060 (46 bytes, 18 insns) */
void f_103f5060(void) {
  FTRACE(0x103f5060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f5060 push ebp */
  push32((uint32_t)(EBP));
  /* 103f5061 mov ebp, esp */
  EBP = (ESP);
  /* 103f5063 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5064 push 0xc */
  push32((uint32_t)(0xcu));
  /* 103f5066 call 0x103e90b0 */
  push32(0x103f506bu); f_103e90b0();
  /* 103f506b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f506e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5071 push eax */
  push32((uint32_t)(EAX));
  /* 103f5072 call 0x103f5090 */
  push32(0x103f5077u); f_103f5090();
  /* 103f5077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f507a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f507d push 0xc */
  push32((uint32_t)(0xcu));
  /* 103f507f call 0x103e9150 */
  push32(0x103f5084u); f_103e9150();
  /* 103f5084 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f508a mov esp, ebp */
  ESP = (EBP);
  /* 103f508c pop ebp */
  EBP = (pop32());
  /* 103f508d ret  */
  ESPCHK(0x103f5060u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x103f5090 (198 bytes, 69 insns) */
void f_103f5090(void) {
  FTRACE(0x103f5090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f5090 push ebp */
  push32((uint32_t)(EBP));
  /* 103f5091 mov ebp, esp */
  EBP = (ESP);
  /* 103f5093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f5096 mov eax, dword ptr [0x10411698] */
  EAX = (r32((uint32_t)(0x10411698)));
  /* 103f509b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f509e cmp dword ptr [0x104131a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104131a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f50a5 jne 0x103f50ae */
  if (!C.zf) goto L_103f50ae;
  /* 103f50a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f50a9 jmp 0x103f5152 */
  goto L_103f5152;
L_103f50ae:;
  /* 103f50ae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f50b2 jne 0x103f50d6 */
  if (!C.zf) goto L_103f50d6;
  /* 103f50b4 cmp dword ptr [0x104116a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104116a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f50bb je 0x103f50d6 */
  if (C.zf) goto L_103f50d6;
  /* 103f50bd call 0x103f51b0 */
  push32(0x103f50c2u); f_103f51b0();
  /* 103f50c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f50c4 je 0x103f50cd */
  if (C.zf) goto L_103f50cd;
  /* 103f50c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f50c8 jmp 0x103f5152 */
  goto L_103f5152;
L_103f50cd:;
  /* 103f50cd mov ecx, dword ptr [0x10411698] */
  ECX = (r32((uint32_t)(0x10411698)));
  /* 103f50d3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103f50d6:;
  /* 103f50d6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f50da je 0x103f5150 */
  if (C.zf) goto L_103f5150;
  /* 103f50dc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f50e0 je 0x103f5150 */
  if (C.zf) goto L_103f5150;
  /* 103f50e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f50e5 push edx */
  push32((uint32_t)(EDX));
  /* 103f50e6 call 0x103e84e0 */
  push32(0x103f50ebu); f_103e84e0();
  /* 103f50eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f50ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103f50f1:;
  /* 103f50f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f50f4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f50f7 je 0x103f5150 */
  if (C.zf) goto L_103f5150;
  /* 103f50f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f50fc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f50fe push edx */
  push32((uint32_t)(EDX));
  /* 103f50ff call 0x103e84e0 */
  push32(0x103f5104u); f_103e84e0();
  /* 103f5104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5107 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f510a jbe 0x103f5145 */
  if ((C.cf||C.zf)) goto L_103f5145;
  /* 103f510c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f510f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f5111 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f5114 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 103f5118 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f511b jne 0x103f5145 */
  if (!C.zf) goto L_103f5145;
  /* 103f511d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f5120 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5121 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5124 push edx */
  push32((uint32_t)(EDX));
  /* 103f5125 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5128 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f512a push ecx */
  push32((uint32_t)(ECX));
  /* 103f512b call 0x103f5160 */
  push32(0x103f5130u); f_103f5160();
  /* 103f5130 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5133 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f5135 jne 0x103f5145 */
  if (!C.zf) goto L_103f5145;
  /* 103f5137 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f513a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f513c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f513f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 103f5143 jmp 0x103f5152 */
  goto L_103f5152;
L_103f5145:;
  /* 103f5145 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5148 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f514b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103f514e jmp 0x103f50f1 */
  goto L_103f50f1;
L_103f5150:;
  /* 103f5150 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103f5152:;
  /* 103f5152 mov esp, ebp */
  ESP = (EBP);
  /* 103f5154 pop ebp */
  EBP = (pop32());
  /* 103f5155 ret  */
  ESPCHK(0x103f5090u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x103f5160 (79 bytes, 32 insns) */
void f_103f5160(void) {
  FTRACE(0x103f5160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f5160 push ebp */
  push32((uint32_t)(EBP));
  /* 103f5161 mov ebp, esp */
  EBP = (ESP);
  /* 103f5163 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5164 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5168 jne 0x103f516e */
  if (!C.zf) goto L_103f516e;
  /* 103f516a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f516c jmp 0x103f51ab */
  goto L_103f51ab;
L_103f516e:;
  /* 103f516e mov eax, dword ptr [0x10412d64] */
  EAX = (r32((uint32_t)(0x10412d64)));
  /* 103f5173 push eax */
  push32((uint32_t)(EAX));
  /* 103f5174 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f5177 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5178 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f517b push edx */
  push32((uint32_t)(EDX));
  /* 103f517c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f517f push eax */
  push32((uint32_t)(EAX));
  /* 103f5180 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5183 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5184 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f5186 mov edx, dword ptr [0x10413004] */
  EDX = (r32((uint32_t)(0x10413004)));
  /* 103f518c push edx */
  push32((uint32_t)(EDX));
  /* 103f518d call 0x103f5260 */
  push32(0x103f5192u); f_103f5260();
  /* 103f5192 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5195 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f5198 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f519c jne 0x103f51a5 */
  if (!C.zf) goto L_103f51a5;
  /* 103f519e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 103f51a3 jmp 0x103f51ab */
  goto L_103f51ab;
L_103f51a5:;
  /* 103f51a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f51a8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_103f51ab:;
  /* 103f51ab mov esp, ebp */
  ESP = (EBP);
  /* 103f51ad pop ebp */
  EBP = (pop32());
  /* 103f51ae ret  */
  ESPCHK(0x103f5160u, _esp0);
  ESP += 4; return;
}

/* FUN_100151b0 @ 0x103f51b0 (174 bytes, 66 insns) */
void f_103f51b0(void) {
  FTRACE(0x103f51b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f51b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f51b1 mov ebp, esp */
  EBP = (ESP);
  /* 103f51b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f51b6 mov eax, dword ptr [0x104116a0] */
  EAX = (r32((uint32_t)(0x104116a0)));
  /* 103f51bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103f51be:;
  /* 103f51be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f51c1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f51c4 je 0x103f5258 */
  if (C.zf) goto L_103f5258;
  /* 103f51ca push 0 */
  push32((uint32_t)(0x0u));
  /* 103f51cc push 0 */
  push32((uint32_t)(0x0u));
  /* 103f51ce push 0 */
  push32((uint32_t)(0x0u));
  /* 103f51d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f51d2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103f51d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f51d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f51d9 push eax */
  push32((uint32_t)(EAX));
  /* 103f51da push 0 */
  push32((uint32_t)(0x0u));
  /* 103f51dc push 1 */
  push32((uint32_t)(0x1u));
  /* 103f51de call dword ptr [0x10414364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414364))), 0x103f51e4u);
  /* 103f51e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f51e7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f51eb jne 0x103f51f2 */
  if (!C.zf) goto L_103f51f2;
  /* 103f51ed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f51f0 jmp 0x103f525a */
  goto L_103f525a;
L_103f51f2:;
  /* 103f51f2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 103f51f4 push 0x1040dbec */
  push32((uint32_t)(0x1040dbecu));
  /* 103f51f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f51fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f51fe push ecx */
  push32((uint32_t)(ECX));
  /* 103f51ff call 0x103e56b0 */
  push32(0x103f5204u); f_103e56b0();
  /* 103f5204 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5207 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f520a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f520e jne 0x103f5215 */
  if (!C.zf) goto L_103f5215;
  /* 103f5210 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f5213 jmp 0x103f525a */
  goto L_103f525a;
L_103f5215:;
  /* 103f5215 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f5217 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f5219 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f521c push edx */
  push32((uint32_t)(EDX));
  /* 103f521d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5220 push eax */
  push32((uint32_t)(EAX));
  /* 103f5221 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103f5223 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f5226 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f5228 push edx */
  push32((uint32_t)(EDX));
  /* 103f5229 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f522b push 1 */
  push32((uint32_t)(0x1u));
  /* 103f522d call dword ptr [0x10414364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414364))), 0x103f5233u);
  /* 103f5233 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f5235 jne 0x103f523c */
  if (!C.zf) goto L_103f523c;
  /* 103f5237 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f523a jmp 0x103f525a */
  goto L_103f525a;
L_103f523c:;
  /* 103f523c push 0 */
  push32((uint32_t)(0x0u));
  /* 103f523e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5241 push eax */
  push32((uint32_t)(EAX));
  /* 103f5242 call 0x103f56b0 */
  push32(0x103f5247u); f_103f56b0();
  /* 103f5247 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f524a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f524d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5250 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103f5253 jmp 0x103f51be */
  goto L_103f51be;
L_103f5258:;
  /* 103f5258 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103f525a:;
  /* 103f525a mov esp, ebp */
  ESP = (EBP);
  /* 103f525c pop ebp */
  EBP = (pop32());
  /* 103f525d ret  */
  ESPCHK(0x103f51b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015260 @ 0x103f5260 (970 bytes, 340 insns) */
void f_103f5260(void) {
  FTRACE(0x103f5260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f5260 push ebp */
  push32((uint32_t)(EBP));
  /* 103f5261 mov ebp, esp */
  EBP = (ESP);
  /* 103f5263 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103f5265 push 0x1040dc40 */
  push32((uint32_t)(0x1040dc40u));
  /* 103f526a push 0x103ee7b8 */
  push32((uint32_t)(0x103ee7b8u));
  /* 103f526f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 103f5275 push eax */
  push32((uint32_t)(EAX));
  /* 103f5276 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 103f527d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5280 push ebx */
  push32((uint32_t)(EBX));
  /* 103f5281 push esi */
  push32((uint32_t)(ESI));
  /* 103f5282 push edi */
  push32((uint32_t)(EDI));
  /* 103f5283 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103f5286 cmp dword ptr [0x104119dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104119dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f528d jne 0x103f52e6 */
  if (!C.zf) goto L_103f52e6;
  /* 103f528f push 1 */
  push32((uint32_t)(0x1u));
  /* 103f5291 push 0x1040d298 */
  push32((uint32_t)(0x1040d298u));
  /* 103f5296 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f5298 push 0x1040d298 */
  push32((uint32_t)(0x1040d298u));
  /* 103f529d push 0 */
  push32((uint32_t)(0x0u));
  /* 103f529f push 0 */
  push32((uint32_t)(0x0u));
  /* 103f52a1 call dword ptr [0x104142c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142c8))), 0x103f52a7u);
  /* 103f52a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f52a9 je 0x103f52b7 */
  if (C.zf) goto L_103f52b7;
  /* 103f52ab mov dword ptr [0x104119dc], 1 */
  w32((uint32_t)(0x104119dc), (0x1u));
  /* 103f52b5 jmp 0x103f52e6 */
  goto L_103f52e6;
L_103f52b7:;
  /* 103f52b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f52b9 push 0x1040d294 */
  push32((uint32_t)(0x1040d294u));
  /* 103f52be push 1 */
  push32((uint32_t)(0x1u));
  /* 103f52c0 push 0x1040d294 */
  push32((uint32_t)(0x1040d294u));
  /* 103f52c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f52c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f52c9 call dword ptr [0x104142cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142cc))), 0x103f52cfu);
  /* 103f52cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f52d1 je 0x103f52df */
  if (C.zf) goto L_103f52df;
  /* 103f52d3 mov dword ptr [0x104119dc], 2 */
  w32((uint32_t)(0x104119dc), (0x2u));
  /* 103f52dd jmp 0x103f52e6 */
  goto L_103f52e6;
L_103f52df:;
  /* 103f52df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f52e1 jmp 0x103f5644 */
  goto L_103f5644;
L_103f52e6:;
  /* 103f52e6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f52ea jle 0x103f52ff */
  if ((C.zf||C.sf!=C.of)) goto L_103f52ff;
  /* 103f52ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f52ef push eax */
  push32((uint32_t)(EAX));
  /* 103f52f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f52f3 push ecx */
  push32((uint32_t)(ECX));
  /* 103f52f4 call 0x103f5660 */
  push32(0x103f52f9u); f_103f5660();
  /* 103f52f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f52fc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_103f52ff:;
  /* 103f52ff cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5303 jle 0x103f5318 */
  if ((C.zf||C.sf!=C.of)) goto L_103f5318;
  /* 103f5305 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103f5308 push edx */
  push32((uint32_t)(EDX));
  /* 103f5309 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f530c push eax */
  push32((uint32_t)(EAX));
  /* 103f530d call 0x103f5660 */
  push32(0x103f5312u); f_103f5660();
  /* 103f5312 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5315 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_103f5318:;
  /* 103f5318 cmp dword ptr [0x104119dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104119dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f531f jne 0x103f5344 */
  if (!C.zf) goto L_103f5344;
  /* 103f5321 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103f5324 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5325 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f5328 push edx */
  push32((uint32_t)(EDX));
  /* 103f5329 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f532c push eax */
  push32((uint32_t)(EAX));
  /* 103f532d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f5330 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5331 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f5334 push edx */
  push32((uint32_t)(EDX));
  /* 103f5335 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5338 push eax */
  push32((uint32_t)(EAX));
  /* 103f5339 call dword ptr [0x104142cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142cc))), 0x103f533fu);
  /* 103f533f jmp 0x103f5644 */
  goto L_103f5644;
L_103f5344:;
  /* 103f5344 cmp dword ptr [0x104119dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104119dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f534b jne 0x103f5642 */
  if (!C.zf) goto L_103f5642;
  /* 103f5351 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5355 jne 0x103f5360 */
  if (!C.zf) goto L_103f5360;
  /* 103f5357 mov ecx, dword ptr [0x10411888] */
  ECX = (r32((uint32_t)(0x10411888)));
  /* 103f535d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_103f5360:;
  /* 103f5360 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5364 je 0x103f5370 */
  if (C.zf) goto L_103f5370;
  /* 103f5366 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f536a jne 0x103f54ec */
  if (!C.zf) goto L_103f54ec;
L_103f5370:;
  /* 103f5370 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f5373 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5376 jne 0x103f5382 */
  if (!C.zf) goto L_103f5382;
  /* 103f5378 mov eax, 2 */
  EAX = (0x2u);
  /* 103f537d jmp 0x103f5644 */
  goto L_103f5644;
L_103f5382:;
  /* 103f5382 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5386 jle 0x103f5392 */
  if ((C.zf||C.sf!=C.of)) goto L_103f5392;
  /* 103f5388 mov eax, 1 */
  EAX = (0x1u);
  /* 103f538d jmp 0x103f5644 */
  goto L_103f5644;
L_103f5392:;
  /* 103f5392 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5396 jle 0x103f53a2 */
  if ((C.zf||C.sf!=C.of)) goto L_103f53a2;
  /* 103f5398 mov eax, 3 */
  EAX = (0x3u);
  /* 103f539d jmp 0x103f5644 */
  goto L_103f5644;
L_103f53a2:;
  /* 103f53a2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 103f53a5 push eax */
  push32((uint32_t)(EAX));
  /* 103f53a6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 103f53a9 push ecx */
  push32((uint32_t)(ECX));
  /* 103f53aa call dword ptr [0x10414324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414324))), 0x103f53b0u);
  /* 103f53b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f53b2 jne 0x103f53bb */
  if (!C.zf) goto L_103f53bb;
  /* 103f53b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f53b6 jmp 0x103f5644 */
  goto L_103f5644;
L_103f53bb:;
  /* 103f53bb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f53bf jne 0x103f53c7 */
  if (!C.zf) goto L_103f53c7;
  /* 103f53c1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f53c5 je 0x103f53f4 */
  if (C.zf) goto L_103f53f4;
L_103f53c7:;
  /* 103f53c7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f53cb jne 0x103f53d3 */
  if (!C.zf) goto L_103f53d3;
  /* 103f53cd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f53d1 je 0x103f53f4 */
  if (C.zf) goto L_103f53f4;
L_103f53d3:;
  /* 103f53d3 push 0x1040dc00 */
  push32((uint32_t)(0x1040dc00u));
  /* 103f53d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103f53da push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 103f53df push 0x1040dbf8 */
  push32((uint32_t)(0x1040dbf8u));
  /* 103f53e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f53e6 call 0x103e4770 */
  push32(0x103f53ebu); f_103e4770();
  /* 103f53eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f53ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f53f1 jne 0x103f53f4 */
  if (!C.zf) goto L_103f53f4;
  /* 103f53f3 int3  */
  x86_unimpl("int3 @ 0x103f53f3");
L_103f53f4:;
  /* 103f53f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f53f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f53f8 jne 0x103f53bb */
  if (!C.zf) goto L_103f53bb;
  /* 103f53fa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f53fe jle 0x103f5473 */
  if ((C.zf||C.sf!=C.of)) goto L_103f5473;
  /* 103f5400 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5404 jae 0x103f5410 */
  if (!C.cf) goto L_103f5410;
  /* 103f5406 mov eax, 3 */
  EAX = (0x3u);
  /* 103f540b jmp 0x103f5644 */
  goto L_103f5644;
L_103f5410:;
  /* 103f5410 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 103f5413 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 103f5416 jmp 0x103f5421 */
  goto L_103f5421;
L_103f5418:;
  /* 103f5418 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 103f541b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f541e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_103f5421:;
  /* 103f5421 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 103f5424 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f5426 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f5428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f542a je 0x103f5469 */
  if (C.zf) goto L_103f5469;
  /* 103f542c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 103f542f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f5431 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 103f5434 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f5436 je 0x103f5469 */
  if (C.zf) goto L_103f5469;
  /* 103f5438 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f543b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f543d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103f543f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 103f5442 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f5444 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f5446 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5448 jl 0x103f5467 */
  if ((C.sf!=C.of)) goto L_103f5467;
  /* 103f544a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f544d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f544f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103f5451 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 103f5454 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f5456 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 103f5459 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f545b jg 0x103f5467 */
  if ((!C.zf&&C.sf==C.of)) goto L_103f5467;
  /* 103f545d mov eax, 2 */
  EAX = (0x2u);
  /* 103f5462 jmp 0x103f5644 */
  goto L_103f5644;
L_103f5467:;
  /* 103f5467 jmp 0x103f5418 */
  goto L_103f5418;
L_103f5469:;
  /* 103f5469 mov eax, 3 */
  EAX = (0x3u);
  /* 103f546e jmp 0x103f5644 */
  goto L_103f5644;
L_103f5473:;
  /* 103f5473 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5477 jle 0x103f54ec */
  if ((C.zf||C.sf!=C.of)) goto L_103f54ec;
  /* 103f5479 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f547d jae 0x103f5489 */
  if (!C.cf) goto L_103f5489;
  /* 103f547f mov eax, 1 */
  EAX = (0x1u);
  /* 103f5484 jmp 0x103f5644 */
  goto L_103f5644;
L_103f5489:;
  /* 103f5489 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 103f548c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 103f548f jmp 0x103f549a */
  goto L_103f549a;
L_103f5491:;
  /* 103f5491 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 103f5494 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5497 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_103f549a:;
  /* 103f549a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 103f549d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f549f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103f54a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f54a3 je 0x103f54e2 */
  if (C.zf) goto L_103f54e2;
  /* 103f54a5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 103f54a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f54aa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 103f54ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f54af je 0x103f54e2 */
  if (C.zf) goto L_103f54e2;
  /* 103f54b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f54b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f54b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103f54b8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 103f54bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103f54bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103f54bf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f54c1 jl 0x103f54e0 */
  if ((C.sf!=C.of)) goto L_103f54e0;
  /* 103f54c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f54c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f54c8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103f54ca mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 103f54cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f54cf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 103f54d2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f54d4 jg 0x103f54e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_103f54e0;
  /* 103f54d6 mov eax, 2 */
  EAX = (0x2u);
  /* 103f54db jmp 0x103f5644 */
  goto L_103f5644;
L_103f54e0:;
  /* 103f54e0 jmp 0x103f5491 */
  goto L_103f5491;
L_103f54e2:;
  /* 103f54e2 mov eax, 1 */
  EAX = (0x1u);
  /* 103f54e7 jmp 0x103f5644 */
  goto L_103f5644;
L_103f54ec:;
  /* 103f54ec push 0 */
  push32((uint32_t)(0x0u));
  /* 103f54ee push 0 */
  push32((uint32_t)(0x0u));
  /* 103f54f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f54f3 push ecx */
  push32((uint32_t)(ECX));
  /* 103f54f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f54f7 push edx */
  push32((uint32_t)(EDX));
  /* 103f54f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 103f54fa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103f54fd push eax */
  push32((uint32_t)(EAX));
  /* 103f54fe call dword ptr [0x10414318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414318))), 0x103f5504u);
  /* 103f5504 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103f5507 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f550b jne 0x103f5514 */
  if (!C.zf) goto L_103f5514;
  /* 103f550d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f550f jmp 0x103f5644 */
  goto L_103f5644;
L_103f5514:;
  /* 103f5514 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103f551b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103f551e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103f5520 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5523 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103f5525 call 0x103e8850 */
  push32(0x103f552au); f_103e8850();
  /* 103f552a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 103f552d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103f5530 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 103f5533 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103f5536 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103f553d jmp 0x103f5556 */
  goto L_103f5556;
  /* 103f553f mov eax, 1 */
  EAX = (0x1u);
  /* 103f5544 ret  */
  ESPCHK(0x103f5260u, _esp0);
  ESP += 4; return;
  /* 103f5545 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103f5548 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103f554f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103f5556:;
  /* 103f5556 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f555a jne 0x103f5563 */
  if (!C.zf) goto L_103f5563;
  /* 103f555c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f555e jmp 0x103f5644 */
  goto L_103f5644;
L_103f5563:;
  /* 103f5563 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103f5566 push edx */
  push32((uint32_t)(EDX));
  /* 103f5567 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103f556a push eax */
  push32((uint32_t)(EAX));
  /* 103f556b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103f556e push ecx */
  push32((uint32_t)(ECX));
  /* 103f556f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103f5572 push edx */
  push32((uint32_t)(EDX));
  /* 103f5573 push 1 */
  push32((uint32_t)(0x1u));
  /* 103f5575 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103f5578 push eax */
  push32((uint32_t)(EAX));
  /* 103f5579 call dword ptr [0x10414318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414318))), 0x103f557fu);
  /* 103f557f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f5581 jne 0x103f558a */
  if (!C.zf) goto L_103f558a;
  /* 103f5583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f5585 jmp 0x103f5644 */
  goto L_103f5644;
L_103f558a:;
  /* 103f558a push 0 */
  push32((uint32_t)(0x0u));
  /* 103f558c push 0 */
  push32((uint32_t)(0x0u));
  /* 103f558e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103f5591 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5592 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f5595 push edx */
  push32((uint32_t)(EDX));
  /* 103f5596 push 9 */
  push32((uint32_t)(0x9u));
  /* 103f5598 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103f559b push eax */
  push32((uint32_t)(EAX));
  /* 103f559c call dword ptr [0x10414318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414318))), 0x103f55a2u);
  /* 103f55a2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103f55a5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f55a9 jne 0x103f55b2 */
  if (!C.zf) goto L_103f55b2;
  /* 103f55ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f55ad jmp 0x103f5644 */
  goto L_103f5644;
L_103f55b2:;
  /* 103f55b2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103f55b9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f55bc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103f55be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f55c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103f55c3 call 0x103e8850 */
  push32(0x103f55c8u); f_103e8850();
  /* 103f55c8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 103f55cb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103f55ce mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 103f55d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 103f55d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103f55db jmp 0x103f55f4 */
  goto L_103f55f4;
  /* 103f55dd mov eax, 1 */
  EAX = (0x1u);
  /* 103f55e2 ret  */
  ESPCHK(0x103f5260u, _esp0);
  ESP += 4; return;
  /* 103f55e3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103f55e6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 103f55ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103f55f4:;
  /* 103f55f4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f55f8 jne 0x103f55fe */
  if (!C.zf) goto L_103f55fe;
  /* 103f55fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f55fc jmp 0x103f5644 */
  goto L_103f5644;
L_103f55fe:;
  /* 103f55fe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f5601 push edx */
  push32((uint32_t)(EDX));
  /* 103f5602 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103f5605 push eax */
  push32((uint32_t)(EAX));
  /* 103f5606 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103f5609 push ecx */
  push32((uint32_t)(ECX));
  /* 103f560a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103f560d push edx */
  push32((uint32_t)(EDX));
  /* 103f560e push 1 */
  push32((uint32_t)(0x1u));
  /* 103f5610 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103f5613 push eax */
  push32((uint32_t)(EAX));
  /* 103f5614 call dword ptr [0x10414318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414318))), 0x103f561au);
  /* 103f561a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f561c jne 0x103f5622 */
  if (!C.zf) goto L_103f5622;
  /* 103f561e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f5620 jmp 0x103f5644 */
  goto L_103f5644;
L_103f5622:;
  /* 103f5622 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103f5625 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5626 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103f5629 push edx */
  push32((uint32_t)(EDX));
  /* 103f562a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103f562d push eax */
  push32((uint32_t)(EAX));
  /* 103f562e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103f5631 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5632 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f5635 push edx */
  push32((uint32_t)(EDX));
  /* 103f5636 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5639 push eax */
  push32((uint32_t)(EAX));
  /* 103f563a call dword ptr [0x104142c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142c8))), 0x103f5640u);
  /* 103f5640 jmp 0x103f5644 */
  goto L_103f5644;
L_103f5642:;
  /* 103f5642 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103f5644:;
  /* 103f5644 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 103f5647 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f564a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 103f5651 pop edi */
  EDI = (pop32());
  /* 103f5652 pop esi */
  ESI = (pop32());
  /* 103f5653 pop ebx */
  EBX = (pop32());
  /* 103f5654 mov esp, ebp */
  ESP = (EBP);
  /* 103f5656 pop ebp */
  EBP = (pop32());
  /* 103f5657 ret  */
  ESPCHK(0x103f5260u, _esp0);
  ESP += 4; return;
}

/* FUN_10015660 @ 0x103f5660 (80 bytes, 32 insns) */
void f_103f5660(void) {
  FTRACE(0x103f5660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f5660 push ebp */
  push32((uint32_t)(EBP));
  /* 103f5661 mov ebp, esp */
  EBP = (ESP);
  /* 103f5663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f5666 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f5669 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f566c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f566f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103f5672:;
  /* 103f5672 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5675 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5678 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f567b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f567e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f5680 je 0x103f5697 */
  if (C.zf) goto L_103f5697;
  /* 103f5682 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f5685 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103f5688 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f568a je 0x103f5697 */
  if (C.zf) goto L_103f5697;
  /* 103f568c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f568f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5692 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f5695 jmp 0x103f5672 */
  goto L_103f5672;
L_103f5697:;
  /* 103f5697 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f569a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103f569d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f569f jne 0x103f56a9 */
  if (!C.zf) goto L_103f56a9;
  /* 103f56a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f56a4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f56a7 jmp 0x103f56ac */
  goto L_103f56ac;
L_103f56a9:;
  /* 103f56a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_103f56ac:;
  /* 103f56ac mov esp, ebp */
  ESP = (EBP);
  /* 103f56ae pop ebp */
  EBP = (pop32());
  /* 103f56af ret  */
  ESPCHK(0x103f5660u, _esp0);
  ESP += 4; return;
}

/* FUN_100156b0 @ 0x103f56b0 (736 bytes, 224 insns) */
void f_103f56b0(void) {
  FTRACE(0x103f56b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f56b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103f56b1 mov ebp, esp */
  EBP = (ESP);
  /* 103f56b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f56b6 push esi */
  push32((uint32_t)(ESI));
  /* 103f56b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f56bb je 0x103f56dc */
  if (C.zf) goto L_103f56dc;
  /* 103f56bd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 103f56bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f56c2 push eax */
  push32((uint32_t)(EAX));
  /* 103f56c3 call 0x103f5b00 */
  push32(0x103f56c8u); f_103f5b00();
  /* 103f56c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f56cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103f56ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f56d2 je 0x103f56dc */
  if (C.zf) goto L_103f56dc;
  /* 103f56d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f56d7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f56da jne 0x103f56e4 */
  if (!C.zf) goto L_103f56e4;
L_103f56dc:;
  /* 103f56dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f56df jmp 0x103f598b */
  goto L_103f598b;
L_103f56e4:;
  /* 103f56e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f56e7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 103f56eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f56ed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f56ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103f56f0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103f56f3 mov ecx, dword ptr [0x10411698] */
  ECX = (r32((uint32_t)(0x10411698)));
  /* 103f56f9 cmp ecx, dword ptr [0x1041169c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1041169c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f56ff jne 0x103f5715 */
  if (!C.zf) goto L_103f5715;
  /* 103f5701 mov edx, dword ptr [0x10411698] */
  EDX = (r32((uint32_t)(0x10411698)));
  /* 103f5707 push edx */
  push32((uint32_t)(EDX));
  /* 103f5708 call 0x103f5a10 */
  push32(0x103f570du); f_103f5a10();
  /* 103f570d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5710 mov dword ptr [0x10411698], eax */
  w32((uint32_t)(0x10411698), (EAX));
L_103f5715:;
  /* 103f5715 cmp dword ptr [0x10411698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f571c jne 0x103f57d5 */
  if (!C.zf) goto L_103f57d5;
  /* 103f5722 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5726 je 0x103f5747 */
  if (C.zf) goto L_103f5747;
  /* 103f5728 cmp dword ptr [0x104116a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104116a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f572f je 0x103f5747 */
  if (C.zf) goto L_103f5747;
  /* 103f5731 call 0x103f51b0 */
  push32(0x103f5736u); f_103f51b0();
  /* 103f5736 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f5738 je 0x103f5742 */
  if (C.zf) goto L_103f5742;
  /* 103f573a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f573d jmp 0x103f598b */
  goto L_103f598b;
L_103f5742:;
  /* 103f5742 jmp 0x103f57d5 */
  goto L_103f57d5;
L_103f5747:;
  /* 103f5747 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f574b je 0x103f5754 */
  if (C.zf) goto L_103f5754;
  /* 103f574d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f574f jmp 0x103f598b */
  goto L_103f598b;
L_103f5754:;
  /* 103f5754 cmp dword ptr [0x10411698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f575b jne 0x103f5794 */
  if (!C.zf) goto L_103f5794;
  /* 103f575d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 103f5762 push 0x1040dc58 */
  push32((uint32_t)(0x1040dc58u));
  /* 103f5767 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f5769 push 4 */
  push32((uint32_t)(0x4u));
  /* 103f576b call 0x103e56b0 */
  push32(0x103f5770u); f_103e56b0();
  /* 103f5770 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5773 mov dword ptr [0x10411698], eax */
  w32((uint32_t)(0x10411698), (EAX));
  /* 103f5778 cmp dword ptr [0x10411698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f577f jne 0x103f5789 */
  if (!C.zf) goto L_103f5789;
  /* 103f5781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f5784 jmp 0x103f598b */
  goto L_103f598b;
L_103f5789:;
  /* 103f5789 mov eax, dword ptr [0x10411698] */
  EAX = (r32((uint32_t)(0x10411698)));
  /* 103f578e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_103f5794:;
  /* 103f5794 cmp dword ptr [0x104116a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104116a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f579b jne 0x103f57d5 */
  if (!C.zf) goto L_103f57d5;
  /* 103f579d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 103f57a2 push 0x1040dc58 */
  push32((uint32_t)(0x1040dc58u));
  /* 103f57a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f57a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 103f57ab call 0x103e56b0 */
  push32(0x103f57b0u); f_103e56b0();
  /* 103f57b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f57b3 mov dword ptr [0x104116a0], eax */
  w32((uint32_t)(0x104116a0), (EAX));
  /* 103f57b8 cmp dword ptr [0x104116a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104116a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f57bf jne 0x103f57c9 */
  if (!C.zf) goto L_103f57c9;
  /* 103f57c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f57c4 jmp 0x103f598b */
  goto L_103f598b;
L_103f57c9:;
  /* 103f57c9 mov ecx, dword ptr [0x104116a0] */
  ECX = (r32((uint32_t)(0x104116a0)));
  /* 103f57cf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_103f57d5:;
  /* 103f57d5 mov edx, dword ptr [0x10411698] */
  EDX = (r32((uint32_t)(0x10411698)));
  /* 103f57db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103f57de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f57e1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f57e4 push eax */
  push32((uint32_t)(EAX));
  /* 103f57e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f57e8 push ecx */
  push32((uint32_t)(ECX));
  /* 103f57e9 call 0x103f5990 */
  push32(0x103f57eeu); f_103f5990();
  /* 103f57ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f57f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f57f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f57f8 jl 0x103f5891 */
  if ((C.sf!=C.of)) goto L_103f5891;
  /* 103f57fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f5801 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5804 je 0x103f5891 */
  if (C.zf) goto L_103f5891;
  /* 103f580a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f580e je 0x103f5883 */
  if (C.zf) goto L_103f5883;
  /* 103f5810 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f5812 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5815 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f5818 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 103f581b push edx */
  push32((uint32_t)(EDX));
  /* 103f581c call 0x103e6140 */
  push32(0x103f5821u); f_103e6140();
  /* 103f5821 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5824 jmp 0x103f582f */
  goto L_103f582f;
L_103f5826:;
  /* 103f5826 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5829 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f582c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103f582f:;
  /* 103f582f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5832 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f5835 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5839 je 0x103f5850 */
  if (C.zf) goto L_103f5850;
  /* 103f583b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f583e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f5841 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5844 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 103f5847 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 103f584b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 103f584e jmp 0x103f5826 */
  goto L_103f5826;
L_103f5850:;
  /* 103f5850 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 103f5855 push 0x1040dc58 */
  push32((uint32_t)(0x1040dc58u));
  /* 103f585a push 2 */
  push32((uint32_t)(0x2u));
  /* 103f585c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f585f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103f5862 push eax */
  push32((uint32_t)(EAX));
  /* 103f5863 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f5866 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5867 call 0x103e5b40 */
  push32(0x103f586cu); f_103e5b40();
  /* 103f586c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f586f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f5872 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5876 je 0x103f5881 */
  if (C.zf) goto L_103f5881;
  /* 103f5878 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f587b mov dword ptr [0x10411698], edx */
  w32((uint32_t)(0x10411698), (EDX));
L_103f5881:;
  /* 103f5881 jmp 0x103f588f */
  goto L_103f588f;
L_103f5883:;
  /* 103f5883 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5886 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f5889 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f588c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_103f588f:;
  /* 103f588f jmp 0x103f5904 */
  goto L_103f5904;
L_103f5891:;
  /* 103f5891 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5895 jne 0x103f58fd */
  if (!C.zf) goto L_103f58fd;
  /* 103f5897 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f589b jge 0x103f58a5 */
  if ((C.sf==C.of)) goto L_103f58a5;
  /* 103f589d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f58a0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f58a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103f58a5:;
  /* 103f58a5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 103f58aa push 0x1040dc58 */
  push32((uint32_t)(0x1040dc58u));
  /* 103f58af push 2 */
  push32((uint32_t)(0x2u));
  /* 103f58b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f58b4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 103f58bb push edx */
  push32((uint32_t)(EDX));
  /* 103f58bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f58bf push eax */
  push32((uint32_t)(EAX));
  /* 103f58c0 call 0x103e5b40 */
  push32(0x103f58c5u); f_103e5b40();
  /* 103f58c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f58c8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f58cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f58cf jne 0x103f58d9 */
  if (!C.zf) goto L_103f58d9;
  /* 103f58d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f58d4 jmp 0x103f598b */
  goto L_103f598b;
L_103f58d9:;
  /* 103f58d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f58dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f58df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f58e2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 103f58e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f58e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f58eb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 103f58f3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f58f6 mov dword ptr [0x10411698], eax */
  w32((uint32_t)(0x10411698), (EAX));
  /* 103f58fb jmp 0x103f5904 */
  goto L_103f5904;
L_103f58fd:;
  /* 103f58fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f58ff jmp 0x103f598b */
  goto L_103f598b;
L_103f5904:;
  /* 103f5904 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5908 je 0x103f5989 */
  if (C.zf) goto L_103f5989;
  /* 103f590a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 103f590f push 0x1040dc58 */
  push32((uint32_t)(0x1040dc58u));
  /* 103f5914 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f5916 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5919 push ecx */
  push32((uint32_t)(ECX));
  /* 103f591a call 0x103e84e0 */
  push32(0x103f591fu); f_103e84e0();
  /* 103f591f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5922 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5925 push eax */
  push32((uint32_t)(EAX));
  /* 103f5926 call 0x103e56b0 */
  push32(0x103f592bu); f_103e56b0();
  /* 103f592b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f592e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103f5931 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5935 je 0x103f5989 */
  if (C.zf) goto L_103f5989;
  /* 103f5937 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f593a push edx */
  push32((uint32_t)(EDX));
  /* 103f593b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f593e push eax */
  push32((uint32_t)(EAX));
  /* 103f593f call 0x103e8660 */
  push32(0x103f5944u); f_103e8660();
  /* 103f5944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5947 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103f594a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f594d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f5950 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5952 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103f5955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f5958 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 103f595b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f595e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5961 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103f5964 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103f5967 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103f5969 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f596b not edx */
  EDX = (~(EDX));
  /* 103f596d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 103f5970 push edx */
  push32((uint32_t)(EDX));
  /* 103f5971 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f5974 push eax */
  push32((uint32_t)(EAX));
  /* 103f5975 call dword ptr [0x104142c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142c4))), 0x103f597bu);
  /* 103f597b push 2 */
  push32((uint32_t)(0x2u));
  /* 103f597d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f5980 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5981 call 0x103e6140 */
  push32(0x103f5986u); f_103e6140();
  /* 103f5986 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f5989:;
  /* 103f5989 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103f598b:;
  /* 103f598b pop esi */
  ESI = (pop32());
  /* 103f598c mov esp, ebp */
  ESP = (EBP);
  /* 103f598e pop ebp */
  EBP = (pop32());
  /* 103f598f ret  */
  ESPCHK(0x103f56b0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x103f5990 (124 bytes, 47 insns) */
void f_103f5990(void) {
  FTRACE(0x103f5990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f5990 push ebp */
  push32((uint32_t)(EBP));
  /* 103f5991 mov ebp, esp */
  EBP = (ESP);
  /* 103f5993 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5994 mov eax, dword ptr [0x10411698] */
  EAX = (r32((uint32_t)(0x10411698)));
  /* 103f5999 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103f599c jmp 0x103f59a7 */
  goto L_103f59a7;
L_103f599e:;
  /* 103f599e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f59a1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f59a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103f59a7:;
  /* 103f59a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f59aa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f59ad je 0x103f59fa */
  if (C.zf) goto L_103f59fa;
  /* 103f59af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f59b2 push eax */
  push32((uint32_t)(EAX));
  /* 103f59b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f59b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f59b8 push edx */
  push32((uint32_t)(EDX));
  /* 103f59b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f59bc push eax */
  push32((uint32_t)(EAX));
  /* 103f59bd call 0x103f5160 */
  push32(0x103f59c2u); f_103f5160();
  /* 103f59c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f59c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103f59c7 jne 0x103f59f8 */
  if (!C.zf) goto L_103f59f8;
  /* 103f59c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f59cc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f59ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f59d1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 103f59d5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f59d8 je 0x103f59ea */
  if (C.zf) goto L_103f59ea;
  /* 103f59da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f59dd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f59df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f59e2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 103f59e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f59e8 jne 0x103f59f8 */
  if (!C.zf) goto L_103f59f8;
L_103f59ea:;
  /* 103f59ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f59ed sub eax, dword ptr [0x10411698] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10411698))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f59f3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103f59f6 jmp 0x103f5a08 */
  goto L_103f5a08;
L_103f59f8:;
  /* 103f59f8 jmp 0x103f599e */
  goto L_103f599e;
L_103f59fa:;
  /* 103f59fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f59fd sub eax, dword ptr [0x10411698] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10411698))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f5a03 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103f5a06 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_103f5a08:;
  /* 103f5a08 mov esp, ebp */
  ESP = (EBP);
  /* 103f5a0a pop ebp */
  EBP = (pop32());
  /* 103f5a0b ret  */
  ESPCHK(0x103f5990u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x103f5a10 (238 bytes, 80 insns) */
void f_103f5a10(void) {
  FTRACE(0x103f5a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f5a10 push ebp */
  push32((uint32_t)(EBP));
  /* 103f5a11 mov ebp, esp */
  EBP = (ESP);
  /* 103f5a13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f5a16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103f5a1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5a20 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f5a23 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5a27 jne 0x103f5a30 */
  if (!C.zf) goto L_103f5a30;
  /* 103f5a29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f5a2b jmp 0x103f5afa */
  goto L_103f5afa;
L_103f5a30:;
  /* 103f5a30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f5a33 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f5a35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f5a38 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5a3b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103f5a3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f5a40 je 0x103f5a4d */
  if (C.zf) goto L_103f5a4d;
  /* 103f5a42 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f5a45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5a48 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103f5a4b jmp 0x103f5a30 */
  goto L_103f5a30;
L_103f5a4d:;
  /* 103f5a4d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 103f5a52 push 0x1040dc58 */
  push32((uint32_t)(0x1040dc58u));
  /* 103f5a57 push 2 */
  push32((uint32_t)(0x2u));
  /* 103f5a59 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103f5a5c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 103f5a63 push eax */
  push32((uint32_t)(EAX));
  /* 103f5a64 call 0x103e56b0 */
  push32(0x103f5a69u); f_103e56b0();
  /* 103f5a69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5a6c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103f5a6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5a72 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103f5a75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5a79 jne 0x103f5a85 */
  if (!C.zf) goto L_103f5a85;
  /* 103f5a7b push 9 */
  push32((uint32_t)(0x9u));
  /* 103f5a7d call 0x103e4620 */
  push32(0x103f5a82u); f_103e4620();
  /* 103f5a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f5a85:;
  /* 103f5a85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5a88 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_103f5a8b:;
  /* 103f5a8b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f5a8e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5a91 je 0x103f5aee */
  if (C.zf) goto L_103f5aee;
  /* 103f5a93 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 103f5a98 push 0x1040dc58 */
  push32((uint32_t)(0x1040dc58u));
  /* 103f5a9d push 2 */
  push32((uint32_t)(0x2u));
  /* 103f5a9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f5aa2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103f5aa4 push edx */
  push32((uint32_t)(EDX));
  /* 103f5aa5 call 0x103e84e0 */
  push32(0x103f5aaau); f_103e84e0();
  /* 103f5aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5aad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5ab0 push eax */
  push32((uint32_t)(EAX));
  /* 103f5ab1 call 0x103e56b0 */
  push32(0x103f5ab6u); f_103e56b0();
  /* 103f5ab6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5ab9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5abc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103f5abe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5ac1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5ac4 je 0x103f5ada */
  if (C.zf) goto L_103f5ada;
  /* 103f5ac6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f5ac9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103f5acb push ecx */
  push32((uint32_t)(ECX));
  /* 103f5acc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5acf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103f5ad1 push eax */
  push32((uint32_t)(EAX));
  /* 103f5ad2 call 0x103e8660 */
  push32(0x103f5ad7u); f_103e8660();
  /* 103f5ad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103f5ada:;
  /* 103f5ada mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103f5add add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5ae0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103f5ae3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5ae6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5ae9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103f5aec jmp 0x103f5a8b */
  goto L_103f5a8b;
L_103f5aee:;
  /* 103f5aee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103f5af1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103f5af7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103f5afa:;
  /* 103f5afa mov esp, ebp */
  ESP = (EBP);
  /* 103f5afc pop ebp */
  EBP = (pop32());
  /* 103f5afd ret  */
  ESPCHK(0x103f5a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b00 @ 0x103f5b00 (237 bytes, 81 insns) */
void f_103f5b00(void) {
  FTRACE(0x103f5b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f5b00 push ebp */
  push32((uint32_t)(EBP));
  /* 103f5b01 mov ebp, esp */
  EBP = (ESP);
  /* 103f5b03 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5b04 cmp dword ptr [0x10412dec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10412dec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5b0b jne 0x103f5b22 */
  if (!C.zf) goto L_103f5b22;
  /* 103f5b0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103f5b10 push eax */
  push32((uint32_t)(EAX));
  /* 103f5b11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5b14 push ecx */
  push32((uint32_t)(ECX));
  /* 103f5b15 call 0x103f5c00 */
  push32(0x103f5b1au); f_103f5c00();
  /* 103f5b1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5b1d jmp 0x103f5be9 */
  goto L_103f5be9;
L_103f5b22:;
  /* 103f5b22 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103f5b24 call 0x103e90b0 */
  push32(0x103f5b29u); f_103e90b0();
  /* 103f5b29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5b2c jmp 0x103f5b37 */
  goto L_103f5b37;
L_103f5b2e:;
  /* 103f5b2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5b31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5b34 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_103f5b37:;
  /* 103f5b37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5b3a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 103f5b3e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 103f5b42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f5b45 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103f5b4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103f5b4d je 0x103f5bcb */
  if (C.zf) goto L_103f5bcb;
  /* 103f5b4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f5b52 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f5b57 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f5b59 mov cl, byte ptr [eax + 0x10412f01] */
  CL = (r8((uint32_t)(EAX + 0x10412f01)));
  /* 103f5b5f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 103f5b62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f5b64 je 0x103f5bb6 */
  if (C.zf) goto L_103f5bb6;
  /* 103f5b66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5b69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5b6c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 103f5b6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5b72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f5b74 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103f5b76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103f5b78 jne 0x103f5b88 */
  if (!C.zf) goto L_103f5b88;
  /* 103f5b7a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103f5b7c call 0x103e9150 */
  push32(0x103f5b81u); f_103e9150();
  /* 103f5b81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5b84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f5b86 jmp 0x103f5be9 */
  goto L_103f5be9;
L_103f5b88:;
  /* 103f5b88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f5b8b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103f5b91 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 103f5b94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5b97 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103f5b99 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103f5b9b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103f5b9d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5ba0 jne 0x103f5bb4 */
  if (!C.zf) goto L_103f5bb4;
  /* 103f5ba2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103f5ba4 call 0x103e9150 */
  push32(0x103f5ba9u); f_103e9150();
  /* 103f5ba9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5bac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5baf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103f5bb2 jmp 0x103f5be9 */
  goto L_103f5be9;
L_103f5bb4:;
  /* 103f5bb4 jmp 0x103f5bc6 */
  goto L_103f5bc6;
L_103f5bb6:;
  /* 103f5bb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f5bb9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103f5bbf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5bc2 jne 0x103f5bc6 */
  if (!C.zf) goto L_103f5bc6;
  /* 103f5bc4 jmp 0x103f5bcb */
  goto L_103f5bcb;
L_103f5bc6:;
  /* 103f5bc6 jmp 0x103f5b2e */
  goto L_103f5b2e;
L_103f5bcb:;
  /* 103f5bcb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103f5bcd call 0x103e9150 */
  push32(0x103f5bd2u); f_103e9150();
  /* 103f5bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5bd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103f5bd8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f5bdd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103f5be0 jne 0x103f5be7 */
  if (!C.zf) goto L_103f5be7;
  /* 103f5be2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103f5be5 jmp 0x103f5be9 */
  goto L_103f5be9;
L_103f5be7:;
  /* 103f5be7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103f5be9:;
  /* 103f5be9 mov esp, ebp */
  ESP = (EBP);
  /* 103f5beb pop ebp */
  EBP = (pop32());
  /* 103f5bec ret  */
  ESPCHK(0x103f5b00u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x103f5c00 (193 bytes, 87 insns) */
void f_103f5c00(void) {
  FTRACE(0x103f5c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f5c00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f5c02 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 103f5c06 push ebx */
  push32((uint32_t)(EBX));
  /* 103f5c07 mov ebx, eax */
  EBX = (EAX);
  /* 103f5c09 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 103f5c0c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 103f5c10 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 103f5c16 je 0x103f5c2b */
  if (C.zf) goto L_103f5c2b;
L_103f5c18:;
  /* 103f5c18 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 103f5c1a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 103f5c1b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f5c1d je 0x103f5bf0 */
  if (C.zf) { jmp_ind(0x103f5bf0u); return; }
  /* 103f5c1f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 103f5c21 je 0x103f5c74 */
  if (C.zf) goto L_103f5c74;
  /* 103f5c23 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 103f5c29 jne 0x103f5c18 */
  if (!C.zf) goto L_103f5c18;
L_103f5c2b:;
  /* 103f5c2b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 103f5c2d push edi */
  push32((uint32_t)(EDI));
  /* 103f5c2e mov eax, ebx */
  EAX = (EBX);
  /* 103f5c30 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 103f5c33 push esi */
  push32((uint32_t)(ESI));
  /* 103f5c34 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_103f5c36:;
  /* 103f5c36 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 103f5c38 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 103f5c3d mov eax, ecx */
  EAX = (ECX);
  /* 103f5c3f mov esi, edi */
  ESI = (EDI);
  /* 103f5c41 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 103f5c43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5c45 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5c47 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103f5c4a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103f5c4d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 103f5c4f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 103f5c51 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103f5c54 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 103f5c5a jne 0x103f5c78 */
  if (!C.zf) goto L_103f5c78;
  /* 103f5c5c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 103f5c61 je 0x103f5c36 */
  if (C.zf) goto L_103f5c36;
  /* 103f5c63 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 103f5c68 jne 0x103f5c72 */
  if (!C.zf) goto L_103f5c72;
  /* 103f5c6a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 103f5c70 jne 0x103f5c36 */
  if (!C.zf) goto L_103f5c36;
L_103f5c72:;
  /* 103f5c72 pop esi */
  ESI = (pop32());
  /* 103f5c73 pop edi */
  EDI = (pop32());
L_103f5c74:;
  /* 103f5c74 pop ebx */
  EBX = (pop32());
  /* 103f5c75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103f5c77 ret  */
  ESPCHK(0x103f5c00u, _esp0);
  ESP += 4; return;
L_103f5c78:;
  /* 103f5c78 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 103f5c7b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f5c7d je 0x103f5cb5 */
  if (C.zf) goto L_103f5cb5;
  /* 103f5c7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103f5c81 je 0x103f5c72 */
  if (C.zf) goto L_103f5c72;
  /* 103f5c83 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f5c85 je 0x103f5cae */
  if (C.zf) goto L_103f5cae;
  /* 103f5c87 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 103f5c89 je 0x103f5c72 */
  if (C.zf) goto L_103f5c72;
  /* 103f5c8b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103f5c8e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f5c90 je 0x103f5ca7 */
  if (C.zf) goto L_103f5ca7;
  /* 103f5c92 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103f5c94 je 0x103f5c72 */
  if (C.zf) goto L_103f5c72;
  /* 103f5c96 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103f5c98 je 0x103f5ca0 */
  if (C.zf) goto L_103f5ca0;
  /* 103f5c9a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 103f5c9c je 0x103f5c72 */
  if (C.zf) goto L_103f5c72;
  /* 103f5c9e jmp 0x103f5c36 */
  goto L_103f5c36;
L_103f5ca0:;
  /* 103f5ca0 pop esi */
  ESI = (pop32());
  /* 103f5ca1 pop edi */
  EDI = (pop32());
  /* 103f5ca2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 103f5ca5 pop ebx */
  EBX = (pop32());
  /* 103f5ca6 ret  */
  ESPCHK(0x103f5c00u, _esp0);
  ESP += 4; return;
L_103f5ca7:;
  /* 103f5ca7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 103f5caa pop esi */
  ESI = (pop32());
  /* 103f5cab pop edi */
  EDI = (pop32());
  /* 103f5cac pop ebx */
  EBX = (pop32());
  /* 103f5cad ret  */
  ESPCHK(0x103f5c00u, _esp0);
  ESP += 4; return;
L_103f5cae:;
  /* 103f5cae lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 103f5cb1 pop esi */
  ESI = (pop32());
  /* 103f5cb2 pop edi */
  EDI = (pop32());
  /* 103f5cb3 pop ebx */
  EBX = (pop32());
  /* 103f5cb4 ret  */
  ESPCHK(0x103f5c00u, _esp0);
  ESP += 4; return;
L_103f5cb5:;
  /* 103f5cb5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 103f5cb8 pop esi */
  ESI = (pop32());
  /* 103f5cb9 pop edi */
  EDI = (pop32());
  /* 103f5cba pop ebx */
  EBX = (pop32());
  /* 103f5cbb ret  */
  ESPCHK(0x103f5c00u, _esp0);
  ESP += 4; return;
  /* 103f5cbc jmp dword ptr [0x1041436c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1041436c)))); return;
}

/* RtlUnwind @ 0x103f5e0c (6 bytes, 1 insns) */
void f_103f5e0c(void) {
  FTRACE(0x103f5e0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103f5e0c jmp dword ptr [0x10414300] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10414300)))); return;
}

