#include "recomp.h"

/* FUN_10015470 @ 0x124a5470 (878 bytes, 273 insns) */
void f_124a5470(void) {
  FTRACE(0x124a5470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a5470 push ebp */
  push32((uint32_t)(EBP));
  /* 124a5471 mov ebp, esp */
  EBP = (ESP);
  /* 124a5473 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a5476 push esi */
  push32((uint32_t)(ESI));
  /* 124a5477 mov eax, dword ptr [0x124c3c98] */
  EAX = (r32((uint32_t)(0x124c3c98)));
  /* 124a547c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a547f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124a5486 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124a548d jmp 0x124a5498 */
  goto L_124a5498;
L_124a548f:;
  /* 124a548f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a5492 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5495 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124a5498:;
  /* 124a5498 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a549c jae 0x124a54d1 */
  if (!C.cf) goto L_124a54d1;
  /* 124a549e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a54a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a54a4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124a54a7 push ecx */
  push32((uint32_t)(ECX));
  /* 124a54a8 call 0x1249b2f0 */
  push32(0x124a54adu); f_1249b2f0();
  /* 124a54ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a54b0 mov esi, eax */
  ESI = (EAX);
  /* 124a54b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a54b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a54b8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 124a54bc push ecx */
  push32((uint32_t)(ECX));
  /* 124a54bd call 0x1249b2f0 */
  push32(0x124a54c2u); f_1249b2f0();
  /* 124a54c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a54c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a54c8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 124a54cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124a54cf jmp 0x124a548f */
  goto L_124a548f;
L_124a54d1:;
  /* 124a54d1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124a54d8 jmp 0x124a54e3 */
  goto L_124a54e3;
L_124a54da:;
  /* 124a54da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a54dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a54e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_124a54e3:;
  /* 124a54e3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a54e7 jae 0x124a551d */
  if (!C.cf) goto L_124a551d;
  /* 124a54e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a54ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a54ef mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 124a54f3 push eax */
  push32((uint32_t)(EAX));
  /* 124a54f4 call 0x1249b2f0 */
  push32(0x124a54f9u); f_1249b2f0();
  /* 124a54f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a54fc mov esi, eax */
  ESI = (EAX);
  /* 124a54fe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a5501 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5504 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 124a5508 push eax */
  push32((uint32_t)(EAX));
  /* 124a5509 call 0x1249b2f0 */
  push32(0x124a550eu); f_1249b2f0();
  /* 124a550e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5511 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5514 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 124a5518 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a551b jmp 0x124a54da */
  goto L_124a54da;
L_124a551d:;
  /* 124a551d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5520 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 124a5526 push eax */
  push32((uint32_t)(EAX));
  /* 124a5527 call 0x1249b2f0 */
  push32(0x124a552cu); f_1249b2f0();
  /* 124a552c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a552f mov esi, eax */
  ESI = (EAX);
  /* 124a5531 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5534 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 124a553a push edx */
  push32((uint32_t)(EDX));
  /* 124a553b call 0x1249b2f0 */
  push32(0x124a5540u); f_1249b2f0();
  /* 124a5540 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5543 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5546 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 124a554a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a554d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5550 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 124a5556 push edx */
  push32((uint32_t)(EDX));
  /* 124a5557 call 0x1249b2f0 */
  push32(0x124a555cu); f_1249b2f0();
  /* 124a555c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a555f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a5562 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124a5566 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124a5569 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a556c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 124a5572 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5573 call 0x1249b2f0 */
  push32(0x124a5578u); f_1249b2f0();
  /* 124a5578 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a557b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a557e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 124a5582 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a5585 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5588 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 124a558e push edx */
  push32((uint32_t)(EDX));
  /* 124a558f call 0x1249b2f0 */
  push32(0x124a5594u); f_1249b2f0();
  /* 124a5594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5597 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a559a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124a559e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124a55a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a55a4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a55a9 push eax */
  push32((uint32_t)(EAX));
  /* 124a55aa call 0x124984a0 */
  push32(0x124a55afu); f_124984a0();
  /* 124a55af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a55b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a55b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a55b9 je 0x124a57d6 */
  if (C.zf) goto L_124a57d6;
  /* 124a55bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a55c2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 124a55c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a55c8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a55ce mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124a55d1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 124a55d6 mov eax, dword ptr [0x124c3c98] */
  EAX = (r32((uint32_t)(0x124c3c98)));
  /* 124a55db push eax */
  push32((uint32_t)(EAX));
  /* 124a55dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a55df push ecx */
  push32((uint32_t)(ECX));
  /* 124a55e0 call 0x1249eda0 */
  push32(0x124a55e5u); f_1249eda0();
  /* 124a55e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a55e8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124a55ef jmp 0x124a55fa */
  goto L_124a55fa;
L_124a55f1:;
  /* 124a55f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a55f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a55f7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124a55fa:;
  /* 124a55fa cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a55fe jae 0x124a566e */
  if (!C.cf) goto L_124a566e;
  /* 124a5600 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a5603 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a5606 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5609 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 124a560c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a560f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5612 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124a5615 push edx */
  push32((uint32_t)(EDX));
  /* 124a5616 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5619 push eax */
  push32((uint32_t)(EAX));
  /* 124a561a call 0x1249b470 */
  push32(0x124a561fu); f_1249b470();
  /* 124a561f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5622 push eax */
  push32((uint32_t)(EAX));
  /* 124a5623 call 0x1249b2f0 */
  push32(0x124a5628u); f_1249b2f0();
  /* 124a5628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a562b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a562e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124a5632 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124a5635 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a5638 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a563b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a563e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 124a5642 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a5645 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5648 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 124a564c push edx */
  push32((uint32_t)(EDX));
  /* 124a564d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5650 push eax */
  push32((uint32_t)(EAX));
  /* 124a5651 call 0x1249b470 */
  push32(0x124a5656u); f_1249b470();
  /* 124a5656 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5659 push eax */
  push32((uint32_t)(EAX));
  /* 124a565a call 0x1249b2f0 */
  push32(0x124a565fu); f_1249b2f0();
  /* 124a565f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5662 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5665 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124a5669 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124a566c jmp 0x124a55f1 */
  goto L_124a55f1;
L_124a566e:;
  /* 124a566e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124a5675 jmp 0x124a5680 */
  goto L_124a5680;
L_124a5677:;
  /* 124a5677 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a567a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a567d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_124a5680:;
  /* 124a5680 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5684 jae 0x124a56f6 */
  if (!C.cf) goto L_124a56f6;
  /* 124a5686 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a5689 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a568c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a568f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 124a5693 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a5696 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5699 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 124a569d push eax */
  push32((uint32_t)(EAX));
  /* 124a569e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a56a1 push ecx */
  push32((uint32_t)(ECX));
  /* 124a56a2 call 0x1249b470 */
  push32(0x124a56a7u); f_1249b470();
  /* 124a56a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a56aa push eax */
  push32((uint32_t)(EAX));
  /* 124a56ab call 0x1249b2f0 */
  push32(0x124a56b0u); f_1249b2f0();
  /* 124a56b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a56b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a56b6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 124a56ba mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124a56bd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a56c0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a56c3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a56c6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 124a56ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a56cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a56d0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 124a56d4 push eax */
  push32((uint32_t)(EAX));
  /* 124a56d5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a56d8 push ecx */
  push32((uint32_t)(ECX));
  /* 124a56d9 call 0x1249b470 */
  push32(0x124a56deu); f_1249b470();
  /* 124a56de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a56e1 push eax */
  push32((uint32_t)(EAX));
  /* 124a56e2 call 0x1249b2f0 */
  push32(0x124a56e7u); f_1249b2f0();
  /* 124a56e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a56ea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a56ed lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 124a56f1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124a56f4 jmp 0x124a5677 */
  goto L_124a5677;
L_124a56f6:;
  /* 124a56f6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a56f9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a56fc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 124a5702 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5705 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 124a570b push ecx */
  push32((uint32_t)(ECX));
  /* 124a570c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a570f push edx */
  push32((uint32_t)(EDX));
  /* 124a5710 call 0x1249b470 */
  push32(0x124a5715u); f_1249b470();
  /* 124a5715 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5718 push eax */
  push32((uint32_t)(EAX));
  /* 124a5719 call 0x1249b2f0 */
  push32(0x124a571eu); f_1249b2f0();
  /* 124a571e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5721 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5724 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124a5728 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124a572b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a572e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5731 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 124a5737 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a573a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 124a5740 push eax */
  push32((uint32_t)(EAX));
  /* 124a5741 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5744 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5745 call 0x1249b470 */
  push32(0x124a574au); f_1249b470();
  /* 124a574a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a574d push eax */
  push32((uint32_t)(EAX));
  /* 124a574e call 0x1249b2f0 */
  push32(0x124a5753u); f_1249b2f0();
  /* 124a5753 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5756 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5759 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 124a575d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124a5760 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a5763 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5766 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 124a576c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a576f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 124a5775 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5776 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5779 push edx */
  push32((uint32_t)(EDX));
  /* 124a577a call 0x1249b470 */
  push32(0x124a577fu); f_1249b470();
  /* 124a577f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5782 push eax */
  push32((uint32_t)(EAX));
  /* 124a5783 call 0x1249b2f0 */
  push32(0x124a5788u); f_1249b2f0();
  /* 124a5788 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a578b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a578e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124a5792 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124a5795 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a5798 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a579b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 124a57a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a57a4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 124a57aa push eax */
  push32((uint32_t)(EAX));
  /* 124a57ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a57ae push ecx */
  push32((uint32_t)(ECX));
  /* 124a57af call 0x1249b470 */
  push32(0x124a57b4u); f_1249b470();
  /* 124a57b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a57b7 push eax */
  push32((uint32_t)(EAX));
  /* 124a57b8 call 0x1249b2f0 */
  push32(0x124a57bdu); f_1249b2f0();
  /* 124a57bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a57c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a57c3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 124a57c7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124a57ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a57cd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a57d0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_124a57d6:;
  /* 124a57d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a57d9 pop esi */
  ESI = (pop32());
  /* 124a57da mov esp, ebp */
  ESP = (EBP);
  /* 124a57dc pop ebp */
  EBP = (pop32());
  /* 124a57dd ret  */
  ESPCHK(0x124a5470u, _esp0);
  ESP += 4; return;
}

/* FUN_100157e0 @ 0x124a57e0 (31 bytes, 15 insns) */
void f_124a57e0(void) {
  FTRACE(0x124a57e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a57e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a57e1 mov ebp, esp */
  EBP = (ESP);
  /* 124a57e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a57e5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a57e8 push eax */
  push32((uint32_t)(EAX));
  /* 124a57e9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a57ec push ecx */
  push32((uint32_t)(ECX));
  /* 124a57ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a57f0 push edx */
  push32((uint32_t)(EDX));
  /* 124a57f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a57f4 push eax */
  push32((uint32_t)(EAX));
  /* 124a57f5 call 0x124a5800 */
  push32(0x124a57fau); f_124a5800();
  /* 124a57fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a57fd pop ebp */
  EBP = (pop32());
  /* 124a57fe ret  */
  ESPCHK(0x124a57e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015800 @ 0x124a5800 (393 bytes, 123 insns) */
void f_124a5800(void) {
  FTRACE(0x124a5800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a5800 push ebp */
  push32((uint32_t)(EBP));
  /* 124a5801 mov ebp, esp */
  EBP = (ESP);
  /* 124a5803 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a5806 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a580a jne 0x124a5816 */
  if (!C.zf) goto L_124a5816;
  /* 124a580c mov eax, dword ptr [0x124c3c98] */
  EAX = (r32((uint32_t)(0x124c3c98)));
  /* 124a5811 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124a5814 jmp 0x124a581c */
  goto L_124a581c;
L_124a5816:;
  /* 124a5816 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5819 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124a581c:;
  /* 124a581c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a581f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124a5822 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5825 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a5828 push 0x124c4bd4 */
  push32((uint32_t)(0x124c4bd4u));
  /* 124a582d call dword ptr [0x124c735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c735c))), 0x124a5833u);
  /* 124a5833 cmp dword ptr [0x124c4bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a583a je 0x124a585a */
  if (C.zf) goto L_124a585a;
  /* 124a583c push 0x124c4bd4 */
  push32((uint32_t)(0x124c4bd4u));
  /* 124a5841 call dword ptr [0x124c734c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c734c))), 0x124a5847u);
  /* 124a5847 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124a5849 call 0x1249bec0 */
  push32(0x124a584eu); f_1249bec0();
  /* 124a584e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5851 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 124a5858 jmp 0x124a5861 */
  goto L_124a5861;
L_124a585a:;
  /* 124a585a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_124a5861:;
  /* 124a5861 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5865 jbe 0x124a5952 */
  if ((C.cf||C.zf)) goto L_124a5952;
  /* 124a586b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a586e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124a5870 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 124a5873 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a5877 je 0x124a5881 */
  if (C.zf) goto L_124a5881;
  /* 124a5879 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a587d je 0x124a5886 */
  if (C.zf) goto L_124a5886;
  /* 124a587f jmp 0x124a58e0 */
  goto L_124a58e0;
L_124a5881:;
  /* 124a5881 jmp 0x124a5952 */
  goto L_124a5952;
L_124a5886:;
  /* 124a5886 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5889 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a588c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 124a588f mov dword ptr [0x124c4bb0], 0 */
  w32((uint32_t)(0x124c4bb0), (0x0u));
  /* 124a5899 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a589c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a589f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a58a2 jne 0x124a58b7 */
  if (!C.zf) goto L_124a58b7;
  /* 124a58a4 mov dword ptr [0x124c4bb0], 1 */
  w32((uint32_t)(0x124c4bb0), (0x1u));
  /* 124a58ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a58b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a58b4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_124a58b7:;
  /* 124a58b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a58ba push ecx */
  push32((uint32_t)(ECX));
  /* 124a58bb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 124a58be push edx */
  push32((uint32_t)(EDX));
  /* 124a58bf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 124a58c2 push eax */
  push32((uint32_t)(EAX));
  /* 124a58c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a58c6 push ecx */
  push32((uint32_t)(ECX));
  /* 124a58c7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a58ca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a58cc push eax */
  push32((uint32_t)(EAX));
  /* 124a58cd call 0x124a5990 */
  push32(0x124a58d2u); f_124a5990();
  /* 124a58d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a58d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a58d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a58db mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 124a58de jmp 0x124a594d */
  goto L_124a594d;
L_124a58e0:;
  /* 124a58e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a58e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a58e5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a58e7 mov ecx, dword ptr [0x124c2c98] */
  ECX = (r32((uint32_t)(0x124c2c98)));
  /* 124a58ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a58ef mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124a58f3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 124a58f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a58fb je 0x124a5928 */
  if (C.zf) goto L_124a5928;
  /* 124a58fd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5901 jbe 0x124a5928 */
  if ((C.cf||C.zf)) goto L_124a5928;
  /* 124a5903 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a5906 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5909 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124a590b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 124a590d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a5910 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5913 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a5916 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5919 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a591c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 124a591f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5922 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a5925 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_124a5928:;
  /* 124a5928 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a592b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a592e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124a5930 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 124a5932 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a5935 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5938 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a593b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a593e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5941 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 124a5944 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5947 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a594a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_124a594d:;
  /* 124a594d jmp 0x124a5861 */
  goto L_124a5861;
L_124a5952:;
  /* 124a5952 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5956 je 0x124a5964 */
  if (C.zf) goto L_124a5964;
  /* 124a5958 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124a595a call 0x1249bf60 */
  push32(0x124a595fu); f_1249bf60();
  /* 124a595f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5962 jmp 0x124a596f */
  goto L_124a596f;
L_124a5964:;
  /* 124a5964 push 0x124c4bd4 */
  push32((uint32_t)(0x124c4bd4u));
  /* 124a5969 call dword ptr [0x124c734c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c734c))), 0x124a596fu);
L_124a596f:;
  /* 124a596f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5973 jbe 0x124a5983 */
  if ((C.cf||C.zf)) goto L_124a5983;
  /* 124a5975 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a5978 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 124a597b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a597e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a5981 jmp 0x124a5985 */
  goto L_124a5985;
L_124a5983:;
  /* 124a5983 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a5985:;
  /* 124a5985 mov esp, ebp */
  ESP = (EBP);
  /* 124a5987 pop ebp */
  EBP = (pop32());
  /* 124a5988 ret  */
  ESPCHK(0x124a5800u, _esp0);
  ESP += 4; return;
}

/* FUN_10015990 @ 0x124a5990 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_124a5990(void) {
  FTRACE(0x124a5990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a5990 push ebp */
  push32((uint32_t)(EBP));
  /* 124a5991 mov ebp, esp */
  EBP = (ESP);
  /* 124a5993 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a5996 push esi */
  push32((uint32_t)(ESI));
  /* 124a5997 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 124a599b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a599e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a59a1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a59a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a59a7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a59ab ja 0x124a5ef8 */
  if ((!C.cf&&!C.zf)) goto L_124a5ef8;
  /* 124a59b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a59b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a59b6 mov dl, byte ptr [eax + 0x124a5f59] */
  DL = (r8((uint32_t)(EAX + 0x124a5f59)));
  /* 124a59bc jmp dword ptr [edx*4 + 0x124a5efd] */
  switch (EDX) {
    case 0: goto L_124a5ed6;
    case 1: goto L_124a59e5;
    case 2: goto L_124a5a2b;
    case 3: goto L_124a5b78;
    case 4: goto L_124a5ba0;
    case 5: goto L_124a5c3f;
    case 6: goto L_124a5cab;
    case 7: goto L_124a5cd4;
    case 8: goto L_124a5d15;
    case 9: goto L_124a5df7;
    case 10: goto L_124a5e5e;
    case 11: goto L_124a5eab;
    case 12: goto L_124a59c3;
    case 13: goto L_124a5a08;
    case 14: goto L_124a5a4e;
    case 15: goto L_124a5b4e;
    case 16: goto L_124a5be5;
    case 17: goto L_124a5c12;
    case 18: goto L_124a5c67;
    case 19: goto L_124a5ceb;
    case 20: goto L_124a5d99;
    case 21: goto L_124a5e28;
    case 22: goto L_124a5ef8;
    default: x86_unimpl("switch@0x124a59bc out of table"); return;
  }
L_124a59c3:;
  /* 124a59c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a59c6 push ecx */
  push32((uint32_t)(ECX));
  /* 124a59c7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a59ca push edx */
  push32((uint32_t)(EDX));
  /* 124a59cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a59ce mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 124a59d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a59d4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 124a59d7 push eax */
  push32((uint32_t)(EAX));
  /* 124a59d8 call 0x124a5fb0 */
  push32(0x124a59ddu); f_124a5fb0();
  /* 124a59dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a59e0 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a59e5:;
  /* 124a59e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a59e8 push ecx */
  push32((uint32_t)(ECX));
  /* 124a59e9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a59ec push edx */
  push32((uint32_t)(EDX));
  /* 124a59ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a59f0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 124a59f3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a59f6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 124a59fa push eax */
  push32((uint32_t)(EAX));
  /* 124a59fb call 0x124a5fb0 */
  push32(0x124a5a00u); f_124a5fb0();
  /* 124a5a00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5a03 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5a08:;
  /* 124a5a08 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5a0b push ecx */
  push32((uint32_t)(ECX));
  /* 124a5a0c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5a0f push edx */
  push32((uint32_t)(EDX));
  /* 124a5a10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5a13 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124a5a16 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5a19 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 124a5a1d push eax */
  push32((uint32_t)(EAX));
  /* 124a5a1e call 0x124a5fb0 */
  push32(0x124a5a23u); f_124a5fb0();
  /* 124a5a23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5a26 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5a2b:;
  /* 124a5a2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5a2e push ecx */
  push32((uint32_t)(ECX));
  /* 124a5a2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5a32 push edx */
  push32((uint32_t)(EDX));
  /* 124a5a33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5a36 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124a5a39 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5a3c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 124a5a40 push eax */
  push32((uint32_t)(EAX));
  /* 124a5a41 call 0x124a5fb0 */
  push32(0x124a5a46u); f_124a5fb0();
  /* 124a5a46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5a49 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5a4e:;
  /* 124a5a4e cmp dword ptr [0x124c4bb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4bb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5a55 je 0x124a5ad6 */
  if (C.zf) goto L_124a5ad6;
  /* 124a5a57 mov dword ptr [0x124c4bb0], 0 */
  w32((uint32_t)(0x124c4bb0), (0x0u));
  /* 124a5a61 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5a64 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5a65 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5a68 push edx */
  push32((uint32_t)(EDX));
  /* 124a5a69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5a6c push eax */
  push32((uint32_t)(EAX));
  /* 124a5a6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5a70 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5a71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5a74 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 124a5a7a push eax */
  push32((uint32_t)(EAX));
  /* 124a5a7b call 0x124a6160 */
  push32(0x124a5a80u); f_124a6160();
  /* 124a5a80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5a83 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5a86 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5a89 jne 0x124a5a90 */
  if (!C.zf) goto L_124a5a90;
  /* 124a5a8b jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5a90:;
  /* 124a5a90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5a93 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a5a95 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 124a5a98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5a9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a5a9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5aa0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5aa3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124a5aa5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5aa8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a5aaa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a5aad mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5ab0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124a5ab2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5ab6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5ab9 push edx */
  push32((uint32_t)(EDX));
  /* 124a5aba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5abd push eax */
  push32((uint32_t)(EAX));
  /* 124a5abe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5ac1 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5ac2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5ac5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 124a5acb push eax */
  push32((uint32_t)(EAX));
  /* 124a5acc call 0x124a6160 */
  push32(0x124a5ad1u); f_124a6160();
  /* 124a5ad1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5ad4 jmp 0x124a5b49 */
  goto L_124a5b49;
L_124a5ad6:;
  /* 124a5ad6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5ada mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5add push edx */
  push32((uint32_t)(EDX));
  /* 124a5ade mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5ae1 push eax */
  push32((uint32_t)(EAX));
  /* 124a5ae2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5ae5 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5ae6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5ae9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 124a5aef push eax */
  push32((uint32_t)(EAX));
  /* 124a5af0 call 0x124a6160 */
  push32(0x124a5af5u); f_124a6160();
  /* 124a5af5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5af8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5afb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5afe jne 0x124a5b05 */
  if (!C.zf) goto L_124a5b05;
  /* 124a5b00 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5b05:;
  /* 124a5b05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5b08 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a5b0a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 124a5b0d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5b10 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a5b12 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5b15 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5b18 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124a5b1a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5b1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a5b1f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a5b22 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5b25 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124a5b27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5b2a push ecx */
  push32((uint32_t)(ECX));
  /* 124a5b2b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5b2e push edx */
  push32((uint32_t)(EDX));
  /* 124a5b2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5b32 push eax */
  push32((uint32_t)(EAX));
  /* 124a5b33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5b36 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5b37 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5b3a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 124a5b40 push eax */
  push32((uint32_t)(EAX));
  /* 124a5b41 call 0x124a6160 */
  push32(0x124a5b46u); f_124a6160();
  /* 124a5b46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a5b49:;
  /* 124a5b49 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5b4e:;
  /* 124a5b4e mov ecx, dword ptr [0x124c4bb0] */
  ECX = (r32((uint32_t)(0x124c4bb0)));
  /* 124a5b54 mov dword ptr [0x124c4bc0], ecx */
  w32((uint32_t)(0x124c4bc0), (ECX));
  /* 124a5b5a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5b5d push edx */
  push32((uint32_t)(EDX));
  /* 124a5b5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5b61 push eax */
  push32((uint32_t)(EAX));
  /* 124a5b62 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a5b64 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5b67 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124a5b6a push edx */
  push32((uint32_t)(EDX));
  /* 124a5b6b call 0x124a6000 */
  push32(0x124a5b70u); f_124a6000();
  /* 124a5b70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5b73 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5b78:;
  /* 124a5b78 mov eax, dword ptr [0x124c4bb0] */
  EAX = (r32((uint32_t)(0x124c4bb0)));
  /* 124a5b7d mov dword ptr [0x124c4bc0], eax */
  w32((uint32_t)(0x124c4bc0), (EAX));
  /* 124a5b82 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5b85 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5b86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5b89 push edx */
  push32((uint32_t)(EDX));
  /* 124a5b8a push 2 */
  push32((uint32_t)(0x2u));
  /* 124a5b8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5b8f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124a5b92 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5b93 call 0x124a6000 */
  push32(0x124a5b98u); f_124a6000();
  /* 124a5b98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5b9b jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5ba0:;
  /* 124a5ba0 mov edx, dword ptr [0x124c4bb0] */
  EDX = (r32((uint32_t)(0x124c4bb0)));
  /* 124a5ba6 mov dword ptr [0x124c4bc0], edx */
  w32((uint32_t)(0x124c4bc0), (EDX));
  /* 124a5bac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5baf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 124a5bb2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a5bb3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 124a5bb8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124a5bba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124a5bbd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5bc1 jne 0x124a5bca */
  if (!C.zf) goto L_124a5bca;
  /* 124a5bc3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_124a5bca:;
  /* 124a5bca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5bcd push edx */
  push32((uint32_t)(EDX));
  /* 124a5bce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5bd1 push eax */
  push32((uint32_t)(EAX));
  /* 124a5bd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a5bd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a5bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5bd8 call 0x124a6000 */
  push32(0x124a5bddu); f_124a6000();
  /* 124a5bdd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5be0 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5be5:;
  /* 124a5be5 mov edx, dword ptr [0x124c4bb0] */
  EDX = (r32((uint32_t)(0x124c4bb0)));
  /* 124a5beb mov dword ptr [0x124c4bc0], edx */
  w32((uint32_t)(0x124c4bc0), (EDX));
  /* 124a5bf1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5bf4 push eax */
  push32((uint32_t)(EAX));
  /* 124a5bf5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5bf8 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5bf9 push 3 */
  push32((uint32_t)(0x3u));
  /* 124a5bfb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5bfe mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124a5c01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5c04 push eax */
  push32((uint32_t)(EAX));
  /* 124a5c05 call 0x124a6000 */
  push32(0x124a5c0au); f_124a6000();
  /* 124a5c0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5c0d jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5c12:;
  /* 124a5c12 mov ecx, dword ptr [0x124c4bb0] */
  ECX = (r32((uint32_t)(0x124c4bb0)));
  /* 124a5c18 mov dword ptr [0x124c4bc0], ecx */
  w32((uint32_t)(0x124c4bc0), (ECX));
  /* 124a5c1e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5c21 push edx */
  push32((uint32_t)(EDX));
  /* 124a5c22 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5c25 push eax */
  push32((uint32_t)(EAX));
  /* 124a5c26 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a5c28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5c2b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 124a5c2e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5c31 push edx */
  push32((uint32_t)(EDX));
  /* 124a5c32 call 0x124a6000 */
  push32(0x124a5c37u); f_124a6000();
  /* 124a5c37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5c3a jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5c3f:;
  /* 124a5c3f mov eax, dword ptr [0x124c4bb0] */
  EAX = (r32((uint32_t)(0x124c4bb0)));
  /* 124a5c44 mov dword ptr [0x124c4bc0], eax */
  w32((uint32_t)(0x124c4bc0), (EAX));
  /* 124a5c49 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5c4c push ecx */
  push32((uint32_t)(ECX));
  /* 124a5c4d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5c50 push edx */
  push32((uint32_t)(EDX));
  /* 124a5c51 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a5c53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5c56 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124a5c59 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5c5a call 0x124a6000 */
  push32(0x124a5c5fu); f_124a6000();
  /* 124a5c5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5c62 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5c67:;
  /* 124a5c67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5c6a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5c6e jg 0x124a5c8c */
  if ((!C.zf&&C.sf==C.of)) goto L_124a5c8c;
  /* 124a5c70 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5c73 push eax */
  push32((uint32_t)(EAX));
  /* 124a5c74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5c77 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5c78 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5c7b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 124a5c81 push eax */
  push32((uint32_t)(EAX));
  /* 124a5c82 call 0x124a5fb0 */
  push32(0x124a5c87u); f_124a5fb0();
  /* 124a5c87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5c8a jmp 0x124a5ca6 */
  goto L_124a5ca6;
L_124a5c8c:;
  /* 124a5c8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5c8f push ecx */
  push32((uint32_t)(ECX));
  /* 124a5c90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5c93 push edx */
  push32((uint32_t)(EDX));
  /* 124a5c94 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5c97 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 124a5c9d push ecx */
  push32((uint32_t)(ECX));
  /* 124a5c9e call 0x124a5fb0 */
  push32(0x124a5ca3u); f_124a5fb0();
  /* 124a5ca3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a5ca6:;
  /* 124a5ca6 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5cab:;
  /* 124a5cab mov edx, dword ptr [0x124c4bb0] */
  EDX = (r32((uint32_t)(0x124c4bb0)));
  /* 124a5cb1 mov dword ptr [0x124c4bc0], edx */
  w32((uint32_t)(0x124c4bc0), (EDX));
  /* 124a5cb7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5cba push eax */
  push32((uint32_t)(EAX));
  /* 124a5cbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5cbe push ecx */
  push32((uint32_t)(ECX));
  /* 124a5cbf push 2 */
  push32((uint32_t)(0x2u));
  /* 124a5cc1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5cc4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a5cc6 push eax */
  push32((uint32_t)(EAX));
  /* 124a5cc7 call 0x124a6000 */
  push32(0x124a5cccu); f_124a6000();
  /* 124a5ccc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5ccf jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5cd4:;
  /* 124a5cd4 mov ecx, dword ptr [0x124c4bb0] */
  ECX = (r32((uint32_t)(0x124c4bb0)));
  /* 124a5cda mov dword ptr [0x124c4bc0], ecx */
  w32((uint32_t)(0x124c4bc0), (ECX));
  /* 124a5ce0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5ce3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 124a5ce6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a5ce9 jmp 0x124a5d3d */
  goto L_124a5d3d;
L_124a5ceb:;
  /* 124a5ceb mov ecx, dword ptr [0x124c4bb0] */
  ECX = (r32((uint32_t)(0x124c4bb0)));
  /* 124a5cf1 mov dword ptr [0x124c4bc0], ecx */
  w32((uint32_t)(0x124c4bc0), (ECX));
  /* 124a5cf7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5cfa push edx */
  push32((uint32_t)(EDX));
  /* 124a5cfb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5cfe push eax */
  push32((uint32_t)(EAX));
  /* 124a5cff push 1 */
  push32((uint32_t)(0x1u));
  /* 124a5d01 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5d04 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 124a5d07 push edx */
  push32((uint32_t)(EDX));
  /* 124a5d08 call 0x124a6000 */
  push32(0x124a5d0du); f_124a6000();
  /* 124a5d0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5d10 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5d15:;
  /* 124a5d15 mov eax, dword ptr [0x124c4bb0] */
  EAX = (r32((uint32_t)(0x124c4bb0)));
  /* 124a5d1a mov dword ptr [0x124c4bc0], eax */
  w32((uint32_t)(0x124c4bc0), (EAX));
  /* 124a5d1f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5d22 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5d26 jne 0x124a5d31 */
  if (!C.zf) goto L_124a5d31;
  /* 124a5d28 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 124a5d2f jmp 0x124a5d3d */
  goto L_124a5d3d;
L_124a5d31:;
  /* 124a5d31 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5d34 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 124a5d37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a5d3a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124a5d3d:;
  /* 124a5d3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5d40 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 124a5d43 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5d46 jge 0x124a5d51 */
  if ((C.sf==C.of)) goto L_124a5d51;
  /* 124a5d48 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a5d4f jmp 0x124a5d7e */
  goto L_124a5d7e;
L_124a5d51:;
  /* 124a5d51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5d54 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124a5d57 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a5d58 mov ecx, 7 */
  ECX = (0x7u);
  /* 124a5d5d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124a5d5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a5d62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5d65 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124a5d68 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a5d69 mov ecx, 7 */
  ECX = (0x7u);
  /* 124a5d6e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124a5d70 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5d73 jl 0x124a5d7e */
  if ((C.sf!=C.of)) goto L_124a5d7e;
  /* 124a5d75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a5d78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5d7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124a5d7e:;
  /* 124a5d7e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5d81 push eax */
  push32((uint32_t)(EAX));
  /* 124a5d82 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5d85 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5d86 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a5d88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a5d8b push edx */
  push32((uint32_t)(EDX));
  /* 124a5d8c call 0x124a6000 */
  push32(0x124a5d91u); f_124a6000();
  /* 124a5d91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5d94 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5d99:;
  /* 124a5d99 cmp dword ptr [0x124c4bb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4bb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5da0 je 0x124a5dd0 */
  if (C.zf) goto L_124a5dd0;
  /* 124a5da2 mov dword ptr [0x124c4bb0], 0 */
  w32((uint32_t)(0x124c4bb0), (0x0u));
  /* 124a5dac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5daf push eax */
  push32((uint32_t)(EAX));
  /* 124a5db0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5db3 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5db4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5db7 push edx */
  push32((uint32_t)(EDX));
  /* 124a5db8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5dbb push eax */
  push32((uint32_t)(EAX));
  /* 124a5dbc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5dbf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 124a5dc5 push edx */
  push32((uint32_t)(EDX));
  /* 124a5dc6 call 0x124a6160 */
  push32(0x124a5dcbu); f_124a6160();
  /* 124a5dcb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5dce jmp 0x124a5df2 */
  goto L_124a5df2;
L_124a5dd0:;
  /* 124a5dd0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5dd3 push eax */
  push32((uint32_t)(EAX));
  /* 124a5dd4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5dd7 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5dd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5ddb push edx */
  push32((uint32_t)(EDX));
  /* 124a5ddc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5ddf push eax */
  push32((uint32_t)(EAX));
  /* 124a5de0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5de3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 124a5de9 push edx */
  push32((uint32_t)(EDX));
  /* 124a5dea call 0x124a6160 */
  push32(0x124a5defu); f_124a6160();
  /* 124a5def add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a5df2:;
  /* 124a5df2 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5df7:;
  /* 124a5df7 mov dword ptr [0x124c4bb0], 0 */
  w32((uint32_t)(0x124c4bb0), (0x0u));
  /* 124a5e01 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5e04 push eax */
  push32((uint32_t)(EAX));
  /* 124a5e05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5e08 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5e09 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5e0c push edx */
  push32((uint32_t)(EDX));
  /* 124a5e0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5e10 push eax */
  push32((uint32_t)(EAX));
  /* 124a5e11 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a5e14 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 124a5e1a push edx */
  push32((uint32_t)(EDX));
  /* 124a5e1b call 0x124a6160 */
  push32(0x124a5e20u); f_124a6160();
  /* 124a5e20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5e23 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5e28:;
  /* 124a5e28 mov eax, dword ptr [0x124c4bb0] */
  EAX = (r32((uint32_t)(0x124c4bb0)));
  /* 124a5e2d mov dword ptr [0x124c4bc0], eax */
  w32((uint32_t)(0x124c4bc0), (EAX));
  /* 124a5e32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5e35 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 124a5e38 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a5e39 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 124a5e3e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124a5e40 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124a5e43 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5e46 push edx */
  push32((uint32_t)(EDX));
  /* 124a5e47 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5e4a push eax */
  push32((uint32_t)(EAX));
  /* 124a5e4b push 2 */
  push32((uint32_t)(0x2u));
  /* 124a5e4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a5e50 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5e51 call 0x124a6000 */
  push32(0x124a5e56u); f_124a6000();
  /* 124a5e56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5e59 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5e5e:;
  /* 124a5e5e mov edx, dword ptr [0x124c4bb0] */
  EDX = (r32((uint32_t)(0x124c4bb0)));
  /* 124a5e64 mov dword ptr [0x124c4bc0], edx */
  w32((uint32_t)(0x124c4bc0), (EDX));
  /* 124a5e6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5e6d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 124a5e70 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a5e71 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 124a5e76 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124a5e78 mov ecx, eax */
  ECX = (EAX);
  /* 124a5e7a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5e7d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a5e80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5e83 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124a5e86 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a5e87 mov esi, 0x64 */
  ESI = (0x64u);
  /* 124a5e8c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124a5e8e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5e90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a5e93 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5e96 push eax */
  push32((uint32_t)(EAX));
  /* 124a5e97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5e9a push ecx */
  push32((uint32_t)(ECX));
  /* 124a5e9b push 4 */
  push32((uint32_t)(0x4u));
  /* 124a5e9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a5ea0 push edx */
  push32((uint32_t)(EDX));
  /* 124a5ea1 call 0x124a6000 */
  push32(0x124a5ea6u); f_124a6000();
  /* 124a5ea6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5ea9 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5eab:;
  /* 124a5eab call 0x124a6fc0 */
  push32(0x124a5eb0u); f_124a6fc0();
  /* 124a5eb0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5eb3 push eax */
  push32((uint32_t)(EAX));
  /* 124a5eb4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5eb8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5ebb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a5ebd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5ec1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 124a5ec4 mov ecx, dword ptr [eax*4 + 0x124c3e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x124c3e1c)));
  /* 124a5ecb push ecx */
  push32((uint32_t)(ECX));
  /* 124a5ecc call 0x124a5fb0 */
  push32(0x124a5ed1u); f_124a5fb0();
  /* 124a5ed1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5ed4 jmp 0x124a5ef8 */
  goto L_124a5ef8;
L_124a5ed6:;
  /* 124a5ed6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5ed9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a5edb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 124a5ede mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5ee1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a5ee3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5ee6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5ee9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124a5eeb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5eee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a5ef0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a5ef3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a5ef6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_124a5ef8:;
  /* 124a5ef8 pop esi */
  ESI = (pop32());
  /* 124a5ef9 mov esp, ebp */
  ESP = (EBP);
  /* 124a5efb pop ebp */
  EBP = (pop32());
  /* 124a5efc ret  */
  ESPCHK(0x124a5990u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x124a5fb0 (72 bytes, 30 insns) */
void f_124a5fb0(void) {
  FTRACE(0x124a5fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a5fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a5fb1 mov ebp, esp */
  EBP = (ESP);
L_124a5fb3:;
  /* 124a5fb3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5fb6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5fb9 je 0x124a5ff6 */
  if (C.zf) goto L_124a5ff6;
  /* 124a5fbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a5fbe movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a5fc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a5fc3 je 0x124a5ff6 */
  if (C.zf) goto L_124a5ff6;
  /* 124a5fc5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5fc8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a5fca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a5fcd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a5fcf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124a5fd1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5fd4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a5fd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5fd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a5fdc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124a5fde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a5fe1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5fe4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124a5fe7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5fea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a5fec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a5fef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a5ff2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124a5ff4 jmp 0x124a5fb3 */
  goto L_124a5fb3;
L_124a5ff6:;
  /* 124a5ff6 pop ebp */
  EBP = (pop32());
  /* 124a5ff7 ret  */
  ESPCHK(0x124a5fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016000 @ 0x124a6000 (173 bytes, 64 insns) */
void f_124a6000(void) {
  FTRACE(0x124a6000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a6000 push ebp */
  push32((uint32_t)(EBP));
  /* 124a6001 mov ebp, esp */
  EBP = (ESP);
  /* 124a6003 push ecx */
  push32((uint32_t)(ECX));
  /* 124a6004 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a600b cmp dword ptr [0x124c4bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6012 je 0x124a602a */
  if (C.zf) goto L_124a602a;
  /* 124a6014 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a6017 push eax */
  push32((uint32_t)(EAX));
  /* 124a6018 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a601b push ecx */
  push32((uint32_t)(ECX));
  /* 124a601c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a601f push edx */
  push32((uint32_t)(EDX));
  /* 124a6020 call 0x124a60b0 */
  push32(0x124a6025u); f_124a60b0();
  /* 124a6025 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6028 jmp 0x124a60a9 */
  goto L_124a60a9;
L_124a602a:;
  /* 124a602a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a602d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a6030 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6032 jae 0x124a60a0 */
  if (!C.cf) goto L_124a60a0;
  /* 124a6034 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a6037 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a603a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 124a603d jmp 0x124a6048 */
  goto L_124a6048;
L_124a603f:;
  /* 124a603f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a6042 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a6045 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_124a6048:;
  /* 124a6048 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a604b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a604e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a6050 je 0x124a6084 */
  if (C.zf) goto L_124a6084;
  /* 124a6052 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6055 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a6056 mov ecx, 0xa */
  ECX = (0xau);
  /* 124a605b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124a605d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6060 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6063 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a6065 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a6068 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 124a606b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a606e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a606f mov ecx, 0xa */
  ECX = (0xau);
  /* 124a6074 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124a6076 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a6079 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a607c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a607f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124a6082 jmp 0x124a603f */
  goto L_124a603f;
L_124a6084:;
  /* 124a6084 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6087 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a6089 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a608c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a608f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124a6091 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a6094 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a6096 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a6099 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a609c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124a609e jmp 0x124a60a9 */
  goto L_124a60a9;
L_124a60a0:;
  /* 124a60a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a60a3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_124a60a9:;
  /* 124a60a9 mov esp, ebp */
  ESP = (EBP);
  /* 124a60ab pop ebp */
  EBP = (pop32());
  /* 124a60ac ret  */
  ESPCHK(0x124a6000u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x124a60b0 (172 bytes, 65 insns) */
void f_124a60b0(void) {
  FTRACE(0x124a60b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a60b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a60b1 mov ebp, esp */
  EBP = (ESP);
  /* 124a60b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a60b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a60b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a60bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a60be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a60c1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a60c4 jbe 0x124a610b */
  if ((C.cf||C.zf)) goto L_124a610b;
L_124a60c6:;
  /* 124a60c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a60c9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a60ca mov ecx, 0xa */
  ECX = (0xau);
  /* 124a60cf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124a60d1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a60d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a60d7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 124a60d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a60dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a60df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a60e2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a60e5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a60e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a60ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a60ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124a60ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a60f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a60f3 mov ecx, 0xa */
  ECX = (0xau);
  /* 124a60f8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124a60fa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a60fd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6101 jle 0x124a610b */
  if ((C.zf||C.sf!=C.of)) goto L_124a610b;
  /* 124a6103 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6106 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6109 ja 0x124a60c6 */
  if ((!C.cf&&!C.zf)) goto L_124a60c6;
L_124a610b:;
  /* 124a610b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a610e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a6110 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a6113 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a6116 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a6119 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 124a611b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a611e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a6121 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124a6124:;
  /* 124a6124 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a6127 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a6129 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 124a612c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a612f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a6132 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a6134 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124a6136 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a6139 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a613c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a613f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a6142 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 124a6145 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 124a6147 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a614a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a614d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a6150 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a6153 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6156 jb 0x124a6124 */
  if (C.cf) goto L_124a6124;
  /* 124a6158 mov esp, ebp */
  ESP = (EBP);
  /* 124a615a pop ebp */
  EBP = (pop32());
  /* 124a615b ret  */
  ESPCHK(0x124a60b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016160 @ 0x124a6160 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_124a6160(void) {
  FTRACE(0x124a6160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a6160 push ebp */
  push32((uint32_t)(EBP));
  /* 124a6161 mov ebp, esp */
  EBP = (ESP);
  /* 124a6163 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_124a6166:;
  /* 124a6166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6169 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a616c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a616e je 0x124a65dc */
  if (C.zf) goto L_124a65dc;
  /* 124a6174 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a6177 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a617a je 0x124a65dc */
  if (C.zf) goto L_124a65dc;
  /* 124a6180 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 124a6184 mov dword ptr [0x124c4bc0], 0 */
  w32((uint32_t)(0x124c4bc0), (0x0u));
  /* 124a618e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124a6195 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6198 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a619b jmp 0x124a61a6 */
  goto L_124a61a6;
L_124a619d:;
  /* 124a619d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a61a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a61a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_124a61a6:;
  /* 124a61a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a61a9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124a61ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a61af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a61b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a61b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a61b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a61bb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a61bd jne 0x124a61c1 */
  if (!C.zf) goto L_124a61c1;
  /* 124a61bf jmp 0x124a619d */
  goto L_124a619d;
L_124a61c1:;
  /* 124a61c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a61c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a61c7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124a61ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a61cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a61d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124a61d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a61d6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a61d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124a61dc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a61e0 ja 0x124a6530 */
  if ((!C.cf&&!C.zf)) goto L_124a6530;
  /* 124a61e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a61e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a61eb mov al, byte ptr [ecx + 0x124a660c] */
  AL = (r8((uint32_t)(ECX + 0x124a660c)));
  /* 124a61f1 jmp dword ptr [eax*4 + 0x124a65e0] */
  switch (EAX) {
    case 0: goto L_124a644f;
    case 1: goto L_124a6333;
    case 2: goto L_124a62be;
    case 3: goto L_124a61f8;
    case 4: goto L_124a6236;
    case 5: goto L_124a6297;
    case 6: goto L_124a62e5;
    case 7: goto L_124a630c;
    case 8: goto L_124a637a;
    case 9: goto L_124a6274;
    case 10: goto L_124a6530;
    default: x86_unimpl("switch@0x124a61f1 out of table"); return;
  }
L_124a61f8:;
  /* 124a61f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a61fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 124a61fe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a6201 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a6204 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124a6207 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a620b ja 0x124a6231 */
  if ((!C.cf&&!C.zf)) goto L_124a6231;
  /* 124a620d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a6210 jmp dword ptr [ecx*4 + 0x124a665f] */
  switch (ECX) {
    case 0: goto L_124a6217;
    case 1: goto L_124a6221;
    case 2: goto L_124a6227;
    case 3: goto L_124a622d;
    case 4: goto L_124a6255;
    case 5: goto L_124a625f;
    case 6: goto L_124a6265;
    case 7: goto L_124a626b;
    default: x86_unimpl("switch@0x124a6210 out of table"); return;
  }
L_124a6217:;
  /* 124a6217 mov dword ptr [0x124c4bc0], 1 */
  w32((uint32_t)(0x124c4bc0), (0x1u));
L_124a6221:;
  /* 124a6221 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 124a6225 jmp 0x124a6231 */
  goto L_124a6231;
L_124a6227:;
  /* 124a6227 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 124a622b jmp 0x124a6231 */
  goto L_124a6231;
L_124a622d:;
  /* 124a622d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_124a6231:;
  /* 124a6231 jmp 0x124a6530 */
  goto L_124a6530;
L_124a6236:;
  /* 124a6236 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a6239 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 124a623c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a623f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a6242 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124a6245 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6249 ja 0x124a626f */
  if ((!C.cf&&!C.zf)) goto L_124a626f;
  /* 124a624b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a624e jmp dword ptr [ecx*4 + 0x124a666f] */
  switch (ECX) {
    case 0: goto L_124a6255;
    case 1: goto L_124a625f;
    case 2: goto L_124a6265;
    case 3: goto L_124a626b;
    default: x86_unimpl("switch@0x124a624e out of table"); return;
  }
L_124a6255:;
  /* 124a6255 mov dword ptr [0x124c4bc0], 1 */
  w32((uint32_t)(0x124c4bc0), (0x1u));
L_124a625f:;
  /* 124a625f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 124a6263 jmp 0x124a626f */
  goto L_124a626f;
L_124a6265:;
  /* 124a6265 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 124a6269 jmp 0x124a626f */
  goto L_124a626f;
L_124a626b:;
  /* 124a626b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_124a626f:;
  /* 124a626f jmp 0x124a6530 */
  goto L_124a6530;
L_124a6274:;
  /* 124a6274 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a6277 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 124a627a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a627e je 0x124a6288 */
  if (C.zf) goto L_124a6288;
  /* 124a6280 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6284 je 0x124a628e */
  if (C.zf) goto L_124a628e;
  /* 124a6286 jmp 0x124a6292 */
  goto L_124a6292;
L_124a6288:;
  /* 124a6288 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 124a628c jmp 0x124a6292 */
  goto L_124a6292;
L_124a628e:;
  /* 124a628e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_124a6292:;
  /* 124a6292 jmp 0x124a6530 */
  goto L_124a6530;
L_124a6297:;
  /* 124a6297 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a629a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124a629d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a62a1 je 0x124a62ab */
  if (C.zf) goto L_124a62ab;
  /* 124a62a3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a62a7 je 0x124a62b5 */
  if (C.zf) goto L_124a62b5;
  /* 124a62a9 jmp 0x124a62b9 */
  goto L_124a62b9;
L_124a62ab:;
  /* 124a62ab mov dword ptr [0x124c4bc0], 1 */
  w32((uint32_t)(0x124c4bc0), (0x1u));
L_124a62b5:;
  /* 124a62b5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_124a62b9:;
  /* 124a62b9 jmp 0x124a6530 */
  goto L_124a6530;
L_124a62be:;
  /* 124a62be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a62c1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 124a62c4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a62c8 je 0x124a62d2 */
  if (C.zf) goto L_124a62d2;
  /* 124a62ca cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a62ce je 0x124a62dc */
  if (C.zf) goto L_124a62dc;
  /* 124a62d0 jmp 0x124a62e0 */
  goto L_124a62e0;
L_124a62d2:;
  /* 124a62d2 mov dword ptr [0x124c4bc0], 1 */
  w32((uint32_t)(0x124c4bc0), (0x1u));
L_124a62dc:;
  /* 124a62dc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_124a62e0:;
  /* 124a62e0 jmp 0x124a6530 */
  goto L_124a6530;
L_124a62e5:;
  /* 124a62e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a62e8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 124a62eb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a62ef je 0x124a62f9 */
  if (C.zf) goto L_124a62f9;
  /* 124a62f1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a62f5 je 0x124a6303 */
  if (C.zf) goto L_124a6303;
  /* 124a62f7 jmp 0x124a6307 */
  goto L_124a6307;
L_124a62f9:;
  /* 124a62f9 mov dword ptr [0x124c4bc0], 1 */
  w32((uint32_t)(0x124c4bc0), (0x1u));
L_124a6303:;
  /* 124a6303 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_124a6307:;
  /* 124a6307 jmp 0x124a6530 */
  goto L_124a6530;
L_124a630c:;
  /* 124a630c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a630f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 124a6312 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6316 je 0x124a6320 */
  if (C.zf) goto L_124a6320;
  /* 124a6318 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a631c je 0x124a632a */
  if (C.zf) goto L_124a632a;
  /* 124a631e jmp 0x124a632e */
  goto L_124a632e;
L_124a6320:;
  /* 124a6320 mov dword ptr [0x124c4bc0], 1 */
  w32((uint32_t)(0x124c4bc0), (0x1u));
L_124a632a:;
  /* 124a632a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_124a632e:;
  /* 124a632e jmp 0x124a6530 */
  goto L_124a6530;
L_124a6333:;
  /* 124a6333 push 0x124c1144 */
  push32((uint32_t)(0x124c1144u));
  /* 124a6338 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a633b push ecx */
  push32((uint32_t)(ECX));
  /* 124a633c call 0x124a6b90 */
  push32(0x124a6341u); f_124a6b90();
  /* 124a6341 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a6346 jne 0x124a6353 */
  if (!C.zf) goto L_124a6353;
  /* 124a6348 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a634b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a634e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124a6351 jmp 0x124a6371 */
  goto L_124a6371;
L_124a6353:;
  /* 124a6353 push 0x124c1140 */
  push32((uint32_t)(0x124c1140u));
  /* 124a6358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a635b push eax */
  push32((uint32_t)(EAX));
  /* 124a635c call 0x124a6b90 */
  push32(0x124a6361u); f_124a6b90();
  /* 124a6361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6364 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a6366 jne 0x124a6371 */
  if (!C.zf) goto L_124a6371;
  /* 124a6368 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a636b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a636e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124a6371:;
  /* 124a6371 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 124a6375 jmp 0x124a6530 */
  goto L_124a6530;
L_124a637a:;
  /* 124a637a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a637d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6381 jg 0x124a6391 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a6391;
  /* 124a6383 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a6386 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 124a638c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124a638f jmp 0x124a639d */
  goto L_124a639d;
L_124a6391:;
  /* 124a6391 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a6394 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 124a639a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_124a639d:;
  /* 124a639d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a63a1 jle 0x124a6444 */
  if ((C.zf||C.sf!=C.of)) goto L_124a6444;
  /* 124a63a7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a63aa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a63ad jbe 0x124a6444 */
  if ((C.cf||C.zf)) goto L_124a6444;
  /* 124a63b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a63b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a63b8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a63ba mov ecx, dword ptr [0x124c2c98] */
  ECX = (r32((uint32_t)(0x124c2c98)));
  /* 124a63c0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a63c2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124a63c6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 124a63cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a63ce je 0x124a6407 */
  if (C.zf) goto L_124a6407;
  /* 124a63d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a63d3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a63d6 jbe 0x124a6407 */
  if ((C.cf||C.zf)) goto L_124a6407;
  /* 124a63d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a63db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a63dd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a63e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124a63e2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 124a63e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a63e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a63e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a63ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a63ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124a63f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a63f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a63f7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 124a63fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a63fd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a63ff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a6402 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a6405 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_124a6407:;
  /* 124a6407 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a640a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a640c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a640f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a6411 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124a6413 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6416 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a6418 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a641b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a641e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124a6420 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a6423 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6426 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124a6429 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a642c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a642e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a6431 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a6434 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124a6436 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a6439 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a643c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 124a643f jmp 0x124a639d */
  goto L_124a639d;
L_124a6444:;
  /* 124a6444 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a6447 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a644a jmp 0x124a6166 */
  goto L_124a6166;
L_124a644f:;
  /* 124a644f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a6452 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124a6455 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a6457 je 0x124a6522 */
  if (C.zf) goto L_124a6522;
  /* 124a645d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6460 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6463 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_124a6466:;
  /* 124a6466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6469 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a646c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a646e je 0x124a6520 */
  if (C.zf) goto L_124a6520;
  /* 124a6474 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a6477 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a647a je 0x124a6520 */
  if (C.zf) goto L_124a6520;
  /* 124a6480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6483 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a6486 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6489 jne 0x124a6499 */
  if (!C.zf) goto L_124a6499;
  /* 124a648b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a648e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6491 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 124a6494 jmp 0x124a6520 */
  goto L_124a6520;
L_124a6499:;
  /* 124a6499 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a649c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a649e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124a64a0 mov edx, dword ptr [0x124c2c98] */
  EDX = (r32((uint32_t)(0x124c2c98)));
  /* 124a64a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a64a8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 124a64ac and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 124a64b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a64b3 je 0x124a64ec */
  if (C.zf) goto L_124a64ec;
  /* 124a64b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a64b8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a64bb jbe 0x124a64ec */
  if ((C.cf||C.zf)) goto L_124a64ec;
  /* 124a64bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a64c0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a64c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a64c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124a64c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 124a64c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a64cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a64ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a64d1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a64d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124a64d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a64d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a64dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a64df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a64e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a64e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a64e7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a64ea mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_124a64ec:;
  /* 124a64ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a64ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a64f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a64f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124a64f6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 124a64f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a64fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a64fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6500 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6503 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124a6505 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6508 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a650b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 124a650e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a6511 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a6513 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a6516 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a6519 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124a651b jmp 0x124a6466 */
  goto L_124a6466;
L_124a6520:;
  /* 124a6520 jmp 0x124a652b */
  goto L_124a652b;
L_124a6522:;
  /* 124a6522 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6525 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6528 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_124a652b:;
  /* 124a652b jmp 0x124a6166 */
  goto L_124a6166;
L_124a6530:;
  /* 124a6530 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124a6534 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a6536 je 0x124a655c */
  if (C.zf) goto L_124a655c;
  /* 124a6538 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a653b push edx */
  push32((uint32_t)(EDX));
  /* 124a653c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a653f push eax */
  push32((uint32_t)(EAX));
  /* 124a6540 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6543 push ecx */
  push32((uint32_t)(ECX));
  /* 124a6544 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a6547 push edx */
  push32((uint32_t)(EDX));
  /* 124a6548 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 124a654b push eax */
  push32((uint32_t)(EAX));
  /* 124a654c call 0x124a5990 */
  push32(0x124a6551u); f_124a5990();
  /* 124a6551 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6554 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a6557 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124a655a jmp 0x124a65d7 */
  goto L_124a65d7;
L_124a655c:;
  /* 124a655c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a655f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6561 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a6563 mov ecx, dword ptr [0x124c2c98] */
  ECX = (r32((uint32_t)(0x124c2c98)));
  /* 124a6569 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a656b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124a656f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 124a6575 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a6577 je 0x124a65a8 */
  if (C.zf) goto L_124a65a8;
  /* 124a6579 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a657c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a657e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6581 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a6583 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124a6585 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6588 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a658a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a658d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6590 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124a6592 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6595 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6598 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124a659b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a659e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a65a0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a65a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a65a6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_124a65a8:;
  /* 124a65a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a65ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a65ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a65b0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124a65b2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 124a65b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a65b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a65b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a65bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a65bf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124a65c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a65c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a65c7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a65ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a65cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a65cf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a65d2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a65d5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_124a65d7:;
  /* 124a65d7 jmp 0x124a6166 */
  goto L_124a6166;
L_124a65dc:;
  /* 124a65dc mov esp, ebp */
  ESP = (EBP);
  /* 124a65de pop ebp */
  EBP = (pop32());
  /* 124a65df ret  */
  ESPCHK(0x124a6160u, _esp0);
  ESP += 4; return;
}

/* FUN_10016680 @ 0x124a6680 (650 bytes, 178 insns) */
void f_124a6680(void) {
  FTRACE(0x124a6680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a6680 push ebp */
  push32((uint32_t)(EBP));
  /* 124a6681 mov ebp, esp */
  EBP = (ESP);
  /* 124a6683 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a6689 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a668d jne 0x124a67e9 */
  if (!C.zf) goto L_124a67e9;
  /* 124a6693 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a6696 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 124a669c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 124a66a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a66a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a66ac mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 124a66b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a66b8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 124a66be push edx */
  push32((uint32_t)(EDX));
  /* 124a66bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a66c2 push eax */
  push32((uint32_t)(EAX));
  /* 124a66c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a66c6 push ecx */
  push32((uint32_t)(ECX));
  /* 124a66c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a66ca push edx */
  push32((uint32_t)(EDX));
  /* 124a66cb call 0x124a7aa0 */
  push32(0x124a66d0u); f_124a7aa0();
  /* 124a66d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a66d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a66d6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a66da jne 0x124a676f */
  if (!C.zf) goto L_124a676f;
  /* 124a66e0 call dword ptr [0x124c7388] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7388))), 0x124a66e6u);
  /* 124a66e6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a66e9 je 0x124a66f0 */
  if (C.zf) goto L_124a66f0;
  /* 124a66eb jmp 0x124a67cd */
  goto L_124a67cd;
L_124a66f0:;
  /* 124a66f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a66f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a66f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a66f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a66f9 push eax */
  push32((uint32_t)(EAX));
  /* 124a66fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a66fd push ecx */
  push32((uint32_t)(ECX));
  /* 124a66fe call 0x124a7aa0 */
  push32(0x124a6703u); f_124a7aa0();
  /* 124a6703 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6706 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 124a670c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6713 jne 0x124a671a */
  if (!C.zf) goto L_124a671a;
  /* 124a6715 jmp 0x124a67cd */
  goto L_124a67cd;
L_124a671a:;
  /* 124a671a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 124a671c push 0x124c114c */
  push32((uint32_t)(0x124c114cu));
  /* 124a6721 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a6723 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 124a6729 push edx */
  push32((uint32_t)(EDX));
  /* 124a672a call 0x124984c0 */
  push32(0x124a672fu); f_124984c0();
  /* 124a672f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6732 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a6735 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6739 jne 0x124a6740 */
  if (!C.zf) goto L_124a6740;
  /* 124a673b jmp 0x124a67cd */
  goto L_124a67cd;
L_124a6740:;
  /* 124a6740 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124a6747 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a6749 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 124a674f push eax */
  push32((uint32_t)(EAX));
  /* 124a6750 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a6753 push ecx */
  push32((uint32_t)(ECX));
  /* 124a6754 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6757 push edx */
  push32((uint32_t)(EDX));
  /* 124a6758 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a675b push eax */
  push32((uint32_t)(EAX));
  /* 124a675c call 0x124a7aa0 */
  push32(0x124a6761u); f_124a7aa0();
  /* 124a6761 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6764 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a6767 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a676b jne 0x124a676f */
  if (!C.zf) goto L_124a676f;
  /* 124a676d jmp 0x124a67cd */
  goto L_124a67cd;
L_124a676f:;
  /* 124a676f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 124a6771 push 0x124c114c */
  push32((uint32_t)(0x124c114cu));
  /* 124a6776 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a6778 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a677b push ecx */
  push32((uint32_t)(ECX));
  /* 124a677c call 0x124984c0 */
  push32(0x124a6781u); f_124984c0();
  /* 124a6781 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6784 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 124a678a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 124a678c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 124a6792 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6795 jne 0x124a6799 */
  if (!C.zf) goto L_124a6799;
  /* 124a6797 jmp 0x124a67cd */
  goto L_124a67cd;
L_124a6799:;
  /* 124a6799 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a679c push ecx */
  push32((uint32_t)(ECX));
  /* 124a679d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a67a0 push edx */
  push32((uint32_t)(EDX));
  /* 124a67a1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 124a67a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a67a9 push ecx */
  push32((uint32_t)(ECX));
  /* 124a67aa call 0x1249bce0 */
  push32(0x124a67afu); f_1249bce0();
  /* 124a67af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a67b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a67b6 je 0x124a67c6 */
  if (C.zf) goto L_124a67c6;
  /* 124a67b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a67ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a67bd push edx */
  push32((uint32_t)(EDX));
  /* 124a67be call 0x12498f50 */
  push32(0x124a67c3u); f_12498f50();
  /* 124a67c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a67c6:;
  /* 124a67c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a67c8 jmp 0x124a6906 */
  goto L_124a6906;
L_124a67cd:;
  /* 124a67cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a67d1 je 0x124a67e1 */
  if (C.zf) goto L_124a67e1;
  /* 124a67d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a67d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a67d8 push eax */
  push32((uint32_t)(EAX));
  /* 124a67d9 call 0x12498f50 */
  push32(0x124a67deu); f_12498f50();
  /* 124a67de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a67e1:;
  /* 124a67e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a67e4 jmp 0x124a6906 */
  goto L_124a6906;
L_124a67e9:;
  /* 124a67e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a67ed jne 0x124a6903 */
  if (!C.zf) goto L_124a6903;
  /* 124a67f3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 124a67fd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a6800 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 124a6806 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a6808 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 124a680e push edx */
  push32((uint32_t)(EDX));
  /* 124a680f push 0x124c4ad8 */
  push32((uint32_t)(0x124c4ad8u));
  /* 124a6814 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6817 push eax */
  push32((uint32_t)(EAX));
  /* 124a6818 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a681b push ecx */
  push32((uint32_t)(ECX));
  /* 124a681c call 0x124a7900 */
  push32(0x124a6821u); f_124a7900();
  /* 124a6821 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6824 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a6826 jne 0x124a6830 */
  if (!C.zf) goto L_124a6830;
  /* 124a6828 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a682b jmp 0x124a6906 */
  goto L_124a6906;
L_124a6830:;
  /* 124a6830 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124a6836 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 124a6839 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 124a6843 jmp 0x124a6854 */
  goto L_124a6854;
L_124a6845:;
  /* 124a6845 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124a684b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a684e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_124a6854:;
  /* 124a6854 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a685b jge 0x124a68ff */
  if ((C.sf==C.of)) goto L_124a68ff;
  /* 124a6861 cmp dword ptr [0x124c2ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c2ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6868 jle 0x124a689b */
  if ((C.zf||C.sf!=C.of)) goto L_124a689b;
  /* 124a686a push 4 */
  push32((uint32_t)(0x4u));
  /* 124a686c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124a6872 mov dl, byte ptr [ecx*2 + 0x124c4ad8] */
  DL = (r8((uint32_t)(ECX*2 + 0x124c4ad8)));
  /* 124a6879 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 124a687f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 124a6885 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a688a push eax */
  push32((uint32_t)(EAX));
  /* 124a688b call 0x1249e4d0 */
  push32(0x124a6890u); f_1249e4d0();
  /* 124a6890 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6893 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 124a6899 jmp 0x124a68ce */
  goto L_124a68ce;
L_124a689b:;
  /* 124a689b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124a68a1 mov dl, byte ptr [ecx*2 + 0x124c4ad8] */
  DL = (r8((uint32_t)(ECX*2 + 0x124c4ad8)));
  /* 124a68a8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 124a68ae mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 124a68b4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a68b9 mov ecx, dword ptr [0x124c2c98] */
  ECX = (r32((uint32_t)(0x124c2c98)));
  /* 124a68bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a68c1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124a68c5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124a68c8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_124a68ce:;
  /* 124a68ce cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a68d5 je 0x124a68f8 */
  if (C.zf) goto L_124a68f8;
  /* 124a68d7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124a68dd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a68e0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a68e3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 124a68ea lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 124a68ee mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124a68f4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124a68f6 jmp 0x124a68fa */
  goto L_124a68fa;
L_124a68f8:;
  /* 124a68f8 jmp 0x124a68ff */
  goto L_124a68ff;
L_124a68fa:;
  /* 124a68fa jmp 0x124a6845 */
  goto L_124a6845;
L_124a68ff:;
  /* 124a68ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6901 jmp 0x124a6906 */
  goto L_124a6906;
L_124a6903:;
  /* 124a6903 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_124a6906:;
  /* 124a6906 mov esp, ebp */
  ESP = (EBP);
  /* 124a6908 pop ebp */
  EBP = (pop32());
  /* 124a6909 ret  */
  ESPCHK(0x124a6680u, _esp0);
  ESP += 4; return;
}

/* FUN_10016910 @ 0x124a6910 (10 bytes, 5 insns) */
void f_124a6910(void) {
  FTRACE(0x124a6910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a6910 push ebp */
  push32((uint32_t)(EBP));
  /* 124a6911 mov ebp, esp */
  EBP = (ESP);
  /* 124a6913 mov eax, dword ptr [0x124c3d88] */
  EAX = (r32((uint32_t)(0x124c3d88)));
  /* 124a6918 pop ebp */
  EBP = (pop32());
  /* 124a6919 ret  */
  ESPCHK(0x124a6910u, _esp0);
  ESP += 4; return;
}

/* FUN_10016920 @ 0x124a6920 (575 bytes, 196 insns) */
void f_124a6920(void) {
  FTRACE(0x124a6920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a6920 push ebp */
  push32((uint32_t)(EBP));
  /* 124a6921 mov ebp, esp */
  EBP = (ESP);
  /* 124a6923 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124a6925 push 0x124c1158 */
  push32((uint32_t)(0x124c1158u));
  /* 124a692a push 0x124a15c8 */
  push32((uint32_t)(0x124a15c8u));
  /* 124a692f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 124a6935 push eax */
  push32((uint32_t)(EAX));
  /* 124a6936 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 124a693d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6940 push ebx */
  push32((uint32_t)(EBX));
  /* 124a6941 push esi */
  push32((uint32_t)(ESI));
  /* 124a6942 push edi */
  push32((uint32_t)(EDI));
  /* 124a6943 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a6946 cmp dword ptr [0x124c4ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a694d jne 0x124a699e */
  if (!C.zf) goto L_124a699e;
  /* 124a694f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 124a6952 push eax */
  push32((uint32_t)(EAX));
  /* 124a6953 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a6955 push 0x124c088c */
  push32((uint32_t)(0x124c088cu));
  /* 124a695a push 1 */
  push32((uint32_t)(0x1u));
  /* 124a695c call dword ptr [0x124c72f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72f4))), 0x124a6962u);
  /* 124a6962 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a6964 je 0x124a6972 */
  if (C.zf) goto L_124a6972;
  /* 124a6966 mov dword ptr [0x124c4ae4], 1 */
  w32((uint32_t)(0x124c4ae4), (0x1u));
  /* 124a6970 jmp 0x124a699e */
  goto L_124a699e;
L_124a6972:;
  /* 124a6972 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 124a6975 push ecx */
  push32((uint32_t)(ECX));
  /* 124a6976 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a6978 push 0x124c0888 */
  push32((uint32_t)(0x124c0888u));
  /* 124a697d push 1 */
  push32((uint32_t)(0x1u));
  /* 124a697f push 0 */
  push32((uint32_t)(0x0u));
  /* 124a6981 call dword ptr [0x124c72f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72f8))), 0x124a6987u);
  /* 124a6987 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a6989 je 0x124a6997 */
  if (C.zf) goto L_124a6997;
  /* 124a698b mov dword ptr [0x124c4ae4], 2 */
  w32((uint32_t)(0x124c4ae4), (0x2u));
  /* 124a6995 jmp 0x124a699e */
  goto L_124a699e;
L_124a6997:;
  /* 124a6997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6999 jmp 0x124a6b79 */
  goto L_124a6b79;
L_124a699e:;
  /* 124a699e cmp dword ptr [0x124c4ae4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ae4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a69a5 jne 0x124a69c2 */
  if (!C.zf) goto L_124a69c2;
  /* 124a69a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a69aa push edx */
  push32((uint32_t)(EDX));
  /* 124a69ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a69ae push eax */
  push32((uint32_t)(EAX));
  /* 124a69af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a69b2 push ecx */
  push32((uint32_t)(ECX));
  /* 124a69b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a69b6 push edx */
  push32((uint32_t)(EDX));
  /* 124a69b7 call dword ptr [0x124c72f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72f4))), 0x124a69bdu);
  /* 124a69bd jmp 0x124a6b79 */
  goto L_124a6b79;
L_124a69c2:;
  /* 124a69c2 cmp dword ptr [0x124c4ae4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ae4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a69c9 jne 0x124a6b77 */
  if (!C.zf) goto L_124a6b77;
  /* 124a69cf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a69d3 jne 0x124a69dd */
  if (!C.zf) goto L_124a69dd;
  /* 124a69d5 mov eax, dword ptr [0x124c4a58] */
  EAX = (r32((uint32_t)(0x124c4a58)));
  /* 124a69da mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_124a69dd:;
  /* 124a69dd push 0 */
  push32((uint32_t)(0x0u));
  /* 124a69df push 0 */
  push32((uint32_t)(0x0u));
  /* 124a69e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a69e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a69e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a69e8 push ecx */
  push32((uint32_t)(ECX));
  /* 124a69e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a69ec push edx */
  push32((uint32_t)(EDX));
  /* 124a69ed push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124a69f2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a69f5 push eax */
  push32((uint32_t)(EAX));
  /* 124a69f6 call dword ptr [0x124c73b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c73b0))), 0x124a69fcu);
  /* 124a69fc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124a69ff cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6a03 jne 0x124a6a0c */
  if (!C.zf) goto L_124a6a0c;
  /* 124a6a05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6a07 jmp 0x124a6b79 */
  goto L_124a6b79;
L_124a6a0c:;
  /* 124a6a0c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a6a13 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a6a16 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6a19 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124a6a1b call 0x1249b660 */
  push32(0x124a6a20u); f_1249b660();
  /* 124a6a20 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 124a6a23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a6a26 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124a6a29 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 124a6a2c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a6a2f push edx */
  push32((uint32_t)(EDX));
  /* 124a6a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a6a32 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124a6a35 push eax */
  push32((uint32_t)(EAX));
  /* 124a6a36 call 0x1249c230 */
  push32(0x124a6a3bu); f_1249c230();
  /* 124a6a3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6a3e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124a6a45 jmp 0x124a6a5e */
  goto L_124a6a5e;
  /* 124a6a47 mov eax, 1 */
  EAX = (0x1u);
  /* 124a6a4c ret  */
  ESPCHK(0x124a6920u, _esp0);
  ESP += 4; return;
  /* 124a6a4d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124a6a50 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 124a6a57 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124a6a5e:;
  /* 124a6a5e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6a62 jne 0x124a6a6b */
  if (!C.zf) goto L_124a6a6b;
  /* 124a6a64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6a66 jmp 0x124a6b79 */
  goto L_124a6b79;
L_124a6a6b:;
  /* 124a6a6b push 0 */
  push32((uint32_t)(0x0u));
  /* 124a6a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 124a6a6f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a6a72 push ecx */
  push32((uint32_t)(ECX));
  /* 124a6a73 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124a6a76 push edx */
  push32((uint32_t)(EDX));
  /* 124a6a77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6a7a push eax */
  push32((uint32_t)(EAX));
  /* 124a6a7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a6a7e push ecx */
  push32((uint32_t)(ECX));
  /* 124a6a7f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124a6a84 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a6a87 push edx */
  push32((uint32_t)(EDX));
  /* 124a6a88 call dword ptr [0x124c73b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c73b0))), 0x124a6a8eu);
  /* 124a6a8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a6a90 jne 0x124a6a99 */
  if (!C.zf) goto L_124a6a99;
  /* 124a6a92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6a94 jmp 0x124a6b79 */
  goto L_124a6b79;
L_124a6a99:;
  /* 124a6a99 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124a6aa0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a6aa3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 124a6aa7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6aaa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124a6aac call 0x1249b660 */
  push32(0x124a6ab1u); f_1249b660();
  /* 124a6ab1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 124a6ab4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a6ab7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 124a6aba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124a6abd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124a6ac4 jmp 0x124a6add */
  goto L_124a6add;
  /* 124a6ac6 mov eax, 1 */
  EAX = (0x1u);
  /* 124a6acb ret  */
  ESPCHK(0x124a6920u, _esp0);
  ESP += 4; return;
  /* 124a6acc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124a6acf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 124a6ad6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124a6add:;
  /* 124a6add cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6ae1 jne 0x124a6aea */
  if (!C.zf) goto L_124a6aea;
  /* 124a6ae3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6ae5 jmp 0x124a6b79 */
  goto L_124a6b79;
L_124a6aea:;
  /* 124a6aea cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6aee jne 0x124a6af9 */
  if (!C.zf) goto L_124a6af9;
  /* 124a6af0 mov edx, dword ptr [0x124c4a48] */
  EDX = (r32((uint32_t)(0x124c4a48)));
  /* 124a6af6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_124a6af9:;
  /* 124a6af9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6afc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a6aff mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 124a6b05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6b08 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a6b0b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 124a6b12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a6b15 push ecx */
  push32((uint32_t)(ECX));
  /* 124a6b16 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a6b19 push edx */
  push32((uint32_t)(EDX));
  /* 124a6b1a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124a6b1d push eax */
  push32((uint32_t)(EAX));
  /* 124a6b1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6b21 push ecx */
  push32((uint32_t)(ECX));
  /* 124a6b22 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124a6b25 push edx */
  push32((uint32_t)(EDX));
  /* 124a6b26 call dword ptr [0x124c72f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72f8))), 0x124a6b2cu);
  /* 124a6b2c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124a6b2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6b32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a6b35 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a6b37 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 124a6b3c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6b42 je 0x124a6b58 */
  if (C.zf) goto L_124a6b58;
  /* 124a6b44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6b47 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a6b4a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a6b4c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124a6b50 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6b56 je 0x124a6b5c */
  if (C.zf) goto L_124a6b5c;
L_124a6b58:;
  /* 124a6b58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6b5a jmp 0x124a6b79 */
  goto L_124a6b79;
L_124a6b5c:;
  /* 124a6b5c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6b5f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124a6b61 push eax */
  push32((uint32_t)(EAX));
  /* 124a6b62 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a6b65 push ecx */
  push32((uint32_t)(ECX));
  /* 124a6b66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a6b69 push edx */
  push32((uint32_t)(EDX));
  /* 124a6b6a call 0x124a03b0 */
  push32(0x124a6b6fu); f_124a03b0();
  /* 124a6b6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6b72 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a6b75 jmp 0x124a6b79 */
  goto L_124a6b79;
L_124a6b77:;
  /* 124a6b77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a6b79:;
  /* 124a6b79 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 124a6b7c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a6b7f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124a6b86 pop edi */
  EDI = (pop32());
  /* 124a6b87 pop esi */
  ESI = (pop32());
  /* 124a6b88 pop ebx */
  EBX = (pop32());
  /* 124a6b89 mov esp, ebp */
  ESP = (EBP);
  /* 124a6b8b pop ebp */
  EBP = (pop32());
  /* 124a6b8c ret  */
  ESPCHK(0x124a6920u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b90 @ 0x124a6b90 (208 bytes, 85 insns) */
void f_124a6b90(void) {
  FTRACE(0x124a6b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a6b90 push ebp */
  push32((uint32_t)(EBP));
  /* 124a6b91 mov ebp, esp */
  EBP = (ESP);
  /* 124a6b93 push edi */
  push32((uint32_t)(EDI));
  /* 124a6b94 push esi */
  push32((uint32_t)(ESI));
  /* 124a6b95 push ebx */
  push32((uint32_t)(EBX));
  /* 124a6b96 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 124a6b99 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6b9c lea eax, [0x124c4a40] */
  EAX = ((uint32_t)(0x124c4a40));
  /* 124a6ba2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6ba6 jne 0x124a6be3 */
  if (!C.zf) goto L_124a6be3;
  /* 124a6ba8 mov al, 0xff */
  AL = (0xffu);
  /* 124a6baa mov edi, edi */
  EDI = (EDI);
L_124a6bac:;
  /* 124a6bac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124a6bae je 0x124a6bde */
  if (C.zf) goto L_124a6bde;
  /* 124a6bb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124a6bb2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124a6bb3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 124a6bb5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 124a6bb6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a6bb8 je 0x124a6bac */
  if (C.zf) goto L_124a6bac;
  /* 124a6bba sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124a6bbc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a6bbe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124a6bc0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 124a6bc3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124a6bc5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124a6bc7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 124a6bc9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124a6bcb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a6bcd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124a6bcf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 124a6bd2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124a6bd4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124a6bd6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a6bd8 je 0x124a6bac */
  if (C.zf) goto L_124a6bac;
  /* 124a6bda sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124a6bdc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_124a6bde:;
  /* 124a6bde movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 124a6be1 jmp 0x124a6c5b */
  goto L_124a6c5b;
L_124a6be3:;
  /* 124a6be3 lock inc dword ptr [0x124c4bd4] */
  x86_unimpl("lock inc @ 0x124a6be3");
  /* 124a6bea cmp dword ptr [0x124c4bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6bf1 jg 0x124a6bf7 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a6bf7;
  /* 124a6bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a6bf5 jmp 0x124a6c0c */
  goto L_124a6c0c;
L_124a6bf7:;
  /* 124a6bf7 lock dec dword ptr [0x124c4bd4] */
  x86_unimpl("lock dec @ 0x124a6bf7");
  /* 124a6bfe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124a6c00 call 0x1249bec0 */
  push32(0x124a6c05u); f_1249bec0();
  /* 124a6c05 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_124a6c0c:;
  /* 124a6c0c mov eax, 0xff */
  EAX = (0xffu);
  /* 124a6c11 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 124a6c13 nop  */
  /* nop */
L_124a6c14:;
  /* 124a6c14 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124a6c16 je 0x124a6c3f */
  if (C.zf) goto L_124a6c3f;
  /* 124a6c18 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124a6c1a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124a6c1b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 124a6c1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 124a6c1e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a6c20 je 0x124a6c14 */
  if (C.zf) goto L_124a6c14;
  /* 124a6c22 push eax */
  push32((uint32_t)(EAX));
  /* 124a6c23 push ebx */
  push32((uint32_t)(EBX));
  /* 124a6c24 call 0x124a7d00 */
  push32(0x124a6c29u); f_124a7d00();
  /* 124a6c29 mov ebx, eax */
  EBX = (EAX);
  /* 124a6c2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6c2e call 0x124a7d00 */
  push32(0x124a6c33u); f_124a7d00();
  /* 124a6c33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6c36 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a6c38 je 0x124a6c14 */
  if (C.zf) goto L_124a6c14;
  /* 124a6c3a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a6c3c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_124a6c3f:;
  /* 124a6c3f mov ebx, eax */
  EBX = (EAX);
  /* 124a6c41 pop eax */
  EAX = (pop32());
  /* 124a6c42 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6c44 jne 0x124a6c4f */
  if (!C.zf) goto L_124a6c4f;
  /* 124a6c46 lock dec dword ptr [0x124c4bd4] */
  x86_unimpl("lock dec @ 0x124a6c46");
  /* 124a6c4d jmp 0x124a6c59 */
  goto L_124a6c59;
L_124a6c4f:;
  /* 124a6c4f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124a6c51 call 0x1249bf60 */
  push32(0x124a6c56u); f_1249bf60();
  /* 124a6c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a6c59:;
  /* 124a6c59 mov eax, ebx */
  EAX = (EBX);
L_124a6c5b:;
  /* 124a6c5b pop ebx */
  EBX = (pop32());
  /* 124a6c5c pop esi */
  ESI = (pop32());
  /* 124a6c5d pop edi */
  EDI = (pop32());
  /* 124a6c5e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124a6c5f ret  */
  ESPCHK(0x124a6b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10016c60 @ 0x124a6c60 (257 bytes, 103 insns) */
void f_124a6c60(void) {
  FTRACE(0x124a6c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a6c60 push ebp */
  push32((uint32_t)(EBP));
  /* 124a6c61 mov ebp, esp */
  EBP = (ESP);
  /* 124a6c63 push edi */
  push32((uint32_t)(EDI));
  /* 124a6c64 push esi */
  push32((uint32_t)(ESI));
  /* 124a6c65 push ebx */
  push32((uint32_t)(EBX));
  /* 124a6c66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a6c69 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a6c6b je 0x124a6d5a */
  if (C.zf) goto L_124a6d5a;
  /* 124a6c71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6c74 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 124a6c77 lea eax, [0x124c4a40] */
  EAX = ((uint32_t)(0x124c4a40));
  /* 124a6c7d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6c81 jne 0x124a6cd1 */
  if (!C.zf) goto L_124a6cd1;
  /* 124a6c83 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 124a6c85 mov bl, 0x5a */
  BL = (0x5au);
  /* 124a6c87 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 124a6c89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124a6c8c:;
  /* 124a6c8c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 124a6c8e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 124a6c90 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 124a6c92 je 0x124a6cb5 */
  if (C.zf) goto L_124a6cb5;
  /* 124a6c94 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124a6c96 je 0x124a6cb5 */
  if (C.zf) goto L_124a6cb5;
  /* 124a6c98 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124a6c99 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 124a6c9a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a6c9c jb 0x124a6ca4 */
  if (C.cf) goto L_124a6ca4;
  /* 124a6c9e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a6ca0 ja 0x124a6ca4 */
  if ((!C.cf&&!C.zf)) goto L_124a6ca4;
  /* 124a6ca2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_124a6ca4:;
  /* 124a6ca4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a6ca6 jb 0x124a6cae */
  if (C.cf) goto L_124a6cae;
  /* 124a6ca8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a6caa ja 0x124a6cae */
  if ((!C.cf&&!C.zf)) goto L_124a6cae;
  /* 124a6cac add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_124a6cae:;
  /* 124a6cae cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a6cb0 jne 0x124a6cbf */
  if (!C.zf) goto L_124a6cbf;
  /* 124a6cb2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 124a6cb3 jne 0x124a6c8c */
  if (!C.zf) goto L_124a6c8c;
L_124a6cb5:;
  /* 124a6cb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a6cb7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a6cb9 je 0x124a6d5a */
  if (C.zf) goto L_124a6d5a;
L_124a6cbf:;
  /* 124a6cbf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 124a6cc4 jb 0x124a6d5a */
  if (C.cf) goto L_124a6d5a;
  /* 124a6cca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a6ccc jmp 0x124a6d5a */
  goto L_124a6d5a;
L_124a6cd1:;
  /* 124a6cd1 lock inc dword ptr [0x124c4bd4] */
  x86_unimpl("lock inc @ 0x124a6cd1");
  /* 124a6cd8 cmp dword ptr [0x124c4bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6cdf jg 0x124a6ce5 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a6ce5;
  /* 124a6ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a6ce3 jmp 0x124a6cfe */
  goto L_124a6cfe;
L_124a6ce5:;
  /* 124a6ce5 lock dec dword ptr [0x124c4bd4] */
  x86_unimpl("lock dec @ 0x124a6ce5");
  /* 124a6cec mov ebx, ecx */
  EBX = (ECX);
  /* 124a6cee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124a6cf0 call 0x1249bec0 */
  push32(0x124a6cf5u); f_1249bec0();
  /* 124a6cf5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 124a6cfc mov ecx, ebx */
  ECX = (EBX);
L_124a6cfe:;
  /* 124a6cfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6d00 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 124a6d02 mov edi, edi */
  EDI = (EDI);
L_124a6d04:;
  /* 124a6d04 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124a6d06 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6d08 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 124a6d0a je 0x124a6d2f */
  if (C.zf) goto L_124a6d2f;
  /* 124a6d0c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 124a6d0e je 0x124a6d2f */
  if (C.zf) goto L_124a6d2f;
  /* 124a6d10 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124a6d11 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 124a6d12 push ecx */
  push32((uint32_t)(ECX));
  /* 124a6d13 push eax */
  push32((uint32_t)(EAX));
  /* 124a6d14 push ebx */
  push32((uint32_t)(EBX));
  /* 124a6d15 call 0x124a7d00 */
  push32(0x124a6d1au); f_124a7d00();
  /* 124a6d1a mov ebx, eax */
  EBX = (EAX);
  /* 124a6d1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6d1f call 0x124a7d00 */
  push32(0x124a6d24u); f_124a7d00();
  /* 124a6d24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6d27 pop ecx */
  ECX = (pop32());
  /* 124a6d28 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6d2a jne 0x124a6d35 */
  if (!C.zf) goto L_124a6d35;
  /* 124a6d2c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 124a6d2d jne 0x124a6d04 */
  if (!C.zf) goto L_124a6d04;
L_124a6d2f:;
  /* 124a6d2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a6d31 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6d33 je 0x124a6d3e */
  if (C.zf) goto L_124a6d3e;
L_124a6d35:;
  /* 124a6d35 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 124a6d3a jb 0x124a6d3e */
  if (C.cf) goto L_124a6d3e;
  /* 124a6d3c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_124a6d3e:;
  /* 124a6d3e pop eax */
  EAX = (pop32());
  /* 124a6d3f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6d41 jne 0x124a6d4c */
  if (!C.zf) goto L_124a6d4c;
  /* 124a6d43 lock dec dword ptr [0x124c4bd4] */
  x86_unimpl("lock dec @ 0x124a6d43");
  /* 124a6d4a jmp 0x124a6d5a */
  goto L_124a6d5a;
L_124a6d4c:;
  /* 124a6d4c mov ebx, ecx */
  EBX = (ECX);
  /* 124a6d4e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124a6d50 call 0x1249bf60 */
  push32(0x124a6d55u); f_1249bf60();
  /* 124a6d55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6d58 mov ecx, ebx */
  ECX = (EBX);
L_124a6d5a:;
  /* 124a6d5a mov eax, ecx */
  EAX = (ECX);
  /* 124a6d5c pop ebx */
  EBX = (pop32());
  /* 124a6d5d pop esi */
  ESI = (pop32());
  /* 124a6d5e pop edi */
  EDI = (pop32());
  /* 124a6d5f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124a6d60 ret  */
  ESPCHK(0x124a6c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d70 @ 0x124a6d70 (255 bytes, 88 insns) */
void f_124a6d70(void) {
  FTRACE(0x124a6d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a6d70 push ebp */
  push32((uint32_t)(EBP));
  /* 124a6d71 mov ebp, esp */
  EBP = (ESP);
  /* 124a6d73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_124a6d76:;
  /* 124a6d76 cmp dword ptr [0x124c2ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c2ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6d7d jle 0x124a6d96 */
  if ((C.zf||C.sf!=C.of)) goto L_124a6d96;
  /* 124a6d7f push 8 */
  push32((uint32_t)(0x8u));
  /* 124a6d81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6d84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a6d86 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124a6d88 push ecx */
  push32((uint32_t)(ECX));
  /* 124a6d89 call 0x1249e4d0 */
  push32(0x124a6d8eu); f_1249e4d0();
  /* 124a6d8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6d91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124a6d94 jmp 0x124a6daf */
  goto L_124a6daf;
L_124a6d96:;
  /* 124a6d96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6d99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6d9b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a6d9d mov ecx, dword ptr [0x124c2c98] */
  ECX = (r32((uint32_t)(0x124c2c98)));
  /* 124a6da3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a6da5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124a6da9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 124a6dac mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124a6daf:;
  /* 124a6daf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6db3 je 0x124a6dc0 */
  if (C.zf) goto L_124a6dc0;
  /* 124a6db5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6db8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6dbb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a6dbe jmp 0x124a6d76 */
  goto L_124a6d76;
L_124a6dc0:;
  /* 124a6dc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6dc3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a6dc5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124a6dc7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124a6dca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6dcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6dd0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a6dd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a6dd6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a6dd9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6ddd je 0x124a6de5 */
  if (C.zf) goto L_124a6de5;
  /* 124a6ddf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6de3 jne 0x124a6df8 */
  if (!C.zf) goto L_124a6df8;
L_124a6de5:;
  /* 124a6de5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6de8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6dea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a6dec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a6def mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6df2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6df5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_124a6df8:;
  /* 124a6df8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_124a6dff:;
  /* 124a6dff cmp dword ptr [0x124c2ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c2ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6e06 jle 0x124a6e1b */
  if ((C.zf||C.sf!=C.of)) goto L_124a6e1b;
  /* 124a6e08 push 4 */
  push32((uint32_t)(0x4u));
  /* 124a6e0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a6e0d push edx */
  push32((uint32_t)(EDX));
  /* 124a6e0e call 0x1249e4d0 */
  push32(0x124a6e13u); f_1249e4d0();
  /* 124a6e13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6e16 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124a6e19 jmp 0x124a6e30 */
  goto L_124a6e30;
L_124a6e1b:;
  /* 124a6e1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a6e1e mov ecx, dword ptr [0x124c2c98] */
  ECX = (r32((uint32_t)(0x124c2c98)));
  /* 124a6e24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a6e26 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124a6e2a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124a6e2d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_124a6e30:;
  /* 124a6e30 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6e34 je 0x124a6e5b */
  if (C.zf) goto L_124a6e5b;
  /* 124a6e36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a6e39 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a6e3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a6e3f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 124a6e43 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124a6e46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6e49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a6e4b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124a6e4d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a6e50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6e53 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6e56 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 124a6e59 jmp 0x124a6dff */
  goto L_124a6dff;
L_124a6e5b:;
  /* 124a6e5b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6e5f jne 0x124a6e68 */
  if (!C.zf) goto L_124a6e68;
  /* 124a6e61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a6e64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a6e66 jmp 0x124a6e6b */
  goto L_124a6e6b;
L_124a6e68:;
  /* 124a6e68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124a6e6b:;
  /* 124a6e6b mov esp, ebp */
  ESP = (EBP);
  /* 124a6e6d pop ebp */
  EBP = (pop32());
  /* 124a6e6e ret  */
  ESPCHK(0x124a6d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e70 @ 0x124a6e70 (17 bytes, 8 insns) */
void f_124a6e70(void) {
  FTRACE(0x124a6e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a6e70 push ebp */
  push32((uint32_t)(EBP));
  /* 124a6e71 mov ebp, esp */
  EBP = (ESP);
  /* 124a6e73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6e76 push eax */
  push32((uint32_t)(EAX));
  /* 124a6e77 call 0x124a6d70 */
  push32(0x124a6e7cu); f_124a6d70();
  /* 124a6e7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6e7f pop ebp */
  EBP = (pop32());
  /* 124a6e80 ret  */
  ESPCHK(0x124a6e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e90 @ 0x124a6e90 (297 bytes, 106 insns) */
void f_124a6e90(void) {
  FTRACE(0x124a6e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a6e90 push ebp */
  push32((uint32_t)(EBP));
  /* 124a6e91 mov ebp, esp */
  EBP = (ESP);
  /* 124a6e93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a6e96 push esi */
  push32((uint32_t)(ESI));
L_124a6e97:;
  /* 124a6e97 cmp dword ptr [0x124c2ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c2ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6e9e jle 0x124a6eb7 */
  if ((C.zf||C.sf!=C.of)) goto L_124a6eb7;
  /* 124a6ea0 push 8 */
  push32((uint32_t)(0x8u));
  /* 124a6ea2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6ea5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a6ea7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124a6ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 124a6eaa call 0x1249e4d0 */
  push32(0x124a6eafu); f_1249e4d0();
  /* 124a6eaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6eb2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124a6eb5 jmp 0x124a6ed0 */
  goto L_124a6ed0;
L_124a6eb7:;
  /* 124a6eb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6eba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6ebc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a6ebe mov ecx, dword ptr [0x124c2c98] */
  ECX = (r32((uint32_t)(0x124c2c98)));
  /* 124a6ec4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a6ec6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124a6eca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 124a6ecd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_124a6ed0:;
  /* 124a6ed0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6ed4 je 0x124a6ee1 */
  if (C.zf) goto L_124a6ee1;
  /* 124a6ed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6ed9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6edc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a6edf jmp 0x124a6e97 */
  goto L_124a6e97;
L_124a6ee1:;
  /* 124a6ee1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6ee4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a6ee6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124a6ee8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124a6eeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6eee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6ef1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a6ef4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a6ef7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124a6efa cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6efe je 0x124a6f06 */
  if (C.zf) goto L_124a6f06;
  /* 124a6f00 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6f04 jne 0x124a6f19 */
  if (!C.zf) goto L_124a6f19;
L_124a6f06:;
  /* 124a6f06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6f09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6f0b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a6f0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a6f10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6f13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6f16 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_124a6f19:;
  /* 124a6f19 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124a6f20 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_124a6f27:;
  /* 124a6f27 cmp dword ptr [0x124c2ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c2ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6f2e jle 0x124a6f43 */
  if ((C.zf||C.sf!=C.of)) goto L_124a6f43;
  /* 124a6f30 push 4 */
  push32((uint32_t)(0x4u));
  /* 124a6f32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a6f35 push edx */
  push32((uint32_t)(EDX));
  /* 124a6f36 call 0x1249e4d0 */
  push32(0x124a6f3bu); f_1249e4d0();
  /* 124a6f3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6f3e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124a6f41 jmp 0x124a6f58 */
  goto L_124a6f58;
L_124a6f43:;
  /* 124a6f43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a6f46 mov ecx, dword ptr [0x124c2c98] */
  ECX = (r32((uint32_t)(0x124c2c98)));
  /* 124a6f4c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a6f4e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124a6f52 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124a6f55 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_124a6f58:;
  /* 124a6f58 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6f5c je 0x124a6f99 */
  if (C.zf) goto L_124a6f99;
  /* 124a6f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 124a6f60 push 0xa */
  push32((uint32_t)(0xau));
  /* 124a6f62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a6f65 push eax */
  push32((uint32_t)(EAX));
  /* 124a6f66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a6f69 push ecx */
  push32((uint32_t)(ECX));
  /* 124a6f6a call 0x124a7e30 */
  push32(0x124a6f6fu); f_124a7e30();
  /* 124a6f6f mov ecx, eax */
  ECX = (EAX);
  /* 124a6f71 mov esi, edx */
  ESI = (EDX);
  /* 124a6f73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a6f76 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a6f79 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a6f7a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6f7c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6f7e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a6f81 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 124a6f84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6f87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a6f89 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a6f8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a6f8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a6f91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6f94 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124a6f97 jmp 0x124a6f27 */
  goto L_124a6f27;
L_124a6f99:;
  /* 124a6f99 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6f9d jne 0x124a6fae */
  if (!C.zf) goto L_124a6fae;
  /* 124a6f9f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a6fa2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a6fa4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a6fa7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6faa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a6fac jmp 0x124a6fb4 */
  goto L_124a6fb4;
L_124a6fae:;
  /* 124a6fae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a6fb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_124a6fb4:;
  /* 124a6fb4 pop esi */
  ESI = (pop32());
  /* 124a6fb5 mov esp, ebp */
  ESP = (EBP);
  /* 124a6fb7 pop ebp */
  EBP = (pop32());
  /* 124a6fb8 ret  */
  ESPCHK(0x124a6e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10016fc0 @ 0x124a6fc0 (61 bytes, 18 insns) */
void f_124a6fc0(void) {
  FTRACE(0x124a6fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a6fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a6fc1 mov ebp, esp */
  EBP = (ESP);
  /* 124a6fc3 cmp dword ptr [0x124c4ba0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ba0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6fca jne 0x124a6ffb */
  if (!C.zf) goto L_124a6ffb;
  /* 124a6fcc push 0xb */
  push32((uint32_t)(0xbu));
  /* 124a6fce call 0x1249bec0 */
  push32(0x124a6fd3u); f_1249bec0();
  /* 124a6fd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6fd6 cmp dword ptr [0x124c4ba0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ba0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a6fdd jne 0x124a6ff1 */
  if (!C.zf) goto L_124a6ff1;
  /* 124a6fdf call 0x124a7020 */
  push32(0x124a6fe4u); f_124a7020();
  /* 124a6fe4 mov eax, dword ptr [0x124c4ba0] */
  EAX = (r32((uint32_t)(0x124c4ba0)));
  /* 124a6fe9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a6fec mov dword ptr [0x124c4ba0], eax */
  w32((uint32_t)(0x124c4ba0), (EAX));
L_124a6ff1:;
  /* 124a6ff1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 124a6ff3 call 0x1249bf60 */
  push32(0x124a6ff8u); f_1249bf60();
  /* 124a6ff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a6ffb:;
  /* 124a6ffb pop ebp */
  EBP = (pop32());
  /* 124a6ffc ret  */
  ESPCHK(0x124a6fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017000 @ 0x124a7000 (30 bytes, 11 insns) */
void f_124a7000(void) {
  FTRACE(0x124a7000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a7000 push ebp */
  push32((uint32_t)(EBP));
  /* 124a7001 mov ebp, esp */
  EBP = (ESP);
  /* 124a7003 push 0xb */
  push32((uint32_t)(0xbu));
  /* 124a7005 call 0x1249bec0 */
  push32(0x124a700au); f_1249bec0();
  /* 124a700a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a700d call 0x124a7020 */
  push32(0x124a7012u); f_124a7020();
  /* 124a7012 push 0xb */
  push32((uint32_t)(0xbu));
  /* 124a7014 call 0x1249bf60 */
  push32(0x124a7019u); f_1249bf60();
  /* 124a7019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a701c pop ebp */
  EBP = (pop32());
  /* 124a701d ret  */
  ESPCHK(0x124a7000u, _esp0);
  ESP += 4; return;
}

/* FUN_10017020 @ 0x124a7020 (939 bytes, 266 insns) */
void f_124a7020(void) {
  FTRACE(0x124a7020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a7020 push ebp */
  push32((uint32_t)(EBP));
  /* 124a7021 mov ebp, esp */
  EBP = (ESP);
  /* 124a7023 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a7026 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a702d push 0xc */
  push32((uint32_t)(0xcu));
  /* 124a702f call 0x1249bec0 */
  push32(0x124a7034u); f_1249bec0();
  /* 124a7034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7037 mov dword ptr [0x124c4ae8], 0 */
  w32((uint32_t)(0x124c4ae8), (0x0u));
  /* 124a7041 mov dword ptr [0x124c3e38], 0xffffffff */
  w32((uint32_t)(0x124c3e38), (0xffffffffu));
  /* 124a704b mov eax, dword ptr [0x124c3e38] */
  EAX = (r32((uint32_t)(0x124c3e38)));
  /* 124a7050 mov dword ptr [0x124c3e28], eax */
  w32((uint32_t)(0x124c3e28), (EAX));
  /* 124a7055 push 0x124c11b8 */
  push32((uint32_t)(0x124c11b8u));
  /* 124a705a call 0x124a7ea0 */
  push32(0x124a705fu); f_124a7ea0();
  /* 124a705f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7062 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a7065 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7069 jne 0x124a71a3 */
  if (!C.zf) goto L_124a71a3;
  /* 124a706f push 0xc */
  push32((uint32_t)(0xcu));
  /* 124a7071 call 0x1249bf60 */
  push32(0x124a7076u); f_1249bf60();
  /* 124a7076 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7079 push 0x124c4af0 */
  push32((uint32_t)(0x124c4af0u));
  /* 124a707e call dword ptr [0x124c72b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72b8))), 0x124a7084u);
  /* 124a7084 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7087 je 0x124a719e */
  if (C.zf) goto L_124a719e;
  /* 124a708d mov dword ptr [0x124c4ae8], 1 */
  w32((uint32_t)(0x124c4ae8), (0x1u));
  /* 124a7097 mov ecx, dword ptr [0x124c4af0] */
  ECX = (r32((uint32_t)(0x124c4af0)));
  /* 124a709d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a70a0 mov dword ptr [0x124c3d90], ecx */
  w32((uint32_t)(0x124c3d90), (ECX));
  /* 124a70a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a70a8 mov dx, word ptr [0x124c4b36] */
  DX = (r16((uint32_t)(0x124c4b36)));
  /* 124a70af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a70b1 je 0x124a70c9 */
  if (C.zf) goto L_124a70c9;
  /* 124a70b3 mov eax, dword ptr [0x124c4b44] */
  EAX = (r32((uint32_t)(0x124c4b44)));
  /* 124a70b8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a70bb mov ecx, dword ptr [0x124c3d90] */
  ECX = (r32((uint32_t)(0x124c3d90)));
  /* 124a70c1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a70c3 mov dword ptr [0x124c3d90], ecx */
  w32((uint32_t)(0x124c3d90), (ECX));
L_124a70c9:;
  /* 124a70c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a70cb mov dx, word ptr [0x124c4b8a] */
  DX = (r16((uint32_t)(0x124c4b8a)));
  /* 124a70d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a70d4 je 0x124a70fe */
  if (C.zf) goto L_124a70fe;
  /* 124a70d6 cmp dword ptr [0x124c4b98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4b98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a70dd je 0x124a70fe */
  if (C.zf) goto L_124a70fe;
  /* 124a70df mov dword ptr [0x124c3d94], 1 */
  w32((uint32_t)(0x124c3d94), (0x1u));
  /* 124a70e9 mov eax, dword ptr [0x124c4b98] */
  EAX = (r32((uint32_t)(0x124c4b98)));
  /* 124a70ee sub eax, dword ptr [0x124c4b44] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c4b44))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a70f4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a70f7 mov dword ptr [0x124c3d98], eax */
  w32((uint32_t)(0x124c3d98), (EAX));
  /* 124a70fc jmp 0x124a7112 */
  goto L_124a7112;
L_124a70fe:;
  /* 124a70fe mov dword ptr [0x124c3d94], 0 */
  w32((uint32_t)(0x124c3d94), (0x0u));
  /* 124a7108 mov dword ptr [0x124c3d98], 0 */
  w32((uint32_t)(0x124c3d98), (0x0u));
L_124a7112:;
  /* 124a7112 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 124a7115 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7116 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7118 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 124a711a mov edx, dword ptr [0x124c3e1c] */
  EDX = (r32((uint32_t)(0x124c3e1c)));
  /* 124a7120 push edx */
  push32((uint32_t)(EDX));
  /* 124a7121 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124a7123 push 0x124c4af4 */
  push32((uint32_t)(0x124c4af4u));
  /* 124a7128 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124a712d mov eax, dword ptr [0x124c4a58] */
  EAX = (r32((uint32_t)(0x124c4a58)));
  /* 124a7132 push eax */
  push32((uint32_t)(EAX));
  /* 124a7133 call dword ptr [0x124c73b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c73b0))), 0x124a7139u);
  /* 124a7139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a713b je 0x124a714f */
  if (C.zf) goto L_124a714f;
  /* 124a713d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7141 jne 0x124a714f */
  if (!C.zf) goto L_124a714f;
  /* 124a7143 mov ecx, dword ptr [0x124c3e1c] */
  ECX = (r32((uint32_t)(0x124c3e1c)));
  /* 124a7149 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 124a714d jmp 0x124a7158 */
  goto L_124a7158;
L_124a714f:;
  /* 124a714f mov edx, dword ptr [0x124c3e1c] */
  EDX = (r32((uint32_t)(0x124c3e1c)));
  /* 124a7155 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_124a7158:;
  /* 124a7158 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 124a715b push eax */
  push32((uint32_t)(EAX));
  /* 124a715c push 0 */
  push32((uint32_t)(0x0u));
  /* 124a715e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 124a7160 mov ecx, dword ptr [0x124c3e20] */
  ECX = (r32((uint32_t)(0x124c3e20)));
  /* 124a7166 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7167 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124a7169 push 0x124c4b48 */
  push32((uint32_t)(0x124c4b48u));
  /* 124a716e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124a7173 mov edx, dword ptr [0x124c4a58] */
  EDX = (r32((uint32_t)(0x124c4a58)));
  /* 124a7179 push edx */
  push32((uint32_t)(EDX));
  /* 124a717a call dword ptr [0x124c73b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c73b0))), 0x124a7180u);
  /* 124a7180 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a7182 je 0x124a7195 */
  if (C.zf) goto L_124a7195;
  /* 124a7184 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7188 jne 0x124a7195 */
  if (!C.zf) goto L_124a7195;
  /* 124a718a mov eax, dword ptr [0x124c3e20] */
  EAX = (r32((uint32_t)(0x124c3e20)));
  /* 124a718f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 124a7193 jmp 0x124a719e */
  goto L_124a719e;
L_124a7195:;
  /* 124a7195 mov ecx, dword ptr [0x124c3e20] */
  ECX = (r32((uint32_t)(0x124c3e20)));
  /* 124a719b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_124a719e:;
  /* 124a719e jmp 0x124a73c7 */
  goto L_124a73c7;
L_124a71a3:;
  /* 124a71a3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a71a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124a71a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a71ab je 0x124a71cd */
  if (C.zf) goto L_124a71cd;
  /* 124a71ad cmp dword ptr [0x124c4b9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4b9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a71b4 je 0x124a71dc */
  if (C.zf) goto L_124a71dc;
  /* 124a71b6 mov ecx, dword ptr [0x124c4b9c] */
  ECX = (r32((uint32_t)(0x124c4b9c)));
  /* 124a71bc push ecx */
  push32((uint32_t)(ECX));
  /* 124a71bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a71c0 push edx */
  push32((uint32_t)(EDX));
  /* 124a71c1 call 0x124a4150 */
  push32(0x124a71c6u); f_124a4150();
  /* 124a71c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a71c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a71cb jne 0x124a71dc */
  if (!C.zf) goto L_124a71dc;
L_124a71cd:;
  /* 124a71cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 124a71cf call 0x1249bf60 */
  push32(0x124a71d4u); f_1249bf60();
  /* 124a71d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a71d7 jmp 0x124a73c7 */
  goto L_124a73c7;
L_124a71dc:;
  /* 124a71dc push 2 */
  push32((uint32_t)(0x2u));
  /* 124a71de mov eax, dword ptr [0x124c4b9c] */
  EAX = (r32((uint32_t)(0x124c4b9c)));
  /* 124a71e3 push eax */
  push32((uint32_t)(EAX));
  /* 124a71e4 call 0x12498f50 */
  push32(0x124a71e9u); f_12498f50();
  /* 124a71e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a71ec push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 124a71f1 push 0x124c11b0 */
  push32((uint32_t)(0x124c11b0u));
  /* 124a71f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a71f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a71fb push ecx */
  push32((uint32_t)(ECX));
  /* 124a71fc call 0x1249b2f0 */
  push32(0x124a7201u); f_1249b2f0();
  /* 124a7201 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7204 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7207 push eax */
  push32((uint32_t)(EAX));
  /* 124a7208 call 0x124984c0 */
  push32(0x124a720du); f_124984c0();
  /* 124a720d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7210 mov dword ptr [0x124c4b9c], eax */
  w32((uint32_t)(0x124c4b9c), (EAX));
  /* 124a7215 cmp dword ptr [0x124c4b9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4b9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a721c jne 0x124a722d */
  if (!C.zf) goto L_124a722d;
  /* 124a721e push 0xc */
  push32((uint32_t)(0xcu));
  /* 124a7220 call 0x1249bf60 */
  push32(0x124a7225u); f_1249bf60();
  /* 124a7225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7228 jmp 0x124a73c7 */
  goto L_124a73c7;
L_124a722d:;
  /* 124a722d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a7230 push edx */
  push32((uint32_t)(EDX));
  /* 124a7231 mov eax, dword ptr [0x124c4b9c] */
  EAX = (r32((uint32_t)(0x124c4b9c)));
  /* 124a7236 push eax */
  push32((uint32_t)(EAX));
  /* 124a7237 call 0x1249b470 */
  push32(0x124a723cu); f_1249b470();
  /* 124a723c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a723f push 0xc */
  push32((uint32_t)(0xcu));
  /* 124a7241 call 0x1249bf60 */
  push32(0x124a7246u); f_1249bf60();
  /* 124a7246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7249 push 3 */
  push32((uint32_t)(0x3u));
  /* 124a724b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a724e push ecx */
  push32((uint32_t)(ECX));
  /* 124a724f mov edx, dword ptr [0x124c3e1c] */
  EDX = (r32((uint32_t)(0x124c3e1c)));
  /* 124a7255 push edx */
  push32((uint32_t)(EDX));
  /* 124a7256 call 0x1249bce0 */
  push32(0x124a725bu); f_1249bce0();
  /* 124a725b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a725e mov eax, dword ptr [0x124c3e1c] */
  EAX = (r32((uint32_t)(0x124c3e1c)));
  /* 124a7263 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 124a7267 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a726a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a726d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a7270 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a7273 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124a7276 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7279 jne 0x124a728d */
  if (!C.zf) goto L_124a728d;
  /* 124a727b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a727e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7281 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a7284 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a7287 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a728a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_124a728d:;
  /* 124a728d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a7290 push eax */
  push32((uint32_t)(EAX));
  /* 124a7291 call 0x124a6d70 */
  push32(0x124a7296u); f_124a6d70();
  /* 124a7296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7299 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a729f mov dword ptr [0x124c3d90], eax */
  w32((uint32_t)(0x124c3d90), (EAX));
L_124a72a4:;
  /* 124a72a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a72a7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a72aa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a72ad je 0x124a72c5 */
  if (C.zf) goto L_124a72c5;
  /* 124a72af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a72b2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a72b5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a72b8 jl 0x124a72d0 */
  if ((C.sf!=C.of)) goto L_124a72d0;
  /* 124a72ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a72bd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124a72c0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a72c3 jg 0x124a72d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a72d0;
L_124a72c5:;
  /* 124a72c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a72c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a72cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a72ce jmp 0x124a72a4 */
  goto L_124a72a4;
L_124a72d0:;
  /* 124a72d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a72d3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124a72d6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a72d9 jne 0x124a7375 */
  if (!C.zf) goto L_124a7375;
  /* 124a72df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a72e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a72e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a72e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a72eb push edx */
  push32((uint32_t)(EDX));
  /* 124a72ec call 0x124a6d70 */
  push32(0x124a72f1u); f_124a6d70();
  /* 124a72f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a72f4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a72f7 mov ecx, dword ptr [0x124c3d90] */
  ECX = (r32((uint32_t)(0x124c3d90)));
  /* 124a72fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a72ff mov dword ptr [0x124c3d90], ecx */
  w32((uint32_t)(0x124c3d90), (ECX));
L_124a7305:;
  /* 124a7305 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a7308 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124a730b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a730e jl 0x124a7326 */
  if ((C.sf!=C.of)) goto L_124a7326;
  /* 124a7310 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a7313 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a7316 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7319 jg 0x124a7326 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a7326;
  /* 124a731b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a731e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7321 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a7324 jmp 0x124a7305 */
  goto L_124a7305;
L_124a7326:;
  /* 124a7326 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a7329 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a732c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a732f jne 0x124a7375 */
  if (!C.zf) goto L_124a7375;
  /* 124a7331 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a7334 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7337 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a733a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a733d push ecx */
  push32((uint32_t)(ECX));
  /* 124a733e call 0x124a6d70 */
  push32(0x124a7343u); f_124a6d70();
  /* 124a7343 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7346 mov edx, dword ptr [0x124c3d90] */
  EDX = (r32((uint32_t)(0x124c3d90)));
  /* 124a734c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a734e mov dword ptr [0x124c3d90], edx */
  w32((uint32_t)(0x124c3d90), (EDX));
L_124a7354:;
  /* 124a7354 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a7357 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a735a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a735d jl 0x124a7375 */
  if ((C.sf!=C.of)) goto L_124a7375;
  /* 124a735f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a7362 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124a7365 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7368 jg 0x124a7375 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a7375;
  /* 124a736a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a736d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7370 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a7373 jmp 0x124a7354 */
  goto L_124a7354;
L_124a7375:;
  /* 124a7375 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7379 je 0x124a7389 */
  if (C.zf) goto L_124a7389;
  /* 124a737b mov edx, dword ptr [0x124c3d90] */
  EDX = (r32((uint32_t)(0x124c3d90)));
  /* 124a7381 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a7383 mov dword ptr [0x124c3d90], edx */
  w32((uint32_t)(0x124c3d90), (EDX));
L_124a7389:;
  /* 124a7389 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a738c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a738f mov dword ptr [0x124c3d94], ecx */
  w32((uint32_t)(0x124c3d94), (ECX));
  /* 124a7395 cmp dword ptr [0x124c3d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c3d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a739c je 0x124a73be */
  if (C.zf) goto L_124a73be;
  /* 124a739e push 3 */
  push32((uint32_t)(0x3u));
  /* 124a73a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a73a3 push edx */
  push32((uint32_t)(EDX));
  /* 124a73a4 mov eax, dword ptr [0x124c3e20] */
  EAX = (r32((uint32_t)(0x124c3e20)));
  /* 124a73a9 push eax */
  push32((uint32_t)(EAX));
  /* 124a73aa call 0x1249bce0 */
  push32(0x124a73afu); f_1249bce0();
  /* 124a73af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a73b2 mov ecx, dword ptr [0x124c3e20] */
  ECX = (r32((uint32_t)(0x124c3e20)));
  /* 124a73b8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 124a73bc jmp 0x124a73c7 */
  goto L_124a73c7;
L_124a73be:;
  /* 124a73be mov edx, dword ptr [0x124c3e20] */
  EDX = (r32((uint32_t)(0x124c3e20)));
  /* 124a73c4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_124a73c7:;
  /* 124a73c7 mov esp, ebp */
  ESP = (EBP);
  /* 124a73c9 pop ebp */
  EBP = (pop32());
  /* 124a73ca ret  */
  ESPCHK(0x124a7020u, _esp0);
  ESP += 4; return;
}

/* FUN_100173d0 @ 0x124a73d0 (46 bytes, 18 insns) */
void f_124a73d0(void) {
  FTRACE(0x124a73d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a73d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a73d1 mov ebp, esp */
  EBP = (ESP);
  /* 124a73d3 push ecx */
  push32((uint32_t)(ECX));
  /* 124a73d4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 124a73d6 call 0x1249bec0 */
  push32(0x124a73dbu); f_1249bec0();
  /* 124a73db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a73de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a73e1 push eax */
  push32((uint32_t)(EAX));
  /* 124a73e2 call 0x124a7400 */
  push32(0x124a73e7u); f_124a7400();
  /* 124a73e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a73ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a73ed push 0xb */
  push32((uint32_t)(0xbu));
  /* 124a73ef call 0x1249bf60 */
  push32(0x124a73f4u); f_1249bf60();
  /* 124a73f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a73f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a73fa mov esp, ebp */
  ESP = (EBP);
  /* 124a73fc pop ebp */
  EBP = (pop32());
  /* 124a73fd ret  */
  ESPCHK(0x124a73d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017400 @ 0x124a7400 (762 bytes, 246 insns) */
void f_124a7400(void) {
  FTRACE(0x124a7400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a7400 push ebp */
  push32((uint32_t)(EBP));
  /* 124a7401 mov ebp, esp */
  EBP = (ESP);
  /* 124a7403 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7404 cmp dword ptr [0x124c3d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c3d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a740b jne 0x124a7414 */
  if (!C.zf) goto L_124a7414;
  /* 124a740d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a740f jmp 0x124a76f6 */
  goto L_124a76f6;
L_124a7414:;
  /* 124a7414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7417 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 124a741a cmp ecx, dword ptr [0x124c3e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c3e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7420 jne 0x124a7434 */
  if (!C.zf) goto L_124a7434;
  /* 124a7422 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7425 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124a7428 cmp eax, dword ptr [0x124c3e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c3e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a742e je 0x124a75fb */
  if (C.zf) goto L_124a75fb;
L_124a7434:;
  /* 124a7434 cmp dword ptr [0x124c4ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a743b je 0x124a75b5 */
  if (C.zf) goto L_124a75b5;
  /* 124a7441 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a7443 mov cx, word ptr [0x124c4b88] */
  CX = (r16((uint32_t)(0x124c4b88)));
  /* 124a744a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a744c jne 0x124a74a9 */
  if (!C.zf) goto L_124a74a9;
  /* 124a744e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a7450 mov dx, word ptr [0x124c4b96] */
  DX = (r16((uint32_t)(0x124c4b96)));
  /* 124a7457 push edx */
  push32((uint32_t)(EDX));
  /* 124a7458 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a745a mov ax, word ptr [0x124c4b94] */
  AX = (r16((uint32_t)(0x124c4b94)));
  /* 124a7460 push eax */
  push32((uint32_t)(EAX));
  /* 124a7461 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a7463 mov cx, word ptr [0x124c4b92] */
  CX = (r16((uint32_t)(0x124c4b92)));
  /* 124a746a push ecx */
  push32((uint32_t)(ECX));
  /* 124a746b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a746d mov dx, word ptr [0x124c4b90] */
  DX = (r16((uint32_t)(0x124c4b90)));
  /* 124a7474 push edx */
  push32((uint32_t)(EDX));
  /* 124a7475 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a7479 mov ax, word ptr [0x124c4b8c] */
  AX = (r16((uint32_t)(0x124c4b8c)));
  /* 124a747f push eax */
  push32((uint32_t)(EAX));
  /* 124a7480 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a7482 mov cx, word ptr [0x124c4b8e] */
  CX = (r16((uint32_t)(0x124c4b8e)));
  /* 124a7489 push ecx */
  push32((uint32_t)(ECX));
  /* 124a748a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a748c mov dx, word ptr [0x124c4b8a] */
  DX = (r16((uint32_t)(0x124c4b8a)));
  /* 124a7493 push edx */
  push32((uint32_t)(EDX));
  /* 124a7494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7497 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 124a749a push ecx */
  push32((uint32_t)(ECX));
  /* 124a749b push 1 */
  push32((uint32_t)(0x1u));
  /* 124a749d push 1 */
  push32((uint32_t)(0x1u));
  /* 124a749f call 0x124a7700 */
  push32(0x124a74a4u); f_124a7700();
  /* 124a74a4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a74a7 jmp 0x124a74fa */
  goto L_124a74fa;
L_124a74a9:;
  /* 124a74a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a74ab mov dx, word ptr [0x124c4b96] */
  DX = (r16((uint32_t)(0x124c4b96)));
  /* 124a74b2 push edx */
  push32((uint32_t)(EDX));
  /* 124a74b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a74b5 mov ax, word ptr [0x124c4b94] */
  AX = (r16((uint32_t)(0x124c4b94)));
  /* 124a74bb push eax */
  push32((uint32_t)(EAX));
  /* 124a74bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a74be mov cx, word ptr [0x124c4b92] */
  CX = (r16((uint32_t)(0x124c4b92)));
  /* 124a74c5 push ecx */
  push32((uint32_t)(ECX));
  /* 124a74c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a74c8 mov dx, word ptr [0x124c4b90] */
  DX = (r16((uint32_t)(0x124c4b90)));
  /* 124a74cf push edx */
  push32((uint32_t)(EDX));
  /* 124a74d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a74d2 mov ax, word ptr [0x124c4b8e] */
  AX = (r16((uint32_t)(0x124c4b8e)));
  /* 124a74d8 push eax */
  push32((uint32_t)(EAX));
  /* 124a74d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a74db push 0 */
  push32((uint32_t)(0x0u));
  /* 124a74dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a74df mov cx, word ptr [0x124c4b8a] */
  CX = (r16((uint32_t)(0x124c4b8a)));
  /* 124a74e6 push ecx */
  push32((uint32_t)(ECX));
  /* 124a74e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a74ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124a74ed push eax */
  push32((uint32_t)(EAX));
  /* 124a74ee push 0 */
  push32((uint32_t)(0x0u));
  /* 124a74f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a74f2 call 0x124a7700 */
  push32(0x124a74f7u); f_124a7700();
  /* 124a74f7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a74fa:;
  /* 124a74fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a74fc mov cx, word ptr [0x124c4b34] */
  CX = (r16((uint32_t)(0x124c4b34)));
  /* 124a7503 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a7505 jne 0x124a7562 */
  if (!C.zf) goto L_124a7562;
  /* 124a7507 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a7509 mov dx, word ptr [0x124c4b42] */
  DX = (r16((uint32_t)(0x124c4b42)));
  /* 124a7510 push edx */
  push32((uint32_t)(EDX));
  /* 124a7511 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a7513 mov ax, word ptr [0x124c4b40] */
  AX = (r16((uint32_t)(0x124c4b40)));
  /* 124a7519 push eax */
  push32((uint32_t)(EAX));
  /* 124a751a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a751c mov cx, word ptr [0x124c4b3e] */
  CX = (r16((uint32_t)(0x124c4b3e)));
  /* 124a7523 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7524 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a7526 mov dx, word ptr [0x124c4b3c] */
  DX = (r16((uint32_t)(0x124c4b3c)));
  /* 124a752d push edx */
  push32((uint32_t)(EDX));
  /* 124a752e push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7530 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a7532 mov ax, word ptr [0x124c4b38] */
  AX = (r16((uint32_t)(0x124c4b38)));
  /* 124a7538 push eax */
  push32((uint32_t)(EAX));
  /* 124a7539 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a753b mov cx, word ptr [0x124c4b3a] */
  CX = (r16((uint32_t)(0x124c4b3a)));
  /* 124a7542 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7543 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a7545 mov dx, word ptr [0x124c4b36] */
  DX = (r16((uint32_t)(0x124c4b36)));
  /* 124a754c push edx */
  push32((uint32_t)(EDX));
  /* 124a754d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7550 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 124a7553 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7554 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a7556 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7558 call 0x124a7700 */
  push32(0x124a755du); f_124a7700();
  /* 124a755d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7560 jmp 0x124a75b3 */
  goto L_124a75b3;
L_124a7562:;
  /* 124a7562 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a7564 mov dx, word ptr [0x124c4b42] */
  DX = (r16((uint32_t)(0x124c4b42)));
  /* 124a756b push edx */
  push32((uint32_t)(EDX));
  /* 124a756c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a756e mov ax, word ptr [0x124c4b40] */
  AX = (r16((uint32_t)(0x124c4b40)));
  /* 124a7574 push eax */
  push32((uint32_t)(EAX));
  /* 124a7575 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a7577 mov cx, word ptr [0x124c4b3e] */
  CX = (r16((uint32_t)(0x124c4b3e)));
  /* 124a757e push ecx */
  push32((uint32_t)(ECX));
  /* 124a757f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a7581 mov dx, word ptr [0x124c4b3c] */
  DX = (r16((uint32_t)(0x124c4b3c)));
  /* 124a7588 push edx */
  push32((uint32_t)(EDX));
  /* 124a7589 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a758b mov ax, word ptr [0x124c4b3a] */
  AX = (r16((uint32_t)(0x124c4b3a)));
  /* 124a7591 push eax */
  push32((uint32_t)(EAX));
  /* 124a7592 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7594 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7596 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a7598 mov cx, word ptr [0x124c4b36] */
  CX = (r16((uint32_t)(0x124c4b36)));
  /* 124a759f push ecx */
  push32((uint32_t)(ECX));
  /* 124a75a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a75a3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124a75a6 push eax */
  push32((uint32_t)(EAX));
  /* 124a75a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a75a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a75ab call 0x124a7700 */
  push32(0x124a75b0u); f_124a7700();
  /* 124a75b0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a75b3:;
  /* 124a75b3 jmp 0x124a75fb */
  goto L_124a75fb;
L_124a75b5:;
  /* 124a75b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a75b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a75b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a75bb push 2 */
  push32((uint32_t)(0x2u));
  /* 124a75bd push 0 */
  push32((uint32_t)(0x0u));
  /* 124a75bf push 0 */
  push32((uint32_t)(0x0u));
  /* 124a75c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a75c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 124a75c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a75c8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 124a75cb push edx */
  push32((uint32_t)(EDX));
  /* 124a75cc push 1 */
  push32((uint32_t)(0x1u));
  /* 124a75ce push 1 */
  push32((uint32_t)(0x1u));
  /* 124a75d0 call 0x124a7700 */
  push32(0x124a75d5u); f_124a7700();
  /* 124a75d5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a75d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a75da push 0 */
  push32((uint32_t)(0x0u));
  /* 124a75dc push 0 */
  push32((uint32_t)(0x0u));
  /* 124a75de push 2 */
  push32((uint32_t)(0x2u));
  /* 124a75e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a75e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a75e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 124a75e6 push 0xa */
  push32((uint32_t)(0xau));
  /* 124a75e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a75eb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 124a75ee push ecx */
  push32((uint32_t)(ECX));
  /* 124a75ef push 1 */
  push32((uint32_t)(0x1u));
  /* 124a75f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a75f3 call 0x124a7700 */
  push32(0x124a75f8u); f_124a7700();
  /* 124a75f8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a75fb:;
  /* 124a75fb mov edx, dword ptr [0x124c3e2c] */
  EDX = (r32((uint32_t)(0x124c3e2c)));
  /* 124a7601 cmp edx, dword ptr [0x124c3e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x124c3e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7607 jge 0x124a7654 */
  if ((C.sf==C.of)) goto L_124a7654;
  /* 124a7609 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a760c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124a760f cmp ecx, dword ptr [0x124c3e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c3e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7615 jl 0x124a7625 */
  if ((C.sf!=C.of)) goto L_124a7625;
  /* 124a7617 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a761a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124a761d cmp eax, dword ptr [0x124c3e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c3e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7623 jle 0x124a762c */
  if ((C.zf||C.sf!=C.of)) goto L_124a762c;
L_124a7625:;
  /* 124a7625 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a7627 jmp 0x124a76f6 */
  goto L_124a76f6;
L_124a762c:;
  /* 124a762c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a762f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 124a7632 cmp edx, dword ptr [0x124c3e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x124c3e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7638 jle 0x124a7652 */
  if ((C.zf||C.sf!=C.of)) goto L_124a7652;
  /* 124a763a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a763d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124a7640 cmp ecx, dword ptr [0x124c3e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c3e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7646 jge 0x124a7652 */
  if ((C.sf==C.of)) goto L_124a7652;
  /* 124a7648 mov eax, 1 */
  EAX = (0x1u);
  /* 124a764d jmp 0x124a76f6 */
  goto L_124a76f6;
L_124a7652:;
  /* 124a7652 jmp 0x124a7697 */
  goto L_124a7697;
L_124a7654:;
  /* 124a7654 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7657 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124a765a cmp eax, dword ptr [0x124c3e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c3e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7660 jl 0x124a7670 */
  if ((C.sf!=C.of)) goto L_124a7670;
  /* 124a7662 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7665 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 124a7668 cmp edx, dword ptr [0x124c3e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x124c3e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a766e jle 0x124a7677 */
  if ((C.zf||C.sf!=C.of)) goto L_124a7677;
L_124a7670:;
  /* 124a7670 mov eax, 1 */
  EAX = (0x1u);
  /* 124a7675 jmp 0x124a76f6 */
  goto L_124a76f6;
L_124a7677:;
  /* 124a7677 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a767a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124a767d cmp ecx, dword ptr [0x124c3e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c3e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7683 jle 0x124a7697 */
  if ((C.zf||C.sf!=C.of)) goto L_124a7697;
  /* 124a7685 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7688 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124a768b cmp eax, dword ptr [0x124c3e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c3e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7691 jge 0x124a7697 */
  if ((C.sf==C.of)) goto L_124a7697;
  /* 124a7693 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a7695 jmp 0x124a76f6 */
  goto L_124a76f6;
L_124a7697:;
  /* 124a7697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a769a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124a769d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a76a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a76a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a76a5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a76a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a76aa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124a76ad imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a76b3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a76b5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a76bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a76be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a76c1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 124a76c4 cmp edx, dword ptr [0x124c3e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x124c3e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a76ca jne 0x124a76e2 */
  if (!C.zf) goto L_124a76e2;
  /* 124a76cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a76cf cmp eax, dword ptr [0x124c3e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c3e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a76d5 jl 0x124a76de */
  if ((C.sf!=C.of)) goto L_124a76de;
  /* 124a76d7 mov eax, 1 */
  EAX = (0x1u);
  /* 124a76dc jmp 0x124a76f6 */
  goto L_124a76f6;
L_124a76de:;
  /* 124a76de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a76e0 jmp 0x124a76f6 */
  goto L_124a76f6;
L_124a76e2:;
  /* 124a76e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a76e5 cmp ecx, dword ptr [0x124c3e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c3e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a76eb jge 0x124a76f4 */
  if ((C.sf==C.of)) goto L_124a76f4;
  /* 124a76ed mov eax, 1 */
  EAX = (0x1u);
  /* 124a76f2 jmp 0x124a76f6 */
  goto L_124a76f6;
L_124a76f4:;
  /* 124a76f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a76f6:;
  /* 124a76f6 mov esp, ebp */
  ESP = (EBP);
  /* 124a76f8 pop ebp */
  EBP = (pop32());
  /* 124a76f9 ret  */
  ESPCHK(0x124a7400u, _esp0);
  ESP += 4; return;
}

/* FUN_10017700 @ 0x124a7700 (504 bytes, 145 insns) */
void f_124a7700(void) {
  FTRACE(0x124a7700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a7700 push ebp */
  push32((uint32_t)(EBP));
  /* 124a7701 mov ebp, esp */
  EBP = (ESP);
  /* 124a7703 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a7706 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a770a jne 0x124a77dc */
  if (!C.zf) goto L_124a77dc;
  /* 124a7710 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a7713 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 124a7716 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a7718 jne 0x124a7729 */
  if (!C.zf) goto L_124a7729;
  /* 124a771a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a771d mov edx, dword ptr [ecx*4 + 0x124c3e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x124c3e4c)));
  /* 124a7724 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 124a7727 jmp 0x124a7736 */
  goto L_124a7736;
L_124a7729:;
  /* 124a7729 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a772c mov ecx, dword ptr [eax*4 + 0x124c3e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x124c3e80)));
  /* 124a7733 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_124a7736:;
  /* 124a7736 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a7739 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a773c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124a773f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a7742 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a7745 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a774b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a774e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7750 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a7753 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a7756 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 124a7759 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 124a775d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a775e mov ecx, 7 */
  ECX = (0x7u);
  /* 124a7763 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124a7765 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124a7768 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a776b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a776e jge 0x124a7789 */
  if ((C.sf==C.of)) goto L_124a7789;
  /* 124a7770 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124a7773 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a7776 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a7779 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a777c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a777f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7782 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7784 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a7787 jmp 0x124a779d */
  goto L_124a779d;
L_124a7789:;
  /* 124a7789 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124a778c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a778f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a7792 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a7795 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7798 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a779a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124a779d:;
  /* 124a779d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a77a1 jne 0x124a77da */
  if (!C.zf) goto L_124a77da;
  /* 124a77a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a77a6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 124a77a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a77ab jne 0x124a77bc */
  if (!C.zf) goto L_124a77bc;
  /* 124a77ad mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a77b0 mov eax, dword ptr [edx*4 + 0x124c3e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x124c3e50)));
  /* 124a77b7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124a77ba jmp 0x124a77c9 */
  goto L_124a77c9;
L_124a77bc:;
  /* 124a77bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a77bf mov edx, dword ptr [ecx*4 + 0x124c3e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x124c3e84)));
  /* 124a77c6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124a77c9:;
  /* 124a77c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a77cc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a77cf jle 0x124a77da */
  if ((C.zf||C.sf!=C.of)) goto L_124a77da;
  /* 124a77d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a77d4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a77d7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_124a77da:;
  /* 124a77da jmp 0x124a7811 */
  goto L_124a7811;
L_124a77dc:;
  /* 124a77dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a77df and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 124a77e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a77e4 jne 0x124a77f5 */
  if (!C.zf) goto L_124a77f5;
  /* 124a77e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a77e9 mov ecx, dword ptr [eax*4 + 0x124c3e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x124c3e4c)));
  /* 124a77f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124a77f3 jmp 0x124a7802 */
  goto L_124a7802;
L_124a77f5:;
  /* 124a77f5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a77f8 mov eax, dword ptr [edx*4 + 0x124c3e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x124c3e80)));
  /* 124a77ff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_124a7802:;
  /* 124a7802 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a7805 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a7808 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a780b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a780e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_124a7811:;
  /* 124a7811 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7815 jne 0x124a7851 */
  if (!C.zf) goto L_124a7851;
  /* 124a7817 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a781a mov dword ptr [0x124c3e2c], eax */
  w32((uint32_t)(0x124c3e2c), (EAX));
  /* 124a781f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 124a7822 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a7825 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 124a7828 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a782a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a782d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 124a7830 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7832 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a7838 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 124a783b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a783d mov dword ptr [0x124c3e30], ecx */
  w32((uint32_t)(0x124c3e30), (ECX));
  /* 124a7843 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a7846 mov dword ptr [0x124c3e28], edx */
  w32((uint32_t)(0x124c3e28), (EDX));
  /* 124a784c jmp 0x124a78f4 */
  goto L_124a78f4;
L_124a7851:;
  /* 124a7851 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a7854 mov dword ptr [0x124c3e3c], eax */
  w32((uint32_t)(0x124c3e3c), (EAX));
  /* 124a7859 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 124a785c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a785f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 124a7862 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7864 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a7867 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 124a786a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a786c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a7872 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 124a7875 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7877 mov dword ptr [0x124c3e40], ecx */
  w32((uint32_t)(0x124c3e40), (ECX));
  /* 124a787d mov edx, dword ptr [0x124c3d98] */
  EDX = (r32((uint32_t)(0x124c3d98)));
  /* 124a7883 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a7889 mov eax, dword ptr [0x124c3e40] */
  EAX = (r32((uint32_t)(0x124c3e40)));
  /* 124a788e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7890 mov dword ptr [0x124c3e40], eax */
  w32((uint32_t)(0x124c3e40), (EAX));
  /* 124a7895 cmp dword ptr [0x124c3e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c3e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a789c jge 0x124a78c1 */
  if ((C.sf==C.of)) goto L_124a78c1;
  /* 124a789e mov ecx, dword ptr [0x124c3e40] */
  ECX = (r32((uint32_t)(0x124c3e40)));
  /* 124a78a4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a78aa mov dword ptr [0x124c3e40], ecx */
  w32((uint32_t)(0x124c3e40), (ECX));
  /* 124a78b0 mov edx, dword ptr [0x124c3e3c] */
  EDX = (r32((uint32_t)(0x124c3e3c)));
  /* 124a78b6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a78b9 mov dword ptr [0x124c3e3c], edx */
  w32((uint32_t)(0x124c3e3c), (EDX));
  /* 124a78bf jmp 0x124a78eb */
  goto L_124a78eb;
L_124a78c1:;
  /* 124a78c1 cmp dword ptr [0x124c3e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x124c3e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a78cb jl 0x124a78eb */
  if ((C.sf!=C.of)) goto L_124a78eb;
  /* 124a78cd mov eax, dword ptr [0x124c3e40] */
  EAX = (r32((uint32_t)(0x124c3e40)));
  /* 124a78d2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a78d7 mov dword ptr [0x124c3e40], eax */
  w32((uint32_t)(0x124c3e40), (EAX));
  /* 124a78dc mov ecx, dword ptr [0x124c3e3c] */
  ECX = (r32((uint32_t)(0x124c3e3c)));
  /* 124a78e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a78e5 mov dword ptr [0x124c3e3c], ecx */
  w32((uint32_t)(0x124c3e3c), (ECX));
L_124a78eb:;
  /* 124a78eb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a78ee mov dword ptr [0x124c3e38], edx */
  w32((uint32_t)(0x124c3e38), (EDX));
L_124a78f4:;
  /* 124a78f4 mov esp, ebp */
  ESP = (EBP);
  /* 124a78f6 pop ebp */
  EBP = (pop32());
  /* 124a78f7 ret  */
  ESPCHK(0x124a7700u, _esp0);
  ESP += 4; return;
}

/* FUN_10017900 @ 0x124a7900 (382 bytes, 135 insns) */
void f_124a7900(void) {
  FTRACE(0x124a7900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a7900 push ebp */
  push32((uint32_t)(EBP));
  /* 124a7901 mov ebp, esp */
  EBP = (ESP);
  /* 124a7903 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124a7905 push 0x124c11c0 */
  push32((uint32_t)(0x124c11c0u));
  /* 124a790a push 0x124a15c8 */
  push32((uint32_t)(0x124a15c8u));
  /* 124a790f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 124a7915 push eax */
  push32((uint32_t)(EAX));
  /* 124a7916 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 124a791d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7920 push ebx */
  push32((uint32_t)(EBX));
  /* 124a7921 push esi */
  push32((uint32_t)(ESI));
  /* 124a7922 push edi */
  push32((uint32_t)(EDI));
  /* 124a7923 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a7926 cmp dword ptr [0x124c4ba4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ba4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a792d jne 0x124a7972 */
  if (!C.zf) goto L_124a7972;
  /* 124a792f push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7931 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7933 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a7935 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7937 call dword ptr [0x124c72b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72b4))), 0x124a793du);
  /* 124a793d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a793f je 0x124a794d */
  if (C.zf) goto L_124a794d;
  /* 124a7941 mov dword ptr [0x124c4ba4], 1 */
  w32((uint32_t)(0x124c4ba4), (0x1u));
  /* 124a794b jmp 0x124a7972 */
  goto L_124a7972;
L_124a794d:;
  /* 124a794d push 0 */
  push32((uint32_t)(0x0u));
  /* 124a794f push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7951 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a7953 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7955 call dword ptr [0x124c72cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72cc))), 0x124a795bu);
  /* 124a795b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a795d je 0x124a796b */
  if (C.zf) goto L_124a796b;
  /* 124a795f mov dword ptr [0x124c4ba4], 2 */
  w32((uint32_t)(0x124c4ba4), (0x2u));
  /* 124a7969 jmp 0x124a7972 */
  goto L_124a7972;
L_124a796b:;
  /* 124a796b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a796d jmp 0x124a7a81 */
  goto L_124a7a81;
L_124a7972:;
  /* 124a7972 cmp dword ptr [0x124c4ba4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ba4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7979 jne 0x124a7996 */
  if (!C.zf) goto L_124a7996;
  /* 124a797b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a797e push eax */
  push32((uint32_t)(EAX));
  /* 124a797f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a7982 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7983 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a7986 push edx */
  push32((uint32_t)(EDX));
  /* 124a7987 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a798a push eax */
  push32((uint32_t)(EAX));
  /* 124a798b call dword ptr [0x124c72b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72b4))), 0x124a7991u);
  /* 124a7991 jmp 0x124a7a81 */
  goto L_124a7a81;
L_124a7996:;
  /* 124a7996 cmp dword ptr [0x124c4ba4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ba4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a799d jne 0x124a7a7f */
  if (!C.zf) goto L_124a7a7f;
  /* 124a79a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a79a7 jne 0x124a79b2 */
  if (!C.zf) goto L_124a79b2;
  /* 124a79a9 mov ecx, dword ptr [0x124c4a58] */
  ECX = (r32((uint32_t)(0x124c4a58)));
  /* 124a79af mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_124a79b2:;
  /* 124a79b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a79b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a79b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a79b9 push edx */
  push32((uint32_t)(EDX));
  /* 124a79ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a79bd push eax */
  push32((uint32_t)(EAX));
  /* 124a79be call dword ptr [0x124c72cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72cc))), 0x124a79c4u);
  /* 124a79c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124a79c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a79cb jne 0x124a79d4 */
  if (!C.zf) goto L_124a79d4;
  /* 124a79cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a79cf jmp 0x124a7a81 */
  goto L_124a7a81;
L_124a79d4:;
  /* 124a79d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a79db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a79de add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a79e1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124a79e3 call 0x1249b660 */
  push32(0x124a79e8u); f_1249b660();
  /* 124a79e8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 124a79eb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a79ee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a79f1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 124a79f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124a79fb jmp 0x124a7a14 */
  goto L_124a7a14;
  /* 124a79fd mov eax, 1 */
  EAX = (0x1u);
  /* 124a7a02 ret  */
  ESPCHK(0x124a7900u, _esp0);
  ESP += 4; return;
  /* 124a7a03 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124a7a06 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124a7a0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124a7a14:;
  /* 124a7a14 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7a18 jne 0x124a7a1e */
  if (!C.zf) goto L_124a7a1e;
  /* 124a7a1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a7a1c jmp 0x124a7a81 */
  goto L_124a7a81;
L_124a7a1e:;
  /* 124a7a1e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a7a21 push edx */
  push32((uint32_t)(EDX));
  /* 124a7a22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a7a25 push eax */
  push32((uint32_t)(EAX));
  /* 124a7a26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a7a29 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7a2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7a2d push edx */
  push32((uint32_t)(EDX));
  /* 124a7a2e call dword ptr [0x124c72cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72cc))), 0x124a7a34u);
  /* 124a7a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a7a36 jne 0x124a7a3c */
  if (!C.zf) goto L_124a7a3c;
  /* 124a7a38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a7a3a jmp 0x124a7a81 */
  goto L_124a7a81;
L_124a7a3c:;
  /* 124a7a3c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7a40 jne 0x124a7a5d */
  if (!C.zf) goto L_124a7a5d;
  /* 124a7a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7a46 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124a7a48 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a7a4b push eax */
  push32((uint32_t)(EAX));
  /* 124a7a4c push 1 */
  push32((uint32_t)(0x1u));
  /* 124a7a4e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a7a51 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7a52 call dword ptr [0x124c72fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72fc))), 0x124a7a58u);
  /* 124a7a58 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124a7a5b jmp 0x124a7a7a */
  goto L_124a7a7a;
L_124a7a5d:;
  /* 124a7a5d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a7a60 push edx */
  push32((uint32_t)(EDX));
  /* 124a7a61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a7a64 push eax */
  push32((uint32_t)(EAX));
  /* 124a7a65 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124a7a67 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a7a6a push ecx */
  push32((uint32_t)(ECX));
  /* 124a7a6b push 1 */
  push32((uint32_t)(0x1u));
  /* 124a7a6d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a7a70 push edx */
  push32((uint32_t)(EDX));
  /* 124a7a71 call dword ptr [0x124c72fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72fc))), 0x124a7a77u);
  /* 124a7a77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_124a7a7a:;
  /* 124a7a7a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a7a7d jmp 0x124a7a81 */
  goto L_124a7a81;
L_124a7a7f:;
  /* 124a7a7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a7a81:;
  /* 124a7a81 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 124a7a84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a7a87 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124a7a8e pop edi */
  EDI = (pop32());
  /* 124a7a8f pop esi */
  ESI = (pop32());
  /* 124a7a90 pop ebx */
  EBX = (pop32());
  /* 124a7a91 mov esp, ebp */
  ESP = (EBP);
  /* 124a7a93 pop ebp */
  EBP = (pop32());
  /* 124a7a94 ret  */
  ESPCHK(0x124a7900u, _esp0);
  ESP += 4; return;
}

/* FUN_10017aa0 @ 0x124a7aa0 (398 bytes, 140 insns) */
void f_124a7aa0(void) {
  FTRACE(0x124a7aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a7aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a7aa1 mov ebp, esp */
  EBP = (ESP);
  /* 124a7aa3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124a7aa5 push 0x124c11d0 */
  push32((uint32_t)(0x124c11d0u));
  /* 124a7aaa push 0x124a15c8 */
  push32((uint32_t)(0x124a15c8u));
  /* 124a7aaf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 124a7ab5 push eax */
  push32((uint32_t)(EAX));
  /* 124a7ab6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 124a7abd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7ac0 push ebx */
  push32((uint32_t)(EBX));
  /* 124a7ac1 push esi */
  push32((uint32_t)(ESI));
  /* 124a7ac2 push edi */
  push32((uint32_t)(EDI));
  /* 124a7ac3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a7ac6 cmp dword ptr [0x124c4ba8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ba8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7acd jne 0x124a7b12 */
  if (!C.zf) goto L_124a7b12;
  /* 124a7acf push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7ad3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a7ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7ad7 call dword ptr [0x124c72b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72b4))), 0x124a7addu);
  /* 124a7add test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a7adf je 0x124a7aed */
  if (C.zf) goto L_124a7aed;
  /* 124a7ae1 mov dword ptr [0x124c4ba8], 1 */
  w32((uint32_t)(0x124c4ba8), (0x1u));
  /* 124a7aeb jmp 0x124a7b12 */
  goto L_124a7b12;
L_124a7aed:;
  /* 124a7aed push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7aef push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7af1 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a7af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7af5 call dword ptr [0x124c72cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72cc))), 0x124a7afbu);
  /* 124a7afb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a7afd je 0x124a7b0b */
  if (C.zf) goto L_124a7b0b;
  /* 124a7aff mov dword ptr [0x124c4ba8], 2 */
  w32((uint32_t)(0x124c4ba8), (0x2u));
  /* 124a7b09 jmp 0x124a7b12 */
  goto L_124a7b12;
L_124a7b0b:;
  /* 124a7b0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a7b0d jmp 0x124a7c31 */
  goto L_124a7c31;
L_124a7b12:;
  /* 124a7b12 cmp dword ptr [0x124c4ba8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ba8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7b19 jne 0x124a7b36 */
  if (!C.zf) goto L_124a7b36;
  /* 124a7b1b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a7b1e push eax */
  push32((uint32_t)(EAX));
  /* 124a7b1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a7b22 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7b23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a7b26 push edx */
  push32((uint32_t)(EDX));
  /* 124a7b27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7b2a push eax */
  push32((uint32_t)(EAX));
  /* 124a7b2b call dword ptr [0x124c72cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72cc))), 0x124a7b31u);
  /* 124a7b31 jmp 0x124a7c31 */
  goto L_124a7c31;
L_124a7b36:;
  /* 124a7b36 cmp dword ptr [0x124c4ba8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ba8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7b3d jne 0x124a7c2f */
  if (!C.zf) goto L_124a7c2f;
  /* 124a7b43 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7b47 jne 0x124a7b52 */
  if (!C.zf) goto L_124a7b52;
  /* 124a7b49 mov ecx, dword ptr [0x124c4a58] */
  ECX = (r32((uint32_t)(0x124c4a58)));
  /* 124a7b4f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_124a7b52:;
  /* 124a7b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7b54 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7b56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a7b59 push edx */
  push32((uint32_t)(EDX));
  /* 124a7b5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7b5d push eax */
  push32((uint32_t)(EAX));
  /* 124a7b5e call dword ptr [0x124c72b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72b4))), 0x124a7b64u);
  /* 124a7b64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124a7b67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7b6b jne 0x124a7b74 */
  if (!C.zf) goto L_124a7b74;
  /* 124a7b6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a7b6f jmp 0x124a7c31 */
  goto L_124a7c31;
L_124a7b74:;
  /* 124a7b74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a7b7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a7b7e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124a7b80 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7b83 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124a7b85 call 0x1249b660 */
  push32(0x124a7b8au); f_1249b660();
  /* 124a7b8a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 124a7b8d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a7b90 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a7b93 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 124a7b96 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124a7b9d jmp 0x124a7bb6 */
  goto L_124a7bb6;
  /* 124a7b9f mov eax, 1 */
  EAX = (0x1u);
  /* 124a7ba4 ret  */
  ESPCHK(0x124a7aa0u, _esp0);
  ESP += 4; return;
  /* 124a7ba5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124a7ba8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124a7baf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124a7bb6:;
  /* 124a7bb6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7bba jne 0x124a7bc0 */
  if (!C.zf) goto L_124a7bc0;
  /* 124a7bbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a7bbe jmp 0x124a7c31 */
  goto L_124a7c31;
L_124a7bc0:;
  /* 124a7bc0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a7bc3 push edx */
  push32((uint32_t)(EDX));
  /* 124a7bc4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a7bc7 push eax */
  push32((uint32_t)(EAX));
  /* 124a7bc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a7bcb push ecx */
  push32((uint32_t)(ECX));
  /* 124a7bcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7bcf push edx */
  push32((uint32_t)(EDX));
  /* 124a7bd0 call dword ptr [0x124c72b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72b4))), 0x124a7bd6u);
  /* 124a7bd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a7bd8 jne 0x124a7bde */
  if (!C.zf) goto L_124a7bde;
  /* 124a7bda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a7bdc jmp 0x124a7c31 */
  goto L_124a7c31;
L_124a7bde:;
  /* 124a7bde cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7be2 jne 0x124a7c06 */
  if (!C.zf) goto L_124a7c06;
  /* 124a7be4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7bea push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7bec push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124a7bee mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a7bf1 push eax */
  push32((uint32_t)(EAX));
  /* 124a7bf2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124a7bf7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a7bfa push ecx */
  push32((uint32_t)(ECX));
  /* 124a7bfb call dword ptr [0x124c73b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c73b0))), 0x124a7c01u);
  /* 124a7c01 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124a7c04 jmp 0x124a7c2a */
  goto L_124a7c2a;
L_124a7c06:;
  /* 124a7c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7c08 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7c0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a7c0d push edx */
  push32((uint32_t)(EDX));
  /* 124a7c0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a7c11 push eax */
  push32((uint32_t)(EAX));
  /* 124a7c12 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124a7c14 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a7c17 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7c18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124a7c1d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a7c20 push edx */
  push32((uint32_t)(EDX));
  /* 124a7c21 call dword ptr [0x124c73b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c73b0))), 0x124a7c27u);
  /* 124a7c27 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_124a7c2a:;
  /* 124a7c2a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a7c2d jmp 0x124a7c31 */
  goto L_124a7c31;
L_124a7c2f:;
  /* 124a7c2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a7c31:;
  /* 124a7c31 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 124a7c34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a7c37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124a7c3e pop edi */
  EDI = (pop32());
  /* 124a7c3f pop esi */
  ESI = (pop32());
  /* 124a7c40 pop ebx */
  EBX = (pop32());
  /* 124a7c41 mov esp, ebp */
  ESP = (EBP);
  /* 124a7c43 pop ebp */
  EBP = (pop32());
  /* 124a7c44 ret  */
  ESPCHK(0x124a7aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017c50 @ 0x124a7c50 (11 bytes, 6 insns) */
void f_124a7c50(void) {
  FTRACE(0x124a7c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a7c50 push ebp */
  push32((uint32_t)(EBP));
  /* 124a7c51 mov ebp, esp */
  EBP = (ESP);
  /* 124a7c53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7c56 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7c59 pop ebp */
  EBP = (pop32());
  /* 124a7c5a ret  */
  ESPCHK(0x124a7c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10017c60 @ 0x124a7c60 (147 bytes, 43 insns) */
void f_124a7c60(void) {
  FTRACE(0x124a7c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a7c60 push ebp */
  push32((uint32_t)(EBP));
  /* 124a7c61 mov ebp, esp */
  EBP = (ESP);
  /* 124a7c63 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7c64 cmp dword ptr [0x124c4a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7c6b jne 0x124a7c87 */
  if (!C.zf) goto L_124a7c87;
  /* 124a7c6d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7c71 jl 0x124a7c82 */
  if ((C.sf!=C.of)) goto L_124a7c82;
  /* 124a7c73 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7c77 jg 0x124a7c82 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a7c82;
  /* 124a7c79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7c7c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7c7f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_124a7c82:;
  /* 124a7c82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7c85 jmp 0x124a7cef */
  goto L_124a7cef;
L_124a7c87:;
  /* 124a7c87 push 0x124c4bd4 */
  push32((uint32_t)(0x124c4bd4u));
  /* 124a7c8c call dword ptr [0x124c735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c735c))), 0x124a7c92u);
  /* 124a7c92 cmp dword ptr [0x124c4bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7c99 je 0x124a7cb9 */
  if (C.zf) goto L_124a7cb9;
  /* 124a7c9b push 0x124c4bd4 */
  push32((uint32_t)(0x124c4bd4u));
  /* 124a7ca0 call dword ptr [0x124c734c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c734c))), 0x124a7ca6u);
  /* 124a7ca6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124a7ca8 call 0x1249bec0 */
  push32(0x124a7cadu); f_1249bec0();
  /* 124a7cad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7cb0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124a7cb7 jmp 0x124a7cc0 */
  goto L_124a7cc0;
L_124a7cb9:;
  /* 124a7cb9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124a7cc0:;
  /* 124a7cc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7cc4 call 0x124a7d00 */
  push32(0x124a7cc9u); f_124a7d00();
  /* 124a7cc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7ccc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a7ccf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7cd3 je 0x124a7ce1 */
  if (C.zf) goto L_124a7ce1;
  /* 124a7cd5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124a7cd7 call 0x1249bf60 */
  push32(0x124a7cdcu); f_1249bf60();
  /* 124a7cdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7cdf jmp 0x124a7cec */
  goto L_124a7cec;
L_124a7ce1:;
  /* 124a7ce1 push 0x124c4bd4 */
  push32((uint32_t)(0x124c4bd4u));
  /* 124a7ce6 call dword ptr [0x124c734c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c734c))), 0x124a7cecu);
L_124a7cec:;
  /* 124a7cec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_124a7cef:;
  /* 124a7cef mov esp, ebp */
  ESP = (EBP);
  /* 124a7cf1 pop ebp */
  EBP = (pop32());
  /* 124a7cf2 ret  */
  ESPCHK(0x124a7c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d00 @ 0x124a7d00 (299 bytes, 91 insns) */
void f_124a7d00(void) {
  FTRACE(0x124a7d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a7d00 push ebp */
  push32((uint32_t)(EBP));
  /* 124a7d01 mov ebp, esp */
  EBP = (ESP);
  /* 124a7d03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a7d06 cmp dword ptr [0x124c4a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7d0d jne 0x124a7d2c */
  if (!C.zf) goto L_124a7d2c;
  /* 124a7d0f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7d13 jl 0x124a7d24 */
  if ((C.sf!=C.of)) goto L_124a7d24;
  /* 124a7d15 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7d19 jg 0x124a7d24 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a7d24;
  /* 124a7d1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7d1e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7d21 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_124a7d24:;
  /* 124a7d24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7d27 jmp 0x124a7e27 */
  goto L_124a7e27;
L_124a7d2c:;
  /* 124a7d2c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7d33 jge 0x124a7d73 */
  if ((C.sf==C.of)) goto L_124a7d73;
  /* 124a7d35 cmp dword ptr [0x124c2ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c2ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7d3c jle 0x124a7d51 */
  if ((C.zf||C.sf!=C.of)) goto L_124a7d51;
  /* 124a7d3e push 1 */
  push32((uint32_t)(0x1u));
  /* 124a7d40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7d43 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7d44 call 0x1249e4d0 */
  push32(0x124a7d49u); f_1249e4d0();
  /* 124a7d49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7d4c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124a7d4f jmp 0x124a7d65 */
  goto L_124a7d65;
L_124a7d51:;
  /* 124a7d51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7d54 mov eax, dword ptr [0x124c2c98] */
  EAX = (r32((uint32_t)(0x124c2c98)));
  /* 124a7d59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a7d5b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 124a7d5f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124a7d62 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124a7d65:;
  /* 124a7d65 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7d69 jne 0x124a7d73 */
  if (!C.zf) goto L_124a7d73;
  /* 124a7d6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7d6e jmp 0x124a7e27 */
  goto L_124a7e27;
L_124a7d73:;
  /* 124a7d73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7d76 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 124a7d79 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124a7d7f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124a7d85 mov eax, dword ptr [0x124c2c98] */
  EAX = (r32((uint32_t)(0x124c2c98)));
  /* 124a7d8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a7d8c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 124a7d90 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 124a7d96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a7d98 je 0x124a7dbc */
  if (C.zf) goto L_124a7dbc;
  /* 124a7d9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7d9d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 124a7da0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124a7da6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 124a7da9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 124a7dac mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 124a7daf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 124a7db3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 124a7dba jmp 0x124a7dcd */
  goto L_124a7dcd;
L_124a7dbc:;
  /* 124a7dbc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 124a7dbf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 124a7dc2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 124a7dc6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_124a7dcd:;
  /* 124a7dcd push 1 */
  push32((uint32_t)(0x1u));
  /* 124a7dcf push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7dd1 push 3 */
  push32((uint32_t)(0x3u));
  /* 124a7dd3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 124a7dd6 push edx */
  push32((uint32_t)(EDX));
  /* 124a7dd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a7dda push eax */
  push32((uint32_t)(EAX));
  /* 124a7ddb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 124a7dde push ecx */
  push32((uint32_t)(ECX));
  /* 124a7ddf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124a7de4 mov edx, dword ptr [0x124c4a48] */
  EDX = (r32((uint32_t)(0x124c4a48)));
  /* 124a7dea push edx */
  push32((uint32_t)(EDX));
  /* 124a7deb call 0x124a08b0 */
  push32(0x124a7df0u); f_124a08b0();
  /* 124a7df0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7df3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a7df6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7dfa jne 0x124a7e01 */
  if (!C.zf) goto L_124a7e01;
  /* 124a7dfc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7dff jmp 0x124a7e27 */
  goto L_124a7e27;
L_124a7e01:;
  /* 124a7e01 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7e05 jne 0x124a7e11 */
  if (!C.zf) goto L_124a7e11;
  /* 124a7e07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a7e0a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a7e0f jmp 0x124a7e27 */
  goto L_124a7e27;
L_124a7e11:;
  /* 124a7e11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a7e14 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a7e19 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 124a7e1c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 124a7e22 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 124a7e25 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_124a7e27:;
  /* 124a7e27 mov esp, ebp */
  ESP = (EBP);
  /* 124a7e29 pop ebp */
  EBP = (pop32());
  /* 124a7e2a ret  */
  ESPCHK(0x124a7d00u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x124a7e30 (52 bytes, 19 insns) */
void f_124a7e30(void) {
  FTRACE(0x124a7e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a7e30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 124a7e34 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 124a7e38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a7e3a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 124a7e3e jne 0x124a7e49 */
  if (!C.zf) goto L_124a7e49;
  /* 124a7e40 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 124a7e44 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124a7e46 ret 0x10 */
  ESPCHK(0x124a7e30u, _esp0);
  ESP += 20; return;
L_124a7e49:;
  /* 124a7e49 push ebx */
  push32((uint32_t)(EBX));
  /* 124a7e4a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124a7e4c mov ebx, eax */
  EBX = (EAX);
  /* 124a7e4e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 124a7e52 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124a7e56 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7e58 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 124a7e5c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124a7e5e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7e60 pop ebx */
  EBX = (pop32());
  /* 124a7e61 ret 0x10 */
  ESPCHK(0x124a7e30u, _esp0);
  ESP += 20; return;
}

/* FUN_10017e70 @ 0x124a7e70 (46 bytes, 18 insns) */
void f_124a7e70(void) {
  FTRACE(0x124a7e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a7e70 push ebp */
  push32((uint32_t)(EBP));
  /* 124a7e71 mov ebp, esp */
  EBP = (ESP);
  /* 124a7e73 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7e74 push 0xc */
  push32((uint32_t)(0xcu));
  /* 124a7e76 call 0x1249bec0 */
  push32(0x124a7e7bu); f_1249bec0();
  /* 124a7e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7e7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7e81 push eax */
  push32((uint32_t)(EAX));
  /* 124a7e82 call 0x124a7ea0 */
  push32(0x124a7e87u); f_124a7ea0();
  /* 124a7e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7e8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a7e8d push 0xc */
  push32((uint32_t)(0xcu));
  /* 124a7e8f call 0x1249bf60 */
  push32(0x124a7e94u); f_1249bf60();
  /* 124a7e94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7e97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a7e9a mov esp, ebp */
  ESP = (EBP);
  /* 124a7e9c pop ebp */
  EBP = (pop32());
  /* 124a7e9d ret  */
  ESPCHK(0x124a7e70u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x124a7ea0 (198 bytes, 69 insns) */
void f_124a7ea0(void) {
  FTRACE(0x124a7ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a7ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a7ea1 mov ebp, esp */
  EBP = (ESP);
  /* 124a7ea3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a7ea6 mov eax, dword ptr [0x124c4864] */
  EAX = (r32((uint32_t)(0x124c4864)));
  /* 124a7eab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a7eae cmp dword ptr [0x124c6360], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c6360))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7eb5 jne 0x124a7ebe */
  if (!C.zf) goto L_124a7ebe;
  /* 124a7eb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a7eb9 jmp 0x124a7f62 */
  goto L_124a7f62;
L_124a7ebe:;
  /* 124a7ebe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7ec2 jne 0x124a7ee6 */
  if (!C.zf) goto L_124a7ee6;
  /* 124a7ec4 cmp dword ptr [0x124c486c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c486c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7ecb je 0x124a7ee6 */
  if (C.zf) goto L_124a7ee6;
  /* 124a7ecd call 0x124a7fc0 */
  push32(0x124a7ed2u); f_124a7fc0();
  /* 124a7ed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a7ed4 je 0x124a7edd */
  if (C.zf) goto L_124a7edd;
  /* 124a7ed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a7ed8 jmp 0x124a7f62 */
  goto L_124a7f62;
L_124a7edd:;
  /* 124a7edd mov ecx, dword ptr [0x124c4864] */
  ECX = (r32((uint32_t)(0x124c4864)));
  /* 124a7ee3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_124a7ee6:;
  /* 124a7ee6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7eea je 0x124a7f60 */
  if (C.zf) goto L_124a7f60;
  /* 124a7eec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7ef0 je 0x124a7f60 */
  if (C.zf) goto L_124a7f60;
  /* 124a7ef2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7ef5 push edx */
  push32((uint32_t)(EDX));
  /* 124a7ef6 call 0x1249b2f0 */
  push32(0x124a7efbu); f_1249b2f0();
  /* 124a7efb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7efe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124a7f01:;
  /* 124a7f01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a7f04 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7f07 je 0x124a7f60 */
  if (C.zf) goto L_124a7f60;
  /* 124a7f09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a7f0c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a7f0e push edx */
  push32((uint32_t)(EDX));
  /* 124a7f0f call 0x1249b2f0 */
  push32(0x124a7f14u); f_1249b2f0();
  /* 124a7f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7f17 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7f1a jbe 0x124a7f55 */
  if ((C.cf||C.zf)) goto L_124a7f55;
  /* 124a7f1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a7f1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a7f21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a7f24 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 124a7f28 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7f2b jne 0x124a7f55 */
  if (!C.zf) goto L_124a7f55;
  /* 124a7f2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a7f30 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7f31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7f34 push edx */
  push32((uint32_t)(EDX));
  /* 124a7f35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a7f38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a7f3a push ecx */
  push32((uint32_t)(ECX));
  /* 124a7f3b call 0x124a7f70 */
  push32(0x124a7f40u); f_124a7f70();
  /* 124a7f40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7f43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a7f45 jne 0x124a7f55 */
  if (!C.zf) goto L_124a7f55;
  /* 124a7f47 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a7f4a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a7f4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a7f4f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 124a7f53 jmp 0x124a7f62 */
  goto L_124a7f62;
L_124a7f55:;
  /* 124a7f55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a7f58 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7f5b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124a7f5e jmp 0x124a7f01 */
  goto L_124a7f01;
L_124a7f60:;
  /* 124a7f60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a7f62:;
  /* 124a7f62 mov esp, ebp */
  ESP = (EBP);
  /* 124a7f64 pop ebp */
  EBP = (pop32());
  /* 124a7f65 ret  */
  ESPCHK(0x124a7ea0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x124a7f70 (79 bytes, 32 insns) */
void f_124a7f70(void) {
  FTRACE(0x124a7f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a7f70 push ebp */
  push32((uint32_t)(EBP));
  /* 124a7f71 mov ebp, esp */
  EBP = (ESP);
  /* 124a7f73 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7f74 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7f78 jne 0x124a7f7e */
  if (!C.zf) goto L_124a7f7e;
  /* 124a7f7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a7f7c jmp 0x124a7fbb */
  goto L_124a7fbb;
L_124a7f7e:;
  /* 124a7f7e mov eax, dword ptr [0x124c5f24] */
  EAX = (r32((uint32_t)(0x124c5f24)));
  /* 124a7f83 push eax */
  push32((uint32_t)(EAX));
  /* 124a7f84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a7f87 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7f88 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a7f8b push edx */
  push32((uint32_t)(EDX));
  /* 124a7f8c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a7f8f push eax */
  push32((uint32_t)(EAX));
  /* 124a7f90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a7f93 push ecx */
  push32((uint32_t)(ECX));
  /* 124a7f94 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a7f96 mov edx, dword ptr [0x124c61c4] */
  EDX = (r32((uint32_t)(0x124c61c4)));
  /* 124a7f9c push edx */
  push32((uint32_t)(EDX));
  /* 124a7f9d call 0x124a8070 */
  push32(0x124a7fa2u); f_124a8070();
  /* 124a7fa2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a7fa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a7fa8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7fac jne 0x124a7fb5 */
  if (!C.zf) goto L_124a7fb5;
  /* 124a7fae mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 124a7fb3 jmp 0x124a7fbb */
  goto L_124a7fbb;
L_124a7fb5:;
  /* 124a7fb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a7fb8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_124a7fbb:;
  /* 124a7fbb mov esp, ebp */
  ESP = (EBP);
  /* 124a7fbd pop ebp */
  EBP = (pop32());
  /* 124a7fbe ret  */
  ESPCHK(0x124a7f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10017fc0 @ 0x124a7fc0 (174 bytes, 66 insns) */
void f_124a7fc0(void) {
  FTRACE(0x124a7fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a7fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a7fc1 mov ebp, esp */
  EBP = (ESP);
  /* 124a7fc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a7fc6 mov eax, dword ptr [0x124c486c] */
  EAX = (r32((uint32_t)(0x124c486c)));
  /* 124a7fcb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124a7fce:;
  /* 124a7fce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a7fd1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7fd4 je 0x124a8068 */
  if (C.zf) goto L_124a8068;
  /* 124a7fda push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7fdc push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7fde push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7fe2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124a7fe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a7fe7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a7fe9 push eax */
  push32((uint32_t)(EAX));
  /* 124a7fea push 0 */
  push32((uint32_t)(0x0u));
  /* 124a7fec push 1 */
  push32((uint32_t)(0x1u));
  /* 124a7fee call dword ptr [0x124c73b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c73b0))), 0x124a7ff4u);
  /* 124a7ff4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a7ff7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a7ffb jne 0x124a8002 */
  if (!C.zf) goto L_124a8002;
  /* 124a7ffd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a8000 jmp 0x124a806a */
  goto L_124a806a;
L_124a8002:;
  /* 124a8002 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 124a8004 push 0x124c11dc */
  push32((uint32_t)(0x124c11dcu));
  /* 124a8009 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a800b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a800e push ecx */
  push32((uint32_t)(ECX));
  /* 124a800f call 0x124984c0 */
  push32(0x124a8014u); f_124984c0();
  /* 124a8014 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8017 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a801a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a801e jne 0x124a8025 */
  if (!C.zf) goto L_124a8025;
  /* 124a8020 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a8023 jmp 0x124a806a */
  goto L_124a806a;
L_124a8025:;
  /* 124a8025 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a8027 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a8029 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a802c push edx */
  push32((uint32_t)(EDX));
  /* 124a802d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a8030 push eax */
  push32((uint32_t)(EAX));
  /* 124a8031 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124a8033 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a8036 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a8038 push edx */
  push32((uint32_t)(EDX));
  /* 124a8039 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a803b push 1 */
  push32((uint32_t)(0x1u));
  /* 124a803d call dword ptr [0x124c73b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c73b0))), 0x124a8043u);
  /* 124a8043 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a8045 jne 0x124a804c */
  if (!C.zf) goto L_124a804c;
  /* 124a8047 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a804a jmp 0x124a806a */
  goto L_124a806a;
L_124a804c:;
  /* 124a804c push 0 */
  push32((uint32_t)(0x0u));
  /* 124a804e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a8051 push eax */
  push32((uint32_t)(EAX));
  /* 124a8052 call 0x124a84c0 */
  push32(0x124a8057u); f_124a84c0();
  /* 124a8057 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a805a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a805d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8060 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a8063 jmp 0x124a7fce */
  goto L_124a7fce;
L_124a8068:;
  /* 124a8068 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a806a:;
  /* 124a806a mov esp, ebp */
  ESP = (EBP);
  /* 124a806c pop ebp */
  EBP = (pop32());
  /* 124a806d ret  */
  ESPCHK(0x124a7fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018070 @ 0x124a8070 (970 bytes, 340 insns) */
void f_124a8070(void) {
  FTRACE(0x124a8070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a8070 push ebp */
  push32((uint32_t)(EBP));
  /* 124a8071 mov ebp, esp */
  EBP = (ESP);
  /* 124a8073 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124a8075 push 0x124c1230 */
  push32((uint32_t)(0x124c1230u));
  /* 124a807a push 0x124a15c8 */
  push32((uint32_t)(0x124a15c8u));
  /* 124a807f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 124a8085 push eax */
  push32((uint32_t)(EAX));
  /* 124a8086 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 124a808d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8090 push ebx */
  push32((uint32_t)(EBX));
  /* 124a8091 push esi */
  push32((uint32_t)(ESI));
  /* 124a8092 push edi */
  push32((uint32_t)(EDI));
  /* 124a8093 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a8096 cmp dword ptr [0x124c4bac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4bac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a809d jne 0x124a80f6 */
  if (!C.zf) goto L_124a80f6;
  /* 124a809f push 1 */
  push32((uint32_t)(0x1u));
  /* 124a80a1 push 0x124c088c */
  push32((uint32_t)(0x124c088cu));
  /* 124a80a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a80a8 push 0x124c088c */
  push32((uint32_t)(0x124c088cu));
  /* 124a80ad push 0 */
  push32((uint32_t)(0x0u));
  /* 124a80af push 0 */
  push32((uint32_t)(0x0u));
  /* 124a80b1 call dword ptr [0x124c72ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72ac))), 0x124a80b7u);
  /* 124a80b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a80b9 je 0x124a80c7 */
  if (C.zf) goto L_124a80c7;
  /* 124a80bb mov dword ptr [0x124c4bac], 1 */
  w32((uint32_t)(0x124c4bac), (0x1u));
  /* 124a80c5 jmp 0x124a80f6 */
  goto L_124a80f6;
L_124a80c7:;
  /* 124a80c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a80c9 push 0x124c0888 */
  push32((uint32_t)(0x124c0888u));
  /* 124a80ce push 1 */
  push32((uint32_t)(0x1u));
  /* 124a80d0 push 0x124c0888 */
  push32((uint32_t)(0x124c0888u));
  /* 124a80d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a80d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a80d9 call dword ptr [0x124c72b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72b0))), 0x124a80dfu);
  /* 124a80df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a80e1 je 0x124a80ef */
  if (C.zf) goto L_124a80ef;
  /* 124a80e3 mov dword ptr [0x124c4bac], 2 */
  w32((uint32_t)(0x124c4bac), (0x2u));
  /* 124a80ed jmp 0x124a80f6 */
  goto L_124a80f6;
L_124a80ef:;
  /* 124a80ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a80f1 jmp 0x124a8454 */
  goto L_124a8454;
L_124a80f6:;
  /* 124a80f6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a80fa jle 0x124a810f */
  if ((C.zf||C.sf!=C.of)) goto L_124a810f;
  /* 124a80fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a80ff push eax */
  push32((uint32_t)(EAX));
  /* 124a8100 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a8103 push ecx */
  push32((uint32_t)(ECX));
  /* 124a8104 call 0x124a8470 */
  push32(0x124a8109u); f_124a8470();
  /* 124a8109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a810c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_124a810f:;
  /* 124a810f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8113 jle 0x124a8128 */
  if ((C.zf||C.sf!=C.of)) goto L_124a8128;
  /* 124a8115 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124a8118 push edx */
  push32((uint32_t)(EDX));
  /* 124a8119 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a811c push eax */
  push32((uint32_t)(EAX));
  /* 124a811d call 0x124a8470 */
  push32(0x124a8122u); f_124a8470();
  /* 124a8122 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8125 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_124a8128:;
  /* 124a8128 cmp dword ptr [0x124c4bac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x124c4bac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a812f jne 0x124a8154 */
  if (!C.zf) goto L_124a8154;
  /* 124a8131 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124a8134 push ecx */
  push32((uint32_t)(ECX));
  /* 124a8135 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a8138 push edx */
  push32((uint32_t)(EDX));
  /* 124a8139 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a813c push eax */
  push32((uint32_t)(EAX));
  /* 124a813d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a8140 push ecx */
  push32((uint32_t)(ECX));
  /* 124a8141 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a8144 push edx */
  push32((uint32_t)(EDX));
  /* 124a8145 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a8148 push eax */
  push32((uint32_t)(EAX));
  /* 124a8149 call dword ptr [0x124c72b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72b0))), 0x124a814fu);
  /* 124a814f jmp 0x124a8454 */
  goto L_124a8454;
L_124a8154:;
  /* 124a8154 cmp dword ptr [0x124c4bac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c4bac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a815b jne 0x124a8452 */
  if (!C.zf) goto L_124a8452;
  /* 124a8161 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8165 jne 0x124a8170 */
  if (!C.zf) goto L_124a8170;
  /* 124a8167 mov ecx, dword ptr [0x124c4a58] */
  ECX = (r32((uint32_t)(0x124c4a58)));
  /* 124a816d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_124a8170:;
  /* 124a8170 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8174 je 0x124a8180 */
  if (C.zf) goto L_124a8180;
  /* 124a8176 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a817a jne 0x124a82fc */
  if (!C.zf) goto L_124a82fc;
L_124a8180:;
  /* 124a8180 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a8183 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8186 jne 0x124a8192 */
  if (!C.zf) goto L_124a8192;
  /* 124a8188 mov eax, 2 */
  EAX = (0x2u);
  /* 124a818d jmp 0x124a8454 */
  goto L_124a8454;
L_124a8192:;
  /* 124a8192 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8196 jle 0x124a81a2 */
  if ((C.zf||C.sf!=C.of)) goto L_124a81a2;
  /* 124a8198 mov eax, 1 */
  EAX = (0x1u);
  /* 124a819d jmp 0x124a8454 */
  goto L_124a8454;
L_124a81a2:;
  /* 124a81a2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a81a6 jle 0x124a81b2 */
  if ((C.zf||C.sf!=C.of)) goto L_124a81b2;
  /* 124a81a8 mov eax, 3 */
  EAX = (0x3u);
  /* 124a81ad jmp 0x124a8454 */
  goto L_124a8454;
L_124a81b2:;
  /* 124a81b2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 124a81b5 push eax */
  push32((uint32_t)(EAX));
  /* 124a81b6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 124a81b9 push ecx */
  push32((uint32_t)(ECX));
  /* 124a81ba call dword ptr [0x124c7308] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7308))), 0x124a81c0u);
  /* 124a81c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a81c2 jne 0x124a81cb */
  if (!C.zf) goto L_124a81cb;
  /* 124a81c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a81c6 jmp 0x124a8454 */
  goto L_124a8454;
L_124a81cb:;
  /* 124a81cb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a81cf jne 0x124a81d7 */
  if (!C.zf) goto L_124a81d7;
  /* 124a81d1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a81d5 je 0x124a8204 */
  if (C.zf) goto L_124a8204;
L_124a81d7:;
  /* 124a81d7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a81db jne 0x124a81e3 */
  if (!C.zf) goto L_124a81e3;
  /* 124a81dd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a81e1 je 0x124a8204 */
  if (C.zf) goto L_124a8204;
L_124a81e3:;
  /* 124a81e3 push 0x124c11f0 */
  push32((uint32_t)(0x124c11f0u));
  /* 124a81e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a81ea push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 124a81ef push 0x124c11e8 */
  push32((uint32_t)(0x124c11e8u));
  /* 124a81f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a81f6 call 0x12497580 */
  push32(0x124a81fbu); f_12497580();
  /* 124a81fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a81fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8201 jne 0x124a8204 */
  if (!C.zf) goto L_124a8204;
  /* 124a8203 int3  */
  x86_unimpl("int3 @ 0x124a8203");
L_124a8204:;
  /* 124a8204 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a8206 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a8208 jne 0x124a81cb */
  if (!C.zf) goto L_124a81cb;
  /* 124a820a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a820e jle 0x124a8283 */
  if ((C.zf||C.sf!=C.of)) goto L_124a8283;
  /* 124a8210 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8214 jae 0x124a8220 */
  if (!C.cf) goto L_124a8220;
  /* 124a8216 mov eax, 3 */
  EAX = (0x3u);
  /* 124a821b jmp 0x124a8454 */
  goto L_124a8454;
L_124a8220:;
  /* 124a8220 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 124a8223 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 124a8226 jmp 0x124a8231 */
  goto L_124a8231;
L_124a8228:;
  /* 124a8228 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 124a822b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a822e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_124a8231:;
  /* 124a8231 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 124a8234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a8236 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a8238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a823a je 0x124a8279 */
  if (C.zf) goto L_124a8279;
  /* 124a823c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 124a823f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a8241 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 124a8244 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a8246 je 0x124a8279 */
  if (C.zf) goto L_124a8279;
  /* 124a8248 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a824b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a824d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124a824f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 124a8252 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a8254 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a8256 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8258 jl 0x124a8277 */
  if ((C.sf!=C.of)) goto L_124a8277;
  /* 124a825a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a825d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a825f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124a8261 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 124a8264 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a8266 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 124a8269 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a826b jg 0x124a8277 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a8277;
  /* 124a826d mov eax, 2 */
  EAX = (0x2u);
  /* 124a8272 jmp 0x124a8454 */
  goto L_124a8454;
L_124a8277:;
  /* 124a8277 jmp 0x124a8228 */
  goto L_124a8228;
L_124a8279:;
  /* 124a8279 mov eax, 3 */
  EAX = (0x3u);
  /* 124a827e jmp 0x124a8454 */
  goto L_124a8454;
L_124a8283:;
  /* 124a8283 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8287 jle 0x124a82fc */
  if ((C.zf||C.sf!=C.of)) goto L_124a82fc;
  /* 124a8289 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a828d jae 0x124a8299 */
  if (!C.cf) goto L_124a8299;
  /* 124a828f mov eax, 1 */
  EAX = (0x1u);
  /* 124a8294 jmp 0x124a8454 */
  goto L_124a8454;
L_124a8299:;
  /* 124a8299 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 124a829c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 124a829f jmp 0x124a82aa */
  goto L_124a82aa;
L_124a82a1:;
  /* 124a82a1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 124a82a4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a82a7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_124a82aa:;
  /* 124a82aa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 124a82ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a82af mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124a82b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a82b3 je 0x124a82f2 */
  if (C.zf) goto L_124a82f2;
  /* 124a82b5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 124a82b8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a82ba mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 124a82bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a82bf je 0x124a82f2 */
  if (C.zf) goto L_124a82f2;
  /* 124a82c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a82c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a82c6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a82c8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 124a82cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a82cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124a82cf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a82d1 jl 0x124a82f0 */
  if ((C.sf!=C.of)) goto L_124a82f0;
  /* 124a82d3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a82d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a82d8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124a82da mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 124a82dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a82df mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 124a82e2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a82e4 jg 0x124a82f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a82f0;
  /* 124a82e6 mov eax, 2 */
  EAX = (0x2u);
  /* 124a82eb jmp 0x124a8454 */
  goto L_124a8454;
L_124a82f0:;
  /* 124a82f0 jmp 0x124a82a1 */
  goto L_124a82a1;
L_124a82f2:;
  /* 124a82f2 mov eax, 1 */
  EAX = (0x1u);
  /* 124a82f7 jmp 0x124a8454 */
  goto L_124a8454;
L_124a82fc:;
  /* 124a82fc push 0 */
  push32((uint32_t)(0x0u));
  /* 124a82fe push 0 */
  push32((uint32_t)(0x0u));
  /* 124a8300 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a8303 push ecx */
  push32((uint32_t)(ECX));
  /* 124a8304 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a8307 push edx */
  push32((uint32_t)(EDX));
  /* 124a8308 push 9 */
  push32((uint32_t)(0x9u));
  /* 124a830a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 124a830d push eax */
  push32((uint32_t)(EAX));
  /* 124a830e call dword ptr [0x124c72fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72fc))), 0x124a8314u);
  /* 124a8314 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124a8317 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a831b jne 0x124a8324 */
  if (!C.zf) goto L_124a8324;
  /* 124a831d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a831f jmp 0x124a8454 */
  goto L_124a8454;
L_124a8324:;
  /* 124a8324 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a832b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a832e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124a8330 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8333 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124a8335 call 0x1249b660 */
  push32(0x124a833au); f_1249b660();
  /* 124a833a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 124a833d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a8340 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 124a8343 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124a8346 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124a834d jmp 0x124a8366 */
  goto L_124a8366;
  /* 124a834f mov eax, 1 */
  EAX = (0x1u);
  /* 124a8354 ret  */
  ESPCHK(0x124a8070u, _esp0);
  ESP += 4; return;
  /* 124a8355 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124a8358 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 124a835f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124a8366:;
  /* 124a8366 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a836a jne 0x124a8373 */
  if (!C.zf) goto L_124a8373;
  /* 124a836c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a836e jmp 0x124a8454 */
  goto L_124a8454;
L_124a8373:;
  /* 124a8373 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a8376 push edx */
  push32((uint32_t)(EDX));
  /* 124a8377 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a837a push eax */
  push32((uint32_t)(EAX));
  /* 124a837b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a837e push ecx */
  push32((uint32_t)(ECX));
  /* 124a837f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a8382 push edx */
  push32((uint32_t)(EDX));
  /* 124a8383 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a8385 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 124a8388 push eax */
  push32((uint32_t)(EAX));
  /* 124a8389 call dword ptr [0x124c72fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72fc))), 0x124a838fu);
  /* 124a838f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a8391 jne 0x124a839a */
  if (!C.zf) goto L_124a839a;
  /* 124a8393 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a8395 jmp 0x124a8454 */
  goto L_124a8454;
L_124a839a:;
  /* 124a839a push 0 */
  push32((uint32_t)(0x0u));
  /* 124a839c push 0 */
  push32((uint32_t)(0x0u));
  /* 124a839e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124a83a1 push ecx */
  push32((uint32_t)(ECX));
  /* 124a83a2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a83a5 push edx */
  push32((uint32_t)(EDX));
  /* 124a83a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 124a83a8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 124a83ab push eax */
  push32((uint32_t)(EAX));
  /* 124a83ac call dword ptr [0x124c72fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72fc))), 0x124a83b2u);
  /* 124a83b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124a83b5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a83b9 jne 0x124a83c2 */
  if (!C.zf) goto L_124a83c2;
  /* 124a83bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a83bd jmp 0x124a8454 */
  goto L_124a8454;
L_124a83c2:;
  /* 124a83c2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124a83c9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a83cc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124a83ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a83d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124a83d3 call 0x1249b660 */
  push32(0x124a83d8u); f_1249b660();
  /* 124a83d8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 124a83db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a83de mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 124a83e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 124a83e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124a83eb jmp 0x124a8404 */
  goto L_124a8404;
  /* 124a83ed mov eax, 1 */
  EAX = (0x1u);
  /* 124a83f2 ret  */
  ESPCHK(0x124a8070u, _esp0);
  ESP += 4; return;
  /* 124a83f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124a83f6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 124a83fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124a8404:;
  /* 124a8404 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8408 jne 0x124a840e */
  if (!C.zf) goto L_124a840e;
  /* 124a840a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a840c jmp 0x124a8454 */
  goto L_124a8454;
L_124a840e:;
  /* 124a840e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a8411 push edx */
  push32((uint32_t)(EDX));
  /* 124a8412 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a8415 push eax */
  push32((uint32_t)(EAX));
  /* 124a8416 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124a8419 push ecx */
  push32((uint32_t)(ECX));
  /* 124a841a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a841d push edx */
  push32((uint32_t)(EDX));
  /* 124a841e push 1 */
  push32((uint32_t)(0x1u));
  /* 124a8420 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 124a8423 push eax */
  push32((uint32_t)(EAX));
  /* 124a8424 call dword ptr [0x124c72fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72fc))), 0x124a842au);
  /* 124a842a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a842c jne 0x124a8432 */
  if (!C.zf) goto L_124a8432;
  /* 124a842e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a8430 jmp 0x124a8454 */
  goto L_124a8454;
L_124a8432:;
  /* 124a8432 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a8435 push ecx */
  push32((uint32_t)(ECX));
  /* 124a8436 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a8439 push edx */
  push32((uint32_t)(EDX));
  /* 124a843a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a843d push eax */
  push32((uint32_t)(EAX));
  /* 124a843e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a8441 push ecx */
  push32((uint32_t)(ECX));
  /* 124a8442 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a8445 push edx */
  push32((uint32_t)(EDX));
  /* 124a8446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a8449 push eax */
  push32((uint32_t)(EAX));
  /* 124a844a call dword ptr [0x124c72ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72ac))), 0x124a8450u);
  /* 124a8450 jmp 0x124a8454 */
  goto L_124a8454;
L_124a8452:;
  /* 124a8452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a8454:;
  /* 124a8454 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 124a8457 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a845a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124a8461 pop edi */
  EDI = (pop32());
  /* 124a8462 pop esi */
  ESI = (pop32());
  /* 124a8463 pop ebx */
  EBX = (pop32());
  /* 124a8464 mov esp, ebp */
  ESP = (EBP);
  /* 124a8466 pop ebp */
  EBP = (pop32());
  /* 124a8467 ret  */
  ESPCHK(0x124a8070u, _esp0);
  ESP += 4; return;
}

/* FUN_10018470 @ 0x124a8470 (80 bytes, 32 insns) */
void f_124a8470(void) {
  FTRACE(0x124a8470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a8470 push ebp */
  push32((uint32_t)(EBP));
  /* 124a8471 mov ebp, esp */
  EBP = (ESP);
  /* 124a8473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a8476 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a8479 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a847c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a847f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124a8482:;
  /* 124a8482 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a8485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a8488 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a848b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a848e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a8490 je 0x124a84a7 */
  if (C.zf) goto L_124a84a7;
  /* 124a8492 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a8495 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a8498 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a849a je 0x124a84a7 */
  if (C.zf) goto L_124a84a7;
  /* 124a849c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a849f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a84a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a84a5 jmp 0x124a8482 */
  goto L_124a8482;
L_124a84a7:;
  /* 124a84a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a84aa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a84ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a84af jne 0x124a84b9 */
  if (!C.zf) goto L_124a84b9;
  /* 124a84b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a84b4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a84b7 jmp 0x124a84bc */
  goto L_124a84bc;
L_124a84b9:;
  /* 124a84b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_124a84bc:;
  /* 124a84bc mov esp, ebp */
  ESP = (EBP);
  /* 124a84be pop ebp */
  EBP = (pop32());
  /* 124a84bf ret  */
  ESPCHK(0x124a8470u, _esp0);
  ESP += 4; return;
}

/* FUN_100184c0 @ 0x124a84c0 (736 bytes, 224 insns) */
void f_124a84c0(void) {
  FTRACE(0x124a84c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a84c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a84c1 mov ebp, esp */
  EBP = (ESP);
  /* 124a84c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a84c6 push esi */
  push32((uint32_t)(ESI));
  /* 124a84c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a84cb je 0x124a84ec */
  if (C.zf) goto L_124a84ec;
  /* 124a84cd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 124a84cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a84d2 push eax */
  push32((uint32_t)(EAX));
  /* 124a84d3 call 0x124a8910 */
  push32(0x124a84d8u); f_124a8910();
  /* 124a84d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a84db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124a84de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a84e2 je 0x124a84ec */
  if (C.zf) goto L_124a84ec;
  /* 124a84e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a84e7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a84ea jne 0x124a84f4 */
  if (!C.zf) goto L_124a84f4;
L_124a84ec:;
  /* 124a84ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a84ef jmp 0x124a879b */
  goto L_124a879b;
L_124a84f4:;
  /* 124a84f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a84f7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 124a84fb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a84fd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a84ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 124a8500 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124a8503 mov ecx, dword ptr [0x124c4864] */
  ECX = (r32((uint32_t)(0x124c4864)));
  /* 124a8509 cmp ecx, dword ptr [0x124c4868] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c4868))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a850f jne 0x124a8525 */
  if (!C.zf) goto L_124a8525;
  /* 124a8511 mov edx, dword ptr [0x124c4864] */
  EDX = (r32((uint32_t)(0x124c4864)));
  /* 124a8517 push edx */
  push32((uint32_t)(EDX));
  /* 124a8518 call 0x124a8820 */
  push32(0x124a851du); f_124a8820();
  /* 124a851d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8520 mov dword ptr [0x124c4864], eax */
  w32((uint32_t)(0x124c4864), (EAX));
L_124a8525:;
  /* 124a8525 cmp dword ptr [0x124c4864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a852c jne 0x124a85e5 */
  if (!C.zf) goto L_124a85e5;
  /* 124a8532 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8536 je 0x124a8557 */
  if (C.zf) goto L_124a8557;
  /* 124a8538 cmp dword ptr [0x124c486c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c486c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a853f je 0x124a8557 */
  if (C.zf) goto L_124a8557;
  /* 124a8541 call 0x124a7fc0 */
  push32(0x124a8546u); f_124a7fc0();
  /* 124a8546 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a8548 je 0x124a8552 */
  if (C.zf) goto L_124a8552;
  /* 124a854a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a854d jmp 0x124a879b */
  goto L_124a879b;
L_124a8552:;
  /* 124a8552 jmp 0x124a85e5 */
  goto L_124a85e5;
L_124a8557:;
  /* 124a8557 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a855b je 0x124a8564 */
  if (C.zf) goto L_124a8564;
  /* 124a855d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a855f jmp 0x124a879b */
  goto L_124a879b;
L_124a8564:;
  /* 124a8564 cmp dword ptr [0x124c4864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a856b jne 0x124a85a4 */
  if (!C.zf) goto L_124a85a4;
  /* 124a856d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 124a8572 push 0x124c1248 */
  push32((uint32_t)(0x124c1248u));
  /* 124a8577 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a8579 push 4 */
  push32((uint32_t)(0x4u));
  /* 124a857b call 0x124984c0 */
  push32(0x124a8580u); f_124984c0();
  /* 124a8580 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8583 mov dword ptr [0x124c4864], eax */
  w32((uint32_t)(0x124c4864), (EAX));
  /* 124a8588 cmp dword ptr [0x124c4864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a858f jne 0x124a8599 */
  if (!C.zf) goto L_124a8599;
  /* 124a8591 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a8594 jmp 0x124a879b */
  goto L_124a879b;
L_124a8599:;
  /* 124a8599 mov eax, dword ptr [0x124c4864] */
  EAX = (r32((uint32_t)(0x124c4864)));
  /* 124a859e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_124a85a4:;
  /* 124a85a4 cmp dword ptr [0x124c486c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c486c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a85ab jne 0x124a85e5 */
  if (!C.zf) goto L_124a85e5;
  /* 124a85ad push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 124a85b2 push 0x124c1248 */
  push32((uint32_t)(0x124c1248u));
  /* 124a85b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a85b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 124a85bb call 0x124984c0 */
  push32(0x124a85c0u); f_124984c0();
  /* 124a85c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a85c3 mov dword ptr [0x124c486c], eax */
  w32((uint32_t)(0x124c486c), (EAX));
  /* 124a85c8 cmp dword ptr [0x124c486c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c486c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a85cf jne 0x124a85d9 */
  if (!C.zf) goto L_124a85d9;
  /* 124a85d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a85d4 jmp 0x124a879b */
  goto L_124a879b;
L_124a85d9:;
  /* 124a85d9 mov ecx, dword ptr [0x124c486c] */
  ECX = (r32((uint32_t)(0x124c486c)));
  /* 124a85df mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_124a85e5:;
  /* 124a85e5 mov edx, dword ptr [0x124c4864] */
  EDX = (r32((uint32_t)(0x124c4864)));
  /* 124a85eb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 124a85ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a85f1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a85f4 push eax */
  push32((uint32_t)(EAX));
  /* 124a85f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a85f8 push ecx */
  push32((uint32_t)(ECX));
  /* 124a85f9 call 0x124a87a0 */
  push32(0x124a85feu); f_124a87a0();
  /* 124a85fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8601 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a8604 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8608 jl 0x124a86a1 */
  if ((C.sf!=C.of)) goto L_124a86a1;
  /* 124a860e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a8611 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8614 je 0x124a86a1 */
  if (C.zf) goto L_124a86a1;
  /* 124a861a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a861e je 0x124a8693 */
  if (C.zf) goto L_124a8693;
  /* 124a8620 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a8622 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a8625 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a8628 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124a862b push edx */
  push32((uint32_t)(EDX));
  /* 124a862c call 0x12498f50 */
  push32(0x124a8631u); f_12498f50();
  /* 124a8631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8634 jmp 0x124a863f */
  goto L_124a863f;
L_124a8636:;
  /* 124a8636 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a8639 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a863c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124a863f:;
  /* 124a863f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a8642 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a8645 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8649 je 0x124a8660 */
  if (C.zf) goto L_124a8660;
  /* 124a864b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a864e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a8651 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a8654 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 124a8657 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 124a865b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 124a865e jmp 0x124a8636 */
  goto L_124a8636;
L_124a8660:;
  /* 124a8660 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 124a8665 push 0x124c1248 */
  push32((uint32_t)(0x124c1248u));
  /* 124a866a push 2 */
  push32((uint32_t)(0x2u));
  /* 124a866c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a866f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 124a8672 push eax */
  push32((uint32_t)(EAX));
  /* 124a8673 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a8676 push ecx */
  push32((uint32_t)(ECX));
  /* 124a8677 call 0x12498950 */
  push32(0x124a867cu); f_12498950();
  /* 124a867c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a867f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a8682 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8686 je 0x124a8691 */
  if (C.zf) goto L_124a8691;
  /* 124a8688 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a868b mov dword ptr [0x124c4864], edx */
  w32((uint32_t)(0x124c4864), (EDX));
L_124a8691:;
  /* 124a8691 jmp 0x124a869f */
  goto L_124a869f;
L_124a8693:;
  /* 124a8693 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a8696 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a8699 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a869c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_124a869f:;
  /* 124a869f jmp 0x124a8714 */
  goto L_124a8714;
L_124a86a1:;
  /* 124a86a1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a86a5 jne 0x124a870d */
  if (!C.zf) goto L_124a870d;
  /* 124a86a7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a86ab jge 0x124a86b5 */
  if ((C.sf==C.of)) goto L_124a86b5;
  /* 124a86ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a86b0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a86b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124a86b5:;
  /* 124a86b5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 124a86ba push 0x124c1248 */
  push32((uint32_t)(0x124c1248u));
  /* 124a86bf push 2 */
  push32((uint32_t)(0x2u));
  /* 124a86c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a86c4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 124a86cb push edx */
  push32((uint32_t)(EDX));
  /* 124a86cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a86cf push eax */
  push32((uint32_t)(EAX));
  /* 124a86d0 call 0x12498950 */
  push32(0x124a86d5u); f_12498950();
  /* 124a86d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a86d8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a86db cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a86df jne 0x124a86e9 */
  if (!C.zf) goto L_124a86e9;
  /* 124a86e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a86e4 jmp 0x124a879b */
  goto L_124a879b;
L_124a86e9:;
  /* 124a86e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a86ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a86ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a86f2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 124a86f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a86f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a86fb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 124a8703 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a8706 mov dword ptr [0x124c4864], eax */
  w32((uint32_t)(0x124c4864), (EAX));
  /* 124a870b jmp 0x124a8714 */
  goto L_124a8714;
L_124a870d:;
  /* 124a870d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a870f jmp 0x124a879b */
  goto L_124a879b;
L_124a8714:;
  /* 124a8714 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8718 je 0x124a8799 */
  if (C.zf) goto L_124a8799;
  /* 124a871a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 124a871f push 0x124c1248 */
  push32((uint32_t)(0x124c1248u));
  /* 124a8724 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a8726 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a8729 push ecx */
  push32((uint32_t)(ECX));
  /* 124a872a call 0x1249b2f0 */
  push32(0x124a872fu); f_1249b2f0();
  /* 124a872f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8732 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8735 push eax */
  push32((uint32_t)(EAX));
  /* 124a8736 call 0x124984c0 */
  push32(0x124a873bu); f_124984c0();
  /* 124a873b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a873e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124a8741 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8745 je 0x124a8799 */
  if (C.zf) goto L_124a8799;
  /* 124a8747 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a874a push edx */
  push32((uint32_t)(EDX));
  /* 124a874b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a874e push eax */
  push32((uint32_t)(EAX));
  /* 124a874f call 0x1249b470 */
  push32(0x124a8754u); f_1249b470();
  /* 124a8754 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8757 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a875a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a875d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a8760 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8762 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124a8765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a8768 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 124a876b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a876e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8771 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a8774 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a8777 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a8779 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a877b not edx */
  EDX = (~(EDX));
  /* 124a877d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 124a8780 push edx */
  push32((uint32_t)(EDX));
  /* 124a8781 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a8784 push eax */
  push32((uint32_t)(EAX));
  /* 124a8785 call dword ptr [0x124c72a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72a8))), 0x124a878bu);
  /* 124a878b push 2 */
  push32((uint32_t)(0x2u));
  /* 124a878d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a8790 push ecx */
  push32((uint32_t)(ECX));
  /* 124a8791 call 0x12498f50 */
  push32(0x124a8796u); f_12498f50();
  /* 124a8796 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a8799:;
  /* 124a8799 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a879b:;
  /* 124a879b pop esi */
  ESI = (pop32());
  /* 124a879c mov esp, ebp */
  ESP = (EBP);
  /* 124a879e pop ebp */
  EBP = (pop32());
  /* 124a879f ret  */
  ESPCHK(0x124a84c0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x124a87a0 (124 bytes, 47 insns) */
void f_124a87a0(void) {
  FTRACE(0x124a87a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a87a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a87a1 mov ebp, esp */
  EBP = (ESP);
  /* 124a87a3 push ecx */
  push32((uint32_t)(ECX));
  /* 124a87a4 mov eax, dword ptr [0x124c4864] */
  EAX = (r32((uint32_t)(0x124c4864)));
  /* 124a87a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a87ac jmp 0x124a87b7 */
  goto L_124a87b7;
L_124a87ae:;
  /* 124a87ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a87b1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a87b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124a87b7:;
  /* 124a87b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a87ba cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a87bd je 0x124a880a */
  if (C.zf) goto L_124a880a;
  /* 124a87bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a87c2 push eax */
  push32((uint32_t)(EAX));
  /* 124a87c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a87c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a87c8 push edx */
  push32((uint32_t)(EDX));
  /* 124a87c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a87cc push eax */
  push32((uint32_t)(EAX));
  /* 124a87cd call 0x124a7f70 */
  push32(0x124a87d2u); f_124a7f70();
  /* 124a87d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a87d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a87d7 jne 0x124a8808 */
  if (!C.zf) goto L_124a8808;
  /* 124a87d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a87dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a87de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a87e1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 124a87e5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a87e8 je 0x124a87fa */
  if (C.zf) goto L_124a87fa;
  /* 124a87ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a87ed mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a87ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a87f2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 124a87f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a87f8 jne 0x124a8808 */
  if (!C.zf) goto L_124a8808;
L_124a87fa:;
  /* 124a87fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a87fd sub eax, dword ptr [0x124c4864] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c4864))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a8803 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 124a8806 jmp 0x124a8818 */
  goto L_124a8818;
L_124a8808:;
  /* 124a8808 jmp 0x124a87ae */
  goto L_124a87ae;
L_124a880a:;
  /* 124a880a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a880d sub eax, dword ptr [0x124c4864] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c4864))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a8813 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 124a8816 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_124a8818:;
  /* 124a8818 mov esp, ebp */
  ESP = (EBP);
  /* 124a881a pop ebp */
  EBP = (pop32());
  /* 124a881b ret  */
  ESPCHK(0x124a87a0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x124a8820 (238 bytes, 80 insns) */
void f_124a8820(void) {
  FTRACE(0x124a8820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a8820 push ebp */
  push32((uint32_t)(EBP));
  /* 124a8821 mov ebp, esp */
  EBP = (ESP);
  /* 124a8823 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a8826 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124a882d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a8830 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a8833 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8837 jne 0x124a8840 */
  if (!C.zf) goto L_124a8840;
  /* 124a8839 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a883b jmp 0x124a890a */
  goto L_124a890a;
L_124a8840:;
  /* 124a8840 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a8843 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a8845 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a8848 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a884b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a884e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a8850 je 0x124a885d */
  if (C.zf) goto L_124a885d;
  /* 124a8852 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a8855 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8858 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124a885b jmp 0x124a8840 */
  goto L_124a8840;
L_124a885d:;
  /* 124a885d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 124a8862 push 0x124c1248 */
  push32((uint32_t)(0x124c1248u));
  /* 124a8867 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a8869 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a886c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 124a8873 push eax */
  push32((uint32_t)(EAX));
  /* 124a8874 call 0x124984c0 */
  push32(0x124a8879u); f_124984c0();
  /* 124a8879 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a887c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a887f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a8882 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a8885 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a8889 jne 0x124a8895 */
  if (!C.zf) goto L_124a8895;
  /* 124a888b push 9 */
  push32((uint32_t)(0x9u));
  /* 124a888d call 0x12497430 */
  push32(0x124a8892u); f_12497430();
  /* 124a8892 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a8895:;
  /* 124a8895 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a8898 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_124a889b:;
  /* 124a889b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a889e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a88a1 je 0x124a88fe */
  if (C.zf) goto L_124a88fe;
  /* 124a88a3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 124a88a8 push 0x124c1248 */
  push32((uint32_t)(0x124c1248u));
  /* 124a88ad push 2 */
  push32((uint32_t)(0x2u));
  /* 124a88af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a88b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a88b4 push edx */
  push32((uint32_t)(EDX));
  /* 124a88b5 call 0x1249b2f0 */
  push32(0x124a88bau); f_1249b2f0();
  /* 124a88ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a88bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a88c0 push eax */
  push32((uint32_t)(EAX));
  /* 124a88c1 call 0x124984c0 */
  push32(0x124a88c6u); f_124984c0();
  /* 124a88c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a88c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a88cc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124a88ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a88d1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a88d4 je 0x124a88ea */
  if (C.zf) goto L_124a88ea;
  /* 124a88d6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a88d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a88db push ecx */
  push32((uint32_t)(ECX));
  /* 124a88dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a88df mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a88e1 push eax */
  push32((uint32_t)(EAX));
  /* 124a88e2 call 0x1249b470 */
  push32(0x124a88e7u); f_1249b470();
  /* 124a88e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a88ea:;
  /* 124a88ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a88ed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a88f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a88f3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a88f6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a88f9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124a88fc jmp 0x124a889b */
  goto L_124a889b;
L_124a88fe:;
  /* 124a88fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a8901 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124a8907 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124a890a:;
  /* 124a890a mov esp, ebp */
  ESP = (EBP);
  /* 124a890c pop ebp */
  EBP = (pop32());
  /* 124a890d ret  */
  ESPCHK(0x124a8820u, _esp0);
  ESP += 4; return;
}

/* FUN_10018910 @ 0x124a8910 (237 bytes, 81 insns) */
void f_124a8910(void) {
  FTRACE(0x124a8910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a8910 push ebp */
  push32((uint32_t)(EBP));
  /* 124a8911 mov ebp, esp */
  EBP = (ESP);
  /* 124a8913 push ecx */
  push32((uint32_t)(ECX));
  /* 124a8914 cmp dword ptr [0x124c5fac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c5fac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a891b jne 0x124a8932 */
  if (!C.zf) goto L_124a8932;
  /* 124a891d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a8920 push eax */
  push32((uint32_t)(EAX));
  /* 124a8921 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a8924 push ecx */
  push32((uint32_t)(ECX));
  /* 124a8925 call 0x124a8a10 */
  push32(0x124a892au); f_124a8a10();
  /* 124a892a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a892d jmp 0x124a89f9 */
  goto L_124a89f9;
L_124a8932:;
  /* 124a8932 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124a8934 call 0x1249bec0 */
  push32(0x124a8939u); f_1249bec0();
  /* 124a8939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a893c jmp 0x124a8947 */
  goto L_124a8947;
L_124a893e:;
  /* 124a893e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a8941 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8944 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_124a8947:;
  /* 124a8947 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a894a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 124a894e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 124a8952 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a8955 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124a895b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a895d je 0x124a89db */
  if (C.zf) goto L_124a89db;
  /* 124a895f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a8962 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a8967 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a8969 mov cl, byte ptr [eax + 0x124c60c1] */
  CL = (r8((uint32_t)(EAX + 0x124c60c1)));
  /* 124a896f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 124a8972 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a8974 je 0x124a89c6 */
  if (C.zf) goto L_124a89c6;
  /* 124a8976 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a8979 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a897c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 124a897f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a8982 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a8984 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124a8986 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a8988 jne 0x124a8998 */
  if (!C.zf) goto L_124a8998;
  /* 124a898a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124a898c call 0x1249bf60 */
  push32(0x124a8991u); f_1249bf60();
  /* 124a8991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8994 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a8996 jmp 0x124a89f9 */
  goto L_124a89f9;
L_124a8998:;
  /* 124a8998 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a899b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124a89a1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 124a89a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a89a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a89a9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124a89ab or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124a89ad cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a89b0 jne 0x124a89c4 */
  if (!C.zf) goto L_124a89c4;
  /* 124a89b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124a89b4 call 0x1249bf60 */
  push32(0x124a89b9u); f_1249bf60();
  /* 124a89b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a89bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a89bf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a89c2 jmp 0x124a89f9 */
  goto L_124a89f9;
L_124a89c4:;
  /* 124a89c4 jmp 0x124a89d6 */
  goto L_124a89d6;
L_124a89c6:;
  /* 124a89c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a89c9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124a89cf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a89d2 jne 0x124a89d6 */
  if (!C.zf) goto L_124a89d6;
  /* 124a89d4 jmp 0x124a89db */
  goto L_124a89db;
L_124a89d6:;
  /* 124a89d6 jmp 0x124a893e */
  goto L_124a893e;
L_124a89db:;
  /* 124a89db push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124a89dd call 0x1249bf60 */
  push32(0x124a89e2u); f_1249bf60();
  /* 124a89e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a89e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a89e8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a89ed cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a89f0 jne 0x124a89f7 */
  if (!C.zf) goto L_124a89f7;
  /* 124a89f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a89f5 jmp 0x124a89f9 */
  goto L_124a89f9;
L_124a89f7:;
  /* 124a89f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a89f9:;
  /* 124a89f9 mov esp, ebp */
  ESP = (EBP);
  /* 124a89fb pop ebp */
  EBP = (pop32());
  /* 124a89fc ret  */
  ESPCHK(0x124a8910u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x124a8a10 (193 bytes, 87 insns) */
void f_124a8a10(void) {
  FTRACE(0x124a8a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a8a10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a8a12 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 124a8a16 push ebx */
  push32((uint32_t)(EBX));
  /* 124a8a17 mov ebx, eax */
  EBX = (EAX);
  /* 124a8a19 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 124a8a1c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 124a8a20 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 124a8a26 je 0x124a8a3b */
  if (C.zf) goto L_124a8a3b;
L_124a8a28:;
  /* 124a8a28 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 124a8a2a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 124a8a2b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a8a2d je 0x124a8a00 */
  if (C.zf) { jmp_ind(0x124a8a00u); return; }
  /* 124a8a2f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 124a8a31 je 0x124a8a84 */
  if (C.zf) goto L_124a8a84;
  /* 124a8a33 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 124a8a39 jne 0x124a8a28 */
  if (!C.zf) goto L_124a8a28;
L_124a8a3b:;
  /* 124a8a3b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 124a8a3d push edi */
  push32((uint32_t)(EDI));
  /* 124a8a3e mov eax, ebx */
  EAX = (EBX);
  /* 124a8a40 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 124a8a43 push esi */
  push32((uint32_t)(ESI));
  /* 124a8a44 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_124a8a46:;
  /* 124a8a46 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 124a8a48 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 124a8a4d mov eax, ecx */
  EAX = (ECX);
  /* 124a8a4f mov esi, edi */
  ESI = (EDI);
  /* 124a8a51 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 124a8a53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8a55 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8a57 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 124a8a5a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a8a5d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 124a8a5f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 124a8a61 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a8a64 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 124a8a6a jne 0x124a8a88 */
  if (!C.zf) goto L_124a8a88;
  /* 124a8a6c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 124a8a71 je 0x124a8a46 */
  if (C.zf) goto L_124a8a46;
  /* 124a8a73 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 124a8a78 jne 0x124a8a82 */
  if (!C.zf) goto L_124a8a82;
  /* 124a8a7a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 124a8a80 jne 0x124a8a46 */
  if (!C.zf) goto L_124a8a46;
L_124a8a82:;
  /* 124a8a82 pop esi */
  ESI = (pop32());
  /* 124a8a83 pop edi */
  EDI = (pop32());
L_124a8a84:;
  /* 124a8a84 pop ebx */
  EBX = (pop32());
  /* 124a8a85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a8a87 ret  */
  ESPCHK(0x124a8a10u, _esp0);
  ESP += 4; return;
L_124a8a88:;
  /* 124a8a88 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 124a8a8b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a8a8d je 0x124a8ac5 */
  if (C.zf) goto L_124a8ac5;
  /* 124a8a8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 124a8a91 je 0x124a8a82 */
  if (C.zf) goto L_124a8a82;
  /* 124a8a93 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a8a95 je 0x124a8abe */
  if (C.zf) goto L_124a8abe;
  /* 124a8a97 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 124a8a99 je 0x124a8a82 */
  if (C.zf) goto L_124a8a82;
  /* 124a8a9b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 124a8a9e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a8aa0 je 0x124a8ab7 */
  if (C.zf) goto L_124a8ab7;
  /* 124a8aa2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 124a8aa4 je 0x124a8a82 */
  if (C.zf) goto L_124a8a82;
  /* 124a8aa6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a8aa8 je 0x124a8ab0 */
  if (C.zf) goto L_124a8ab0;
  /* 124a8aaa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 124a8aac je 0x124a8a82 */
  if (C.zf) goto L_124a8a82;
  /* 124a8aae jmp 0x124a8a46 */
  goto L_124a8a46;
L_124a8ab0:;
  /* 124a8ab0 pop esi */
  ESI = (pop32());
  /* 124a8ab1 pop edi */
  EDI = (pop32());
  /* 124a8ab2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 124a8ab5 pop ebx */
  EBX = (pop32());
  /* 124a8ab6 ret  */
  ESPCHK(0x124a8a10u, _esp0);
  ESP += 4; return;
L_124a8ab7:;
  /* 124a8ab7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 124a8aba pop esi */
  ESI = (pop32());
  /* 124a8abb pop edi */
  EDI = (pop32());
  /* 124a8abc pop ebx */
  EBX = (pop32());
  /* 124a8abd ret  */
  ESPCHK(0x124a8a10u, _esp0);
  ESP += 4; return;
L_124a8abe:;
  /* 124a8abe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 124a8ac1 pop esi */
  ESI = (pop32());
  /* 124a8ac2 pop edi */
  EDI = (pop32());
  /* 124a8ac3 pop ebx */
  EBX = (pop32());
  /* 124a8ac4 ret  */
  ESPCHK(0x124a8a10u, _esp0);
  ESP += 4; return;
L_124a8ac5:;
  /* 124a8ac5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 124a8ac8 pop esi */
  ESI = (pop32());
  /* 124a8ac9 pop edi */
  EDI = (pop32());
  /* 124a8aca pop ebx */
  EBX = (pop32());
  /* 124a8acb ret  */
  ESPCHK(0x124a8a10u, _esp0);
  ESP += 4; return;
  /* 124a8acc jmp dword ptr [0x124c7338] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x124c7338)))); return;
}

/* RtlUnwind @ 0x124a8c1c (6 bytes, 1 insns) */
void f_124a8c1c(void) {
  FTRACE(0x124a8c1cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a8c1c jmp dword ptr [0x124c72e4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x124c72e4)))); return;
}

