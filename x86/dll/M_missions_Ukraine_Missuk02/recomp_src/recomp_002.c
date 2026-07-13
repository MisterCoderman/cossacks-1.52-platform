#include "recomp.h"

/* FUN_100153f0 @ 0x125353f0 (289 bytes, 97 insns) */
void f_125353f0(void) {
  FTRACE(0x125353f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125353f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125353f1 mov ebp, esp */
  EBP = (ESP);
  /* 125353f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125353f6 push esi */
  push32((uint32_t)(ESI));
  /* 125353f7 mov eax, dword ptr [0x12553c98] */
  EAX = (r32((uint32_t)(0x12553c98)));
  /* 125353fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125353ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12535406 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1253540d jmp 0x12535418 */
  goto L_12535418;
L_1253540f:;
  /* 1253540f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535412 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535415 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12535418:;
  /* 12535418 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253541c jae 0x12535451 */
  if (!C.cf) goto L_12535451;
  /* 1253541e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535421 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535424 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12535427 push ecx */
  push32((uint32_t)(ECX));
  /* 12535428 call 0x1252b4d0 */
  push32(0x1253542du); f_1252b4d0();
  /* 1253542d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535430 mov esi, eax */
  ESI = (EAX);
  /* 12535432 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535435 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535438 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1253543c push ecx */
  push32((uint32_t)(ECX));
  /* 1253543d call 0x1252b4d0 */
  push32(0x12535442u); f_1252b4d0();
  /* 12535442 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535445 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535448 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1253544c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1253544f jmp 0x1253540f */
  goto L_1253540f;
L_12535451:;
  /* 12535451 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12535454 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535457 push eax */
  push32((uint32_t)(EAX));
  /* 12535458 call 0x12528680 */
  push32(0x1253545du); f_12528680();
  /* 1253545d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535460 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12535463 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535467 je 0x12535509 */
  if (C.zf) goto L_12535509;
  /* 1253546d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12535470 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12535473 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1253547a jmp 0x12535485 */
  goto L_12535485;
L_1253547c:;
  /* 1253547c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1253547f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535482 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12535485:;
  /* 12535485 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535489 jae 0x125354fa */
  if (!C.cf) goto L_125354fa;
  /* 1253548b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1253548e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12535491 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535494 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535497 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1253549a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1253549d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125354a0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 125354a3 push ecx */
  push32((uint32_t)(ECX));
  /* 125354a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125354a7 push edx */
  push32((uint32_t)(EDX));
  /* 125354a8 call 0x1252b650 */
  push32(0x125354adu); f_1252b650();
  /* 125354ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125354b0 push eax */
  push32((uint32_t)(EAX));
  /* 125354b1 call 0x1252b4d0 */
  push32(0x125354b6u); f_1252b4d0();
  /* 125354b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125354b9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125354bc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125354be mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125354c1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125354c4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 125354c7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125354ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125354cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125354d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125354d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125354d6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 125354da push eax */
  push32((uint32_t)(EAX));
  /* 125354db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125354de push ecx */
  push32((uint32_t)(ECX));
  /* 125354df call 0x1252b650 */
  push32(0x125354e4u); f_1252b650();
  /* 125354e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125354e7 push eax */
  push32((uint32_t)(EAX));
  /* 125354e8 call 0x1252b4d0 */
  push32(0x125354edu); f_1252b4d0();
  /* 125354ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125354f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125354f3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125354f5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125354f8 jmp 0x1253547c */
  goto L_1253547c;
L_125354fa:;
  /* 125354fa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125354fd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12535500 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535503 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535506 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12535509:;
  /* 12535509 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253550c pop esi */
  ESI = (pop32());
  /* 1253550d mov esp, ebp */
  ESP = (EBP);
  /* 1253550f pop ebp */
  EBP = (pop32());
  /* 12535510 ret  */
  ESPCHK(0x125353f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015520 @ 0x12535520 (291 bytes, 97 insns) */
void f_12535520(void) {
  FTRACE(0x12535520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12535520 push ebp */
  push32((uint32_t)(EBP));
  /* 12535521 mov ebp, esp */
  EBP = (ESP);
  /* 12535523 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12535526 push esi */
  push32((uint32_t)(ESI));
  /* 12535527 mov eax, dword ptr [0x12553c98] */
  EAX = (r32((uint32_t)(0x12553c98)));
  /* 1253552c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1253552f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12535536 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1253553d jmp 0x12535548 */
  goto L_12535548;
L_1253553f:;
  /* 1253553f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535542 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535545 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12535548:;
  /* 12535548 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253554c jae 0x12535582 */
  if (!C.cf) goto L_12535582;
  /* 1253554e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535551 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535554 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12535558 push ecx */
  push32((uint32_t)(ECX));
  /* 12535559 call 0x1252b4d0 */
  push32(0x1253555eu); f_1252b4d0();
  /* 1253555e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535561 mov esi, eax */
  ESI = (EAX);
  /* 12535563 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535566 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535569 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1253556d push ecx */
  push32((uint32_t)(ECX));
  /* 1253556e call 0x1252b4d0 */
  push32(0x12535573u); f_1252b4d0();
  /* 12535573 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535576 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535579 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1253557d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12535580 jmp 0x1253553f */
  goto L_1253553f;
L_12535582:;
  /* 12535582 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12535585 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535588 push eax */
  push32((uint32_t)(EAX));
  /* 12535589 call 0x12528680 */
  push32(0x1253558eu); f_12528680();
  /* 1253558e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535591 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12535594 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535598 je 0x1253563b */
  if (C.zf) goto L_1253563b;
  /* 1253559e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125355a1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125355a4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125355ab jmp 0x125355b6 */
  goto L_125355b6;
L_125355ad:;
  /* 125355ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125355b0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125355b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125355b6:;
  /* 125355b6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125355ba jae 0x1253562c */
  if (!C.cf) goto L_1253562c;
  /* 125355bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125355bf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 125355c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125355c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125355c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125355cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125355ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125355d1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 125355d5 push ecx */
  push32((uint32_t)(ECX));
  /* 125355d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125355d9 push edx */
  push32((uint32_t)(EDX));
  /* 125355da call 0x1252b650 */
  push32(0x125355dfu); f_1252b650();
  /* 125355df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125355e2 push eax */
  push32((uint32_t)(EAX));
  /* 125355e3 call 0x1252b4d0 */
  push32(0x125355e8u); f_1252b4d0();
  /* 125355e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125355eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125355ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125355f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125355f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125355f6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 125355f9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125355fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125355ff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12535602 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535605 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535608 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1253560c push eax */
  push32((uint32_t)(EAX));
  /* 1253560d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535610 push ecx */
  push32((uint32_t)(ECX));
  /* 12535611 call 0x1252b650 */
  push32(0x12535616u); f_1252b650();
  /* 12535616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535619 push eax */
  push32((uint32_t)(EAX));
  /* 1253561a call 0x1252b4d0 */
  push32(0x1253561fu); f_1252b4d0();
  /* 1253561f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535622 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535625 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535627 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1253562a jmp 0x125355ad */
  goto L_125355ad;
L_1253562c:;
  /* 1253562c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1253562f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12535632 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535635 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535638 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1253563b:;
  /* 1253563b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253563e pop esi */
  ESI = (pop32());
  /* 1253563f mov esp, ebp */
  ESP = (EBP);
  /* 12535641 pop ebp */
  EBP = (pop32());
  /* 12535642 ret  */
  ESPCHK(0x12535520u, _esp0);
  ESP += 4; return;
}

/* FUN_10015650 @ 0x12535650 (878 bytes, 273 insns) */
void f_12535650(void) {
  FTRACE(0x12535650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12535650 push ebp */
  push32((uint32_t)(EBP));
  /* 12535651 mov ebp, esp */
  EBP = (ESP);
  /* 12535653 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12535656 push esi */
  push32((uint32_t)(ESI));
  /* 12535657 mov eax, dword ptr [0x12553c98] */
  EAX = (r32((uint32_t)(0x12553c98)));
  /* 1253565c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1253565f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12535666 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1253566d jmp 0x12535678 */
  goto L_12535678;
L_1253566f:;
  /* 1253566f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535672 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535675 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12535678:;
  /* 12535678 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253567c jae 0x125356b1 */
  if (!C.cf) goto L_125356b1;
  /* 1253567e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535681 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535684 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12535687 push ecx */
  push32((uint32_t)(ECX));
  /* 12535688 call 0x1252b4d0 */
  push32(0x1253568du); f_1252b4d0();
  /* 1253568d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535690 mov esi, eax */
  ESI = (EAX);
  /* 12535692 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535695 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535698 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1253569c push ecx */
  push32((uint32_t)(ECX));
  /* 1253569d call 0x1252b4d0 */
  push32(0x125356a2u); f_1252b4d0();
  /* 125356a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125356a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125356a8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 125356ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125356af jmp 0x1253566f */
  goto L_1253566f;
L_125356b1:;
  /* 125356b1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125356b8 jmp 0x125356c3 */
  goto L_125356c3;
L_125356ba:;
  /* 125356ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125356bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125356c0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_125356c3:;
  /* 125356c3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125356c7 jae 0x125356fd */
  if (!C.cf) goto L_125356fd;
  /* 125356c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125356cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125356cf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 125356d3 push eax */
  push32((uint32_t)(EAX));
  /* 125356d4 call 0x1252b4d0 */
  push32(0x125356d9u); f_1252b4d0();
  /* 125356d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125356dc mov esi, eax */
  ESI = (EAX);
  /* 125356de mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125356e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125356e4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 125356e8 push eax */
  push32((uint32_t)(EAX));
  /* 125356e9 call 0x1252b4d0 */
  push32(0x125356eeu); f_1252b4d0();
  /* 125356ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125356f1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125356f4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 125356f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125356fb jmp 0x125356ba */
  goto L_125356ba;
L_125356fd:;
  /* 125356fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535700 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12535706 push eax */
  push32((uint32_t)(EAX));
  /* 12535707 call 0x1252b4d0 */
  push32(0x1253570cu); f_1252b4d0();
  /* 1253570c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253570f mov esi, eax */
  ESI = (EAX);
  /* 12535711 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535714 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1253571a push edx */
  push32((uint32_t)(EDX));
  /* 1253571b call 0x1252b4d0 */
  push32(0x12535720u); f_1252b4d0();
  /* 12535720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535723 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535726 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1253572a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1253572d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535730 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12535736 push edx */
  push32((uint32_t)(EDX));
  /* 12535737 call 0x1252b4d0 */
  push32(0x1253573cu); f_1252b4d0();
  /* 1253573c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253573f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12535742 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12535746 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12535749 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253574c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12535752 push ecx */
  push32((uint32_t)(ECX));
  /* 12535753 call 0x1252b4d0 */
  push32(0x12535758u); f_1252b4d0();
  /* 12535758 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253575b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1253575e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12535762 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12535765 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535768 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1253576e push edx */
  push32((uint32_t)(EDX));
  /* 1253576f call 0x1252b4d0 */
  push32(0x12535774u); f_1252b4d0();
  /* 12535774 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535777 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1253577a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1253577e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12535781 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12535784 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535789 push eax */
  push32((uint32_t)(EAX));
  /* 1253578a call 0x12528680 */
  push32(0x1253578fu); f_12528680();
  /* 1253578f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535792 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12535795 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535799 je 0x125359b6 */
  if (C.zf) goto L_125359b6;
  /* 1253579f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125357a2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125357a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125357a8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125357ae mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125357b1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 125357b6 mov eax, dword ptr [0x12553c98] */
  EAX = (r32((uint32_t)(0x12553c98)));
  /* 125357bb push eax */
  push32((uint32_t)(EAX));
  /* 125357bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125357bf push ecx */
  push32((uint32_t)(ECX));
  /* 125357c0 call 0x1252ef80 */
  push32(0x125357c5u); f_1252ef80();
  /* 125357c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125357c8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125357cf jmp 0x125357da */
  goto L_125357da;
L_125357d1:;
  /* 125357d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125357d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125357d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125357da:;
  /* 125357da cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125357de jae 0x1253584e */
  if (!C.cf) goto L_1253584e;
  /* 125357e0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125357e3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125357e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125357e9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 125357ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125357ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125357f2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125357f5 push edx */
  push32((uint32_t)(EDX));
  /* 125357f6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125357f9 push eax */
  push32((uint32_t)(EAX));
  /* 125357fa call 0x1252b650 */
  push32(0x125357ffu); f_1252b650();
  /* 125357ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535802 push eax */
  push32((uint32_t)(EAX));
  /* 12535803 call 0x1252b4d0 */
  push32(0x12535808u); f_1252b4d0();
  /* 12535808 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253580b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1253580e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12535812 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12535815 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535818 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1253581b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1253581e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12535822 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535825 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535828 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1253582c push edx */
  push32((uint32_t)(EDX));
  /* 1253582d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535830 push eax */
  push32((uint32_t)(EAX));
  /* 12535831 call 0x1252b650 */
  push32(0x12535836u); f_1252b650();
  /* 12535836 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535839 push eax */
  push32((uint32_t)(EAX));
  /* 1253583a call 0x1252b4d0 */
  push32(0x1253583fu); f_1252b4d0();
  /* 1253583f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535842 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535845 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12535849 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1253584c jmp 0x125357d1 */
  goto L_125357d1;
L_1253584e:;
  /* 1253584e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12535855 jmp 0x12535860 */
  goto L_12535860;
L_12535857:;
  /* 12535857 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1253585a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253585d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12535860:;
  /* 12535860 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535864 jae 0x125358d6 */
  if (!C.cf) goto L_125358d6;
  /* 12535866 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535869 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1253586c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1253586f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12535873 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535876 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535879 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1253587d push eax */
  push32((uint32_t)(EAX));
  /* 1253587e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535881 push ecx */
  push32((uint32_t)(ECX));
  /* 12535882 call 0x1252b650 */
  push32(0x12535887u); f_1252b650();
  /* 12535887 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253588a push eax */
  push32((uint32_t)(EAX));
  /* 1253588b call 0x1252b4d0 */
  push32(0x12535890u); f_1252b4d0();
  /* 12535890 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535893 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535896 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1253589a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1253589d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125358a0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125358a3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125358a6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 125358aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125358ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125358b0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 125358b4 push eax */
  push32((uint32_t)(EAX));
  /* 125358b5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125358b8 push ecx */
  push32((uint32_t)(ECX));
  /* 125358b9 call 0x1252b650 */
  push32(0x125358beu); f_1252b650();
  /* 125358be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125358c1 push eax */
  push32((uint32_t)(EAX));
  /* 125358c2 call 0x1252b4d0 */
  push32(0x125358c7u); f_1252b4d0();
  /* 125358c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125358ca mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125358cd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 125358d1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125358d4 jmp 0x12535857 */
  goto L_12535857;
L_125358d6:;
  /* 125358d6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125358d9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125358dc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 125358e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125358e5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 125358eb push ecx */
  push32((uint32_t)(ECX));
  /* 125358ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125358ef push edx */
  push32((uint32_t)(EDX));
  /* 125358f0 call 0x1252b650 */
  push32(0x125358f5u); f_1252b650();
  /* 125358f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125358f8 push eax */
  push32((uint32_t)(EAX));
  /* 125358f9 call 0x1252b4d0 */
  push32(0x125358feu); f_1252b4d0();
  /* 125358fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535901 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535904 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12535908 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1253590b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1253590e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535911 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12535917 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253591a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12535920 push eax */
  push32((uint32_t)(EAX));
  /* 12535921 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535924 push ecx */
  push32((uint32_t)(ECX));
  /* 12535925 call 0x1252b650 */
  push32(0x1253592au); f_1252b650();
  /* 1253592a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253592d push eax */
  push32((uint32_t)(EAX));
  /* 1253592e call 0x1252b4d0 */
  push32(0x12535933u); f_1252b4d0();
  /* 12535933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535936 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535939 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1253593d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12535940 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12535943 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535946 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1253594c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253594f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12535955 push ecx */
  push32((uint32_t)(ECX));
  /* 12535956 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12535959 push edx */
  push32((uint32_t)(EDX));
  /* 1253595a call 0x1252b650 */
  push32(0x1253595fu); f_1252b650();
  /* 1253595f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535962 push eax */
  push32((uint32_t)(EAX));
  /* 12535963 call 0x1252b4d0 */
  push32(0x12535968u); f_1252b4d0();
  /* 12535968 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253596b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1253596e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12535972 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12535975 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12535978 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1253597b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12535981 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535984 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1253598a push eax */
  push32((uint32_t)(EAX));
  /* 1253598b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1253598e push ecx */
  push32((uint32_t)(ECX));
  /* 1253598f call 0x1252b650 */
  push32(0x12535994u); f_1252b650();
  /* 12535994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535997 push eax */
  push32((uint32_t)(EAX));
  /* 12535998 call 0x1252b4d0 */
  push32(0x1253599du); f_1252b4d0();
  /* 1253599d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125359a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125359a3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 125359a7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125359aa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125359ad mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125359b0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_125359b6:;
  /* 125359b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125359b9 pop esi */
  ESI = (pop32());
  /* 125359ba mov esp, ebp */
  ESP = (EBP);
  /* 125359bc pop ebp */
  EBP = (pop32());
  /* 125359bd ret  */
  ESPCHK(0x12535650u, _esp0);
  ESP += 4; return;
}

/* FUN_100159c0 @ 0x125359c0 (31 bytes, 15 insns) */
void f_125359c0(void) {
  FTRACE(0x125359c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125359c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125359c1 mov ebp, esp */
  EBP = (ESP);
  /* 125359c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125359c5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125359c8 push eax */
  push32((uint32_t)(EAX));
  /* 125359c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125359cc push ecx */
  push32((uint32_t)(ECX));
  /* 125359cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125359d0 push edx */
  push32((uint32_t)(EDX));
  /* 125359d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125359d4 push eax */
  push32((uint32_t)(EAX));
  /* 125359d5 call 0x125359e0 */
  push32(0x125359dau); f_125359e0();
  /* 125359da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125359dd pop ebp */
  EBP = (pop32());
  /* 125359de ret  */
  ESPCHK(0x125359c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100159e0 @ 0x125359e0 (394 bytes, 123 insns) */
void f_125359e0(void) {
  FTRACE(0x125359e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125359e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125359e1 mov ebp, esp */
  EBP = (ESP);
  /* 125359e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125359e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125359e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125359ec push 0x12554cd4 */
  push32((uint32_t)(0x12554cd4u));
  /* 125359f1 call dword ptr [0x125573ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573ac))), 0x125359f7u);
  /* 125359f7 cmp dword ptr [0x12554cc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554cc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125359fe je 0x12535a1e */
  if (C.zf) goto L_12535a1e;
  /* 12535a00 push 0x12554cd4 */
  push32((uint32_t)(0x12554cd4u));
  /* 12535a05 call dword ptr [0x1255739c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255739c))), 0x12535a0bu);
  /* 12535a0b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12535a0d call 0x1252c0a0 */
  push32(0x12535a12u); f_1252c0a0();
  /* 12535a12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535a15 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12535a1c jmp 0x12535a25 */
  goto L_12535a25;
L_12535a1e:;
  /* 12535a1e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12535a25:;
  /* 12535a25 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535a29 jne 0x12535a36 */
  if (!C.zf) goto L_12535a36;
  /* 12535a2b mov ecx, dword ptr [0x12553c98] */
  ECX = (r32((uint32_t)(0x12553c98)));
  /* 12535a31 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12535a34 jmp 0x12535a3c */
  goto L_12535a3c;
L_12535a36:;
  /* 12535a36 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535a39 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12535a3c:;
  /* 12535a3c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12535a3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12535a42:;
  /* 12535a42 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535a46 jbe 0x12535b33 */
  if ((C.cf||C.zf)) goto L_12535b33;
  /* 12535a4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535a4f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12535a51 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12535a54 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12535a58 je 0x12535a62 */
  if (C.zf) goto L_12535a62;
  /* 12535a5a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12535a5e je 0x12535a67 */
  if (C.zf) goto L_12535a67;
  /* 12535a60 jmp 0x12535ac1 */
  goto L_12535ac1;
L_12535a62:;
  /* 12535a62 jmp 0x12535b33 */
  goto L_12535b33;
L_12535a67:;
  /* 12535a67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535a6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535a6d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12535a70 mov dword ptr [0x12554cb0], 0 */
  w32((uint32_t)(0x12554cb0), (0x0u));
  /* 12535a7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535a7d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12535a80 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535a83 jne 0x12535a98 */
  if (!C.zf) goto L_12535a98;
  /* 12535a85 mov dword ptr [0x12554cb0], 1 */
  w32((uint32_t)(0x12554cb0), (0x1u));
  /* 12535a8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535a92 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535a95 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12535a98:;
  /* 12535a98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12535a9b push ecx */
  push32((uint32_t)(ECX));
  /* 12535a9c lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12535a9f push edx */
  push32((uint32_t)(EDX));
  /* 12535aa0 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12535aa3 push eax */
  push32((uint32_t)(EAX));
  /* 12535aa4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 12535aa8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535aab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12535aad push eax */
  push32((uint32_t)(EAX));
  /* 12535aae call 0x12535b70 */
  push32(0x12535ab3u); f_12535b70();
  /* 12535ab3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535ab6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535ab9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535abc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12535abf jmp 0x12535b2e */
  goto L_12535b2e;
L_12535ac1:;
  /* 12535ac1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535ac4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12535ac6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12535ac8 mov ecx, dword ptr [0x12552c98] */
  ECX = (r32((uint32_t)(0x12552c98)));
  /* 12535ace xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12535ad0 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12535ad4 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12535ada test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12535adc je 0x12535b09 */
  if (C.zf) goto L_12535b09;
  /* 12535ade cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535ae2 jbe 0x12535b09 */
  if ((C.cf||C.zf)) goto L_12535b09;
  /* 12535ae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535ae7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535aea mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12535aec mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12535aee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535af1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535af4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12535af7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535afa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535afd mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12535b00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535b03 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12535b06 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12535b09:;
  /* 12535b09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535b0c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535b0f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12535b11 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12535b13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535b16 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535b19 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12535b1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535b1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535b22 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12535b25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535b28 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12535b2b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12535b2e:;
  /* 12535b2e jmp 0x12535a42 */
  goto L_12535a42;
L_12535b33:;
  /* 12535b33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535b37 je 0x12535b45 */
  if (C.zf) goto L_12535b45;
  /* 12535b39 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12535b3b call 0x1252c140 */
  push32(0x12535b40u); f_1252c140();
  /* 12535b40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535b43 jmp 0x12535b50 */
  goto L_12535b50;
L_12535b45:;
  /* 12535b45 push 0x12554cd4 */
  push32((uint32_t)(0x12554cd4u));
  /* 12535b4a call dword ptr [0x1255739c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255739c))), 0x12535b50u);
L_12535b50:;
  /* 12535b50 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535b54 jbe 0x12535b64 */
  if ((C.cf||C.zf)) goto L_12535b64;
  /* 12535b56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12535b59 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12535b5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535b5f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12535b62 jmp 0x12535b66 */
  goto L_12535b66;
L_12535b64:;
  /* 12535b64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12535b66:;
  /* 12535b66 mov esp, ebp */
  ESP = (EBP);
  /* 12535b68 pop ebp */
  EBP = (pop32());
  /* 12535b69 ret  */
  ESPCHK(0x125359e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b70 @ 0x12535b70 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12535b70(void) {
  FTRACE(0x12535b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12535b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12535b71 mov ebp, esp */
  EBP = (ESP);
  /* 12535b73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12535b76 push esi */
  push32((uint32_t)(ESI));
  /* 12535b77 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12535b7b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12535b7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535b81 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12535b84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12535b87 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535b8b ja 0x125360d8 */
  if ((!C.cf&&!C.zf)) goto L_125360d8;
  /* 12535b91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12535b94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12535b96 mov dl, byte ptr [eax + 0x12536139] */
  DL = (r8((uint32_t)(EAX + 0x12536139)));
  /* 12535b9c jmp dword ptr [edx*4 + 0x125360dd] */
  switch (EDX) {
    case 0: goto L_125360b6;
    case 1: goto L_12535bc5;
    case 2: goto L_12535c0b;
    case 3: goto L_12535d58;
    case 4: goto L_12535d80;
    case 5: goto L_12535e1f;
    case 6: goto L_12535e8b;
    case 7: goto L_12535eb4;
    case 8: goto L_12535ef5;
    case 9: goto L_12535fd7;
    case 10: goto L_1253603e;
    case 11: goto L_1253608b;
    case 12: goto L_12535ba3;
    case 13: goto L_12535be8;
    case 14: goto L_12535c2e;
    case 15: goto L_12535d2e;
    case 16: goto L_12535dc5;
    case 17: goto L_12535df2;
    case 18: goto L_12535e47;
    case 19: goto L_12535ecb;
    case 20: goto L_12535f79;
    case 21: goto L_12536008;
    case 22: goto L_125360d8;
    default: x86_unimpl("switch@0x12535b9c out of table"); return;
  }
L_12535ba3:;
  /* 12535ba3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535ba6 push ecx */
  push32((uint32_t)(ECX));
  /* 12535ba7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535baa push edx */
  push32((uint32_t)(EDX));
  /* 12535bab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535bae mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12535bb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535bb4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12535bb7 push eax */
  push32((uint32_t)(EAX));
  /* 12535bb8 call 0x12536190 */
  push32(0x12535bbdu); f_12536190();
  /* 12535bbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535bc0 jmp 0x125360d8 */
  goto L_125360d8;
L_12535bc5:;
  /* 12535bc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 12535bc9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535bcc push edx */
  push32((uint32_t)(EDX));
  /* 12535bcd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535bd0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12535bd3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535bd6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12535bda push eax */
  push32((uint32_t)(EAX));
  /* 12535bdb call 0x12536190 */
  push32(0x12535be0u); f_12536190();
  /* 12535be0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535be3 jmp 0x125360d8 */
  goto L_125360d8;
L_12535be8:;
  /* 12535be8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535beb push ecx */
  push32((uint32_t)(ECX));
  /* 12535bec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535bef push edx */
  push32((uint32_t)(EDX));
  /* 12535bf0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535bf3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12535bf6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535bf9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12535bfd push eax */
  push32((uint32_t)(EAX));
  /* 12535bfe call 0x12536190 */
  push32(0x12535c03u); f_12536190();
  /* 12535c03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535c06 jmp 0x125360d8 */
  goto L_125360d8;
L_12535c0b:;
  /* 12535c0b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535c0e push ecx */
  push32((uint32_t)(ECX));
  /* 12535c0f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535c12 push edx */
  push32((uint32_t)(EDX));
  /* 12535c13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535c16 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12535c19 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535c1c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12535c20 push eax */
  push32((uint32_t)(EAX));
  /* 12535c21 call 0x12536190 */
  push32(0x12535c26u); f_12536190();
  /* 12535c26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535c29 jmp 0x125360d8 */
  goto L_125360d8;
L_12535c2e:;
  /* 12535c2e cmp dword ptr [0x12554cb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554cb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535c35 je 0x12535cb6 */
  if (C.zf) goto L_12535cb6;
  /* 12535c37 mov dword ptr [0x12554cb0], 0 */
  w32((uint32_t)(0x12554cb0), (0x0u));
  /* 12535c41 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535c44 push ecx */
  push32((uint32_t)(ECX));
  /* 12535c45 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535c48 push edx */
  push32((uint32_t)(EDX));
  /* 12535c49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535c4c push eax */
  push32((uint32_t)(EAX));
  /* 12535c4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535c50 push ecx */
  push32((uint32_t)(ECX));
  /* 12535c51 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535c54 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12535c5a push eax */
  push32((uint32_t)(EAX));
  /* 12535c5b call 0x12536340 */
  push32(0x12535c60u); f_12536340();
  /* 12535c60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535c63 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535c66 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535c69 jne 0x12535c70 */
  if (!C.zf) goto L_12535c70;
  /* 12535c6b jmp 0x125360d8 */
  goto L_125360d8;
L_12535c70:;
  /* 12535c70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535c73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12535c75 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12535c78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535c7b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12535c7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535c80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535c83 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12535c85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535c88 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12535c8a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12535c8d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535c90 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12535c92 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535c95 push ecx */
  push32((uint32_t)(ECX));
  /* 12535c96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535c99 push edx */
  push32((uint32_t)(EDX));
  /* 12535c9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535c9d push eax */
  push32((uint32_t)(EAX));
  /* 12535c9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535ca1 push ecx */
  push32((uint32_t)(ECX));
  /* 12535ca2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535ca5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12535cab push eax */
  push32((uint32_t)(EAX));
  /* 12535cac call 0x12536340 */
  push32(0x12535cb1u); f_12536340();
  /* 12535cb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535cb4 jmp 0x12535d29 */
  goto L_12535d29;
L_12535cb6:;
  /* 12535cb6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535cb9 push ecx */
  push32((uint32_t)(ECX));
  /* 12535cba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535cbd push edx */
  push32((uint32_t)(EDX));
  /* 12535cbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535cc1 push eax */
  push32((uint32_t)(EAX));
  /* 12535cc2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12535cc6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535cc9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12535ccf push eax */
  push32((uint32_t)(EAX));
  /* 12535cd0 call 0x12536340 */
  push32(0x12535cd5u); f_12536340();
  /* 12535cd5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535cd8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535cdb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535cde jne 0x12535ce5 */
  if (!C.zf) goto L_12535ce5;
  /* 12535ce0 jmp 0x125360d8 */
  goto L_125360d8;
L_12535ce5:;
  /* 12535ce5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535ce8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12535cea mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12535ced mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535cf0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12535cf2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535cf5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535cf8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12535cfa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535cfd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12535cff sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12535d02 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535d05 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12535d07 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535d0a push ecx */
  push32((uint32_t)(ECX));
  /* 12535d0b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535d0e push edx */
  push32((uint32_t)(EDX));
  /* 12535d0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535d12 push eax */
  push32((uint32_t)(EAX));
  /* 12535d13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535d16 push ecx */
  push32((uint32_t)(ECX));
  /* 12535d17 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535d1a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12535d20 push eax */
  push32((uint32_t)(EAX));
  /* 12535d21 call 0x12536340 */
  push32(0x12535d26u); f_12536340();
  /* 12535d26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12535d29:;
  /* 12535d29 jmp 0x125360d8 */
  goto L_125360d8;
L_12535d2e:;
  /* 12535d2e mov ecx, dword ptr [0x12554cb0] */
  ECX = (r32((uint32_t)(0x12554cb0)));
  /* 12535d34 mov dword ptr [0x12554cc0], ecx */
  w32((uint32_t)(0x12554cc0), (ECX));
  /* 12535d3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535d3d push edx */
  push32((uint32_t)(EDX));
  /* 12535d3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535d41 push eax */
  push32((uint32_t)(EAX));
  /* 12535d42 push 2 */
  push32((uint32_t)(0x2u));
  /* 12535d44 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535d47 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12535d4a push edx */
  push32((uint32_t)(EDX));
  /* 12535d4b call 0x125361e0 */
  push32(0x12535d50u); f_125361e0();
  /* 12535d50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535d53 jmp 0x125360d8 */
  goto L_125360d8;
L_12535d58:;
  /* 12535d58 mov eax, dword ptr [0x12554cb0] */
  EAX = (r32((uint32_t)(0x12554cb0)));
  /* 12535d5d mov dword ptr [0x12554cc0], eax */
  w32((uint32_t)(0x12554cc0), (EAX));
  /* 12535d62 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535d65 push ecx */
  push32((uint32_t)(ECX));
  /* 12535d66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535d69 push edx */
  push32((uint32_t)(EDX));
  /* 12535d6a push 2 */
  push32((uint32_t)(0x2u));
  /* 12535d6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535d6f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12535d72 push ecx */
  push32((uint32_t)(ECX));
  /* 12535d73 call 0x125361e0 */
  push32(0x12535d78u); f_125361e0();
  /* 12535d78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535d7b jmp 0x125360d8 */
  goto L_125360d8;
L_12535d80:;
  /* 12535d80 mov edx, dword ptr [0x12554cb0] */
  EDX = (r32((uint32_t)(0x12554cb0)));
  /* 12535d86 mov dword ptr [0x12554cc0], edx */
  w32((uint32_t)(0x12554cc0), (EDX));
  /* 12535d8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535d8f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12535d92 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12535d93 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12535d98 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12535d9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12535d9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535da1 jne 0x12535daa */
  if (!C.zf) goto L_12535daa;
  /* 12535da3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12535daa:;
  /* 12535daa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535dad push edx */
  push32((uint32_t)(EDX));
  /* 12535dae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535db1 push eax */
  push32((uint32_t)(EAX));
  /* 12535db2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12535db4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12535db7 push ecx */
  push32((uint32_t)(ECX));
  /* 12535db8 call 0x125361e0 */
  push32(0x12535dbdu); f_125361e0();
  /* 12535dbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535dc0 jmp 0x125360d8 */
  goto L_125360d8;
L_12535dc5:;
  /* 12535dc5 mov edx, dword ptr [0x12554cb0] */
  EDX = (r32((uint32_t)(0x12554cb0)));
  /* 12535dcb mov dword ptr [0x12554cc0], edx */
  w32((uint32_t)(0x12554cc0), (EDX));
  /* 12535dd1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535dd4 push eax */
  push32((uint32_t)(EAX));
  /* 12535dd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535dd8 push ecx */
  push32((uint32_t)(ECX));
  /* 12535dd9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12535ddb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535dde mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12535de1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535de4 push eax */
  push32((uint32_t)(EAX));
  /* 12535de5 call 0x125361e0 */
  push32(0x12535deau); f_125361e0();
  /* 12535dea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535ded jmp 0x125360d8 */
  goto L_125360d8;
L_12535df2:;
  /* 12535df2 mov ecx, dword ptr [0x12554cb0] */
  ECX = (r32((uint32_t)(0x12554cb0)));
  /* 12535df8 mov dword ptr [0x12554cc0], ecx */
  w32((uint32_t)(0x12554cc0), (ECX));
  /* 12535dfe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535e01 push edx */
  push32((uint32_t)(EDX));
  /* 12535e02 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535e05 push eax */
  push32((uint32_t)(EAX));
  /* 12535e06 push 2 */
  push32((uint32_t)(0x2u));
  /* 12535e08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535e0b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12535e0e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535e11 push edx */
  push32((uint32_t)(EDX));
  /* 12535e12 call 0x125361e0 */
  push32(0x12535e17u); f_125361e0();
  /* 12535e17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535e1a jmp 0x125360d8 */
  goto L_125360d8;
L_12535e1f:;
  /* 12535e1f mov eax, dword ptr [0x12554cb0] */
  EAX = (r32((uint32_t)(0x12554cb0)));
  /* 12535e24 mov dword ptr [0x12554cc0], eax */
  w32((uint32_t)(0x12554cc0), (EAX));
  /* 12535e29 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535e2c push ecx */
  push32((uint32_t)(ECX));
  /* 12535e2d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535e30 push edx */
  push32((uint32_t)(EDX));
  /* 12535e31 push 2 */
  push32((uint32_t)(0x2u));
  /* 12535e33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535e36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12535e39 push ecx */
  push32((uint32_t)(ECX));
  /* 12535e3a call 0x125361e0 */
  push32(0x12535e3fu); f_125361e0();
  /* 12535e3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535e42 jmp 0x125360d8 */
  goto L_125360d8;
L_12535e47:;
  /* 12535e47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535e4a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535e4e jg 0x12535e6c */
  if ((!C.zf&&C.sf==C.of)) goto L_12535e6c;
  /* 12535e50 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535e53 push eax */
  push32((uint32_t)(EAX));
  /* 12535e54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535e57 push ecx */
  push32((uint32_t)(ECX));
  /* 12535e58 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535e5b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12535e61 push eax */
  push32((uint32_t)(EAX));
  /* 12535e62 call 0x12536190 */
  push32(0x12535e67u); f_12536190();
  /* 12535e67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535e6a jmp 0x12535e86 */
  goto L_12535e86;
L_12535e6c:;
  /* 12535e6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535e6f push ecx */
  push32((uint32_t)(ECX));
  /* 12535e70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535e73 push edx */
  push32((uint32_t)(EDX));
  /* 12535e74 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535e77 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12535e7d push ecx */
  push32((uint32_t)(ECX));
  /* 12535e7e call 0x12536190 */
  push32(0x12535e83u); f_12536190();
  /* 12535e83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12535e86:;
  /* 12535e86 jmp 0x125360d8 */
  goto L_125360d8;
L_12535e8b:;
  /* 12535e8b mov edx, dword ptr [0x12554cb0] */
  EDX = (r32((uint32_t)(0x12554cb0)));
  /* 12535e91 mov dword ptr [0x12554cc0], edx */
  w32((uint32_t)(0x12554cc0), (EDX));
  /* 12535e97 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535e9a push eax */
  push32((uint32_t)(EAX));
  /* 12535e9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535e9e push ecx */
  push32((uint32_t)(ECX));
  /* 12535e9f push 2 */
  push32((uint32_t)(0x2u));
  /* 12535ea1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535ea4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12535ea6 push eax */
  push32((uint32_t)(EAX));
  /* 12535ea7 call 0x125361e0 */
  push32(0x12535eacu); f_125361e0();
  /* 12535eac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535eaf jmp 0x125360d8 */
  goto L_125360d8;
L_12535eb4:;
  /* 12535eb4 mov ecx, dword ptr [0x12554cb0] */
  ECX = (r32((uint32_t)(0x12554cb0)));
  /* 12535eba mov dword ptr [0x12554cc0], ecx */
  w32((uint32_t)(0x12554cc0), (ECX));
  /* 12535ec0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535ec3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12535ec6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12535ec9 jmp 0x12535f1d */
  goto L_12535f1d;
L_12535ecb:;
  /* 12535ecb mov ecx, dword ptr [0x12554cb0] */
  ECX = (r32((uint32_t)(0x12554cb0)));
  /* 12535ed1 mov dword ptr [0x12554cc0], ecx */
  w32((uint32_t)(0x12554cc0), (ECX));
  /* 12535ed7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535eda push edx */
  push32((uint32_t)(EDX));
  /* 12535edb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535ede push eax */
  push32((uint32_t)(EAX));
  /* 12535edf push 1 */
  push32((uint32_t)(0x1u));
  /* 12535ee1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535ee4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12535ee7 push edx */
  push32((uint32_t)(EDX));
  /* 12535ee8 call 0x125361e0 */
  push32(0x12535eedu); f_125361e0();
  /* 12535eed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535ef0 jmp 0x125360d8 */
  goto L_125360d8;
L_12535ef5:;
  /* 12535ef5 mov eax, dword ptr [0x12554cb0] */
  EAX = (r32((uint32_t)(0x12554cb0)));
  /* 12535efa mov dword ptr [0x12554cc0], eax */
  w32((uint32_t)(0x12554cc0), (EAX));
  /* 12535eff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535f02 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535f06 jne 0x12535f11 */
  if (!C.zf) goto L_12535f11;
  /* 12535f08 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12535f0f jmp 0x12535f1d */
  goto L_12535f1d;
L_12535f11:;
  /* 12535f11 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535f14 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12535f17 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12535f1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12535f1d:;
  /* 12535f1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535f20 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12535f23 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535f26 jge 0x12535f31 */
  if ((C.sf==C.of)) goto L_12535f31;
  /* 12535f28 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12535f2f jmp 0x12535f5e */
  goto L_12535f5e;
L_12535f31:;
  /* 12535f31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535f34 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12535f37 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12535f38 mov ecx, 7 */
  ECX = (0x7u);
  /* 12535f3d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12535f3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12535f42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535f45 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12535f48 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12535f49 mov ecx, 7 */
  ECX = (0x7u);
  /* 12535f4e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12535f50 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535f53 jl 0x12535f5e */
  if ((C.sf!=C.of)) goto L_12535f5e;
  /* 12535f55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12535f58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12535f5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12535f5e:;
  /* 12535f5e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535f61 push eax */
  push32((uint32_t)(EAX));
  /* 12535f62 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535f65 push ecx */
  push32((uint32_t)(ECX));
  /* 12535f66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12535f68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12535f6b push edx */
  push32((uint32_t)(EDX));
  /* 12535f6c call 0x125361e0 */
  push32(0x12535f71u); f_125361e0();
  /* 12535f71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535f74 jmp 0x125360d8 */
  goto L_125360d8;
L_12535f79:;
  /* 12535f79 cmp dword ptr [0x12554cb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554cb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12535f80 je 0x12535fb0 */
  if (C.zf) goto L_12535fb0;
  /* 12535f82 mov dword ptr [0x12554cb0], 0 */
  w32((uint32_t)(0x12554cb0), (0x0u));
  /* 12535f8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535f8f push eax */
  push32((uint32_t)(EAX));
  /* 12535f90 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12535f94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535f97 push edx */
  push32((uint32_t)(EDX));
  /* 12535f98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535f9b push eax */
  push32((uint32_t)(EAX));
  /* 12535f9c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535f9f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12535fa5 push edx */
  push32((uint32_t)(EDX));
  /* 12535fa6 call 0x12536340 */
  push32(0x12535fabu); f_12536340();
  /* 12535fab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12535fae jmp 0x12535fd2 */
  goto L_12535fd2;
L_12535fb0:;
  /* 12535fb0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535fb3 push eax */
  push32((uint32_t)(EAX));
  /* 12535fb4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535fb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12535fb8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535fbb push edx */
  push32((uint32_t)(EDX));
  /* 12535fbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535fbf push eax */
  push32((uint32_t)(EAX));
  /* 12535fc0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535fc3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12535fc9 push edx */
  push32((uint32_t)(EDX));
  /* 12535fca call 0x12536340 */
  push32(0x12535fcfu); f_12536340();
  /* 12535fcf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12535fd2:;
  /* 12535fd2 jmp 0x125360d8 */
  goto L_125360d8;
L_12535fd7:;
  /* 12535fd7 mov dword ptr [0x12554cb0], 0 */
  w32((uint32_t)(0x12554cb0), (0x0u));
  /* 12535fe1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535fe4 push eax */
  push32((uint32_t)(EAX));
  /* 12535fe5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12535fe8 push ecx */
  push32((uint32_t)(ECX));
  /* 12535fe9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12535fec push edx */
  push32((uint32_t)(EDX));
  /* 12535fed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12535ff0 push eax */
  push32((uint32_t)(EAX));
  /* 12535ff1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12535ff4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12535ffa push edx */
  push32((uint32_t)(EDX));
  /* 12535ffb call 0x12536340 */
  push32(0x12536000u); f_12536340();
  /* 12536000 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536003 jmp 0x125360d8 */
  goto L_125360d8;
L_12536008:;
  /* 12536008 mov eax, dword ptr [0x12554cb0] */
  EAX = (r32((uint32_t)(0x12554cb0)));
  /* 1253600d mov dword ptr [0x12554cc0], eax */
  w32((uint32_t)(0x12554cc0), (EAX));
  /* 12536012 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12536015 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12536018 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12536019 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1253601e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12536020 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12536023 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12536026 push edx */
  push32((uint32_t)(EDX));
  /* 12536027 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1253602a push eax */
  push32((uint32_t)(EAX));
  /* 1253602b push 2 */
  push32((uint32_t)(0x2u));
  /* 1253602d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12536030 push ecx */
  push32((uint32_t)(ECX));
  /* 12536031 call 0x125361e0 */
  push32(0x12536036u); f_125361e0();
  /* 12536036 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536039 jmp 0x125360d8 */
  goto L_125360d8;
L_1253603e:;
  /* 1253603e mov edx, dword ptr [0x12554cb0] */
  EDX = (r32((uint32_t)(0x12554cb0)));
  /* 12536044 mov dword ptr [0x12554cc0], edx */
  w32((uint32_t)(0x12554cc0), (EDX));
  /* 1253604a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253604d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12536050 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12536051 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12536056 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12536058 mov ecx, eax */
  ECX = (EAX);
  /* 1253605a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253605d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12536060 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12536063 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12536066 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12536067 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1253606c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1253606e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536070 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12536073 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12536076 push eax */
  push32((uint32_t)(EAX));
  /* 12536077 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1253607a push ecx */
  push32((uint32_t)(ECX));
  /* 1253607b push 4 */
  push32((uint32_t)(0x4u));
  /* 1253607d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12536080 push edx */
  push32((uint32_t)(EDX));
  /* 12536081 call 0x125361e0 */
  push32(0x12536086u); f_125361e0();
  /* 12536086 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536089 jmp 0x125360d8 */
  goto L_125360d8;
L_1253608b:;
  /* 1253608b call 0x125371a0 */
  push32(0x12536090u); f_125371a0();
  /* 12536090 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12536093 push eax */
  push32((uint32_t)(EAX));
  /* 12536094 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536097 push ecx */
  push32((uint32_t)(ECX));
  /* 12536098 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253609b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253609d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125360a1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 125360a4 mov ecx, dword ptr [eax*4 + 0x12553e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12553e1c)));
  /* 125360ab push ecx */
  push32((uint32_t)(ECX));
  /* 125360ac call 0x12536190 */
  push32(0x125360b1u); f_12536190();
  /* 125360b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125360b4 jmp 0x125360d8 */
  goto L_125360d8;
L_125360b6:;
  /* 125360b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125360b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125360bb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 125360be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125360c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125360c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125360c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125360c9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125360cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125360ce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125360d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125360d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125360d6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125360d8:;
  /* 125360d8 pop esi */
  ESI = (pop32());
  /* 125360d9 mov esp, ebp */
  ESP = (EBP);
  /* 125360db pop ebp */
  EBP = (pop32());
  /* 125360dc ret  */
  ESPCHK(0x12535b70u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12536190 (72 bytes, 30 insns) */
void f_12536190(void) {
  FTRACE(0x12536190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12536190 push ebp */
  push32((uint32_t)(EBP));
  /* 12536191 mov ebp, esp */
  EBP = (ESP);
L_12536193:;
  /* 12536193 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536196 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536199 je 0x125361d6 */
  if (C.zf) goto L_125361d6;
  /* 1253619b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253619e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125361a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125361a3 je 0x125361d6 */
  if (C.zf) goto L_125361d6;
  /* 125361a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125361a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125361aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125361ad mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125361af mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125361b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125361b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125361b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125361b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125361bc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125361be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125361c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125361c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 125361c7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125361ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125361cc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125361cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125361d2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125361d4 jmp 0x12536193 */
  goto L_12536193;
L_125361d6:;
  /* 125361d6 pop ebp */
  EBP = (pop32());
  /* 125361d7 ret  */
  ESPCHK(0x12536190u, _esp0);
  ESP += 4; return;
}

/* FUN_100161e0 @ 0x125361e0 (173 bytes, 64 insns) */
void f_125361e0(void) {
  FTRACE(0x125361e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125361e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125361e1 mov ebp, esp */
  EBP = (ESP);
  /* 125361e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125361e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125361eb cmp dword ptr [0x12554cc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554cc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125361f2 je 0x1253620a */
  if (C.zf) goto L_1253620a;
  /* 125361f4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125361f7 push eax */
  push32((uint32_t)(EAX));
  /* 125361f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125361fb push ecx */
  push32((uint32_t)(ECX));
  /* 125361fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125361ff push edx */
  push32((uint32_t)(EDX));
  /* 12536200 call 0x12536290 */
  push32(0x12536205u); f_12536290();
  /* 12536205 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536208 jmp 0x12536289 */
  goto L_12536289;
L_1253620a:;
  /* 1253620a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1253620d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12536210 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536212 jae 0x12536280 */
  if (!C.cf) goto L_12536280;
  /* 12536214 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12536217 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253621a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1253621d jmp 0x12536228 */
  goto L_12536228;
L_1253621f:;
  /* 1253621f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12536222 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12536225 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12536228:;
  /* 12536228 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253622b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253622e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12536230 je 0x12536264 */
  if (C.zf) goto L_12536264;
  /* 12536232 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536235 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12536236 mov ecx, 0xa */
  ECX = (0xau);
  /* 1253623b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1253623d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536240 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536243 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12536245 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12536248 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1253624b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253624e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1253624f mov ecx, 0xa */
  ECX = (0xau);
  /* 12536254 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12536256 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12536259 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253625c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253625f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12536262 jmp 0x1253621f */
  goto L_1253621f;
L_12536264:;
  /* 12536264 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536267 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12536269 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253626c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1253626f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12536271 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12536274 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12536276 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12536279 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1253627c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1253627e jmp 0x12536289 */
  goto L_12536289;
L_12536280:;
  /* 12536280 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12536283 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12536289:;
  /* 12536289 mov esp, ebp */
  ESP = (EBP);
  /* 1253628b pop ebp */
  EBP = (pop32());
  /* 1253628c ret  */
  ESPCHK(0x125361e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12536290 (172 bytes, 65 insns) */
void f_12536290(void) {
  FTRACE(0x12536290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12536290 push ebp */
  push32((uint32_t)(EBP));
  /* 12536291 mov ebp, esp */
  EBP = (ESP);
  /* 12536293 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12536296 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12536299 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1253629b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1253629e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125362a1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125362a4 jbe 0x125362eb */
  if ((C.cf||C.zf)) goto L_125362eb;
L_125362a6:;
  /* 125362a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125362a9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125362aa mov ecx, 0xa */
  ECX = (0xau);
  /* 125362af idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125362b1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125362b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125362b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125362b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125362bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125362bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125362c2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125362c5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125362c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125362ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125362cd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125362cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125362d2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125362d3 mov ecx, 0xa */
  ECX = (0xau);
  /* 125362d8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125362da mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125362dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125362e1 jle 0x125362eb */
  if ((C.zf||C.sf!=C.of)) goto L_125362eb;
  /* 125362e3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125362e6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125362e9 ja 0x125362a6 */
  if ((!C.cf&&!C.zf)) goto L_125362a6;
L_125362eb:;
  /* 125362eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125362ee mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125362f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125362f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125362f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125362f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 125362fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125362fe sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12536301 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12536304:;
  /* 12536304 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12536307 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12536309 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1253630c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253630f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12536312 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12536314 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12536316 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12536319 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253631c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1253631f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12536322 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12536325 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12536327 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1253632a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253632d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12536330 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12536333 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536336 jb 0x12536304 */
  if (C.cf) goto L_12536304;
  /* 12536338 mov esp, ebp */
  ESP = (EBP);
  /* 1253633a pop ebp */
  EBP = (pop32());
  /* 1253633b ret  */
  ESPCHK(0x12536290u, _esp0);
  ESP += 4; return;
}

/* FUN_10016340 @ 0x12536340 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12536340(void) {
  FTRACE(0x12536340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12536340 push ebp */
  push32((uint32_t)(EBP));
  /* 12536341 mov ebp, esp */
  EBP = (ESP);
  /* 12536343 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12536346:;
  /* 12536346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536349 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1253634c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1253634e je 0x125367bc */
  if (C.zf) goto L_125367bc;
  /* 12536354 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12536357 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253635a je 0x125367bc */
  if (C.zf) goto L_125367bc;
  /* 12536360 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12536364 mov dword ptr [0x12554cc0], 0 */
  w32((uint32_t)(0x12554cc0), (0x0u));
  /* 1253636e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12536375 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536378 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1253637b jmp 0x12536386 */
  goto L_12536386;
L_1253637d:;
  /* 1253637d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12536380 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536383 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12536386:;
  /* 12536386 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12536389 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1253638c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253638f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12536392 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12536395 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536398 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1253639b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253639d jne 0x125363a1 */
  if (!C.zf) goto L_125363a1;
  /* 1253639f jmp 0x1253637d */
  goto L_1253637d;
L_125363a1:;
  /* 125363a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125363a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125363a7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125363aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125363ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125363b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125363b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125363b6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125363b9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125363bc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125363c0 ja 0x12536710 */
  if ((!C.cf&&!C.zf)) goto L_12536710;
  /* 125363c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125363c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125363cb mov al, byte ptr [ecx + 0x125367ec] */
  AL = (r8((uint32_t)(ECX + 0x125367ec)));
  /* 125363d1 jmp dword ptr [eax*4 + 0x125367c0] */
  switch (EAX) {
    case 0: goto L_1253662f;
    case 1: goto L_12536513;
    case 2: goto L_1253649e;
    case 3: goto L_125363d8;
    case 4: goto L_12536416;
    case 5: goto L_12536477;
    case 6: goto L_125364c5;
    case 7: goto L_125364ec;
    case 8: goto L_1253655a;
    case 9: goto L_12536454;
    case 10: goto L_12536710;
    default: x86_unimpl("switch@0x125363d1 out of table"); return;
  }
L_125363d8:;
  /* 125363d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125363db mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125363de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125363e1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125363e4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125363e7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125363eb ja 0x12536411 */
  if ((!C.cf&&!C.zf)) goto L_12536411;
  /* 125363ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125363f0 jmp dword ptr [ecx*4 + 0x1253683f] */
  switch (ECX) {
    case 0: goto L_125363f7;
    case 1: goto L_12536401;
    case 2: goto L_12536407;
    case 3: goto L_1253640d;
    case 4: goto L_12536435;
    case 5: goto L_1253643f;
    case 6: goto L_12536445;
    case 7: goto L_1253644b;
    default: x86_unimpl("switch@0x125363f0 out of table"); return;
  }
L_125363f7:;
  /* 125363f7 mov dword ptr [0x12554cc0], 1 */
  w32((uint32_t)(0x12554cc0), (0x1u));
L_12536401:;
  /* 12536401 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12536405 jmp 0x12536411 */
  goto L_12536411;
L_12536407:;
  /* 12536407 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1253640b jmp 0x12536411 */
  goto L_12536411;
L_1253640d:;
  /* 1253640d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12536411:;
  /* 12536411 jmp 0x12536710 */
  goto L_12536710;
L_12536416:;
  /* 12536416 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12536419 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1253641c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1253641f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12536422 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12536425 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536429 ja 0x1253644f */
  if ((!C.cf&&!C.zf)) goto L_1253644f;
  /* 1253642b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1253642e jmp dword ptr [ecx*4 + 0x1253684f] */
  switch (ECX) {
    case 0: goto L_12536435;
    case 1: goto L_1253643f;
    case 2: goto L_12536445;
    case 3: goto L_1253644b;
    default: x86_unimpl("switch@0x1253642e out of table"); return;
  }
L_12536435:;
  /* 12536435 mov dword ptr [0x12554cc0], 1 */
  w32((uint32_t)(0x12554cc0), (0x1u));
L_1253643f:;
  /* 1253643f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12536443 jmp 0x1253644f */
  goto L_1253644f;
L_12536445:;
  /* 12536445 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12536449 jmp 0x1253644f */
  goto L_1253644f;
L_1253644b:;
  /* 1253644b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1253644f:;
  /* 1253644f jmp 0x12536710 */
  goto L_12536710;
L_12536454:;
  /* 12536454 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12536457 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1253645a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253645e je 0x12536468 */
  if (C.zf) goto L_12536468;
  /* 12536460 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536464 je 0x1253646e */
  if (C.zf) goto L_1253646e;
  /* 12536466 jmp 0x12536472 */
  goto L_12536472;
L_12536468:;
  /* 12536468 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1253646c jmp 0x12536472 */
  goto L_12536472;
L_1253646e:;
  /* 1253646e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12536472:;
  /* 12536472 jmp 0x12536710 */
  goto L_12536710;
L_12536477:;
  /* 12536477 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253647a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1253647d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536481 je 0x1253648b */
  if (C.zf) goto L_1253648b;
  /* 12536483 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536487 je 0x12536495 */
  if (C.zf) goto L_12536495;
  /* 12536489 jmp 0x12536499 */
  goto L_12536499;
L_1253648b:;
  /* 1253648b mov dword ptr [0x12554cc0], 1 */
  w32((uint32_t)(0x12554cc0), (0x1u));
L_12536495:;
  /* 12536495 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12536499:;
  /* 12536499 jmp 0x12536710 */
  goto L_12536710;
L_1253649e:;
  /* 1253649e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125364a1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 125364a4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125364a8 je 0x125364b2 */
  if (C.zf) goto L_125364b2;
  /* 125364aa cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125364ae je 0x125364bc */
  if (C.zf) goto L_125364bc;
  /* 125364b0 jmp 0x125364c0 */
  goto L_125364c0;
L_125364b2:;
  /* 125364b2 mov dword ptr [0x12554cc0], 1 */
  w32((uint32_t)(0x12554cc0), (0x1u));
L_125364bc:;
  /* 125364bc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_125364c0:;
  /* 125364c0 jmp 0x12536710 */
  goto L_12536710;
L_125364c5:;
  /* 125364c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125364c8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 125364cb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125364cf je 0x125364d9 */
  if (C.zf) goto L_125364d9;
  /* 125364d1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125364d5 je 0x125364e3 */
  if (C.zf) goto L_125364e3;
  /* 125364d7 jmp 0x125364e7 */
  goto L_125364e7;
L_125364d9:;
  /* 125364d9 mov dword ptr [0x12554cc0], 1 */
  w32((uint32_t)(0x12554cc0), (0x1u));
L_125364e3:;
  /* 125364e3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_125364e7:;
  /* 125364e7 jmp 0x12536710 */
  goto L_12536710;
L_125364ec:;
  /* 125364ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125364ef mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 125364f2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125364f6 je 0x12536500 */
  if (C.zf) goto L_12536500;
  /* 125364f8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125364fc je 0x1253650a */
  if (C.zf) goto L_1253650a;
  /* 125364fe jmp 0x1253650e */
  goto L_1253650e;
L_12536500:;
  /* 12536500 mov dword ptr [0x12554cc0], 1 */
  w32((uint32_t)(0x12554cc0), (0x1u));
L_1253650a:;
  /* 1253650a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1253650e:;
  /* 1253650e jmp 0x12536710 */
  goto L_12536710;
L_12536513:;
  /* 12536513 push 0x12550e54 */
  push32((uint32_t)(0x12550e54u));
  /* 12536518 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253651b push ecx */
  push32((uint32_t)(ECX));
  /* 1253651c call 0x12536d70 */
  push32(0x12536521u); f_12536d70();
  /* 12536521 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12536526 jne 0x12536533 */
  if (!C.zf) goto L_12536533;
  /* 12536528 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253652b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253652e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12536531 jmp 0x12536551 */
  goto L_12536551;
L_12536533:;
  /* 12536533 push 0x12550e50 */
  push32((uint32_t)(0x12550e50u));
  /* 12536538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253653b push eax */
  push32((uint32_t)(EAX));
  /* 1253653c call 0x12536d70 */
  push32(0x12536541u); f_12536d70();
  /* 12536541 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12536546 jne 0x12536551 */
  if (!C.zf) goto L_12536551;
  /* 12536548 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253654b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253654e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12536551:;
  /* 12536551 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12536555 jmp 0x12536710 */
  goto L_12536710;
L_1253655a:;
  /* 1253655a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253655d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536561 jg 0x12536571 */
  if ((!C.zf&&C.sf==C.of)) goto L_12536571;
  /* 12536563 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12536566 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1253656c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1253656f jmp 0x1253657d */
  goto L_1253657d;
L_12536571:;
  /* 12536571 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12536574 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1253657a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1253657d:;
  /* 1253657d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536581 jle 0x12536624 */
  if ((C.zf||C.sf!=C.of)) goto L_12536624;
  /* 12536587 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1253658a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253658d jbe 0x12536624 */
  if ((C.cf||C.zf)) goto L_12536624;
  /* 12536593 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12536596 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536598 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1253659a mov ecx, dword ptr [0x12552c98] */
  ECX = (r32((uint32_t)(0x12552c98)));
  /* 125365a0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125365a2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125365a6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 125365ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125365ae je 0x125365e7 */
  if (C.zf) goto L_125365e7;
  /* 125365b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125365b3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125365b6 jbe 0x125365e7 */
  if ((C.cf||C.zf)) goto L_125365e7;
  /* 125365b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125365bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125365bd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125365c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125365c2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 125365c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125365c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125365c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125365cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125365cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125365d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125365d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125365d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125365da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125365dd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125365df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125365e2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125365e5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125365e7:;
  /* 125365e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125365ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125365ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125365ef mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125365f1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125365f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125365f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125365f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125365fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125365fe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12536600 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12536603 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536606 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12536609 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1253660c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1253660e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12536611 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12536614 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12536616 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12536619 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253661c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1253661f jmp 0x1253657d */
  goto L_1253657d;
L_12536624:;
  /* 12536624 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12536627 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1253662a jmp 0x12536346 */
  goto L_12536346;
L_1253662f:;
  /* 1253662f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12536632 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12536635 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12536637 je 0x12536702 */
  if (C.zf) goto L_12536702;
  /* 1253663d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536640 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536643 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12536646:;
  /* 12536646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536649 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1253664c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1253664e je 0x12536700 */
  if (C.zf) goto L_12536700;
  /* 12536654 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12536657 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253665a je 0x12536700 */
  if (C.zf) goto L_12536700;
  /* 12536660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536663 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12536666 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536669 jne 0x12536679 */
  if (!C.zf) goto L_12536679;
  /* 1253666b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253666e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536671 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12536674 jmp 0x12536700 */
  goto L_12536700;
L_12536679:;
  /* 12536679 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253667c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1253667e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12536680 mov edx, dword ptr [0x12552c98] */
  EDX = (r32((uint32_t)(0x12552c98)));
  /* 12536686 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536688 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1253668c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12536691 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12536693 je 0x125366cc */
  if (C.zf) goto L_125366cc;
  /* 12536695 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12536698 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253669b jbe 0x125366cc */
  if ((C.cf||C.zf)) goto L_125366cc;
  /* 1253669d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125366a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125366a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125366a5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125366a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125366a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125366ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125366ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125366b1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125366b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125366b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125366b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125366bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125366bf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125366c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125366c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125366c7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125366ca mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125366cc:;
  /* 125366cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125366cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125366d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125366d4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125366d6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 125366d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125366db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125366dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125366e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125366e3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125366e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125366e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125366eb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125366ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125366f1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125366f3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125366f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125366f9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125366fb jmp 0x12536646 */
  goto L_12536646;
L_12536700:;
  /* 12536700 jmp 0x1253670b */
  goto L_1253670b;
L_12536702:;
  /* 12536702 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536705 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536708 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1253670b:;
  /* 1253670b jmp 0x12536346 */
  goto L_12536346;
L_12536710:;
  /* 12536710 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12536714 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12536716 je 0x1253673c */
  if (C.zf) goto L_1253673c;
  /* 12536718 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1253671b push edx */
  push32((uint32_t)(EDX));
  /* 1253671c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1253671f push eax */
  push32((uint32_t)(EAX));
  /* 12536720 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536723 push ecx */
  push32((uint32_t)(ECX));
  /* 12536724 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12536727 push edx */
  push32((uint32_t)(EDX));
  /* 12536728 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1253672b push eax */
  push32((uint32_t)(EAX));
  /* 1253672c call 0x12535b70 */
  push32(0x12536731u); f_12535b70();
  /* 12536731 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536734 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12536737 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1253673a jmp 0x125367b7 */
  goto L_125367b7;
L_1253673c:;
  /* 1253673c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253673f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536741 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12536743 mov ecx, dword ptr [0x12552c98] */
  ECX = (r32((uint32_t)(0x12552c98)));
  /* 12536749 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1253674b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1253674f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12536755 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12536757 je 0x12536788 */
  if (C.zf) goto L_12536788;
  /* 12536759 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1253675c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1253675e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536761 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12536763 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12536765 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536768 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1253676a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253676d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536770 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12536772 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536775 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536778 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1253677b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1253677e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12536780 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12536783 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12536786 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12536788:;
  /* 12536788 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1253678b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1253678d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536790 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12536792 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12536794 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536797 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12536799 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253679c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1253679f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125367a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125367a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125367a7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125367aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125367ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125367af sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125367b2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125367b5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125367b7:;
  /* 125367b7 jmp 0x12536346 */
  goto L_12536346;
L_125367bc:;
  /* 125367bc mov esp, ebp */
  ESP = (EBP);
  /* 125367be pop ebp */
  EBP = (pop32());
  /* 125367bf ret  */
  ESPCHK(0x12536340u, _esp0);
  ESP += 4; return;
}

/* FUN_10016860 @ 0x12536860 (650 bytes, 178 insns) */
void f_12536860(void) {
  FTRACE(0x12536860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12536860 push ebp */
  push32((uint32_t)(EBP));
  /* 12536861 mov ebp, esp */
  EBP = (ESP);
  /* 12536863 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12536869 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253686d jne 0x125369c9 */
  if (!C.zf) goto L_125369c9;
  /* 12536873 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12536876 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1253687c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12536882 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12536885 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1253688c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12536896 push 0 */
  push32((uint32_t)(0x0u));
  /* 12536898 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1253689e push edx */
  push32((uint32_t)(EDX));
  /* 1253689f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125368a2 push eax */
  push32((uint32_t)(EAX));
  /* 125368a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125368a6 push ecx */
  push32((uint32_t)(ECX));
  /* 125368a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125368aa push edx */
  push32((uint32_t)(EDX));
  /* 125368ab call 0x12537c80 */
  push32(0x125368b0u); f_12537c80();
  /* 125368b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125368b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125368b6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125368ba jne 0x1253694f */
  if (!C.zf) goto L_1253694f;
  /* 125368c0 call dword ptr [0x125573d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573d8))), 0x125368c6u);
  /* 125368c6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125368c9 je 0x125368d0 */
  if (C.zf) goto L_125368d0;
  /* 125368cb jmp 0x125369ad */
  goto L_125369ad;
L_125368d0:;
  /* 125368d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125368d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125368d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125368d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125368d9 push eax */
  push32((uint32_t)(EAX));
  /* 125368da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125368dd push ecx */
  push32((uint32_t)(ECX));
  /* 125368de call 0x12537c80 */
  push32(0x125368e3u); f_12537c80();
  /* 125368e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125368e6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 125368ec cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125368f3 jne 0x125368fa */
  if (!C.zf) goto L_125368fa;
  /* 125368f5 jmp 0x125369ad */
  goto L_125369ad;
L_125368fa:;
  /* 125368fa push 0x58 */
  push32((uint32_t)(0x58u));
  /* 125368fc push 0x12550e5c */
  push32((uint32_t)(0x12550e5cu));
  /* 12536901 push 2 */
  push32((uint32_t)(0x2u));
  /* 12536903 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12536909 push edx */
  push32((uint32_t)(EDX));
  /* 1253690a call 0x125286a0 */
  push32(0x1253690fu); f_125286a0();
  /* 1253690f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536912 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12536915 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536919 jne 0x12536920 */
  if (!C.zf) goto L_12536920;
  /* 1253691b jmp 0x125369ad */
  goto L_125369ad;
L_12536920:;
  /* 12536920 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12536927 push 0 */
  push32((uint32_t)(0x0u));
  /* 12536929 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1253692f push eax */
  push32((uint32_t)(EAX));
  /* 12536930 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12536933 push ecx */
  push32((uint32_t)(ECX));
  /* 12536934 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536937 push edx */
  push32((uint32_t)(EDX));
  /* 12536938 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253693b push eax */
  push32((uint32_t)(EAX));
  /* 1253693c call 0x12537c80 */
  push32(0x12536941u); f_12537c80();
  /* 12536941 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536944 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12536947 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253694b jne 0x1253694f */
  if (!C.zf) goto L_1253694f;
  /* 1253694d jmp 0x125369ad */
  goto L_125369ad;
L_1253694f:;
  /* 1253694f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12536951 push 0x12550e5c */
  push32((uint32_t)(0x12550e5cu));
  /* 12536956 push 2 */
  push32((uint32_t)(0x2u));
  /* 12536958 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1253695b push ecx */
  push32((uint32_t)(ECX));
  /* 1253695c call 0x125286a0 */
  push32(0x12536961u); f_125286a0();
  /* 12536961 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536964 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1253696a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1253696c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12536972 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536975 jne 0x12536979 */
  if (!C.zf) goto L_12536979;
  /* 12536977 jmp 0x125369ad */
  goto L_125369ad;
L_12536979:;
  /* 12536979 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1253697c push ecx */
  push32((uint32_t)(ECX));
  /* 1253697d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12536980 push edx */
  push32((uint32_t)(EDX));
  /* 12536981 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12536987 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12536989 push ecx */
  push32((uint32_t)(ECX));
  /* 1253698a call 0x1252bec0 */
  push32(0x1253698fu); f_1252bec0();
  /* 1253698f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536992 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536996 je 0x125369a6 */
  if (C.zf) goto L_125369a6;
  /* 12536998 push 2 */
  push32((uint32_t)(0x2u));
  /* 1253699a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253699d push edx */
  push32((uint32_t)(EDX));
  /* 1253699e call 0x12529130 */
  push32(0x125369a3u); f_12529130();
  /* 125369a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125369a6:;
  /* 125369a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125369a8 jmp 0x12536ae6 */
  goto L_12536ae6;
L_125369ad:;
  /* 125369ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125369b1 je 0x125369c1 */
  if (C.zf) goto L_125369c1;
  /* 125369b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 125369b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125369b8 push eax */
  push32((uint32_t)(EAX));
  /* 125369b9 call 0x12529130 */
  push32(0x125369beu); f_12529130();
  /* 125369be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125369c1:;
  /* 125369c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125369c4 jmp 0x12536ae6 */
  goto L_12536ae6;
L_125369c9:;
  /* 125369c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125369cd jne 0x12536ae3 */
  if (!C.zf) goto L_12536ae3;
  /* 125369d3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 125369dd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125369e0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 125369e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125369e8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 125369ee push edx */
  push32((uint32_t)(EDX));
  /* 125369ef push 0x12554bd8 */
  push32((uint32_t)(0x12554bd8u));
  /* 125369f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125369f7 push eax */
  push32((uint32_t)(EAX));
  /* 125369f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125369fb push ecx */
  push32((uint32_t)(ECX));
  /* 125369fc call 0x12537ae0 */
  push32(0x12536a01u); f_12537ae0();
  /* 12536a01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536a04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12536a06 jne 0x12536a10 */
  if (!C.zf) goto L_12536a10;
  /* 12536a08 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12536a0b jmp 0x12536ae6 */
  goto L_12536ae6;
L_12536a10:;
  /* 12536a10 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12536a16 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12536a19 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12536a23 jmp 0x12536a34 */
  goto L_12536a34;
L_12536a25:;
  /* 12536a25 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12536a2b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536a2e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12536a34:;
  /* 12536a34 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536a3b jge 0x12536adf */
  if ((C.sf==C.of)) goto L_12536adf;
  /* 12536a41 cmp dword ptr [0x12552ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12552ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536a48 jle 0x12536a7b */
  if ((C.zf||C.sf!=C.of)) goto L_12536a7b;
  /* 12536a4a push 4 */
  push32((uint32_t)(0x4u));
  /* 12536a4c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12536a52 mov dl, byte ptr [ecx*2 + 0x12554bd8] */
  DL = (r8((uint32_t)(ECX*2 + 0x12554bd8)));
  /* 12536a59 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12536a5f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12536a65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12536a6a push eax */
  push32((uint32_t)(EAX));
  /* 12536a6b call 0x1252e6b0 */
  push32(0x12536a70u); f_1252e6b0();
  /* 12536a70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536a73 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12536a79 jmp 0x12536aae */
  goto L_12536aae;
L_12536a7b:;
  /* 12536a7b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12536a81 mov dl, byte ptr [ecx*2 + 0x12554bd8] */
  DL = (r8((uint32_t)(ECX*2 + 0x12554bd8)));
  /* 12536a88 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12536a8e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12536a94 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12536a99 mov ecx, dword ptr [0x12552c98] */
  ECX = (r32((uint32_t)(0x12552c98)));
  /* 12536a9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12536aa1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12536aa5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12536aa8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12536aae:;
  /* 12536aae cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536ab5 je 0x12536ad8 */
  if (C.zf) goto L_12536ad8;
  /* 12536ab7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12536abd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12536ac0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12536ac3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12536aca lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12536ace mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12536ad4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12536ad6 jmp 0x12536ada */
  goto L_12536ada;
L_12536ad8:;
  /* 12536ad8 jmp 0x12536adf */
  goto L_12536adf;
L_12536ada:;
  /* 12536ada jmp 0x12536a25 */
  goto L_12536a25;
L_12536adf:;
  /* 12536adf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536ae1 jmp 0x12536ae6 */
  goto L_12536ae6;
L_12536ae3:;
  /* 12536ae3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12536ae6:;
  /* 12536ae6 mov esp, ebp */
  ESP = (EBP);
  /* 12536ae8 pop ebp */
  EBP = (pop32());
  /* 12536ae9 ret  */
  ESPCHK(0x12536860u, _esp0);
  ESP += 4; return;
}

/* FUN_10016af0 @ 0x12536af0 (10 bytes, 5 insns) */
void f_12536af0(void) {
  FTRACE(0x12536af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12536af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12536af1 mov ebp, esp */
  EBP = (ESP);
  /* 12536af3 mov eax, dword ptr [0x12553d88] */
  EAX = (r32((uint32_t)(0x12553d88)));
  /* 12536af8 pop ebp */
  EBP = (pop32());
  /* 12536af9 ret  */
  ESPCHK(0x12536af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b00 @ 0x12536b00 (575 bytes, 196 insns) */
void f_12536b00(void) {
  FTRACE(0x12536b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12536b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12536b01 mov ebp, esp */
  EBP = (ESP);
  /* 12536b03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12536b05 push 0x12550e68 */
  push32((uint32_t)(0x12550e68u));
  /* 12536b0a push 0x125317a8 */
  push32((uint32_t)(0x125317a8u));
  /* 12536b0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12536b15 push eax */
  push32((uint32_t)(EAX));
  /* 12536b16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12536b1d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536b20 push ebx */
  push32((uint32_t)(EBX));
  /* 12536b21 push esi */
  push32((uint32_t)(ESI));
  /* 12536b22 push edi */
  push32((uint32_t)(EDI));
  /* 12536b23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12536b26 cmp dword ptr [0x12554be4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554be4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536b2d jne 0x12536b7e */
  if (!C.zf) goto L_12536b7e;
  /* 12536b2f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12536b32 push eax */
  push32((uint32_t)(EAX));
  /* 12536b33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12536b35 push 0x1255059c */
  push32((uint32_t)(0x1255059cu));
  /* 12536b3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12536b3c call dword ptr [0x1255731c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255731c))), 0x12536b42u);
  /* 12536b42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12536b44 je 0x12536b52 */
  if (C.zf) goto L_12536b52;
  /* 12536b46 mov dword ptr [0x12554be4], 1 */
  w32((uint32_t)(0x12554be4), (0x1u));
  /* 12536b50 jmp 0x12536b7e */
  goto L_12536b7e;
L_12536b52:;
  /* 12536b52 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12536b55 push ecx */
  push32((uint32_t)(ECX));
  /* 12536b56 push 1 */
  push32((uint32_t)(0x1u));
  /* 12536b58 push 0x12550598 */
  push32((uint32_t)(0x12550598u));
  /* 12536b5d push 1 */
  push32((uint32_t)(0x1u));
  /* 12536b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12536b61 call dword ptr [0x1255732c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255732c))), 0x12536b67u);
  /* 12536b67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12536b69 je 0x12536b77 */
  if (C.zf) goto L_12536b77;
  /* 12536b6b mov dword ptr [0x12554be4], 2 */
  w32((uint32_t)(0x12554be4), (0x2u));
  /* 12536b75 jmp 0x12536b7e */
  goto L_12536b7e;
L_12536b77:;
  /* 12536b77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536b79 jmp 0x12536d59 */
  goto L_12536d59;
L_12536b7e:;
  /* 12536b7e cmp dword ptr [0x12554be4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12554be4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536b85 jne 0x12536ba2 */
  if (!C.zf) goto L_12536ba2;
  /* 12536b87 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12536b8a push edx */
  push32((uint32_t)(EDX));
  /* 12536b8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536b8e push eax */
  push32((uint32_t)(EAX));
  /* 12536b8f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12536b92 push ecx */
  push32((uint32_t)(ECX));
  /* 12536b93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536b96 push edx */
  push32((uint32_t)(EDX));
  /* 12536b97 call dword ptr [0x1255731c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255731c))), 0x12536b9du);
  /* 12536b9d jmp 0x12536d59 */
  goto L_12536d59;
L_12536ba2:;
  /* 12536ba2 cmp dword ptr [0x12554be4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12554be4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536ba9 jne 0x12536d57 */
  if (!C.zf) goto L_12536d57;
  /* 12536baf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536bb3 jne 0x12536bbd */
  if (!C.zf) goto L_12536bbd;
  /* 12536bb5 mov eax, dword ptr [0x12554b58] */
  EAX = (r32((uint32_t)(0x12554b58)));
  /* 12536bba mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12536bbd:;
  /* 12536bbd push 0 */
  push32((uint32_t)(0x0u));
  /* 12536bbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12536bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12536bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12536bc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 12536bc9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12536bcc push edx */
  push32((uint32_t)(EDX));
  /* 12536bcd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12536bd2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12536bd5 push eax */
  push32((uint32_t)(EAX));
  /* 12536bd6 call dword ptr [0x12557370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557370))), 0x12536bdcu);
  /* 12536bdc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12536bdf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536be3 jne 0x12536bec */
  if (!C.zf) goto L_12536bec;
  /* 12536be5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536be7 jmp 0x12536d59 */
  goto L_12536d59;
L_12536bec:;
  /* 12536bec mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12536bf3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12536bf6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536bf9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12536bfb call 0x1252b840 */
  push32(0x12536c00u); f_1252b840();
  /* 12536c00 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12536c03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12536c06 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12536c09 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12536c0c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12536c0f push edx */
  push32((uint32_t)(EDX));
  /* 12536c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12536c12 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12536c15 push eax */
  push32((uint32_t)(EAX));
  /* 12536c16 call 0x1252c410 */
  push32(0x12536c1bu); f_1252c410();
  /* 12536c1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536c1e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12536c25 jmp 0x12536c3e */
  goto L_12536c3e;
  /* 12536c27 mov eax, 1 */
  EAX = (0x1u);
  /* 12536c2c ret  */
  ESPCHK(0x12536b00u, _esp0);
  ESP += 4; return;
  /* 12536c2d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12536c30 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12536c37 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12536c3e:;
  /* 12536c3e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536c42 jne 0x12536c4b */
  if (!C.zf) goto L_12536c4b;
  /* 12536c44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536c46 jmp 0x12536d59 */
  goto L_12536d59;
L_12536c4b:;
  /* 12536c4b push 0 */
  push32((uint32_t)(0x0u));
  /* 12536c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12536c4f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12536c52 push ecx */
  push32((uint32_t)(ECX));
  /* 12536c53 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12536c56 push edx */
  push32((uint32_t)(EDX));
  /* 12536c57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536c5a push eax */
  push32((uint32_t)(EAX));
  /* 12536c5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12536c5e push ecx */
  push32((uint32_t)(ECX));
  /* 12536c5f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12536c64 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12536c67 push edx */
  push32((uint32_t)(EDX));
  /* 12536c68 call dword ptr [0x12557370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557370))), 0x12536c6eu);
  /* 12536c6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12536c70 jne 0x12536c79 */
  if (!C.zf) goto L_12536c79;
  /* 12536c72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536c74 jmp 0x12536d59 */
  goto L_12536d59;
L_12536c79:;
  /* 12536c79 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12536c80 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12536c83 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12536c87 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536c8a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12536c8c call 0x1252b840 */
  push32(0x12536c91u); f_1252b840();
  /* 12536c91 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12536c94 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12536c97 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12536c9a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12536c9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12536ca4 jmp 0x12536cbd */
  goto L_12536cbd;
  /* 12536ca6 mov eax, 1 */
  EAX = (0x1u);
  /* 12536cab ret  */
  ESPCHK(0x12536b00u, _esp0);
  ESP += 4; return;
  /* 12536cac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12536caf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12536cb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12536cbd:;
  /* 12536cbd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536cc1 jne 0x12536cca */
  if (!C.zf) goto L_12536cca;
  /* 12536cc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536cc5 jmp 0x12536d59 */
  goto L_12536d59;
L_12536cca:;
  /* 12536cca cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536cce jne 0x12536cd9 */
  if (!C.zf) goto L_12536cd9;
  /* 12536cd0 mov edx, dword ptr [0x12554b48] */
  EDX = (r32((uint32_t)(0x12554b48)));
  /* 12536cd6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12536cd9:;
  /* 12536cd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536cdc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12536cdf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12536ce5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536ce8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12536ceb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12536cf2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12536cf5 push ecx */
  push32((uint32_t)(ECX));
  /* 12536cf6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12536cf9 push edx */
  push32((uint32_t)(EDX));
  /* 12536cfa mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12536cfd push eax */
  push32((uint32_t)(EAX));
  /* 12536cfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536d01 push ecx */
  push32((uint32_t)(ECX));
  /* 12536d02 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12536d05 push edx */
  push32((uint32_t)(EDX));
  /* 12536d06 call dword ptr [0x1255732c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255732c))), 0x12536d0cu);
  /* 12536d0c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12536d0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536d12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12536d15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12536d17 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12536d1c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536d22 je 0x12536d38 */
  if (C.zf) goto L_12536d38;
  /* 12536d24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536d27 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12536d2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12536d2c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12536d30 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536d36 je 0x12536d3c */
  if (C.zf) goto L_12536d3c;
L_12536d38:;
  /* 12536d38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536d3a jmp 0x12536d59 */
  goto L_12536d59;
L_12536d3c:;
  /* 12536d3c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536d3f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12536d41 push eax */
  push32((uint32_t)(EAX));
  /* 12536d42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12536d45 push ecx */
  push32((uint32_t)(ECX));
  /* 12536d46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12536d49 push edx */
  push32((uint32_t)(EDX));
  /* 12536d4a call 0x12530590 */
  push32(0x12536d4fu); f_12530590();
  /* 12536d4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536d52 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12536d55 jmp 0x12536d59 */
  goto L_12536d59;
L_12536d57:;
  /* 12536d57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12536d59:;
  /* 12536d59 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12536d5c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12536d5f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12536d66 pop edi */
  EDI = (pop32());
  /* 12536d67 pop esi */
  ESI = (pop32());
  /* 12536d68 pop ebx */
  EBX = (pop32());
  /* 12536d69 mov esp, ebp */
  ESP = (EBP);
  /* 12536d6b pop ebp */
  EBP = (pop32());
  /* 12536d6c ret  */
  ESPCHK(0x12536b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d70 @ 0x12536d70 (208 bytes, 85 insns) */
void f_12536d70(void) {
  FTRACE(0x12536d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12536d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12536d71 mov ebp, esp */
  EBP = (ESP);
  /* 12536d73 push edi */
  push32((uint32_t)(EDI));
  /* 12536d74 push esi */
  push32((uint32_t)(ESI));
  /* 12536d75 push ebx */
  push32((uint32_t)(EBX));
  /* 12536d76 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12536d79 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12536d7c lea eax, [0x12554b40] */
  EAX = ((uint32_t)(0x12554b40));
  /* 12536d82 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536d86 jne 0x12536dc3 */
  if (!C.zf) goto L_12536dc3;
  /* 12536d88 mov al, 0xff */
  AL = (0xffu);
  /* 12536d8a mov edi, edi */
  EDI = (EDI);
L_12536d8c:;
  /* 12536d8c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12536d8e je 0x12536dbe */
  if (C.zf) goto L_12536dbe;
  /* 12536d90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12536d92 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12536d93 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12536d95 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12536d96 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12536d98 je 0x12536d8c */
  if (C.zf) goto L_12536d8c;
  /* 12536d9a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12536d9c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12536d9e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12536da0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12536da3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12536da5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12536da7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12536da9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12536dab cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12536dad sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12536daf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12536db2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12536db4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12536db6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12536db8 je 0x12536d8c */
  if (C.zf) goto L_12536d8c;
  /* 12536dba sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12536dbc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12536dbe:;
  /* 12536dbe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12536dc1 jmp 0x12536e3b */
  goto L_12536e3b;
L_12536dc3:;
  /* 12536dc3 lock inc dword ptr [0x12554cd4] */
  x86_unimpl("lock inc @ 0x12536dc3");
  /* 12536dca cmp dword ptr [0x12554cc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554cc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536dd1 jg 0x12536dd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12536dd7;
  /* 12536dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12536dd5 jmp 0x12536dec */
  goto L_12536dec;
L_12536dd7:;
  /* 12536dd7 lock dec dword ptr [0x12554cd4] */
  x86_unimpl("lock dec @ 0x12536dd7");
  /* 12536dde push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12536de0 call 0x1252c0a0 */
  push32(0x12536de5u); f_1252c0a0();
  /* 12536de5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12536dec:;
  /* 12536dec mov eax, 0xff */
  EAX = (0xffu);
  /* 12536df1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12536df3 nop  */
  /* nop */
L_12536df4:;
  /* 12536df4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12536df6 je 0x12536e1f */
  if (C.zf) goto L_12536e1f;
  /* 12536df8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12536dfa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12536dfb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12536dfd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12536dfe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12536e00 je 0x12536df4 */
  if (C.zf) goto L_12536df4;
  /* 12536e02 push eax */
  push32((uint32_t)(EAX));
  /* 12536e03 push ebx */
  push32((uint32_t)(EBX));
  /* 12536e04 call 0x12537ee0 */
  push32(0x12536e09u); f_12537ee0();
  /* 12536e09 mov ebx, eax */
  EBX = (EAX);
  /* 12536e0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536e0e call 0x12537ee0 */
  push32(0x12536e13u); f_12537ee0();
  /* 12536e13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536e16 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12536e18 je 0x12536df4 */
  if (C.zf) goto L_12536df4;
  /* 12536e1a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12536e1c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12536e1f:;
  /* 12536e1f mov ebx, eax */
  EBX = (EAX);
  /* 12536e21 pop eax */
  EAX = (pop32());
  /* 12536e22 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536e24 jne 0x12536e2f */
  if (!C.zf) goto L_12536e2f;
  /* 12536e26 lock dec dword ptr [0x12554cd4] */
  x86_unimpl("lock dec @ 0x12536e26");
  /* 12536e2d jmp 0x12536e39 */
  goto L_12536e39;
L_12536e2f:;
  /* 12536e2f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12536e31 call 0x1252c140 */
  push32(0x12536e36u); f_1252c140();
  /* 12536e36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12536e39:;
  /* 12536e39 mov eax, ebx */
  EAX = (EBX);
L_12536e3b:;
  /* 12536e3b pop ebx */
  EBX = (pop32());
  /* 12536e3c pop esi */
  ESI = (pop32());
  /* 12536e3d pop edi */
  EDI = (pop32());
  /* 12536e3e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12536e3f ret  */
  ESPCHK(0x12536d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e40 @ 0x12536e40 (257 bytes, 103 insns) */
void f_12536e40(void) {
  FTRACE(0x12536e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12536e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12536e41 mov ebp, esp */
  EBP = (ESP);
  /* 12536e43 push edi */
  push32((uint32_t)(EDI));
  /* 12536e44 push esi */
  push32((uint32_t)(ESI));
  /* 12536e45 push ebx */
  push32((uint32_t)(EBX));
  /* 12536e46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12536e49 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12536e4b je 0x12536f3a */
  if (C.zf) goto L_12536f3a;
  /* 12536e51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12536e54 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12536e57 lea eax, [0x12554b40] */
  EAX = ((uint32_t)(0x12554b40));
  /* 12536e5d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536e61 jne 0x12536eb1 */
  if (!C.zf) goto L_12536eb1;
  /* 12536e63 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12536e65 mov bl, 0x5a */
  BL = (0x5au);
  /* 12536e67 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12536e69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12536e6c:;
  /* 12536e6c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12536e6e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12536e70 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12536e72 je 0x12536e95 */
  if (C.zf) goto L_12536e95;
  /* 12536e74 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12536e76 je 0x12536e95 */
  if (C.zf) goto L_12536e95;
  /* 12536e78 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12536e79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12536e7a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12536e7c jb 0x12536e84 */
  if (C.cf) goto L_12536e84;
  /* 12536e7e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12536e80 ja 0x12536e84 */
  if ((!C.cf&&!C.zf)) goto L_12536e84;
  /* 12536e82 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12536e84:;
  /* 12536e84 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12536e86 jb 0x12536e8e */
  if (C.cf) goto L_12536e8e;
  /* 12536e88 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12536e8a ja 0x12536e8e */
  if ((!C.cf&&!C.zf)) goto L_12536e8e;
  /* 12536e8c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12536e8e:;
  /* 12536e8e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12536e90 jne 0x12536e9f */
  if (!C.zf) goto L_12536e9f;
  /* 12536e92 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12536e93 jne 0x12536e6c */
  if (!C.zf) goto L_12536e6c;
L_12536e95:;
  /* 12536e95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12536e97 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12536e99 je 0x12536f3a */
  if (C.zf) goto L_12536f3a;
L_12536e9f:;
  /* 12536e9f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12536ea4 jb 0x12536f3a */
  if (C.cf) goto L_12536f3a;
  /* 12536eaa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12536eac jmp 0x12536f3a */
  goto L_12536f3a;
L_12536eb1:;
  /* 12536eb1 lock inc dword ptr [0x12554cd4] */
  x86_unimpl("lock inc @ 0x12536eb1");
  /* 12536eb8 cmp dword ptr [0x12554cc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554cc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536ebf jg 0x12536ec5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12536ec5;
  /* 12536ec1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12536ec3 jmp 0x12536ede */
  goto L_12536ede;
L_12536ec5:;
  /* 12536ec5 lock dec dword ptr [0x12554cd4] */
  x86_unimpl("lock dec @ 0x12536ec5");
  /* 12536ecc mov ebx, ecx */
  EBX = (ECX);
  /* 12536ece push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12536ed0 call 0x1252c0a0 */
  push32(0x12536ed5u); f_1252c0a0();
  /* 12536ed5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12536edc mov ecx, ebx */
  ECX = (EBX);
L_12536ede:;
  /* 12536ede xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536ee0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12536ee2 mov edi, edi */
  EDI = (EDI);
L_12536ee4:;
  /* 12536ee4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12536ee6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536ee8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12536eea je 0x12536f0f */
  if (C.zf) goto L_12536f0f;
  /* 12536eec or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12536eee je 0x12536f0f */
  if (C.zf) goto L_12536f0f;
  /* 12536ef0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12536ef1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12536ef2 push ecx */
  push32((uint32_t)(ECX));
  /* 12536ef3 push eax */
  push32((uint32_t)(EAX));
  /* 12536ef4 push ebx */
  push32((uint32_t)(EBX));
  /* 12536ef5 call 0x12537ee0 */
  push32(0x12536efau); f_12537ee0();
  /* 12536efa mov ebx, eax */
  EBX = (EAX);
  /* 12536efc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536eff call 0x12537ee0 */
  push32(0x12536f04u); f_12537ee0();
  /* 12536f04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536f07 pop ecx */
  ECX = (pop32());
  /* 12536f08 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536f0a jne 0x12536f15 */
  if (!C.zf) goto L_12536f15;
  /* 12536f0c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12536f0d jne 0x12536ee4 */
  if (!C.zf) goto L_12536ee4;
L_12536f0f:;
  /* 12536f0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12536f11 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536f13 je 0x12536f1e */
  if (C.zf) goto L_12536f1e;
L_12536f15:;
  /* 12536f15 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12536f1a jb 0x12536f1e */
  if (C.cf) goto L_12536f1e;
  /* 12536f1c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12536f1e:;
  /* 12536f1e pop eax */
  EAX = (pop32());
  /* 12536f1f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536f21 jne 0x12536f2c */
  if (!C.zf) goto L_12536f2c;
  /* 12536f23 lock dec dword ptr [0x12554cd4] */
  x86_unimpl("lock dec @ 0x12536f23");
  /* 12536f2a jmp 0x12536f3a */
  goto L_12536f3a;
L_12536f2c:;
  /* 12536f2c mov ebx, ecx */
  EBX = (ECX);
  /* 12536f2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12536f30 call 0x1252c140 */
  push32(0x12536f35u); f_1252c140();
  /* 12536f35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536f38 mov ecx, ebx */
  ECX = (EBX);
L_12536f3a:;
  /* 12536f3a mov eax, ecx */
  EAX = (ECX);
  /* 12536f3c pop ebx */
  EBX = (pop32());
  /* 12536f3d pop esi */
  ESI = (pop32());
  /* 12536f3e pop edi */
  EDI = (pop32());
  /* 12536f3f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12536f40 ret  */
  ESPCHK(0x12536e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f50 @ 0x12536f50 (255 bytes, 88 insns) */
void f_12536f50(void) {
  FTRACE(0x12536f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12536f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12536f51 mov ebp, esp */
  EBP = (ESP);
  /* 12536f53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12536f56:;
  /* 12536f56 cmp dword ptr [0x12552ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12552ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536f5d jle 0x12536f76 */
  if ((C.zf||C.sf!=C.of)) goto L_12536f76;
  /* 12536f5f push 8 */
  push32((uint32_t)(0x8u));
  /* 12536f61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536f64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12536f66 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12536f68 push ecx */
  push32((uint32_t)(ECX));
  /* 12536f69 call 0x1252e6b0 */
  push32(0x12536f6eu); f_1252e6b0();
  /* 12536f6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536f71 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12536f74 jmp 0x12536f8f */
  goto L_12536f8f;
L_12536f76:;
  /* 12536f76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536f79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536f7b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12536f7d mov ecx, dword ptr [0x12552c98] */
  ECX = (r32((uint32_t)(0x12552c98)));
  /* 12536f83 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12536f85 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12536f89 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12536f8c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12536f8f:;
  /* 12536f8f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536f93 je 0x12536fa0 */
  if (C.zf) goto L_12536fa0;
  /* 12536f95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536f98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536f9b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12536f9e jmp 0x12536f56 */
  goto L_12536f56;
L_12536fa0:;
  /* 12536fa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536fa3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12536fa5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12536fa7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12536faa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536fad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536fb0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12536fb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12536fb6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12536fb9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536fbd je 0x12536fc5 */
  if (C.zf) goto L_12536fc5;
  /* 12536fbf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536fc3 jne 0x12536fd8 */
  if (!C.zf) goto L_12536fd8;
L_12536fc5:;
  /* 12536fc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536fc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12536fca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12536fcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12536fcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12536fd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12536fd5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12536fd8:;
  /* 12536fd8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12536fdf:;
  /* 12536fdf cmp dword ptr [0x12552ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12552ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12536fe6 jle 0x12536ffb */
  if ((C.zf||C.sf!=C.of)) goto L_12536ffb;
  /* 12536fe8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12536fea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12536fed push edx */
  push32((uint32_t)(EDX));
  /* 12536fee call 0x1252e6b0 */
  push32(0x12536ff3u); f_1252e6b0();
  /* 12536ff3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12536ff6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12536ff9 jmp 0x12537010 */
  goto L_12537010;
L_12536ffb:;
  /* 12536ffb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12536ffe mov ecx, dword ptr [0x12552c98] */
  ECX = (r32((uint32_t)(0x12552c98)));
  /* 12537004 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12537006 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1253700a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1253700d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12537010:;
  /* 12537010 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537014 je 0x1253703b */
  if (C.zf) goto L_1253703b;
  /* 12537016 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12537019 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253701c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253701f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12537023 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12537026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537029 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1253702b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1253702d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12537030 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537033 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537036 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12537039 jmp 0x12536fdf */
  goto L_12536fdf;
L_1253703b:;
  /* 1253703b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253703f jne 0x12537048 */
  if (!C.zf) goto L_12537048;
  /* 12537041 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12537044 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12537046 jmp 0x1253704b */
  goto L_1253704b;
L_12537048:;
  /* 12537048 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1253704b:;
  /* 1253704b mov esp, ebp */
  ESP = (EBP);
  /* 1253704d pop ebp */
  EBP = (pop32());
  /* 1253704e ret  */
  ESPCHK(0x12536f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10017050 @ 0x12537050 (17 bytes, 8 insns) */
void f_12537050(void) {
  FTRACE(0x12537050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12537050 push ebp */
  push32((uint32_t)(EBP));
  /* 12537051 mov ebp, esp */
  EBP = (ESP);
  /* 12537053 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537056 push eax */
  push32((uint32_t)(EAX));
  /* 12537057 call 0x12536f50 */
  push32(0x1253705cu); f_12536f50();
  /* 1253705c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253705f pop ebp */
  EBP = (pop32());
  /* 12537060 ret  */
  ESPCHK(0x12537050u, _esp0);
  ESP += 4; return;
}

/* FUN_10017070 @ 0x12537070 (297 bytes, 106 insns) */
void f_12537070(void) {
  FTRACE(0x12537070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12537070 push ebp */
  push32((uint32_t)(EBP));
  /* 12537071 mov ebp, esp */
  EBP = (ESP);
  /* 12537073 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12537076 push esi */
  push32((uint32_t)(ESI));
L_12537077:;
  /* 12537077 cmp dword ptr [0x12552ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12552ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253707e jle 0x12537097 */
  if ((C.zf||C.sf!=C.of)) goto L_12537097;
  /* 12537080 push 8 */
  push32((uint32_t)(0x8u));
  /* 12537082 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537085 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12537087 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12537089 push ecx */
  push32((uint32_t)(ECX));
  /* 1253708a call 0x1252e6b0 */
  push32(0x1253708fu); f_1252e6b0();
  /* 1253708f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537092 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12537095 jmp 0x125370b0 */
  goto L_125370b0;
L_12537097:;
  /* 12537097 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253709a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253709c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1253709e mov ecx, dword ptr [0x12552c98] */
  ECX = (r32((uint32_t)(0x12552c98)));
  /* 125370a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125370a6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125370aa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 125370ad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_125370b0:;
  /* 125370b0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125370b4 je 0x125370c1 */
  if (C.zf) goto L_125370c1;
  /* 125370b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125370b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125370bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125370bf jmp 0x12537077 */
  goto L_12537077;
L_125370c1:;
  /* 125370c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125370c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125370c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125370c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125370cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125370ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125370d1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125370d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125370d7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125370da cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125370de je 0x125370e6 */
  if (C.zf) goto L_125370e6;
  /* 125370e0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125370e4 jne 0x125370f9 */
  if (!C.zf) goto L_125370f9;
L_125370e6:;
  /* 125370e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125370e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125370eb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125370ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125370f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125370f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125370f6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_125370f9:;
  /* 125370f9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12537100 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12537107:;
  /* 12537107 cmp dword ptr [0x12552ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12552ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253710e jle 0x12537123 */
  if ((C.zf||C.sf!=C.of)) goto L_12537123;
  /* 12537110 push 4 */
  push32((uint32_t)(0x4u));
  /* 12537112 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12537115 push edx */
  push32((uint32_t)(EDX));
  /* 12537116 call 0x1252e6b0 */
  push32(0x1253711bu); f_1252e6b0();
  /* 1253711b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253711e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12537121 jmp 0x12537138 */
  goto L_12537138;
L_12537123:;
  /* 12537123 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12537126 mov ecx, dword ptr [0x12552c98] */
  ECX = (r32((uint32_t)(0x12552c98)));
  /* 1253712c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1253712e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12537132 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12537135 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12537138:;
  /* 12537138 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253713c je 0x12537179 */
  if (C.zf) goto L_12537179;
  /* 1253713e push 0 */
  push32((uint32_t)(0x0u));
  /* 12537140 push 0xa */
  push32((uint32_t)(0xau));
  /* 12537142 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12537145 push eax */
  push32((uint32_t)(EAX));
  /* 12537146 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537149 push ecx */
  push32((uint32_t)(ECX));
  /* 1253714a call 0x12538010 */
  push32(0x1253714fu); f_12538010();
  /* 1253714f mov ecx, eax */
  ECX = (EAX);
  /* 12537151 mov esi, edx */
  ESI = (EDX);
  /* 12537153 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12537156 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12537159 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1253715a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253715c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1253715e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12537161 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12537164 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12537169 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1253716b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1253716e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537171 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537174 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12537177 jmp 0x12537107 */
  goto L_12537107;
L_12537179:;
  /* 12537179 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253717d jne 0x1253718e */
  if (!C.zf) goto L_1253718e;
  /* 1253717f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537182 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12537184 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12537187 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253718a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1253718c jmp 0x12537194 */
  goto L_12537194;
L_1253718e:;
  /* 1253718e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537191 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12537194:;
  /* 12537194 pop esi */
  ESI = (pop32());
  /* 12537195 mov esp, ebp */
  ESP = (EBP);
  /* 12537197 pop ebp */
  EBP = (pop32());
  /* 12537198 ret  */
  ESPCHK(0x12537070u, _esp0);
  ESP += 4; return;
}

/* FUN_100171a0 @ 0x125371a0 (61 bytes, 18 insns) */
void f_125371a0(void) {
  FTRACE(0x125371a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125371a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125371a1 mov ebp, esp */
  EBP = (ESP);
  /* 125371a3 cmp dword ptr [0x12554ca0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554ca0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125371aa jne 0x125371db */
  if (!C.zf) goto L_125371db;
  /* 125371ac push 0xb */
  push32((uint32_t)(0xbu));
  /* 125371ae call 0x1252c0a0 */
  push32(0x125371b3u); f_1252c0a0();
  /* 125371b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125371b6 cmp dword ptr [0x12554ca0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554ca0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125371bd jne 0x125371d1 */
  if (!C.zf) goto L_125371d1;
  /* 125371bf call 0x12537200 */
  push32(0x125371c4u); f_12537200();
  /* 125371c4 mov eax, dword ptr [0x12554ca0] */
  EAX = (r32((uint32_t)(0x12554ca0)));
  /* 125371c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125371cc mov dword ptr [0x12554ca0], eax */
  w32((uint32_t)(0x12554ca0), (EAX));
L_125371d1:;
  /* 125371d1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125371d3 call 0x1252c140 */
  push32(0x125371d8u); f_1252c140();
  /* 125371d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125371db:;
  /* 125371db pop ebp */
  EBP = (pop32());
  /* 125371dc ret  */
  ESPCHK(0x125371a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100171e0 @ 0x125371e0 (30 bytes, 11 insns) */
void f_125371e0(void) {
  FTRACE(0x125371e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125371e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125371e1 mov ebp, esp */
  EBP = (ESP);
  /* 125371e3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125371e5 call 0x1252c0a0 */
  push32(0x125371eau); f_1252c0a0();
  /* 125371ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125371ed call 0x12537200 */
  push32(0x125371f2u); f_12537200();
  /* 125371f2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125371f4 call 0x1252c140 */
  push32(0x125371f9u); f_1252c140();
  /* 125371f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125371fc pop ebp */
  EBP = (pop32());
  /* 125371fd ret  */
  ESPCHK(0x125371e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017200 @ 0x12537200 (939 bytes, 266 insns) */
void f_12537200(void) {
  FTRACE(0x12537200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12537200 push ebp */
  push32((uint32_t)(EBP));
  /* 12537201 mov ebp, esp */
  EBP = (ESP);
  /* 12537203 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12537206 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1253720d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1253720f call 0x1252c0a0 */
  push32(0x12537214u); f_1252c0a0();
  /* 12537214 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537217 mov dword ptr [0x12554be8], 0 */
  w32((uint32_t)(0x12554be8), (0x0u));
  /* 12537221 mov dword ptr [0x12553e38], 0xffffffff */
  w32((uint32_t)(0x12553e38), (0xffffffffu));
  /* 1253722b mov eax, dword ptr [0x12553e38] */
  EAX = (r32((uint32_t)(0x12553e38)));
  /* 12537230 mov dword ptr [0x12553e28], eax */
  w32((uint32_t)(0x12553e28), (EAX));
  /* 12537235 push 0x12550ec8 */
  push32((uint32_t)(0x12550ec8u));
  /* 1253723a call 0x12538080 */
  push32(0x1253723fu); f_12538080();
  /* 1253723f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537242 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12537245 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537249 jne 0x12537383 */
  if (!C.zf) goto L_12537383;
  /* 1253724f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12537251 call 0x1252c140 */
  push32(0x12537256u); f_1252c140();
  /* 12537256 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537259 push 0x12554bf0 */
  push32((uint32_t)(0x12554bf0u));
  /* 1253725e call dword ptr [0x125572e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572e0))), 0x12537264u);
  /* 12537264 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537267 je 0x1253737e */
  if (C.zf) goto L_1253737e;
  /* 1253726d mov dword ptr [0x12554be8], 1 */
  w32((uint32_t)(0x12554be8), (0x1u));
  /* 12537277 mov ecx, dword ptr [0x12554bf0] */
  ECX = (r32((uint32_t)(0x12554bf0)));
  /* 1253727d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12537280 mov dword ptr [0x12553d90], ecx */
  w32((uint32_t)(0x12553d90), (ECX));
  /* 12537286 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12537288 mov dx, word ptr [0x12554c36] */
  DX = (r16((uint32_t)(0x12554c36)));
  /* 1253728f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12537291 je 0x125372a9 */
  if (C.zf) goto L_125372a9;
  /* 12537293 mov eax, dword ptr [0x12554c44] */
  EAX = (r32((uint32_t)(0x12554c44)));
  /* 12537298 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253729b mov ecx, dword ptr [0x12553d90] */
  ECX = (r32((uint32_t)(0x12553d90)));
  /* 125372a1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125372a3 mov dword ptr [0x12553d90], ecx */
  w32((uint32_t)(0x12553d90), (ECX));
L_125372a9:;
  /* 125372a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125372ab mov dx, word ptr [0x12554c8a] */
  DX = (r16((uint32_t)(0x12554c8a)));
  /* 125372b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125372b4 je 0x125372de */
  if (C.zf) goto L_125372de;
  /* 125372b6 cmp dword ptr [0x12554c98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554c98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125372bd je 0x125372de */
  if (C.zf) goto L_125372de;
  /* 125372bf mov dword ptr [0x12553d94], 1 */
  w32((uint32_t)(0x12553d94), (0x1u));
  /* 125372c9 mov eax, dword ptr [0x12554c98] */
  EAX = (r32((uint32_t)(0x12554c98)));
  /* 125372ce sub eax, dword ptr [0x12554c44] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12554c44))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125372d4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125372d7 mov dword ptr [0x12553d98], eax */
  w32((uint32_t)(0x12553d98), (EAX));
  /* 125372dc jmp 0x125372f2 */
  goto L_125372f2;
L_125372de:;
  /* 125372de mov dword ptr [0x12553d94], 0 */
  w32((uint32_t)(0x12553d94), (0x0u));
  /* 125372e8 mov dword ptr [0x12553d98], 0 */
  w32((uint32_t)(0x12553d98), (0x0u));
L_125372f2:;
  /* 125372f2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 125372f5 push ecx */
  push32((uint32_t)(ECX));
  /* 125372f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125372f8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 125372fa mov edx, dword ptr [0x12553e1c] */
  EDX = (r32((uint32_t)(0x12553e1c)));
  /* 12537300 push edx */
  push32((uint32_t)(EDX));
  /* 12537301 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12537303 push 0x12554bf4 */
  push32((uint32_t)(0x12554bf4u));
  /* 12537308 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1253730d mov eax, dword ptr [0x12554b58] */
  EAX = (r32((uint32_t)(0x12554b58)));
  /* 12537312 push eax */
  push32((uint32_t)(EAX));
  /* 12537313 call dword ptr [0x12557370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557370))), 0x12537319u);
  /* 12537319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253731b je 0x1253732f */
  if (C.zf) goto L_1253732f;
  /* 1253731d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537321 jne 0x1253732f */
  if (!C.zf) goto L_1253732f;
  /* 12537323 mov ecx, dword ptr [0x12553e1c] */
  ECX = (r32((uint32_t)(0x12553e1c)));
  /* 12537329 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1253732d jmp 0x12537338 */
  goto L_12537338;
L_1253732f:;
  /* 1253732f mov edx, dword ptr [0x12553e1c] */
  EDX = (r32((uint32_t)(0x12553e1c)));
  /* 12537335 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12537338:;
  /* 12537338 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1253733b push eax */
  push32((uint32_t)(EAX));
  /* 1253733c push 0 */
  push32((uint32_t)(0x0u));
  /* 1253733e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12537340 mov ecx, dword ptr [0x12553e20] */
  ECX = (r32((uint32_t)(0x12553e20)));
  /* 12537346 push ecx */
  push32((uint32_t)(ECX));
  /* 12537347 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12537349 push 0x12554c48 */
  push32((uint32_t)(0x12554c48u));
  /* 1253734e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12537353 mov edx, dword ptr [0x12554b58] */
  EDX = (r32((uint32_t)(0x12554b58)));
  /* 12537359 push edx */
  push32((uint32_t)(EDX));
  /* 1253735a call dword ptr [0x12557370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557370))), 0x12537360u);
  /* 12537360 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12537362 je 0x12537375 */
  if (C.zf) goto L_12537375;
  /* 12537364 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537368 jne 0x12537375 */
  if (!C.zf) goto L_12537375;
  /* 1253736a mov eax, dword ptr [0x12553e20] */
  EAX = (r32((uint32_t)(0x12553e20)));
  /* 1253736f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12537373 jmp 0x1253737e */
  goto L_1253737e;
L_12537375:;
  /* 12537375 mov ecx, dword ptr [0x12553e20] */
  ECX = (r32((uint32_t)(0x12553e20)));
  /* 1253737b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1253737e:;
  /* 1253737e jmp 0x125375a7 */
  goto L_125375a7;
L_12537383:;
  /* 12537383 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537386 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12537389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253738b je 0x125373ad */
  if (C.zf) goto L_125373ad;
  /* 1253738d cmp dword ptr [0x12554c9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554c9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537394 je 0x125373bc */
  if (C.zf) goto L_125373bc;
  /* 12537396 mov ecx, dword ptr [0x12554c9c] */
  ECX = (r32((uint32_t)(0x12554c9c)));
  /* 1253739c push ecx */
  push32((uint32_t)(ECX));
  /* 1253739d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125373a0 push edx */
  push32((uint32_t)(EDX));
  /* 125373a1 call 0x12534330 */
  push32(0x125373a6u); f_12534330();
  /* 125373a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125373a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125373ab jne 0x125373bc */
  if (!C.zf) goto L_125373bc;
L_125373ad:;
  /* 125373ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 125373af call 0x1252c140 */
  push32(0x125373b4u); f_1252c140();
  /* 125373b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125373b7 jmp 0x125375a7 */
  goto L_125375a7;
L_125373bc:;
  /* 125373bc push 2 */
  push32((uint32_t)(0x2u));
  /* 125373be mov eax, dword ptr [0x12554c9c] */
  EAX = (r32((uint32_t)(0x12554c9c)));
  /* 125373c3 push eax */
  push32((uint32_t)(EAX));
  /* 125373c4 call 0x12529130 */
  push32(0x125373c9u); f_12529130();
  /* 125373c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125373cc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 125373d1 push 0x12550ec0 */
  push32((uint32_t)(0x12550ec0u));
  /* 125373d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125373d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125373db push ecx */
  push32((uint32_t)(ECX));
  /* 125373dc call 0x1252b4d0 */
  push32(0x125373e1u); f_1252b4d0();
  /* 125373e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125373e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125373e7 push eax */
  push32((uint32_t)(EAX));
  /* 125373e8 call 0x125286a0 */
  push32(0x125373edu); f_125286a0();
  /* 125373ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125373f0 mov dword ptr [0x12554c9c], eax */
  w32((uint32_t)(0x12554c9c), (EAX));
  /* 125373f5 cmp dword ptr [0x12554c9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554c9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125373fc jne 0x1253740d */
  if (!C.zf) goto L_1253740d;
  /* 125373fe push 0xc */
  push32((uint32_t)(0xcu));
  /* 12537400 call 0x1252c140 */
  push32(0x12537405u); f_1252c140();
  /* 12537405 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537408 jmp 0x125375a7 */
  goto L_125375a7;
L_1253740d:;
  /* 1253740d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537410 push edx */
  push32((uint32_t)(EDX));
  /* 12537411 mov eax, dword ptr [0x12554c9c] */
  EAX = (r32((uint32_t)(0x12554c9c)));
  /* 12537416 push eax */
  push32((uint32_t)(EAX));
  /* 12537417 call 0x1252b650 */
  push32(0x1253741cu); f_1252b650();
  /* 1253741c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253741f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12537421 call 0x1252c140 */
  push32(0x12537426u); f_1252c140();
  /* 12537426 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537429 push 3 */
  push32((uint32_t)(0x3u));
  /* 1253742b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253742e push ecx */
  push32((uint32_t)(ECX));
  /* 1253742f mov edx, dword ptr [0x12553e1c] */
  EDX = (r32((uint32_t)(0x12553e1c)));
  /* 12537435 push edx */
  push32((uint32_t)(EDX));
  /* 12537436 call 0x1252bec0 */
  push32(0x1253743bu); f_1252bec0();
  /* 1253743b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253743e mov eax, dword ptr [0x12553e1c] */
  EAX = (r32((uint32_t)(0x12553e1c)));
  /* 12537443 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12537447 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253744a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253744d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12537450 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537453 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12537456 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537459 jne 0x1253746d */
  if (!C.zf) goto L_1253746d;
  /* 1253745b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253745e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537461 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12537464 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537467 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253746a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1253746d:;
  /* 1253746d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537470 push eax */
  push32((uint32_t)(EAX));
  /* 12537471 call 0x12536f50 */
  push32(0x12537476u); f_12536f50();
  /* 12537476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537479 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253747f mov dword ptr [0x12553d90], eax */
  w32((uint32_t)(0x12553d90), (EAX));
L_12537484:;
  /* 12537484 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537487 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1253748a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253748d je 0x125374a5 */
  if (C.zf) goto L_125374a5;
  /* 1253748f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537492 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12537495 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537498 jl 0x125374b0 */
  if ((C.sf!=C.of)) goto L_125374b0;
  /* 1253749a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253749d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125374a0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125374a3 jg 0x125374b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_125374b0;
L_125374a5:;
  /* 125374a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125374a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125374ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125374ae jmp 0x12537484 */
  goto L_12537484;
L_125374b0:;
  /* 125374b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125374b3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125374b6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125374b9 jne 0x12537555 */
  if (!C.zf) goto L_12537555;
  /* 125374bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125374c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125374c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125374c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125374cb push edx */
  push32((uint32_t)(EDX));
  /* 125374cc call 0x12536f50 */
  push32(0x125374d1u); f_12536f50();
  /* 125374d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125374d4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125374d7 mov ecx, dword ptr [0x12553d90] */
  ECX = (r32((uint32_t)(0x12553d90)));
  /* 125374dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125374df mov dword ptr [0x12553d90], ecx */
  w32((uint32_t)(0x12553d90), (ECX));
L_125374e5:;
  /* 125374e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125374e8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125374eb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125374ee jl 0x12537506 */
  if ((C.sf!=C.of)) goto L_12537506;
  /* 125374f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125374f3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125374f6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125374f9 jg 0x12537506 */
  if ((!C.zf&&C.sf==C.of)) goto L_12537506;
  /* 125374fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125374fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537501 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12537504 jmp 0x125374e5 */
  goto L_125374e5;
L_12537506:;
  /* 12537506 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537509 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1253750c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253750f jne 0x12537555 */
  if (!C.zf) goto L_12537555;
  /* 12537511 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537514 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537517 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1253751a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253751d push ecx */
  push32((uint32_t)(ECX));
  /* 1253751e call 0x12536f50 */
  push32(0x12537523u); f_12536f50();
  /* 12537523 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537526 mov edx, dword ptr [0x12553d90] */
  EDX = (r32((uint32_t)(0x12553d90)));
  /* 1253752c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253752e mov dword ptr [0x12553d90], edx */
  w32((uint32_t)(0x12553d90), (EDX));
L_12537534:;
  /* 12537534 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537537 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1253753a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253753d jl 0x12537555 */
  if ((C.sf!=C.of)) goto L_12537555;
  /* 1253753f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537542 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12537545 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537548 jg 0x12537555 */
  if ((!C.zf&&C.sf==C.of)) goto L_12537555;
  /* 1253754a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253754d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537550 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12537553 jmp 0x12537534 */
  goto L_12537534;
L_12537555:;
  /* 12537555 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537559 je 0x12537569 */
  if (C.zf) goto L_12537569;
  /* 1253755b mov edx, dword ptr [0x12553d90] */
  EDX = (r32((uint32_t)(0x12553d90)));
  /* 12537561 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12537563 mov dword ptr [0x12553d90], edx */
  w32((uint32_t)(0x12553d90), (EDX));
L_12537569:;
  /* 12537569 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253756c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1253756f mov dword ptr [0x12553d94], ecx */
  w32((uint32_t)(0x12553d94), (ECX));
  /* 12537575 cmp dword ptr [0x12553d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12553d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253757c je 0x1253759e */
  if (C.zf) goto L_1253759e;
  /* 1253757e push 3 */
  push32((uint32_t)(0x3u));
  /* 12537580 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537583 push edx */
  push32((uint32_t)(EDX));
  /* 12537584 mov eax, dword ptr [0x12553e20] */
  EAX = (r32((uint32_t)(0x12553e20)));
  /* 12537589 push eax */
  push32((uint32_t)(EAX));
  /* 1253758a call 0x1252bec0 */
  push32(0x1253758fu); f_1252bec0();
  /* 1253758f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537592 mov ecx, dword ptr [0x12553e20] */
  ECX = (r32((uint32_t)(0x12553e20)));
  /* 12537598 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1253759c jmp 0x125375a7 */
  goto L_125375a7;
L_1253759e:;
  /* 1253759e mov edx, dword ptr [0x12553e20] */
  EDX = (r32((uint32_t)(0x12553e20)));
  /* 125375a4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_125375a7:;
  /* 125375a7 mov esp, ebp */
  ESP = (EBP);
  /* 125375a9 pop ebp */
  EBP = (pop32());
  /* 125375aa ret  */
  ESPCHK(0x12537200u, _esp0);
  ESP += 4; return;
}

/* FUN_100175b0 @ 0x125375b0 (46 bytes, 18 insns) */
void f_125375b0(void) {
  FTRACE(0x125375b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125375b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125375b1 mov ebp, esp */
  EBP = (ESP);
  /* 125375b3 push ecx */
  push32((uint32_t)(ECX));
  /* 125375b4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125375b6 call 0x1252c0a0 */
  push32(0x125375bbu); f_1252c0a0();
  /* 125375bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125375be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125375c1 push eax */
  push32((uint32_t)(EAX));
  /* 125375c2 call 0x125375e0 */
  push32(0x125375c7u); f_125375e0();
  /* 125375c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125375ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125375cd push 0xb */
  push32((uint32_t)(0xbu));
  /* 125375cf call 0x1252c140 */
  push32(0x125375d4u); f_1252c140();
  /* 125375d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125375d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125375da mov esp, ebp */
  ESP = (EBP);
  /* 125375dc pop ebp */
  EBP = (pop32());
  /* 125375dd ret  */
  ESPCHK(0x125375b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100175e0 @ 0x125375e0 (762 bytes, 246 insns) */
void f_125375e0(void) {
  FTRACE(0x125375e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125375e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125375e1 mov ebp, esp */
  EBP = (ESP);
  /* 125375e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125375e4 cmp dword ptr [0x12553d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12553d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125375eb jne 0x125375f4 */
  if (!C.zf) goto L_125375f4;
  /* 125375ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125375ef jmp 0x125378d6 */
  goto L_125378d6;
L_125375f4:;
  /* 125375f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125375f7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125375fa cmp ecx, dword ptr [0x12553e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12553e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537600 jne 0x12537614 */
  if (!C.zf) goto L_12537614;
  /* 12537602 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537605 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12537608 cmp eax, dword ptr [0x12553e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12553e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253760e je 0x125377db */
  if (C.zf) goto L_125377db;
L_12537614:;
  /* 12537614 cmp dword ptr [0x12554be8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554be8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253761b je 0x12537795 */
  if (C.zf) goto L_12537795;
  /* 12537621 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12537623 mov cx, word ptr [0x12554c88] */
  CX = (r16((uint32_t)(0x12554c88)));
  /* 1253762a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1253762c jne 0x12537689 */
  if (!C.zf) goto L_12537689;
  /* 1253762e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12537630 mov dx, word ptr [0x12554c96] */
  DX = (r16((uint32_t)(0x12554c96)));
  /* 12537637 push edx */
  push32((uint32_t)(EDX));
  /* 12537638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253763a mov ax, word ptr [0x12554c94] */
  AX = (r16((uint32_t)(0x12554c94)));
  /* 12537640 push eax */
  push32((uint32_t)(EAX));
  /* 12537641 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12537643 mov cx, word ptr [0x12554c92] */
  CX = (r16((uint32_t)(0x12554c92)));
  /* 1253764a push ecx */
  push32((uint32_t)(ECX));
  /* 1253764b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1253764d mov dx, word ptr [0x12554c90] */
  DX = (r16((uint32_t)(0x12554c90)));
  /* 12537654 push edx */
  push32((uint32_t)(EDX));
  /* 12537655 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12537659 mov ax, word ptr [0x12554c8c] */
  AX = (r16((uint32_t)(0x12554c8c)));
  /* 1253765f push eax */
  push32((uint32_t)(EAX));
  /* 12537660 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12537662 mov cx, word ptr [0x12554c8e] */
  CX = (r16((uint32_t)(0x12554c8e)));
  /* 12537669 push ecx */
  push32((uint32_t)(ECX));
  /* 1253766a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1253766c mov dx, word ptr [0x12554c8a] */
  DX = (r16((uint32_t)(0x12554c8a)));
  /* 12537673 push edx */
  push32((uint32_t)(EDX));
  /* 12537674 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537677 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1253767a push ecx */
  push32((uint32_t)(ECX));
  /* 1253767b push 1 */
  push32((uint32_t)(0x1u));
  /* 1253767d push 1 */
  push32((uint32_t)(0x1u));
  /* 1253767f call 0x125378e0 */
  push32(0x12537684u); f_125378e0();
  /* 12537684 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537687 jmp 0x125376da */
  goto L_125376da;
L_12537689:;
  /* 12537689 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1253768b mov dx, word ptr [0x12554c96] */
  DX = (r16((uint32_t)(0x12554c96)));
  /* 12537692 push edx */
  push32((uint32_t)(EDX));
  /* 12537693 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12537695 mov ax, word ptr [0x12554c94] */
  AX = (r16((uint32_t)(0x12554c94)));
  /* 1253769b push eax */
  push32((uint32_t)(EAX));
  /* 1253769c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1253769e mov cx, word ptr [0x12554c92] */
  CX = (r16((uint32_t)(0x12554c92)));
  /* 125376a5 push ecx */
  push32((uint32_t)(ECX));
  /* 125376a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125376a8 mov dx, word ptr [0x12554c90] */
  DX = (r16((uint32_t)(0x12554c90)));
  /* 125376af push edx */
  push32((uint32_t)(EDX));
  /* 125376b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125376b2 mov ax, word ptr [0x12554c8e] */
  AX = (r16((uint32_t)(0x12554c8e)));
  /* 125376b8 push eax */
  push32((uint32_t)(EAX));
  /* 125376b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125376bb push 0 */
  push32((uint32_t)(0x0u));
  /* 125376bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125376bf mov cx, word ptr [0x12554c8a] */
  CX = (r16((uint32_t)(0x12554c8a)));
  /* 125376c6 push ecx */
  push32((uint32_t)(ECX));
  /* 125376c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125376ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125376cd push eax */
  push32((uint32_t)(EAX));
  /* 125376ce push 0 */
  push32((uint32_t)(0x0u));
  /* 125376d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125376d2 call 0x125378e0 */
  push32(0x125376d7u); f_125378e0();
  /* 125376d7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125376da:;
  /* 125376da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125376dc mov cx, word ptr [0x12554c34] */
  CX = (r16((uint32_t)(0x12554c34)));
  /* 125376e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125376e5 jne 0x12537742 */
  if (!C.zf) goto L_12537742;
  /* 125376e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125376e9 mov dx, word ptr [0x12554c42] */
  DX = (r16((uint32_t)(0x12554c42)));
  /* 125376f0 push edx */
  push32((uint32_t)(EDX));
  /* 125376f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125376f3 mov ax, word ptr [0x12554c40] */
  AX = (r16((uint32_t)(0x12554c40)));
  /* 125376f9 push eax */
  push32((uint32_t)(EAX));
  /* 125376fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125376fc mov cx, word ptr [0x12554c3e] */
  CX = (r16((uint32_t)(0x12554c3e)));
  /* 12537703 push ecx */
  push32((uint32_t)(ECX));
  /* 12537704 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12537706 mov dx, word ptr [0x12554c3c] */
  DX = (r16((uint32_t)(0x12554c3c)));
  /* 1253770d push edx */
  push32((uint32_t)(EDX));
  /* 1253770e push 0 */
  push32((uint32_t)(0x0u));
  /* 12537710 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12537712 mov ax, word ptr [0x12554c38] */
  AX = (r16((uint32_t)(0x12554c38)));
  /* 12537718 push eax */
  push32((uint32_t)(EAX));
  /* 12537719 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1253771b mov cx, word ptr [0x12554c3a] */
  CX = (r16((uint32_t)(0x12554c3a)));
  /* 12537722 push ecx */
  push32((uint32_t)(ECX));
  /* 12537723 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12537725 mov dx, word ptr [0x12554c36] */
  DX = (r16((uint32_t)(0x12554c36)));
  /* 1253772c push edx */
  push32((uint32_t)(EDX));
  /* 1253772d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537730 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12537733 push ecx */
  push32((uint32_t)(ECX));
  /* 12537734 push 1 */
  push32((uint32_t)(0x1u));
  /* 12537736 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537738 call 0x125378e0 */
  push32(0x1253773du); f_125378e0();
  /* 1253773d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537740 jmp 0x12537793 */
  goto L_12537793;
L_12537742:;
  /* 12537742 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12537744 mov dx, word ptr [0x12554c42] */
  DX = (r16((uint32_t)(0x12554c42)));
  /* 1253774b push edx */
  push32((uint32_t)(EDX));
  /* 1253774c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253774e mov ax, word ptr [0x12554c40] */
  AX = (r16((uint32_t)(0x12554c40)));
  /* 12537754 push eax */
  push32((uint32_t)(EAX));
  /* 12537755 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12537757 mov cx, word ptr [0x12554c3e] */
  CX = (r16((uint32_t)(0x12554c3e)));
  /* 1253775e push ecx */
  push32((uint32_t)(ECX));
  /* 1253775f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12537761 mov dx, word ptr [0x12554c3c] */
  DX = (r16((uint32_t)(0x12554c3c)));
  /* 12537768 push edx */
  push32((uint32_t)(EDX));
  /* 12537769 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253776b mov ax, word ptr [0x12554c3a] */
  AX = (r16((uint32_t)(0x12554c3a)));
  /* 12537771 push eax */
  push32((uint32_t)(EAX));
  /* 12537772 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537774 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537776 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12537778 mov cx, word ptr [0x12554c36] */
  CX = (r16((uint32_t)(0x12554c36)));
  /* 1253777f push ecx */
  push32((uint32_t)(ECX));
  /* 12537780 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537783 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12537786 push eax */
  push32((uint32_t)(EAX));
  /* 12537787 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537789 push 0 */
  push32((uint32_t)(0x0u));
  /* 1253778b call 0x125378e0 */
  push32(0x12537790u); f_125378e0();
  /* 12537790 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12537793:;
  /* 12537793 jmp 0x125377db */
  goto L_125377db;
L_12537795:;
  /* 12537795 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537797 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537799 push 0 */
  push32((uint32_t)(0x0u));
  /* 1253779b push 2 */
  push32((uint32_t)(0x2u));
  /* 1253779d push 0 */
  push32((uint32_t)(0x0u));
  /* 1253779f push 0 */
  push32((uint32_t)(0x0u));
  /* 125377a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125377a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 125377a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125377a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 125377ab push edx */
  push32((uint32_t)(EDX));
  /* 125377ac push 1 */
  push32((uint32_t)(0x1u));
  /* 125377ae push 1 */
  push32((uint32_t)(0x1u));
  /* 125377b0 call 0x125378e0 */
  push32(0x125377b5u); f_125378e0();
  /* 125377b5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125377b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125377ba push 0 */
  push32((uint32_t)(0x0u));
  /* 125377bc push 0 */
  push32((uint32_t)(0x0u));
  /* 125377be push 2 */
  push32((uint32_t)(0x2u));
  /* 125377c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125377c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125377c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 125377c6 push 0xa */
  push32((uint32_t)(0xau));
  /* 125377c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125377cb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125377ce push ecx */
  push32((uint32_t)(ECX));
  /* 125377cf push 1 */
  push32((uint32_t)(0x1u));
  /* 125377d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125377d3 call 0x125378e0 */
  push32(0x125377d8u); f_125378e0();
  /* 125377d8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125377db:;
  /* 125377db mov edx, dword ptr [0x12553e2c] */
  EDX = (r32((uint32_t)(0x12553e2c)));
  /* 125377e1 cmp edx, dword ptr [0x12553e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12553e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125377e7 jge 0x12537834 */
  if ((C.sf==C.of)) goto L_12537834;
  /* 125377e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125377ec mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 125377ef cmp ecx, dword ptr [0x12553e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12553e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125377f5 jl 0x12537805 */
  if ((C.sf!=C.of)) goto L_12537805;
  /* 125377f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125377fa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125377fd cmp eax, dword ptr [0x12553e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12553e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537803 jle 0x1253780c */
  if ((C.zf||C.sf!=C.of)) goto L_1253780c;
L_12537805:;
  /* 12537805 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12537807 jmp 0x125378d6 */
  goto L_125378d6;
L_1253780c:;
  /* 1253780c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253780f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12537812 cmp edx, dword ptr [0x12553e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12553e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537818 jle 0x12537832 */
  if ((C.zf||C.sf!=C.of)) goto L_12537832;
  /* 1253781a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253781d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12537820 cmp ecx, dword ptr [0x12553e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12553e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537826 jge 0x12537832 */
  if ((C.sf==C.of)) goto L_12537832;
  /* 12537828 mov eax, 1 */
  EAX = (0x1u);
  /* 1253782d jmp 0x125378d6 */
  goto L_125378d6;
L_12537832:;
  /* 12537832 jmp 0x12537877 */
  goto L_12537877;
L_12537834:;
  /* 12537834 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537837 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1253783a cmp eax, dword ptr [0x12553e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12553e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537840 jl 0x12537850 */
  if ((C.sf!=C.of)) goto L_12537850;
  /* 12537842 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537845 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12537848 cmp edx, dword ptr [0x12553e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12553e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253784e jle 0x12537857 */
  if ((C.zf||C.sf!=C.of)) goto L_12537857;
L_12537850:;
  /* 12537850 mov eax, 1 */
  EAX = (0x1u);
  /* 12537855 jmp 0x125378d6 */
  goto L_125378d6;
L_12537857:;
  /* 12537857 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253785a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1253785d cmp ecx, dword ptr [0x12553e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12553e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537863 jle 0x12537877 */
  if ((C.zf||C.sf!=C.of)) goto L_12537877;
  /* 12537865 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537868 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1253786b cmp eax, dword ptr [0x12553e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12553e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537871 jge 0x12537877 */
  if ((C.sf==C.of)) goto L_12537877;
  /* 12537873 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12537875 jmp 0x125378d6 */
  goto L_125378d6;
L_12537877:;
  /* 12537877 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253787a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1253787d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12537880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537883 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12537885 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537887 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253788a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1253788d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12537893 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537895 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253789b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1253789e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125378a1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 125378a4 cmp edx, dword ptr [0x12553e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12553e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125378aa jne 0x125378c2 */
  if (!C.zf) goto L_125378c2;
  /* 125378ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125378af cmp eax, dword ptr [0x12553e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12553e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125378b5 jl 0x125378be */
  if ((C.sf!=C.of)) goto L_125378be;
  /* 125378b7 mov eax, 1 */
  EAX = (0x1u);
  /* 125378bc jmp 0x125378d6 */
  goto L_125378d6;
L_125378be:;
  /* 125378be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125378c0 jmp 0x125378d6 */
  goto L_125378d6;
L_125378c2:;
  /* 125378c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125378c5 cmp ecx, dword ptr [0x12553e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12553e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125378cb jge 0x125378d4 */
  if ((C.sf==C.of)) goto L_125378d4;
  /* 125378cd mov eax, 1 */
  EAX = (0x1u);
  /* 125378d2 jmp 0x125378d6 */
  goto L_125378d6;
L_125378d4:;
  /* 125378d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125378d6:;
  /* 125378d6 mov esp, ebp */
  ESP = (EBP);
  /* 125378d8 pop ebp */
  EBP = (pop32());
  /* 125378d9 ret  */
  ESPCHK(0x125375e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100178e0 @ 0x125378e0 (504 bytes, 145 insns) */
void f_125378e0(void) {
  FTRACE(0x125378e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125378e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125378e1 mov ebp, esp */
  EBP = (ESP);
  /* 125378e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125378e6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125378ea jne 0x125379bc */
  if (!C.zf) goto L_125379bc;
  /* 125378f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125378f3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 125378f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125378f8 jne 0x12537909 */
  if (!C.zf) goto L_12537909;
  /* 125378fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125378fd mov edx, dword ptr [ecx*4 + 0x12553e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12553e4c)));
  /* 12537904 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12537907 jmp 0x12537916 */
  goto L_12537916;
L_12537909:;
  /* 12537909 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1253790c mov ecx, dword ptr [eax*4 + 0x12553e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12553e80)));
  /* 12537913 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12537916:;
  /* 12537916 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537919 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253791c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1253791f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12537922 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12537925 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253792b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1253792e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537930 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12537933 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12537936 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12537939 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1253793d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1253793e mov ecx, 7 */
  ECX = (0x7u);
  /* 12537943 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12537945 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12537948 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253794b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253794e jg 0x12537969 */
  if ((!C.zf&&C.sf==C.of)) goto L_12537969;
  /* 12537950 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12537953 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12537956 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12537959 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253795c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1253795f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537962 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537964 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12537967 jmp 0x1253797d */
  goto L_1253797d;
L_12537969:;
  /* 12537969 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1253796c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253796f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12537972 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12537975 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537978 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253797a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1253797d:;
  /* 1253797d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537981 jne 0x125379ba */
  if (!C.zf) goto L_125379ba;
  /* 12537983 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12537986 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12537989 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1253798b jne 0x1253799c */
  if (!C.zf) goto L_1253799c;
  /* 1253798d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12537990 mov eax, dword ptr [edx*4 + 0x12553e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12553e50)));
  /* 12537997 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1253799a jmp 0x125379a9 */
  goto L_125379a9;
L_1253799c:;
  /* 1253799c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1253799f mov edx, dword ptr [ecx*4 + 0x12553e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12553e84)));
  /* 125379a6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125379a9:;
  /* 125379a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125379ac cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125379af jle 0x125379ba */
  if ((C.zf||C.sf!=C.of)) goto L_125379ba;
  /* 125379b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125379b4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125379b7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125379ba:;
  /* 125379ba jmp 0x125379f1 */
  goto L_125379f1;
L_125379bc:;
  /* 125379bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125379bf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125379c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125379c4 jne 0x125379d5 */
  if (!C.zf) goto L_125379d5;
  /* 125379c6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125379c9 mov ecx, dword ptr [eax*4 + 0x12553e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12553e4c)));
  /* 125379d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125379d3 jmp 0x125379e2 */
  goto L_125379e2;
L_125379d5:;
  /* 125379d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125379d8 mov eax, dword ptr [edx*4 + 0x12553e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12553e80)));
  /* 125379df mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_125379e2:;
  /* 125379e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125379e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125379e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125379eb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125379ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125379f1:;
  /* 125379f1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125379f5 jne 0x12537a31 */
  if (!C.zf) goto L_12537a31;
  /* 125379f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125379fa mov dword ptr [0x12553e2c], eax */
  w32((uint32_t)(0x12553e2c), (EAX));
  /* 125379ff mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12537a02 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12537a05 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12537a08 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537a0a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12537a0d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12537a10 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537a12 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12537a18 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12537a1b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537a1d mov dword ptr [0x12553e30], ecx */
  w32((uint32_t)(0x12553e30), (ECX));
  /* 12537a23 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12537a26 mov dword ptr [0x12553e28], edx */
  w32((uint32_t)(0x12553e28), (EDX));
  /* 12537a2c jmp 0x12537ad4 */
  goto L_12537ad4;
L_12537a31:;
  /* 12537a31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12537a34 mov dword ptr [0x12553e3c], eax */
  w32((uint32_t)(0x12553e3c), (EAX));
  /* 12537a39 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12537a3c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12537a3f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12537a42 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537a44 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12537a47 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12537a4a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537a4c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12537a52 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12537a55 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537a57 mov dword ptr [0x12553e40], ecx */
  w32((uint32_t)(0x12553e40), (ECX));
  /* 12537a5d mov edx, dword ptr [0x12553d98] */
  EDX = (r32((uint32_t)(0x12553d98)));
  /* 12537a63 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12537a69 mov eax, dword ptr [0x12553e40] */
  EAX = (r32((uint32_t)(0x12553e40)));
  /* 12537a6e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537a70 mov dword ptr [0x12553e40], eax */
  w32((uint32_t)(0x12553e40), (EAX));
  /* 12537a75 cmp dword ptr [0x12553e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12553e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537a7c jge 0x12537aa1 */
  if ((C.sf==C.of)) goto L_12537aa1;
  /* 12537a7e mov ecx, dword ptr [0x12553e40] */
  ECX = (r32((uint32_t)(0x12553e40)));
  /* 12537a84 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537a8a mov dword ptr [0x12553e40], ecx */
  w32((uint32_t)(0x12553e40), (ECX));
  /* 12537a90 mov edx, dword ptr [0x12553e3c] */
  EDX = (r32((uint32_t)(0x12553e3c)));
  /* 12537a96 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12537a99 mov dword ptr [0x12553e3c], edx */
  w32((uint32_t)(0x12553e3c), (EDX));
  /* 12537a9f jmp 0x12537acb */
  goto L_12537acb;
L_12537aa1:;
  /* 12537aa1 cmp dword ptr [0x12553e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12553e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537aab jl 0x12537acb */
  if ((C.sf!=C.of)) goto L_12537acb;
  /* 12537aad mov eax, dword ptr [0x12553e40] */
  EAX = (r32((uint32_t)(0x12553e40)));
  /* 12537ab2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12537ab7 mov dword ptr [0x12553e40], eax */
  w32((uint32_t)(0x12553e40), (EAX));
  /* 12537abc mov ecx, dword ptr [0x12553e3c] */
  ECX = (r32((uint32_t)(0x12553e3c)));
  /* 12537ac2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537ac5 mov dword ptr [0x12553e3c], ecx */
  w32((uint32_t)(0x12553e3c), (ECX));
L_12537acb:;
  /* 12537acb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12537ace mov dword ptr [0x12553e38], edx */
  w32((uint32_t)(0x12553e38), (EDX));
L_12537ad4:;
  /* 12537ad4 mov esp, ebp */
  ESP = (EBP);
  /* 12537ad6 pop ebp */
  EBP = (pop32());
  /* 12537ad7 ret  */
  ESPCHK(0x125378e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ae0 @ 0x12537ae0 (382 bytes, 135 insns) */
void f_12537ae0(void) {
  FTRACE(0x12537ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12537ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12537ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12537ae3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12537ae5 push 0x12550ed0 */
  push32((uint32_t)(0x12550ed0u));
  /* 12537aea push 0x125317a8 */
  push32((uint32_t)(0x125317a8u));
  /* 12537aef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12537af5 push eax */
  push32((uint32_t)(EAX));
  /* 12537af6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12537afd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537b00 push ebx */
  push32((uint32_t)(EBX));
  /* 12537b01 push esi */
  push32((uint32_t)(ESI));
  /* 12537b02 push edi */
  push32((uint32_t)(EDI));
  /* 12537b03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12537b06 cmp dword ptr [0x12554ca4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554ca4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537b0d jne 0x12537b52 */
  if (!C.zf) goto L_12537b52;
  /* 12537b0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12537b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537b13 push 1 */
  push32((uint32_t)(0x1u));
  /* 12537b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537b17 call dword ptr [0x125572dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572dc))), 0x12537b1du);
  /* 12537b1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12537b1f je 0x12537b2d */
  if (C.zf) goto L_12537b2d;
  /* 12537b21 mov dword ptr [0x12554ca4], 1 */
  w32((uint32_t)(0x12554ca4), (0x1u));
  /* 12537b2b jmp 0x12537b52 */
  goto L_12537b52;
L_12537b2d:;
  /* 12537b2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12537b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12537b31 push 1 */
  push32((uint32_t)(0x1u));
  /* 12537b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537b35 call dword ptr [0x125572f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572f4))), 0x12537b3bu);
  /* 12537b3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12537b3d je 0x12537b4b */
  if (C.zf) goto L_12537b4b;
  /* 12537b3f mov dword ptr [0x12554ca4], 2 */
  w32((uint32_t)(0x12554ca4), (0x2u));
  /* 12537b49 jmp 0x12537b52 */
  goto L_12537b52;
L_12537b4b:;
  /* 12537b4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12537b4d jmp 0x12537c61 */
  goto L_12537c61;
L_12537b52:;
  /* 12537b52 cmp dword ptr [0x12554ca4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12554ca4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537b59 jne 0x12537b76 */
  if (!C.zf) goto L_12537b76;
  /* 12537b5b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12537b5e push eax */
  push32((uint32_t)(EAX));
  /* 12537b5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12537b62 push ecx */
  push32((uint32_t)(ECX));
  /* 12537b63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12537b66 push edx */
  push32((uint32_t)(EDX));
  /* 12537b67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537b6a push eax */
  push32((uint32_t)(EAX));
  /* 12537b6b call dword ptr [0x125572dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572dc))), 0x12537b71u);
  /* 12537b71 jmp 0x12537c61 */
  goto L_12537c61;
L_12537b76:;
  /* 12537b76 cmp dword ptr [0x12554ca4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12554ca4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537b7d jne 0x12537c5f */
  if (!C.zf) goto L_12537c5f;
  /* 12537b83 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537b87 jne 0x12537b92 */
  if (!C.zf) goto L_12537b92;
  /* 12537b89 mov ecx, dword ptr [0x12554b58] */
  ECX = (r32((uint32_t)(0x12554b58)));
  /* 12537b8f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12537b92:;
  /* 12537b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537b94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537b96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12537b99 push edx */
  push32((uint32_t)(EDX));
  /* 12537b9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537b9d push eax */
  push32((uint32_t)(EAX));
  /* 12537b9e call dword ptr [0x125572f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572f4))), 0x12537ba4u);
  /* 12537ba4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12537ba7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537bab jne 0x12537bb4 */
  if (!C.zf) goto L_12537bb4;
  /* 12537bad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12537baf jmp 0x12537c61 */
  goto L_12537c61;
L_12537bb4:;
  /* 12537bb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12537bbb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12537bbe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537bc1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12537bc3 call 0x1252b840 */
  push32(0x12537bc8u); f_1252b840();
  /* 12537bc8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12537bcb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12537bce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12537bd1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12537bd4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12537bdb jmp 0x12537bf4 */
  goto L_12537bf4;
  /* 12537bdd mov eax, 1 */
  EAX = (0x1u);
  /* 12537be2 ret  */
  ESPCHK(0x12537ae0u, _esp0);
  ESP += 4; return;
  /* 12537be3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12537be6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12537bed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12537bf4:;
  /* 12537bf4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537bf8 jne 0x12537bfe */
  if (!C.zf) goto L_12537bfe;
  /* 12537bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12537bfc jmp 0x12537c61 */
  goto L_12537c61;
L_12537bfe:;
  /* 12537bfe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12537c01 push edx */
  push32((uint32_t)(EDX));
  /* 12537c02 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12537c05 push eax */
  push32((uint32_t)(EAX));
  /* 12537c06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12537c09 push ecx */
  push32((uint32_t)(ECX));
  /* 12537c0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537c0d push edx */
  push32((uint32_t)(EDX));
  /* 12537c0e call dword ptr [0x125572f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572f4))), 0x12537c14u);
  /* 12537c14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12537c16 jne 0x12537c1c */
  if (!C.zf) goto L_12537c1c;
  /* 12537c18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12537c1a jmp 0x12537c61 */
  goto L_12537c61;
L_12537c1c:;
  /* 12537c1c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537c20 jne 0x12537c3d */
  if (!C.zf) goto L_12537c3d;
  /* 12537c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537c26 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12537c28 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12537c2b push eax */
  push32((uint32_t)(EAX));
  /* 12537c2c push 1 */
  push32((uint32_t)(0x1u));
  /* 12537c2e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12537c31 push ecx */
  push32((uint32_t)(ECX));
  /* 12537c32 call dword ptr [0x12557324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557324))), 0x12537c38u);
  /* 12537c38 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12537c3b jmp 0x12537c5a */
  goto L_12537c5a;
L_12537c3d:;
  /* 12537c3d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12537c40 push edx */
  push32((uint32_t)(EDX));
  /* 12537c41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12537c44 push eax */
  push32((uint32_t)(EAX));
  /* 12537c45 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12537c47 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12537c4a push ecx */
  push32((uint32_t)(ECX));
  /* 12537c4b push 1 */
  push32((uint32_t)(0x1u));
  /* 12537c4d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12537c50 push edx */
  push32((uint32_t)(EDX));
  /* 12537c51 call dword ptr [0x12557324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557324))), 0x12537c57u);
  /* 12537c57 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12537c5a:;
  /* 12537c5a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12537c5d jmp 0x12537c61 */
  goto L_12537c61;
L_12537c5f:;
  /* 12537c5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12537c61:;
  /* 12537c61 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12537c64 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12537c67 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12537c6e pop edi */
  EDI = (pop32());
  /* 12537c6f pop esi */
  ESI = (pop32());
  /* 12537c70 pop ebx */
  EBX = (pop32());
  /* 12537c71 mov esp, ebp */
  ESP = (EBP);
  /* 12537c73 pop ebp */
  EBP = (pop32());
  /* 12537c74 ret  */
  ESPCHK(0x12537ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017c80 @ 0x12537c80 (398 bytes, 140 insns) */
void f_12537c80(void) {
  FTRACE(0x12537c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12537c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12537c81 mov ebp, esp */
  EBP = (ESP);
  /* 12537c83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12537c85 push 0x12550ee0 */
  push32((uint32_t)(0x12550ee0u));
  /* 12537c8a push 0x125317a8 */
  push32((uint32_t)(0x125317a8u));
  /* 12537c8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12537c95 push eax */
  push32((uint32_t)(EAX));
  /* 12537c96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12537c9d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537ca0 push ebx */
  push32((uint32_t)(EBX));
  /* 12537ca1 push esi */
  push32((uint32_t)(ESI));
  /* 12537ca2 push edi */
  push32((uint32_t)(EDI));
  /* 12537ca3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12537ca6 cmp dword ptr [0x12554ca8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554ca8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537cad jne 0x12537cf2 */
  if (!C.zf) goto L_12537cf2;
  /* 12537caf push 0 */
  push32((uint32_t)(0x0u));
  /* 12537cb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537cb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12537cb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537cb7 call dword ptr [0x125572dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572dc))), 0x12537cbdu);
  /* 12537cbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12537cbf je 0x12537ccd */
  if (C.zf) goto L_12537ccd;
  /* 12537cc1 mov dword ptr [0x12554ca8], 1 */
  w32((uint32_t)(0x12554ca8), (0x1u));
  /* 12537ccb jmp 0x12537cf2 */
  goto L_12537cf2;
L_12537ccd:;
  /* 12537ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 12537ccf push 0 */
  push32((uint32_t)(0x0u));
  /* 12537cd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12537cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537cd5 call dword ptr [0x125572f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572f4))), 0x12537cdbu);
  /* 12537cdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12537cdd je 0x12537ceb */
  if (C.zf) goto L_12537ceb;
  /* 12537cdf mov dword ptr [0x12554ca8], 2 */
  w32((uint32_t)(0x12554ca8), (0x2u));
  /* 12537ce9 jmp 0x12537cf2 */
  goto L_12537cf2;
L_12537ceb:;
  /* 12537ceb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12537ced jmp 0x12537e11 */
  goto L_12537e11;
L_12537cf2:;
  /* 12537cf2 cmp dword ptr [0x12554ca8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12554ca8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537cf9 jne 0x12537d16 */
  if (!C.zf) goto L_12537d16;
  /* 12537cfb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12537cfe push eax */
  push32((uint32_t)(EAX));
  /* 12537cff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12537d02 push ecx */
  push32((uint32_t)(ECX));
  /* 12537d03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12537d06 push edx */
  push32((uint32_t)(EDX));
  /* 12537d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537d0a push eax */
  push32((uint32_t)(EAX));
  /* 12537d0b call dword ptr [0x125572f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572f4))), 0x12537d11u);
  /* 12537d11 jmp 0x12537e11 */
  goto L_12537e11;
L_12537d16:;
  /* 12537d16 cmp dword ptr [0x12554ca8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12554ca8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537d1d jne 0x12537e0f */
  if (!C.zf) goto L_12537e0f;
  /* 12537d23 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537d27 jne 0x12537d32 */
  if (!C.zf) goto L_12537d32;
  /* 12537d29 mov ecx, dword ptr [0x12554b58] */
  ECX = (r32((uint32_t)(0x12554b58)));
  /* 12537d2f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12537d32:;
  /* 12537d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537d36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12537d39 push edx */
  push32((uint32_t)(EDX));
  /* 12537d3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537d3d push eax */
  push32((uint32_t)(EAX));
  /* 12537d3e call dword ptr [0x125572dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572dc))), 0x12537d44u);
  /* 12537d44 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12537d47 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537d4b jne 0x12537d54 */
  if (!C.zf) goto L_12537d54;
  /* 12537d4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12537d4f jmp 0x12537e11 */
  goto L_12537e11;
L_12537d54:;
  /* 12537d54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12537d5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12537d5e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12537d60 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537d63 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12537d65 call 0x1252b840 */
  push32(0x12537d6au); f_1252b840();
  /* 12537d6a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12537d6d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12537d70 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12537d73 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12537d76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12537d7d jmp 0x12537d96 */
  goto L_12537d96;
  /* 12537d7f mov eax, 1 */
  EAX = (0x1u);
  /* 12537d84 ret  */
  ESPCHK(0x12537c80u, _esp0);
  ESP += 4; return;
  /* 12537d85 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12537d88 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12537d8f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12537d96:;
  /* 12537d96 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537d9a jne 0x12537da0 */
  if (!C.zf) goto L_12537da0;
  /* 12537d9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12537d9e jmp 0x12537e11 */
  goto L_12537e11;
L_12537da0:;
  /* 12537da0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12537da3 push edx */
  push32((uint32_t)(EDX));
  /* 12537da4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12537da7 push eax */
  push32((uint32_t)(EAX));
  /* 12537da8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12537dab push ecx */
  push32((uint32_t)(ECX));
  /* 12537dac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537daf push edx */
  push32((uint32_t)(EDX));
  /* 12537db0 call dword ptr [0x125572dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572dc))), 0x12537db6u);
  /* 12537db6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12537db8 jne 0x12537dbe */
  if (!C.zf) goto L_12537dbe;
  /* 12537dba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12537dbc jmp 0x12537e11 */
  goto L_12537e11;
L_12537dbe:;
  /* 12537dbe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537dc2 jne 0x12537de6 */
  if (!C.zf) goto L_12537de6;
  /* 12537dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537dc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537dc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537dca push 0 */
  push32((uint32_t)(0x0u));
  /* 12537dcc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12537dce mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12537dd1 push eax */
  push32((uint32_t)(EAX));
  /* 12537dd2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12537dd7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12537dda push ecx */
  push32((uint32_t)(ECX));
  /* 12537ddb call dword ptr [0x12557370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557370))), 0x12537de1u);
  /* 12537de1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12537de4 jmp 0x12537e0a */
  goto L_12537e0a;
L_12537de6:;
  /* 12537de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12537dea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12537ded push edx */
  push32((uint32_t)(EDX));
  /* 12537dee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12537df1 push eax */
  push32((uint32_t)(EAX));
  /* 12537df2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12537df4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12537df7 push ecx */
  push32((uint32_t)(ECX));
  /* 12537df8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12537dfd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12537e00 push edx */
  push32((uint32_t)(EDX));
  /* 12537e01 call dword ptr [0x12557370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557370))), 0x12537e07u);
  /* 12537e07 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12537e0a:;
  /* 12537e0a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12537e0d jmp 0x12537e11 */
  goto L_12537e11;
L_12537e0f:;
  /* 12537e0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12537e11:;
  /* 12537e11 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12537e14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12537e17 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12537e1e pop edi */
  EDI = (pop32());
  /* 12537e1f pop esi */
  ESI = (pop32());
  /* 12537e20 pop ebx */
  EBX = (pop32());
  /* 12537e21 mov esp, ebp */
  ESP = (EBP);
  /* 12537e23 pop ebp */
  EBP = (pop32());
  /* 12537e24 ret  */
  ESPCHK(0x12537c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e30 @ 0x12537e30 (11 bytes, 6 insns) */
void f_12537e30(void) {
  FTRACE(0x12537e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12537e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12537e31 mov ebp, esp */
  EBP = (ESP);
  /* 12537e33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537e36 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537e39 pop ebp */
  EBP = (pop32());
  /* 12537e3a ret  */
  ESPCHK(0x12537e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e40 @ 0x12537e40 (147 bytes, 43 insns) */
void f_12537e40(void) {
  FTRACE(0x12537e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12537e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12537e41 mov ebp, esp */
  EBP = (ESP);
  /* 12537e43 push ecx */
  push32((uint32_t)(ECX));
  /* 12537e44 cmp dword ptr [0x12554b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537e4b jne 0x12537e67 */
  if (!C.zf) goto L_12537e67;
  /* 12537e4d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537e51 jl 0x12537e62 */
  if ((C.sf!=C.of)) goto L_12537e62;
  /* 12537e53 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537e57 jg 0x12537e62 */
  if ((!C.zf&&C.sf==C.of)) goto L_12537e62;
  /* 12537e59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537e5c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537e5f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12537e62:;
  /* 12537e62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537e65 jmp 0x12537ecf */
  goto L_12537ecf;
L_12537e67:;
  /* 12537e67 push 0x12554cd4 */
  push32((uint32_t)(0x12554cd4u));
  /* 12537e6c call dword ptr [0x125573ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573ac))), 0x12537e72u);
  /* 12537e72 cmp dword ptr [0x12554cc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554cc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537e79 je 0x12537e99 */
  if (C.zf) goto L_12537e99;
  /* 12537e7b push 0x12554cd4 */
  push32((uint32_t)(0x12554cd4u));
  /* 12537e80 call dword ptr [0x1255739c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255739c))), 0x12537e86u);
  /* 12537e86 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12537e88 call 0x1252c0a0 */
  push32(0x12537e8du); f_1252c0a0();
  /* 12537e8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537e90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12537e97 jmp 0x12537ea0 */
  goto L_12537ea0;
L_12537e99:;
  /* 12537e99 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12537ea0:;
  /* 12537ea0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 12537ea4 call 0x12537ee0 */
  push32(0x12537ea9u); f_12537ee0();
  /* 12537ea9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537eac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12537eaf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537eb3 je 0x12537ec1 */
  if (C.zf) goto L_12537ec1;
  /* 12537eb5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12537eb7 call 0x1252c140 */
  push32(0x12537ebcu); f_1252c140();
  /* 12537ebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537ebf jmp 0x12537ecc */
  goto L_12537ecc;
L_12537ec1:;
  /* 12537ec1 push 0x12554cd4 */
  push32((uint32_t)(0x12554cd4u));
  /* 12537ec6 call dword ptr [0x1255739c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255739c))), 0x12537eccu);
L_12537ecc:;
  /* 12537ecc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12537ecf:;
  /* 12537ecf mov esp, ebp */
  ESP = (EBP);
  /* 12537ed1 pop ebp */
  EBP = (pop32());
  /* 12537ed2 ret  */
  ESPCHK(0x12537e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ee0 @ 0x12537ee0 (299 bytes, 91 insns) */
void f_12537ee0(void) {
  FTRACE(0x12537ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12537ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12537ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12537ee3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12537ee6 cmp dword ptr [0x12554b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537eed jne 0x12537f0c */
  if (!C.zf) goto L_12537f0c;
  /* 12537eef cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537ef3 jl 0x12537f04 */
  if ((C.sf!=C.of)) goto L_12537f04;
  /* 12537ef5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537ef9 jg 0x12537f04 */
  if ((!C.zf&&C.sf==C.of)) goto L_12537f04;
  /* 12537efb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537efe add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12537f01 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12537f04:;
  /* 12537f04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537f07 jmp 0x12538007 */
  goto L_12538007;
L_12537f0c:;
  /* 12537f0c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537f13 jge 0x12537f53 */
  if ((C.sf==C.of)) goto L_12537f53;
  /* 12537f15 cmp dword ptr [0x12552ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12552ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537f1c jle 0x12537f31 */
  if ((C.zf||C.sf!=C.of)) goto L_12537f31;
  /* 12537f1e push 1 */
  push32((uint32_t)(0x1u));
  /* 12537f20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537f23 push ecx */
  push32((uint32_t)(ECX));
  /* 12537f24 call 0x1252e6b0 */
  push32(0x12537f29u); f_1252e6b0();
  /* 12537f29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537f2c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12537f2f jmp 0x12537f45 */
  goto L_12537f45;
L_12537f31:;
  /* 12537f31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537f34 mov eax, dword ptr [0x12552c98] */
  EAX = (r32((uint32_t)(0x12552c98)));
  /* 12537f39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12537f3b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12537f3f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12537f42 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12537f45:;
  /* 12537f45 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537f49 jne 0x12537f53 */
  if (!C.zf) goto L_12537f53;
  /* 12537f4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537f4e jmp 0x12538007 */
  goto L_12538007;
L_12537f53:;
  /* 12537f53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537f56 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12537f59 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12537f5f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12537f65 mov eax, dword ptr [0x12552c98] */
  EAX = (r32((uint32_t)(0x12552c98)));
  /* 12537f6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12537f6c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12537f70 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12537f76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12537f78 je 0x12537f9c */
  if (C.zf) goto L_12537f9c;
  /* 12537f7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537f7d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12537f80 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12537f86 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12537f89 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12537f8c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12537f8f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12537f93 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12537f9a jmp 0x12537fad */
  goto L_12537fad;
L_12537f9c:;
  /* 12537f9c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12537f9f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12537fa2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12537fa6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12537fad:;
  /* 12537fad push 1 */
  push32((uint32_t)(0x1u));
  /* 12537faf push 0 */
  push32((uint32_t)(0x0u));
  /* 12537fb1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12537fb3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12537fb6 push edx */
  push32((uint32_t)(EDX));
  /* 12537fb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12537fba push eax */
  push32((uint32_t)(EAX));
  /* 12537fbb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12537fbe push ecx */
  push32((uint32_t)(ECX));
  /* 12537fbf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12537fc4 mov edx, dword ptr [0x12554b48] */
  EDX = (r32((uint32_t)(0x12554b48)));
  /* 12537fca push edx */
  push32((uint32_t)(EDX));
  /* 12537fcb call 0x12530a90 */
  push32(0x12537fd0u); f_12530a90();
  /* 12537fd0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12537fd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12537fd6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537fda jne 0x12537fe1 */
  if (!C.zf) goto L_12537fe1;
  /* 12537fdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12537fdf jmp 0x12538007 */
  goto L_12538007;
L_12537fe1:;
  /* 12537fe1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12537fe5 jne 0x12537ff1 */
  if (!C.zf) goto L_12537ff1;
  /* 12537fe7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537fea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12537fef jmp 0x12538007 */
  goto L_12538007;
L_12537ff1:;
  /* 12537ff1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12537ff4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12537ff9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12537ffc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12538002 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12538005 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12538007:;
  /* 12538007 mov esp, ebp */
  ESP = (EBP);
  /* 12538009 pop ebp */
  EBP = (pop32());
  /* 1253800a ret  */
  ESPCHK(0x12537ee0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12538010 (52 bytes, 19 insns) */
void f_12538010(void) {
  FTRACE(0x12538010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12538010 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12538014 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12538018 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1253801a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1253801e jne 0x12538029 */
  if (!C.zf) goto L_12538029;
  /* 12538020 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12538024 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12538026 ret 0x10 */
  ESPCHK(0x12538010u, _esp0);
  ESP += 20; return;
L_12538029:;
  /* 12538029 push ebx */
  push32((uint32_t)(EBX));
  /* 1253802a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1253802c mov ebx, eax */
  EBX = (EAX);
  /* 1253802e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12538032 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12538036 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538038 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1253803c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1253803e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538040 pop ebx */
  EBX = (pop32());
  /* 12538041 ret 0x10 */
  ESPCHK(0x12538010u, _esp0);
  ESP += 20; return;
}

/* FUN_10018050 @ 0x12538050 (46 bytes, 18 insns) */
void f_12538050(void) {
  FTRACE(0x12538050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12538050 push ebp */
  push32((uint32_t)(EBP));
  /* 12538051 mov ebp, esp */
  EBP = (ESP);
  /* 12538053 push ecx */
  push32((uint32_t)(ECX));
  /* 12538054 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12538056 call 0x1252c0a0 */
  push32(0x1253805bu); f_1252c0a0();
  /* 1253805b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253805e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538061 push eax */
  push32((uint32_t)(EAX));
  /* 12538062 call 0x12538080 */
  push32(0x12538067u); f_12538080();
  /* 12538067 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253806a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1253806d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1253806f call 0x1252c140 */
  push32(0x12538074u); f_1252c140();
  /* 12538074 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538077 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253807a mov esp, ebp */
  ESP = (EBP);
  /* 1253807c pop ebp */
  EBP = (pop32());
  /* 1253807d ret  */
  ESPCHK(0x12538050u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12538080 (198 bytes, 69 insns) */
void f_12538080(void) {
  FTRACE(0x12538080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12538080 push ebp */
  push32((uint32_t)(EBP));
  /* 12538081 mov ebp, esp */
  EBP = (ESP);
  /* 12538083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12538086 mov eax, dword ptr [0x12554968] */
  EAX = (r32((uint32_t)(0x12554968)));
  /* 1253808b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1253808e cmp dword ptr [0x12556460], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12556460))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538095 jne 0x1253809e */
  if (!C.zf) goto L_1253809e;
  /* 12538097 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12538099 jmp 0x12538142 */
  goto L_12538142;
L_1253809e:;
  /* 1253809e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125380a2 jne 0x125380c6 */
  if (!C.zf) goto L_125380c6;
  /* 125380a4 cmp dword ptr [0x12554970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125380ab je 0x125380c6 */
  if (C.zf) goto L_125380c6;
  /* 125380ad call 0x125381a0 */
  push32(0x125380b2u); f_125381a0();
  /* 125380b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125380b4 je 0x125380bd */
  if (C.zf) goto L_125380bd;
  /* 125380b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125380b8 jmp 0x12538142 */
  goto L_12538142;
L_125380bd:;
  /* 125380bd mov ecx, dword ptr [0x12554968] */
  ECX = (r32((uint32_t)(0x12554968)));
  /* 125380c3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125380c6:;
  /* 125380c6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125380ca je 0x12538140 */
  if (C.zf) goto L_12538140;
  /* 125380cc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125380d0 je 0x12538140 */
  if (C.zf) goto L_12538140;
  /* 125380d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125380d5 push edx */
  push32((uint32_t)(EDX));
  /* 125380d6 call 0x1252b4d0 */
  push32(0x125380dbu); f_1252b4d0();
  /* 125380db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125380de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125380e1:;
  /* 125380e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125380e4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125380e7 je 0x12538140 */
  if (C.zf) goto L_12538140;
  /* 125380e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125380ec mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125380ee push edx */
  push32((uint32_t)(EDX));
  /* 125380ef call 0x1252b4d0 */
  push32(0x125380f4u); f_1252b4d0();
  /* 125380f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125380f7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125380fa jbe 0x12538135 */
  if ((C.cf||C.zf)) goto L_12538135;
  /* 125380fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125380ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12538101 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12538104 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12538108 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253810b jne 0x12538135 */
  if (!C.zf) goto L_12538135;
  /* 1253810d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12538110 push ecx */
  push32((uint32_t)(ECX));
  /* 12538111 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538114 push edx */
  push32((uint32_t)(EDX));
  /* 12538115 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538118 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1253811a push ecx */
  push32((uint32_t)(ECX));
  /* 1253811b call 0x12538150 */
  push32(0x12538120u); f_12538150();
  /* 12538120 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538123 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12538125 jne 0x12538135 */
  if (!C.zf) goto L_12538135;
  /* 12538127 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1253812a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1253812c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253812f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12538133 jmp 0x12538142 */
  goto L_12538142;
L_12538135:;
  /* 12538135 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538138 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253813b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1253813e jmp 0x125380e1 */
  goto L_125380e1;
L_12538140:;
  /* 12538140 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12538142:;
  /* 12538142 mov esp, ebp */
  ESP = (EBP);
  /* 12538144 pop ebp */
  EBP = (pop32());
  /* 12538145 ret  */
  ESPCHK(0x12538080u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12538150 (79 bytes, 32 insns) */
void f_12538150(void) {
  FTRACE(0x12538150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12538150 push ebp */
  push32((uint32_t)(EBP));
  /* 12538151 mov ebp, esp */
  EBP = (ESP);
  /* 12538153 push ecx */
  push32((uint32_t)(ECX));
  /* 12538154 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538158 jne 0x1253815e */
  if (!C.zf) goto L_1253815e;
  /* 1253815a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253815c jmp 0x1253819b */
  goto L_1253819b;
L_1253815e:;
  /* 1253815e mov eax, dword ptr [0x12556024] */
  EAX = (r32((uint32_t)(0x12556024)));
  /* 12538163 push eax */
  push32((uint32_t)(EAX));
  /* 12538164 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12538167 push ecx */
  push32((uint32_t)(ECX));
  /* 12538168 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1253816b push edx */
  push32((uint32_t)(EDX));
  /* 1253816c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1253816f push eax */
  push32((uint32_t)(EAX));
  /* 12538170 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538173 push ecx */
  push32((uint32_t)(ECX));
  /* 12538174 push 1 */
  push32((uint32_t)(0x1u));
  /* 12538176 mov edx, dword ptr [0x125562c4] */
  EDX = (r32((uint32_t)(0x125562c4)));
  /* 1253817c push edx */
  push32((uint32_t)(EDX));
  /* 1253817d call 0x12538250 */
  push32(0x12538182u); f_12538250();
  /* 12538182 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538185 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12538188 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253818c jne 0x12538195 */
  if (!C.zf) goto L_12538195;
  /* 1253818e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12538193 jmp 0x1253819b */
  goto L_1253819b;
L_12538195:;
  /* 12538195 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12538198 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1253819b:;
  /* 1253819b mov esp, ebp */
  ESP = (EBP);
  /* 1253819d pop ebp */
  EBP = (pop32());
  /* 1253819e ret  */
  ESPCHK(0x12538150u, _esp0);
  ESP += 4; return;
}

/* FUN_100181a0 @ 0x125381a0 (174 bytes, 66 insns) */
void f_125381a0(void) {
  FTRACE(0x125381a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125381a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125381a1 mov ebp, esp */
  EBP = (ESP);
  /* 125381a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125381a6 mov eax, dword ptr [0x12554970] */
  EAX = (r32((uint32_t)(0x12554970)));
  /* 125381ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125381ae:;
  /* 125381ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125381b1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125381b4 je 0x12538248 */
  if (C.zf) goto L_12538248;
  /* 125381ba push 0 */
  push32((uint32_t)(0x0u));
  /* 125381bc push 0 */
  push32((uint32_t)(0x0u));
  /* 125381be push 0 */
  push32((uint32_t)(0x0u));
  /* 125381c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125381c2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125381c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125381c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125381c9 push eax */
  push32((uint32_t)(EAX));
  /* 125381ca push 0 */
  push32((uint32_t)(0x0u));
  /* 125381cc push 1 */
  push32((uint32_t)(0x1u));
  /* 125381ce call dword ptr [0x12557370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557370))), 0x125381d4u);
  /* 125381d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125381d7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125381db jne 0x125381e2 */
  if (!C.zf) goto L_125381e2;
  /* 125381dd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125381e0 jmp 0x1253824a */
  goto L_1253824a;
L_125381e2:;
  /* 125381e2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 125381e4 push 0x12550eec */
  push32((uint32_t)(0x12550eecu));
  /* 125381e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125381eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125381ee push ecx */
  push32((uint32_t)(ECX));
  /* 125381ef call 0x125286a0 */
  push32(0x125381f4u); f_125286a0();
  /* 125381f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125381f7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125381fa cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125381fe jne 0x12538205 */
  if (!C.zf) goto L_12538205;
  /* 12538200 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12538203 jmp 0x1253824a */
  goto L_1253824a;
L_12538205:;
  /* 12538205 push 0 */
  push32((uint32_t)(0x0u));
  /* 12538207 push 0 */
  push32((uint32_t)(0x0u));
  /* 12538209 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253820c push edx */
  push32((uint32_t)(EDX));
  /* 1253820d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538210 push eax */
  push32((uint32_t)(EAX));
  /* 12538211 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12538213 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12538216 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12538218 push edx */
  push32((uint32_t)(EDX));
  /* 12538219 push 0 */
  push32((uint32_t)(0x0u));
  /* 1253821b push 1 */
  push32((uint32_t)(0x1u));
  /* 1253821d call dword ptr [0x12557370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557370))), 0x12538223u);
  /* 12538223 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12538225 jne 0x1253822c */
  if (!C.zf) goto L_1253822c;
  /* 12538227 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1253822a jmp 0x1253824a */
  goto L_1253824a;
L_1253822c:;
  /* 1253822c push 0 */
  push32((uint32_t)(0x0u));
  /* 1253822e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538231 push eax */
  push32((uint32_t)(EAX));
  /* 12538232 call 0x125386a0 */
  push32(0x12538237u); f_125386a0();
  /* 12538237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253823a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253823d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538240 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12538243 jmp 0x125381ae */
  goto L_125381ae;
L_12538248:;
  /* 12538248 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1253824a:;
  /* 1253824a mov esp, ebp */
  ESP = (EBP);
  /* 1253824c pop ebp */
  EBP = (pop32());
  /* 1253824d ret  */
  ESPCHK(0x125381a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018250 @ 0x12538250 (970 bytes, 340 insns) */
void f_12538250(void) {
  FTRACE(0x12538250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12538250 push ebp */
  push32((uint32_t)(EBP));
  /* 12538251 mov ebp, esp */
  EBP = (ESP);
  /* 12538253 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12538255 push 0x12550f40 */
  push32((uint32_t)(0x12550f40u));
  /* 1253825a push 0x125317a8 */
  push32((uint32_t)(0x125317a8u));
  /* 1253825f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12538265 push eax */
  push32((uint32_t)(EAX));
  /* 12538266 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1253826d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538270 push ebx */
  push32((uint32_t)(EBX));
  /* 12538271 push esi */
  push32((uint32_t)(ESI));
  /* 12538272 push edi */
  push32((uint32_t)(EDI));
  /* 12538273 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12538276 cmp dword ptr [0x12554cac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554cac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253827d jne 0x125382d6 */
  if (!C.zf) goto L_125382d6;
  /* 1253827f push 1 */
  push32((uint32_t)(0x1u));
  /* 12538281 push 0x1255059c */
  push32((uint32_t)(0x1255059cu));
  /* 12538286 push 1 */
  push32((uint32_t)(0x1u));
  /* 12538288 push 0x1255059c */
  push32((uint32_t)(0x1255059cu));
  /* 1253828d push 0 */
  push32((uint32_t)(0x0u));
  /* 1253828f push 0 */
  push32((uint32_t)(0x0u));
  /* 12538291 call dword ptr [0x125572d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572d8))), 0x12538297u);
  /* 12538297 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12538299 je 0x125382a7 */
  if (C.zf) goto L_125382a7;
  /* 1253829b mov dword ptr [0x12554cac], 1 */
  w32((uint32_t)(0x12554cac), (0x1u));
  /* 125382a5 jmp 0x125382d6 */
  goto L_125382d6;
L_125382a7:;
  /* 125382a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125382a9 push 0x12550598 */
  push32((uint32_t)(0x12550598u));
  /* 125382ae push 1 */
  push32((uint32_t)(0x1u));
  /* 125382b0 push 0x12550598 */
  push32((uint32_t)(0x12550598u));
  /* 125382b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125382b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125382b9 call dword ptr [0x125572e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572e4))), 0x125382bfu);
  /* 125382bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125382c1 je 0x125382cf */
  if (C.zf) goto L_125382cf;
  /* 125382c3 mov dword ptr [0x12554cac], 2 */
  w32((uint32_t)(0x12554cac), (0x2u));
  /* 125382cd jmp 0x125382d6 */
  goto L_125382d6;
L_125382cf:;
  /* 125382cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125382d1 jmp 0x12538634 */
  goto L_12538634;
L_125382d6:;
  /* 125382d6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125382da jle 0x125382ef */
  if ((C.zf||C.sf!=C.of)) goto L_125382ef;
  /* 125382dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125382df push eax */
  push32((uint32_t)(EAX));
  /* 125382e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125382e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125382e4 call 0x12538650 */
  push32(0x125382e9u); f_12538650();
  /* 125382e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125382ec mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_125382ef:;
  /* 125382ef cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125382f3 jle 0x12538308 */
  if ((C.zf||C.sf!=C.of)) goto L_12538308;
  /* 125382f5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125382f8 push edx */
  push32((uint32_t)(EDX));
  /* 125382f9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125382fc push eax */
  push32((uint32_t)(EAX));
  /* 125382fd call 0x12538650 */
  push32(0x12538302u); f_12538650();
  /* 12538302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538305 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12538308:;
  /* 12538308 cmp dword ptr [0x12554cac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12554cac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253830f jne 0x12538334 */
  if (!C.zf) goto L_12538334;
  /* 12538311 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12538314 push ecx */
  push32((uint32_t)(ECX));
  /* 12538315 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12538318 push edx */
  push32((uint32_t)(EDX));
  /* 12538319 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1253831c push eax */
  push32((uint32_t)(EAX));
  /* 1253831d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12538320 push ecx */
  push32((uint32_t)(ECX));
  /* 12538321 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12538324 push edx */
  push32((uint32_t)(EDX));
  /* 12538325 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538328 push eax */
  push32((uint32_t)(EAX));
  /* 12538329 call dword ptr [0x125572e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572e4))), 0x1253832fu);
  /* 1253832f jmp 0x12538634 */
  goto L_12538634;
L_12538334:;
  /* 12538334 cmp dword ptr [0x12554cac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12554cac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253833b jne 0x12538632 */
  if (!C.zf) goto L_12538632;
  /* 12538341 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538345 jne 0x12538350 */
  if (!C.zf) goto L_12538350;
  /* 12538347 mov ecx, dword ptr [0x12554b58] */
  ECX = (r32((uint32_t)(0x12554b58)));
  /* 1253834d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12538350:;
  /* 12538350 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538354 je 0x12538360 */
  if (C.zf) goto L_12538360;
  /* 12538356 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253835a jne 0x125384dc */
  if (!C.zf) goto L_125384dc;
L_12538360:;
  /* 12538360 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12538363 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538366 jne 0x12538372 */
  if (!C.zf) goto L_12538372;
  /* 12538368 mov eax, 2 */
  EAX = (0x2u);
  /* 1253836d jmp 0x12538634 */
  goto L_12538634;
L_12538372:;
  /* 12538372 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538376 jle 0x12538382 */
  if ((C.zf||C.sf!=C.of)) goto L_12538382;
  /* 12538378 mov eax, 1 */
  EAX = (0x1u);
  /* 1253837d jmp 0x12538634 */
  goto L_12538634;
L_12538382:;
  /* 12538382 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538386 jle 0x12538392 */
  if ((C.zf||C.sf!=C.of)) goto L_12538392;
  /* 12538388 mov eax, 3 */
  EAX = (0x3u);
  /* 1253838d jmp 0x12538634 */
  goto L_12538634;
L_12538392:;
  /* 12538392 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12538395 push eax */
  push32((uint32_t)(EAX));
  /* 12538396 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12538399 push ecx */
  push32((uint32_t)(ECX));
  /* 1253839a call dword ptr [0x12557330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557330))), 0x125383a0u);
  /* 125383a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125383a2 jne 0x125383ab */
  if (!C.zf) goto L_125383ab;
  /* 125383a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125383a6 jmp 0x12538634 */
  goto L_12538634;
L_125383ab:;
  /* 125383ab cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125383af jne 0x125383b7 */
  if (!C.zf) goto L_125383b7;
  /* 125383b1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125383b5 je 0x125383e4 */
  if (C.zf) goto L_125383e4;
L_125383b7:;
  /* 125383b7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125383bb jne 0x125383c3 */
  if (!C.zf) goto L_125383c3;
  /* 125383bd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125383c1 je 0x125383e4 */
  if (C.zf) goto L_125383e4;
L_125383c3:;
  /* 125383c3 push 0x12550f00 */
  push32((uint32_t)(0x12550f00u));
  /* 125383c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125383ca push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 125383cf push 0x12550ef8 */
  push32((uint32_t)(0x12550ef8u));
  /* 125383d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 125383d6 call 0x12527760 */
  push32(0x125383dbu); f_12527760();
  /* 125383db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125383de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125383e1 jne 0x125383e4 */
  if (!C.zf) goto L_125383e4;
  /* 125383e3 int3  */
  x86_unimpl("int3 @ 0x125383e3");
L_125383e4:;
  /* 125383e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125383e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125383e8 jne 0x125383ab */
  if (!C.zf) goto L_125383ab;
  /* 125383ea cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125383ee jle 0x12538463 */
  if ((C.zf||C.sf!=C.of)) goto L_12538463;
  /* 125383f0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125383f4 jae 0x12538400 */
  if (!C.cf) goto L_12538400;
  /* 125383f6 mov eax, 3 */
  EAX = (0x3u);
  /* 125383fb jmp 0x12538634 */
  goto L_12538634;
L_12538400:;
  /* 12538400 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12538403 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12538406 jmp 0x12538411 */
  goto L_12538411;
L_12538408:;
  /* 12538408 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1253840b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253840e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12538411:;
  /* 12538411 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12538414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12538416 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12538418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253841a je 0x12538459 */
  if (C.zf) goto L_12538459;
  /* 1253841c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1253841f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12538421 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12538424 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12538426 je 0x12538459 */
  if (C.zf) goto L_12538459;
  /* 12538428 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1253842b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1253842d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1253842f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12538432 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12538434 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12538436 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538438 jl 0x12538457 */
  if ((C.sf!=C.of)) goto L_12538457;
  /* 1253843a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1253843d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1253843f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12538441 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12538444 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12538446 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12538449 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253844b jg 0x12538457 */
  if ((!C.zf&&C.sf==C.of)) goto L_12538457;
  /* 1253844d mov eax, 2 */
  EAX = (0x2u);
  /* 12538452 jmp 0x12538634 */
  goto L_12538634;
L_12538457:;
  /* 12538457 jmp 0x12538408 */
  goto L_12538408;
L_12538459:;
  /* 12538459 mov eax, 3 */
  EAX = (0x3u);
  /* 1253845e jmp 0x12538634 */
  goto L_12538634;
L_12538463:;
  /* 12538463 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538467 jle 0x125384dc */
  if ((C.zf||C.sf!=C.of)) goto L_125384dc;
  /* 12538469 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253846d jae 0x12538479 */
  if (!C.cf) goto L_12538479;
  /* 1253846f mov eax, 1 */
  EAX = (0x1u);
  /* 12538474 jmp 0x12538634 */
  goto L_12538634;
L_12538479:;
  /* 12538479 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1253847c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1253847f jmp 0x1253848a */
  goto L_1253848a;
L_12538481:;
  /* 12538481 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12538484 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538487 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1253848a:;
  /* 1253848a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1253848d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1253848f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12538491 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12538493 je 0x125384d2 */
  if (C.zf) goto L_125384d2;
  /* 12538495 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12538498 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1253849a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1253849d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1253849f je 0x125384d2 */
  if (C.zf) goto L_125384d2;
  /* 125384a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125384a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125384a6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125384a8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 125384ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125384ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125384af cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125384b1 jl 0x125384d0 */
  if ((C.sf!=C.of)) goto L_125384d0;
  /* 125384b3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125384b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125384b8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125384ba mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 125384bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125384bf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125384c2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125384c4 jg 0x125384d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_125384d0;
  /* 125384c6 mov eax, 2 */
  EAX = (0x2u);
  /* 125384cb jmp 0x12538634 */
  goto L_12538634;
L_125384d0:;
  /* 125384d0 jmp 0x12538481 */
  goto L_12538481;
L_125384d2:;
  /* 125384d2 mov eax, 1 */
  EAX = (0x1u);
  /* 125384d7 jmp 0x12538634 */
  goto L_12538634;
L_125384dc:;
  /* 125384dc push 0 */
  push32((uint32_t)(0x0u));
  /* 125384de push 0 */
  push32((uint32_t)(0x0u));
  /* 125384e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125384e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125384e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125384e7 push edx */
  push32((uint32_t)(EDX));
  /* 125384e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 125384ea mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 125384ed push eax */
  push32((uint32_t)(EAX));
  /* 125384ee call dword ptr [0x12557324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557324))), 0x125384f4u);
  /* 125384f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125384f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125384fb jne 0x12538504 */
  if (!C.zf) goto L_12538504;
  /* 125384fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125384ff jmp 0x12538634 */
  goto L_12538634;
L_12538504:;
  /* 12538504 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1253850b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1253850e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12538510 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538513 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12538515 call 0x1252b840 */
  push32(0x1253851au); f_1252b840();
  /* 1253851a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1253851d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12538520 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12538523 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12538526 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1253852d jmp 0x12538546 */
  goto L_12538546;
  /* 1253852f mov eax, 1 */
  EAX = (0x1u);
  /* 12538534 ret  */
  ESPCHK(0x12538250u, _esp0);
  ESP += 4; return;
  /* 12538535 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12538538 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1253853f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12538546:;
  /* 12538546 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253854a jne 0x12538553 */
  if (!C.zf) goto L_12538553;
  /* 1253854c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253854e jmp 0x12538634 */
  goto L_12538634;
L_12538553:;
  /* 12538553 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12538556 push edx */
  push32((uint32_t)(EDX));
  /* 12538557 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1253855a push eax */
  push32((uint32_t)(EAX));
  /* 1253855b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1253855e push ecx */
  push32((uint32_t)(ECX));
  /* 1253855f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12538562 push edx */
  push32((uint32_t)(EDX));
  /* 12538563 push 1 */
  push32((uint32_t)(0x1u));
  /* 12538565 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12538568 push eax */
  push32((uint32_t)(EAX));
  /* 12538569 call dword ptr [0x12557324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557324))), 0x1253856fu);
  /* 1253856f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12538571 jne 0x1253857a */
  if (!C.zf) goto L_1253857a;
  /* 12538573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12538575 jmp 0x12538634 */
  goto L_12538634;
L_1253857a:;
  /* 1253857a push 0 */
  push32((uint32_t)(0x0u));
  /* 1253857c push 0 */
  push32((uint32_t)(0x0u));
  /* 1253857e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12538581 push ecx */
  push32((uint32_t)(ECX));
  /* 12538582 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12538585 push edx */
  push32((uint32_t)(EDX));
  /* 12538586 push 9 */
  push32((uint32_t)(0x9u));
  /* 12538588 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1253858b push eax */
  push32((uint32_t)(EAX));
  /* 1253858c call dword ptr [0x12557324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557324))), 0x12538592u);
  /* 12538592 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12538595 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538599 jne 0x125385a2 */
  if (!C.zf) goto L_125385a2;
  /* 1253859b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253859d jmp 0x12538634 */
  goto L_12538634;
L_125385a2:;
  /* 125385a2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125385a9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125385ac shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125385ae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125385b1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125385b3 call 0x1252b840 */
  push32(0x125385b8u); f_1252b840();
  /* 125385b8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 125385bb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125385be mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 125385c1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 125385c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125385cb jmp 0x125385e4 */
  goto L_125385e4;
  /* 125385cd mov eax, 1 */
  EAX = (0x1u);
  /* 125385d2 ret  */
  ESPCHK(0x12538250u, _esp0);
  ESP += 4; return;
  /* 125385d3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125385d6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 125385dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125385e4:;
  /* 125385e4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125385e8 jne 0x125385ee */
  if (!C.zf) goto L_125385ee;
  /* 125385ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125385ec jmp 0x12538634 */
  goto L_12538634;
L_125385ee:;
  /* 125385ee mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125385f1 push edx */
  push32((uint32_t)(EDX));
  /* 125385f2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125385f5 push eax */
  push32((uint32_t)(EAX));
  /* 125385f6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125385f9 push ecx */
  push32((uint32_t)(ECX));
  /* 125385fa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125385fd push edx */
  push32((uint32_t)(EDX));
  /* 125385fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12538600 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12538603 push eax */
  push32((uint32_t)(EAX));
  /* 12538604 call dword ptr [0x12557324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557324))), 0x1253860au);
  /* 1253860a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1253860c jne 0x12538612 */
  if (!C.zf) goto L_12538612;
  /* 1253860e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12538610 jmp 0x12538634 */
  goto L_12538634;
L_12538612:;
  /* 12538612 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12538615 push ecx */
  push32((uint32_t)(ECX));
  /* 12538616 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12538619 push edx */
  push32((uint32_t)(EDX));
  /* 1253861a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1253861d push eax */
  push32((uint32_t)(EAX));
  /* 1253861e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12538621 push ecx */
  push32((uint32_t)(ECX));
  /* 12538622 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12538625 push edx */
  push32((uint32_t)(EDX));
  /* 12538626 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538629 push eax */
  push32((uint32_t)(EAX));
  /* 1253862a call dword ptr [0x125572d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572d8))), 0x12538630u);
  /* 12538630 jmp 0x12538634 */
  goto L_12538634;
L_12538632:;
  /* 12538632 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12538634:;
  /* 12538634 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12538637 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1253863a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12538641 pop edi */
  EDI = (pop32());
  /* 12538642 pop esi */
  ESI = (pop32());
  /* 12538643 pop ebx */
  EBX = (pop32());
  /* 12538644 mov esp, ebp */
  ESP = (EBP);
  /* 12538646 pop ebp */
  EBP = (pop32());
  /* 12538647 ret  */
  ESPCHK(0x12538250u, _esp0);
  ESP += 4; return;
}

/* FUN_10018650 @ 0x12538650 (80 bytes, 32 insns) */
void f_12538650(void) {
  FTRACE(0x12538650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12538650 push ebp */
  push32((uint32_t)(EBP));
  /* 12538651 mov ebp, esp */
  EBP = (ESP);
  /* 12538653 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12538656 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12538659 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1253865c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253865f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12538662:;
  /* 12538662 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538665 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538668 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253866b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1253866e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12538670 je 0x12538687 */
  if (C.zf) goto L_12538687;
  /* 12538672 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12538675 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12538678 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1253867a je 0x12538687 */
  if (C.zf) goto L_12538687;
  /* 1253867c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253867f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538682 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12538685 jmp 0x12538662 */
  goto L_12538662;
L_12538687:;
  /* 12538687 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253868a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1253868d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1253868f jne 0x12538699 */
  if (!C.zf) goto L_12538699;
  /* 12538691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12538694 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12538697 jmp 0x1253869c */
  goto L_1253869c;
L_12538699:;
  /* 12538699 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1253869c:;
  /* 1253869c mov esp, ebp */
  ESP = (EBP);
  /* 1253869e pop ebp */
  EBP = (pop32());
  /* 1253869f ret  */
  ESPCHK(0x12538650u, _esp0);
  ESP += 4; return;
}

/* FUN_100186a0 @ 0x125386a0 (736 bytes, 224 insns) */
void f_125386a0(void) {
  FTRACE(0x125386a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125386a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125386a1 mov ebp, esp */
  EBP = (ESP);
  /* 125386a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125386a6 push esi */
  push32((uint32_t)(ESI));
  /* 125386a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125386ab je 0x125386cc */
  if (C.zf) goto L_125386cc;
  /* 125386ad push 0x3d */
  push32((uint32_t)(0x3du));
  /* 125386af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125386b2 push eax */
  push32((uint32_t)(EAX));
  /* 125386b3 call 0x12538af0 */
  push32(0x125386b8u); f_12538af0();
  /* 125386b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125386bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125386be cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125386c2 je 0x125386cc */
  if (C.zf) goto L_125386cc;
  /* 125386c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125386c7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125386ca jne 0x125386d4 */
  if (!C.zf) goto L_125386d4;
L_125386cc:;
  /* 125386cc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125386cf jmp 0x1253897b */
  goto L_1253897b;
L_125386d4:;
  /* 125386d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125386d7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125386db neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125386dd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125386df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 125386e0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125386e3 mov ecx, dword ptr [0x12554968] */
  ECX = (r32((uint32_t)(0x12554968)));
  /* 125386e9 cmp ecx, dword ptr [0x1255496c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1255496c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125386ef jne 0x12538705 */
  if (!C.zf) goto L_12538705;
  /* 125386f1 mov edx, dword ptr [0x12554968] */
  EDX = (r32((uint32_t)(0x12554968)));
  /* 125386f7 push edx */
  push32((uint32_t)(EDX));
  /* 125386f8 call 0x12538a00 */
  push32(0x125386fdu); f_12538a00();
  /* 125386fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538700 mov dword ptr [0x12554968], eax */
  w32((uint32_t)(0x12554968), (EAX));
L_12538705:;
  /* 12538705 cmp dword ptr [0x12554968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253870c jne 0x125387c5 */
  if (!C.zf) goto L_125387c5;
  /* 12538712 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538716 je 0x12538737 */
  if (C.zf) goto L_12538737;
  /* 12538718 cmp dword ptr [0x12554970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253871f je 0x12538737 */
  if (C.zf) goto L_12538737;
  /* 12538721 call 0x125381a0 */
  push32(0x12538726u); f_125381a0();
  /* 12538726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12538728 je 0x12538732 */
  if (C.zf) goto L_12538732;
  /* 1253872a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1253872d jmp 0x1253897b */
  goto L_1253897b;
L_12538732:;
  /* 12538732 jmp 0x125387c5 */
  goto L_125387c5;
L_12538737:;
  /* 12538737 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253873b je 0x12538744 */
  if (C.zf) goto L_12538744;
  /* 1253873d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1253873f jmp 0x1253897b */
  goto L_1253897b;
L_12538744:;
  /* 12538744 cmp dword ptr [0x12554968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253874b jne 0x12538784 */
  if (!C.zf) goto L_12538784;
  /* 1253874d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12538752 push 0x12550f58 */
  push32((uint32_t)(0x12550f58u));
  /* 12538757 push 2 */
  push32((uint32_t)(0x2u));
  /* 12538759 push 4 */
  push32((uint32_t)(0x4u));
  /* 1253875b call 0x125286a0 */
  push32(0x12538760u); f_125286a0();
  /* 12538760 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538763 mov dword ptr [0x12554968], eax */
  w32((uint32_t)(0x12554968), (EAX));
  /* 12538768 cmp dword ptr [0x12554968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253876f jne 0x12538779 */
  if (!C.zf) goto L_12538779;
  /* 12538771 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12538774 jmp 0x1253897b */
  goto L_1253897b;
L_12538779:;
  /* 12538779 mov eax, dword ptr [0x12554968] */
  EAX = (r32((uint32_t)(0x12554968)));
  /* 1253877e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12538784:;
  /* 12538784 cmp dword ptr [0x12554970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253878b jne 0x125387c5 */
  if (!C.zf) goto L_125387c5;
  /* 1253878d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12538792 push 0x12550f58 */
  push32((uint32_t)(0x12550f58u));
  /* 12538797 push 2 */
  push32((uint32_t)(0x2u));
  /* 12538799 push 4 */
  push32((uint32_t)(0x4u));
  /* 1253879b call 0x125286a0 */
  push32(0x125387a0u); f_125286a0();
  /* 125387a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125387a3 mov dword ptr [0x12554970], eax */
  w32((uint32_t)(0x12554970), (EAX));
  /* 125387a8 cmp dword ptr [0x12554970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125387af jne 0x125387b9 */
  if (!C.zf) goto L_125387b9;
  /* 125387b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125387b4 jmp 0x1253897b */
  goto L_1253897b;
L_125387b9:;
  /* 125387b9 mov ecx, dword ptr [0x12554970] */
  ECX = (r32((uint32_t)(0x12554970)));
  /* 125387bf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_125387c5:;
  /* 125387c5 mov edx, dword ptr [0x12554968] */
  EDX = (r32((uint32_t)(0x12554968)));
  /* 125387cb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125387ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125387d1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125387d4 push eax */
  push32((uint32_t)(EAX));
  /* 125387d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125387d8 push ecx */
  push32((uint32_t)(ECX));
  /* 125387d9 call 0x12538980 */
  push32(0x125387deu); f_12538980();
  /* 125387de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125387e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125387e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125387e8 jl 0x12538881 */
  if ((C.sf!=C.of)) goto L_12538881;
  /* 125387ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125387f1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125387f4 je 0x12538881 */
  if (C.zf) goto L_12538881;
  /* 125387fa cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125387fe je 0x12538873 */
  if (C.zf) goto L_12538873;
  /* 12538800 push 2 */
  push32((uint32_t)(0x2u));
  /* 12538802 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538805 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12538808 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1253880b push edx */
  push32((uint32_t)(EDX));
  /* 1253880c call 0x12529130 */
  push32(0x12538811u); f_12529130();
  /* 12538811 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538814 jmp 0x1253881f */
  goto L_1253881f;
L_12538816:;
  /* 12538816 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538819 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1253881c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1253881f:;
  /* 1253881f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538822 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12538825 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538829 je 0x12538840 */
  if (C.zf) goto L_12538840;
  /* 1253882b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1253882e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12538831 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538834 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12538837 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1253883b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1253883e jmp 0x12538816 */
  goto L_12538816;
L_12538840:;
  /* 12538840 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12538845 push 0x12550f58 */
  push32((uint32_t)(0x12550f58u));
  /* 1253884a push 2 */
  push32((uint32_t)(0x2u));
  /* 1253884c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1253884f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12538852 push eax */
  push32((uint32_t)(EAX));
  /* 12538853 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12538856 push ecx */
  push32((uint32_t)(ECX));
  /* 12538857 call 0x12528b30 */
  push32(0x1253885cu); f_12528b30();
  /* 1253885c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253885f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12538862 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538866 je 0x12538871 */
  if (C.zf) goto L_12538871;
  /* 12538868 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1253886b mov dword ptr [0x12554968], edx */
  w32((uint32_t)(0x12554968), (EDX));
L_12538871:;
  /* 12538871 jmp 0x1253887f */
  goto L_1253887f;
L_12538873:;
  /* 12538873 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538876 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12538879 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253887c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1253887f:;
  /* 1253887f jmp 0x125388f4 */
  goto L_125388f4;
L_12538881:;
  /* 12538881 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538885 jne 0x125388ed */
  if (!C.zf) goto L_125388ed;
  /* 12538887 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253888b jge 0x12538895 */
  if ((C.sf==C.of)) goto L_12538895;
  /* 1253888d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538890 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12538892 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12538895:;
  /* 12538895 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1253889a push 0x12550f58 */
  push32((uint32_t)(0x12550f58u));
  /* 1253889f push 2 */
  push32((uint32_t)(0x2u));
  /* 125388a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125388a4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 125388ab push edx */
  push32((uint32_t)(EDX));
  /* 125388ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125388af push eax */
  push32((uint32_t)(EAX));
  /* 125388b0 call 0x12528b30 */
  push32(0x125388b5u); f_12528b30();
  /* 125388b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125388b8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125388bb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125388bf jne 0x125388c9 */
  if (!C.zf) goto L_125388c9;
  /* 125388c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125388c4 jmp 0x1253897b */
  goto L_1253897b;
L_125388c9:;
  /* 125388c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125388cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125388cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125388d2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 125388d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125388d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125388db mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 125388e3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125388e6 mov dword ptr [0x12554968], eax */
  w32((uint32_t)(0x12554968), (EAX));
  /* 125388eb jmp 0x125388f4 */
  goto L_125388f4;
L_125388ed:;
  /* 125388ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125388ef jmp 0x1253897b */
  goto L_1253897b;
L_125388f4:;
  /* 125388f4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125388f8 je 0x12538979 */
  if (C.zf) goto L_12538979;
  /* 125388fa push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 125388ff push 0x12550f58 */
  push32((uint32_t)(0x12550f58u));
  /* 12538904 push 2 */
  push32((uint32_t)(0x2u));
  /* 12538906 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538909 push ecx */
  push32((uint32_t)(ECX));
  /* 1253890a call 0x1252b4d0 */
  push32(0x1253890fu); f_1252b4d0();
  /* 1253890f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538912 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538915 push eax */
  push32((uint32_t)(EAX));
  /* 12538916 call 0x125286a0 */
  push32(0x1253891bu); f_125286a0();
  /* 1253891b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1253891e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12538921 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538925 je 0x12538979 */
  if (C.zf) goto L_12538979;
  /* 12538927 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1253892a push edx */
  push32((uint32_t)(EDX));
  /* 1253892b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1253892e push eax */
  push32((uint32_t)(EAX));
  /* 1253892f call 0x1252b650 */
  push32(0x12538934u); f_1252b650();
  /* 12538934 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538937 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1253893a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253893d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12538940 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538942 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12538945 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12538948 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1253894b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253894e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538951 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12538954 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12538957 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12538959 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1253895b not edx */
  EDX = (~(EDX));
  /* 1253895d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12538960 push edx */
  push32((uint32_t)(EDX));
  /* 12538961 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12538964 push eax */
  push32((uint32_t)(EAX));
  /* 12538965 call dword ptr [0x125572d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572d4))), 0x1253896bu);
  /* 1253896b push 2 */
  push32((uint32_t)(0x2u));
  /* 1253896d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12538970 push ecx */
  push32((uint32_t)(ECX));
  /* 12538971 call 0x12529130 */
  push32(0x12538976u); f_12529130();
  /* 12538976 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12538979:;
  /* 12538979 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1253897b:;
  /* 1253897b pop esi */
  ESI = (pop32());
  /* 1253897c mov esp, ebp */
  ESP = (EBP);
  /* 1253897e pop ebp */
  EBP = (pop32());
  /* 1253897f ret  */
  ESPCHK(0x125386a0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12538980 (124 bytes, 47 insns) */
void f_12538980(void) {
  FTRACE(0x12538980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12538980 push ebp */
  push32((uint32_t)(EBP));
  /* 12538981 mov ebp, esp */
  EBP = (ESP);
  /* 12538983 push ecx */
  push32((uint32_t)(ECX));
  /* 12538984 mov eax, dword ptr [0x12554968] */
  EAX = (r32((uint32_t)(0x12554968)));
  /* 12538989 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1253898c jmp 0x12538997 */
  goto L_12538997;
L_1253898e:;
  /* 1253898e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12538991 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538994 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12538997:;
  /* 12538997 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1253899a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1253899d je 0x125389ea */
  if (C.zf) goto L_125389ea;
  /* 1253899f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125389a2 push eax */
  push32((uint32_t)(EAX));
  /* 125389a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125389a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125389a8 push edx */
  push32((uint32_t)(EDX));
  /* 125389a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125389ac push eax */
  push32((uint32_t)(EAX));
  /* 125389ad call 0x12538150 */
  push32(0x125389b2u); f_12538150();
  /* 125389b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125389b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125389b7 jne 0x125389e8 */
  if (!C.zf) goto L_125389e8;
  /* 125389b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125389bc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125389be mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125389c1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 125389c5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125389c8 je 0x125389da */
  if (C.zf) goto L_125389da;
  /* 125389ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125389cd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125389cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125389d2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 125389d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125389d8 jne 0x125389e8 */
  if (!C.zf) goto L_125389e8;
L_125389da:;
  /* 125389da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125389dd sub eax, dword ptr [0x12554968] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12554968))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125389e3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 125389e6 jmp 0x125389f8 */
  goto L_125389f8;
L_125389e8:;
  /* 125389e8 jmp 0x1253898e */
  goto L_1253898e;
L_125389ea:;
  /* 125389ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125389ed sub eax, dword ptr [0x12554968] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12554968))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125389f3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 125389f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_125389f8:;
  /* 125389f8 mov esp, ebp */
  ESP = (EBP);
  /* 125389fa pop ebp */
  EBP = (pop32());
  /* 125389fb ret  */
  ESPCHK(0x12538980u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12538a00 (238 bytes, 80 insns) */
void f_12538a00(void) {
  FTRACE(0x12538a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12538a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12538a01 mov ebp, esp */
  EBP = (ESP);
  /* 12538a03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12538a06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12538a0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538a10 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12538a13 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538a17 jne 0x12538a20 */
  if (!C.zf) goto L_12538a20;
  /* 12538a19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12538a1b jmp 0x12538aea */
  goto L_12538aea;
L_12538a20:;
  /* 12538a20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12538a23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12538a25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12538a28 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538a2b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12538a2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12538a30 je 0x12538a3d */
  if (C.zf) goto L_12538a3d;
  /* 12538a32 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12538a35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538a38 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12538a3b jmp 0x12538a20 */
  goto L_12538a20;
L_12538a3d:;
  /* 12538a3d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12538a42 push 0x12550f58 */
  push32((uint32_t)(0x12550f58u));
  /* 12538a47 push 2 */
  push32((uint32_t)(0x2u));
  /* 12538a49 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12538a4c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12538a53 push eax */
  push32((uint32_t)(EAX));
  /* 12538a54 call 0x125286a0 */
  push32(0x12538a59u); f_125286a0();
  /* 12538a59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538a5c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12538a5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538a62 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12538a65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538a69 jne 0x12538a75 */
  if (!C.zf) goto L_12538a75;
  /* 12538a6b push 9 */
  push32((uint32_t)(0x9u));
  /* 12538a6d call 0x12527610 */
  push32(0x12538a72u); f_12527610();
  /* 12538a72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12538a75:;
  /* 12538a75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538a78 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12538a7b:;
  /* 12538a7b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12538a7e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538a81 je 0x12538ade */
  if (C.zf) goto L_12538ade;
  /* 12538a83 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12538a88 push 0x12550f58 */
  push32((uint32_t)(0x12550f58u));
  /* 12538a8d push 2 */
  push32((uint32_t)(0x2u));
  /* 12538a8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12538a92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12538a94 push edx */
  push32((uint32_t)(EDX));
  /* 12538a95 call 0x1252b4d0 */
  push32(0x12538a9au); f_1252b4d0();
  /* 12538a9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538a9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538aa0 push eax */
  push32((uint32_t)(EAX));
  /* 12538aa1 call 0x125286a0 */
  push32(0x12538aa6u); f_125286a0();
  /* 12538aa6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538aa9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538aac mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12538aae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538ab1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538ab4 je 0x12538aca */
  if (C.zf) goto L_12538aca;
  /* 12538ab6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12538ab9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12538abb push ecx */
  push32((uint32_t)(ECX));
  /* 12538abc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538abf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12538ac1 push eax */
  push32((uint32_t)(EAX));
  /* 12538ac2 call 0x1252b650 */
  push32(0x12538ac7u); f_1252b650();
  /* 12538ac7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12538aca:;
  /* 12538aca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12538acd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538ad0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12538ad3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538ad6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538ad9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12538adc jmp 0x12538a7b */
  goto L_12538a7b;
L_12538ade:;
  /* 12538ade mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12538ae1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12538ae7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12538aea:;
  /* 12538aea mov esp, ebp */
  ESP = (EBP);
  /* 12538aec pop ebp */
  EBP = (pop32());
  /* 12538aed ret  */
  ESPCHK(0x12538a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10018af0 @ 0x12538af0 (237 bytes, 81 insns) */
void f_12538af0(void) {
  FTRACE(0x12538af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12538af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12538af1 mov ebp, esp */
  EBP = (ESP);
  /* 12538af3 push ecx */
  push32((uint32_t)(ECX));
  /* 12538af4 cmp dword ptr [0x125560ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125560ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538afb jne 0x12538b12 */
  if (!C.zf) goto L_12538b12;
  /* 12538afd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12538b00 push eax */
  push32((uint32_t)(EAX));
  /* 12538b01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538b04 push ecx */
  push32((uint32_t)(ECX));
  /* 12538b05 call 0x12538bf0 */
  push32(0x12538b0au); f_12538bf0();
  /* 12538b0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538b0d jmp 0x12538bd9 */
  goto L_12538bd9;
L_12538b12:;
  /* 12538b12 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12538b14 call 0x1252c0a0 */
  push32(0x12538b19u); f_1252c0a0();
  /* 12538b19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538b1c jmp 0x12538b27 */
  goto L_12538b27;
L_12538b1e:;
  /* 12538b1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538b21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538b24 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12538b27:;
  /* 12538b27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538b2a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12538b2e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12538b32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12538b35 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12538b3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12538b3d je 0x12538bbb */
  if (C.zf) goto L_12538bbb;
  /* 12538b3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12538b42 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12538b47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12538b49 mov cl, byte ptr [eax + 0x125561c1] */
  CL = (r8((uint32_t)(EAX + 0x125561c1)));
  /* 12538b4f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12538b52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12538b54 je 0x12538ba6 */
  if (C.zf) goto L_12538ba6;
  /* 12538b56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538b59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538b5c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12538b5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538b62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12538b64 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12538b66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12538b68 jne 0x12538b78 */
  if (!C.zf) goto L_12538b78;
  /* 12538b6a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12538b6c call 0x1252c140 */
  push32(0x12538b71u); f_1252c140();
  /* 12538b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538b74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12538b76 jmp 0x12538bd9 */
  goto L_12538bd9;
L_12538b78:;
  /* 12538b78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12538b7b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12538b81 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12538b84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538b87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12538b89 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12538b8b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12538b8d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538b90 jne 0x12538ba4 */
  if (!C.zf) goto L_12538ba4;
  /* 12538b92 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12538b94 call 0x1252c140 */
  push32(0x12538b99u); f_1252c140();
  /* 12538b99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538b9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538b9f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12538ba2 jmp 0x12538bd9 */
  goto L_12538bd9;
L_12538ba4:;
  /* 12538ba4 jmp 0x12538bb6 */
  goto L_12538bb6;
L_12538ba6:;
  /* 12538ba6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12538ba9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12538baf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538bb2 jne 0x12538bb6 */
  if (!C.zf) goto L_12538bb6;
  /* 12538bb4 jmp 0x12538bbb */
  goto L_12538bbb;
L_12538bb6:;
  /* 12538bb6 jmp 0x12538b1e */
  goto L_12538b1e;
L_12538bbb:;
  /* 12538bbb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12538bbd call 0x1252c140 */
  push32(0x12538bc2u); f_1252c140();
  /* 12538bc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12538bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12538bc8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12538bcd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12538bd0 jne 0x12538bd7 */
  if (!C.zf) goto L_12538bd7;
  /* 12538bd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12538bd5 jmp 0x12538bd9 */
  goto L_12538bd9;
L_12538bd7:;
  /* 12538bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12538bd9:;
  /* 12538bd9 mov esp, ebp */
  ESP = (EBP);
  /* 12538bdb pop ebp */
  EBP = (pop32());
  /* 12538bdc ret  */
  ESPCHK(0x12538af0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12538bf0 (193 bytes, 87 insns) */
void f_12538bf0(void) {
  FTRACE(0x12538bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12538bf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12538bf2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12538bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 12538bf7 mov ebx, eax */
  EBX = (EAX);
  /* 12538bf9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12538bfc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12538c00 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12538c06 je 0x12538c1b */
  if (C.zf) goto L_12538c1b;
L_12538c08:;
  /* 12538c08 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12538c0a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12538c0b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12538c0d je 0x12538be0 */
  if (C.zf) { jmp_ind(0x12538be0u); return; }
  /* 12538c0f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12538c11 je 0x12538c64 */
  if (C.zf) goto L_12538c64;
  /* 12538c13 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12538c19 jne 0x12538c08 */
  if (!C.zf) goto L_12538c08;
L_12538c1b:;
  /* 12538c1b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12538c1d push edi */
  push32((uint32_t)(EDI));
  /* 12538c1e mov eax, ebx */
  EAX = (EBX);
  /* 12538c20 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12538c23 push esi */
  push32((uint32_t)(ESI));
  /* 12538c24 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12538c26:;
  /* 12538c26 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12538c28 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12538c2d mov eax, ecx */
  EAX = (ECX);
  /* 12538c2f mov esi, edi */
  ESI = (EDI);
  /* 12538c31 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12538c33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12538c35 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12538c37 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12538c3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12538c3d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12538c3f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12538c41 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12538c44 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12538c4a jne 0x12538c68 */
  if (!C.zf) goto L_12538c68;
  /* 12538c4c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12538c51 je 0x12538c26 */
  if (C.zf) goto L_12538c26;
  /* 12538c53 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12538c58 jne 0x12538c62 */
  if (!C.zf) goto L_12538c62;
  /* 12538c5a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12538c60 jne 0x12538c26 */
  if (!C.zf) goto L_12538c26;
L_12538c62:;
  /* 12538c62 pop esi */
  ESI = (pop32());
  /* 12538c63 pop edi */
  EDI = (pop32());
L_12538c64:;
  /* 12538c64 pop ebx */
  EBX = (pop32());
  /* 12538c65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12538c67 ret  */
  ESPCHK(0x12538bf0u, _esp0);
  ESP += 4; return;
L_12538c68:;
  /* 12538c68 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12538c6b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12538c6d je 0x12538ca5 */
  if (C.zf) goto L_12538ca5;
  /* 12538c6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12538c71 je 0x12538c62 */
  if (C.zf) goto L_12538c62;
  /* 12538c73 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12538c75 je 0x12538c9e */
  if (C.zf) goto L_12538c9e;
  /* 12538c77 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12538c79 je 0x12538c62 */
  if (C.zf) goto L_12538c62;
  /* 12538c7b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12538c7e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12538c80 je 0x12538c97 */
  if (C.zf) goto L_12538c97;
  /* 12538c82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12538c84 je 0x12538c62 */
  if (C.zf) goto L_12538c62;
  /* 12538c86 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12538c88 je 0x12538c90 */
  if (C.zf) goto L_12538c90;
  /* 12538c8a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12538c8c je 0x12538c62 */
  if (C.zf) goto L_12538c62;
  /* 12538c8e jmp 0x12538c26 */
  goto L_12538c26;
L_12538c90:;
  /* 12538c90 pop esi */
  ESI = (pop32());
  /* 12538c91 pop edi */
  EDI = (pop32());
  /* 12538c92 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12538c95 pop ebx */
  EBX = (pop32());
  /* 12538c96 ret  */
  ESPCHK(0x12538bf0u, _esp0);
  ESP += 4; return;
L_12538c97:;
  /* 12538c97 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12538c9a pop esi */
  ESI = (pop32());
  /* 12538c9b pop edi */
  EDI = (pop32());
  /* 12538c9c pop ebx */
  EBX = (pop32());
  /* 12538c9d ret  */
  ESPCHK(0x12538bf0u, _esp0);
  ESP += 4; return;
L_12538c9e:;
  /* 12538c9e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12538ca1 pop esi */
  ESI = (pop32());
  /* 12538ca2 pop edi */
  EDI = (pop32());
  /* 12538ca3 pop ebx */
  EBX = (pop32());
  /* 12538ca4 ret  */
  ESPCHK(0x12538bf0u, _esp0);
  ESP += 4; return;
L_12538ca5:;
  /* 12538ca5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12538ca8 pop esi */
  ESI = (pop32());
  /* 12538ca9 pop edi */
  EDI = (pop32());
  /* 12538caa pop ebx */
  EBX = (pop32());
  /* 12538cab ret  */
  ESPCHK(0x12538bf0u, _esp0);
  ESP += 4; return;
  /* 12538cac jmp dword ptr [0x12557388] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12557388)))); return;
}

/* RtlUnwind @ 0x12538dfc (6 bytes, 1 insns) */
void f_12538dfc(void) {
  FTRACE(0x12538dfcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12538dfc jmp dword ptr [0x1255730c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1255730c)))); return;
}

