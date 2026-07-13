#include "recomp.h"

/* FUN_10011330 @ 0x10901330 (878 bytes, 273 insns) */
void f_10901330(void) {
  FTRACE(0x10901330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10901330 push ebp */
  push32((uint32_t)(EBP));
  /* 10901331 mov ebp, esp */
  EBP = (ESP);
  /* 10901333 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901336 push esi */
  push32((uint32_t)(ESI));
  /* 10901337 mov eax, dword ptr [0x1091fc98] */
  EAX = (r32((uint32_t)(0x1091fc98)));
  /* 1090133c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1090133f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10901346 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1090134d jmp 0x10901358 */
  goto L_10901358;
L_1090134f:;
  /* 1090134f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10901352 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901355 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10901358:;
  /* 10901358 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090135c jae 0x10901391 */
  if (!C.cf) goto L_10901391;
  /* 1090135e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10901361 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901364 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10901367 push ecx */
  push32((uint32_t)(ECX));
  /* 10901368 call 0x108f71b0 */
  push32(0x1090136du); f_108f71b0();
  /* 1090136d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901370 mov esi, eax */
  ESI = (EAX);
  /* 10901372 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10901375 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901378 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1090137c push ecx */
  push32((uint32_t)(ECX));
  /* 1090137d call 0x108f71b0 */
  push32(0x10901382u); f_108f71b0();
  /* 10901382 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901385 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901388 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1090138c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1090138f jmp 0x1090134f */
  goto L_1090134f;
L_10901391:;
  /* 10901391 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10901398 jmp 0x109013a3 */
  goto L_109013a3;
L_1090139a:;
  /* 1090139a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1090139d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109013a0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_109013a3:;
  /* 109013a3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109013a7 jae 0x109013dd */
  if (!C.cf) goto L_109013dd;
  /* 109013a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109013ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109013af mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 109013b3 push eax */
  push32((uint32_t)(EAX));
  /* 109013b4 call 0x108f71b0 */
  push32(0x109013b9u); f_108f71b0();
  /* 109013b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109013bc mov esi, eax */
  ESI = (EAX);
  /* 109013be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109013c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109013c4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 109013c8 push eax */
  push32((uint32_t)(EAX));
  /* 109013c9 call 0x108f71b0 */
  push32(0x109013ceu); f_108f71b0();
  /* 109013ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109013d1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109013d4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 109013d8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109013db jmp 0x1090139a */
  goto L_1090139a;
L_109013dd:;
  /* 109013dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109013e0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 109013e6 push eax */
  push32((uint32_t)(EAX));
  /* 109013e7 call 0x108f71b0 */
  push32(0x109013ecu); f_108f71b0();
  /* 109013ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109013ef mov esi, eax */
  ESI = (EAX);
  /* 109013f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109013f4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 109013fa push edx */
  push32((uint32_t)(EDX));
  /* 109013fb call 0x108f71b0 */
  push32(0x10901400u); f_108f71b0();
  /* 10901400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901403 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901406 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1090140a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1090140d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901410 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10901416 push edx */
  push32((uint32_t)(EDX));
  /* 10901417 call 0x108f71b0 */
  push32(0x1090141cu); f_108f71b0();
  /* 1090141c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090141f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10901422 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10901426 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10901429 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1090142c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10901432 push ecx */
  push32((uint32_t)(ECX));
  /* 10901433 call 0x108f71b0 */
  push32(0x10901438u); f_108f71b0();
  /* 10901438 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090143b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1090143e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10901442 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10901445 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901448 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1090144e push edx */
  push32((uint32_t)(EDX));
  /* 1090144f call 0x108f71b0 */
  push32(0x10901454u); f_108f71b0();
  /* 10901454 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901457 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1090145a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1090145e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10901461 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10901464 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901469 push eax */
  push32((uint32_t)(EAX));
  /* 1090146a call 0x108f4360 */
  push32(0x1090146fu); f_108f4360();
  /* 1090146f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901472 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10901475 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901479 je 0x10901696 */
  if (C.zf) goto L_10901696;
  /* 1090147f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901482 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10901485 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901488 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090148e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10901491 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10901496 mov eax, dword ptr [0x1091fc98] */
  EAX = (r32((uint32_t)(0x1091fc98)));
  /* 1090149b push eax */
  push32((uint32_t)(EAX));
  /* 1090149c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090149f push ecx */
  push32((uint32_t)(ECX));
  /* 109014a0 call 0x108fac60 */
  push32(0x109014a5u); f_108fac60();
  /* 109014a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109014a8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109014af jmp 0x109014ba */
  goto L_109014ba;
L_109014b1:;
  /* 109014b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109014b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109014b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_109014ba:;
  /* 109014ba cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109014be jae 0x1090152e */
  if (!C.cf) goto L_1090152e;
  /* 109014c0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109014c3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109014c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109014c9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 109014cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109014cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109014d2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 109014d5 push edx */
  push32((uint32_t)(EDX));
  /* 109014d6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109014d9 push eax */
  push32((uint32_t)(EAX));
  /* 109014da call 0x108f7330 */
  push32(0x109014dfu); f_108f7330();
  /* 109014df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109014e2 push eax */
  push32((uint32_t)(EAX));
  /* 109014e3 call 0x108f71b0 */
  push32(0x109014e8u); f_108f71b0();
  /* 109014e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109014eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109014ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 109014f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109014f5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109014f8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109014fb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109014fe mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10901502 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10901505 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901508 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1090150c push edx */
  push32((uint32_t)(EDX));
  /* 1090150d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901510 push eax */
  push32((uint32_t)(EAX));
  /* 10901511 call 0x108f7330 */
  push32(0x10901516u); f_108f7330();
  /* 10901516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901519 push eax */
  push32((uint32_t)(EAX));
  /* 1090151a call 0x108f71b0 */
  push32(0x1090151fu); f_108f71b0();
  /* 1090151f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901522 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901525 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10901529 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1090152c jmp 0x109014b1 */
  goto L_109014b1;
L_1090152e:;
  /* 1090152e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10901535 jmp 0x10901540 */
  goto L_10901540;
L_10901537:;
  /* 10901537 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1090153a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090153d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10901540:;
  /* 10901540 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901544 jae 0x109015b6 */
  if (!C.cf) goto L_109015b6;
  /* 10901546 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10901549 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1090154c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1090154f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10901553 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10901556 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901559 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1090155d push eax */
  push32((uint32_t)(EAX));
  /* 1090155e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901561 push ecx */
  push32((uint32_t)(ECX));
  /* 10901562 call 0x108f7330 */
  push32(0x10901567u); f_108f7330();
  /* 10901567 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090156a push eax */
  push32((uint32_t)(EAX));
  /* 1090156b call 0x108f71b0 */
  push32(0x10901570u); f_108f71b0();
  /* 10901570 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901573 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901576 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1090157a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1090157d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10901580 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10901583 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901586 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1090158a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1090158d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901590 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10901594 push eax */
  push32((uint32_t)(EAX));
  /* 10901595 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901598 push ecx */
  push32((uint32_t)(ECX));
  /* 10901599 call 0x108f7330 */
  push32(0x1090159eu); f_108f7330();
  /* 1090159e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109015a1 push eax */
  push32((uint32_t)(EAX));
  /* 109015a2 call 0x108f71b0 */
  push32(0x109015a7u); f_108f71b0();
  /* 109015a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109015aa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109015ad lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 109015b1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109015b4 jmp 0x10901537 */
  goto L_10901537;
L_109015b6:;
  /* 109015b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109015b9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109015bc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 109015c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109015c5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 109015cb push ecx */
  push32((uint32_t)(ECX));
  /* 109015cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109015cf push edx */
  push32((uint32_t)(EDX));
  /* 109015d0 call 0x108f7330 */
  push32(0x109015d5u); f_108f7330();
  /* 109015d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109015d8 push eax */
  push32((uint32_t)(EAX));
  /* 109015d9 call 0x108f71b0 */
  push32(0x109015deu); f_108f71b0();
  /* 109015de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109015e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109015e4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 109015e8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109015eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109015ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109015f1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 109015f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109015fa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10901600 push eax */
  push32((uint32_t)(EAX));
  /* 10901601 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901604 push ecx */
  push32((uint32_t)(ECX));
  /* 10901605 call 0x108f7330 */
  push32(0x1090160au); f_108f7330();
  /* 1090160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090160d push eax */
  push32((uint32_t)(EAX));
  /* 1090160e call 0x108f71b0 */
  push32(0x10901613u); f_108f71b0();
  /* 10901613 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901616 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901619 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1090161d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10901620 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10901623 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901626 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1090162c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1090162f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10901635 push ecx */
  push32((uint32_t)(ECX));
  /* 10901636 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901639 push edx */
  push32((uint32_t)(EDX));
  /* 1090163a call 0x108f7330 */
  push32(0x1090163fu); f_108f7330();
  /* 1090163f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901642 push eax */
  push32((uint32_t)(EAX));
  /* 10901643 call 0x108f71b0 */
  push32(0x10901648u); f_108f71b0();
  /* 10901648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090164b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1090164e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10901652 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10901655 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10901658 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1090165b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10901661 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901664 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1090166a push eax */
  push32((uint32_t)(EAX));
  /* 1090166b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1090166e push ecx */
  push32((uint32_t)(ECX));
  /* 1090166f call 0x108f7330 */
  push32(0x10901674u); f_108f7330();
  /* 10901674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901677 push eax */
  push32((uint32_t)(EAX));
  /* 10901678 call 0x108f71b0 */
  push32(0x1090167du); f_108f71b0();
  /* 1090167d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901680 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901683 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10901687 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1090168a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1090168d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10901690 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10901696:;
  /* 10901696 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901699 pop esi */
  ESI = (pop32());
  /* 1090169a mov esp, ebp */
  ESP = (EBP);
  /* 1090169c pop ebp */
  EBP = (pop32());
  /* 1090169d ret  */
  ESPCHK(0x10901330u, _esp0);
  ESP += 4; return;
}

/* FUN_100116a0 @ 0x109016a0 (31 bytes, 15 insns) */
void f_109016a0(void) {
  FTRACE(0x109016a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109016a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109016a1 mov ebp, esp */
  EBP = (ESP);
  /* 109016a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109016a5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109016a8 push eax */
  push32((uint32_t)(EAX));
  /* 109016a9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109016ac push ecx */
  push32((uint32_t)(ECX));
  /* 109016ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109016b0 push edx */
  push32((uint32_t)(EDX));
  /* 109016b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109016b4 push eax */
  push32((uint32_t)(EAX));
  /* 109016b5 call 0x109016c0 */
  push32(0x109016bau); f_109016c0();
  /* 109016ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109016bd pop ebp */
  EBP = (pop32());
  /* 109016be ret  */
  ESPCHK(0x109016a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100116c0 @ 0x109016c0 (393 bytes, 123 insns) */
void f_109016c0(void) {
  FTRACE(0x109016c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109016c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109016c1 mov ebp, esp */
  EBP = (ESP);
  /* 109016c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109016c6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109016ca jne 0x109016d6 */
  if (!C.zf) goto L_109016d6;
  /* 109016cc mov eax, dword ptr [0x1091fc98] */
  EAX = (r32((uint32_t)(0x1091fc98)));
  /* 109016d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109016d4 jmp 0x109016dc */
  goto L_109016dc;
L_109016d6:;
  /* 109016d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109016d9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_109016dc:;
  /* 109016dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109016df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109016e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109016e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109016e8 push 0x10920944 */
  push32((uint32_t)(0x10920944u));
  /* 109016ed call dword ptr [0x10923380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923380))), 0x109016f3u);
  /* 109016f3 cmp dword ptr [0x10920934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109016fa je 0x1090171a */
  if (C.zf) goto L_1090171a;
  /* 109016fc push 0x10920944 */
  push32((uint32_t)(0x10920944u));
  /* 10901701 call dword ptr [0x10923370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923370))), 0x10901707u);
  /* 10901707 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10901709 call 0x108f7d80 */
  push32(0x1090170eu); f_108f7d80();
  /* 1090170e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901711 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10901718 jmp 0x10901721 */
  goto L_10901721;
L_1090171a:;
  /* 1090171a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10901721:;
  /* 10901721 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901725 jbe 0x10901812 */
  if ((C.cf||C.zf)) goto L_10901812;
  /* 1090172b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090172e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10901730 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10901733 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10901737 je 0x10901741 */
  if (C.zf) goto L_10901741;
  /* 10901739 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1090173d je 0x10901746 */
  if (C.zf) goto L_10901746;
  /* 1090173f jmp 0x109017a0 */
  goto L_109017a0;
L_10901741:;
  /* 10901741 jmp 0x10901812 */
  goto L_10901812;
L_10901746:;
  /* 10901746 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901749 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090174c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1090174f mov dword ptr [0x10920920], 0 */
  w32((uint32_t)(0x10920920), (0x0u));
  /* 10901759 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090175c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1090175f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901762 jne 0x10901777 */
  if (!C.zf) goto L_10901777;
  /* 10901764 mov dword ptr [0x10920920], 1 */
  w32((uint32_t)(0x10920920), (0x1u));
  /* 1090176e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901771 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901774 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10901777:;
  /* 10901777 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090177a push ecx */
  push32((uint32_t)(ECX));
  /* 1090177b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1090177e push edx */
  push32((uint32_t)(EDX));
  /* 1090177f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10901782 push eax */
  push32((uint32_t)(EAX));
  /* 10901783 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901786 push ecx */
  push32((uint32_t)(ECX));
  /* 10901787 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090178a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1090178c push eax */
  push32((uint32_t)(EAX));
  /* 1090178d call 0x10901850 */
  push32(0x10901792u); f_10901850();
  /* 10901792 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901795 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901798 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090179b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1090179e jmp 0x1090180d */
  goto L_1090180d;
L_109017a0:;
  /* 109017a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109017a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109017a5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109017a7 mov ecx, dword ptr [0x1091ec98] */
  ECX = (r32((uint32_t)(0x1091ec98)));
  /* 109017ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109017af mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 109017b3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 109017b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109017bb je 0x109017e8 */
  if (C.zf) goto L_109017e8;
  /* 109017bd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109017c1 jbe 0x109017e8 */
  if ((C.cf||C.zf)) goto L_109017e8;
  /* 109017c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109017c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109017c9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109017cb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109017cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109017d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109017d3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109017d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109017d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109017dc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 109017df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109017e2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109017e5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_109017e8:;
  /* 109017e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109017eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109017ee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109017f0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109017f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109017f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109017f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109017fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109017fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901801 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10901804 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901807 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1090180a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1090180d:;
  /* 1090180d jmp 0x10901721 */
  goto L_10901721;
L_10901812:;
  /* 10901812 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901816 je 0x10901824 */
  if (C.zf) goto L_10901824;
  /* 10901818 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1090181a call 0x108f7e20 */
  push32(0x1090181fu); f_108f7e20();
  /* 1090181f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901822 jmp 0x1090182f */
  goto L_1090182f;
L_10901824:;
  /* 10901824 push 0x10920944 */
  push32((uint32_t)(0x10920944u));
  /* 10901829 call dword ptr [0x10923370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923370))), 0x1090182fu);
L_1090182f:;
  /* 1090182f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901833 jbe 0x10901843 */
  if ((C.cf||C.zf)) goto L_10901843;
  /* 10901835 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10901838 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1090183b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1090183e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901841 jmp 0x10901845 */
  goto L_10901845;
L_10901843:;
  /* 10901843 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10901845:;
  /* 10901845 mov esp, ebp */
  ESP = (EBP);
  /* 10901847 pop ebp */
  EBP = (pop32());
  /* 10901848 ret  */
  ESPCHK(0x109016c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011850 @ 0x10901850 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10901850(void) {
  FTRACE(0x10901850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10901850 push ebp */
  push32((uint32_t)(EBP));
  /* 10901851 mov ebp, esp */
  EBP = (ESP);
  /* 10901853 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901856 push esi */
  push32((uint32_t)(ESI));
  /* 10901857 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1090185b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1090185e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901861 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901864 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10901867 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090186b ja 0x10901db8 */
  if ((!C.cf&&!C.zf)) goto L_10901db8;
  /* 10901871 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10901874 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10901876 mov dl, byte ptr [eax + 0x10901e19] */
  DL = (r8((uint32_t)(EAX + 0x10901e19)));
  /* 1090187c jmp dword ptr [edx*4 + 0x10901dbd] */
  switch (EDX) {
    case 0: goto L_10901d96;
    case 1: goto L_109018a5;
    case 2: goto L_109018eb;
    case 3: goto L_10901a38;
    case 4: goto L_10901a60;
    case 5: goto L_10901aff;
    case 6: goto L_10901b6b;
    case 7: goto L_10901b94;
    case 8: goto L_10901bd5;
    case 9: goto L_10901cb7;
    case 10: goto L_10901d1e;
    case 11: goto L_10901d6b;
    case 12: goto L_10901883;
    case 13: goto L_109018c8;
    case 14: goto L_1090190e;
    case 15: goto L_10901a0e;
    case 16: goto L_10901aa5;
    case 17: goto L_10901ad2;
    case 18: goto L_10901b27;
    case 19: goto L_10901bab;
    case 20: goto L_10901c59;
    case 21: goto L_10901ce8;
    case 22: goto L_10901db8;
    default: x86_unimpl("switch@0x1090187c out of table"); return;
  }
L_10901883:;
  /* 10901883 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901886 push ecx */
  push32((uint32_t)(ECX));
  /* 10901887 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090188a push edx */
  push32((uint32_t)(EDX));
  /* 1090188b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1090188e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10901891 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10901894 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10901897 push eax */
  push32((uint32_t)(EAX));
  /* 10901898 call 0x10901e70 */
  push32(0x1090189du); f_10901e70();
  /* 1090189d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109018a0 jmp 0x10901db8 */
  goto L_10901db8;
L_109018a5:;
  /* 109018a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109018a8 push ecx */
  push32((uint32_t)(ECX));
  /* 109018a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109018ac push edx */
  push32((uint32_t)(EDX));
  /* 109018ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109018b0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 109018b3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109018b6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 109018ba push eax */
  push32((uint32_t)(EAX));
  /* 109018bb call 0x10901e70 */
  push32(0x109018c0u); f_10901e70();
  /* 109018c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109018c3 jmp 0x10901db8 */
  goto L_10901db8;
L_109018c8:;
  /* 109018c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109018cb push ecx */
  push32((uint32_t)(ECX));
  /* 109018cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109018cf push edx */
  push32((uint32_t)(EDX));
  /* 109018d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109018d3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109018d6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109018d9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 109018dd push eax */
  push32((uint32_t)(EAX));
  /* 109018de call 0x10901e70 */
  push32(0x109018e3u); f_10901e70();
  /* 109018e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109018e6 jmp 0x10901db8 */
  goto L_10901db8;
L_109018eb:;
  /* 109018eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109018ee push ecx */
  push32((uint32_t)(ECX));
  /* 109018ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109018f2 push edx */
  push32((uint32_t)(EDX));
  /* 109018f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109018f6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109018f9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109018fc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10901900 push eax */
  push32((uint32_t)(EAX));
  /* 10901901 call 0x10901e70 */
  push32(0x10901906u); f_10901e70();
  /* 10901906 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901909 jmp 0x10901db8 */
  goto L_10901db8;
L_1090190e:;
  /* 1090190e cmp dword ptr [0x10920920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901915 je 0x10901996 */
  if (C.zf) goto L_10901996;
  /* 10901917 mov dword ptr [0x10920920], 0 */
  w32((uint32_t)(0x10920920), (0x0u));
  /* 10901921 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10901924 push ecx */
  push32((uint32_t)(ECX));
  /* 10901925 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901928 push edx */
  push32((uint32_t)(EDX));
  /* 10901929 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090192c push eax */
  push32((uint32_t)(EAX));
  /* 1090192d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901930 push ecx */
  push32((uint32_t)(ECX));
  /* 10901931 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10901934 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1090193a push eax */
  push32((uint32_t)(EAX));
  /* 1090193b call 0x10902020 */
  push32(0x10901940u); f_10902020();
  /* 10901940 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901943 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901946 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901949 jne 0x10901950 */
  if (!C.zf) goto L_10901950;
  /* 1090194b jmp 0x10901db8 */
  goto L_10901db8;
L_10901950:;
  /* 10901950 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901953 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10901955 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10901958 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090195b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1090195d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901960 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901963 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10901965 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901968 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1090196a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1090196d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901970 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10901972 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10901975 push ecx */
  push32((uint32_t)(ECX));
  /* 10901976 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901979 push edx */
  push32((uint32_t)(EDX));
  /* 1090197a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090197d push eax */
  push32((uint32_t)(EAX));
  /* 1090197e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901981 push ecx */
  push32((uint32_t)(ECX));
  /* 10901982 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10901985 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1090198b push eax */
  push32((uint32_t)(EAX));
  /* 1090198c call 0x10902020 */
  push32(0x10901991u); f_10902020();
  /* 10901991 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901994 jmp 0x10901a09 */
  goto L_10901a09;
L_10901996:;
  /* 10901996 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10901999 push ecx */
  push32((uint32_t)(ECX));
  /* 1090199a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1090199d push edx */
  push32((uint32_t)(EDX));
  /* 1090199e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109019a1 push eax */
  push32((uint32_t)(EAX));
  /* 109019a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109019a5 push ecx */
  push32((uint32_t)(ECX));
  /* 109019a6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109019a9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 109019af push eax */
  push32((uint32_t)(EAX));
  /* 109019b0 call 0x10902020 */
  push32(0x109019b5u); f_10902020();
  /* 109019b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109019b8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109019bb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109019be jne 0x109019c5 */
  if (!C.zf) goto L_109019c5;
  /* 109019c0 jmp 0x10901db8 */
  goto L_10901db8;
L_109019c5:;
  /* 109019c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109019c8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109019ca mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 109019cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109019d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109019d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109019d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109019d8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109019da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109019dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109019df sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109019e2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109019e5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109019e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109019ea push ecx */
  push32((uint32_t)(ECX));
  /* 109019eb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109019ee push edx */
  push32((uint32_t)(EDX));
  /* 109019ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109019f2 push eax */
  push32((uint32_t)(EAX));
  /* 109019f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109019f6 push ecx */
  push32((uint32_t)(ECX));
  /* 109019f7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109019fa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10901a00 push eax */
  push32((uint32_t)(EAX));
  /* 10901a01 call 0x10902020 */
  push32(0x10901a06u); f_10902020();
  /* 10901a06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10901a09:;
  /* 10901a09 jmp 0x10901db8 */
  goto L_10901db8;
L_10901a0e:;
  /* 10901a0e mov ecx, dword ptr [0x10920920] */
  ECX = (r32((uint32_t)(0x10920920)));
  /* 10901a14 mov dword ptr [0x10920930], ecx */
  w32((uint32_t)(0x10920930), (ECX));
  /* 10901a1a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901a1d push edx */
  push32((uint32_t)(EDX));
  /* 10901a1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901a21 push eax */
  push32((uint32_t)(EAX));
  /* 10901a22 push 2 */
  push32((uint32_t)(0x2u));
  /* 10901a24 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901a27 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10901a2a push edx */
  push32((uint32_t)(EDX));
  /* 10901a2b call 0x10901ec0 */
  push32(0x10901a30u); f_10901ec0();
  /* 10901a30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901a33 jmp 0x10901db8 */
  goto L_10901db8;
L_10901a38:;
  /* 10901a38 mov eax, dword ptr [0x10920920] */
  EAX = (r32((uint32_t)(0x10920920)));
  /* 10901a3d mov dword ptr [0x10920930], eax */
  w32((uint32_t)(0x10920930), (EAX));
  /* 10901a42 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901a45 push ecx */
  push32((uint32_t)(ECX));
  /* 10901a46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901a49 push edx */
  push32((uint32_t)(EDX));
  /* 10901a4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10901a4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901a4f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10901a52 push ecx */
  push32((uint32_t)(ECX));
  /* 10901a53 call 0x10901ec0 */
  push32(0x10901a58u); f_10901ec0();
  /* 10901a58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901a5b jmp 0x10901db8 */
  goto L_10901db8;
L_10901a60:;
  /* 10901a60 mov edx, dword ptr [0x10920920] */
  EDX = (r32((uint32_t)(0x10920920)));
  /* 10901a66 mov dword ptr [0x10920930], edx */
  w32((uint32_t)(0x10920930), (EDX));
  /* 10901a6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901a6f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10901a72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10901a73 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10901a78 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10901a7a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10901a7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901a81 jne 0x10901a8a */
  if (!C.zf) goto L_10901a8a;
  /* 10901a83 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10901a8a:;
  /* 10901a8a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901a8d push edx */
  push32((uint32_t)(EDX));
  /* 10901a8e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901a91 push eax */
  push32((uint32_t)(EAX));
  /* 10901a92 push 2 */
  push32((uint32_t)(0x2u));
  /* 10901a94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901a97 push ecx */
  push32((uint32_t)(ECX));
  /* 10901a98 call 0x10901ec0 */
  push32(0x10901a9du); f_10901ec0();
  /* 10901a9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901aa0 jmp 0x10901db8 */
  goto L_10901db8;
L_10901aa5:;
  /* 10901aa5 mov edx, dword ptr [0x10920920] */
  EDX = (r32((uint32_t)(0x10920920)));
  /* 10901aab mov dword ptr [0x10920930], edx */
  w32((uint32_t)(0x10920930), (EDX));
  /* 10901ab1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901ab4 push eax */
  push32((uint32_t)(EAX));
  /* 10901ab5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901ab8 push ecx */
  push32((uint32_t)(ECX));
  /* 10901ab9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10901abb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901abe mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10901ac1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901ac4 push eax */
  push32((uint32_t)(EAX));
  /* 10901ac5 call 0x10901ec0 */
  push32(0x10901acau); f_10901ec0();
  /* 10901aca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901acd jmp 0x10901db8 */
  goto L_10901db8;
L_10901ad2:;
  /* 10901ad2 mov ecx, dword ptr [0x10920920] */
  ECX = (r32((uint32_t)(0x10920920)));
  /* 10901ad8 mov dword ptr [0x10920930], ecx */
  w32((uint32_t)(0x10920930), (ECX));
  /* 10901ade mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901ae1 push edx */
  push32((uint32_t)(EDX));
  /* 10901ae2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901ae5 push eax */
  push32((uint32_t)(EAX));
  /* 10901ae6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10901ae8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901aeb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10901aee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901af1 push edx */
  push32((uint32_t)(EDX));
  /* 10901af2 call 0x10901ec0 */
  push32(0x10901af7u); f_10901ec0();
  /* 10901af7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901afa jmp 0x10901db8 */
  goto L_10901db8;
L_10901aff:;
  /* 10901aff mov eax, dword ptr [0x10920920] */
  EAX = (r32((uint32_t)(0x10920920)));
  /* 10901b04 mov dword ptr [0x10920930], eax */
  w32((uint32_t)(0x10920930), (EAX));
  /* 10901b09 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901b0c push ecx */
  push32((uint32_t)(ECX));
  /* 10901b0d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901b10 push edx */
  push32((uint32_t)(EDX));
  /* 10901b11 push 2 */
  push32((uint32_t)(0x2u));
  /* 10901b13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901b16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10901b19 push ecx */
  push32((uint32_t)(ECX));
  /* 10901b1a call 0x10901ec0 */
  push32(0x10901b1fu); f_10901ec0();
  /* 10901b1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901b22 jmp 0x10901db8 */
  goto L_10901db8;
L_10901b27:;
  /* 10901b27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901b2a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901b2e jg 0x10901b4c */
  if ((!C.zf&&C.sf==C.of)) goto L_10901b4c;
  /* 10901b30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901b33 push eax */
  push32((uint32_t)(EAX));
  /* 10901b34 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901b37 push ecx */
  push32((uint32_t)(ECX));
  /* 10901b38 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10901b3b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10901b41 push eax */
  push32((uint32_t)(EAX));
  /* 10901b42 call 0x10901e70 */
  push32(0x10901b47u); f_10901e70();
  /* 10901b47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901b4a jmp 0x10901b66 */
  goto L_10901b66;
L_10901b4c:;
  /* 10901b4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901b4f push ecx */
  push32((uint32_t)(ECX));
  /* 10901b50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901b53 push edx */
  push32((uint32_t)(EDX));
  /* 10901b54 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10901b57 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10901b5d push ecx */
  push32((uint32_t)(ECX));
  /* 10901b5e call 0x10901e70 */
  push32(0x10901b63u); f_10901e70();
  /* 10901b63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10901b66:;
  /* 10901b66 jmp 0x10901db8 */
  goto L_10901db8;
L_10901b6b:;
  /* 10901b6b mov edx, dword ptr [0x10920920] */
  EDX = (r32((uint32_t)(0x10920920)));
  /* 10901b71 mov dword ptr [0x10920930], edx */
  w32((uint32_t)(0x10920930), (EDX));
  /* 10901b77 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901b7a push eax */
  push32((uint32_t)(EAX));
  /* 10901b7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901b7e push ecx */
  push32((uint32_t)(ECX));
  /* 10901b7f push 2 */
  push32((uint32_t)(0x2u));
  /* 10901b81 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901b84 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10901b86 push eax */
  push32((uint32_t)(EAX));
  /* 10901b87 call 0x10901ec0 */
  push32(0x10901b8cu); f_10901ec0();
  /* 10901b8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901b8f jmp 0x10901db8 */
  goto L_10901db8;
L_10901b94:;
  /* 10901b94 mov ecx, dword ptr [0x10920920] */
  ECX = (r32((uint32_t)(0x10920920)));
  /* 10901b9a mov dword ptr [0x10920930], ecx */
  w32((uint32_t)(0x10920930), (ECX));
  /* 10901ba0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901ba3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10901ba6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10901ba9 jmp 0x10901bfd */
  goto L_10901bfd;
L_10901bab:;
  /* 10901bab mov ecx, dword ptr [0x10920920] */
  ECX = (r32((uint32_t)(0x10920920)));
  /* 10901bb1 mov dword ptr [0x10920930], ecx */
  w32((uint32_t)(0x10920930), (ECX));
  /* 10901bb7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901bba push edx */
  push32((uint32_t)(EDX));
  /* 10901bbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901bbe push eax */
  push32((uint32_t)(EAX));
  /* 10901bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10901bc1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901bc4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10901bc7 push edx */
  push32((uint32_t)(EDX));
  /* 10901bc8 call 0x10901ec0 */
  push32(0x10901bcdu); f_10901ec0();
  /* 10901bcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901bd0 jmp 0x10901db8 */
  goto L_10901db8;
L_10901bd5:;
  /* 10901bd5 mov eax, dword ptr [0x10920920] */
  EAX = (r32((uint32_t)(0x10920920)));
  /* 10901bda mov dword ptr [0x10920930], eax */
  w32((uint32_t)(0x10920930), (EAX));
  /* 10901bdf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901be2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901be6 jne 0x10901bf1 */
  if (!C.zf) goto L_10901bf1;
  /* 10901be8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10901bef jmp 0x10901bfd */
  goto L_10901bfd;
L_10901bf1:;
  /* 10901bf1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901bf4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10901bf7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901bfa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10901bfd:;
  /* 10901bfd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901c00 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10901c03 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901c06 jge 0x10901c11 */
  if ((C.sf==C.of)) goto L_10901c11;
  /* 10901c08 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10901c0f jmp 0x10901c3e */
  goto L_10901c3e;
L_10901c11:;
  /* 10901c11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901c14 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10901c17 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10901c18 mov ecx, 7 */
  ECX = (0x7u);
  /* 10901c1d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10901c1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10901c22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901c25 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10901c28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10901c29 mov ecx, 7 */
  ECX = (0x7u);
  /* 10901c2e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10901c30 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901c33 jl 0x10901c3e */
  if ((C.sf!=C.of)) goto L_10901c3e;
  /* 10901c35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901c38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901c3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10901c3e:;
  /* 10901c3e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901c41 push eax */
  push32((uint32_t)(EAX));
  /* 10901c42 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901c45 push ecx */
  push32((uint32_t)(ECX));
  /* 10901c46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10901c48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901c4b push edx */
  push32((uint32_t)(EDX));
  /* 10901c4c call 0x10901ec0 */
  push32(0x10901c51u); f_10901ec0();
  /* 10901c51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901c54 jmp 0x10901db8 */
  goto L_10901db8;
L_10901c59:;
  /* 10901c59 cmp dword ptr [0x10920920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901c60 je 0x10901c90 */
  if (C.zf) goto L_10901c90;
  /* 10901c62 mov dword ptr [0x10920920], 0 */
  w32((uint32_t)(0x10920920), (0x0u));
  /* 10901c6c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10901c6f push eax */
  push32((uint32_t)(EAX));
  /* 10901c70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10901c74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901c77 push edx */
  push32((uint32_t)(EDX));
  /* 10901c78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901c7b push eax */
  push32((uint32_t)(EAX));
  /* 10901c7c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10901c7f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10901c85 push edx */
  push32((uint32_t)(EDX));
  /* 10901c86 call 0x10902020 */
  push32(0x10901c8bu); f_10902020();
  /* 10901c8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901c8e jmp 0x10901cb2 */
  goto L_10901cb2;
L_10901c90:;
  /* 10901c90 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10901c93 push eax */
  push32((uint32_t)(EAX));
  /* 10901c94 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901c97 push ecx */
  push32((uint32_t)(ECX));
  /* 10901c98 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901c9b push edx */
  push32((uint32_t)(EDX));
  /* 10901c9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901c9f push eax */
  push32((uint32_t)(EAX));
  /* 10901ca0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10901ca3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10901ca9 push edx */
  push32((uint32_t)(EDX));
  /* 10901caa call 0x10902020 */
  push32(0x10901cafu); f_10902020();
  /* 10901caf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10901cb2:;
  /* 10901cb2 jmp 0x10901db8 */
  goto L_10901db8;
L_10901cb7:;
  /* 10901cb7 mov dword ptr [0x10920920], 0 */
  w32((uint32_t)(0x10920920), (0x0u));
  /* 10901cc1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10901cc4 push eax */
  push32((uint32_t)(EAX));
  /* 10901cc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901cc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10901cc9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901ccc push edx */
  push32((uint32_t)(EDX));
  /* 10901ccd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901cd0 push eax */
  push32((uint32_t)(EAX));
  /* 10901cd1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10901cd4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10901cda push edx */
  push32((uint32_t)(EDX));
  /* 10901cdb call 0x10902020 */
  push32(0x10901ce0u); f_10902020();
  /* 10901ce0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901ce3 jmp 0x10901db8 */
  goto L_10901db8;
L_10901ce8:;
  /* 10901ce8 mov eax, dword ptr [0x10920920] */
  EAX = (r32((uint32_t)(0x10920920)));
  /* 10901ced mov dword ptr [0x10920930], eax */
  w32((uint32_t)(0x10920930), (EAX));
  /* 10901cf2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901cf5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10901cf8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10901cf9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10901cfe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10901d00 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10901d03 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901d06 push edx */
  push32((uint32_t)(EDX));
  /* 10901d07 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901d0a push eax */
  push32((uint32_t)(EAX));
  /* 10901d0b push 2 */
  push32((uint32_t)(0x2u));
  /* 10901d0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901d10 push ecx */
  push32((uint32_t)(ECX));
  /* 10901d11 call 0x10901ec0 */
  push32(0x10901d16u); f_10901ec0();
  /* 10901d16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901d19 jmp 0x10901db8 */
  goto L_10901db8;
L_10901d1e:;
  /* 10901d1e mov edx, dword ptr [0x10920920] */
  EDX = (r32((uint32_t)(0x10920920)));
  /* 10901d24 mov dword ptr [0x10920930], edx */
  w32((uint32_t)(0x10920930), (EDX));
  /* 10901d2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901d2d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10901d30 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10901d31 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10901d36 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10901d38 mov ecx, eax */
  ECX = (EAX);
  /* 10901d3a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901d3d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10901d40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901d43 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10901d46 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10901d47 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10901d4c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10901d4e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901d50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10901d53 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901d56 push eax */
  push32((uint32_t)(EAX));
  /* 10901d57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901d5a push ecx */
  push32((uint32_t)(ECX));
  /* 10901d5b push 4 */
  push32((uint32_t)(0x4u));
  /* 10901d5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901d60 push edx */
  push32((uint32_t)(EDX));
  /* 10901d61 call 0x10901ec0 */
  push32(0x10901d66u); f_10901ec0();
  /* 10901d66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901d69 jmp 0x10901db8 */
  goto L_10901db8;
L_10901d6b:;
  /* 10901d6b call 0x10902e80 */
  push32(0x10901d70u); f_10902e80();
  /* 10901d70 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901d73 push eax */
  push32((uint32_t)(EAX));
  /* 10901d74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901d77 push ecx */
  push32((uint32_t)(ECX));
  /* 10901d78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901d7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10901d7d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901d81 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10901d84 mov ecx, dword ptr [eax*4 + 0x1091fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1091fe1c)));
  /* 10901d8b push ecx */
  push32((uint32_t)(ECX));
  /* 10901d8c call 0x10901e70 */
  push32(0x10901d91u); f_10901e70();
  /* 10901d91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901d94 jmp 0x10901db8 */
  goto L_10901db8;
L_10901d96:;
  /* 10901d96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901d99 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10901d9b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10901d9e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901da1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10901da3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901da6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901da9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10901dab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901dae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10901db0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901db3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901db6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10901db8:;
  /* 10901db8 pop esi */
  ESI = (pop32());
  /* 10901db9 mov esp, ebp */
  ESP = (EBP);
  /* 10901dbb pop ebp */
  EBP = (pop32());
  /* 10901dbc ret  */
  ESPCHK(0x10901850u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10901e70 (72 bytes, 30 insns) */
void f_10901e70(void) {
  FTRACE(0x10901e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10901e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10901e71 mov ebp, esp */
  EBP = (ESP);
L_10901e73:;
  /* 10901e73 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901e76 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901e79 je 0x10901eb6 */
  if (C.zf) goto L_10901eb6;
  /* 10901e7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10901e7e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10901e81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10901e83 je 0x10901eb6 */
  if (C.zf) goto L_10901eb6;
  /* 10901e85 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901e88 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10901e8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10901e8d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10901e8f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10901e91 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901e94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10901e96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901e99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901e9c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10901e9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10901ea1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901ea4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10901ea7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901eaa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10901eac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901eaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901eb2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10901eb4 jmp 0x10901e73 */
  goto L_10901e73;
L_10901eb6:;
  /* 10901eb6 pop ebp */
  EBP = (pop32());
  /* 10901eb7 ret  */
  ESPCHK(0x10901e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ec0 @ 0x10901ec0 (173 bytes, 64 insns) */
void f_10901ec0(void) {
  FTRACE(0x10901ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10901ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10901ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10901ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 10901ec4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10901ecb cmp dword ptr [0x10920930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901ed2 je 0x10901eea */
  if (C.zf) goto L_10901eea;
  /* 10901ed4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901ed7 push eax */
  push32((uint32_t)(EAX));
  /* 10901ed8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901edb push ecx */
  push32((uint32_t)(ECX));
  /* 10901edc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10901edf push edx */
  push32((uint32_t)(EDX));
  /* 10901ee0 call 0x10901f70 */
  push32(0x10901ee5u); f_10901f70();
  /* 10901ee5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10901ee8 jmp 0x10901f69 */
  goto L_10901f69;
L_10901eea:;
  /* 10901eea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901eed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901ef0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901ef2 jae 0x10901f60 */
  if (!C.cf) goto L_10901f60;
  /* 10901ef4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901ef7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901efa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10901efd jmp 0x10901f08 */
  goto L_10901f08;
L_10901eff:;
  /* 10901eff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901f02 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901f05 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10901f08:;
  /* 10901f08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901f0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901f0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10901f10 je 0x10901f44 */
  if (C.zf) goto L_10901f44;
  /* 10901f12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10901f15 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10901f16 mov ecx, 0xa */
  ECX = (0xau);
  /* 10901f1b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10901f1d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901f20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901f23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10901f25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901f28 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10901f2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10901f2e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10901f2f mov ecx, 0xa */
  ECX = (0xau);
  /* 10901f34 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10901f36 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10901f39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901f3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901f3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10901f42 jmp 0x10901eff */
  goto L_10901eff;
L_10901f44:;
  /* 10901f44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901f47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10901f49 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901f4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901f4f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10901f51 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901f54 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10901f56 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901f59 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901f5c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10901f5e jmp 0x10901f69 */
  goto L_10901f69;
L_10901f60:;
  /* 10901f60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10901f63 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10901f69:;
  /* 10901f69 mov esp, ebp */
  ESP = (EBP);
  /* 10901f6b pop ebp */
  EBP = (pop32());
  /* 10901f6c ret  */
  ESPCHK(0x10901ec0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10901f70 (172 bytes, 65 insns) */
void f_10901f70(void) {
  FTRACE(0x10901f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10901f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10901f71 mov ebp, esp */
  EBP = (ESP);
  /* 10901f73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901f76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901f79 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10901f7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10901f7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901f81 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901f84 jbe 0x10901fcb */
  if ((C.cf||C.zf)) goto L_10901fcb;
L_10901f86:;
  /* 10901f86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10901f89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10901f8a mov ecx, 0xa */
  ECX = (0xau);
  /* 10901f8f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10901f91 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901f94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901f97 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10901f99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901f9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10901f9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10901fa2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901fa5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10901fa7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901faa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901fad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10901faf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10901fb2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10901fb3 mov ecx, 0xa */
  ECX = (0xau);
  /* 10901fb8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10901fba mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10901fbd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901fc1 jle 0x10901fcb */
  if ((C.zf||C.sf!=C.of)) goto L_10901fcb;
  /* 10901fc3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10901fc6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10901fc9 ja 0x10901f86 */
  if ((!C.cf&&!C.zf)) goto L_10901f86;
L_10901fcb:;
  /* 10901fcb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901fce mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10901fd0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10901fd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10901fd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901fd9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10901fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901fde sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901fe1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10901fe4:;
  /* 10901fe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901fe7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10901fe9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10901fec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901fef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10901ff2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10901ff4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10901ff6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10901ff9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10901ffc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10901fff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10902002 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10902005 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10902007 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1090200a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090200d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10902010 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10902013 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902016 jb 0x10901fe4 */
  if (C.cf) goto L_10901fe4;
  /* 10902018 mov esp, ebp */
  ESP = (EBP);
  /* 1090201a pop ebp */
  EBP = (pop32());
  /* 1090201b ret  */
  ESPCHK(0x10901f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012020 @ 0x10902020 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10902020(void) {
  FTRACE(0x10902020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10902020 push ebp */
  push32((uint32_t)(EBP));
  /* 10902021 mov ebp, esp */
  EBP = (ESP);
  /* 10902023 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10902026:;
  /* 10902026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902029 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1090202c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1090202e je 0x1090249c */
  if (C.zf) goto L_1090249c;
  /* 10902034 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10902037 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090203a je 0x1090249c */
  if (C.zf) goto L_1090249c;
  /* 10902040 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10902044 mov dword ptr [0x10920930], 0 */
  w32((uint32_t)(0x10920930), (0x0u));
  /* 1090204e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10902055 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902058 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1090205b jmp 0x10902066 */
  goto L_10902066;
L_1090205d:;
  /* 1090205d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10902060 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902063 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10902066:;
  /* 10902066 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10902069 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1090206c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090206f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10902072 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10902075 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902078 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1090207b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090207d jne 0x10902081 */
  if (!C.zf) goto L_10902081;
  /* 1090207f jmp 0x1090205d */
  goto L_1090205d;
L_10902081:;
  /* 10902081 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10902084 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10902087 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1090208a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090208d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10902090 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10902093 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10902096 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10902099 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1090209c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109020a0 ja 0x109023f0 */
  if ((!C.cf&&!C.zf)) goto L_109023f0;
  /* 109020a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109020a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109020ab mov al, byte ptr [ecx + 0x109024cc] */
  AL = (r8((uint32_t)(ECX + 0x109024cc)));
  /* 109020b1 jmp dword ptr [eax*4 + 0x109024a0] */
  switch (EAX) {
    case 0: goto L_1090230f;
    case 1: goto L_109021f3;
    case 2: goto L_1090217e;
    case 3: goto L_109020b8;
    case 4: goto L_109020f6;
    case 5: goto L_10902157;
    case 6: goto L_109021a5;
    case 7: goto L_109021cc;
    case 8: goto L_1090223a;
    case 9: goto L_10902134;
    case 10: goto L_109023f0;
    default: x86_unimpl("switch@0x109020b1 out of table"); return;
  }
L_109020b8:;
  /* 109020b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109020bb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 109020be mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109020c1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109020c4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109020c7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109020cb ja 0x109020f1 */
  if ((!C.cf&&!C.zf)) goto L_109020f1;
  /* 109020cd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109020d0 jmp dword ptr [ecx*4 + 0x1090251f] */
  switch (ECX) {
    case 0: goto L_109020d7;
    case 1: goto L_109020e1;
    case 2: goto L_109020e7;
    case 3: goto L_109020ed;
    case 4: goto L_10902115;
    case 5: goto L_1090211f;
    case 6: goto L_10902125;
    case 7: goto L_1090212b;
    default: x86_unimpl("switch@0x109020d0 out of table"); return;
  }
L_109020d7:;
  /* 109020d7 mov dword ptr [0x10920930], 1 */
  w32((uint32_t)(0x10920930), (0x1u));
L_109020e1:;
  /* 109020e1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 109020e5 jmp 0x109020f1 */
  goto L_109020f1;
L_109020e7:;
  /* 109020e7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 109020eb jmp 0x109020f1 */
  goto L_109020f1;
L_109020ed:;
  /* 109020ed mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_109020f1:;
  /* 109020f1 jmp 0x109023f0 */
  goto L_109023f0;
L_109020f6:;
  /* 109020f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109020f9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 109020fc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109020ff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10902102 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10902105 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902109 ja 0x1090212f */
  if ((!C.cf&&!C.zf)) goto L_1090212f;
  /* 1090210b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1090210e jmp dword ptr [ecx*4 + 0x1090252f] */
  switch (ECX) {
    case 0: goto L_10902115;
    case 1: goto L_1090211f;
    case 2: goto L_10902125;
    case 3: goto L_1090212b;
    default: x86_unimpl("switch@0x1090210e out of table"); return;
  }
L_10902115:;
  /* 10902115 mov dword ptr [0x10920930], 1 */
  w32((uint32_t)(0x10920930), (0x1u));
L_1090211f:;
  /* 1090211f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10902123 jmp 0x1090212f */
  goto L_1090212f;
L_10902125:;
  /* 10902125 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10902129 jmp 0x1090212f */
  goto L_1090212f;
L_1090212b:;
  /* 1090212b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1090212f:;
  /* 1090212f jmp 0x109023f0 */
  goto L_109023f0;
L_10902134:;
  /* 10902134 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10902137 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1090213a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090213e je 0x10902148 */
  if (C.zf) goto L_10902148;
  /* 10902140 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902144 je 0x1090214e */
  if (C.zf) goto L_1090214e;
  /* 10902146 jmp 0x10902152 */
  goto L_10902152;
L_10902148:;
  /* 10902148 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1090214c jmp 0x10902152 */
  goto L_10902152;
L_1090214e:;
  /* 1090214e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10902152:;
  /* 10902152 jmp 0x109023f0 */
  goto L_109023f0;
L_10902157:;
  /* 10902157 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1090215a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1090215d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902161 je 0x1090216b */
  if (C.zf) goto L_1090216b;
  /* 10902163 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902167 je 0x10902175 */
  if (C.zf) goto L_10902175;
  /* 10902169 jmp 0x10902179 */
  goto L_10902179;
L_1090216b:;
  /* 1090216b mov dword ptr [0x10920930], 1 */
  w32((uint32_t)(0x10920930), (0x1u));
L_10902175:;
  /* 10902175 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10902179:;
  /* 10902179 jmp 0x109023f0 */
  goto L_109023f0;
L_1090217e:;
  /* 1090217e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10902181 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10902184 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902188 je 0x10902192 */
  if (C.zf) goto L_10902192;
  /* 1090218a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090218e je 0x1090219c */
  if (C.zf) goto L_1090219c;
  /* 10902190 jmp 0x109021a0 */
  goto L_109021a0;
L_10902192:;
  /* 10902192 mov dword ptr [0x10920930], 1 */
  w32((uint32_t)(0x10920930), (0x1u));
L_1090219c:;
  /* 1090219c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_109021a0:;
  /* 109021a0 jmp 0x109023f0 */
  goto L_109023f0;
L_109021a5:;
  /* 109021a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109021a8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 109021ab cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109021af je 0x109021b9 */
  if (C.zf) goto L_109021b9;
  /* 109021b1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109021b5 je 0x109021c3 */
  if (C.zf) goto L_109021c3;
  /* 109021b7 jmp 0x109021c7 */
  goto L_109021c7;
L_109021b9:;
  /* 109021b9 mov dword ptr [0x10920930], 1 */
  w32((uint32_t)(0x10920930), (0x1u));
L_109021c3:;
  /* 109021c3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_109021c7:;
  /* 109021c7 jmp 0x109023f0 */
  goto L_109023f0;
L_109021cc:;
  /* 109021cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109021cf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 109021d2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109021d6 je 0x109021e0 */
  if (C.zf) goto L_109021e0;
  /* 109021d8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109021dc je 0x109021ea */
  if (C.zf) goto L_109021ea;
  /* 109021de jmp 0x109021ee */
  goto L_109021ee;
L_109021e0:;
  /* 109021e0 mov dword ptr [0x10920930], 1 */
  w32((uint32_t)(0x10920930), (0x1u));
L_109021ea:;
  /* 109021ea mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_109021ee:;
  /* 109021ee jmp 0x109023f0 */
  goto L_109023f0;
L_109021f3:;
  /* 109021f3 push 0x1091c934 */
  push32((uint32_t)(0x1091c934u));
  /* 109021f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109021fb push ecx */
  push32((uint32_t)(ECX));
  /* 109021fc call 0x10902a50 */
  push32(0x10902201u); f_10902a50();
  /* 10902201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10902206 jne 0x10902213 */
  if (!C.zf) goto L_10902213;
  /* 10902208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090220b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090220e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10902211 jmp 0x10902231 */
  goto L_10902231;
L_10902213:;
  /* 10902213 push 0x1091c930 */
  push32((uint32_t)(0x1091c930u));
  /* 10902218 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090221b push eax */
  push32((uint32_t)(EAX));
  /* 1090221c call 0x10902a50 */
  push32(0x10902221u); f_10902a50();
  /* 10902221 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10902226 jne 0x10902231 */
  if (!C.zf) goto L_10902231;
  /* 10902228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090222b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090222e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10902231:;
  /* 10902231 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10902235 jmp 0x109023f0 */
  goto L_109023f0;
L_1090223a:;
  /* 1090223a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1090223d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902241 jg 0x10902251 */
  if ((!C.zf&&C.sf==C.of)) goto L_10902251;
  /* 10902243 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10902246 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1090224c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1090224f jmp 0x1090225d */
  goto L_1090225d;
L_10902251:;
  /* 10902251 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10902254 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1090225a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1090225d:;
  /* 1090225d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902261 jle 0x10902304 */
  if ((C.zf||C.sf!=C.of)) goto L_10902304;
  /* 10902267 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1090226a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090226d jbe 0x10902304 */
  if ((C.cf||C.zf)) goto L_10902304;
  /* 10902273 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10902276 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902278 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1090227a mov ecx, dword ptr [0x1091ec98] */
  ECX = (r32((uint32_t)(0x1091ec98)));
  /* 10902280 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10902282 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10902286 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1090228c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1090228e je 0x109022c7 */
  if (C.zf) goto L_109022c7;
  /* 10902290 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10902293 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902296 jbe 0x109022c7 */
  if ((C.cf||C.zf)) goto L_109022c7;
  /* 10902298 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090229b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1090229d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109022a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109022a2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 109022a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109022a7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109022a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109022ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109022af mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109022b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109022b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109022b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 109022ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109022bd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109022bf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109022c2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109022c5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109022c7:;
  /* 109022c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109022ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109022cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109022cf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109022d1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109022d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109022d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109022d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109022db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109022de mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109022e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109022e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109022e6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109022e9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109022ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109022ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109022f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109022f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109022f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109022f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109022fc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109022ff jmp 0x1090225d */
  goto L_1090225d;
L_10902304:;
  /* 10902304 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10902307 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1090230a jmp 0x10902026 */
  goto L_10902026;
L_1090230f:;
  /* 1090230f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10902312 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10902315 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10902317 je 0x109023e2 */
  if (C.zf) goto L_109023e2;
  /* 1090231d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902320 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902323 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10902326:;
  /* 10902326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902329 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1090232c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1090232e je 0x109023e0 */
  if (C.zf) goto L_109023e0;
  /* 10902334 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10902337 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090233a je 0x109023e0 */
  if (C.zf) goto L_109023e0;
  /* 10902340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902343 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10902346 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902349 jne 0x10902359 */
  if (!C.zf) goto L_10902359;
  /* 1090234b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090234e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902351 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10902354 jmp 0x109023e0 */
  goto L_109023e0;
L_10902359:;
  /* 10902359 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090235c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1090235e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10902360 mov edx, dword ptr [0x1091ec98] */
  EDX = (r32((uint32_t)(0x1091ec98)));
  /* 10902366 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902368 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1090236c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10902371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10902373 je 0x109023ac */
  if (C.zf) goto L_109023ac;
  /* 10902375 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10902378 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090237b jbe 0x109023ac */
  if ((C.cf||C.zf)) goto L_109023ac;
  /* 1090237d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10902380 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10902382 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902385 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10902387 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10902389 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090238c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1090238e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902391 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10902394 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10902396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902399 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090239c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1090239f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109023a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109023a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109023a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109023aa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_109023ac:;
  /* 109023ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109023af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109023b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109023b4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109023b6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 109023b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109023bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109023bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109023c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109023c3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109023c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109023c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109023cb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 109023ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109023d1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109023d3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109023d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109023d9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109023db jmp 0x10902326 */
  goto L_10902326;
L_109023e0:;
  /* 109023e0 jmp 0x109023eb */
  goto L_109023eb;
L_109023e2:;
  /* 109023e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109023e5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109023e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_109023eb:;
  /* 109023eb jmp 0x10902026 */
  goto L_10902026;
L_109023f0:;
  /* 109023f0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109023f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109023f6 je 0x1090241c */
  if (C.zf) goto L_1090241c;
  /* 109023f8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109023fb push edx */
  push32((uint32_t)(EDX));
  /* 109023fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109023ff push eax */
  push32((uint32_t)(EAX));
  /* 10902400 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10902403 push ecx */
  push32((uint32_t)(ECX));
  /* 10902404 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10902407 push edx */
  push32((uint32_t)(EDX));
  /* 10902408 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1090240b push eax */
  push32((uint32_t)(EAX));
  /* 1090240c call 0x10901850 */
  push32(0x10902411u); f_10901850();
  /* 10902411 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902414 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10902417 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1090241a jmp 0x10902497 */
  goto L_10902497;
L_1090241c:;
  /* 1090241c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090241f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902421 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10902423 mov ecx, dword ptr [0x1091ec98] */
  ECX = (r32((uint32_t)(0x1091ec98)));
  /* 10902429 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1090242b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1090242f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10902435 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10902437 je 0x10902468 */
  if (C.zf) goto L_10902468;
  /* 10902439 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090243c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1090243e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902441 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10902443 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10902445 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10902448 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1090244a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090244d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10902450 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10902452 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902455 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902458 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1090245b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1090245e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10902460 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10902463 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10902466 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10902468:;
  /* 10902468 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090246b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1090246d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902470 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10902472 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10902474 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10902477 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10902479 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090247c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090247f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10902481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902484 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902487 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1090248a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1090248d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1090248f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10902492 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10902495 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10902497:;
  /* 10902497 jmp 0x10902026 */
  goto L_10902026;
L_1090249c:;
  /* 1090249c mov esp, ebp */
  ESP = (EBP);
  /* 1090249e pop ebp */
  EBP = (pop32());
  /* 1090249f ret  */
  ESPCHK(0x10902020u, _esp0);
  ESP += 4; return;
}

/* FUN_10012540 @ 0x10902540 (650 bytes, 178 insns) */
void f_10902540(void) {
  FTRACE(0x10902540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10902540 push ebp */
  push32((uint32_t)(EBP));
  /* 10902541 mov ebp, esp */
  EBP = (ESP);
  /* 10902543 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10902549 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090254d jne 0x109026a9 */
  if (!C.zf) goto L_109026a9;
  /* 10902553 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10902556 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1090255c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10902562 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10902565 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1090256c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10902576 push 0 */
  push32((uint32_t)(0x0u));
  /* 10902578 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1090257e push edx */
  push32((uint32_t)(EDX));
  /* 1090257f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10902582 push eax */
  push32((uint32_t)(EAX));
  /* 10902583 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10902586 push ecx */
  push32((uint32_t)(ECX));
  /* 10902587 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1090258a push edx */
  push32((uint32_t)(EDX));
  /* 1090258b call 0x10903960 */
  push32(0x10902590u); f_10903960();
  /* 10902590 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902593 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10902596 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090259a jne 0x1090262f */
  if (!C.zf) goto L_1090262f;
  /* 109025a0 call dword ptr [0x109233ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233ac))), 0x109025a6u);
  /* 109025a6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109025a9 je 0x109025b0 */
  if (C.zf) goto L_109025b0;
  /* 109025ab jmp 0x1090268d */
  goto L_1090268d;
L_109025b0:;
  /* 109025b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109025b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109025b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109025b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109025b9 push eax */
  push32((uint32_t)(EAX));
  /* 109025ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109025bd push ecx */
  push32((uint32_t)(ECX));
  /* 109025be call 0x10903960 */
  push32(0x109025c3u); f_10903960();
  /* 109025c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109025c6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 109025cc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109025d3 jne 0x109025da */
  if (!C.zf) goto L_109025da;
  /* 109025d5 jmp 0x1090268d */
  goto L_1090268d;
L_109025da:;
  /* 109025da push 0x58 */
  push32((uint32_t)(0x58u));
  /* 109025dc push 0x1091c93c */
  push32((uint32_t)(0x1091c93cu));
  /* 109025e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109025e3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 109025e9 push edx */
  push32((uint32_t)(EDX));
  /* 109025ea call 0x108f4380 */
  push32(0x109025efu); f_108f4380();
  /* 109025ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109025f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109025f5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109025f9 jne 0x10902600 */
  if (!C.zf) goto L_10902600;
  /* 109025fb jmp 0x1090268d */
  goto L_1090268d;
L_10902600:;
  /* 10902600 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10902607 push 0 */
  push32((uint32_t)(0x0u));
  /* 10902609 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1090260f push eax */
  push32((uint32_t)(EAX));
  /* 10902610 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10902613 push ecx */
  push32((uint32_t)(ECX));
  /* 10902614 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10902617 push edx */
  push32((uint32_t)(EDX));
  /* 10902618 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1090261b push eax */
  push32((uint32_t)(EAX));
  /* 1090261c call 0x10903960 */
  push32(0x10902621u); f_10903960();
  /* 10902621 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902624 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10902627 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090262b jne 0x1090262f */
  if (!C.zf) goto L_1090262f;
  /* 1090262d jmp 0x1090268d */
  goto L_1090268d;
L_1090262f:;
  /* 1090262f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10902631 push 0x1091c93c */
  push32((uint32_t)(0x1091c93cu));
  /* 10902636 push 2 */
  push32((uint32_t)(0x2u));
  /* 10902638 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1090263b push ecx */
  push32((uint32_t)(ECX));
  /* 1090263c call 0x108f4380 */
  push32(0x10902641u); f_108f4380();
  /* 10902641 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902644 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1090264a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1090264c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10902652 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902655 jne 0x10902659 */
  if (!C.zf) goto L_10902659;
  /* 10902657 jmp 0x1090268d */
  goto L_1090268d;
L_10902659:;
  /* 10902659 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1090265c push ecx */
  push32((uint32_t)(ECX));
  /* 1090265d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10902660 push edx */
  push32((uint32_t)(EDX));
  /* 10902661 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10902667 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10902669 push ecx */
  push32((uint32_t)(ECX));
  /* 1090266a call 0x108f7ba0 */
  push32(0x1090266fu); f_108f7ba0();
  /* 1090266f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902672 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902676 je 0x10902686 */
  if (C.zf) goto L_10902686;
  /* 10902678 push 2 */
  push32((uint32_t)(0x2u));
  /* 1090267a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1090267d push edx */
  push32((uint32_t)(EDX));
  /* 1090267e call 0x108f4e10 */
  push32(0x10902683u); f_108f4e10();
  /* 10902683 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10902686:;
  /* 10902686 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902688 jmp 0x109027c6 */
  goto L_109027c6;
L_1090268d:;
  /* 1090268d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902691 je 0x109026a1 */
  if (C.zf) goto L_109026a1;
  /* 10902693 push 2 */
  push32((uint32_t)(0x2u));
  /* 10902695 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10902698 push eax */
  push32((uint32_t)(EAX));
  /* 10902699 call 0x108f4e10 */
  push32(0x1090269eu); f_108f4e10();
  /* 1090269e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109026a1:;
  /* 109026a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109026a4 jmp 0x109027c6 */
  goto L_109027c6;
L_109026a9:;
  /* 109026a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109026ad jne 0x109027c3 */
  if (!C.zf) goto L_109027c3;
  /* 109026b3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 109026bd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109026c0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 109026c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109026c8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 109026ce push edx */
  push32((uint32_t)(EDX));
  /* 109026cf push 0x10920848 */
  push32((uint32_t)(0x10920848u));
  /* 109026d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109026d7 push eax */
  push32((uint32_t)(EAX));
  /* 109026d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109026db push ecx */
  push32((uint32_t)(ECX));
  /* 109026dc call 0x109037c0 */
  push32(0x109026e1u); f_109037c0();
  /* 109026e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109026e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109026e6 jne 0x109026f0 */
  if (!C.zf) goto L_109026f0;
  /* 109026e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109026eb jmp 0x109027c6 */
  goto L_109027c6;
L_109026f0:;
  /* 109026f0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 109026f6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 109026f9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10902703 jmp 0x10902714 */
  goto L_10902714;
L_10902705:;
  /* 10902705 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1090270b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090270e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10902714:;
  /* 10902714 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090271b jge 0x109027bf */
  if ((C.sf==C.of)) goto L_109027bf;
  /* 10902721 cmp dword ptr [0x1091eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1091eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902728 jle 0x1090275b */
  if ((C.zf||C.sf!=C.of)) goto L_1090275b;
  /* 1090272a push 4 */
  push32((uint32_t)(0x4u));
  /* 1090272c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10902732 mov dl, byte ptr [ecx*2 + 0x10920848] */
  DL = (r8((uint32_t)(ECX*2 + 0x10920848)));
  /* 10902739 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1090273f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10902745 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1090274a push eax */
  push32((uint32_t)(EAX));
  /* 1090274b call 0x108fa390 */
  push32(0x10902750u); f_108fa390();
  /* 10902750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902753 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10902759 jmp 0x1090278e */
  goto L_1090278e;
L_1090275b:;
  /* 1090275b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10902761 mov dl, byte ptr [ecx*2 + 0x10920848] */
  DL = (r8((uint32_t)(ECX*2 + 0x10920848)));
  /* 10902768 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1090276e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10902774 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10902779 mov ecx, dword ptr [0x1091ec98] */
  ECX = (r32((uint32_t)(0x1091ec98)));
  /* 1090277f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10902781 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10902785 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10902788 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1090278e:;
  /* 1090278e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902795 je 0x109027b8 */
  if (C.zf) goto L_109027b8;
  /* 10902797 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1090279d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109027a0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109027a3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 109027aa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 109027ae mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 109027b4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109027b6 jmp 0x109027ba */
  goto L_109027ba;
L_109027b8:;
  /* 109027b8 jmp 0x109027bf */
  goto L_109027bf;
L_109027ba:;
  /* 109027ba jmp 0x10902705 */
  goto L_10902705;
L_109027bf:;
  /* 109027bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109027c1 jmp 0x109027c6 */
  goto L_109027c6;
L_109027c3:;
  /* 109027c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_109027c6:;
  /* 109027c6 mov esp, ebp */
  ESP = (EBP);
  /* 109027c8 pop ebp */
  EBP = (pop32());
  /* 109027c9 ret  */
  ESPCHK(0x10902540u, _esp0);
  ESP += 4; return;
}

/* FUN_100127d0 @ 0x109027d0 (10 bytes, 5 insns) */
void f_109027d0(void) {
  FTRACE(0x109027d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109027d0 push ebp */
  push32((uint32_t)(EBP));
  /* 109027d1 mov ebp, esp */
  EBP = (ESP);
  /* 109027d3 mov eax, dword ptr [0x1091fd88] */
  EAX = (r32((uint32_t)(0x1091fd88)));
  /* 109027d8 pop ebp */
  EBP = (pop32());
  /* 109027d9 ret  */
  ESPCHK(0x109027d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100127e0 @ 0x109027e0 (575 bytes, 196 insns) */
void f_109027e0(void) {
  FTRACE(0x109027e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109027e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109027e1 mov ebp, esp */
  EBP = (ESP);
  /* 109027e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109027e5 push 0x1091c948 */
  push32((uint32_t)(0x1091c948u));
  /* 109027ea push 0x108fd488 */
  push32((uint32_t)(0x108fd488u));
  /* 109027ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 109027f5 push eax */
  push32((uint32_t)(EAX));
  /* 109027f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 109027fd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902800 push ebx */
  push32((uint32_t)(EBX));
  /* 10902801 push esi */
  push32((uint32_t)(ESI));
  /* 10902802 push edi */
  push32((uint32_t)(EDI));
  /* 10902803 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10902806 cmp dword ptr [0x10920854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090280d jne 0x1090285e */
  if (!C.zf) goto L_1090285e;
  /* 1090280f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10902812 push eax */
  push32((uint32_t)(EAX));
  /* 10902813 push 1 */
  push32((uint32_t)(0x1u));
  /* 10902815 push 0x1091c07c */
  push32((uint32_t)(0x1091c07cu));
  /* 1090281a push 1 */
  push32((uint32_t)(0x1u));
  /* 1090281c call dword ptr [0x10923308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923308))), 0x10902822u);
  /* 10902822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10902824 je 0x10902832 */
  if (C.zf) goto L_10902832;
  /* 10902826 mov dword ptr [0x10920854], 1 */
  w32((uint32_t)(0x10920854), (0x1u));
  /* 10902830 jmp 0x1090285e */
  goto L_1090285e;
L_10902832:;
  /* 10902832 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10902835 push ecx */
  push32((uint32_t)(ECX));
  /* 10902836 push 1 */
  push32((uint32_t)(0x1u));
  /* 10902838 push 0x1091c078 */
  push32((uint32_t)(0x1091c078u));
  /* 1090283d push 1 */
  push32((uint32_t)(0x1u));
  /* 1090283f push 0 */
  push32((uint32_t)(0x0u));
  /* 10902841 call dword ptr [0x1092330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092330c))), 0x10902847u);
  /* 10902847 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10902849 je 0x10902857 */
  if (C.zf) goto L_10902857;
  /* 1090284b mov dword ptr [0x10920854], 2 */
  w32((uint32_t)(0x10920854), (0x2u));
  /* 10902855 jmp 0x1090285e */
  goto L_1090285e;
L_10902857:;
  /* 10902857 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902859 jmp 0x10902a39 */
  goto L_10902a39;
L_1090285e:;
  /* 1090285e cmp dword ptr [0x10920854], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10920854))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902865 jne 0x10902882 */
  if (!C.zf) goto L_10902882;
  /* 10902867 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1090286a push edx */
  push32((uint32_t)(EDX));
  /* 1090286b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090286e push eax */
  push32((uint32_t)(EAX));
  /* 1090286f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10902872 push ecx */
  push32((uint32_t)(ECX));
  /* 10902873 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902876 push edx */
  push32((uint32_t)(EDX));
  /* 10902877 call dword ptr [0x10923308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923308))), 0x1090287du);
  /* 1090287d jmp 0x10902a39 */
  goto L_10902a39;
L_10902882:;
  /* 10902882 cmp dword ptr [0x10920854], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10920854))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902889 jne 0x10902a37 */
  if (!C.zf) goto L_10902a37;
  /* 1090288f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902893 jne 0x1090289d */
  if (!C.zf) goto L_1090289d;
  /* 10902895 mov eax, dword ptr [0x109207c8] */
  EAX = (r32((uint32_t)(0x109207c8)));
  /* 1090289a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1090289d:;
  /* 1090289d push 0 */
  push32((uint32_t)(0x0u));
  /* 1090289f push 0 */
  push32((uint32_t)(0x0u));
  /* 109028a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109028a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109028a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109028a8 push ecx */
  push32((uint32_t)(ECX));
  /* 109028a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109028ac push edx */
  push32((uint32_t)(EDX));
  /* 109028ad push 0x220 */
  push32((uint32_t)(0x220u));
  /* 109028b2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109028b5 push eax */
  push32((uint32_t)(EAX));
  /* 109028b6 call dword ptr [0x10923394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923394))), 0x109028bcu);
  /* 109028bc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 109028bf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109028c3 jne 0x109028cc */
  if (!C.zf) goto L_109028cc;
  /* 109028c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109028c7 jmp 0x10902a39 */
  goto L_10902a39;
L_109028cc:;
  /* 109028cc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109028d3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109028d6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109028d9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109028db call 0x108f7520 */
  push32(0x109028e0u); f_108f7520();
  /* 109028e0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 109028e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109028e6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109028e9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 109028ec mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109028ef push edx */
  push32((uint32_t)(EDX));
  /* 109028f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109028f2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109028f5 push eax */
  push32((uint32_t)(EAX));
  /* 109028f6 call 0x108f80f0 */
  push32(0x109028fbu); f_108f80f0();
  /* 109028fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109028fe mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10902905 jmp 0x1090291e */
  goto L_1090291e;
  /* 10902907 mov eax, 1 */
  EAX = (0x1u);
  /* 1090290c ret  */
  ESPCHK(0x109027e0u, _esp0);
  ESP += 4; return;
  /* 1090290d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10902910 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10902917 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1090291e:;
  /* 1090291e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902922 jne 0x1090292b */
  if (!C.zf) goto L_1090292b;
  /* 10902924 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902926 jmp 0x10902a39 */
  goto L_10902a39;
L_1090292b:;
  /* 1090292b push 0 */
  push32((uint32_t)(0x0u));
  /* 1090292d push 0 */
  push32((uint32_t)(0x0u));
  /* 1090292f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10902932 push ecx */
  push32((uint32_t)(ECX));
  /* 10902933 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10902936 push edx */
  push32((uint32_t)(EDX));
  /* 10902937 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090293a push eax */
  push32((uint32_t)(EAX));
  /* 1090293b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1090293e push ecx */
  push32((uint32_t)(ECX));
  /* 1090293f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10902944 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10902947 push edx */
  push32((uint32_t)(EDX));
  /* 10902948 call dword ptr [0x10923394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923394))), 0x1090294eu);
  /* 1090294e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10902950 jne 0x10902959 */
  if (!C.zf) goto L_10902959;
  /* 10902952 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902954 jmp 0x10902a39 */
  goto L_10902a39;
L_10902959:;
  /* 10902959 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10902960 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10902963 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10902967 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090296a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1090296c call 0x108f7520 */
  push32(0x10902971u); f_108f7520();
  /* 10902971 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10902974 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10902977 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1090297a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1090297d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10902984 jmp 0x1090299d */
  goto L_1090299d;
  /* 10902986 mov eax, 1 */
  EAX = (0x1u);
  /* 1090298b ret  */
  ESPCHK(0x109027e0u, _esp0);
  ESP += 4; return;
  /* 1090298c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1090298f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10902996 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1090299d:;
  /* 1090299d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109029a1 jne 0x109029aa */
  if (!C.zf) goto L_109029aa;
  /* 109029a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109029a5 jmp 0x10902a39 */
  goto L_10902a39;
L_109029aa:;
  /* 109029aa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109029ae jne 0x109029b9 */
  if (!C.zf) goto L_109029b9;
  /* 109029b0 mov edx, dword ptr [0x109207b8] */
  EDX = (r32((uint32_t)(0x109207b8)));
  /* 109029b6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_109029b9:;
  /* 109029b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109029bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109029bf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 109029c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109029c8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109029cb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 109029d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109029d5 push ecx */
  push32((uint32_t)(ECX));
  /* 109029d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109029d9 push edx */
  push32((uint32_t)(EDX));
  /* 109029da mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109029dd push eax */
  push32((uint32_t)(EAX));
  /* 109029de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109029e1 push ecx */
  push32((uint32_t)(ECX));
  /* 109029e2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109029e5 push edx */
  push32((uint32_t)(EDX));
  /* 109029e6 call dword ptr [0x1092330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092330c))), 0x109029ecu);
  /* 109029ec mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109029ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109029f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109029f5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109029f7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 109029fc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902a02 je 0x10902a18 */
  if (C.zf) goto L_10902a18;
  /* 10902a04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10902a07 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10902a0a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10902a0c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10902a10 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902a16 je 0x10902a1c */
  if (C.zf) goto L_10902a1c;
L_10902a18:;
  /* 10902a18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902a1a jmp 0x10902a39 */
  goto L_10902a39;
L_10902a1c:;
  /* 10902a1c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10902a1f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10902a21 push eax */
  push32((uint32_t)(EAX));
  /* 10902a22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10902a25 push ecx */
  push32((uint32_t)(ECX));
  /* 10902a26 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10902a29 push edx */
  push32((uint32_t)(EDX));
  /* 10902a2a call 0x108fc270 */
  push32(0x10902a2fu); f_108fc270();
  /* 10902a2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902a32 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10902a35 jmp 0x10902a39 */
  goto L_10902a39;
L_10902a37:;
  /* 10902a37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10902a39:;
  /* 10902a39 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10902a3c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10902a3f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10902a46 pop edi */
  EDI = (pop32());
  /* 10902a47 pop esi */
  ESI = (pop32());
  /* 10902a48 pop ebx */
  EBX = (pop32());
  /* 10902a49 mov esp, ebp */
  ESP = (EBP);
  /* 10902a4b pop ebp */
  EBP = (pop32());
  /* 10902a4c ret  */
  ESPCHK(0x109027e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a50 @ 0x10902a50 (208 bytes, 85 insns) */
void f_10902a50(void) {
  FTRACE(0x10902a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10902a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10902a51 mov ebp, esp */
  EBP = (ESP);
  /* 10902a53 push edi */
  push32((uint32_t)(EDI));
  /* 10902a54 push esi */
  push32((uint32_t)(ESI));
  /* 10902a55 push ebx */
  push32((uint32_t)(EBX));
  /* 10902a56 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10902a59 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10902a5c lea eax, [0x109207b0] */
  EAX = ((uint32_t)(0x109207b0));
  /* 10902a62 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902a66 jne 0x10902aa3 */
  if (!C.zf) goto L_10902aa3;
  /* 10902a68 mov al, 0xff */
  AL = (0xffu);
  /* 10902a6a mov edi, edi */
  EDI = (EDI);
L_10902a6c:;
  /* 10902a6c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10902a6e je 0x10902a9e */
  if (C.zf) goto L_10902a9e;
  /* 10902a70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10902a72 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10902a73 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10902a75 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10902a76 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10902a78 je 0x10902a6c */
  if (C.zf) goto L_10902a6c;
  /* 10902a7a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10902a7c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10902a7e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10902a80 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10902a83 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10902a85 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10902a87 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10902a89 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10902a8b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10902a8d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10902a8f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10902a92 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10902a94 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10902a96 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10902a98 je 0x10902a6c */
  if (C.zf) goto L_10902a6c;
  /* 10902a9a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10902a9c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10902a9e:;
  /* 10902a9e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10902aa1 jmp 0x10902b1b */
  goto L_10902b1b;
L_10902aa3:;
  /* 10902aa3 lock inc dword ptr [0x10920944] */
  x86_unimpl("lock inc @ 0x10902aa3");
  /* 10902aaa cmp dword ptr [0x10920934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902ab1 jg 0x10902ab7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10902ab7;
  /* 10902ab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10902ab5 jmp 0x10902acc */
  goto L_10902acc;
L_10902ab7:;
  /* 10902ab7 lock dec dword ptr [0x10920944] */
  x86_unimpl("lock dec @ 0x10902ab7");
  /* 10902abe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10902ac0 call 0x108f7d80 */
  push32(0x10902ac5u); f_108f7d80();
  /* 10902ac5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10902acc:;
  /* 10902acc mov eax, 0xff */
  EAX = (0xffu);
  /* 10902ad1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10902ad3 nop  */
  /* nop */
L_10902ad4:;
  /* 10902ad4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10902ad6 je 0x10902aff */
  if (C.zf) goto L_10902aff;
  /* 10902ad8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10902ada inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10902adb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10902add inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10902ade cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10902ae0 je 0x10902ad4 */
  if (C.zf) goto L_10902ad4;
  /* 10902ae2 push eax */
  push32((uint32_t)(EAX));
  /* 10902ae3 push ebx */
  push32((uint32_t)(EBX));
  /* 10902ae4 call 0x10903bc0 */
  push32(0x10902ae9u); f_10903bc0();
  /* 10902ae9 mov ebx, eax */
  EBX = (EAX);
  /* 10902aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902aee call 0x10903bc0 */
  push32(0x10902af3u); f_10903bc0();
  /* 10902af3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902af6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10902af8 je 0x10902ad4 */
  if (C.zf) goto L_10902ad4;
  /* 10902afa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10902afc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10902aff:;
  /* 10902aff mov ebx, eax */
  EBX = (EAX);
  /* 10902b01 pop eax */
  EAX = (pop32());
  /* 10902b02 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902b04 jne 0x10902b0f */
  if (!C.zf) goto L_10902b0f;
  /* 10902b06 lock dec dword ptr [0x10920944] */
  x86_unimpl("lock dec @ 0x10902b06");
  /* 10902b0d jmp 0x10902b19 */
  goto L_10902b19;
L_10902b0f:;
  /* 10902b0f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10902b11 call 0x108f7e20 */
  push32(0x10902b16u); f_108f7e20();
  /* 10902b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10902b19:;
  /* 10902b19 mov eax, ebx */
  EAX = (EBX);
L_10902b1b:;
  /* 10902b1b pop ebx */
  EBX = (pop32());
  /* 10902b1c pop esi */
  ESI = (pop32());
  /* 10902b1d pop edi */
  EDI = (pop32());
  /* 10902b1e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10902b1f ret  */
  ESPCHK(0x10902a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b20 @ 0x10902b20 (257 bytes, 103 insns) */
void f_10902b20(void) {
  FTRACE(0x10902b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10902b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10902b21 mov ebp, esp */
  EBP = (ESP);
  /* 10902b23 push edi */
  push32((uint32_t)(EDI));
  /* 10902b24 push esi */
  push32((uint32_t)(ESI));
  /* 10902b25 push ebx */
  push32((uint32_t)(EBX));
  /* 10902b26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10902b29 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10902b2b je 0x10902c1a */
  if (C.zf) goto L_10902c1a;
  /* 10902b31 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10902b34 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10902b37 lea eax, [0x109207b0] */
  EAX = ((uint32_t)(0x109207b0));
  /* 10902b3d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902b41 jne 0x10902b91 */
  if (!C.zf) goto L_10902b91;
  /* 10902b43 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10902b45 mov bl, 0x5a */
  BL = (0x5au);
  /* 10902b47 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10902b49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10902b4c:;
  /* 10902b4c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10902b4e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10902b50 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10902b52 je 0x10902b75 */
  if (C.zf) goto L_10902b75;
  /* 10902b54 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10902b56 je 0x10902b75 */
  if (C.zf) goto L_10902b75;
  /* 10902b58 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10902b59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10902b5a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10902b5c jb 0x10902b64 */
  if (C.cf) goto L_10902b64;
  /* 10902b5e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10902b60 ja 0x10902b64 */
  if ((!C.cf&&!C.zf)) goto L_10902b64;
  /* 10902b62 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10902b64:;
  /* 10902b64 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10902b66 jb 0x10902b6e */
  if (C.cf) goto L_10902b6e;
  /* 10902b68 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10902b6a ja 0x10902b6e */
  if ((!C.cf&&!C.zf)) goto L_10902b6e;
  /* 10902b6c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10902b6e:;
  /* 10902b6e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10902b70 jne 0x10902b7f */
  if (!C.zf) goto L_10902b7f;
  /* 10902b72 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10902b73 jne 0x10902b4c */
  if (!C.zf) goto L_10902b4c;
L_10902b75:;
  /* 10902b75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10902b77 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10902b79 je 0x10902c1a */
  if (C.zf) goto L_10902c1a;
L_10902b7f:;
  /* 10902b7f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10902b84 jb 0x10902c1a */
  if (C.cf) goto L_10902c1a;
  /* 10902b8a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10902b8c jmp 0x10902c1a */
  goto L_10902c1a;
L_10902b91:;
  /* 10902b91 lock inc dword ptr [0x10920944] */
  x86_unimpl("lock inc @ 0x10902b91");
  /* 10902b98 cmp dword ptr [0x10920934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902b9f jg 0x10902ba5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10902ba5;
  /* 10902ba1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10902ba3 jmp 0x10902bbe */
  goto L_10902bbe;
L_10902ba5:;
  /* 10902ba5 lock dec dword ptr [0x10920944] */
  x86_unimpl("lock dec @ 0x10902ba5");
  /* 10902bac mov ebx, ecx */
  EBX = (ECX);
  /* 10902bae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10902bb0 call 0x108f7d80 */
  push32(0x10902bb5u); f_108f7d80();
  /* 10902bb5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10902bbc mov ecx, ebx */
  ECX = (EBX);
L_10902bbe:;
  /* 10902bbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902bc0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10902bc2 mov edi, edi */
  EDI = (EDI);
L_10902bc4:;
  /* 10902bc4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10902bc6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902bc8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10902bca je 0x10902bef */
  if (C.zf) goto L_10902bef;
  /* 10902bcc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10902bce je 0x10902bef */
  if (C.zf) goto L_10902bef;
  /* 10902bd0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10902bd1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10902bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 10902bd3 push eax */
  push32((uint32_t)(EAX));
  /* 10902bd4 push ebx */
  push32((uint32_t)(EBX));
  /* 10902bd5 call 0x10903bc0 */
  push32(0x10902bdau); f_10903bc0();
  /* 10902bda mov ebx, eax */
  EBX = (EAX);
  /* 10902bdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902bdf call 0x10903bc0 */
  push32(0x10902be4u); f_10903bc0();
  /* 10902be4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902be7 pop ecx */
  ECX = (pop32());
  /* 10902be8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902bea jne 0x10902bf5 */
  if (!C.zf) goto L_10902bf5;
  /* 10902bec dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10902bed jne 0x10902bc4 */
  if (!C.zf) goto L_10902bc4;
L_10902bef:;
  /* 10902bef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10902bf1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902bf3 je 0x10902bfe */
  if (C.zf) goto L_10902bfe;
L_10902bf5:;
  /* 10902bf5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10902bfa jb 0x10902bfe */
  if (C.cf) goto L_10902bfe;
  /* 10902bfc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10902bfe:;
  /* 10902bfe pop eax */
  EAX = (pop32());
  /* 10902bff or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902c01 jne 0x10902c0c */
  if (!C.zf) goto L_10902c0c;
  /* 10902c03 lock dec dword ptr [0x10920944] */
  x86_unimpl("lock dec @ 0x10902c03");
  /* 10902c0a jmp 0x10902c1a */
  goto L_10902c1a;
L_10902c0c:;
  /* 10902c0c mov ebx, ecx */
  EBX = (ECX);
  /* 10902c0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10902c10 call 0x108f7e20 */
  push32(0x10902c15u); f_108f7e20();
  /* 10902c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902c18 mov ecx, ebx */
  ECX = (EBX);
L_10902c1a:;
  /* 10902c1a mov eax, ecx */
  EAX = (ECX);
  /* 10902c1c pop ebx */
  EBX = (pop32());
  /* 10902c1d pop esi */
  ESI = (pop32());
  /* 10902c1e pop edi */
  EDI = (pop32());
  /* 10902c1f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10902c20 ret  */
  ESPCHK(0x10902b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c30 @ 0x10902c30 (255 bytes, 88 insns) */
void f_10902c30(void) {
  FTRACE(0x10902c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10902c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10902c31 mov ebp, esp */
  EBP = (ESP);
  /* 10902c33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10902c36:;
  /* 10902c36 cmp dword ptr [0x1091eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1091eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902c3d jle 0x10902c56 */
  if ((C.zf||C.sf!=C.of)) goto L_10902c56;
  /* 10902c3f push 8 */
  push32((uint32_t)(0x8u));
  /* 10902c41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902c44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10902c46 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10902c48 push ecx */
  push32((uint32_t)(ECX));
  /* 10902c49 call 0x108fa390 */
  push32(0x10902c4eu); f_108fa390();
  /* 10902c4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902c51 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10902c54 jmp 0x10902c6f */
  goto L_10902c6f;
L_10902c56:;
  /* 10902c56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902c59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902c5b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10902c5d mov ecx, dword ptr [0x1091ec98] */
  ECX = (r32((uint32_t)(0x1091ec98)));
  /* 10902c63 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10902c65 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10902c69 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10902c6c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10902c6f:;
  /* 10902c6f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902c73 je 0x10902c80 */
  if (C.zf) goto L_10902c80;
  /* 10902c75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902c78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902c7b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10902c7e jmp 0x10902c36 */
  goto L_10902c36;
L_10902c80:;
  /* 10902c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902c83 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10902c85 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10902c87 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10902c8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902c8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902c90 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10902c93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10902c96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10902c99 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902c9d je 0x10902ca5 */
  if (C.zf) goto L_10902ca5;
  /* 10902c9f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902ca3 jne 0x10902cb8 */
  if (!C.zf) goto L_10902cb8;
L_10902ca5:;
  /* 10902ca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902ca8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902caa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10902cac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10902caf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902cb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902cb5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10902cb8:;
  /* 10902cb8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10902cbf:;
  /* 10902cbf cmp dword ptr [0x1091eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1091eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902cc6 jle 0x10902cdb */
  if ((C.zf||C.sf!=C.of)) goto L_10902cdb;
  /* 10902cc8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10902cca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10902ccd push edx */
  push32((uint32_t)(EDX));
  /* 10902cce call 0x108fa390 */
  push32(0x10902cd3u); f_108fa390();
  /* 10902cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902cd6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10902cd9 jmp 0x10902cf0 */
  goto L_10902cf0;
L_10902cdb:;
  /* 10902cdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10902cde mov ecx, dword ptr [0x1091ec98] */
  ECX = (r32((uint32_t)(0x1091ec98)));
  /* 10902ce4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10902ce6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10902cea and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10902ced mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10902cf0:;
  /* 10902cf0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902cf4 je 0x10902d1b */
  if (C.zf) goto L_10902d1b;
  /* 10902cf6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10902cf9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10902cfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10902cff lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10902d03 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10902d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902d09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10902d0b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10902d0d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10902d10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902d13 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902d16 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10902d19 jmp 0x10902cbf */
  goto L_10902cbf;
L_10902d1b:;
  /* 10902d1b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902d1f jne 0x10902d28 */
  if (!C.zf) goto L_10902d28;
  /* 10902d21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10902d24 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10902d26 jmp 0x10902d2b */
  goto L_10902d2b;
L_10902d28:;
  /* 10902d28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10902d2b:;
  /* 10902d2b mov esp, ebp */
  ESP = (EBP);
  /* 10902d2d pop ebp */
  EBP = (pop32());
  /* 10902d2e ret  */
  ESPCHK(0x10902c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d30 @ 0x10902d30 (17 bytes, 8 insns) */
void f_10902d30(void) {
  FTRACE(0x10902d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10902d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10902d31 mov ebp, esp */
  EBP = (ESP);
  /* 10902d33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902d36 push eax */
  push32((uint32_t)(EAX));
  /* 10902d37 call 0x10902c30 */
  push32(0x10902d3cu); f_10902c30();
  /* 10902d3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902d3f pop ebp */
  EBP = (pop32());
  /* 10902d40 ret  */
  ESPCHK(0x10902d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d50 @ 0x10902d50 (297 bytes, 106 insns) */
void f_10902d50(void) {
  FTRACE(0x10902d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10902d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10902d51 mov ebp, esp */
  EBP = (ESP);
  /* 10902d53 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10902d56 push esi */
  push32((uint32_t)(ESI));
L_10902d57:;
  /* 10902d57 cmp dword ptr [0x1091eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1091eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902d5e jle 0x10902d77 */
  if ((C.zf||C.sf!=C.of)) goto L_10902d77;
  /* 10902d60 push 8 */
  push32((uint32_t)(0x8u));
  /* 10902d62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902d65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10902d67 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10902d69 push ecx */
  push32((uint32_t)(ECX));
  /* 10902d6a call 0x108fa390 */
  push32(0x10902d6fu); f_108fa390();
  /* 10902d6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902d72 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10902d75 jmp 0x10902d90 */
  goto L_10902d90;
L_10902d77:;
  /* 10902d77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902d7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902d7c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10902d7e mov ecx, dword ptr [0x1091ec98] */
  ECX = (r32((uint32_t)(0x1091ec98)));
  /* 10902d84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10902d86 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10902d8a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10902d8d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10902d90:;
  /* 10902d90 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902d94 je 0x10902da1 */
  if (C.zf) goto L_10902da1;
  /* 10902d96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902d99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902d9c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10902d9f jmp 0x10902d57 */
  goto L_10902d57;
L_10902da1:;
  /* 10902da1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902da4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10902da6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10902da8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10902dab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902dae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902db1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10902db4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10902db7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10902dba cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902dbe je 0x10902dc6 */
  if (C.zf) goto L_10902dc6;
  /* 10902dc0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902dc4 jne 0x10902dd9 */
  if (!C.zf) goto L_10902dd9;
L_10902dc6:;
  /* 10902dc6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902dc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902dcb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10902dcd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10902dd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902dd3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902dd6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10902dd9:;
  /* 10902dd9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10902de0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10902de7:;
  /* 10902de7 cmp dword ptr [0x1091eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1091eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902dee jle 0x10902e03 */
  if ((C.zf||C.sf!=C.of)) goto L_10902e03;
  /* 10902df0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10902df2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10902df5 push edx */
  push32((uint32_t)(EDX));
  /* 10902df6 call 0x108fa390 */
  push32(0x10902dfbu); f_108fa390();
  /* 10902dfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902dfe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10902e01 jmp 0x10902e18 */
  goto L_10902e18;
L_10902e03:;
  /* 10902e03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10902e06 mov ecx, dword ptr [0x1091ec98] */
  ECX = (r32((uint32_t)(0x1091ec98)));
  /* 10902e0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10902e0e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10902e12 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10902e15 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10902e18:;
  /* 10902e18 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902e1c je 0x10902e59 */
  if (C.zf) goto L_10902e59;
  /* 10902e1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10902e20 push 0xa */
  push32((uint32_t)(0xau));
  /* 10902e22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10902e25 push eax */
  push32((uint32_t)(EAX));
  /* 10902e26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10902e29 push ecx */
  push32((uint32_t)(ECX));
  /* 10902e2a call 0x10903cf0 */
  push32(0x10902e2fu); f_10903cf0();
  /* 10902e2f mov ecx, eax */
  ECX = (EAX);
  /* 10902e31 mov esi, edx */
  ESI = (EDX);
  /* 10902e33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10902e36 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10902e39 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10902e3a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902e3c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10902e3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10902e41 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10902e44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902e47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10902e49 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10902e4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10902e4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10902e51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902e54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10902e57 jmp 0x10902de7 */
  goto L_10902de7;
L_10902e59:;
  /* 10902e59 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902e5d jne 0x10902e6e */
  if (!C.zf) goto L_10902e6e;
  /* 10902e5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10902e62 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10902e64 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10902e67 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902e6a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10902e6c jmp 0x10902e74 */
  goto L_10902e74;
L_10902e6e:;
  /* 10902e6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10902e71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10902e74:;
  /* 10902e74 pop esi */
  ESI = (pop32());
  /* 10902e75 mov esp, ebp */
  ESP = (EBP);
  /* 10902e77 pop ebp */
  EBP = (pop32());
  /* 10902e78 ret  */
  ESPCHK(0x10902d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e80 @ 0x10902e80 (61 bytes, 18 insns) */
void f_10902e80(void) {
  FTRACE(0x10902e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10902e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10902e81 mov ebp, esp */
  EBP = (ESP);
  /* 10902e83 cmp dword ptr [0x10920910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902e8a jne 0x10902ebb */
  if (!C.zf) goto L_10902ebb;
  /* 10902e8c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10902e8e call 0x108f7d80 */
  push32(0x10902e93u); f_108f7d80();
  /* 10902e93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902e96 cmp dword ptr [0x10920910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902e9d jne 0x10902eb1 */
  if (!C.zf) goto L_10902eb1;
  /* 10902e9f call 0x10902ee0 */
  push32(0x10902ea4u); f_10902ee0();
  /* 10902ea4 mov eax, dword ptr [0x10920910] */
  EAX = (r32((uint32_t)(0x10920910)));
  /* 10902ea9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902eac mov dword ptr [0x10920910], eax */
  w32((uint32_t)(0x10920910), (EAX));
L_10902eb1:;
  /* 10902eb1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10902eb3 call 0x108f7e20 */
  push32(0x10902eb8u); f_108f7e20();
  /* 10902eb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10902ebb:;
  /* 10902ebb pop ebp */
  EBP = (pop32());
  /* 10902ebc ret  */
  ESPCHK(0x10902e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ec0 @ 0x10902ec0 (30 bytes, 11 insns) */
void f_10902ec0(void) {
  FTRACE(0x10902ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10902ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10902ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10902ec3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10902ec5 call 0x108f7d80 */
  push32(0x10902ecau); f_108f7d80();
  /* 10902eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902ecd call 0x10902ee0 */
  push32(0x10902ed2u); f_10902ee0();
  /* 10902ed2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10902ed4 call 0x108f7e20 */
  push32(0x10902ed9u); f_108f7e20();
  /* 10902ed9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902edc pop ebp */
  EBP = (pop32());
  /* 10902edd ret  */
  ESPCHK(0x10902ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ee0 @ 0x10902ee0 (939 bytes, 266 insns) */
void f_10902ee0(void) {
  FTRACE(0x10902ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10902ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10902ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10902ee3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10902ee6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10902eed push 0xc */
  push32((uint32_t)(0xcu));
  /* 10902eef call 0x108f7d80 */
  push32(0x10902ef4u); f_108f7d80();
  /* 10902ef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902ef7 mov dword ptr [0x10920858], 0 */
  w32((uint32_t)(0x10920858), (0x0u));
  /* 10902f01 mov dword ptr [0x1091fe38], 0xffffffff */
  w32((uint32_t)(0x1091fe38), (0xffffffffu));
  /* 10902f0b mov eax, dword ptr [0x1091fe38] */
  EAX = (r32((uint32_t)(0x1091fe38)));
  /* 10902f10 mov dword ptr [0x1091fe28], eax */
  w32((uint32_t)(0x1091fe28), (EAX));
  /* 10902f15 push 0x1091c9a8 */
  push32((uint32_t)(0x1091c9a8u));
  /* 10902f1a call 0x10903d60 */
  push32(0x10902f1fu); f_10903d60();
  /* 10902f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902f22 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10902f25 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902f29 jne 0x10903063 */
  if (!C.zf) goto L_10903063;
  /* 10902f2f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10902f31 call 0x108f7e20 */
  push32(0x10902f36u); f_108f7e20();
  /* 10902f36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10902f39 push 0x10920860 */
  push32((uint32_t)(0x10920860u));
  /* 10902f3e call dword ptr [0x109232cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232cc))), 0x10902f44u);
  /* 10902f44 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902f47 je 0x1090305e */
  if (C.zf) goto L_1090305e;
  /* 10902f4d mov dword ptr [0x10920858], 1 */
  w32((uint32_t)(0x10920858), (0x1u));
  /* 10902f57 mov ecx, dword ptr [0x10920860] */
  ECX = (r32((uint32_t)(0x10920860)));
  /* 10902f5d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10902f60 mov dword ptr [0x1091fd90], ecx */
  w32((uint32_t)(0x1091fd90), (ECX));
  /* 10902f66 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10902f68 mov dx, word ptr [0x109208a6] */
  DX = (r16((uint32_t)(0x109208a6)));
  /* 10902f6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10902f71 je 0x10902f89 */
  if (C.zf) goto L_10902f89;
  /* 10902f73 mov eax, dword ptr [0x109208b4] */
  EAX = (r32((uint32_t)(0x109208b4)));
  /* 10902f78 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10902f7b mov ecx, dword ptr [0x1091fd90] */
  ECX = (r32((uint32_t)(0x1091fd90)));
  /* 10902f81 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10902f83 mov dword ptr [0x1091fd90], ecx */
  w32((uint32_t)(0x1091fd90), (ECX));
L_10902f89:;
  /* 10902f89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10902f8b mov dx, word ptr [0x109208fa] */
  DX = (r16((uint32_t)(0x109208fa)));
  /* 10902f92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10902f94 je 0x10902fbe */
  if (C.zf) goto L_10902fbe;
  /* 10902f96 cmp dword ptr [0x10920908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10902f9d je 0x10902fbe */
  if (C.zf) goto L_10902fbe;
  /* 10902f9f mov dword ptr [0x1091fd94], 1 */
  w32((uint32_t)(0x1091fd94), (0x1u));
  /* 10902fa9 mov eax, dword ptr [0x10920908] */
  EAX = (r32((uint32_t)(0x10920908)));
  /* 10902fae sub eax, dword ptr [0x109208b4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109208b4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10902fb4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10902fb7 mov dword ptr [0x1091fd98], eax */
  w32((uint32_t)(0x1091fd98), (EAX));
  /* 10902fbc jmp 0x10902fd2 */
  goto L_10902fd2;
L_10902fbe:;
  /* 10902fbe mov dword ptr [0x1091fd94], 0 */
  w32((uint32_t)(0x1091fd94), (0x0u));
  /* 10902fc8 mov dword ptr [0x1091fd98], 0 */
  w32((uint32_t)(0x1091fd98), (0x0u));
L_10902fd2:;
  /* 10902fd2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10902fd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10902fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10902fd8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10902fda mov edx, dword ptr [0x1091fe1c] */
  EDX = (r32((uint32_t)(0x1091fe1c)));
  /* 10902fe0 push edx */
  push32((uint32_t)(EDX));
  /* 10902fe1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10902fe3 push 0x10920864 */
  push32((uint32_t)(0x10920864u));
  /* 10902fe8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10902fed mov eax, dword ptr [0x109207c8] */
  EAX = (r32((uint32_t)(0x109207c8)));
  /* 10902ff2 push eax */
  push32((uint32_t)(EAX));
  /* 10902ff3 call dword ptr [0x10923394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923394))), 0x10902ff9u);
  /* 10902ff9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10902ffb je 0x1090300f */
  if (C.zf) goto L_1090300f;
  /* 10902ffd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903001 jne 0x1090300f */
  if (!C.zf) goto L_1090300f;
  /* 10903003 mov ecx, dword ptr [0x1091fe1c] */
  ECX = (r32((uint32_t)(0x1091fe1c)));
  /* 10903009 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1090300d jmp 0x10903018 */
  goto L_10903018;
L_1090300f:;
  /* 1090300f mov edx, dword ptr [0x1091fe1c] */
  EDX = (r32((uint32_t)(0x1091fe1c)));
  /* 10903015 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10903018:;
  /* 10903018 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1090301b push eax */
  push32((uint32_t)(EAX));
  /* 1090301c push 0 */
  push32((uint32_t)(0x0u));
  /* 1090301e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10903020 mov ecx, dword ptr [0x1091fe20] */
  ECX = (r32((uint32_t)(0x1091fe20)));
  /* 10903026 push ecx */
  push32((uint32_t)(ECX));
  /* 10903027 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10903029 push 0x109208b8 */
  push32((uint32_t)(0x109208b8u));
  /* 1090302e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10903033 mov edx, dword ptr [0x109207c8] */
  EDX = (r32((uint32_t)(0x109207c8)));
  /* 10903039 push edx */
  push32((uint32_t)(EDX));
  /* 1090303a call dword ptr [0x10923394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923394))), 0x10903040u);
  /* 10903040 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10903042 je 0x10903055 */
  if (C.zf) goto L_10903055;
  /* 10903044 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903048 jne 0x10903055 */
  if (!C.zf) goto L_10903055;
  /* 1090304a mov eax, dword ptr [0x1091fe20] */
  EAX = (r32((uint32_t)(0x1091fe20)));
  /* 1090304f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10903053 jmp 0x1090305e */
  goto L_1090305e;
L_10903055:;
  /* 10903055 mov ecx, dword ptr [0x1091fe20] */
  ECX = (r32((uint32_t)(0x1091fe20)));
  /* 1090305b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1090305e:;
  /* 1090305e jmp 0x10903287 */
  goto L_10903287;
L_10903063:;
  /* 10903063 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903066 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10903069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1090306b je 0x1090308d */
  if (C.zf) goto L_1090308d;
  /* 1090306d cmp dword ptr [0x1092090c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1092090c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903074 je 0x1090309c */
  if (C.zf) goto L_1090309c;
  /* 10903076 mov ecx, dword ptr [0x1092090c] */
  ECX = (r32((uint32_t)(0x1092090c)));
  /* 1090307c push ecx */
  push32((uint32_t)(ECX));
  /* 1090307d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903080 push edx */
  push32((uint32_t)(EDX));
  /* 10903081 call 0x10900010 */
  push32(0x10903086u); f_10900010();
  /* 10903086 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1090308b jne 0x1090309c */
  if (!C.zf) goto L_1090309c;
L_1090308d:;
  /* 1090308d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1090308f call 0x108f7e20 */
  push32(0x10903094u); f_108f7e20();
  /* 10903094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903097 jmp 0x10903287 */
  goto L_10903287;
L_1090309c:;
  /* 1090309c push 2 */
  push32((uint32_t)(0x2u));
  /* 1090309e mov eax, dword ptr [0x1092090c] */
  EAX = (r32((uint32_t)(0x1092090c)));
  /* 109030a3 push eax */
  push32((uint32_t)(EAX));
  /* 109030a4 call 0x108f4e10 */
  push32(0x109030a9u); f_108f4e10();
  /* 109030a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109030ac push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 109030b1 push 0x1091c9a0 */
  push32((uint32_t)(0x1091c9a0u));
  /* 109030b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109030b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109030bb push ecx */
  push32((uint32_t)(ECX));
  /* 109030bc call 0x108f71b0 */
  push32(0x109030c1u); f_108f71b0();
  /* 109030c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109030c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109030c7 push eax */
  push32((uint32_t)(EAX));
  /* 109030c8 call 0x108f4380 */
  push32(0x109030cdu); f_108f4380();
  /* 109030cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109030d0 mov dword ptr [0x1092090c], eax */
  w32((uint32_t)(0x1092090c), (EAX));
  /* 109030d5 cmp dword ptr [0x1092090c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1092090c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109030dc jne 0x109030ed */
  if (!C.zf) goto L_109030ed;
  /* 109030de push 0xc */
  push32((uint32_t)(0xcu));
  /* 109030e0 call 0x108f7e20 */
  push32(0x109030e5u); f_108f7e20();
  /* 109030e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109030e8 jmp 0x10903287 */
  goto L_10903287;
L_109030ed:;
  /* 109030ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109030f0 push edx */
  push32((uint32_t)(EDX));
  /* 109030f1 mov eax, dword ptr [0x1092090c] */
  EAX = (r32((uint32_t)(0x1092090c)));
  /* 109030f6 push eax */
  push32((uint32_t)(EAX));
  /* 109030f7 call 0x108f7330 */
  push32(0x109030fcu); f_108f7330();
  /* 109030fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109030ff push 0xc */
  push32((uint32_t)(0xcu));
  /* 10903101 call 0x108f7e20 */
  push32(0x10903106u); f_108f7e20();
  /* 10903106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903109 push 3 */
  push32((uint32_t)(0x3u));
  /* 1090310b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1090310e push ecx */
  push32((uint32_t)(ECX));
  /* 1090310f mov edx, dword ptr [0x1091fe1c] */
  EDX = (r32((uint32_t)(0x1091fe1c)));
  /* 10903115 push edx */
  push32((uint32_t)(EDX));
  /* 10903116 call 0x108f7ba0 */
  push32(0x1090311bu); f_108f7ba0();
  /* 1090311b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090311e mov eax, dword ptr [0x1091fe1c] */
  EAX = (r32((uint32_t)(0x1091fe1c)));
  /* 10903123 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10903127 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1090312a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090312d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10903130 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903133 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10903136 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903139 jne 0x1090314d */
  if (!C.zf) goto L_1090314d;
  /* 1090313b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090313e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903141 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10903144 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903147 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090314a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1090314d:;
  /* 1090314d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903150 push eax */
  push32((uint32_t)(EAX));
  /* 10903151 call 0x10902c30 */
  push32(0x10903156u); f_10902c30();
  /* 10903156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903159 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1090315f mov dword ptr [0x1091fd90], eax */
  w32((uint32_t)(0x1091fd90), (EAX));
L_10903164:;
  /* 10903164 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903167 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1090316a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090316d je 0x10903185 */
  if (C.zf) goto L_10903185;
  /* 1090316f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903172 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10903175 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903178 jl 0x10903190 */
  if ((C.sf!=C.of)) goto L_10903190;
  /* 1090317a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1090317d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10903180 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903183 jg 0x10903190 */
  if ((!C.zf&&C.sf==C.of)) goto L_10903190;
L_10903185:;
  /* 10903185 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903188 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090318b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1090318e jmp 0x10903164 */
  goto L_10903164;
L_10903190:;
  /* 10903190 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903193 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10903196 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903199 jne 0x10903235 */
  if (!C.zf) goto L_10903235;
  /* 1090319f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109031a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109031a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109031a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109031ab push edx */
  push32((uint32_t)(EDX));
  /* 109031ac call 0x10902c30 */
  push32(0x109031b1u); f_10902c30();
  /* 109031b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109031b4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109031b7 mov ecx, dword ptr [0x1091fd90] */
  ECX = (r32((uint32_t)(0x1091fd90)));
  /* 109031bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109031bf mov dword ptr [0x1091fd90], ecx */
  w32((uint32_t)(0x1091fd90), (ECX));
L_109031c5:;
  /* 109031c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109031c8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109031cb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109031ce jl 0x109031e6 */
  if ((C.sf!=C.of)) goto L_109031e6;
  /* 109031d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109031d3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109031d6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109031d9 jg 0x109031e6 */
  if ((!C.zf&&C.sf==C.of)) goto L_109031e6;
  /* 109031db mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109031de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109031e1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109031e4 jmp 0x109031c5 */
  goto L_109031c5;
L_109031e6:;
  /* 109031e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109031e9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109031ec cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109031ef jne 0x10903235 */
  if (!C.zf) goto L_10903235;
  /* 109031f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109031f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109031f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109031fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109031fd push ecx */
  push32((uint32_t)(ECX));
  /* 109031fe call 0x10902c30 */
  push32(0x10903203u); f_10902c30();
  /* 10903203 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903206 mov edx, dword ptr [0x1091fd90] */
  EDX = (r32((uint32_t)(0x1091fd90)));
  /* 1090320c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090320e mov dword ptr [0x1091fd90], edx */
  w32((uint32_t)(0x1091fd90), (EDX));
L_10903214:;
  /* 10903214 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903217 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1090321a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090321d jl 0x10903235 */
  if ((C.sf!=C.of)) goto L_10903235;
  /* 1090321f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903222 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10903225 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903228 jg 0x10903235 */
  if ((!C.zf&&C.sf==C.of)) goto L_10903235;
  /* 1090322a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1090322d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903230 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10903233 jmp 0x10903214 */
  goto L_10903214;
L_10903235:;
  /* 10903235 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903239 je 0x10903249 */
  if (C.zf) goto L_10903249;
  /* 1090323b mov edx, dword ptr [0x1091fd90] */
  EDX = (r32((uint32_t)(0x1091fd90)));
  /* 10903241 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10903243 mov dword ptr [0x1091fd90], edx */
  w32((uint32_t)(0x1091fd90), (EDX));
L_10903249:;
  /* 10903249 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1090324c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1090324f mov dword ptr [0x1091fd94], ecx */
  w32((uint32_t)(0x1091fd94), (ECX));
  /* 10903255 cmp dword ptr [0x1091fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1091fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090325c je 0x1090327e */
  if (C.zf) goto L_1090327e;
  /* 1090325e push 3 */
  push32((uint32_t)(0x3u));
  /* 10903260 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903263 push edx */
  push32((uint32_t)(EDX));
  /* 10903264 mov eax, dword ptr [0x1091fe20] */
  EAX = (r32((uint32_t)(0x1091fe20)));
  /* 10903269 push eax */
  push32((uint32_t)(EAX));
  /* 1090326a call 0x108f7ba0 */
  push32(0x1090326fu); f_108f7ba0();
  /* 1090326f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903272 mov ecx, dword ptr [0x1091fe20] */
  ECX = (r32((uint32_t)(0x1091fe20)));
  /* 10903278 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1090327c jmp 0x10903287 */
  goto L_10903287;
L_1090327e:;
  /* 1090327e mov edx, dword ptr [0x1091fe20] */
  EDX = (r32((uint32_t)(0x1091fe20)));
  /* 10903284 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10903287:;
  /* 10903287 mov esp, ebp */
  ESP = (EBP);
  /* 10903289 pop ebp */
  EBP = (pop32());
  /* 1090328a ret  */
  ESPCHK(0x10902ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013290 @ 0x10903290 (46 bytes, 18 insns) */
void f_10903290(void) {
  FTRACE(0x10903290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10903290 push ebp */
  push32((uint32_t)(EBP));
  /* 10903291 mov ebp, esp */
  EBP = (ESP);
  /* 10903293 push ecx */
  push32((uint32_t)(ECX));
  /* 10903294 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10903296 call 0x108f7d80 */
  push32(0x1090329bu); f_108f7d80();
  /* 1090329b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090329e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109032a1 push eax */
  push32((uint32_t)(EAX));
  /* 109032a2 call 0x109032c0 */
  push32(0x109032a7u); f_109032c0();
  /* 109032a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109032aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109032ad push 0xb */
  push32((uint32_t)(0xbu));
  /* 109032af call 0x108f7e20 */
  push32(0x109032b4u); f_108f7e20();
  /* 109032b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109032b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109032ba mov esp, ebp */
  ESP = (EBP);
  /* 109032bc pop ebp */
  EBP = (pop32());
  /* 109032bd ret  */
  ESPCHK(0x10903290u, _esp0);
  ESP += 4; return;
}

/* FUN_100132c0 @ 0x109032c0 (762 bytes, 246 insns) */
void f_109032c0(void) {
  FTRACE(0x109032c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109032c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109032c1 mov ebp, esp */
  EBP = (ESP);
  /* 109032c3 push ecx */
  push32((uint32_t)(ECX));
  /* 109032c4 cmp dword ptr [0x1091fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1091fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109032cb jne 0x109032d4 */
  if (!C.zf) goto L_109032d4;
  /* 109032cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109032cf jmp 0x109035b6 */
  goto L_109035b6;
L_109032d4:;
  /* 109032d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109032d7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109032da cmp ecx, dword ptr [0x1091fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1091fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109032e0 jne 0x109032f4 */
  if (!C.zf) goto L_109032f4;
  /* 109032e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109032e5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109032e8 cmp eax, dword ptr [0x1091fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1091fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109032ee je 0x109034bb */
  if (C.zf) goto L_109034bb;
L_109032f4:;
  /* 109032f4 cmp dword ptr [0x10920858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109032fb je 0x10903475 */
  if (C.zf) goto L_10903475;
  /* 10903301 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10903303 mov cx, word ptr [0x109208f8] */
  CX = (r16((uint32_t)(0x109208f8)));
  /* 1090330a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1090330c jne 0x10903369 */
  if (!C.zf) goto L_10903369;
  /* 1090330e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10903310 mov dx, word ptr [0x10920906] */
  DX = (r16((uint32_t)(0x10920906)));
  /* 10903317 push edx */
  push32((uint32_t)(EDX));
  /* 10903318 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1090331a mov ax, word ptr [0x10920904] */
  AX = (r16((uint32_t)(0x10920904)));
  /* 10903320 push eax */
  push32((uint32_t)(EAX));
  /* 10903321 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10903323 mov cx, word ptr [0x10920902] */
  CX = (r16((uint32_t)(0x10920902)));
  /* 1090332a push ecx */
  push32((uint32_t)(ECX));
  /* 1090332b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1090332d mov dx, word ptr [0x10920900] */
  DX = (r16((uint32_t)(0x10920900)));
  /* 10903334 push edx */
  push32((uint32_t)(EDX));
  /* 10903335 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903337 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10903339 mov ax, word ptr [0x109208fc] */
  AX = (r16((uint32_t)(0x109208fc)));
  /* 1090333f push eax */
  push32((uint32_t)(EAX));
  /* 10903340 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10903342 mov cx, word ptr [0x109208fe] */
  CX = (r16((uint32_t)(0x109208fe)));
  /* 10903349 push ecx */
  push32((uint32_t)(ECX));
  /* 1090334a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1090334c mov dx, word ptr [0x109208fa] */
  DX = (r16((uint32_t)(0x109208fa)));
  /* 10903353 push edx */
  push32((uint32_t)(EDX));
  /* 10903354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903357 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1090335a push ecx */
  push32((uint32_t)(ECX));
  /* 1090335b push 1 */
  push32((uint32_t)(0x1u));
  /* 1090335d push 1 */
  push32((uint32_t)(0x1u));
  /* 1090335f call 0x109035c0 */
  push32(0x10903364u); f_109035c0();
  /* 10903364 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903367 jmp 0x109033ba */
  goto L_109033ba;
L_10903369:;
  /* 10903369 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1090336b mov dx, word ptr [0x10920906] */
  DX = (r16((uint32_t)(0x10920906)));
  /* 10903372 push edx */
  push32((uint32_t)(EDX));
  /* 10903373 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10903375 mov ax, word ptr [0x10920904] */
  AX = (r16((uint32_t)(0x10920904)));
  /* 1090337b push eax */
  push32((uint32_t)(EAX));
  /* 1090337c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1090337e mov cx, word ptr [0x10920902] */
  CX = (r16((uint32_t)(0x10920902)));
  /* 10903385 push ecx */
  push32((uint32_t)(ECX));
  /* 10903386 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10903388 mov dx, word ptr [0x10920900] */
  DX = (r16((uint32_t)(0x10920900)));
  /* 1090338f push edx */
  push32((uint32_t)(EDX));
  /* 10903390 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10903392 mov ax, word ptr [0x109208fe] */
  AX = (r16((uint32_t)(0x109208fe)));
  /* 10903398 push eax */
  push32((uint32_t)(EAX));
  /* 10903399 push 0 */
  push32((uint32_t)(0x0u));
  /* 1090339b push 0 */
  push32((uint32_t)(0x0u));
  /* 1090339d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1090339f mov cx, word ptr [0x109208fa] */
  CX = (r16((uint32_t)(0x109208fa)));
  /* 109033a6 push ecx */
  push32((uint32_t)(ECX));
  /* 109033a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109033aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109033ad push eax */
  push32((uint32_t)(EAX));
  /* 109033ae push 0 */
  push32((uint32_t)(0x0u));
  /* 109033b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109033b2 call 0x109035c0 */
  push32(0x109033b7u); f_109035c0();
  /* 109033b7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109033ba:;
  /* 109033ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109033bc mov cx, word ptr [0x109208a4] */
  CX = (r16((uint32_t)(0x109208a4)));
  /* 109033c3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109033c5 jne 0x10903422 */
  if (!C.zf) goto L_10903422;
  /* 109033c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109033c9 mov dx, word ptr [0x109208b2] */
  DX = (r16((uint32_t)(0x109208b2)));
  /* 109033d0 push edx */
  push32((uint32_t)(EDX));
  /* 109033d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109033d3 mov ax, word ptr [0x109208b0] */
  AX = (r16((uint32_t)(0x109208b0)));
  /* 109033d9 push eax */
  push32((uint32_t)(EAX));
  /* 109033da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109033dc mov cx, word ptr [0x109208ae] */
  CX = (r16((uint32_t)(0x109208ae)));
  /* 109033e3 push ecx */
  push32((uint32_t)(ECX));
  /* 109033e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109033e6 mov dx, word ptr [0x109208ac] */
  DX = (r16((uint32_t)(0x109208ac)));
  /* 109033ed push edx */
  push32((uint32_t)(EDX));
  /* 109033ee push 0 */
  push32((uint32_t)(0x0u));
  /* 109033f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109033f2 mov ax, word ptr [0x109208a8] */
  AX = (r16((uint32_t)(0x109208a8)));
  /* 109033f8 push eax */
  push32((uint32_t)(EAX));
  /* 109033f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109033fb mov cx, word ptr [0x109208aa] */
  CX = (r16((uint32_t)(0x109208aa)));
  /* 10903402 push ecx */
  push32((uint32_t)(ECX));
  /* 10903403 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10903405 mov dx, word ptr [0x109208a6] */
  DX = (r16((uint32_t)(0x109208a6)));
  /* 1090340c push edx */
  push32((uint32_t)(EDX));
  /* 1090340d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903410 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10903413 push ecx */
  push32((uint32_t)(ECX));
  /* 10903414 push 1 */
  push32((uint32_t)(0x1u));
  /* 10903416 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903418 call 0x109035c0 */
  push32(0x1090341du); f_109035c0();
  /* 1090341d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903420 jmp 0x10903473 */
  goto L_10903473;
L_10903422:;
  /* 10903422 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10903424 mov dx, word ptr [0x109208b2] */
  DX = (r16((uint32_t)(0x109208b2)));
  /* 1090342b push edx */
  push32((uint32_t)(EDX));
  /* 1090342c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1090342e mov ax, word ptr [0x109208b0] */
  AX = (r16((uint32_t)(0x109208b0)));
  /* 10903434 push eax */
  push32((uint32_t)(EAX));
  /* 10903435 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10903437 mov cx, word ptr [0x109208ae] */
  CX = (r16((uint32_t)(0x109208ae)));
  /* 1090343e push ecx */
  push32((uint32_t)(ECX));
  /* 1090343f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10903441 mov dx, word ptr [0x109208ac] */
  DX = (r16((uint32_t)(0x109208ac)));
  /* 10903448 push edx */
  push32((uint32_t)(EDX));
  /* 10903449 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1090344b mov ax, word ptr [0x109208aa] */
  AX = (r16((uint32_t)(0x109208aa)));
  /* 10903451 push eax */
  push32((uint32_t)(EAX));
  /* 10903452 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903454 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903456 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10903458 mov cx, word ptr [0x109208a6] */
  CX = (r16((uint32_t)(0x109208a6)));
  /* 1090345f push ecx */
  push32((uint32_t)(ECX));
  /* 10903460 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903463 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10903466 push eax */
  push32((uint32_t)(EAX));
  /* 10903467 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903469 push 0 */
  push32((uint32_t)(0x0u));
  /* 1090346b call 0x109035c0 */
  push32(0x10903470u); f_109035c0();
  /* 10903470 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10903473:;
  /* 10903473 jmp 0x109034bb */
  goto L_109034bb;
L_10903475:;
  /* 10903475 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903477 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903479 push 0 */
  push32((uint32_t)(0x0u));
  /* 1090347b push 2 */
  push32((uint32_t)(0x2u));
  /* 1090347d push 0 */
  push32((uint32_t)(0x0u));
  /* 1090347f push 0 */
  push32((uint32_t)(0x0u));
  /* 10903481 push 1 */
  push32((uint32_t)(0x1u));
  /* 10903483 push 4 */
  push32((uint32_t)(0x4u));
  /* 10903485 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903488 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1090348b push edx */
  push32((uint32_t)(EDX));
  /* 1090348c push 1 */
  push32((uint32_t)(0x1u));
  /* 1090348e push 1 */
  push32((uint32_t)(0x1u));
  /* 10903490 call 0x109035c0 */
  push32(0x10903495u); f_109035c0();
  /* 10903495 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903498 push 0 */
  push32((uint32_t)(0x0u));
  /* 1090349a push 0 */
  push32((uint32_t)(0x0u));
  /* 1090349c push 0 */
  push32((uint32_t)(0x0u));
  /* 1090349e push 2 */
  push32((uint32_t)(0x2u));
  /* 109034a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109034a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109034a4 push 5 */
  push32((uint32_t)(0x5u));
  /* 109034a6 push 0xa */
  push32((uint32_t)(0xau));
  /* 109034a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109034ab mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109034ae push ecx */
  push32((uint32_t)(ECX));
  /* 109034af push 1 */
  push32((uint32_t)(0x1u));
  /* 109034b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109034b3 call 0x109035c0 */
  push32(0x109034b8u); f_109035c0();
  /* 109034b8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109034bb:;
  /* 109034bb mov edx, dword ptr [0x1091fe2c] */
  EDX = (r32((uint32_t)(0x1091fe2c)));
  /* 109034c1 cmp edx, dword ptr [0x1091fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1091fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109034c7 jge 0x10903514 */
  if ((C.sf==C.of)) goto L_10903514;
  /* 109034c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109034cc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 109034cf cmp ecx, dword ptr [0x1091fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1091fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109034d5 jl 0x109034e5 */
  if ((C.sf!=C.of)) goto L_109034e5;
  /* 109034d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109034da mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 109034dd cmp eax, dword ptr [0x1091fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1091fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109034e3 jle 0x109034ec */
  if ((C.zf||C.sf!=C.of)) goto L_109034ec;
L_109034e5:;
  /* 109034e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109034e7 jmp 0x109035b6 */
  goto L_109035b6;
L_109034ec:;
  /* 109034ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109034ef mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 109034f2 cmp edx, dword ptr [0x1091fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1091fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109034f8 jle 0x10903512 */
  if ((C.zf||C.sf!=C.of)) goto L_10903512;
  /* 109034fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109034fd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10903500 cmp ecx, dword ptr [0x1091fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1091fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903506 jge 0x10903512 */
  if ((C.sf==C.of)) goto L_10903512;
  /* 10903508 mov eax, 1 */
  EAX = (0x1u);
  /* 1090350d jmp 0x109035b6 */
  goto L_109035b6;
L_10903512:;
  /* 10903512 jmp 0x10903557 */
  goto L_10903557;
L_10903514:;
  /* 10903514 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903517 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1090351a cmp eax, dword ptr [0x1091fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1091fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903520 jl 0x10903530 */
  if ((C.sf!=C.of)) goto L_10903530;
  /* 10903522 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903525 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10903528 cmp edx, dword ptr [0x1091fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1091fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090352e jle 0x10903537 */
  if ((C.zf||C.sf!=C.of)) goto L_10903537;
L_10903530:;
  /* 10903530 mov eax, 1 */
  EAX = (0x1u);
  /* 10903535 jmp 0x109035b6 */
  goto L_109035b6;
L_10903537:;
  /* 10903537 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090353a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1090353d cmp ecx, dword ptr [0x1091fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1091fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903543 jle 0x10903557 */
  if ((C.zf||C.sf!=C.of)) goto L_10903557;
  /* 10903545 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903548 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1090354b cmp eax, dword ptr [0x1091fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1091fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903551 jge 0x10903557 */
  if ((C.sf==C.of)) goto L_10903557;
  /* 10903553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10903555 jmp 0x109035b6 */
  goto L_109035b6;
L_10903557:;
  /* 10903557 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090355a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1090355d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10903560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903563 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10903565 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903567 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090356a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1090356d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10903573 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903575 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1090357b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1090357e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903581 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10903584 cmp edx, dword ptr [0x1091fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1091fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090358a jne 0x109035a2 */
  if (!C.zf) goto L_109035a2;
  /* 1090358c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090358f cmp eax, dword ptr [0x1091fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1091fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903595 jl 0x1090359e */
  if ((C.sf!=C.of)) goto L_1090359e;
  /* 10903597 mov eax, 1 */
  EAX = (0x1u);
  /* 1090359c jmp 0x109035b6 */
  goto L_109035b6;
L_1090359e:;
  /* 1090359e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109035a0 jmp 0x109035b6 */
  goto L_109035b6;
L_109035a2:;
  /* 109035a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109035a5 cmp ecx, dword ptr [0x1091fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1091fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109035ab jge 0x109035b4 */
  if ((C.sf==C.of)) goto L_109035b4;
  /* 109035ad mov eax, 1 */
  EAX = (0x1u);
  /* 109035b2 jmp 0x109035b6 */
  goto L_109035b6;
L_109035b4:;
  /* 109035b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109035b6:;
  /* 109035b6 mov esp, ebp */
  ESP = (EBP);
  /* 109035b8 pop ebp */
  EBP = (pop32());
  /* 109035b9 ret  */
  ESPCHK(0x109032c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100135c0 @ 0x109035c0 (504 bytes, 145 insns) */
void f_109035c0(void) {
  FTRACE(0x109035c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109035c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109035c1 mov ebp, esp */
  EBP = (ESP);
  /* 109035c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109035c6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109035ca jne 0x1090369c */
  if (!C.zf) goto L_1090369c;
  /* 109035d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109035d3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 109035d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109035d8 jne 0x109035e9 */
  if (!C.zf) goto L_109035e9;
  /* 109035da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109035dd mov edx, dword ptr [ecx*4 + 0x1091fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1091fe4c)));
  /* 109035e4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109035e7 jmp 0x109035f6 */
  goto L_109035f6;
L_109035e9:;
  /* 109035e9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109035ec mov ecx, dword ptr [eax*4 + 0x1091fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1091fe80)));
  /* 109035f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_109035f6:;
  /* 109035f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109035f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109035fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109035ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10903602 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10903605 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1090360b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1090360e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903610 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10903613 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10903616 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10903619 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1090361d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1090361e mov ecx, 7 */
  ECX = (0x7u);
  /* 10903623 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10903625 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10903628 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090362b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090362e jge 0x10903649 */
  if ((C.sf==C.of)) goto L_10903649;
  /* 10903630 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10903633 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10903636 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10903639 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1090363c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1090363f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903642 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903644 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10903647 jmp 0x1090365d */
  goto L_1090365d;
L_10903649:;
  /* 10903649 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1090364c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1090364f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10903652 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10903655 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903658 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090365a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1090365d:;
  /* 1090365d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903661 jne 0x1090369a */
  if (!C.zf) goto L_1090369a;
  /* 10903663 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10903666 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10903669 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1090366b jne 0x1090367c */
  if (!C.zf) goto L_1090367c;
  /* 1090366d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10903670 mov eax, dword ptr [edx*4 + 0x1091fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1091fe50)));
  /* 10903677 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1090367a jmp 0x10903689 */
  goto L_10903689;
L_1090367c:;
  /* 1090367c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1090367f mov edx, dword ptr [ecx*4 + 0x1091fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1091fe84)));
  /* 10903686 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10903689:;
  /* 10903689 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1090368c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090368f jle 0x1090369a */
  if ((C.zf||C.sf!=C.of)) goto L_1090369a;
  /* 10903691 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10903694 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10903697 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1090369a:;
  /* 1090369a jmp 0x109036d1 */
  goto L_109036d1;
L_1090369c:;
  /* 1090369c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090369f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109036a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109036a4 jne 0x109036b5 */
  if (!C.zf) goto L_109036b5;
  /* 109036a6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109036a9 mov ecx, dword ptr [eax*4 + 0x1091fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1091fe4c)));
  /* 109036b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109036b3 jmp 0x109036c2 */
  goto L_109036c2;
L_109036b5:;
  /* 109036b5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109036b8 mov eax, dword ptr [edx*4 + 0x1091fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1091fe80)));
  /* 109036bf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_109036c2:;
  /* 109036c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109036c5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109036c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109036cb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109036ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_109036d1:;
  /* 109036d1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109036d5 jne 0x10903711 */
  if (!C.zf) goto L_10903711;
  /* 109036d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109036da mov dword ptr [0x1091fe2c], eax */
  w32((uint32_t)(0x1091fe2c), (EAX));
  /* 109036df mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 109036e2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109036e5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 109036e8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109036ea imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109036ed mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 109036f0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109036f2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109036f8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 109036fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109036fd mov dword ptr [0x1091fe30], ecx */
  w32((uint32_t)(0x1091fe30), (ECX));
  /* 10903703 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10903706 mov dword ptr [0x1091fe28], edx */
  w32((uint32_t)(0x1091fe28), (EDX));
  /* 1090370c jmp 0x109037b4 */
  goto L_109037b4;
L_10903711:;
  /* 10903711 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10903714 mov dword ptr [0x1091fe3c], eax */
  w32((uint32_t)(0x1091fe3c), (EAX));
  /* 10903719 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1090371c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1090371f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10903722 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903724 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10903727 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1090372a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090372c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10903732 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10903735 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903737 mov dword ptr [0x1091fe40], ecx */
  w32((uint32_t)(0x1091fe40), (ECX));
  /* 1090373d mov edx, dword ptr [0x1091fd98] */
  EDX = (r32((uint32_t)(0x1091fd98)));
  /* 10903743 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10903749 mov eax, dword ptr [0x1091fe40] */
  EAX = (r32((uint32_t)(0x1091fe40)));
  /* 1090374e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903750 mov dword ptr [0x1091fe40], eax */
  w32((uint32_t)(0x1091fe40), (EAX));
  /* 10903755 cmp dword ptr [0x1091fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1091fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090375c jge 0x10903781 */
  if ((C.sf==C.of)) goto L_10903781;
  /* 1090375e mov ecx, dword ptr [0x1091fe40] */
  ECX = (r32((uint32_t)(0x1091fe40)));
  /* 10903764 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090376a mov dword ptr [0x1091fe40], ecx */
  w32((uint32_t)(0x1091fe40), (ECX));
  /* 10903770 mov edx, dword ptr [0x1091fe3c] */
  EDX = (r32((uint32_t)(0x1091fe3c)));
  /* 10903776 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10903779 mov dword ptr [0x1091fe3c], edx */
  w32((uint32_t)(0x1091fe3c), (EDX));
  /* 1090377f jmp 0x109037ab */
  goto L_109037ab;
L_10903781:;
  /* 10903781 cmp dword ptr [0x1091fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1091fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090378b jl 0x109037ab */
  if ((C.sf!=C.of)) goto L_109037ab;
  /* 1090378d mov eax, dword ptr [0x1091fe40] */
  EAX = (r32((uint32_t)(0x1091fe40)));
  /* 10903792 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10903797 mov dword ptr [0x1091fe40], eax */
  w32((uint32_t)(0x1091fe40), (EAX));
  /* 1090379c mov ecx, dword ptr [0x1091fe3c] */
  ECX = (r32((uint32_t)(0x1091fe3c)));
  /* 109037a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109037a5 mov dword ptr [0x1091fe3c], ecx */
  w32((uint32_t)(0x1091fe3c), (ECX));
L_109037ab:;
  /* 109037ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109037ae mov dword ptr [0x1091fe38], edx */
  w32((uint32_t)(0x1091fe38), (EDX));
L_109037b4:;
  /* 109037b4 mov esp, ebp */
  ESP = (EBP);
  /* 109037b6 pop ebp */
  EBP = (pop32());
  /* 109037b7 ret  */
  ESPCHK(0x109035c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137c0 @ 0x109037c0 (382 bytes, 135 insns) */
void f_109037c0(void) {
  FTRACE(0x109037c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109037c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109037c1 mov ebp, esp */
  EBP = (ESP);
  /* 109037c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109037c5 push 0x1091c9b0 */
  push32((uint32_t)(0x1091c9b0u));
  /* 109037ca push 0x108fd488 */
  push32((uint32_t)(0x108fd488u));
  /* 109037cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 109037d5 push eax */
  push32((uint32_t)(EAX));
  /* 109037d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 109037dd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109037e0 push ebx */
  push32((uint32_t)(EBX));
  /* 109037e1 push esi */
  push32((uint32_t)(ESI));
  /* 109037e2 push edi */
  push32((uint32_t)(EDI));
  /* 109037e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109037e6 cmp dword ptr [0x10920914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109037ed jne 0x10903832 */
  if (!C.zf) goto L_10903832;
  /* 109037ef push 0 */
  push32((uint32_t)(0x0u));
  /* 109037f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109037f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109037f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109037f7 call dword ptr [0x109232c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232c8))), 0x109037fdu);
  /* 109037fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109037ff je 0x1090380d */
  if (C.zf) goto L_1090380d;
  /* 10903801 mov dword ptr [0x10920914], 1 */
  w32((uint32_t)(0x10920914), (0x1u));
  /* 1090380b jmp 0x10903832 */
  goto L_10903832;
L_1090380d:;
  /* 1090380d push 0 */
  push32((uint32_t)(0x0u));
  /* 1090380f push 0 */
  push32((uint32_t)(0x0u));
  /* 10903811 push 1 */
  push32((uint32_t)(0x1u));
  /* 10903813 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903815 call dword ptr [0x109232e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232e0))), 0x1090381bu);
  /* 1090381b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1090381d je 0x1090382b */
  if (C.zf) goto L_1090382b;
  /* 1090381f mov dword ptr [0x10920914], 2 */
  w32((uint32_t)(0x10920914), (0x2u));
  /* 10903829 jmp 0x10903832 */
  goto L_10903832;
L_1090382b:;
  /* 1090382b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1090382d jmp 0x10903941 */
  goto L_10903941;
L_10903832:;
  /* 10903832 cmp dword ptr [0x10920914], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10920914))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903839 jne 0x10903856 */
  if (!C.zf) goto L_10903856;
  /* 1090383b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1090383e push eax */
  push32((uint32_t)(EAX));
  /* 1090383f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10903842 push ecx */
  push32((uint32_t)(ECX));
  /* 10903843 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10903846 push edx */
  push32((uint32_t)(EDX));
  /* 10903847 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090384a push eax */
  push32((uint32_t)(EAX));
  /* 1090384b call dword ptr [0x109232c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232c8))), 0x10903851u);
  /* 10903851 jmp 0x10903941 */
  goto L_10903941;
L_10903856:;
  /* 10903856 cmp dword ptr [0x10920914], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10920914))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090385d jne 0x1090393f */
  if (!C.zf) goto L_1090393f;
  /* 10903863 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903867 jne 0x10903872 */
  if (!C.zf) goto L_10903872;
  /* 10903869 mov ecx, dword ptr [0x109207c8] */
  ECX = (r32((uint32_t)(0x109207c8)));
  /* 1090386f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10903872:;
  /* 10903872 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903874 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903876 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10903879 push edx */
  push32((uint32_t)(EDX));
  /* 1090387a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090387d push eax */
  push32((uint32_t)(EAX));
  /* 1090387e call dword ptr [0x109232e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232e0))), 0x10903884u);
  /* 10903884 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10903887 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090388b jne 0x10903894 */
  if (!C.zf) goto L_10903894;
  /* 1090388d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1090388f jmp 0x10903941 */
  goto L_10903941;
L_10903894:;
  /* 10903894 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1090389b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1090389e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109038a1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109038a3 call 0x108f7520 */
  push32(0x109038a8u); f_108f7520();
  /* 109038a8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 109038ab mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109038ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109038b1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 109038b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109038bb jmp 0x109038d4 */
  goto L_109038d4;
  /* 109038bd mov eax, 1 */
  EAX = (0x1u);
  /* 109038c2 ret  */
  ESPCHK(0x109037c0u, _esp0);
  ESP += 4; return;
  /* 109038c3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109038c6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 109038cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109038d4:;
  /* 109038d4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109038d8 jne 0x109038de */
  if (!C.zf) goto L_109038de;
  /* 109038da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109038dc jmp 0x10903941 */
  goto L_10903941;
L_109038de:;
  /* 109038de mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109038e1 push edx */
  push32((uint32_t)(EDX));
  /* 109038e2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109038e5 push eax */
  push32((uint32_t)(EAX));
  /* 109038e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109038e9 push ecx */
  push32((uint32_t)(ECX));
  /* 109038ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109038ed push edx */
  push32((uint32_t)(EDX));
  /* 109038ee call dword ptr [0x109232e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232e0))), 0x109038f4u);
  /* 109038f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109038f6 jne 0x109038fc */
  if (!C.zf) goto L_109038fc;
  /* 109038f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109038fa jmp 0x10903941 */
  goto L_10903941;
L_109038fc:;
  /* 109038fc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903900 jne 0x1090391d */
  if (!C.zf) goto L_1090391d;
  /* 10903902 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903904 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903906 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10903908 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1090390b push eax */
  push32((uint32_t)(EAX));
  /* 1090390c push 1 */
  push32((uint32_t)(0x1u));
  /* 1090390e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10903911 push ecx */
  push32((uint32_t)(ECX));
  /* 10903912 call dword ptr [0x10923310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923310))), 0x10903918u);
  /* 10903918 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1090391b jmp 0x1090393a */
  goto L_1090393a;
L_1090391d:;
  /* 1090391d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10903920 push edx */
  push32((uint32_t)(EDX));
  /* 10903921 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10903924 push eax */
  push32((uint32_t)(EAX));
  /* 10903925 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10903927 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1090392a push ecx */
  push32((uint32_t)(ECX));
  /* 1090392b push 1 */
  push32((uint32_t)(0x1u));
  /* 1090392d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10903930 push edx */
  push32((uint32_t)(EDX));
  /* 10903931 call dword ptr [0x10923310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923310))), 0x10903937u);
  /* 10903937 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1090393a:;
  /* 1090393a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1090393d jmp 0x10903941 */
  goto L_10903941;
L_1090393f:;
  /* 1090393f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10903941:;
  /* 10903941 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10903944 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10903947 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1090394e pop edi */
  EDI = (pop32());
  /* 1090394f pop esi */
  ESI = (pop32());
  /* 10903950 pop ebx */
  EBX = (pop32());
  /* 10903951 mov esp, ebp */
  ESP = (EBP);
  /* 10903953 pop ebp */
  EBP = (pop32());
  /* 10903954 ret  */
  ESPCHK(0x109037c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013960 @ 0x10903960 (398 bytes, 140 insns) */
void f_10903960(void) {
  FTRACE(0x10903960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10903960 push ebp */
  push32((uint32_t)(EBP));
  /* 10903961 mov ebp, esp */
  EBP = (ESP);
  /* 10903963 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10903965 push 0x1091c9c0 */
  push32((uint32_t)(0x1091c9c0u));
  /* 1090396a push 0x108fd488 */
  push32((uint32_t)(0x108fd488u));
  /* 1090396f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10903975 push eax */
  push32((uint32_t)(EAX));
  /* 10903976 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1090397d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903980 push ebx */
  push32((uint32_t)(EBX));
  /* 10903981 push esi */
  push32((uint32_t)(ESI));
  /* 10903982 push edi */
  push32((uint32_t)(EDI));
  /* 10903983 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10903986 cmp dword ptr [0x10920918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090398d jne 0x109039d2 */
  if (!C.zf) goto L_109039d2;
  /* 1090398f push 0 */
  push32((uint32_t)(0x0u));
  /* 10903991 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903993 push 1 */
  push32((uint32_t)(0x1u));
  /* 10903995 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903997 call dword ptr [0x109232c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232c8))), 0x1090399du);
  /* 1090399d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1090399f je 0x109039ad */
  if (C.zf) goto L_109039ad;
  /* 109039a1 mov dword ptr [0x10920918], 1 */
  w32((uint32_t)(0x10920918), (0x1u));
  /* 109039ab jmp 0x109039d2 */
  goto L_109039d2;
L_109039ad:;
  /* 109039ad push 0 */
  push32((uint32_t)(0x0u));
  /* 109039af push 0 */
  push32((uint32_t)(0x0u));
  /* 109039b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109039b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109039b5 call dword ptr [0x109232e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232e0))), 0x109039bbu);
  /* 109039bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109039bd je 0x109039cb */
  if (C.zf) goto L_109039cb;
  /* 109039bf mov dword ptr [0x10920918], 2 */
  w32((uint32_t)(0x10920918), (0x2u));
  /* 109039c9 jmp 0x109039d2 */
  goto L_109039d2;
L_109039cb:;
  /* 109039cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109039cd jmp 0x10903af1 */
  goto L_10903af1;
L_109039d2:;
  /* 109039d2 cmp dword ptr [0x10920918], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10920918))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109039d9 jne 0x109039f6 */
  if (!C.zf) goto L_109039f6;
  /* 109039db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109039de push eax */
  push32((uint32_t)(EAX));
  /* 109039df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109039e2 push ecx */
  push32((uint32_t)(ECX));
  /* 109039e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109039e6 push edx */
  push32((uint32_t)(EDX));
  /* 109039e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109039ea push eax */
  push32((uint32_t)(EAX));
  /* 109039eb call dword ptr [0x109232e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232e0))), 0x109039f1u);
  /* 109039f1 jmp 0x10903af1 */
  goto L_10903af1;
L_109039f6:;
  /* 109039f6 cmp dword ptr [0x10920918], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10920918))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109039fd jne 0x10903aef */
  if (!C.zf) goto L_10903aef;
  /* 10903a03 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903a07 jne 0x10903a12 */
  if (!C.zf) goto L_10903a12;
  /* 10903a09 mov ecx, dword ptr [0x109207c8] */
  ECX = (r32((uint32_t)(0x109207c8)));
  /* 10903a0f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10903a12:;
  /* 10903a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903a16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10903a19 push edx */
  push32((uint32_t)(EDX));
  /* 10903a1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903a1d push eax */
  push32((uint32_t)(EAX));
  /* 10903a1e call dword ptr [0x109232c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232c8))), 0x10903a24u);
  /* 10903a24 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10903a27 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903a2b jne 0x10903a34 */
  if (!C.zf) goto L_10903a34;
  /* 10903a2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10903a2f jmp 0x10903af1 */
  goto L_10903af1;
L_10903a34:;
  /* 10903a34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10903a3b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10903a3e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10903a40 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903a43 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10903a45 call 0x108f7520 */
  push32(0x10903a4au); f_108f7520();
  /* 10903a4a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10903a4d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10903a50 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10903a53 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10903a56 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10903a5d jmp 0x10903a76 */
  goto L_10903a76;
  /* 10903a5f mov eax, 1 */
  EAX = (0x1u);
  /* 10903a64 ret  */
  ESPCHK(0x10903960u, _esp0);
  ESP += 4; return;
  /* 10903a65 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10903a68 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10903a6f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10903a76:;
  /* 10903a76 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903a7a jne 0x10903a80 */
  if (!C.zf) goto L_10903a80;
  /* 10903a7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10903a7e jmp 0x10903af1 */
  goto L_10903af1;
L_10903a80:;
  /* 10903a80 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10903a83 push edx */
  push32((uint32_t)(EDX));
  /* 10903a84 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10903a87 push eax */
  push32((uint32_t)(EAX));
  /* 10903a88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10903a8b push ecx */
  push32((uint32_t)(ECX));
  /* 10903a8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903a8f push edx */
  push32((uint32_t)(EDX));
  /* 10903a90 call dword ptr [0x109232c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232c8))), 0x10903a96u);
  /* 10903a96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10903a98 jne 0x10903a9e */
  if (!C.zf) goto L_10903a9e;
  /* 10903a9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10903a9c jmp 0x10903af1 */
  goto L_10903af1;
L_10903a9e:;
  /* 10903a9e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903aa2 jne 0x10903ac6 */
  if (!C.zf) goto L_10903ac6;
  /* 10903aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 10903aac push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10903aae mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10903ab1 push eax */
  push32((uint32_t)(EAX));
  /* 10903ab2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10903ab7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10903aba push ecx */
  push32((uint32_t)(ECX));
  /* 10903abb call dword ptr [0x10923394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923394))), 0x10903ac1u);
  /* 10903ac1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10903ac4 jmp 0x10903aea */
  goto L_10903aea;
L_10903ac6:;
  /* 10903ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903ac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903aca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10903acd push edx */
  push32((uint32_t)(EDX));
  /* 10903ace mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10903ad1 push eax */
  push32((uint32_t)(EAX));
  /* 10903ad2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10903ad4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10903ad7 push ecx */
  push32((uint32_t)(ECX));
  /* 10903ad8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10903add mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10903ae0 push edx */
  push32((uint32_t)(EDX));
  /* 10903ae1 call dword ptr [0x10923394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923394))), 0x10903ae7u);
  /* 10903ae7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10903aea:;
  /* 10903aea mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10903aed jmp 0x10903af1 */
  goto L_10903af1;
L_10903aef:;
  /* 10903aef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10903af1:;
  /* 10903af1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10903af4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10903af7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10903afe pop edi */
  EDI = (pop32());
  /* 10903aff pop esi */
  ESI = (pop32());
  /* 10903b00 pop ebx */
  EBX = (pop32());
  /* 10903b01 mov esp, ebp */
  ESP = (EBP);
  /* 10903b03 pop ebp */
  EBP = (pop32());
  /* 10903b04 ret  */
  ESPCHK(0x10903960u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b10 @ 0x10903b10 (11 bytes, 6 insns) */
void f_10903b10(void) {
  FTRACE(0x10903b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10903b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10903b11 mov ebp, esp */
  EBP = (ESP);
  /* 10903b13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903b16 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903b19 pop ebp */
  EBP = (pop32());
  /* 10903b1a ret  */
  ESPCHK(0x10903b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b20 @ 0x10903b20 (147 bytes, 43 insns) */
void f_10903b20(void) {
  FTRACE(0x10903b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10903b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10903b21 mov ebp, esp */
  EBP = (ESP);
  /* 10903b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10903b24 cmp dword ptr [0x109207b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109207b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903b2b jne 0x10903b47 */
  if (!C.zf) goto L_10903b47;
  /* 10903b2d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903b31 jl 0x10903b42 */
  if ((C.sf!=C.of)) goto L_10903b42;
  /* 10903b33 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903b37 jg 0x10903b42 */
  if ((!C.zf&&C.sf==C.of)) goto L_10903b42;
  /* 10903b39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903b3c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903b3f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10903b42:;
  /* 10903b42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903b45 jmp 0x10903baf */
  goto L_10903baf;
L_10903b47:;
  /* 10903b47 push 0x10920944 */
  push32((uint32_t)(0x10920944u));
  /* 10903b4c call dword ptr [0x10923380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923380))), 0x10903b52u);
  /* 10903b52 cmp dword ptr [0x10920934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903b59 je 0x10903b79 */
  if (C.zf) goto L_10903b79;
  /* 10903b5b push 0x10920944 */
  push32((uint32_t)(0x10920944u));
  /* 10903b60 call dword ptr [0x10923370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923370))), 0x10903b66u);
  /* 10903b66 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10903b68 call 0x108f7d80 */
  push32(0x10903b6du); f_108f7d80();
  /* 10903b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903b70 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10903b77 jmp 0x10903b80 */
  goto L_10903b80;
L_10903b79:;
  /* 10903b79 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10903b80:;
  /* 10903b80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10903b84 call 0x10903bc0 */
  push32(0x10903b89u); f_10903bc0();
  /* 10903b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903b8c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10903b8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903b93 je 0x10903ba1 */
  if (C.zf) goto L_10903ba1;
  /* 10903b95 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10903b97 call 0x108f7e20 */
  push32(0x10903b9cu); f_108f7e20();
  /* 10903b9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903b9f jmp 0x10903bac */
  goto L_10903bac;
L_10903ba1:;
  /* 10903ba1 push 0x10920944 */
  push32((uint32_t)(0x10920944u));
  /* 10903ba6 call dword ptr [0x10923370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923370))), 0x10903bacu);
L_10903bac:;
  /* 10903bac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10903baf:;
  /* 10903baf mov esp, ebp */
  ESP = (EBP);
  /* 10903bb1 pop ebp */
  EBP = (pop32());
  /* 10903bb2 ret  */
  ESPCHK(0x10903b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013bc0 @ 0x10903bc0 (299 bytes, 91 insns) */
void f_10903bc0(void) {
  FTRACE(0x10903bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10903bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10903bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10903bc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10903bc6 cmp dword ptr [0x109207b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109207b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903bcd jne 0x10903bec */
  if (!C.zf) goto L_10903bec;
  /* 10903bcf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903bd3 jl 0x10903be4 */
  if ((C.sf!=C.of)) goto L_10903be4;
  /* 10903bd5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903bd9 jg 0x10903be4 */
  if ((!C.zf&&C.sf==C.of)) goto L_10903be4;
  /* 10903bdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903bde add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903be1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10903be4:;
  /* 10903be4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903be7 jmp 0x10903ce7 */
  goto L_10903ce7;
L_10903bec:;
  /* 10903bec cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903bf3 jge 0x10903c33 */
  if ((C.sf==C.of)) goto L_10903c33;
  /* 10903bf5 cmp dword ptr [0x1091eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1091eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903bfc jle 0x10903c11 */
  if ((C.zf||C.sf!=C.of)) goto L_10903c11;
  /* 10903bfe push 1 */
  push32((uint32_t)(0x1u));
  /* 10903c00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903c03 push ecx */
  push32((uint32_t)(ECX));
  /* 10903c04 call 0x108fa390 */
  push32(0x10903c09u); f_108fa390();
  /* 10903c09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903c0c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10903c0f jmp 0x10903c25 */
  goto L_10903c25;
L_10903c11:;
  /* 10903c11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903c14 mov eax, dword ptr [0x1091ec98] */
  EAX = (r32((uint32_t)(0x1091ec98)));
  /* 10903c19 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10903c1b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10903c1f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10903c22 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10903c25:;
  /* 10903c25 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903c29 jne 0x10903c33 */
  if (!C.zf) goto L_10903c33;
  /* 10903c2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903c2e jmp 0x10903ce7 */
  goto L_10903ce7;
L_10903c33:;
  /* 10903c33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903c36 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10903c39 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10903c3f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10903c45 mov eax, dword ptr [0x1091ec98] */
  EAX = (r32((uint32_t)(0x1091ec98)));
  /* 10903c4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10903c4c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10903c50 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10903c56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10903c58 je 0x10903c7c */
  if (C.zf) goto L_10903c7c;
  /* 10903c5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903c5d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10903c60 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10903c66 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10903c69 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10903c6c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10903c6f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10903c73 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10903c7a jmp 0x10903c8d */
  goto L_10903c8d;
L_10903c7c:;
  /* 10903c7c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10903c7f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10903c82 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10903c86 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10903c8d:;
  /* 10903c8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10903c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10903c91 push 3 */
  push32((uint32_t)(0x3u));
  /* 10903c93 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10903c96 push edx */
  push32((uint32_t)(EDX));
  /* 10903c97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10903c9a push eax */
  push32((uint32_t)(EAX));
  /* 10903c9b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10903c9e push ecx */
  push32((uint32_t)(ECX));
  /* 10903c9f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10903ca4 mov edx, dword ptr [0x109207b8] */
  EDX = (r32((uint32_t)(0x109207b8)));
  /* 10903caa push edx */
  push32((uint32_t)(EDX));
  /* 10903cab call 0x108fc770 */
  push32(0x10903cb0u); f_108fc770();
  /* 10903cb0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903cb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10903cb6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903cba jne 0x10903cc1 */
  if (!C.zf) goto L_10903cc1;
  /* 10903cbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903cbf jmp 0x10903ce7 */
  goto L_10903ce7;
L_10903cc1:;
  /* 10903cc1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903cc5 jne 0x10903cd1 */
  if (!C.zf) goto L_10903cd1;
  /* 10903cc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903cca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10903ccf jmp 0x10903ce7 */
  goto L_10903ce7;
L_10903cd1:;
  /* 10903cd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903cd4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10903cd9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10903cdc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10903ce2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10903ce5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10903ce7:;
  /* 10903ce7 mov esp, ebp */
  ESP = (EBP);
  /* 10903ce9 pop ebp */
  EBP = (pop32());
  /* 10903cea ret  */
  ESPCHK(0x10903bc0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10903cf0 (52 bytes, 19 insns) */
void f_10903cf0(void) {
  FTRACE(0x10903cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10903cf0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10903cf4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10903cf8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10903cfa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10903cfe jne 0x10903d09 */
  if (!C.zf) goto L_10903d09;
  /* 10903d00 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10903d04 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10903d06 ret 0x10 */
  ESPCHK(0x10903cf0u, _esp0);
  ESP += 20; return;
L_10903d09:;
  /* 10903d09 push ebx */
  push32((uint32_t)(EBX));
  /* 10903d0a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10903d0c mov ebx, eax */
  EBX = (EAX);
  /* 10903d0e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10903d12 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10903d16 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903d18 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10903d1c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10903d1e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903d20 pop ebx */
  EBX = (pop32());
  /* 10903d21 ret 0x10 */
  ESPCHK(0x10903cf0u, _esp0);
  ESP += 20; return;
}

/* FUN_10013d30 @ 0x10903d30 (46 bytes, 18 insns) */
void f_10903d30(void) {
  FTRACE(0x10903d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10903d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10903d31 mov ebp, esp */
  EBP = (ESP);
  /* 10903d33 push ecx */
  push32((uint32_t)(ECX));
  /* 10903d34 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10903d36 call 0x108f7d80 */
  push32(0x10903d3bu); f_108f7d80();
  /* 10903d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903d3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903d41 push eax */
  push32((uint32_t)(EAX));
  /* 10903d42 call 0x10903d60 */
  push32(0x10903d47u); f_10903d60();
  /* 10903d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903d4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10903d4d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10903d4f call 0x108f7e20 */
  push32(0x10903d54u); f_108f7e20();
  /* 10903d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903d57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10903d5a mov esp, ebp */
  ESP = (EBP);
  /* 10903d5c pop ebp */
  EBP = (pop32());
  /* 10903d5d ret  */
  ESPCHK(0x10903d30u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10903d60 (198 bytes, 69 insns) */
void f_10903d60(void) {
  FTRACE(0x10903d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10903d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10903d61 mov ebp, esp */
  EBP = (ESP);
  /* 10903d63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10903d66 mov eax, dword ptr [0x109205d8] */
  EAX = (r32((uint32_t)(0x109205d8)));
  /* 10903d6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10903d6e cmp dword ptr [0x109220e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109220e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903d75 jne 0x10903d7e */
  if (!C.zf) goto L_10903d7e;
  /* 10903d77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10903d79 jmp 0x10903e22 */
  goto L_10903e22;
L_10903d7e:;
  /* 10903d7e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903d82 jne 0x10903da6 */
  if (!C.zf) goto L_10903da6;
  /* 10903d84 cmp dword ptr [0x109205e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903d8b je 0x10903da6 */
  if (C.zf) goto L_10903da6;
  /* 10903d8d call 0x10903e80 */
  push32(0x10903d92u); f_10903e80();
  /* 10903d92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10903d94 je 0x10903d9d */
  if (C.zf) goto L_10903d9d;
  /* 10903d96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10903d98 jmp 0x10903e22 */
  goto L_10903e22;
L_10903d9d:;
  /* 10903d9d mov ecx, dword ptr [0x109205d8] */
  ECX = (r32((uint32_t)(0x109205d8)));
  /* 10903da3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10903da6:;
  /* 10903da6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903daa je 0x10903e20 */
  if (C.zf) goto L_10903e20;
  /* 10903dac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903db0 je 0x10903e20 */
  if (C.zf) goto L_10903e20;
  /* 10903db2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903db5 push edx */
  push32((uint32_t)(EDX));
  /* 10903db6 call 0x108f71b0 */
  push32(0x10903dbbu); f_108f71b0();
  /* 10903dbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903dbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10903dc1:;
  /* 10903dc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10903dc4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903dc7 je 0x10903e20 */
  if (C.zf) goto L_10903e20;
  /* 10903dc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10903dcc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10903dce push edx */
  push32((uint32_t)(EDX));
  /* 10903dcf call 0x108f71b0 */
  push32(0x10903dd4u); f_108f71b0();
  /* 10903dd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903dd7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903dda jbe 0x10903e15 */
  if ((C.cf||C.zf)) goto L_10903e15;
  /* 10903ddc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10903ddf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10903de1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10903de4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10903de8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903deb jne 0x10903e15 */
  if (!C.zf) goto L_10903e15;
  /* 10903ded mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10903df0 push ecx */
  push32((uint32_t)(ECX));
  /* 10903df1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903df4 push edx */
  push32((uint32_t)(EDX));
  /* 10903df5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10903df8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10903dfa push ecx */
  push32((uint32_t)(ECX));
  /* 10903dfb call 0x10903e30 */
  push32(0x10903e00u); f_10903e30();
  /* 10903e00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903e03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10903e05 jne 0x10903e15 */
  if (!C.zf) goto L_10903e15;
  /* 10903e07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10903e0a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10903e0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10903e0f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10903e13 jmp 0x10903e22 */
  goto L_10903e22;
L_10903e15:;
  /* 10903e15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10903e18 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903e1b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10903e1e jmp 0x10903dc1 */
  goto L_10903dc1;
L_10903e20:;
  /* 10903e20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10903e22:;
  /* 10903e22 mov esp, ebp */
  ESP = (EBP);
  /* 10903e24 pop ebp */
  EBP = (pop32());
  /* 10903e25 ret  */
  ESPCHK(0x10903d60u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10903e30 (79 bytes, 32 insns) */
void f_10903e30(void) {
  FTRACE(0x10903e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10903e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10903e31 mov ebp, esp */
  EBP = (ESP);
  /* 10903e33 push ecx */
  push32((uint32_t)(ECX));
  /* 10903e34 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903e38 jne 0x10903e3e */
  if (!C.zf) goto L_10903e3e;
  /* 10903e3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10903e3c jmp 0x10903e7b */
  goto L_10903e7b;
L_10903e3e:;
  /* 10903e3e mov eax, dword ptr [0x10921ca4] */
  EAX = (r32((uint32_t)(0x10921ca4)));
  /* 10903e43 push eax */
  push32((uint32_t)(EAX));
  /* 10903e44 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10903e47 push ecx */
  push32((uint32_t)(ECX));
  /* 10903e48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10903e4b push edx */
  push32((uint32_t)(EDX));
  /* 10903e4c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10903e4f push eax */
  push32((uint32_t)(EAX));
  /* 10903e50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10903e53 push ecx */
  push32((uint32_t)(ECX));
  /* 10903e54 push 1 */
  push32((uint32_t)(0x1u));
  /* 10903e56 mov edx, dword ptr [0x10921f44] */
  EDX = (r32((uint32_t)(0x10921f44)));
  /* 10903e5c push edx */
  push32((uint32_t)(EDX));
  /* 10903e5d call 0x10903f30 */
  push32(0x10903e62u); f_10903f30();
  /* 10903e62 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903e65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10903e68 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903e6c jne 0x10903e75 */
  if (!C.zf) goto L_10903e75;
  /* 10903e6e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10903e73 jmp 0x10903e7b */
  goto L_10903e7b;
L_10903e75:;
  /* 10903e75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10903e78 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10903e7b:;
  /* 10903e7b mov esp, ebp */
  ESP = (EBP);
  /* 10903e7d pop ebp */
  EBP = (pop32());
  /* 10903e7e ret  */
  ESPCHK(0x10903e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e80 @ 0x10903e80 (174 bytes, 66 insns) */
void f_10903e80(void) {
  FTRACE(0x10903e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10903e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10903e81 mov ebp, esp */
  EBP = (ESP);
  /* 10903e83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10903e86 mov eax, dword ptr [0x109205e0] */
  EAX = (r32((uint32_t)(0x109205e0)));
  /* 10903e8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10903e8e:;
  /* 10903e8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10903e91 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903e94 je 0x10903f28 */
  if (C.zf) goto L_10903f28;
  /* 10903e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10903e9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10903e9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10903ea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903ea2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10903ea4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10903ea7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10903ea9 push eax */
  push32((uint32_t)(EAX));
  /* 10903eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 10903eac push 1 */
  push32((uint32_t)(0x1u));
  /* 10903eae call dword ptr [0x10923394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923394))), 0x10903eb4u);
  /* 10903eb4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10903eb7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903ebb jne 0x10903ec2 */
  if (!C.zf) goto L_10903ec2;
  /* 10903ebd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10903ec0 jmp 0x10903f2a */
  goto L_10903f2a;
L_10903ec2:;
  /* 10903ec2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10903ec4 push 0x1091c9cc */
  push32((uint32_t)(0x1091c9ccu));
  /* 10903ec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10903ecb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903ece push ecx */
  push32((uint32_t)(ECX));
  /* 10903ecf call 0x108f4380 */
  push32(0x10903ed4u); f_108f4380();
  /* 10903ed4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903ed7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10903eda cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903ede jne 0x10903ee5 */
  if (!C.zf) goto L_10903ee5;
  /* 10903ee0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10903ee3 jmp 0x10903f2a */
  goto L_10903f2a;
L_10903ee5:;
  /* 10903ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903ee9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10903eec push edx */
  push32((uint32_t)(EDX));
  /* 10903eed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10903ef0 push eax */
  push32((uint32_t)(EAX));
  /* 10903ef1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10903ef3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10903ef6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10903ef8 push edx */
  push32((uint32_t)(EDX));
  /* 10903ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903efb push 1 */
  push32((uint32_t)(0x1u));
  /* 10903efd call dword ptr [0x10923394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923394))), 0x10903f03u);
  /* 10903f03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10903f05 jne 0x10903f0c */
  if (!C.zf) goto L_10903f0c;
  /* 10903f07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10903f0a jmp 0x10903f2a */
  goto L_10903f2a;
L_10903f0c:;
  /* 10903f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10903f0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10903f11 push eax */
  push32((uint32_t)(EAX));
  /* 10903f12 call 0x10904380 */
  push32(0x10903f17u); f_10904380();
  /* 10903f17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903f1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10903f1d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10903f20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10903f23 jmp 0x10903e8e */
  goto L_10903e8e;
L_10903f28:;
  /* 10903f28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10903f2a:;
  /* 10903f2a mov esp, ebp */
  ESP = (EBP);
  /* 10903f2c pop ebp */
  EBP = (pop32());
  /* 10903f2d ret  */
  ESPCHK(0x10903e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f30 @ 0x10903f30 (970 bytes, 340 insns) */
void f_10903f30(void) {
  FTRACE(0x10903f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10903f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10903f31 mov ebp, esp */
  EBP = (ESP);
  /* 10903f33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10903f35 push 0x1091ca20 */
  push32((uint32_t)(0x1091ca20u));
  /* 10903f3a push 0x108fd488 */
  push32((uint32_t)(0x108fd488u));
  /* 10903f3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10903f45 push eax */
  push32((uint32_t)(EAX));
  /* 10903f46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10903f4d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903f50 push ebx */
  push32((uint32_t)(EBX));
  /* 10903f51 push esi */
  push32((uint32_t)(ESI));
  /* 10903f52 push edi */
  push32((uint32_t)(EDI));
  /* 10903f53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10903f56 cmp dword ptr [0x1092091c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1092091c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903f5d jne 0x10903fb6 */
  if (!C.zf) goto L_10903fb6;
  /* 10903f5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10903f61 push 0x1091c07c */
  push32((uint32_t)(0x1091c07cu));
  /* 10903f66 push 1 */
  push32((uint32_t)(0x1u));
  /* 10903f68 push 0x1091c07c */
  push32((uint32_t)(0x1091c07cu));
  /* 10903f6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10903f6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10903f71 call dword ptr [0x109232c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232c0))), 0x10903f77u);
  /* 10903f77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10903f79 je 0x10903f87 */
  if (C.zf) goto L_10903f87;
  /* 10903f7b mov dword ptr [0x1092091c], 1 */
  w32((uint32_t)(0x1092091c), (0x1u));
  /* 10903f85 jmp 0x10903fb6 */
  goto L_10903fb6;
L_10903f87:;
  /* 10903f87 push 1 */
  push32((uint32_t)(0x1u));
  /* 10903f89 push 0x1091c078 */
  push32((uint32_t)(0x1091c078u));
  /* 10903f8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10903f90 push 0x1091c078 */
  push32((uint32_t)(0x1091c078u));
  /* 10903f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10903f99 call dword ptr [0x109232c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232c4))), 0x10903f9fu);
  /* 10903f9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10903fa1 je 0x10903faf */
  if (C.zf) goto L_10903faf;
  /* 10903fa3 mov dword ptr [0x1092091c], 2 */
  w32((uint32_t)(0x1092091c), (0x2u));
  /* 10903fad jmp 0x10903fb6 */
  goto L_10903fb6;
L_10903faf:;
  /* 10903faf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10903fb1 jmp 0x10904314 */
  goto L_10904314;
L_10903fb6:;
  /* 10903fb6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903fba jle 0x10903fcf */
  if ((C.zf||C.sf!=C.of)) goto L_10903fcf;
  /* 10903fbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10903fbf push eax */
  push32((uint32_t)(EAX));
  /* 10903fc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10903fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10903fc4 call 0x10904330 */
  push32(0x10903fc9u); f_10904330();
  /* 10903fc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903fcc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10903fcf:;
  /* 10903fcf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903fd3 jle 0x10903fe8 */
  if ((C.zf||C.sf!=C.of)) goto L_10903fe8;
  /* 10903fd5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10903fd8 push edx */
  push32((uint32_t)(EDX));
  /* 10903fd9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10903fdc push eax */
  push32((uint32_t)(EAX));
  /* 10903fdd call 0x10904330 */
  push32(0x10903fe2u); f_10904330();
  /* 10903fe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10903fe5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10903fe8:;
  /* 10903fe8 cmp dword ptr [0x1092091c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1092091c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10903fef jne 0x10904014 */
  if (!C.zf) goto L_10904014;
  /* 10903ff1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10903ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 10903ff5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10903ff8 push edx */
  push32((uint32_t)(EDX));
  /* 10903ff9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10903ffc push eax */
  push32((uint32_t)(EAX));
  /* 10903ffd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10904000 push ecx */
  push32((uint32_t)(ECX));
  /* 10904001 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10904004 push edx */
  push32((uint32_t)(EDX));
  /* 10904005 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10904008 push eax */
  push32((uint32_t)(EAX));
  /* 10904009 call dword ptr [0x109232c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232c4))), 0x1090400fu);
  /* 1090400f jmp 0x10904314 */
  goto L_10904314;
L_10904014:;
  /* 10904014 cmp dword ptr [0x1092091c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1092091c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090401b jne 0x10904312 */
  if (!C.zf) goto L_10904312;
  /* 10904021 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904025 jne 0x10904030 */
  if (!C.zf) goto L_10904030;
  /* 10904027 mov ecx, dword ptr [0x109207c8] */
  ECX = (r32((uint32_t)(0x109207c8)));
  /* 1090402d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10904030:;
  /* 10904030 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904034 je 0x10904040 */
  if (C.zf) goto L_10904040;
  /* 10904036 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090403a jne 0x109041bc */
  if (!C.zf) goto L_109041bc;
L_10904040:;
  /* 10904040 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10904043 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904046 jne 0x10904052 */
  if (!C.zf) goto L_10904052;
  /* 10904048 mov eax, 2 */
  EAX = (0x2u);
  /* 1090404d jmp 0x10904314 */
  goto L_10904314;
L_10904052:;
  /* 10904052 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904056 jle 0x10904062 */
  if ((C.zf||C.sf!=C.of)) goto L_10904062;
  /* 10904058 mov eax, 1 */
  EAX = (0x1u);
  /* 1090405d jmp 0x10904314 */
  goto L_10904314;
L_10904062:;
  /* 10904062 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904066 jle 0x10904072 */
  if ((C.zf||C.sf!=C.of)) goto L_10904072;
  /* 10904068 mov eax, 3 */
  EAX = (0x3u);
  /* 1090406d jmp 0x10904314 */
  goto L_10904314;
L_10904072:;
  /* 10904072 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10904075 push eax */
  push32((uint32_t)(EAX));
  /* 10904076 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10904079 push ecx */
  push32((uint32_t)(ECX));
  /* 1090407a call dword ptr [0x1092331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092331c))), 0x10904080u);
  /* 10904080 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10904082 jne 0x1090408b */
  if (!C.zf) goto L_1090408b;
  /* 10904084 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10904086 jmp 0x10904314 */
  goto L_10904314;
L_1090408b:;
  /* 1090408b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090408f jne 0x10904097 */
  if (!C.zf) goto L_10904097;
  /* 10904091 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904095 je 0x109040c4 */
  if (C.zf) goto L_109040c4;
L_10904097:;
  /* 10904097 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090409b jne 0x109040a3 */
  if (!C.zf) goto L_109040a3;
  /* 1090409d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109040a1 je 0x109040c4 */
  if (C.zf) goto L_109040c4;
L_109040a3:;
  /* 109040a3 push 0x1091c9e0 */
  push32((uint32_t)(0x1091c9e0u));
  /* 109040a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109040aa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 109040af push 0x1091c9d8 */
  push32((uint32_t)(0x1091c9d8u));
  /* 109040b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109040b6 call 0x108f3440 */
  push32(0x109040bbu); f_108f3440();
  /* 109040bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109040be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109040c1 jne 0x109040c4 */
  if (!C.zf) goto L_109040c4;
  /* 109040c3 int3  */
  x86_unimpl("int3 @ 0x109040c3");
L_109040c4:;
  /* 109040c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109040c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109040c8 jne 0x1090408b */
  if (!C.zf) goto L_1090408b;
  /* 109040ca cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109040ce jle 0x10904143 */
  if ((C.zf||C.sf!=C.of)) goto L_10904143;
  /* 109040d0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109040d4 jae 0x109040e0 */
  if (!C.cf) goto L_109040e0;
  /* 109040d6 mov eax, 3 */
  EAX = (0x3u);
  /* 109040db jmp 0x10904314 */
  goto L_10904314;
L_109040e0:;
  /* 109040e0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 109040e3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 109040e6 jmp 0x109040f1 */
  goto L_109040f1;
L_109040e8:;
  /* 109040e8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 109040eb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109040ee mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_109040f1:;
  /* 109040f1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 109040f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109040f6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109040f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109040fa je 0x10904139 */
  if (C.zf) goto L_10904139;
  /* 109040fc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 109040ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10904101 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10904104 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10904106 je 0x10904139 */
  if (C.zf) goto L_10904139;
  /* 10904108 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090410b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1090410d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1090410f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10904112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10904114 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10904116 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904118 jl 0x10904137 */
  if ((C.sf!=C.of)) goto L_10904137;
  /* 1090411a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1090411d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1090411f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10904121 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10904124 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10904126 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10904129 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090412b jg 0x10904137 */
  if ((!C.zf&&C.sf==C.of)) goto L_10904137;
  /* 1090412d mov eax, 2 */
  EAX = (0x2u);
  /* 10904132 jmp 0x10904314 */
  goto L_10904314;
L_10904137:;
  /* 10904137 jmp 0x109040e8 */
  goto L_109040e8;
L_10904139:;
  /* 10904139 mov eax, 3 */
  EAX = (0x3u);
  /* 1090413e jmp 0x10904314 */
  goto L_10904314;
L_10904143:;
  /* 10904143 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904147 jle 0x109041bc */
  if ((C.zf||C.sf!=C.of)) goto L_109041bc;
  /* 10904149 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090414d jae 0x10904159 */
  if (!C.cf) goto L_10904159;
  /* 1090414f mov eax, 1 */
  EAX = (0x1u);
  /* 10904154 jmp 0x10904314 */
  goto L_10904314;
L_10904159:;
  /* 10904159 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1090415c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1090415f jmp 0x1090416a */
  goto L_1090416a;
L_10904161:;
  /* 10904161 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10904164 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10904167 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1090416a:;
  /* 1090416a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1090416d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1090416f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10904171 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10904173 je 0x109041b2 */
  if (C.zf) goto L_109041b2;
  /* 10904175 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10904178 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1090417a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1090417d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1090417f je 0x109041b2 */
  if (C.zf) goto L_109041b2;
  /* 10904181 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10904184 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10904186 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10904188 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1090418b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1090418d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1090418f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904191 jl 0x109041b0 */
  if ((C.sf!=C.of)) goto L_109041b0;
  /* 10904193 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10904196 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10904198 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1090419a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1090419d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1090419f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 109041a2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109041a4 jg 0x109041b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_109041b0;
  /* 109041a6 mov eax, 2 */
  EAX = (0x2u);
  /* 109041ab jmp 0x10904314 */
  goto L_10904314;
L_109041b0:;
  /* 109041b0 jmp 0x10904161 */
  goto L_10904161;
L_109041b2:;
  /* 109041b2 mov eax, 1 */
  EAX = (0x1u);
  /* 109041b7 jmp 0x10904314 */
  goto L_10904314;
L_109041bc:;
  /* 109041bc push 0 */
  push32((uint32_t)(0x0u));
  /* 109041be push 0 */
  push32((uint32_t)(0x0u));
  /* 109041c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109041c3 push ecx */
  push32((uint32_t)(ECX));
  /* 109041c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109041c7 push edx */
  push32((uint32_t)(EDX));
  /* 109041c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 109041ca mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 109041cd push eax */
  push32((uint32_t)(EAX));
  /* 109041ce call dword ptr [0x10923310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923310))), 0x109041d4u);
  /* 109041d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 109041d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109041db jne 0x109041e4 */
  if (!C.zf) goto L_109041e4;
  /* 109041dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109041df jmp 0x10904314 */
  goto L_10904314;
L_109041e4:;
  /* 109041e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109041eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109041ee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109041f0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109041f3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109041f5 call 0x108f7520 */
  push32(0x109041fau); f_108f7520();
  /* 109041fa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 109041fd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10904200 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10904203 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10904206 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1090420d jmp 0x10904226 */
  goto L_10904226;
  /* 1090420f mov eax, 1 */
  EAX = (0x1u);
  /* 10904214 ret  */
  ESPCHK(0x10903f30u, _esp0);
  ESP += 4; return;
  /* 10904215 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10904218 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1090421f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10904226:;
  /* 10904226 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090422a jne 0x10904233 */
  if (!C.zf) goto L_10904233;
  /* 1090422c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1090422e jmp 0x10904314 */
  goto L_10904314;
L_10904233:;
  /* 10904233 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10904236 push edx */
  push32((uint32_t)(EDX));
  /* 10904237 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1090423a push eax */
  push32((uint32_t)(EAX));
  /* 1090423b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1090423e push ecx */
  push32((uint32_t)(ECX));
  /* 1090423f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10904242 push edx */
  push32((uint32_t)(EDX));
  /* 10904243 push 1 */
  push32((uint32_t)(0x1u));
  /* 10904245 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10904248 push eax */
  push32((uint32_t)(EAX));
  /* 10904249 call dword ptr [0x10923310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923310))), 0x1090424fu);
  /* 1090424f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10904251 jne 0x1090425a */
  if (!C.zf) goto L_1090425a;
  /* 10904253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10904255 jmp 0x10904314 */
  goto L_10904314;
L_1090425a:;
  /* 1090425a push 0 */
  push32((uint32_t)(0x0u));
  /* 1090425c push 0 */
  push32((uint32_t)(0x0u));
  /* 1090425e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10904261 push ecx */
  push32((uint32_t)(ECX));
  /* 10904262 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10904265 push edx */
  push32((uint32_t)(EDX));
  /* 10904266 push 9 */
  push32((uint32_t)(0x9u));
  /* 10904268 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1090426b push eax */
  push32((uint32_t)(EAX));
  /* 1090426c call dword ptr [0x10923310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923310))), 0x10904272u);
  /* 10904272 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10904275 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904279 jne 0x10904282 */
  if (!C.zf) goto L_10904282;
  /* 1090427b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1090427d jmp 0x10904314 */
  goto L_10904314;
L_10904282:;
  /* 10904282 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10904289 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1090428c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1090428e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10904291 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10904293 call 0x108f7520 */
  push32(0x10904298u); f_108f7520();
  /* 10904298 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1090429b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1090429e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 109042a1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 109042a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109042ab jmp 0x109042c4 */
  goto L_109042c4;
  /* 109042ad mov eax, 1 */
  EAX = (0x1u);
  /* 109042b2 ret  */
  ESPCHK(0x10903f30u, _esp0);
  ESP += 4; return;
  /* 109042b3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109042b6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 109042bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109042c4:;
  /* 109042c4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109042c8 jne 0x109042ce */
  if (!C.zf) goto L_109042ce;
  /* 109042ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109042cc jmp 0x10904314 */
  goto L_10904314;
L_109042ce:;
  /* 109042ce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 109042d1 push edx */
  push32((uint32_t)(EDX));
  /* 109042d2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109042d5 push eax */
  push32((uint32_t)(EAX));
  /* 109042d6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109042d9 push ecx */
  push32((uint32_t)(ECX));
  /* 109042da mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109042dd push edx */
  push32((uint32_t)(EDX));
  /* 109042de push 1 */
  push32((uint32_t)(0x1u));
  /* 109042e0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 109042e3 push eax */
  push32((uint32_t)(EAX));
  /* 109042e4 call dword ptr [0x10923310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923310))), 0x109042eau);
  /* 109042ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109042ec jne 0x109042f2 */
  if (!C.zf) goto L_109042f2;
  /* 109042ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109042f0 jmp 0x10904314 */
  goto L_10904314;
L_109042f2:;
  /* 109042f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109042f5 push ecx */
  push32((uint32_t)(ECX));
  /* 109042f6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109042f9 push edx */
  push32((uint32_t)(EDX));
  /* 109042fa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109042fd push eax */
  push32((uint32_t)(EAX));
  /* 109042fe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10904301 push ecx */
  push32((uint32_t)(ECX));
  /* 10904302 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10904305 push edx */
  push32((uint32_t)(EDX));
  /* 10904306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10904309 push eax */
  push32((uint32_t)(EAX));
  /* 1090430a call dword ptr [0x109232c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232c0))), 0x10904310u);
  /* 10904310 jmp 0x10904314 */
  goto L_10904314;
L_10904312:;
  /* 10904312 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10904314:;
  /* 10904314 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10904317 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1090431a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10904321 pop edi */
  EDI = (pop32());
  /* 10904322 pop esi */
  ESI = (pop32());
  /* 10904323 pop ebx */
  EBX = (pop32());
  /* 10904324 mov esp, ebp */
  ESP = (EBP);
  /* 10904326 pop ebp */
  EBP = (pop32());
  /* 10904327 ret  */
  ESPCHK(0x10903f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014330 @ 0x10904330 (80 bytes, 32 insns) */
void f_10904330(void) {
  FTRACE(0x10904330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10904330 push ebp */
  push32((uint32_t)(EBP));
  /* 10904331 mov ebp, esp */
  EBP = (ESP);
  /* 10904333 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10904336 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10904339 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1090433c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090433f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10904342:;
  /* 10904342 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10904345 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10904348 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1090434b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1090434e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10904350 je 0x10904367 */
  if (C.zf) goto L_10904367;
  /* 10904352 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10904355 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10904358 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1090435a je 0x10904367 */
  if (C.zf) goto L_10904367;
  /* 1090435c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090435f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10904362 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10904365 jmp 0x10904342 */
  goto L_10904342;
L_10904367:;
  /* 10904367 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090436a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1090436d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1090436f jne 0x10904379 */
  if (!C.zf) goto L_10904379;
  /* 10904371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10904374 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10904377 jmp 0x1090437c */
  goto L_1090437c;
L_10904379:;
  /* 10904379 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1090437c:;
  /* 1090437c mov esp, ebp */
  ESP = (EBP);
  /* 1090437e pop ebp */
  EBP = (pop32());
  /* 1090437f ret  */
  ESPCHK(0x10904330u, _esp0);
  ESP += 4; return;
}

/* FUN_10014380 @ 0x10904380 (736 bytes, 224 insns) */
void f_10904380(void) {
  FTRACE(0x10904380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10904380 push ebp */
  push32((uint32_t)(EBP));
  /* 10904381 mov ebp, esp */
  EBP = (ESP);
  /* 10904383 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10904386 push esi */
  push32((uint32_t)(ESI));
  /* 10904387 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090438b je 0x109043ac */
  if (C.zf) goto L_109043ac;
  /* 1090438d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1090438f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10904392 push eax */
  push32((uint32_t)(EAX));
  /* 10904393 call 0x109047d0 */
  push32(0x10904398u); f_109047d0();
  /* 10904398 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090439b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1090439e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109043a2 je 0x109043ac */
  if (C.zf) goto L_109043ac;
  /* 109043a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109043a7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109043aa jne 0x109043b4 */
  if (!C.zf) goto L_109043b4;
L_109043ac:;
  /* 109043ac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109043af jmp 0x1090465b */
  goto L_1090465b;
L_109043b4:;
  /* 109043b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109043b7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 109043bb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109043bd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109043bf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109043c0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109043c3 mov ecx, dword ptr [0x109205d8] */
  ECX = (r32((uint32_t)(0x109205d8)));
  /* 109043c9 cmp ecx, dword ptr [0x109205dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109205dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109043cf jne 0x109043e5 */
  if (!C.zf) goto L_109043e5;
  /* 109043d1 mov edx, dword ptr [0x109205d8] */
  EDX = (r32((uint32_t)(0x109205d8)));
  /* 109043d7 push edx */
  push32((uint32_t)(EDX));
  /* 109043d8 call 0x109046e0 */
  push32(0x109043ddu); f_109046e0();
  /* 109043dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109043e0 mov dword ptr [0x109205d8], eax */
  w32((uint32_t)(0x109205d8), (EAX));
L_109043e5:;
  /* 109043e5 cmp dword ptr [0x109205d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109043ec jne 0x109044a5 */
  if (!C.zf) goto L_109044a5;
  /* 109043f2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109043f6 je 0x10904417 */
  if (C.zf) goto L_10904417;
  /* 109043f8 cmp dword ptr [0x109205e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109043ff je 0x10904417 */
  if (C.zf) goto L_10904417;
  /* 10904401 call 0x10903e80 */
  push32(0x10904406u); f_10903e80();
  /* 10904406 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10904408 je 0x10904412 */
  if (C.zf) goto L_10904412;
  /* 1090440a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1090440d jmp 0x1090465b */
  goto L_1090465b;
L_10904412:;
  /* 10904412 jmp 0x109044a5 */
  goto L_109044a5;
L_10904417:;
  /* 10904417 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090441b je 0x10904424 */
  if (C.zf) goto L_10904424;
  /* 1090441d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1090441f jmp 0x1090465b */
  goto L_1090465b;
L_10904424:;
  /* 10904424 cmp dword ptr [0x109205d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090442b jne 0x10904464 */
  if (!C.zf) goto L_10904464;
  /* 1090442d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10904432 push 0x1091ca38 */
  push32((uint32_t)(0x1091ca38u));
  /* 10904437 push 2 */
  push32((uint32_t)(0x2u));
  /* 10904439 push 4 */
  push32((uint32_t)(0x4u));
  /* 1090443b call 0x108f4380 */
  push32(0x10904440u); f_108f4380();
  /* 10904440 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10904443 mov dword ptr [0x109205d8], eax */
  w32((uint32_t)(0x109205d8), (EAX));
  /* 10904448 cmp dword ptr [0x109205d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090444f jne 0x10904459 */
  if (!C.zf) goto L_10904459;
  /* 10904451 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10904454 jmp 0x1090465b */
  goto L_1090465b;
L_10904459:;
  /* 10904459 mov eax, dword ptr [0x109205d8] */
  EAX = (r32((uint32_t)(0x109205d8)));
  /* 1090445e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10904464:;
  /* 10904464 cmp dword ptr [0x109205e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090446b jne 0x109044a5 */
  if (!C.zf) goto L_109044a5;
  /* 1090446d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10904472 push 0x1091ca38 */
  push32((uint32_t)(0x1091ca38u));
  /* 10904477 push 2 */
  push32((uint32_t)(0x2u));
  /* 10904479 push 4 */
  push32((uint32_t)(0x4u));
  /* 1090447b call 0x108f4380 */
  push32(0x10904480u); f_108f4380();
  /* 10904480 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10904483 mov dword ptr [0x109205e0], eax */
  w32((uint32_t)(0x109205e0), (EAX));
  /* 10904488 cmp dword ptr [0x109205e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090448f jne 0x10904499 */
  if (!C.zf) goto L_10904499;
  /* 10904491 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10904494 jmp 0x1090465b */
  goto L_1090465b;
L_10904499:;
  /* 10904499 mov ecx, dword ptr [0x109205e0] */
  ECX = (r32((uint32_t)(0x109205e0)));
  /* 1090449f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_109044a5:;
  /* 109044a5 mov edx, dword ptr [0x109205d8] */
  EDX = (r32((uint32_t)(0x109205d8)));
  /* 109044ab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109044ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109044b1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109044b4 push eax */
  push32((uint32_t)(EAX));
  /* 109044b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109044b8 push ecx */
  push32((uint32_t)(ECX));
  /* 109044b9 call 0x10904660 */
  push32(0x109044beu); f_10904660();
  /* 109044be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109044c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109044c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109044c8 jl 0x10904561 */
  if ((C.sf!=C.of)) goto L_10904561;
  /* 109044ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109044d1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109044d4 je 0x10904561 */
  if (C.zf) goto L_10904561;
  /* 109044da cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109044de je 0x10904553 */
  if (C.zf) goto L_10904553;
  /* 109044e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 109044e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109044e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109044e8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 109044eb push edx */
  push32((uint32_t)(EDX));
  /* 109044ec call 0x108f4e10 */
  push32(0x109044f1u); f_108f4e10();
  /* 109044f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109044f4 jmp 0x109044ff */
  goto L_109044ff;
L_109044f6:;
  /* 109044f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109044f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109044fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109044ff:;
  /* 109044ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10904502 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10904505 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904509 je 0x10904520 */
  if (C.zf) goto L_10904520;
  /* 1090450b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1090450e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10904511 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10904514 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10904517 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1090451b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1090451e jmp 0x109044f6 */
  goto L_109044f6;
L_10904520:;
  /* 10904520 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10904525 push 0x1091ca38 */
  push32((uint32_t)(0x1091ca38u));
  /* 1090452a push 2 */
  push32((uint32_t)(0x2u));
  /* 1090452c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1090452f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10904532 push eax */
  push32((uint32_t)(EAX));
  /* 10904533 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10904536 push ecx */
  push32((uint32_t)(ECX));
  /* 10904537 call 0x108f4810 */
  push32(0x1090453cu); f_108f4810();
  /* 1090453c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090453f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10904542 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904546 je 0x10904551 */
  if (C.zf) goto L_10904551;
  /* 10904548 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1090454b mov dword ptr [0x109205d8], edx */
  w32((uint32_t)(0x109205d8), (EDX));
L_10904551:;
  /* 10904551 jmp 0x1090455f */
  goto L_1090455f;
L_10904553:;
  /* 10904553 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10904556 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10904559 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090455c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1090455f:;
  /* 1090455f jmp 0x109045d4 */
  goto L_109045d4;
L_10904561:;
  /* 10904561 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904565 jne 0x109045cd */
  if (!C.zf) goto L_109045cd;
  /* 10904567 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090456b jge 0x10904575 */
  if ((C.sf==C.of)) goto L_10904575;
  /* 1090456d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10904570 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10904572 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10904575:;
  /* 10904575 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1090457a push 0x1091ca38 */
  push32((uint32_t)(0x1091ca38u));
  /* 1090457f push 2 */
  push32((uint32_t)(0x2u));
  /* 10904581 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10904584 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1090458b push edx */
  push32((uint32_t)(EDX));
  /* 1090458c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1090458f push eax */
  push32((uint32_t)(EAX));
  /* 10904590 call 0x108f4810 */
  push32(0x10904595u); f_108f4810();
  /* 10904595 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10904598 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1090459b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090459f jne 0x109045a9 */
  if (!C.zf) goto L_109045a9;
  /* 109045a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109045a4 jmp 0x1090465b */
  goto L_1090465b;
L_109045a9:;
  /* 109045a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109045ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109045af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109045b2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 109045b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109045b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109045bb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 109045c3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109045c6 mov dword ptr [0x109205d8], eax */
  w32((uint32_t)(0x109205d8), (EAX));
  /* 109045cb jmp 0x109045d4 */
  goto L_109045d4;
L_109045cd:;
  /* 109045cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109045cf jmp 0x1090465b */
  goto L_1090465b;
L_109045d4:;
  /* 109045d4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109045d8 je 0x10904659 */
  if (C.zf) goto L_10904659;
  /* 109045da push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 109045df push 0x1091ca38 */
  push32((uint32_t)(0x1091ca38u));
  /* 109045e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109045e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109045e9 push ecx */
  push32((uint32_t)(ECX));
  /* 109045ea call 0x108f71b0 */
  push32(0x109045efu); f_108f71b0();
  /* 109045ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109045f2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109045f5 push eax */
  push32((uint32_t)(EAX));
  /* 109045f6 call 0x108f4380 */
  push32(0x109045fbu); f_108f4380();
  /* 109045fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109045fe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10904601 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904605 je 0x10904659 */
  if (C.zf) goto L_10904659;
  /* 10904607 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090460a push edx */
  push32((uint32_t)(EDX));
  /* 1090460b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1090460e push eax */
  push32((uint32_t)(EAX));
  /* 1090460f call 0x108f7330 */
  push32(0x10904614u); f_108f7330();
  /* 10904614 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10904617 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1090461a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1090461d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10904620 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10904622 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10904625 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10904628 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1090462b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090462e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10904631 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10904634 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10904637 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10904639 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1090463b not edx */
  EDX = (~(EDX));
  /* 1090463d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10904640 push edx */
  push32((uint32_t)(EDX));
  /* 10904641 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10904644 push eax */
  push32((uint32_t)(EAX));
  /* 10904645 call dword ptr [0x109232bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232bc))), 0x1090464bu);
  /* 1090464b push 2 */
  push32((uint32_t)(0x2u));
  /* 1090464d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10904650 push ecx */
  push32((uint32_t)(ECX));
  /* 10904651 call 0x108f4e10 */
  push32(0x10904656u); f_108f4e10();
  /* 10904656 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10904659:;
  /* 10904659 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1090465b:;
  /* 1090465b pop esi */
  ESI = (pop32());
  /* 1090465c mov esp, ebp */
  ESP = (EBP);
  /* 1090465e pop ebp */
  EBP = (pop32());
  /* 1090465f ret  */
  ESPCHK(0x10904380u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10904660 (124 bytes, 47 insns) */
void f_10904660(void) {
  FTRACE(0x10904660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10904660 push ebp */
  push32((uint32_t)(EBP));
  /* 10904661 mov ebp, esp */
  EBP = (ESP);
  /* 10904663 push ecx */
  push32((uint32_t)(ECX));
  /* 10904664 mov eax, dword ptr [0x109205d8] */
  EAX = (r32((uint32_t)(0x109205d8)));
  /* 10904669 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1090466c jmp 0x10904677 */
  goto L_10904677;
L_1090466e:;
  /* 1090466e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10904671 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10904674 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10904677:;
  /* 10904677 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090467a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1090467d je 0x109046ca */
  if (C.zf) goto L_109046ca;
  /* 1090467f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10904682 push eax */
  push32((uint32_t)(EAX));
  /* 10904683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10904686 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10904688 push edx */
  push32((uint32_t)(EDX));
  /* 10904689 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090468c push eax */
  push32((uint32_t)(EAX));
  /* 1090468d call 0x10903e30 */
  push32(0x10904692u); f_10903e30();
  /* 10904692 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10904695 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10904697 jne 0x109046c8 */
  if (!C.zf) goto L_109046c8;
  /* 10904699 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090469c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1090469e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109046a1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 109046a5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109046a8 je 0x109046ba */
  if (C.zf) goto L_109046ba;
  /* 109046aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109046ad mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109046af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109046b2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 109046b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109046b8 jne 0x109046c8 */
  if (!C.zf) goto L_109046c8;
L_109046ba:;
  /* 109046ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109046bd sub eax, dword ptr [0x109205d8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109205d8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109046c3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 109046c6 jmp 0x109046d8 */
  goto L_109046d8;
L_109046c8:;
  /* 109046c8 jmp 0x1090466e */
  goto L_1090466e;
L_109046ca:;
  /* 109046ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109046cd sub eax, dword ptr [0x109205d8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109205d8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109046d3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 109046d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_109046d8:;
  /* 109046d8 mov esp, ebp */
  ESP = (EBP);
  /* 109046da pop ebp */
  EBP = (pop32());
  /* 109046db ret  */
  ESPCHK(0x10904660u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x109046e0 (238 bytes, 80 insns) */
void f_109046e0(void) {
  FTRACE(0x109046e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109046e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109046e1 mov ebp, esp */
  EBP = (ESP);
  /* 109046e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109046e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109046ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109046f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109046f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109046f7 jne 0x10904700 */
  if (!C.zf) goto L_10904700;
  /* 109046f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109046fb jmp 0x109047ca */
  goto L_109047ca;
L_10904700:;
  /* 10904700 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10904703 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10904705 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10904708 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090470b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1090470e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10904710 je 0x1090471d */
  if (C.zf) goto L_1090471d;
  /* 10904712 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10904715 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10904718 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1090471b jmp 0x10904700 */
  goto L_10904700;
L_1090471d:;
  /* 1090471d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10904722 push 0x1091ca38 */
  push32((uint32_t)(0x1091ca38u));
  /* 10904727 push 2 */
  push32((uint32_t)(0x2u));
  /* 10904729 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1090472c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10904733 push eax */
  push32((uint32_t)(EAX));
  /* 10904734 call 0x108f4380 */
  push32(0x10904739u); f_108f4380();
  /* 10904739 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090473c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1090473f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10904742 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10904745 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904749 jne 0x10904755 */
  if (!C.zf) goto L_10904755;
  /* 1090474b push 9 */
  push32((uint32_t)(0x9u));
  /* 1090474d call 0x108f32f0 */
  push32(0x10904752u); f_108f32f0();
  /* 10904752 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10904755:;
  /* 10904755 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10904758 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1090475b:;
  /* 1090475b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1090475e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904761 je 0x109047be */
  if (C.zf) goto L_109047be;
  /* 10904763 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10904768 push 0x1091ca38 */
  push32((uint32_t)(0x1091ca38u));
  /* 1090476d push 2 */
  push32((uint32_t)(0x2u));
  /* 1090476f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10904772 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10904774 push edx */
  push32((uint32_t)(EDX));
  /* 10904775 call 0x108f71b0 */
  push32(0x1090477au); f_108f71b0();
  /* 1090477a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090477d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10904780 push eax */
  push32((uint32_t)(EAX));
  /* 10904781 call 0x108f4380 */
  push32(0x10904786u); f_108f4380();
  /* 10904786 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10904789 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1090478c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1090478e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10904791 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904794 je 0x109047aa */
  if (C.zf) goto L_109047aa;
  /* 10904796 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10904799 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1090479b push ecx */
  push32((uint32_t)(ECX));
  /* 1090479c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1090479f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109047a1 push eax */
  push32((uint32_t)(EAX));
  /* 109047a2 call 0x108f7330 */
  push32(0x109047a7u); f_108f7330();
  /* 109047a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109047aa:;
  /* 109047aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109047ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109047b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109047b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109047b6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109047b9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109047bc jmp 0x1090475b */
  goto L_1090475b;
L_109047be:;
  /* 109047be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109047c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109047c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109047ca:;
  /* 109047ca mov esp, ebp */
  ESP = (EBP);
  /* 109047cc pop ebp */
  EBP = (pop32());
  /* 109047cd ret  */
  ESPCHK(0x109046e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100147d0 @ 0x109047d0 (237 bytes, 81 insns) */
void f_109047d0(void) {
  FTRACE(0x109047d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109047d0 push ebp */
  push32((uint32_t)(EBP));
  /* 109047d1 mov ebp, esp */
  EBP = (ESP);
  /* 109047d3 push ecx */
  push32((uint32_t)(ECX));
  /* 109047d4 cmp dword ptr [0x10921d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10921d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109047db jne 0x109047f2 */
  if (!C.zf) goto L_109047f2;
  /* 109047dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109047e0 push eax */
  push32((uint32_t)(EAX));
  /* 109047e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109047e4 push ecx */
  push32((uint32_t)(ECX));
  /* 109047e5 call 0x109048d0 */
  push32(0x109047eau); f_109048d0();
  /* 109047ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109047ed jmp 0x109048b9 */
  goto L_109048b9;
L_109047f2:;
  /* 109047f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109047f4 call 0x108f7d80 */
  push32(0x109047f9u); f_108f7d80();
  /* 109047f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109047fc jmp 0x10904807 */
  goto L_10904807;
L_109047fe:;
  /* 109047fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10904801 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10904804 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10904807:;
  /* 10904807 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090480a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1090480e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10904812 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10904815 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1090481b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1090481d je 0x1090489b */
  if (C.zf) goto L_1090489b;
  /* 1090481f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10904822 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10904827 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10904829 mov cl, byte ptr [eax + 0x10921e41] */
  CL = (r8((uint32_t)(EAX + 0x10921e41)));
  /* 1090482f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10904832 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10904834 je 0x10904886 */
  if (C.zf) goto L_10904886;
  /* 10904836 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10904839 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1090483c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1090483f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10904842 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10904844 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10904846 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10904848 jne 0x10904858 */
  if (!C.zf) goto L_10904858;
  /* 1090484a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1090484c call 0x108f7e20 */
  push32(0x10904851u); f_108f7e20();
  /* 10904851 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10904854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10904856 jmp 0x109048b9 */
  goto L_109048b9;
L_10904858:;
  /* 10904858 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1090485b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10904861 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10904864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10904867 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10904869 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1090486b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1090486d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904870 jne 0x10904884 */
  if (!C.zf) goto L_10904884;
  /* 10904872 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10904874 call 0x108f7e20 */
  push32(0x10904879u); f_108f7e20();
  /* 10904879 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1090487c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1090487f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10904882 jmp 0x109048b9 */
  goto L_109048b9;
L_10904884:;
  /* 10904884 jmp 0x10904896 */
  goto L_10904896;
L_10904886:;
  /* 10904886 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10904889 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1090488f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10904892 jne 0x10904896 */
  if (!C.zf) goto L_10904896;
  /* 10904894 jmp 0x1090489b */
  goto L_1090489b;
L_10904896:;
  /* 10904896 jmp 0x109047fe */
  goto L_109047fe;
L_1090489b:;
  /* 1090489b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1090489d call 0x108f7e20 */
  push32(0x109048a2u); f_108f7e20();
  /* 109048a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109048a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109048a8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109048ad cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109048b0 jne 0x109048b7 */
  if (!C.zf) goto L_109048b7;
  /* 109048b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109048b5 jmp 0x109048b9 */
  goto L_109048b9;
L_109048b7:;
  /* 109048b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109048b9:;
  /* 109048b9 mov esp, ebp */
  ESP = (EBP);
  /* 109048bb pop ebp */
  EBP = (pop32());
  /* 109048bc ret  */
  ESPCHK(0x109047d0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x109048d0 (193 bytes, 87 insns) */
void f_109048d0(void) {
  FTRACE(0x109048d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109048d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109048d2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 109048d6 push ebx */
  push32((uint32_t)(EBX));
  /* 109048d7 mov ebx, eax */
  EBX = (EAX);
  /* 109048d9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 109048dc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 109048e0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 109048e6 je 0x109048fb */
  if (C.zf) goto L_109048fb;
L_109048e8:;
  /* 109048e8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 109048ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 109048eb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109048ed je 0x109048c0 */
  if (C.zf) { jmp_ind(0x109048c0u); return; }
  /* 109048ef test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 109048f1 je 0x10904944 */
  if (C.zf) goto L_10904944;
  /* 109048f3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 109048f9 jne 0x109048e8 */
  if (!C.zf) goto L_109048e8;
L_109048fb:;
  /* 109048fb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 109048fd push edi */
  push32((uint32_t)(EDI));
  /* 109048fe mov eax, ebx */
  EAX = (EBX);
  /* 10904900 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10904903 push esi */
  push32((uint32_t)(ESI));
  /* 10904904 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10904906:;
  /* 10904906 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10904908 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1090490d mov eax, ecx */
  EAX = (ECX);
  /* 1090490f mov esi, edi */
  ESI = (EDI);
  /* 10904911 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10904913 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10904915 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10904917 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1090491a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1090491d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1090491f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10904921 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10904924 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1090492a jne 0x10904948 */
  if (!C.zf) goto L_10904948;
  /* 1090492c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10904931 je 0x10904906 */
  if (C.zf) goto L_10904906;
  /* 10904933 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10904938 jne 0x10904942 */
  if (!C.zf) goto L_10904942;
  /* 1090493a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10904940 jne 0x10904906 */
  if (!C.zf) goto L_10904906;
L_10904942:;
  /* 10904942 pop esi */
  ESI = (pop32());
  /* 10904943 pop edi */
  EDI = (pop32());
L_10904944:;
  /* 10904944 pop ebx */
  EBX = (pop32());
  /* 10904945 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10904947 ret  */
  ESPCHK(0x109048d0u, _esp0);
  ESP += 4; return;
L_10904948:;
  /* 10904948 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1090494b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1090494d je 0x10904985 */
  if (C.zf) goto L_10904985;
  /* 1090494f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10904951 je 0x10904942 */
  if (C.zf) goto L_10904942;
  /* 10904953 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10904955 je 0x1090497e */
  if (C.zf) goto L_1090497e;
  /* 10904957 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10904959 je 0x10904942 */
  if (C.zf) goto L_10904942;
  /* 1090495b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1090495e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10904960 je 0x10904977 */
  if (C.zf) goto L_10904977;
  /* 10904962 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10904964 je 0x10904942 */
  if (C.zf) goto L_10904942;
  /* 10904966 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10904968 je 0x10904970 */
  if (C.zf) goto L_10904970;
  /* 1090496a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1090496c je 0x10904942 */
  if (C.zf) goto L_10904942;
  /* 1090496e jmp 0x10904906 */
  goto L_10904906;
L_10904970:;
  /* 10904970 pop esi */
  ESI = (pop32());
  /* 10904971 pop edi */
  EDI = (pop32());
  /* 10904972 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10904975 pop ebx */
  EBX = (pop32());
  /* 10904976 ret  */
  ESPCHK(0x109048d0u, _esp0);
  ESP += 4; return;
L_10904977:;
  /* 10904977 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1090497a pop esi */
  ESI = (pop32());
  /* 1090497b pop edi */
  EDI = (pop32());
  /* 1090497c pop ebx */
  EBX = (pop32());
  /* 1090497d ret  */
  ESPCHK(0x109048d0u, _esp0);
  ESP += 4; return;
L_1090497e:;
  /* 1090497e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10904981 pop esi */
  ESI = (pop32());
  /* 10904982 pop edi */
  EDI = (pop32());
  /* 10904983 pop ebx */
  EBX = (pop32());
  /* 10904984 ret  */
  ESPCHK(0x109048d0u, _esp0);
  ESP += 4; return;
L_10904985:;
  /* 10904985 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10904988 pop esi */
  ESI = (pop32());
  /* 10904989 pop edi */
  EDI = (pop32());
  /* 1090498a pop ebx */
  EBX = (pop32());
  /* 1090498b ret  */
  ESPCHK(0x109048d0u, _esp0);
  ESP += 4; return;
  /* 1090498c jmp dword ptr [0x1092335c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1092335c)))); return;
}

/* RtlUnwind @ 0x10904adc (6 bytes, 1 insns) */
void f_10904adc(void) {
  FTRACE(0x10904adcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10904adc jmp dword ptr [0x109232f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x109232f8)))); return;
}

