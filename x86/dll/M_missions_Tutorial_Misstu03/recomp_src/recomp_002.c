#include "recomp.h"

/* FUN_10011370 @ 0x12361370 (878 bytes, 273 insns) */
void f_12361370(void) {
  FTRACE(0x12361370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12361370 push ebp */
  push32((uint32_t)(EBP));
  /* 12361371 mov ebp, esp */
  EBP = (ESP);
  /* 12361373 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361376 push esi */
  push32((uint32_t)(ESI));
  /* 12361377 mov eax, dword ptr [0x1237fc98] */
  EAX = (r32((uint32_t)(0x1237fc98)));
  /* 1236137c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1236137f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12361386 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1236138d jmp 0x12361398 */
  goto L_12361398;
L_1236138f:;
  /* 1236138f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12361392 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361395 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12361398:;
  /* 12361398 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236139c jae 0x123613d1 */
  if (!C.cf) goto L_123613d1;
  /* 1236139e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123613a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123613a4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 123613a7 push ecx */
  push32((uint32_t)(ECX));
  /* 123613a8 call 0x123571f0 */
  push32(0x123613adu); f_123571f0();
  /* 123613ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123613b0 mov esi, eax */
  ESI = (EAX);
  /* 123613b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123613b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123613b8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 123613bc push ecx */
  push32((uint32_t)(ECX));
  /* 123613bd call 0x123571f0 */
  push32(0x123613c2u); f_123571f0();
  /* 123613c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123613c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123613c8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 123613cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123613cf jmp 0x1236138f */
  goto L_1236138f;
L_123613d1:;
  /* 123613d1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123613d8 jmp 0x123613e3 */
  goto L_123613e3;
L_123613da:;
  /* 123613da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123613dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123613e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_123613e3:;
  /* 123613e3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123613e7 jae 0x1236141d */
  if (!C.cf) goto L_1236141d;
  /* 123613e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123613ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123613ef mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 123613f3 push eax */
  push32((uint32_t)(EAX));
  /* 123613f4 call 0x123571f0 */
  push32(0x123613f9u); f_123571f0();
  /* 123613f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123613fc mov esi, eax */
  ESI = (EAX);
  /* 123613fe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12361401 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361404 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12361408 push eax */
  push32((uint32_t)(EAX));
  /* 12361409 call 0x123571f0 */
  push32(0x1236140eu); f_123571f0();
  /* 1236140e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361411 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361414 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12361418 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1236141b jmp 0x123613da */
  goto L_123613da;
L_1236141d:;
  /* 1236141d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361420 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12361426 push eax */
  push32((uint32_t)(EAX));
  /* 12361427 call 0x123571f0 */
  push32(0x1236142cu); f_123571f0();
  /* 1236142c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236142f mov esi, eax */
  ESI = (EAX);
  /* 12361431 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361434 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1236143a push edx */
  push32((uint32_t)(EDX));
  /* 1236143b call 0x123571f0 */
  push32(0x12361440u); f_123571f0();
  /* 12361440 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361443 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361446 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1236144a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1236144d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361450 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12361456 push edx */
  push32((uint32_t)(EDX));
  /* 12361457 call 0x123571f0 */
  push32(0x1236145cu); f_123571f0();
  /* 1236145c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236145f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12361462 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12361466 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12361469 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1236146c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12361472 push ecx */
  push32((uint32_t)(ECX));
  /* 12361473 call 0x123571f0 */
  push32(0x12361478u); f_123571f0();
  /* 12361478 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236147b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1236147e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12361482 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12361485 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361488 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1236148e push edx */
  push32((uint32_t)(EDX));
  /* 1236148f call 0x123571f0 */
  push32(0x12361494u); f_123571f0();
  /* 12361494 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361497 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1236149a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1236149e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123614a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123614a4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123614a9 push eax */
  push32((uint32_t)(EAX));
  /* 123614aa call 0x123543a0 */
  push32(0x123614afu); f_123543a0();
  /* 123614af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123614b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123614b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123614b9 je 0x123616d6 */
  if (C.zf) goto L_123616d6;
  /* 123614bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123614c2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 123614c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123614c8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123614ce mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123614d1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 123614d6 mov eax, dword ptr [0x1237fc98] */
  EAX = (r32((uint32_t)(0x1237fc98)));
  /* 123614db push eax */
  push32((uint32_t)(EAX));
  /* 123614dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123614df push ecx */
  push32((uint32_t)(ECX));
  /* 123614e0 call 0x1235aca0 */
  push32(0x123614e5u); f_1235aca0();
  /* 123614e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123614e8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123614ef jmp 0x123614fa */
  goto L_123614fa;
L_123614f1:;
  /* 123614f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123614f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123614f7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123614fa:;
  /* 123614fa cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123614fe jae 0x1236156e */
  if (!C.cf) goto L_1236156e;
  /* 12361500 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12361503 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12361506 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361509 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1236150c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1236150f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361512 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12361515 push edx */
  push32((uint32_t)(EDX));
  /* 12361516 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361519 push eax */
  push32((uint32_t)(EAX));
  /* 1236151a call 0x12357370 */
  push32(0x1236151fu); f_12357370();
  /* 1236151f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361522 push eax */
  push32((uint32_t)(EAX));
  /* 12361523 call 0x123571f0 */
  push32(0x12361528u); f_123571f0();
  /* 12361528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236152b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1236152e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12361532 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12361535 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12361538 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1236153b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1236153e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12361542 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12361545 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361548 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1236154c push edx */
  push32((uint32_t)(EDX));
  /* 1236154d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361550 push eax */
  push32((uint32_t)(EAX));
  /* 12361551 call 0x12357370 */
  push32(0x12361556u); f_12357370();
  /* 12361556 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361559 push eax */
  push32((uint32_t)(EAX));
  /* 1236155a call 0x123571f0 */
  push32(0x1236155fu); f_123571f0();
  /* 1236155f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361562 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361565 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12361569 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1236156c jmp 0x123614f1 */
  goto L_123614f1;
L_1236156e:;
  /* 1236156e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12361575 jmp 0x12361580 */
  goto L_12361580;
L_12361577:;
  /* 12361577 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1236157a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236157d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12361580:;
  /* 12361580 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361584 jae 0x123615f6 */
  if (!C.cf) goto L_123615f6;
  /* 12361586 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12361589 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1236158c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1236158f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12361593 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12361596 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361599 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1236159d push eax */
  push32((uint32_t)(EAX));
  /* 1236159e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123615a1 push ecx */
  push32((uint32_t)(ECX));
  /* 123615a2 call 0x12357370 */
  push32(0x123615a7u); f_12357370();
  /* 123615a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123615aa push eax */
  push32((uint32_t)(EAX));
  /* 123615ab call 0x123571f0 */
  push32(0x123615b0u); f_123571f0();
  /* 123615b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123615b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123615b6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123615ba mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123615bd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123615c0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123615c3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123615c6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 123615ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123615cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123615d0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 123615d4 push eax */
  push32((uint32_t)(EAX));
  /* 123615d5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123615d8 push ecx */
  push32((uint32_t)(ECX));
  /* 123615d9 call 0x12357370 */
  push32(0x123615deu); f_12357370();
  /* 123615de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123615e1 push eax */
  push32((uint32_t)(EAX));
  /* 123615e2 call 0x123571f0 */
  push32(0x123615e7u); f_123571f0();
  /* 123615e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123615ea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123615ed lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123615f1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123615f4 jmp 0x12361577 */
  goto L_12361577;
L_123615f6:;
  /* 123615f6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123615f9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123615fc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12361602 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361605 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1236160b push ecx */
  push32((uint32_t)(ECX));
  /* 1236160c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1236160f push edx */
  push32((uint32_t)(EDX));
  /* 12361610 call 0x12357370 */
  push32(0x12361615u); f_12357370();
  /* 12361615 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361618 push eax */
  push32((uint32_t)(EAX));
  /* 12361619 call 0x123571f0 */
  push32(0x1236161eu); f_123571f0();
  /* 1236161e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361621 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361624 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12361628 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1236162b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1236162e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361631 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12361637 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1236163a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12361640 push eax */
  push32((uint32_t)(EAX));
  /* 12361641 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361644 push ecx */
  push32((uint32_t)(ECX));
  /* 12361645 call 0x12357370 */
  push32(0x1236164au); f_12357370();
  /* 1236164a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236164d push eax */
  push32((uint32_t)(EAX));
  /* 1236164e call 0x123571f0 */
  push32(0x12361653u); f_123571f0();
  /* 12361653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361656 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361659 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1236165d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12361660 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12361663 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361666 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1236166c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1236166f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12361675 push ecx */
  push32((uint32_t)(ECX));
  /* 12361676 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12361679 push edx */
  push32((uint32_t)(EDX));
  /* 1236167a call 0x12357370 */
  push32(0x1236167fu); f_12357370();
  /* 1236167f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361682 push eax */
  push32((uint32_t)(EAX));
  /* 12361683 call 0x123571f0 */
  push32(0x12361688u); f_123571f0();
  /* 12361688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236168b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1236168e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12361692 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12361695 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12361698 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1236169b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 123616a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123616a4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 123616aa push eax */
  push32((uint32_t)(EAX));
  /* 123616ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123616ae push ecx */
  push32((uint32_t)(ECX));
  /* 123616af call 0x12357370 */
  push32(0x123616b4u); f_12357370();
  /* 123616b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123616b7 push eax */
  push32((uint32_t)(EAX));
  /* 123616b8 call 0x123571f0 */
  push32(0x123616bdu); f_123571f0();
  /* 123616bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123616c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123616c3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123616c7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123616ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123616cd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123616d0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_123616d6:;
  /* 123616d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123616d9 pop esi */
  ESI = (pop32());
  /* 123616da mov esp, ebp */
  ESP = (EBP);
  /* 123616dc pop ebp */
  EBP = (pop32());
  /* 123616dd ret  */
  ESPCHK(0x12361370u, _esp0);
  ESP += 4; return;
}

/* FUN_100116e0 @ 0x123616e0 (31 bytes, 15 insns) */
void f_123616e0(void) {
  FTRACE(0x123616e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123616e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123616e1 mov ebp, esp */
  EBP = (ESP);
  /* 123616e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123616e5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123616e8 push eax */
  push32((uint32_t)(EAX));
  /* 123616e9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123616ec push ecx */
  push32((uint32_t)(ECX));
  /* 123616ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123616f0 push edx */
  push32((uint32_t)(EDX));
  /* 123616f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123616f4 push eax */
  push32((uint32_t)(EAX));
  /* 123616f5 call 0x12361700 */
  push32(0x123616fau); f_12361700();
  /* 123616fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123616fd pop ebp */
  EBP = (pop32());
  /* 123616fe ret  */
  ESPCHK(0x123616e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011700 @ 0x12361700 (393 bytes, 123 insns) */
void f_12361700(void) {
  FTRACE(0x12361700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12361700 push ebp */
  push32((uint32_t)(EBP));
  /* 12361701 mov ebp, esp */
  EBP = (ESP);
  /* 12361703 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361706 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236170a jne 0x12361716 */
  if (!C.zf) goto L_12361716;
  /* 1236170c mov eax, dword ptr [0x1237fc98] */
  EAX = (r32((uint32_t)(0x1237fc98)));
  /* 12361711 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12361714 jmp 0x1236171c */
  goto L_1236171c;
L_12361716:;
  /* 12361716 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12361719 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1236171c:;
  /* 1236171c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1236171f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12361722 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361725 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12361728 push 0x123808e4 */
  push32((uint32_t)(0x123808e4u));
  /* 1236172d call dword ptr [0x123832d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832d0))), 0x12361733u);
  /* 12361733 cmp dword ptr [0x123808d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236173a je 0x1236175a */
  if (C.zf) goto L_1236175a;
  /* 1236173c push 0x123808e4 */
  push32((uint32_t)(0x123808e4u));
  /* 12361741 call dword ptr [0x123832c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c0))), 0x12361747u);
  /* 12361747 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12361749 call 0x12357dc0 */
  push32(0x1236174eu); f_12357dc0();
  /* 1236174e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361751 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12361758 jmp 0x12361761 */
  goto L_12361761;
L_1236175a:;
  /* 1236175a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12361761:;
  /* 12361761 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361765 jbe 0x12361852 */
  if ((C.cf||C.zf)) goto L_12361852;
  /* 1236176b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1236176e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12361770 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12361773 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12361777 je 0x12361781 */
  if (C.zf) goto L_12361781;
  /* 12361779 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1236177d je 0x12361786 */
  if (C.zf) goto L_12361786;
  /* 1236177f jmp 0x123617e0 */
  goto L_123617e0;
L_12361781:;
  /* 12361781 jmp 0x12361852 */
  goto L_12361852;
L_12361786:;
  /* 12361786 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361789 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236178c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1236178f mov dword ptr [0x123808c0], 0 */
  w32((uint32_t)(0x123808c0), (0x0u));
  /* 12361799 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1236179c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1236179f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123617a2 jne 0x123617b7 */
  if (!C.zf) goto L_123617b7;
  /* 123617a4 mov dword ptr [0x123808c0], 1 */
  w32((uint32_t)(0x123808c0), (0x1u));
  /* 123617ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123617b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123617b4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_123617b7:;
  /* 123617b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123617ba push ecx */
  push32((uint32_t)(ECX));
  /* 123617bb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 123617be push edx */
  push32((uint32_t)(EDX));
  /* 123617bf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 123617c2 push eax */
  push32((uint32_t)(EAX));
  /* 123617c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123617c6 push ecx */
  push32((uint32_t)(ECX));
  /* 123617c7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123617ca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123617cc push eax */
  push32((uint32_t)(EAX));
  /* 123617cd call 0x12361890 */
  push32(0x123617d2u); f_12361890();
  /* 123617d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123617d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123617d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123617db mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123617de jmp 0x1236184d */
  goto L_1236184d;
L_123617e0:;
  /* 123617e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123617e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123617e5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123617e7 mov ecx, dword ptr [0x1237ec98] */
  ECX = (r32((uint32_t)(0x1237ec98)));
  /* 123617ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123617ef mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123617f3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 123617f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123617fb je 0x12361828 */
  if (C.zf) goto L_12361828;
  /* 123617fd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361801 jbe 0x12361828 */
  if ((C.cf||C.zf)) goto L_12361828;
  /* 12361803 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12361806 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361809 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1236180b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1236180d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12361810 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361813 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12361816 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361819 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236181c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1236181f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361822 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361825 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12361828:;
  /* 12361828 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236182b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1236182e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12361830 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12361832 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12361835 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361838 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1236183b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1236183e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361841 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12361844 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12361847 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1236184a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1236184d:;
  /* 1236184d jmp 0x12361761 */
  goto L_12361761;
L_12361852:;
  /* 12361852 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361856 je 0x12361864 */
  if (C.zf) goto L_12361864;
  /* 12361858 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1236185a call 0x12357e60 */
  push32(0x1236185fu); f_12357e60();
  /* 1236185f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361862 jmp 0x1236186f */
  goto L_1236186f;
L_12361864:;
  /* 12361864 push 0x123808e4 */
  push32((uint32_t)(0x123808e4u));
  /* 12361869 call dword ptr [0x123832c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c0))), 0x1236186fu);
L_1236186f:;
  /* 1236186f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361873 jbe 0x12361883 */
  if ((C.cf||C.zf)) goto L_12361883;
  /* 12361875 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12361878 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1236187b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1236187e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361881 jmp 0x12361885 */
  goto L_12361885;
L_12361883:;
  /* 12361883 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12361885:;
  /* 12361885 mov esp, ebp */
  ESP = (EBP);
  /* 12361887 pop ebp */
  EBP = (pop32());
  /* 12361888 ret  */
  ESPCHK(0x12361700u, _esp0);
  ESP += 4; return;
}

/* FUN_10011890 @ 0x12361890 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12361890(void) {
  FTRACE(0x12361890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12361890 push ebp */
  push32((uint32_t)(EBP));
  /* 12361891 mov ebp, esp */
  EBP = (ESP);
  /* 12361893 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361896 push esi */
  push32((uint32_t)(ESI));
  /* 12361897 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1236189b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1236189e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123618a1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123618a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123618a7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123618ab ja 0x12361df8 */
  if ((!C.cf&&!C.zf)) goto L_12361df8;
  /* 123618b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123618b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123618b6 mov dl, byte ptr [eax + 0x12361e59] */
  DL = (r8((uint32_t)(EAX + 0x12361e59)));
  /* 123618bc jmp dword ptr [edx*4 + 0x12361dfd] */
  switch (EDX) {
    case 0: goto L_12361dd6;
    case 1: goto L_123618e5;
    case 2: goto L_1236192b;
    case 3: goto L_12361a78;
    case 4: goto L_12361aa0;
    case 5: goto L_12361b3f;
    case 6: goto L_12361bab;
    case 7: goto L_12361bd4;
    case 8: goto L_12361c15;
    case 9: goto L_12361cf7;
    case 10: goto L_12361d5e;
    case 11: goto L_12361dab;
    case 12: goto L_123618c3;
    case 13: goto L_12361908;
    case 14: goto L_1236194e;
    case 15: goto L_12361a4e;
    case 16: goto L_12361ae5;
    case 17: goto L_12361b12;
    case 18: goto L_12361b67;
    case 19: goto L_12361beb;
    case 20: goto L_12361c99;
    case 21: goto L_12361d28;
    case 22: goto L_12361df8;
    default: x86_unimpl("switch@0x123618bc out of table"); return;
  }
L_123618c3:;
  /* 123618c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123618c6 push ecx */
  push32((uint32_t)(ECX));
  /* 123618c7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123618ca push edx */
  push32((uint32_t)(EDX));
  /* 123618cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123618ce mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 123618d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123618d4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 123618d7 push eax */
  push32((uint32_t)(EAX));
  /* 123618d8 call 0x12361eb0 */
  push32(0x123618ddu); f_12361eb0();
  /* 123618dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123618e0 jmp 0x12361df8 */
  goto L_12361df8;
L_123618e5:;
  /* 123618e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123618e8 push ecx */
  push32((uint32_t)(ECX));
  /* 123618e9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123618ec push edx */
  push32((uint32_t)(EDX));
  /* 123618ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123618f0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 123618f3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123618f6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 123618fa push eax */
  push32((uint32_t)(EAX));
  /* 123618fb call 0x12361eb0 */
  push32(0x12361900u); f_12361eb0();
  /* 12361900 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361903 jmp 0x12361df8 */
  goto L_12361df8;
L_12361908:;
  /* 12361908 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1236190b push ecx */
  push32((uint32_t)(ECX));
  /* 1236190c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1236190f push edx */
  push32((uint32_t)(EDX));
  /* 12361910 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361913 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12361916 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12361919 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1236191d push eax */
  push32((uint32_t)(EAX));
  /* 1236191e call 0x12361eb0 */
  push32(0x12361923u); f_12361eb0();
  /* 12361923 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361926 jmp 0x12361df8 */
  goto L_12361df8;
L_1236192b:;
  /* 1236192b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1236192e push ecx */
  push32((uint32_t)(ECX));
  /* 1236192f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361932 push edx */
  push32((uint32_t)(EDX));
  /* 12361933 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361936 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12361939 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1236193c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12361940 push eax */
  push32((uint32_t)(EAX));
  /* 12361941 call 0x12361eb0 */
  push32(0x12361946u); f_12361eb0();
  /* 12361946 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361949 jmp 0x12361df8 */
  goto L_12361df8;
L_1236194e:;
  /* 1236194e cmp dword ptr [0x123808c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361955 je 0x123619d6 */
  if (C.zf) goto L_123619d6;
  /* 12361957 mov dword ptr [0x123808c0], 0 */
  w32((uint32_t)(0x123808c0), (0x0u));
  /* 12361961 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12361964 push ecx */
  push32((uint32_t)(ECX));
  /* 12361965 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361968 push edx */
  push32((uint32_t)(EDX));
  /* 12361969 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1236196c push eax */
  push32((uint32_t)(EAX));
  /* 1236196d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361970 push ecx */
  push32((uint32_t)(ECX));
  /* 12361971 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12361974 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1236197a push eax */
  push32((uint32_t)(EAX));
  /* 1236197b call 0x12362060 */
  push32(0x12361980u); f_12362060();
  /* 12361980 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361983 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361986 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361989 jne 0x12361990 */
  if (!C.zf) goto L_12361990;
  /* 1236198b jmp 0x12361df8 */
  goto L_12361df8;
L_12361990:;
  /* 12361990 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361993 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12361995 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12361998 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1236199b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1236199d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123619a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123619a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123619a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123619a8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123619aa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123619ad mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123619b0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123619b2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123619b5 push ecx */
  push32((uint32_t)(ECX));
  /* 123619b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123619b9 push edx */
  push32((uint32_t)(EDX));
  /* 123619ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123619bd push eax */
  push32((uint32_t)(EAX));
  /* 123619be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123619c1 push ecx */
  push32((uint32_t)(ECX));
  /* 123619c2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123619c5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 123619cb push eax */
  push32((uint32_t)(EAX));
  /* 123619cc call 0x12362060 */
  push32(0x123619d1u); f_12362060();
  /* 123619d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123619d4 jmp 0x12361a49 */
  goto L_12361a49;
L_123619d6:;
  /* 123619d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123619d9 push ecx */
  push32((uint32_t)(ECX));
  /* 123619da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123619dd push edx */
  push32((uint32_t)(EDX));
  /* 123619de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123619e1 push eax */
  push32((uint32_t)(EAX));
  /* 123619e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123619e5 push ecx */
  push32((uint32_t)(ECX));
  /* 123619e6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123619e9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 123619ef push eax */
  push32((uint32_t)(EAX));
  /* 123619f0 call 0x12362060 */
  push32(0x123619f5u); f_12362060();
  /* 123619f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123619f8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123619fb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123619fe jne 0x12361a05 */
  if (!C.zf) goto L_12361a05;
  /* 12361a00 jmp 0x12361df8 */
  goto L_12361df8;
L_12361a05:;
  /* 12361a05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361a08 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12361a0a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12361a0d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361a10 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12361a12 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361a15 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361a18 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12361a1a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361a1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12361a1f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361a22 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361a25 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12361a27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12361a2a push ecx */
  push32((uint32_t)(ECX));
  /* 12361a2b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361a2e push edx */
  push32((uint32_t)(EDX));
  /* 12361a2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361a32 push eax */
  push32((uint32_t)(EAX));
  /* 12361a33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361a36 push ecx */
  push32((uint32_t)(ECX));
  /* 12361a37 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12361a3a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12361a40 push eax */
  push32((uint32_t)(EAX));
  /* 12361a41 call 0x12362060 */
  push32(0x12361a46u); f_12362060();
  /* 12361a46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12361a49:;
  /* 12361a49 jmp 0x12361df8 */
  goto L_12361df8;
L_12361a4e:;
  /* 12361a4e mov ecx, dword ptr [0x123808c0] */
  ECX = (r32((uint32_t)(0x123808c0)));
  /* 12361a54 mov dword ptr [0x123808d0], ecx */
  w32((uint32_t)(0x123808d0), (ECX));
  /* 12361a5a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361a5d push edx */
  push32((uint32_t)(EDX));
  /* 12361a5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361a61 push eax */
  push32((uint32_t)(EAX));
  /* 12361a62 push 2 */
  push32((uint32_t)(0x2u));
  /* 12361a64 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361a67 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12361a6a push edx */
  push32((uint32_t)(EDX));
  /* 12361a6b call 0x12361f00 */
  push32(0x12361a70u); f_12361f00();
  /* 12361a70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361a73 jmp 0x12361df8 */
  goto L_12361df8;
L_12361a78:;
  /* 12361a78 mov eax, dword ptr [0x123808c0] */
  EAX = (r32((uint32_t)(0x123808c0)));
  /* 12361a7d mov dword ptr [0x123808d0], eax */
  w32((uint32_t)(0x123808d0), (EAX));
  /* 12361a82 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361a85 push ecx */
  push32((uint32_t)(ECX));
  /* 12361a86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361a89 push edx */
  push32((uint32_t)(EDX));
  /* 12361a8a push 2 */
  push32((uint32_t)(0x2u));
  /* 12361a8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361a8f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12361a92 push ecx */
  push32((uint32_t)(ECX));
  /* 12361a93 call 0x12361f00 */
  push32(0x12361a98u); f_12361f00();
  /* 12361a98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361a9b jmp 0x12361df8 */
  goto L_12361df8;
L_12361aa0:;
  /* 12361aa0 mov edx, dword ptr [0x123808c0] */
  EDX = (r32((uint32_t)(0x123808c0)));
  /* 12361aa6 mov dword ptr [0x123808d0], edx */
  w32((uint32_t)(0x123808d0), (EDX));
  /* 12361aac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361aaf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12361ab2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12361ab3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12361ab8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12361aba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12361abd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361ac1 jne 0x12361aca */
  if (!C.zf) goto L_12361aca;
  /* 12361ac3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12361aca:;
  /* 12361aca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361acd push edx */
  push32((uint32_t)(EDX));
  /* 12361ace mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361ad1 push eax */
  push32((uint32_t)(EAX));
  /* 12361ad2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12361ad4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12361ad7 push ecx */
  push32((uint32_t)(ECX));
  /* 12361ad8 call 0x12361f00 */
  push32(0x12361addu); f_12361f00();
  /* 12361add add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361ae0 jmp 0x12361df8 */
  goto L_12361df8;
L_12361ae5:;
  /* 12361ae5 mov edx, dword ptr [0x123808c0] */
  EDX = (r32((uint32_t)(0x123808c0)));
  /* 12361aeb mov dword ptr [0x123808d0], edx */
  w32((uint32_t)(0x123808d0), (EDX));
  /* 12361af1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361af4 push eax */
  push32((uint32_t)(EAX));
  /* 12361af5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361af8 push ecx */
  push32((uint32_t)(ECX));
  /* 12361af9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12361afb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361afe mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12361b01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361b04 push eax */
  push32((uint32_t)(EAX));
  /* 12361b05 call 0x12361f00 */
  push32(0x12361b0au); f_12361f00();
  /* 12361b0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361b0d jmp 0x12361df8 */
  goto L_12361df8;
L_12361b12:;
  /* 12361b12 mov ecx, dword ptr [0x123808c0] */
  ECX = (r32((uint32_t)(0x123808c0)));
  /* 12361b18 mov dword ptr [0x123808d0], ecx */
  w32((uint32_t)(0x123808d0), (ECX));
  /* 12361b1e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361b21 push edx */
  push32((uint32_t)(EDX));
  /* 12361b22 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361b25 push eax */
  push32((uint32_t)(EAX));
  /* 12361b26 push 2 */
  push32((uint32_t)(0x2u));
  /* 12361b28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361b2b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12361b2e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361b31 push edx */
  push32((uint32_t)(EDX));
  /* 12361b32 call 0x12361f00 */
  push32(0x12361b37u); f_12361f00();
  /* 12361b37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361b3a jmp 0x12361df8 */
  goto L_12361df8;
L_12361b3f:;
  /* 12361b3f mov eax, dword ptr [0x123808c0] */
  EAX = (r32((uint32_t)(0x123808c0)));
  /* 12361b44 mov dword ptr [0x123808d0], eax */
  w32((uint32_t)(0x123808d0), (EAX));
  /* 12361b49 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361b4c push ecx */
  push32((uint32_t)(ECX));
  /* 12361b4d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361b50 push edx */
  push32((uint32_t)(EDX));
  /* 12361b51 push 2 */
  push32((uint32_t)(0x2u));
  /* 12361b53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361b56 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12361b59 push ecx */
  push32((uint32_t)(ECX));
  /* 12361b5a call 0x12361f00 */
  push32(0x12361b5fu); f_12361f00();
  /* 12361b5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361b62 jmp 0x12361df8 */
  goto L_12361df8;
L_12361b67:;
  /* 12361b67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361b6a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361b6e jg 0x12361b8c */
  if ((!C.zf&&C.sf==C.of)) goto L_12361b8c;
  /* 12361b70 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361b73 push eax */
  push32((uint32_t)(EAX));
  /* 12361b74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361b77 push ecx */
  push32((uint32_t)(ECX));
  /* 12361b78 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12361b7b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12361b81 push eax */
  push32((uint32_t)(EAX));
  /* 12361b82 call 0x12361eb0 */
  push32(0x12361b87u); f_12361eb0();
  /* 12361b87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361b8a jmp 0x12361ba6 */
  goto L_12361ba6;
L_12361b8c:;
  /* 12361b8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361b8f push ecx */
  push32((uint32_t)(ECX));
  /* 12361b90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361b93 push edx */
  push32((uint32_t)(EDX));
  /* 12361b94 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12361b97 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12361b9d push ecx */
  push32((uint32_t)(ECX));
  /* 12361b9e call 0x12361eb0 */
  push32(0x12361ba3u); f_12361eb0();
  /* 12361ba3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12361ba6:;
  /* 12361ba6 jmp 0x12361df8 */
  goto L_12361df8;
L_12361bab:;
  /* 12361bab mov edx, dword ptr [0x123808c0] */
  EDX = (r32((uint32_t)(0x123808c0)));
  /* 12361bb1 mov dword ptr [0x123808d0], edx */
  w32((uint32_t)(0x123808d0), (EDX));
  /* 12361bb7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361bba push eax */
  push32((uint32_t)(EAX));
  /* 12361bbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361bbe push ecx */
  push32((uint32_t)(ECX));
  /* 12361bbf push 2 */
  push32((uint32_t)(0x2u));
  /* 12361bc1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361bc4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12361bc6 push eax */
  push32((uint32_t)(EAX));
  /* 12361bc7 call 0x12361f00 */
  push32(0x12361bccu); f_12361f00();
  /* 12361bcc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361bcf jmp 0x12361df8 */
  goto L_12361df8;
L_12361bd4:;
  /* 12361bd4 mov ecx, dword ptr [0x123808c0] */
  ECX = (r32((uint32_t)(0x123808c0)));
  /* 12361bda mov dword ptr [0x123808d0], ecx */
  w32((uint32_t)(0x123808d0), (ECX));
  /* 12361be0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361be3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12361be6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12361be9 jmp 0x12361c3d */
  goto L_12361c3d;
L_12361beb:;
  /* 12361beb mov ecx, dword ptr [0x123808c0] */
  ECX = (r32((uint32_t)(0x123808c0)));
  /* 12361bf1 mov dword ptr [0x123808d0], ecx */
  w32((uint32_t)(0x123808d0), (ECX));
  /* 12361bf7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361bfa push edx */
  push32((uint32_t)(EDX));
  /* 12361bfb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361bfe push eax */
  push32((uint32_t)(EAX));
  /* 12361bff push 1 */
  push32((uint32_t)(0x1u));
  /* 12361c01 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361c04 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12361c07 push edx */
  push32((uint32_t)(EDX));
  /* 12361c08 call 0x12361f00 */
  push32(0x12361c0du); f_12361f00();
  /* 12361c0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361c10 jmp 0x12361df8 */
  goto L_12361df8;
L_12361c15:;
  /* 12361c15 mov eax, dword ptr [0x123808c0] */
  EAX = (r32((uint32_t)(0x123808c0)));
  /* 12361c1a mov dword ptr [0x123808d0], eax */
  w32((uint32_t)(0x123808d0), (EAX));
  /* 12361c1f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361c22 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361c26 jne 0x12361c31 */
  if (!C.zf) goto L_12361c31;
  /* 12361c28 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12361c2f jmp 0x12361c3d */
  goto L_12361c3d;
L_12361c31:;
  /* 12361c31 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361c34 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12361c37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361c3a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12361c3d:;
  /* 12361c3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361c40 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12361c43 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361c46 jge 0x12361c51 */
  if ((C.sf==C.of)) goto L_12361c51;
  /* 12361c48 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12361c4f jmp 0x12361c7e */
  goto L_12361c7e;
L_12361c51:;
  /* 12361c51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361c54 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12361c57 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12361c58 mov ecx, 7 */
  ECX = (0x7u);
  /* 12361c5d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12361c5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12361c62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361c65 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12361c68 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12361c69 mov ecx, 7 */
  ECX = (0x7u);
  /* 12361c6e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12361c70 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361c73 jl 0x12361c7e */
  if ((C.sf!=C.of)) goto L_12361c7e;
  /* 12361c75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12361c78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361c7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12361c7e:;
  /* 12361c7e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361c81 push eax */
  push32((uint32_t)(EAX));
  /* 12361c82 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361c85 push ecx */
  push32((uint32_t)(ECX));
  /* 12361c86 push 2 */
  push32((uint32_t)(0x2u));
  /* 12361c88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12361c8b push edx */
  push32((uint32_t)(EDX));
  /* 12361c8c call 0x12361f00 */
  push32(0x12361c91u); f_12361f00();
  /* 12361c91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361c94 jmp 0x12361df8 */
  goto L_12361df8;
L_12361c99:;
  /* 12361c99 cmp dword ptr [0x123808c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361ca0 je 0x12361cd0 */
  if (C.zf) goto L_12361cd0;
  /* 12361ca2 mov dword ptr [0x123808c0], 0 */
  w32((uint32_t)(0x123808c0), (0x0u));
  /* 12361cac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12361caf push eax */
  push32((uint32_t)(EAX));
  /* 12361cb0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12361cb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361cb7 push edx */
  push32((uint32_t)(EDX));
  /* 12361cb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361cbb push eax */
  push32((uint32_t)(EAX));
  /* 12361cbc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12361cbf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12361cc5 push edx */
  push32((uint32_t)(EDX));
  /* 12361cc6 call 0x12362060 */
  push32(0x12361ccbu); f_12362060();
  /* 12361ccb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361cce jmp 0x12361cf2 */
  goto L_12361cf2;
L_12361cd0:;
  /* 12361cd0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12361cd3 push eax */
  push32((uint32_t)(EAX));
  /* 12361cd4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361cd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12361cd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361cdb push edx */
  push32((uint32_t)(EDX));
  /* 12361cdc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361cdf push eax */
  push32((uint32_t)(EAX));
  /* 12361ce0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12361ce3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12361ce9 push edx */
  push32((uint32_t)(EDX));
  /* 12361cea call 0x12362060 */
  push32(0x12361cefu); f_12362060();
  /* 12361cef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12361cf2:;
  /* 12361cf2 jmp 0x12361df8 */
  goto L_12361df8;
L_12361cf7:;
  /* 12361cf7 mov dword ptr [0x123808c0], 0 */
  w32((uint32_t)(0x123808c0), (0x0u));
  /* 12361d01 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12361d04 push eax */
  push32((uint32_t)(EAX));
  /* 12361d05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361d08 push ecx */
  push32((uint32_t)(ECX));
  /* 12361d09 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361d0c push edx */
  push32((uint32_t)(EDX));
  /* 12361d0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361d10 push eax */
  push32((uint32_t)(EAX));
  /* 12361d11 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12361d14 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12361d1a push edx */
  push32((uint32_t)(EDX));
  /* 12361d1b call 0x12362060 */
  push32(0x12361d20u); f_12362060();
  /* 12361d20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361d23 jmp 0x12361df8 */
  goto L_12361df8;
L_12361d28:;
  /* 12361d28 mov eax, dword ptr [0x123808c0] */
  EAX = (r32((uint32_t)(0x123808c0)));
  /* 12361d2d mov dword ptr [0x123808d0], eax */
  w32((uint32_t)(0x123808d0), (EAX));
  /* 12361d32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361d35 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12361d38 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12361d39 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12361d3e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12361d40 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12361d43 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361d46 push edx */
  push32((uint32_t)(EDX));
  /* 12361d47 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361d4a push eax */
  push32((uint32_t)(EAX));
  /* 12361d4b push 2 */
  push32((uint32_t)(0x2u));
  /* 12361d4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12361d50 push ecx */
  push32((uint32_t)(ECX));
  /* 12361d51 call 0x12361f00 */
  push32(0x12361d56u); f_12361f00();
  /* 12361d56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361d59 jmp 0x12361df8 */
  goto L_12361df8;
L_12361d5e:;
  /* 12361d5e mov edx, dword ptr [0x123808c0] */
  EDX = (r32((uint32_t)(0x123808c0)));
  /* 12361d64 mov dword ptr [0x123808d0], edx */
  w32((uint32_t)(0x123808d0), (EDX));
  /* 12361d6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361d6d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12361d70 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12361d71 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12361d76 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12361d78 mov ecx, eax */
  ECX = (EAX);
  /* 12361d7a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361d7d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12361d80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361d83 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12361d86 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12361d87 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12361d8c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12361d8e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361d90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12361d93 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361d96 push eax */
  push32((uint32_t)(EAX));
  /* 12361d97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361d9a push ecx */
  push32((uint32_t)(ECX));
  /* 12361d9b push 4 */
  push32((uint32_t)(0x4u));
  /* 12361d9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12361da0 push edx */
  push32((uint32_t)(EDX));
  /* 12361da1 call 0x12361f00 */
  push32(0x12361da6u); f_12361f00();
  /* 12361da6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361da9 jmp 0x12361df8 */
  goto L_12361df8;
L_12361dab:;
  /* 12361dab call 0x12362ec0 */
  push32(0x12361db0u); f_12362ec0();
  /* 12361db0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361db3 push eax */
  push32((uint32_t)(EAX));
  /* 12361db4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361db7 push ecx */
  push32((uint32_t)(ECX));
  /* 12361db8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361dbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12361dbd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361dc1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12361dc4 mov ecx, dword ptr [eax*4 + 0x1237fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1237fe1c)));
  /* 12361dcb push ecx */
  push32((uint32_t)(ECX));
  /* 12361dcc call 0x12361eb0 */
  push32(0x12361dd1u); f_12361eb0();
  /* 12361dd1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361dd4 jmp 0x12361df8 */
  goto L_12361df8;
L_12361dd6:;
  /* 12361dd6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361dd9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12361ddb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12361dde mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361de1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12361de3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361de6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361de9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12361deb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361dee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12361df0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361df3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361df6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12361df8:;
  /* 12361df8 pop esi */
  ESI = (pop32());
  /* 12361df9 mov esp, ebp */
  ESP = (EBP);
  /* 12361dfb pop ebp */
  EBP = (pop32());
  /* 12361dfc ret  */
  ESPCHK(0x12361890u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12361eb0 (72 bytes, 30 insns) */
void f_12361eb0(void) {
  FTRACE(0x12361eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12361eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12361eb1 mov ebp, esp */
  EBP = (ESP);
L_12361eb3:;
  /* 12361eb3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361eb6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361eb9 je 0x12361ef6 */
  if (C.zf) goto L_12361ef6;
  /* 12361ebb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12361ebe movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12361ec1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12361ec3 je 0x12361ef6 */
  if (C.zf) goto L_12361ef6;
  /* 12361ec5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361ec8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12361eca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12361ecd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12361ecf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12361ed1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361ed4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12361ed6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361ed9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361edc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12361ede mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12361ee1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361ee4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12361ee7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361eea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12361eec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361eef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361ef2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12361ef4 jmp 0x12361eb3 */
  goto L_12361eb3;
L_12361ef6:;
  /* 12361ef6 pop ebp */
  EBP = (pop32());
  /* 12361ef7 ret  */
  ESPCHK(0x12361eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f00 @ 0x12361f00 (173 bytes, 64 insns) */
void f_12361f00(void) {
  FTRACE(0x12361f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12361f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12361f01 mov ebp, esp */
  EBP = (ESP);
  /* 12361f03 push ecx */
  push32((uint32_t)(ECX));
  /* 12361f04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12361f0b cmp dword ptr [0x123808d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361f12 je 0x12361f2a */
  if (C.zf) goto L_12361f2a;
  /* 12361f14 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361f17 push eax */
  push32((uint32_t)(EAX));
  /* 12361f18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361f1b push ecx */
  push32((uint32_t)(ECX));
  /* 12361f1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12361f1f push edx */
  push32((uint32_t)(EDX));
  /* 12361f20 call 0x12361fb0 */
  push32(0x12361f25u); f_12361fb0();
  /* 12361f25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12361f28 jmp 0x12361fa9 */
  goto L_12361fa9;
L_12361f2a:;
  /* 12361f2a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361f2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361f30 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361f32 jae 0x12361fa0 */
  if (!C.cf) goto L_12361fa0;
  /* 12361f34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361f37 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361f3a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12361f3d jmp 0x12361f48 */
  goto L_12361f48;
L_12361f3f:;
  /* 12361f3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361f42 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361f45 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12361f48:;
  /* 12361f48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361f4b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361f4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12361f50 je 0x12361f84 */
  if (C.zf) goto L_12361f84;
  /* 12361f52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12361f55 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12361f56 mov ecx, 0xa */
  ECX = (0xau);
  /* 12361f5b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12361f5d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361f60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361f63 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12361f65 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361f68 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12361f6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12361f6e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12361f6f mov ecx, 0xa */
  ECX = (0xau);
  /* 12361f74 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12361f76 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12361f79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12361f7c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361f7f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12361f82 jmp 0x12361f3f */
  goto L_12361f3f;
L_12361f84:;
  /* 12361f84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361f87 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12361f89 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361f8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361f8f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12361f91 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361f94 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12361f96 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361f99 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361f9c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12361f9e jmp 0x12361fa9 */
  goto L_12361fa9;
L_12361fa0:;
  /* 12361fa0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12361fa3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12361fa9:;
  /* 12361fa9 mov esp, ebp */
  ESP = (EBP);
  /* 12361fab pop ebp */
  EBP = (pop32());
  /* 12361fac ret  */
  ESPCHK(0x12361f00u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12361fb0 (172 bytes, 65 insns) */
void f_12361fb0(void) {
  FTRACE(0x12361fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12361fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12361fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12361fb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361fb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12361fb9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12361fbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12361fbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361fc1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12361fc4 jbe 0x1236200b */
  if ((C.cf||C.zf)) goto L_1236200b;
L_12361fc6:;
  /* 12361fc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12361fc9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12361fca mov ecx, 0xa */
  ECX = (0xau);
  /* 12361fcf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12361fd1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361fd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12361fd7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12361fd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12361fdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12361fdf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12361fe2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361fe5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12361fe7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12361fea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12361fed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12361fef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12361ff2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12361ff3 mov ecx, 0xa */
  ECX = (0xau);
  /* 12361ff8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12361ffa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12361ffd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362001 jle 0x1236200b */
  if ((C.zf||C.sf!=C.of)) goto L_1236200b;
  /* 12362003 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12362006 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362009 ja 0x12361fc6 */
  if ((!C.cf&&!C.zf)) goto L_12361fc6;
L_1236200b:;
  /* 1236200b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1236200e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12362010 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12362013 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12362016 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12362019 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1236201b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1236201e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12362021 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12362024:;
  /* 12362024 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12362027 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12362029 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1236202c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1236202f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12362032 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12362034 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12362036 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12362039 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1236203c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1236203f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12362042 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12362045 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12362047 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1236204a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236204d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12362050 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12362053 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362056 jb 0x12362024 */
  if (C.cf) goto L_12362024;
  /* 12362058 mov esp, ebp */
  ESP = (EBP);
  /* 1236205a pop ebp */
  EBP = (pop32());
  /* 1236205b ret  */
  ESPCHK(0x12361fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012060 @ 0x12362060 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12362060(void) {
  FTRACE(0x12362060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12362060 push ebp */
  push32((uint32_t)(EBP));
  /* 12362061 mov ebp, esp */
  EBP = (ESP);
  /* 12362063 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12362066:;
  /* 12362066 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362069 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1236206c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1236206e je 0x123624dc */
  if (C.zf) goto L_123624dc;
  /* 12362074 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12362077 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236207a je 0x123624dc */
  if (C.zf) goto L_123624dc;
  /* 12362080 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12362084 mov dword ptr [0x123808d0], 0 */
  w32((uint32_t)(0x123808d0), (0x0u));
  /* 1236208e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12362095 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362098 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1236209b jmp 0x123620a6 */
  goto L_123620a6;
L_1236209d:;
  /* 1236209d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123620a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123620a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_123620a6:;
  /* 123620a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123620a9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123620ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123620af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123620b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123620b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123620b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123620bb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123620bd jne 0x123620c1 */
  if (!C.zf) goto L_123620c1;
  /* 123620bf jmp 0x1236209d */
  goto L_1236209d;
L_123620c1:;
  /* 123620c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123620c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123620c7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123620ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123620cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123620d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123620d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123620d6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123620d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123620dc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123620e0 ja 0x12362430 */
  if ((!C.cf&&!C.zf)) goto L_12362430;
  /* 123620e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123620e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123620eb mov al, byte ptr [ecx + 0x1236250c] */
  AL = (r8((uint32_t)(ECX + 0x1236250c)));
  /* 123620f1 jmp dword ptr [eax*4 + 0x123624e0] */
  switch (EAX) {
    case 0: goto L_1236234f;
    case 1: goto L_12362233;
    case 2: goto L_123621be;
    case 3: goto L_123620f8;
    case 4: goto L_12362136;
    case 5: goto L_12362197;
    case 6: goto L_123621e5;
    case 7: goto L_1236220c;
    case 8: goto L_1236227a;
    case 9: goto L_12362174;
    case 10: goto L_12362430;
    default: x86_unimpl("switch@0x123620f1 out of table"); return;
  }
L_123620f8:;
  /* 123620f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123620fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 123620fe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12362101 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12362104 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12362107 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236210b ja 0x12362131 */
  if ((!C.cf&&!C.zf)) goto L_12362131;
  /* 1236210d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12362110 jmp dword ptr [ecx*4 + 0x1236255f] */
  switch (ECX) {
    case 0: goto L_12362117;
    case 1: goto L_12362121;
    case 2: goto L_12362127;
    case 3: goto L_1236212d;
    case 4: goto L_12362155;
    case 5: goto L_1236215f;
    case 6: goto L_12362165;
    case 7: goto L_1236216b;
    default: x86_unimpl("switch@0x12362110 out of table"); return;
  }
L_12362117:;
  /* 12362117 mov dword ptr [0x123808d0], 1 */
  w32((uint32_t)(0x123808d0), (0x1u));
L_12362121:;
  /* 12362121 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12362125 jmp 0x12362131 */
  goto L_12362131;
L_12362127:;
  /* 12362127 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1236212b jmp 0x12362131 */
  goto L_12362131;
L_1236212d:;
  /* 1236212d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12362131:;
  /* 12362131 jmp 0x12362430 */
  goto L_12362430;
L_12362136:;
  /* 12362136 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12362139 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1236213c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1236213f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12362142 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12362145 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362149 ja 0x1236216f */
  if ((!C.cf&&!C.zf)) goto L_1236216f;
  /* 1236214b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1236214e jmp dword ptr [ecx*4 + 0x1236256f] */
  switch (ECX) {
    case 0: goto L_12362155;
    case 1: goto L_1236215f;
    case 2: goto L_12362165;
    case 3: goto L_1236216b;
    default: x86_unimpl("switch@0x1236214e out of table"); return;
  }
L_12362155:;
  /* 12362155 mov dword ptr [0x123808d0], 1 */
  w32((uint32_t)(0x123808d0), (0x1u));
L_1236215f:;
  /* 1236215f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12362163 jmp 0x1236216f */
  goto L_1236216f;
L_12362165:;
  /* 12362165 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12362169 jmp 0x1236216f */
  goto L_1236216f;
L_1236216b:;
  /* 1236216b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1236216f:;
  /* 1236216f jmp 0x12362430 */
  goto L_12362430;
L_12362174:;
  /* 12362174 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12362177 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1236217a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236217e je 0x12362188 */
  if (C.zf) goto L_12362188;
  /* 12362180 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362184 je 0x1236218e */
  if (C.zf) goto L_1236218e;
  /* 12362186 jmp 0x12362192 */
  goto L_12362192;
L_12362188:;
  /* 12362188 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1236218c jmp 0x12362192 */
  goto L_12362192;
L_1236218e:;
  /* 1236218e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12362192:;
  /* 12362192 jmp 0x12362430 */
  goto L_12362430;
L_12362197:;
  /* 12362197 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1236219a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1236219d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123621a1 je 0x123621ab */
  if (C.zf) goto L_123621ab;
  /* 123621a3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123621a7 je 0x123621b5 */
  if (C.zf) goto L_123621b5;
  /* 123621a9 jmp 0x123621b9 */
  goto L_123621b9;
L_123621ab:;
  /* 123621ab mov dword ptr [0x123808d0], 1 */
  w32((uint32_t)(0x123808d0), (0x1u));
L_123621b5:;
  /* 123621b5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_123621b9:;
  /* 123621b9 jmp 0x12362430 */
  goto L_12362430;
L_123621be:;
  /* 123621be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123621c1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 123621c4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123621c8 je 0x123621d2 */
  if (C.zf) goto L_123621d2;
  /* 123621ca cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123621ce je 0x123621dc */
  if (C.zf) goto L_123621dc;
  /* 123621d0 jmp 0x123621e0 */
  goto L_123621e0;
L_123621d2:;
  /* 123621d2 mov dword ptr [0x123808d0], 1 */
  w32((uint32_t)(0x123808d0), (0x1u));
L_123621dc:;
  /* 123621dc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_123621e0:;
  /* 123621e0 jmp 0x12362430 */
  goto L_12362430;
L_123621e5:;
  /* 123621e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123621e8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 123621eb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123621ef je 0x123621f9 */
  if (C.zf) goto L_123621f9;
  /* 123621f1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123621f5 je 0x12362203 */
  if (C.zf) goto L_12362203;
  /* 123621f7 jmp 0x12362207 */
  goto L_12362207;
L_123621f9:;
  /* 123621f9 mov dword ptr [0x123808d0], 1 */
  w32((uint32_t)(0x123808d0), (0x1u));
L_12362203:;
  /* 12362203 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12362207:;
  /* 12362207 jmp 0x12362430 */
  goto L_12362430;
L_1236220c:;
  /* 1236220c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1236220f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12362212 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362216 je 0x12362220 */
  if (C.zf) goto L_12362220;
  /* 12362218 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236221c je 0x1236222a */
  if (C.zf) goto L_1236222a;
  /* 1236221e jmp 0x1236222e */
  goto L_1236222e;
L_12362220:;
  /* 12362220 mov dword ptr [0x123808d0], 1 */
  w32((uint32_t)(0x123808d0), (0x1u));
L_1236222a:;
  /* 1236222a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1236222e:;
  /* 1236222e jmp 0x12362430 */
  goto L_12362430;
L_12362233:;
  /* 12362233 push 0x1237c984 */
  push32((uint32_t)(0x1237c984u));
  /* 12362238 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236223b push ecx */
  push32((uint32_t)(ECX));
  /* 1236223c call 0x12362a90 */
  push32(0x12362241u); f_12362a90();
  /* 12362241 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362244 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12362246 jne 0x12362253 */
  if (!C.zf) goto L_12362253;
  /* 12362248 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236224b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236224e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12362251 jmp 0x12362271 */
  goto L_12362271;
L_12362253:;
  /* 12362253 push 0x1237c980 */
  push32((uint32_t)(0x1237c980u));
  /* 12362258 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236225b push eax */
  push32((uint32_t)(EAX));
  /* 1236225c call 0x12362a90 */
  push32(0x12362261u); f_12362a90();
  /* 12362261 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362264 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12362266 jne 0x12362271 */
  if (!C.zf) goto L_12362271;
  /* 12362268 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236226b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236226e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12362271:;
  /* 12362271 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12362275 jmp 0x12362430 */
  goto L_12362430;
L_1236227a:;
  /* 1236227a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1236227d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362281 jg 0x12362291 */
  if ((!C.zf&&C.sf==C.of)) goto L_12362291;
  /* 12362283 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12362286 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1236228c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1236228f jmp 0x1236229d */
  goto L_1236229d;
L_12362291:;
  /* 12362291 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12362294 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1236229a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1236229d:;
  /* 1236229d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123622a1 jle 0x12362344 */
  if ((C.zf||C.sf!=C.of)) goto L_12362344;
  /* 123622a7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123622aa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123622ad jbe 0x12362344 */
  if ((C.cf||C.zf)) goto L_12362344;
  /* 123622b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123622b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123622b8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123622ba mov ecx, dword ptr [0x1237ec98] */
  ECX = (r32((uint32_t)(0x1237ec98)));
  /* 123622c0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123622c2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123622c6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 123622cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123622ce je 0x12362307 */
  if (C.zf) goto L_12362307;
  /* 123622d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123622d3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123622d6 jbe 0x12362307 */
  if ((C.cf||C.zf)) goto L_12362307;
  /* 123622d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123622db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123622dd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123622e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123622e2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 123622e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123622e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123622e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123622ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123622ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123622f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123622f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123622f7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 123622fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123622fd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123622ff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12362302 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12362305 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12362307:;
  /* 12362307 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1236230a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1236230c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1236230f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12362311 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12362313 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12362316 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12362318 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236231b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1236231e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12362320 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12362323 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362326 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12362329 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1236232c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1236232e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12362331 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12362334 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12362336 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12362339 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1236233c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1236233f jmp 0x1236229d */
  goto L_1236229d;
L_12362344:;
  /* 12362344 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12362347 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1236234a jmp 0x12362066 */
  goto L_12362066;
L_1236234f:;
  /* 1236234f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12362352 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12362355 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12362357 je 0x12362422 */
  if (C.zf) goto L_12362422;
  /* 1236235d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362360 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362363 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12362366:;
  /* 12362366 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362369 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1236236c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1236236e je 0x12362420 */
  if (C.zf) goto L_12362420;
  /* 12362374 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12362377 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236237a je 0x12362420 */
  if (C.zf) goto L_12362420;
  /* 12362380 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362383 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12362386 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362389 jne 0x12362399 */
  if (!C.zf) goto L_12362399;
  /* 1236238b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236238e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362391 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12362394 jmp 0x12362420 */
  goto L_12362420;
L_12362399:;
  /* 12362399 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236239c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1236239e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123623a0 mov edx, dword ptr [0x1237ec98] */
  EDX = (r32((uint32_t)(0x1237ec98)));
  /* 123623a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123623a8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 123623ac and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 123623b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123623b3 je 0x123623ec */
  if (C.zf) goto L_123623ec;
  /* 123623b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123623b8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123623bb jbe 0x123623ec */
  if ((C.cf||C.zf)) goto L_123623ec;
  /* 123623bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123623c0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123623c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123623c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123623c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123623c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123623cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123623ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123623d1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123623d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123623d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123623d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123623dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123623df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123623e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123623e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123623e7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123623ea mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123623ec:;
  /* 123623ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123623ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123623f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123623f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123623f6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 123623f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123623fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123623fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362400 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12362403 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12362405 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362408 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236240b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1236240e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12362411 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12362413 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12362416 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12362419 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1236241b jmp 0x12362366 */
  goto L_12362366;
L_12362420:;
  /* 12362420 jmp 0x1236242b */
  goto L_1236242b;
L_12362422:;
  /* 12362422 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362425 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362428 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1236242b:;
  /* 1236242b jmp 0x12362066 */
  goto L_12362066;
L_12362430:;
  /* 12362430 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12362434 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12362436 je 0x1236245c */
  if (C.zf) goto L_1236245c;
  /* 12362438 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1236243b push edx */
  push32((uint32_t)(EDX));
  /* 1236243c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1236243f push eax */
  push32((uint32_t)(EAX));
  /* 12362440 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12362443 push ecx */
  push32((uint32_t)(ECX));
  /* 12362444 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12362447 push edx */
  push32((uint32_t)(EDX));
  /* 12362448 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1236244b push eax */
  push32((uint32_t)(EAX));
  /* 1236244c call 0x12361890 */
  push32(0x12362451u); f_12361890();
  /* 12362451 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362454 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12362457 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1236245a jmp 0x123624d7 */
  goto L_123624d7;
L_1236245c:;
  /* 1236245c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236245f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362461 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12362463 mov ecx, dword ptr [0x1237ec98] */
  ECX = (r32((uint32_t)(0x1237ec98)));
  /* 12362469 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1236246b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1236246f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12362475 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12362477 je 0x123624a8 */
  if (C.zf) goto L_123624a8;
  /* 12362479 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1236247c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1236247e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362481 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12362483 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12362485 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12362488 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1236248a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236248d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12362490 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12362492 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362495 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362498 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1236249b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1236249e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123624a0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123624a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123624a6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_123624a8:;
  /* 123624a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123624ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123624ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123624b0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123624b2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123624b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123624b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123624b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123624bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123624bf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123624c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123624c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123624c7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123624ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123624cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123624cf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123624d2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123624d5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123624d7:;
  /* 123624d7 jmp 0x12362066 */
  goto L_12362066;
L_123624dc:;
  /* 123624dc mov esp, ebp */
  ESP = (EBP);
  /* 123624de pop ebp */
  EBP = (pop32());
  /* 123624df ret  */
  ESPCHK(0x12362060u, _esp0);
  ESP += 4; return;
}

/* FUN_10012580 @ 0x12362580 (650 bytes, 178 insns) */
void f_12362580(void) {
  FTRACE(0x12362580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12362580 push ebp */
  push32((uint32_t)(EBP));
  /* 12362581 mov ebp, esp */
  EBP = (ESP);
  /* 12362583 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12362589 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236258d jne 0x123626e9 */
  if (!C.zf) goto L_123626e9;
  /* 12362593 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12362596 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1236259c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 123625a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123625a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123625ac mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 123625b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123625b8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 123625be push edx */
  push32((uint32_t)(EDX));
  /* 123625bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123625c2 push eax */
  push32((uint32_t)(EAX));
  /* 123625c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123625c6 push ecx */
  push32((uint32_t)(ECX));
  /* 123625c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123625ca push edx */
  push32((uint32_t)(EDX));
  /* 123625cb call 0x123639a0 */
  push32(0x123625d0u); f_123639a0();
  /* 123625d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123625d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123625d6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123625da jne 0x1236266f */
  if (!C.zf) goto L_1236266f;
  /* 123625e0 call dword ptr [0x123832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832fc))), 0x123625e6u);
  /* 123625e6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123625e9 je 0x123625f0 */
  if (C.zf) goto L_123625f0;
  /* 123625eb jmp 0x123626cd */
  goto L_123626cd;
L_123625f0:;
  /* 123625f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123625f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123625f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123625f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123625f9 push eax */
  push32((uint32_t)(EAX));
  /* 123625fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123625fd push ecx */
  push32((uint32_t)(ECX));
  /* 123625fe call 0x123639a0 */
  push32(0x12362603u); f_123639a0();
  /* 12362603 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362606 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1236260c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362613 jne 0x1236261a */
  if (!C.zf) goto L_1236261a;
  /* 12362615 jmp 0x123626cd */
  goto L_123626cd;
L_1236261a:;
  /* 1236261a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1236261c push 0x1237c98c */
  push32((uint32_t)(0x1237c98cu));
  /* 12362621 push 2 */
  push32((uint32_t)(0x2u));
  /* 12362623 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12362629 push edx */
  push32((uint32_t)(EDX));
  /* 1236262a call 0x123543c0 */
  push32(0x1236262fu); f_123543c0();
  /* 1236262f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362632 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12362635 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362639 jne 0x12362640 */
  if (!C.zf) goto L_12362640;
  /* 1236263b jmp 0x123626cd */
  goto L_123626cd;
L_12362640:;
  /* 12362640 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12362647 push 0 */
  push32((uint32_t)(0x0u));
  /* 12362649 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1236264f push eax */
  push32((uint32_t)(EAX));
  /* 12362650 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12362653 push ecx */
  push32((uint32_t)(ECX));
  /* 12362654 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12362657 push edx */
  push32((uint32_t)(EDX));
  /* 12362658 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1236265b push eax */
  push32((uint32_t)(EAX));
  /* 1236265c call 0x123639a0 */
  push32(0x12362661u); f_123639a0();
  /* 12362661 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362664 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12362667 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236266b jne 0x1236266f */
  if (!C.zf) goto L_1236266f;
  /* 1236266d jmp 0x123626cd */
  goto L_123626cd;
L_1236266f:;
  /* 1236266f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12362671 push 0x1237c98c */
  push32((uint32_t)(0x1237c98cu));
  /* 12362676 push 2 */
  push32((uint32_t)(0x2u));
  /* 12362678 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1236267b push ecx */
  push32((uint32_t)(ECX));
  /* 1236267c call 0x123543c0 */
  push32(0x12362681u); f_123543c0();
  /* 12362681 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362684 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1236268a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1236268c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12362692 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362695 jne 0x12362699 */
  if (!C.zf) goto L_12362699;
  /* 12362697 jmp 0x123626cd */
  goto L_123626cd;
L_12362699:;
  /* 12362699 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1236269c push ecx */
  push32((uint32_t)(ECX));
  /* 1236269d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123626a0 push edx */
  push32((uint32_t)(EDX));
  /* 123626a1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 123626a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123626a9 push ecx */
  push32((uint32_t)(ECX));
  /* 123626aa call 0x12357be0 */
  push32(0x123626afu); f_12357be0();
  /* 123626af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123626b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123626b6 je 0x123626c6 */
  if (C.zf) goto L_123626c6;
  /* 123626b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 123626ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123626bd push edx */
  push32((uint32_t)(EDX));
  /* 123626be call 0x12354e50 */
  push32(0x123626c3u); f_12354e50();
  /* 123626c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123626c6:;
  /* 123626c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123626c8 jmp 0x12362806 */
  goto L_12362806;
L_123626cd:;
  /* 123626cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123626d1 je 0x123626e1 */
  if (C.zf) goto L_123626e1;
  /* 123626d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 123626d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123626d8 push eax */
  push32((uint32_t)(EAX));
  /* 123626d9 call 0x12354e50 */
  push32(0x123626deu); f_12354e50();
  /* 123626de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123626e1:;
  /* 123626e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123626e4 jmp 0x12362806 */
  goto L_12362806;
L_123626e9:;
  /* 123626e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123626ed jne 0x12362803 */
  if (!C.zf) goto L_12362803;
  /* 123626f3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 123626fd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12362700 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12362706 push 0 */
  push32((uint32_t)(0x0u));
  /* 12362708 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1236270e push edx */
  push32((uint32_t)(EDX));
  /* 1236270f push 0x123807e8 */
  push32((uint32_t)(0x123807e8u));
  /* 12362714 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12362717 push eax */
  push32((uint32_t)(EAX));
  /* 12362718 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1236271b push ecx */
  push32((uint32_t)(ECX));
  /* 1236271c call 0x12363800 */
  push32(0x12362721u); f_12363800();
  /* 12362721 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362724 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12362726 jne 0x12362730 */
  if (!C.zf) goto L_12362730;
  /* 12362728 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1236272b jmp 0x12362806 */
  goto L_12362806;
L_12362730:;
  /* 12362730 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12362736 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12362739 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12362743 jmp 0x12362754 */
  goto L_12362754;
L_12362745:;
  /* 12362745 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1236274b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236274e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12362754:;
  /* 12362754 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236275b jge 0x123627ff */
  if ((C.sf==C.of)) goto L_123627ff;
  /* 12362761 cmp dword ptr [0x1237eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1237eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362768 jle 0x1236279b */
  if ((C.zf||C.sf!=C.of)) goto L_1236279b;
  /* 1236276a push 4 */
  push32((uint32_t)(0x4u));
  /* 1236276c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12362772 mov dl, byte ptr [ecx*2 + 0x123807e8] */
  DL = (r8((uint32_t)(ECX*2 + 0x123807e8)));
  /* 12362779 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1236277f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12362785 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1236278a push eax */
  push32((uint32_t)(EAX));
  /* 1236278b call 0x1235a3d0 */
  push32(0x12362790u); f_1235a3d0();
  /* 12362790 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362793 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12362799 jmp 0x123627ce */
  goto L_123627ce;
L_1236279b:;
  /* 1236279b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123627a1 mov dl, byte ptr [ecx*2 + 0x123807e8] */
  DL = (r8((uint32_t)(ECX*2 + 0x123807e8)));
  /* 123627a8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 123627ae mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 123627b4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123627b9 mov ecx, dword ptr [0x1237ec98] */
  ECX = (r32((uint32_t)(0x1237ec98)));
  /* 123627bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123627c1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123627c5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123627c8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_123627ce:;
  /* 123627ce cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123627d5 je 0x123627f8 */
  if (C.zf) goto L_123627f8;
  /* 123627d7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 123627dd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123627e0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123627e3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 123627ea lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 123627ee mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 123627f4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123627f6 jmp 0x123627fa */
  goto L_123627fa;
L_123627f8:;
  /* 123627f8 jmp 0x123627ff */
  goto L_123627ff;
L_123627fa:;
  /* 123627fa jmp 0x12362745 */
  goto L_12362745;
L_123627ff:;
  /* 123627ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362801 jmp 0x12362806 */
  goto L_12362806;
L_12362803:;
  /* 12362803 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12362806:;
  /* 12362806 mov esp, ebp */
  ESP = (EBP);
  /* 12362808 pop ebp */
  EBP = (pop32());
  /* 12362809 ret  */
  ESPCHK(0x12362580u, _esp0);
  ESP += 4; return;
}

/* FUN_10012810 @ 0x12362810 (10 bytes, 5 insns) */
void f_12362810(void) {
  FTRACE(0x12362810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12362810 push ebp */
  push32((uint32_t)(EBP));
  /* 12362811 mov ebp, esp */
  EBP = (ESP);
  /* 12362813 mov eax, dword ptr [0x1237fd88] */
  EAX = (r32((uint32_t)(0x1237fd88)));
  /* 12362818 pop ebp */
  EBP = (pop32());
  /* 12362819 ret  */
  ESPCHK(0x12362810u, _esp0);
  ESP += 4; return;
}

/* FUN_10012820 @ 0x12362820 (575 bytes, 196 insns) */
void f_12362820(void) {
  FTRACE(0x12362820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12362820 push ebp */
  push32((uint32_t)(EBP));
  /* 12362821 mov ebp, esp */
  EBP = (ESP);
  /* 12362823 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12362825 push 0x1237c998 */
  push32((uint32_t)(0x1237c998u));
  /* 1236282a push 0x1235d4c8 */
  push32((uint32_t)(0x1235d4c8u));
  /* 1236282f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12362835 push eax */
  push32((uint32_t)(EAX));
  /* 12362836 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1236283d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362840 push ebx */
  push32((uint32_t)(EBX));
  /* 12362841 push esi */
  push32((uint32_t)(ESI));
  /* 12362842 push edi */
  push32((uint32_t)(EDI));
  /* 12362843 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12362846 cmp dword ptr [0x123807f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236284d jne 0x1236289e */
  if (!C.zf) goto L_1236289e;
  /* 1236284f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12362852 push eax */
  push32((uint32_t)(EAX));
  /* 12362853 push 1 */
  push32((uint32_t)(0x1u));
  /* 12362855 push 0x1237c0c8 */
  push32((uint32_t)(0x1237c0c8u));
  /* 1236285a push 1 */
  push32((uint32_t)(0x1u));
  /* 1236285c call dword ptr [0x123832a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832a8))), 0x12362862u);
  /* 12362862 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12362864 je 0x12362872 */
  if (C.zf) goto L_12362872;
  /* 12362866 mov dword ptr [0x123807f4], 1 */
  w32((uint32_t)(0x123807f4), (0x1u));
  /* 12362870 jmp 0x1236289e */
  goto L_1236289e;
L_12362872:;
  /* 12362872 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12362875 push ecx */
  push32((uint32_t)(ECX));
  /* 12362876 push 1 */
  push32((uint32_t)(0x1u));
  /* 12362878 push 0x1237c0c4 */
  push32((uint32_t)(0x1237c0c4u));
  /* 1236287d push 1 */
  push32((uint32_t)(0x1u));
  /* 1236287f push 0 */
  push32((uint32_t)(0x0u));
  /* 12362881 call dword ptr [0x1238330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238330c))), 0x12362887u);
  /* 12362887 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12362889 je 0x12362897 */
  if (C.zf) goto L_12362897;
  /* 1236288b mov dword ptr [0x123807f4], 2 */
  w32((uint32_t)(0x123807f4), (0x2u));
  /* 12362895 jmp 0x1236289e */
  goto L_1236289e;
L_12362897:;
  /* 12362897 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362899 jmp 0x12362a79 */
  goto L_12362a79;
L_1236289e:;
  /* 1236289e cmp dword ptr [0x123807f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123807f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123628a5 jne 0x123628c2 */
  if (!C.zf) goto L_123628c2;
  /* 123628a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123628aa push edx */
  push32((uint32_t)(EDX));
  /* 123628ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123628ae push eax */
  push32((uint32_t)(EAX));
  /* 123628af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123628b2 push ecx */
  push32((uint32_t)(ECX));
  /* 123628b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123628b6 push edx */
  push32((uint32_t)(EDX));
  /* 123628b7 call dword ptr [0x123832a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832a8))), 0x123628bdu);
  /* 123628bd jmp 0x12362a79 */
  goto L_12362a79;
L_123628c2:;
  /* 123628c2 cmp dword ptr [0x123807f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123807f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123628c9 jne 0x12362a77 */
  if (!C.zf) goto L_12362a77;
  /* 123628cf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123628d3 jne 0x123628dd */
  if (!C.zf) goto L_123628dd;
  /* 123628d5 mov eax, dword ptr [0x12380768] */
  EAX = (r32((uint32_t)(0x12380768)));
  /* 123628da mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_123628dd:;
  /* 123628dd push 0 */
  push32((uint32_t)(0x0u));
  /* 123628df push 0 */
  push32((uint32_t)(0x0u));
  /* 123628e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123628e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123628e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123628e8 push ecx */
  push32((uint32_t)(ECX));
  /* 123628e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123628ec push edx */
  push32((uint32_t)(EDX));
  /* 123628ed push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123628f2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123628f5 push eax */
  push32((uint32_t)(EAX));
  /* 123628f6 call dword ptr [0x12383328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383328))), 0x123628fcu);
  /* 123628fc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123628ff cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362903 jne 0x1236290c */
  if (!C.zf) goto L_1236290c;
  /* 12362905 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362907 jmp 0x12362a79 */
  goto L_12362a79;
L_1236290c:;
  /* 1236290c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12362913 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12362916 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362919 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1236291b call 0x12357560 */
  push32(0x12362920u); f_12357560();
  /* 12362920 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12362923 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12362926 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12362929 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1236292c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1236292f push edx */
  push32((uint32_t)(EDX));
  /* 12362930 push 0 */
  push32((uint32_t)(0x0u));
  /* 12362932 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12362935 push eax */
  push32((uint32_t)(EAX));
  /* 12362936 call 0x12358130 */
  push32(0x1236293bu); f_12358130();
  /* 1236293b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236293e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12362945 jmp 0x1236295e */
  goto L_1236295e;
  /* 12362947 mov eax, 1 */
  EAX = (0x1u);
  /* 1236294c ret  */
  ESPCHK(0x12362820u, _esp0);
  ESP += 4; return;
  /* 1236294d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12362950 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12362957 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1236295e:;
  /* 1236295e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362962 jne 0x1236296b */
  if (!C.zf) goto L_1236296b;
  /* 12362964 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362966 jmp 0x12362a79 */
  goto L_12362a79;
L_1236296b:;
  /* 1236296b push 0 */
  push32((uint32_t)(0x0u));
  /* 1236296d push 0 */
  push32((uint32_t)(0x0u));
  /* 1236296f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12362972 push ecx */
  push32((uint32_t)(ECX));
  /* 12362973 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12362976 push edx */
  push32((uint32_t)(EDX));
  /* 12362977 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1236297a push eax */
  push32((uint32_t)(EAX));
  /* 1236297b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1236297e push ecx */
  push32((uint32_t)(ECX));
  /* 1236297f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12362984 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12362987 push edx */
  push32((uint32_t)(EDX));
  /* 12362988 call dword ptr [0x12383328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383328))), 0x1236298eu);
  /* 1236298e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12362990 jne 0x12362999 */
  if (!C.zf) goto L_12362999;
  /* 12362992 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362994 jmp 0x12362a79 */
  goto L_12362a79;
L_12362999:;
  /* 12362999 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123629a0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123629a3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 123629a7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123629aa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123629ac call 0x12357560 */
  push32(0x123629b1u); f_12357560();
  /* 123629b1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 123629b4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123629b7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 123629ba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 123629bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123629c4 jmp 0x123629dd */
  goto L_123629dd;
  /* 123629c6 mov eax, 1 */
  EAX = (0x1u);
  /* 123629cb ret  */
  ESPCHK(0x12362820u, _esp0);
  ESP += 4; return;
  /* 123629cc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123629cf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 123629d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123629dd:;
  /* 123629dd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123629e1 jne 0x123629ea */
  if (!C.zf) goto L_123629ea;
  /* 123629e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123629e5 jmp 0x12362a79 */
  goto L_12362a79;
L_123629ea:;
  /* 123629ea cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123629ee jne 0x123629f9 */
  if (!C.zf) goto L_123629f9;
  /* 123629f0 mov edx, dword ptr [0x12380758] */
  EDX = (r32((uint32_t)(0x12380758)));
  /* 123629f6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_123629f9:;
  /* 123629f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123629fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123629ff mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12362a05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12362a08 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12362a0b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12362a12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12362a15 push ecx */
  push32((uint32_t)(ECX));
  /* 12362a16 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12362a19 push edx */
  push32((uint32_t)(EDX));
  /* 12362a1a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12362a1d push eax */
  push32((uint32_t)(EAX));
  /* 12362a1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362a21 push ecx */
  push32((uint32_t)(ECX));
  /* 12362a22 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12362a25 push edx */
  push32((uint32_t)(EDX));
  /* 12362a26 call dword ptr [0x1238330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238330c))), 0x12362a2cu);
  /* 12362a2c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12362a2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12362a32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12362a35 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12362a37 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12362a3c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362a42 je 0x12362a58 */
  if (C.zf) goto L_12362a58;
  /* 12362a44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12362a47 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12362a4a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12362a4c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12362a50 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362a56 je 0x12362a5c */
  if (C.zf) goto L_12362a5c;
L_12362a58:;
  /* 12362a58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362a5a jmp 0x12362a79 */
  goto L_12362a79;
L_12362a5c:;
  /* 12362a5c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12362a5f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12362a61 push eax */
  push32((uint32_t)(EAX));
  /* 12362a62 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12362a65 push ecx */
  push32((uint32_t)(ECX));
  /* 12362a66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12362a69 push edx */
  push32((uint32_t)(EDX));
  /* 12362a6a call 0x1235c2b0 */
  push32(0x12362a6fu); f_1235c2b0();
  /* 12362a6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362a72 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12362a75 jmp 0x12362a79 */
  goto L_12362a79;
L_12362a77:;
  /* 12362a77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12362a79:;
  /* 12362a79 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12362a7c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12362a7f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12362a86 pop edi */
  EDI = (pop32());
  /* 12362a87 pop esi */
  ESI = (pop32());
  /* 12362a88 pop ebx */
  EBX = (pop32());
  /* 12362a89 mov esp, ebp */
  ESP = (EBP);
  /* 12362a8b pop ebp */
  EBP = (pop32());
  /* 12362a8c ret  */
  ESPCHK(0x12362820u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a90 @ 0x12362a90 (208 bytes, 85 insns) */
void f_12362a90(void) {
  FTRACE(0x12362a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12362a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12362a91 mov ebp, esp */
  EBP = (ESP);
  /* 12362a93 push edi */
  push32((uint32_t)(EDI));
  /* 12362a94 push esi */
  push32((uint32_t)(ESI));
  /* 12362a95 push ebx */
  push32((uint32_t)(EBX));
  /* 12362a96 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12362a99 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12362a9c lea eax, [0x12380750] */
  EAX = ((uint32_t)(0x12380750));
  /* 12362aa2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362aa6 jne 0x12362ae3 */
  if (!C.zf) goto L_12362ae3;
  /* 12362aa8 mov al, 0xff */
  AL = (0xffu);
  /* 12362aaa mov edi, edi */
  EDI = (EDI);
L_12362aac:;
  /* 12362aac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12362aae je 0x12362ade */
  if (C.zf) goto L_12362ade;
  /* 12362ab0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12362ab2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12362ab3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12362ab5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12362ab6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12362ab8 je 0x12362aac */
  if (C.zf) goto L_12362aac;
  /* 12362aba sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12362abc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12362abe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12362ac0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12362ac3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12362ac5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12362ac7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12362ac9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12362acb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12362acd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12362acf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12362ad2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12362ad4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12362ad6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12362ad8 je 0x12362aac */
  if (C.zf) goto L_12362aac;
  /* 12362ada sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12362adc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12362ade:;
  /* 12362ade movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12362ae1 jmp 0x12362b5b */
  goto L_12362b5b;
L_12362ae3:;
  /* 12362ae3 lock inc dword ptr [0x123808e4] */
  x86_unimpl("lock inc @ 0x12362ae3");
  /* 12362aea cmp dword ptr [0x123808d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362af1 jg 0x12362af7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12362af7;
  /* 12362af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12362af5 jmp 0x12362b0c */
  goto L_12362b0c;
L_12362af7:;
  /* 12362af7 lock dec dword ptr [0x123808e4] */
  x86_unimpl("lock dec @ 0x12362af7");
  /* 12362afe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12362b00 call 0x12357dc0 */
  push32(0x12362b05u); f_12357dc0();
  /* 12362b05 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12362b0c:;
  /* 12362b0c mov eax, 0xff */
  EAX = (0xffu);
  /* 12362b11 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12362b13 nop  */
  /* nop */
L_12362b14:;
  /* 12362b14 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12362b16 je 0x12362b3f */
  if (C.zf) goto L_12362b3f;
  /* 12362b18 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12362b1a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12362b1b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12362b1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12362b1e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12362b20 je 0x12362b14 */
  if (C.zf) goto L_12362b14;
  /* 12362b22 push eax */
  push32((uint32_t)(EAX));
  /* 12362b23 push ebx */
  push32((uint32_t)(EBX));
  /* 12362b24 call 0x12363c00 */
  push32(0x12362b29u); f_12363c00();
  /* 12362b29 mov ebx, eax */
  EBX = (EAX);
  /* 12362b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362b2e call 0x12363c00 */
  push32(0x12362b33u); f_12363c00();
  /* 12362b33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362b36 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12362b38 je 0x12362b14 */
  if (C.zf) goto L_12362b14;
  /* 12362b3a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12362b3c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12362b3f:;
  /* 12362b3f mov ebx, eax */
  EBX = (EAX);
  /* 12362b41 pop eax */
  EAX = (pop32());
  /* 12362b42 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362b44 jne 0x12362b4f */
  if (!C.zf) goto L_12362b4f;
  /* 12362b46 lock dec dword ptr [0x123808e4] */
  x86_unimpl("lock dec @ 0x12362b46");
  /* 12362b4d jmp 0x12362b59 */
  goto L_12362b59;
L_12362b4f:;
  /* 12362b4f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12362b51 call 0x12357e60 */
  push32(0x12362b56u); f_12357e60();
  /* 12362b56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12362b59:;
  /* 12362b59 mov eax, ebx */
  EAX = (EBX);
L_12362b5b:;
  /* 12362b5b pop ebx */
  EBX = (pop32());
  /* 12362b5c pop esi */
  ESI = (pop32());
  /* 12362b5d pop edi */
  EDI = (pop32());
  /* 12362b5e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12362b5f ret  */
  ESPCHK(0x12362a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b60 @ 0x12362b60 (257 bytes, 103 insns) */
void f_12362b60(void) {
  FTRACE(0x12362b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12362b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12362b61 mov ebp, esp */
  EBP = (ESP);
  /* 12362b63 push edi */
  push32((uint32_t)(EDI));
  /* 12362b64 push esi */
  push32((uint32_t)(ESI));
  /* 12362b65 push ebx */
  push32((uint32_t)(EBX));
  /* 12362b66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12362b69 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12362b6b je 0x12362c5a */
  if (C.zf) goto L_12362c5a;
  /* 12362b71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12362b74 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12362b77 lea eax, [0x12380750] */
  EAX = ((uint32_t)(0x12380750));
  /* 12362b7d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362b81 jne 0x12362bd1 */
  if (!C.zf) goto L_12362bd1;
  /* 12362b83 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12362b85 mov bl, 0x5a */
  BL = (0x5au);
  /* 12362b87 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12362b89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12362b8c:;
  /* 12362b8c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12362b8e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12362b90 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12362b92 je 0x12362bb5 */
  if (C.zf) goto L_12362bb5;
  /* 12362b94 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12362b96 je 0x12362bb5 */
  if (C.zf) goto L_12362bb5;
  /* 12362b98 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12362b99 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12362b9a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12362b9c jb 0x12362ba4 */
  if (C.cf) goto L_12362ba4;
  /* 12362b9e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12362ba0 ja 0x12362ba4 */
  if ((!C.cf&&!C.zf)) goto L_12362ba4;
  /* 12362ba2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12362ba4:;
  /* 12362ba4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12362ba6 jb 0x12362bae */
  if (C.cf) goto L_12362bae;
  /* 12362ba8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12362baa ja 0x12362bae */
  if ((!C.cf&&!C.zf)) goto L_12362bae;
  /* 12362bac add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12362bae:;
  /* 12362bae cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12362bb0 jne 0x12362bbf */
  if (!C.zf) goto L_12362bbf;
  /* 12362bb2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12362bb3 jne 0x12362b8c */
  if (!C.zf) goto L_12362b8c;
L_12362bb5:;
  /* 12362bb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12362bb7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12362bb9 je 0x12362c5a */
  if (C.zf) goto L_12362c5a;
L_12362bbf:;
  /* 12362bbf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12362bc4 jb 0x12362c5a */
  if (C.cf) goto L_12362c5a;
  /* 12362bca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12362bcc jmp 0x12362c5a */
  goto L_12362c5a;
L_12362bd1:;
  /* 12362bd1 lock inc dword ptr [0x123808e4] */
  x86_unimpl("lock inc @ 0x12362bd1");
  /* 12362bd8 cmp dword ptr [0x123808d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362bdf jg 0x12362be5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12362be5;
  /* 12362be1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12362be3 jmp 0x12362bfe */
  goto L_12362bfe;
L_12362be5:;
  /* 12362be5 lock dec dword ptr [0x123808e4] */
  x86_unimpl("lock dec @ 0x12362be5");
  /* 12362bec mov ebx, ecx */
  EBX = (ECX);
  /* 12362bee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12362bf0 call 0x12357dc0 */
  push32(0x12362bf5u); f_12357dc0();
  /* 12362bf5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12362bfc mov ecx, ebx */
  ECX = (EBX);
L_12362bfe:;
  /* 12362bfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362c00 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12362c02 mov edi, edi */
  EDI = (EDI);
L_12362c04:;
  /* 12362c04 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12362c06 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362c08 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12362c0a je 0x12362c2f */
  if (C.zf) goto L_12362c2f;
  /* 12362c0c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12362c0e je 0x12362c2f */
  if (C.zf) goto L_12362c2f;
  /* 12362c10 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12362c11 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12362c12 push ecx */
  push32((uint32_t)(ECX));
  /* 12362c13 push eax */
  push32((uint32_t)(EAX));
  /* 12362c14 push ebx */
  push32((uint32_t)(EBX));
  /* 12362c15 call 0x12363c00 */
  push32(0x12362c1au); f_12363c00();
  /* 12362c1a mov ebx, eax */
  EBX = (EAX);
  /* 12362c1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362c1f call 0x12363c00 */
  push32(0x12362c24u); f_12363c00();
  /* 12362c24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362c27 pop ecx */
  ECX = (pop32());
  /* 12362c28 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362c2a jne 0x12362c35 */
  if (!C.zf) goto L_12362c35;
  /* 12362c2c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12362c2d jne 0x12362c04 */
  if (!C.zf) goto L_12362c04;
L_12362c2f:;
  /* 12362c2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12362c31 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362c33 je 0x12362c3e */
  if (C.zf) goto L_12362c3e;
L_12362c35:;
  /* 12362c35 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12362c3a jb 0x12362c3e */
  if (C.cf) goto L_12362c3e;
  /* 12362c3c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12362c3e:;
  /* 12362c3e pop eax */
  EAX = (pop32());
  /* 12362c3f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362c41 jne 0x12362c4c */
  if (!C.zf) goto L_12362c4c;
  /* 12362c43 lock dec dword ptr [0x123808e4] */
  x86_unimpl("lock dec @ 0x12362c43");
  /* 12362c4a jmp 0x12362c5a */
  goto L_12362c5a;
L_12362c4c:;
  /* 12362c4c mov ebx, ecx */
  EBX = (ECX);
  /* 12362c4e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12362c50 call 0x12357e60 */
  push32(0x12362c55u); f_12357e60();
  /* 12362c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362c58 mov ecx, ebx */
  ECX = (EBX);
L_12362c5a:;
  /* 12362c5a mov eax, ecx */
  EAX = (ECX);
  /* 12362c5c pop ebx */
  EBX = (pop32());
  /* 12362c5d pop esi */
  ESI = (pop32());
  /* 12362c5e pop edi */
  EDI = (pop32());
  /* 12362c5f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12362c60 ret  */
  ESPCHK(0x12362b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c70 @ 0x12362c70 (255 bytes, 88 insns) */
void f_12362c70(void) {
  FTRACE(0x12362c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12362c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12362c71 mov ebp, esp */
  EBP = (ESP);
  /* 12362c73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12362c76:;
  /* 12362c76 cmp dword ptr [0x1237eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1237eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362c7d jle 0x12362c96 */
  if ((C.zf||C.sf!=C.of)) goto L_12362c96;
  /* 12362c7f push 8 */
  push32((uint32_t)(0x8u));
  /* 12362c81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362c84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12362c86 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12362c88 push ecx */
  push32((uint32_t)(ECX));
  /* 12362c89 call 0x1235a3d0 */
  push32(0x12362c8eu); f_1235a3d0();
  /* 12362c8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362c91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12362c94 jmp 0x12362caf */
  goto L_12362caf;
L_12362c96:;
  /* 12362c96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362c99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362c9b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12362c9d mov ecx, dword ptr [0x1237ec98] */
  ECX = (r32((uint32_t)(0x1237ec98)));
  /* 12362ca3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12362ca5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12362ca9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12362cac mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12362caf:;
  /* 12362caf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362cb3 je 0x12362cc0 */
  if (C.zf) goto L_12362cc0;
  /* 12362cb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362cb8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362cbb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12362cbe jmp 0x12362c76 */
  goto L_12362c76;
L_12362cc0:;
  /* 12362cc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362cc3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12362cc5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12362cc7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12362cca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362ccd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362cd0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12362cd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12362cd6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12362cd9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362cdd je 0x12362ce5 */
  if (C.zf) goto L_12362ce5;
  /* 12362cdf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362ce3 jne 0x12362cf8 */
  if (!C.zf) goto L_12362cf8;
L_12362ce5:;
  /* 12362ce5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362ce8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362cea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12362cec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12362cef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362cf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362cf5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12362cf8:;
  /* 12362cf8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12362cff:;
  /* 12362cff cmp dword ptr [0x1237eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1237eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362d06 jle 0x12362d1b */
  if ((C.zf||C.sf!=C.of)) goto L_12362d1b;
  /* 12362d08 push 4 */
  push32((uint32_t)(0x4u));
  /* 12362d0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12362d0d push edx */
  push32((uint32_t)(EDX));
  /* 12362d0e call 0x1235a3d0 */
  push32(0x12362d13u); f_1235a3d0();
  /* 12362d13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362d16 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12362d19 jmp 0x12362d30 */
  goto L_12362d30;
L_12362d1b:;
  /* 12362d1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12362d1e mov ecx, dword ptr [0x1237ec98] */
  ECX = (r32((uint32_t)(0x1237ec98)));
  /* 12362d24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12362d26 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12362d2a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12362d2d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12362d30:;
  /* 12362d30 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362d34 je 0x12362d5b */
  if (C.zf) goto L_12362d5b;
  /* 12362d36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12362d39 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12362d3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12362d3f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12362d43 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12362d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362d49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12362d4b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12362d4d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12362d50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362d53 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362d56 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12362d59 jmp 0x12362cff */
  goto L_12362cff;
L_12362d5b:;
  /* 12362d5b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362d5f jne 0x12362d68 */
  if (!C.zf) goto L_12362d68;
  /* 12362d61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12362d64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12362d66 jmp 0x12362d6b */
  goto L_12362d6b;
L_12362d68:;
  /* 12362d68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12362d6b:;
  /* 12362d6b mov esp, ebp */
  ESP = (EBP);
  /* 12362d6d pop ebp */
  EBP = (pop32());
  /* 12362d6e ret  */
  ESPCHK(0x12362c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d70 @ 0x12362d70 (17 bytes, 8 insns) */
void f_12362d70(void) {
  FTRACE(0x12362d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12362d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12362d71 mov ebp, esp */
  EBP = (ESP);
  /* 12362d73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362d76 push eax */
  push32((uint32_t)(EAX));
  /* 12362d77 call 0x12362c70 */
  push32(0x12362d7cu); f_12362c70();
  /* 12362d7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362d7f pop ebp */
  EBP = (pop32());
  /* 12362d80 ret  */
  ESPCHK(0x12362d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d90 @ 0x12362d90 (297 bytes, 106 insns) */
void f_12362d90(void) {
  FTRACE(0x12362d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12362d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12362d91 mov ebp, esp */
  EBP = (ESP);
  /* 12362d93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12362d96 push esi */
  push32((uint32_t)(ESI));
L_12362d97:;
  /* 12362d97 cmp dword ptr [0x1237eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1237eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362d9e jle 0x12362db7 */
  if ((C.zf||C.sf!=C.of)) goto L_12362db7;
  /* 12362da0 push 8 */
  push32((uint32_t)(0x8u));
  /* 12362da2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362da5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12362da7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12362da9 push ecx */
  push32((uint32_t)(ECX));
  /* 12362daa call 0x1235a3d0 */
  push32(0x12362dafu); f_1235a3d0();
  /* 12362daf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362db2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12362db5 jmp 0x12362dd0 */
  goto L_12362dd0;
L_12362db7:;
  /* 12362db7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362dba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362dbc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12362dbe mov ecx, dword ptr [0x1237ec98] */
  ECX = (r32((uint32_t)(0x1237ec98)));
  /* 12362dc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12362dc6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12362dca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12362dcd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12362dd0:;
  /* 12362dd0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362dd4 je 0x12362de1 */
  if (C.zf) goto L_12362de1;
  /* 12362dd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362dd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362ddc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12362ddf jmp 0x12362d97 */
  goto L_12362d97;
L_12362de1:;
  /* 12362de1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362de4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12362de6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12362de8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12362deb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362dee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362df1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12362df4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12362df7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12362dfa cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362dfe je 0x12362e06 */
  if (C.zf) goto L_12362e06;
  /* 12362e00 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362e04 jne 0x12362e19 */
  if (!C.zf) goto L_12362e19;
L_12362e06:;
  /* 12362e06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362e09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362e0b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12362e0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12362e10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362e13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362e16 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12362e19:;
  /* 12362e19 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12362e20 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12362e27:;
  /* 12362e27 cmp dword ptr [0x1237eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1237eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362e2e jle 0x12362e43 */
  if ((C.zf||C.sf!=C.of)) goto L_12362e43;
  /* 12362e30 push 4 */
  push32((uint32_t)(0x4u));
  /* 12362e32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12362e35 push edx */
  push32((uint32_t)(EDX));
  /* 12362e36 call 0x1235a3d0 */
  push32(0x12362e3bu); f_1235a3d0();
  /* 12362e3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362e3e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12362e41 jmp 0x12362e58 */
  goto L_12362e58;
L_12362e43:;
  /* 12362e43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12362e46 mov ecx, dword ptr [0x1237ec98] */
  ECX = (r32((uint32_t)(0x1237ec98)));
  /* 12362e4c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12362e4e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12362e52 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12362e55 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12362e58:;
  /* 12362e58 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362e5c je 0x12362e99 */
  if (C.zf) goto L_12362e99;
  /* 12362e5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12362e60 push 0xa */
  push32((uint32_t)(0xau));
  /* 12362e62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12362e65 push eax */
  push32((uint32_t)(EAX));
  /* 12362e66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12362e69 push ecx */
  push32((uint32_t)(ECX));
  /* 12362e6a call 0x12363d30 */
  push32(0x12362e6fu); f_12363d30();
  /* 12362e6f mov ecx, eax */
  ECX = (EAX);
  /* 12362e71 mov esi, edx */
  ESI = (EDX);
  /* 12362e73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12362e76 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12362e79 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12362e7a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362e7c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12362e7e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12362e81 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12362e84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362e87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12362e89 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12362e8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12362e8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12362e91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362e94 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12362e97 jmp 0x12362e27 */
  goto L_12362e27;
L_12362e99:;
  /* 12362e99 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362e9d jne 0x12362eae */
  if (!C.zf) goto L_12362eae;
  /* 12362e9f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12362ea2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12362ea4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12362ea7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362eaa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12362eac jmp 0x12362eb4 */
  goto L_12362eb4;
L_12362eae:;
  /* 12362eae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12362eb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12362eb4:;
  /* 12362eb4 pop esi */
  ESI = (pop32());
  /* 12362eb5 mov esp, ebp */
  ESP = (EBP);
  /* 12362eb7 pop ebp */
  EBP = (pop32());
  /* 12362eb8 ret  */
  ESPCHK(0x12362d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ec0 @ 0x12362ec0 (61 bytes, 18 insns) */
void f_12362ec0(void) {
  FTRACE(0x12362ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12362ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12362ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12362ec3 cmp dword ptr [0x123808b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362eca jne 0x12362efb */
  if (!C.zf) goto L_12362efb;
  /* 12362ecc push 0xb */
  push32((uint32_t)(0xbu));
  /* 12362ece call 0x12357dc0 */
  push32(0x12362ed3u); f_12357dc0();
  /* 12362ed3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362ed6 cmp dword ptr [0x123808b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362edd jne 0x12362ef1 */
  if (!C.zf) goto L_12362ef1;
  /* 12362edf call 0x12362f20 */
  push32(0x12362ee4u); f_12362f20();
  /* 12362ee4 mov eax, dword ptr [0x123808b0] */
  EAX = (r32((uint32_t)(0x123808b0)));
  /* 12362ee9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362eec mov dword ptr [0x123808b0], eax */
  w32((uint32_t)(0x123808b0), (EAX));
L_12362ef1:;
  /* 12362ef1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12362ef3 call 0x12357e60 */
  push32(0x12362ef8u); f_12357e60();
  /* 12362ef8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12362efb:;
  /* 12362efb pop ebp */
  EBP = (pop32());
  /* 12362efc ret  */
  ESPCHK(0x12362ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f00 @ 0x12362f00 (30 bytes, 11 insns) */
void f_12362f00(void) {
  FTRACE(0x12362f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12362f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12362f01 mov ebp, esp */
  EBP = (ESP);
  /* 12362f03 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12362f05 call 0x12357dc0 */
  push32(0x12362f0au); f_12357dc0();
  /* 12362f0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362f0d call 0x12362f20 */
  push32(0x12362f12u); f_12362f20();
  /* 12362f12 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12362f14 call 0x12357e60 */
  push32(0x12362f19u); f_12357e60();
  /* 12362f19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362f1c pop ebp */
  EBP = (pop32());
  /* 12362f1d ret  */
  ESPCHK(0x12362f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f20 @ 0x12362f20 (939 bytes, 266 insns) */
void f_12362f20(void) {
  FTRACE(0x12362f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12362f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12362f21 mov ebp, esp */
  EBP = (ESP);
  /* 12362f23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12362f26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12362f2d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12362f2f call 0x12357dc0 */
  push32(0x12362f34u); f_12357dc0();
  /* 12362f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362f37 mov dword ptr [0x123807f8], 0 */
  w32((uint32_t)(0x123807f8), (0x0u));
  /* 12362f41 mov dword ptr [0x1237fe38], 0xffffffff */
  w32((uint32_t)(0x1237fe38), (0xffffffffu));
  /* 12362f4b mov eax, dword ptr [0x1237fe38] */
  EAX = (r32((uint32_t)(0x1237fe38)));
  /* 12362f50 mov dword ptr [0x1237fe28], eax */
  w32((uint32_t)(0x1237fe28), (EAX));
  /* 12362f55 push 0x1237c9f8 */
  push32((uint32_t)(0x1237c9f8u));
  /* 12362f5a call 0x12363da0 */
  push32(0x12362f5fu); f_12363da0();
  /* 12362f5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362f62 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12362f65 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362f69 jne 0x123630a3 */
  if (!C.zf) goto L_123630a3;
  /* 12362f6f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12362f71 call 0x12357e60 */
  push32(0x12362f76u); f_12357e60();
  /* 12362f76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12362f79 push 0x12380800 */
  push32((uint32_t)(0x12380800u));
  /* 12362f7e call dword ptr [0x1238326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238326c))), 0x12362f84u);
  /* 12362f84 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362f87 je 0x1236309e */
  if (C.zf) goto L_1236309e;
  /* 12362f8d mov dword ptr [0x123807f8], 1 */
  w32((uint32_t)(0x123807f8), (0x1u));
  /* 12362f97 mov ecx, dword ptr [0x12380800] */
  ECX = (r32((uint32_t)(0x12380800)));
  /* 12362f9d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12362fa0 mov dword ptr [0x1237fd90], ecx */
  w32((uint32_t)(0x1237fd90), (ECX));
  /* 12362fa6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12362fa8 mov dx, word ptr [0x12380846] */
  DX = (r16((uint32_t)(0x12380846)));
  /* 12362faf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12362fb1 je 0x12362fc9 */
  if (C.zf) goto L_12362fc9;
  /* 12362fb3 mov eax, dword ptr [0x12380854] */
  EAX = (r32((uint32_t)(0x12380854)));
  /* 12362fb8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12362fbb mov ecx, dword ptr [0x1237fd90] */
  ECX = (r32((uint32_t)(0x1237fd90)));
  /* 12362fc1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12362fc3 mov dword ptr [0x1237fd90], ecx */
  w32((uint32_t)(0x1237fd90), (ECX));
L_12362fc9:;
  /* 12362fc9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12362fcb mov dx, word ptr [0x1238089a] */
  DX = (r16((uint32_t)(0x1238089a)));
  /* 12362fd2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12362fd4 je 0x12362ffe */
  if (C.zf) goto L_12362ffe;
  /* 12362fd6 cmp dword ptr [0x123808a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12362fdd je 0x12362ffe */
  if (C.zf) goto L_12362ffe;
  /* 12362fdf mov dword ptr [0x1237fd94], 1 */
  w32((uint32_t)(0x1237fd94), (0x1u));
  /* 12362fe9 mov eax, dword ptr [0x123808a8] */
  EAX = (r32((uint32_t)(0x123808a8)));
  /* 12362fee sub eax, dword ptr [0x12380854] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12380854))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12362ff4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12362ff7 mov dword ptr [0x1237fd98], eax */
  w32((uint32_t)(0x1237fd98), (EAX));
  /* 12362ffc jmp 0x12363012 */
  goto L_12363012;
L_12362ffe:;
  /* 12362ffe mov dword ptr [0x1237fd94], 0 */
  w32((uint32_t)(0x1237fd94), (0x0u));
  /* 12363008 mov dword ptr [0x1237fd98], 0 */
  w32((uint32_t)(0x1237fd98), (0x0u));
L_12363012:;
  /* 12363012 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12363015 push ecx */
  push32((uint32_t)(ECX));
  /* 12363016 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363018 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1236301a mov edx, dword ptr [0x1237fe1c] */
  EDX = (r32((uint32_t)(0x1237fe1c)));
  /* 12363020 push edx */
  push32((uint32_t)(EDX));
  /* 12363021 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12363023 push 0x12380804 */
  push32((uint32_t)(0x12380804u));
  /* 12363028 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1236302d mov eax, dword ptr [0x12380768] */
  EAX = (r32((uint32_t)(0x12380768)));
  /* 12363032 push eax */
  push32((uint32_t)(EAX));
  /* 12363033 call dword ptr [0x12383328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383328))), 0x12363039u);
  /* 12363039 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1236303b je 0x1236304f */
  if (C.zf) goto L_1236304f;
  /* 1236303d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363041 jne 0x1236304f */
  if (!C.zf) goto L_1236304f;
  /* 12363043 mov ecx, dword ptr [0x1237fe1c] */
  ECX = (r32((uint32_t)(0x1237fe1c)));
  /* 12363049 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1236304d jmp 0x12363058 */
  goto L_12363058;
L_1236304f:;
  /* 1236304f mov edx, dword ptr [0x1237fe1c] */
  EDX = (r32((uint32_t)(0x1237fe1c)));
  /* 12363055 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12363058:;
  /* 12363058 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1236305b push eax */
  push32((uint32_t)(EAX));
  /* 1236305c push 0 */
  push32((uint32_t)(0x0u));
  /* 1236305e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12363060 mov ecx, dword ptr [0x1237fe20] */
  ECX = (r32((uint32_t)(0x1237fe20)));
  /* 12363066 push ecx */
  push32((uint32_t)(ECX));
  /* 12363067 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12363069 push 0x12380858 */
  push32((uint32_t)(0x12380858u));
  /* 1236306e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12363073 mov edx, dword ptr [0x12380768] */
  EDX = (r32((uint32_t)(0x12380768)));
  /* 12363079 push edx */
  push32((uint32_t)(EDX));
  /* 1236307a call dword ptr [0x12383328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383328))), 0x12363080u);
  /* 12363080 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12363082 je 0x12363095 */
  if (C.zf) goto L_12363095;
  /* 12363084 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363088 jne 0x12363095 */
  if (!C.zf) goto L_12363095;
  /* 1236308a mov eax, dword ptr [0x1237fe20] */
  EAX = (r32((uint32_t)(0x1237fe20)));
  /* 1236308f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12363093 jmp 0x1236309e */
  goto L_1236309e;
L_12363095:;
  /* 12363095 mov ecx, dword ptr [0x1237fe20] */
  ECX = (r32((uint32_t)(0x1237fe20)));
  /* 1236309b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1236309e:;
  /* 1236309e jmp 0x123632c7 */
  goto L_123632c7;
L_123630a3:;
  /* 123630a3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123630a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123630a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123630ab je 0x123630cd */
  if (C.zf) goto L_123630cd;
  /* 123630ad cmp dword ptr [0x123808ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123630b4 je 0x123630dc */
  if (C.zf) goto L_123630dc;
  /* 123630b6 mov ecx, dword ptr [0x123808ac] */
  ECX = (r32((uint32_t)(0x123808ac)));
  /* 123630bc push ecx */
  push32((uint32_t)(ECX));
  /* 123630bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123630c0 push edx */
  push32((uint32_t)(EDX));
  /* 123630c1 call 0x12360050 */
  push32(0x123630c6u); f_12360050();
  /* 123630c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123630c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123630cb jne 0x123630dc */
  if (!C.zf) goto L_123630dc;
L_123630cd:;
  /* 123630cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 123630cf call 0x12357e60 */
  push32(0x123630d4u); f_12357e60();
  /* 123630d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123630d7 jmp 0x123632c7 */
  goto L_123632c7;
L_123630dc:;
  /* 123630dc push 2 */
  push32((uint32_t)(0x2u));
  /* 123630de mov eax, dword ptr [0x123808ac] */
  EAX = (r32((uint32_t)(0x123808ac)));
  /* 123630e3 push eax */
  push32((uint32_t)(EAX));
  /* 123630e4 call 0x12354e50 */
  push32(0x123630e9u); f_12354e50();
  /* 123630e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123630ec push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 123630f1 push 0x1237c9f0 */
  push32((uint32_t)(0x1237c9f0u));
  /* 123630f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123630f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123630fb push ecx */
  push32((uint32_t)(ECX));
  /* 123630fc call 0x123571f0 */
  push32(0x12363101u); f_123571f0();
  /* 12363101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363104 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363107 push eax */
  push32((uint32_t)(EAX));
  /* 12363108 call 0x123543c0 */
  push32(0x1236310du); f_123543c0();
  /* 1236310d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363110 mov dword ptr [0x123808ac], eax */
  w32((uint32_t)(0x123808ac), (EAX));
  /* 12363115 cmp dword ptr [0x123808ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236311c jne 0x1236312d */
  if (!C.zf) goto L_1236312d;
  /* 1236311e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12363120 call 0x12357e60 */
  push32(0x12363125u); f_12357e60();
  /* 12363125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363128 jmp 0x123632c7 */
  goto L_123632c7;
L_1236312d:;
  /* 1236312d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363130 push edx */
  push32((uint32_t)(EDX));
  /* 12363131 mov eax, dword ptr [0x123808ac] */
  EAX = (r32((uint32_t)(0x123808ac)));
  /* 12363136 push eax */
  push32((uint32_t)(EAX));
  /* 12363137 call 0x12357370 */
  push32(0x1236313cu); f_12357370();
  /* 1236313c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236313f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12363141 call 0x12357e60 */
  push32(0x12363146u); f_12357e60();
  /* 12363146 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363149 push 3 */
  push32((uint32_t)(0x3u));
  /* 1236314b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1236314e push ecx */
  push32((uint32_t)(ECX));
  /* 1236314f mov edx, dword ptr [0x1237fe1c] */
  EDX = (r32((uint32_t)(0x1237fe1c)));
  /* 12363155 push edx */
  push32((uint32_t)(EDX));
  /* 12363156 call 0x12357be0 */
  push32(0x1236315bu); f_12357be0();
  /* 1236315b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236315e mov eax, dword ptr [0x1237fe1c] */
  EAX = (r32((uint32_t)(0x1237fe1c)));
  /* 12363163 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12363167 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1236316a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236316d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12363170 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363173 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12363176 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363179 jne 0x1236318d */
  if (!C.zf) goto L_1236318d;
  /* 1236317b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1236317e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363181 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12363184 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363187 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236318a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1236318d:;
  /* 1236318d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363190 push eax */
  push32((uint32_t)(EAX));
  /* 12363191 call 0x12362c70 */
  push32(0x12363196u); f_12362c70();
  /* 12363196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363199 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1236319f mov dword ptr [0x1237fd90], eax */
  w32((uint32_t)(0x1237fd90), (EAX));
L_123631a4:;
  /* 123631a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123631a7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123631aa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123631ad je 0x123631c5 */
  if (C.zf) goto L_123631c5;
  /* 123631af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123631b2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123631b5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123631b8 jl 0x123631d0 */
  if ((C.sf!=C.of)) goto L_123631d0;
  /* 123631ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123631bd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123631c0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123631c3 jg 0x123631d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_123631d0;
L_123631c5:;
  /* 123631c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123631c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123631cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123631ce jmp 0x123631a4 */
  goto L_123631a4;
L_123631d0:;
  /* 123631d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123631d3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123631d6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123631d9 jne 0x12363275 */
  if (!C.zf) goto L_12363275;
  /* 123631df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123631e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123631e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123631e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123631eb push edx */
  push32((uint32_t)(EDX));
  /* 123631ec call 0x12362c70 */
  push32(0x123631f1u); f_12362c70();
  /* 123631f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123631f4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123631f7 mov ecx, dword ptr [0x1237fd90] */
  ECX = (r32((uint32_t)(0x1237fd90)));
  /* 123631fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123631ff mov dword ptr [0x1237fd90], ecx */
  w32((uint32_t)(0x1237fd90), (ECX));
L_12363205:;
  /* 12363205 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363208 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1236320b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236320e jl 0x12363226 */
  if ((C.sf!=C.of)) goto L_12363226;
  /* 12363210 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363213 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12363216 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363219 jg 0x12363226 */
  if ((!C.zf&&C.sf==C.of)) goto L_12363226;
  /* 1236321b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1236321e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363221 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12363224 jmp 0x12363205 */
  goto L_12363205;
L_12363226:;
  /* 12363226 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363229 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1236322c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236322f jne 0x12363275 */
  if (!C.zf) goto L_12363275;
  /* 12363231 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363234 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363237 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1236323a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1236323d push ecx */
  push32((uint32_t)(ECX));
  /* 1236323e call 0x12362c70 */
  push32(0x12363243u); f_12362c70();
  /* 12363243 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363246 mov edx, dword ptr [0x1237fd90] */
  EDX = (r32((uint32_t)(0x1237fd90)));
  /* 1236324c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236324e mov dword ptr [0x1237fd90], edx */
  w32((uint32_t)(0x1237fd90), (EDX));
L_12363254:;
  /* 12363254 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363257 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1236325a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236325d jl 0x12363275 */
  if ((C.sf!=C.of)) goto L_12363275;
  /* 1236325f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363262 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12363265 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363268 jg 0x12363275 */
  if ((!C.zf&&C.sf==C.of)) goto L_12363275;
  /* 1236326a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1236326d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363270 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12363273 jmp 0x12363254 */
  goto L_12363254;
L_12363275:;
  /* 12363275 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363279 je 0x12363289 */
  if (C.zf) goto L_12363289;
  /* 1236327b mov edx, dword ptr [0x1237fd90] */
  EDX = (r32((uint32_t)(0x1237fd90)));
  /* 12363281 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12363283 mov dword ptr [0x1237fd90], edx */
  w32((uint32_t)(0x1237fd90), (EDX));
L_12363289:;
  /* 12363289 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1236328c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1236328f mov dword ptr [0x1237fd94], ecx */
  w32((uint32_t)(0x1237fd94), (ECX));
  /* 12363295 cmp dword ptr [0x1237fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1237fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236329c je 0x123632be */
  if (C.zf) goto L_123632be;
  /* 1236329e push 3 */
  push32((uint32_t)(0x3u));
  /* 123632a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123632a3 push edx */
  push32((uint32_t)(EDX));
  /* 123632a4 mov eax, dword ptr [0x1237fe20] */
  EAX = (r32((uint32_t)(0x1237fe20)));
  /* 123632a9 push eax */
  push32((uint32_t)(EAX));
  /* 123632aa call 0x12357be0 */
  push32(0x123632afu); f_12357be0();
  /* 123632af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123632b2 mov ecx, dword ptr [0x1237fe20] */
  ECX = (r32((uint32_t)(0x1237fe20)));
  /* 123632b8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 123632bc jmp 0x123632c7 */
  goto L_123632c7;
L_123632be:;
  /* 123632be mov edx, dword ptr [0x1237fe20] */
  EDX = (r32((uint32_t)(0x1237fe20)));
  /* 123632c4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_123632c7:;
  /* 123632c7 mov esp, ebp */
  ESP = (EBP);
  /* 123632c9 pop ebp */
  EBP = (pop32());
  /* 123632ca ret  */
  ESPCHK(0x12362f20u, _esp0);
  ESP += 4; return;
}

/* FUN_100132d0 @ 0x123632d0 (46 bytes, 18 insns) */
void f_123632d0(void) {
  FTRACE(0x123632d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123632d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123632d1 mov ebp, esp */
  EBP = (ESP);
  /* 123632d3 push ecx */
  push32((uint32_t)(ECX));
  /* 123632d4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 123632d6 call 0x12357dc0 */
  push32(0x123632dbu); f_12357dc0();
  /* 123632db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123632de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123632e1 push eax */
  push32((uint32_t)(EAX));
  /* 123632e2 call 0x12363300 */
  push32(0x123632e7u); f_12363300();
  /* 123632e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123632ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123632ed push 0xb */
  push32((uint32_t)(0xbu));
  /* 123632ef call 0x12357e60 */
  push32(0x123632f4u); f_12357e60();
  /* 123632f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123632f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123632fa mov esp, ebp */
  ESP = (EBP);
  /* 123632fc pop ebp */
  EBP = (pop32());
  /* 123632fd ret  */
  ESPCHK(0x123632d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013300 @ 0x12363300 (762 bytes, 246 insns) */
void f_12363300(void) {
  FTRACE(0x12363300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12363300 push ebp */
  push32((uint32_t)(EBP));
  /* 12363301 mov ebp, esp */
  EBP = (ESP);
  /* 12363303 push ecx */
  push32((uint32_t)(ECX));
  /* 12363304 cmp dword ptr [0x1237fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1237fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236330b jne 0x12363314 */
  if (!C.zf) goto L_12363314;
  /* 1236330d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236330f jmp 0x123635f6 */
  goto L_123635f6;
L_12363314:;
  /* 12363314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363317 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1236331a cmp ecx, dword ptr [0x1237fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1237fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363320 jne 0x12363334 */
  if (!C.zf) goto L_12363334;
  /* 12363322 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363325 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12363328 cmp eax, dword ptr [0x1237fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1237fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236332e je 0x123634fb */
  if (C.zf) goto L_123634fb;
L_12363334:;
  /* 12363334 cmp dword ptr [0x123807f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123807f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236333b je 0x123634b5 */
  if (C.zf) goto L_123634b5;
  /* 12363341 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12363343 mov cx, word ptr [0x12380898] */
  CX = (r16((uint32_t)(0x12380898)));
  /* 1236334a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1236334c jne 0x123633a9 */
  if (!C.zf) goto L_123633a9;
  /* 1236334e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12363350 mov dx, word ptr [0x123808a6] */
  DX = (r16((uint32_t)(0x123808a6)));
  /* 12363357 push edx */
  push32((uint32_t)(EDX));
  /* 12363358 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236335a mov ax, word ptr [0x123808a4] */
  AX = (r16((uint32_t)(0x123808a4)));
  /* 12363360 push eax */
  push32((uint32_t)(EAX));
  /* 12363361 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12363363 mov cx, word ptr [0x123808a2] */
  CX = (r16((uint32_t)(0x123808a2)));
  /* 1236336a push ecx */
  push32((uint32_t)(ECX));
  /* 1236336b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1236336d mov dx, word ptr [0x123808a0] */
  DX = (r16((uint32_t)(0x123808a0)));
  /* 12363374 push edx */
  push32((uint32_t)(EDX));
  /* 12363375 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363377 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12363379 mov ax, word ptr [0x1238089c] */
  AX = (r16((uint32_t)(0x1238089c)));
  /* 1236337f push eax */
  push32((uint32_t)(EAX));
  /* 12363380 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12363382 mov cx, word ptr [0x1238089e] */
  CX = (r16((uint32_t)(0x1238089e)));
  /* 12363389 push ecx */
  push32((uint32_t)(ECX));
  /* 1236338a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1236338c mov dx, word ptr [0x1238089a] */
  DX = (r16((uint32_t)(0x1238089a)));
  /* 12363393 push edx */
  push32((uint32_t)(EDX));
  /* 12363394 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363397 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1236339a push ecx */
  push32((uint32_t)(ECX));
  /* 1236339b push 1 */
  push32((uint32_t)(0x1u));
  /* 1236339d push 1 */
  push32((uint32_t)(0x1u));
  /* 1236339f call 0x12363600 */
  push32(0x123633a4u); f_12363600();
  /* 123633a4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123633a7 jmp 0x123633fa */
  goto L_123633fa;
L_123633a9:;
  /* 123633a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123633ab mov dx, word ptr [0x123808a6] */
  DX = (r16((uint32_t)(0x123808a6)));
  /* 123633b2 push edx */
  push32((uint32_t)(EDX));
  /* 123633b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123633b5 mov ax, word ptr [0x123808a4] */
  AX = (r16((uint32_t)(0x123808a4)));
  /* 123633bb push eax */
  push32((uint32_t)(EAX));
  /* 123633bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123633be mov cx, word ptr [0x123808a2] */
  CX = (r16((uint32_t)(0x123808a2)));
  /* 123633c5 push ecx */
  push32((uint32_t)(ECX));
  /* 123633c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123633c8 mov dx, word ptr [0x123808a0] */
  DX = (r16((uint32_t)(0x123808a0)));
  /* 123633cf push edx */
  push32((uint32_t)(EDX));
  /* 123633d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123633d2 mov ax, word ptr [0x1238089e] */
  AX = (r16((uint32_t)(0x1238089e)));
  /* 123633d8 push eax */
  push32((uint32_t)(EAX));
  /* 123633d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123633db push 0 */
  push32((uint32_t)(0x0u));
  /* 123633dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123633df mov cx, word ptr [0x1238089a] */
  CX = (r16((uint32_t)(0x1238089a)));
  /* 123633e6 push ecx */
  push32((uint32_t)(ECX));
  /* 123633e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123633ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123633ed push eax */
  push32((uint32_t)(EAX));
  /* 123633ee push 0 */
  push32((uint32_t)(0x0u));
  /* 123633f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 123633f2 call 0x12363600 */
  push32(0x123633f7u); f_12363600();
  /* 123633f7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123633fa:;
  /* 123633fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123633fc mov cx, word ptr [0x12380844] */
  CX = (r16((uint32_t)(0x12380844)));
  /* 12363403 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12363405 jne 0x12363462 */
  if (!C.zf) goto L_12363462;
  /* 12363407 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12363409 mov dx, word ptr [0x12380852] */
  DX = (r16((uint32_t)(0x12380852)));
  /* 12363410 push edx */
  push32((uint32_t)(EDX));
  /* 12363411 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12363413 mov ax, word ptr [0x12380850] */
  AX = (r16((uint32_t)(0x12380850)));
  /* 12363419 push eax */
  push32((uint32_t)(EAX));
  /* 1236341a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1236341c mov cx, word ptr [0x1238084e] */
  CX = (r16((uint32_t)(0x1238084e)));
  /* 12363423 push ecx */
  push32((uint32_t)(ECX));
  /* 12363424 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12363426 mov dx, word ptr [0x1238084c] */
  DX = (r16((uint32_t)(0x1238084c)));
  /* 1236342d push edx */
  push32((uint32_t)(EDX));
  /* 1236342e push 0 */
  push32((uint32_t)(0x0u));
  /* 12363430 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12363432 mov ax, word ptr [0x12380848] */
  AX = (r16((uint32_t)(0x12380848)));
  /* 12363438 push eax */
  push32((uint32_t)(EAX));
  /* 12363439 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1236343b mov cx, word ptr [0x1238084a] */
  CX = (r16((uint32_t)(0x1238084a)));
  /* 12363442 push ecx */
  push32((uint32_t)(ECX));
  /* 12363443 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12363445 mov dx, word ptr [0x12380846] */
  DX = (r16((uint32_t)(0x12380846)));
  /* 1236344c push edx */
  push32((uint32_t)(EDX));
  /* 1236344d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363450 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12363453 push ecx */
  push32((uint32_t)(ECX));
  /* 12363454 push 1 */
  push32((uint32_t)(0x1u));
  /* 12363456 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363458 call 0x12363600 */
  push32(0x1236345du); f_12363600();
  /* 1236345d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363460 jmp 0x123634b3 */
  goto L_123634b3;
L_12363462:;
  /* 12363462 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12363464 mov dx, word ptr [0x12380852] */
  DX = (r16((uint32_t)(0x12380852)));
  /* 1236346b push edx */
  push32((uint32_t)(EDX));
  /* 1236346c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236346e mov ax, word ptr [0x12380850] */
  AX = (r16((uint32_t)(0x12380850)));
  /* 12363474 push eax */
  push32((uint32_t)(EAX));
  /* 12363475 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12363477 mov cx, word ptr [0x1238084e] */
  CX = (r16((uint32_t)(0x1238084e)));
  /* 1236347e push ecx */
  push32((uint32_t)(ECX));
  /* 1236347f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12363481 mov dx, word ptr [0x1238084c] */
  DX = (r16((uint32_t)(0x1238084c)));
  /* 12363488 push edx */
  push32((uint32_t)(EDX));
  /* 12363489 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236348b mov ax, word ptr [0x1238084a] */
  AX = (r16((uint32_t)(0x1238084a)));
  /* 12363491 push eax */
  push32((uint32_t)(EAX));
  /* 12363492 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363494 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363496 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12363498 mov cx, word ptr [0x12380846] */
  CX = (r16((uint32_t)(0x12380846)));
  /* 1236349f push ecx */
  push32((uint32_t)(ECX));
  /* 123634a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123634a3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123634a6 push eax */
  push32((uint32_t)(EAX));
  /* 123634a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123634a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123634ab call 0x12363600 */
  push32(0x123634b0u); f_12363600();
  /* 123634b0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123634b3:;
  /* 123634b3 jmp 0x123634fb */
  goto L_123634fb;
L_123634b5:;
  /* 123634b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123634b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123634b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123634bb push 2 */
  push32((uint32_t)(0x2u));
  /* 123634bd push 0 */
  push32((uint32_t)(0x0u));
  /* 123634bf push 0 */
  push32((uint32_t)(0x0u));
  /* 123634c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 123634c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 123634c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123634c8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 123634cb push edx */
  push32((uint32_t)(EDX));
  /* 123634cc push 1 */
  push32((uint32_t)(0x1u));
  /* 123634ce push 1 */
  push32((uint32_t)(0x1u));
  /* 123634d0 call 0x12363600 */
  push32(0x123634d5u); f_12363600();
  /* 123634d5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123634d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123634da push 0 */
  push32((uint32_t)(0x0u));
  /* 123634dc push 0 */
  push32((uint32_t)(0x0u));
  /* 123634de push 2 */
  push32((uint32_t)(0x2u));
  /* 123634e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123634e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123634e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 123634e6 push 0xa */
  push32((uint32_t)(0xau));
  /* 123634e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123634eb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123634ee push ecx */
  push32((uint32_t)(ECX));
  /* 123634ef push 1 */
  push32((uint32_t)(0x1u));
  /* 123634f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123634f3 call 0x12363600 */
  push32(0x123634f8u); f_12363600();
  /* 123634f8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123634fb:;
  /* 123634fb mov edx, dword ptr [0x1237fe2c] */
  EDX = (r32((uint32_t)(0x1237fe2c)));
  /* 12363501 cmp edx, dword ptr [0x1237fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1237fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363507 jge 0x12363554 */
  if ((C.sf==C.of)) goto L_12363554;
  /* 12363509 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236350c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1236350f cmp ecx, dword ptr [0x1237fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1237fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363515 jl 0x12363525 */
  if ((C.sf!=C.of)) goto L_12363525;
  /* 12363517 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236351a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1236351d cmp eax, dword ptr [0x1237fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1237fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363523 jle 0x1236352c */
  if ((C.zf||C.sf!=C.of)) goto L_1236352c;
L_12363525:;
  /* 12363525 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12363527 jmp 0x123635f6 */
  goto L_123635f6;
L_1236352c:;
  /* 1236352c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236352f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12363532 cmp edx, dword ptr [0x1237fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1237fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363538 jle 0x12363552 */
  if ((C.zf||C.sf!=C.of)) goto L_12363552;
  /* 1236353a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236353d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12363540 cmp ecx, dword ptr [0x1237fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1237fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363546 jge 0x12363552 */
  if ((C.sf==C.of)) goto L_12363552;
  /* 12363548 mov eax, 1 */
  EAX = (0x1u);
  /* 1236354d jmp 0x123635f6 */
  goto L_123635f6;
L_12363552:;
  /* 12363552 jmp 0x12363597 */
  goto L_12363597;
L_12363554:;
  /* 12363554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363557 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1236355a cmp eax, dword ptr [0x1237fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1237fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363560 jl 0x12363570 */
  if ((C.sf!=C.of)) goto L_12363570;
  /* 12363562 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363565 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12363568 cmp edx, dword ptr [0x1237fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1237fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236356e jle 0x12363577 */
  if ((C.zf||C.sf!=C.of)) goto L_12363577;
L_12363570:;
  /* 12363570 mov eax, 1 */
  EAX = (0x1u);
  /* 12363575 jmp 0x123635f6 */
  goto L_123635f6;
L_12363577:;
  /* 12363577 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236357a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1236357d cmp ecx, dword ptr [0x1237fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1237fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363583 jle 0x12363597 */
  if ((C.zf||C.sf!=C.of)) goto L_12363597;
  /* 12363585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363588 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1236358b cmp eax, dword ptr [0x1237fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1237fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363591 jge 0x12363597 */
  if ((C.sf==C.of)) goto L_12363597;
  /* 12363593 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12363595 jmp 0x123635f6 */
  goto L_123635f6;
L_12363597:;
  /* 12363597 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236359a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1236359d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123635a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123635a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123635a5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123635a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123635aa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123635ad imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123635b3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123635b5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123635bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123635be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123635c1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 123635c4 cmp edx, dword ptr [0x1237fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1237fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123635ca jne 0x123635e2 */
  if (!C.zf) goto L_123635e2;
  /* 123635cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123635cf cmp eax, dword ptr [0x1237fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1237fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123635d5 jl 0x123635de */
  if ((C.sf!=C.of)) goto L_123635de;
  /* 123635d7 mov eax, 1 */
  EAX = (0x1u);
  /* 123635dc jmp 0x123635f6 */
  goto L_123635f6;
L_123635de:;
  /* 123635de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123635e0 jmp 0x123635f6 */
  goto L_123635f6;
L_123635e2:;
  /* 123635e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123635e5 cmp ecx, dword ptr [0x1237fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1237fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123635eb jge 0x123635f4 */
  if ((C.sf==C.of)) goto L_123635f4;
  /* 123635ed mov eax, 1 */
  EAX = (0x1u);
  /* 123635f2 jmp 0x123635f6 */
  goto L_123635f6;
L_123635f4:;
  /* 123635f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123635f6:;
  /* 123635f6 mov esp, ebp */
  ESP = (EBP);
  /* 123635f8 pop ebp */
  EBP = (pop32());
  /* 123635f9 ret  */
  ESPCHK(0x12363300u, _esp0);
  ESP += 4; return;
}

/* FUN_10013600 @ 0x12363600 (504 bytes, 145 insns) */
void f_12363600(void) {
  FTRACE(0x12363600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12363600 push ebp */
  push32((uint32_t)(EBP));
  /* 12363601 mov ebp, esp */
  EBP = (ESP);
  /* 12363603 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12363606 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236360a jne 0x123636dc */
  if (!C.zf) goto L_123636dc;
  /* 12363610 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12363613 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12363616 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12363618 jne 0x12363629 */
  if (!C.zf) goto L_12363629;
  /* 1236361a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1236361d mov edx, dword ptr [ecx*4 + 0x1237fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1237fe4c)));
  /* 12363624 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12363627 jmp 0x12363636 */
  goto L_12363636;
L_12363629:;
  /* 12363629 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1236362c mov ecx, dword ptr [eax*4 + 0x1237fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1237fe80)));
  /* 12363633 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12363636:;
  /* 12363636 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363639 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236363c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1236363f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12363642 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12363645 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1236364b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1236364e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363650 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12363653 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12363656 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12363659 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1236365d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1236365e mov ecx, 7 */
  ECX = (0x7u);
  /* 12363663 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12363665 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12363668 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1236366b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236366e jge 0x12363689 */
  if ((C.sf==C.of)) goto L_12363689;
  /* 12363670 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12363673 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12363676 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12363679 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1236367c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1236367f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363682 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363684 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12363687 jmp 0x1236369d */
  goto L_1236369d;
L_12363689:;
  /* 12363689 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1236368c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1236368f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12363692 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12363695 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363698 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236369a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1236369d:;
  /* 1236369d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123636a1 jne 0x123636da */
  if (!C.zf) goto L_123636da;
  /* 123636a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123636a6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 123636a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123636ab jne 0x123636bc */
  if (!C.zf) goto L_123636bc;
  /* 123636ad mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123636b0 mov eax, dword ptr [edx*4 + 0x1237fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1237fe50)));
  /* 123636b7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123636ba jmp 0x123636c9 */
  goto L_123636c9;
L_123636bc:;
  /* 123636bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123636bf mov edx, dword ptr [ecx*4 + 0x1237fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1237fe84)));
  /* 123636c6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123636c9:;
  /* 123636c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123636cc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123636cf jle 0x123636da */
  if ((C.zf||C.sf!=C.of)) goto L_123636da;
  /* 123636d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123636d4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123636d7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123636da:;
  /* 123636da jmp 0x12363711 */
  goto L_12363711;
L_123636dc:;
  /* 123636dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123636df and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 123636e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123636e4 jne 0x123636f5 */
  if (!C.zf) goto L_123636f5;
  /* 123636e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123636e9 mov ecx, dword ptr [eax*4 + 0x1237fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1237fe4c)));
  /* 123636f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123636f3 jmp 0x12363702 */
  goto L_12363702;
L_123636f5:;
  /* 123636f5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123636f8 mov eax, dword ptr [edx*4 + 0x1237fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1237fe80)));
  /* 123636ff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12363702:;
  /* 12363702 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12363705 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12363708 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1236370b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236370e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12363711:;
  /* 12363711 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363715 jne 0x12363751 */
  if (!C.zf) goto L_12363751;
  /* 12363717 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1236371a mov dword ptr [0x1237fe2c], eax */
  w32((uint32_t)(0x1237fe2c), (EAX));
  /* 1236371f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12363722 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12363725 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12363728 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236372a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1236372d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12363730 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363732 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12363738 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1236373b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236373d mov dword ptr [0x1237fe30], ecx */
  w32((uint32_t)(0x1237fe30), (ECX));
  /* 12363743 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12363746 mov dword ptr [0x1237fe28], edx */
  w32((uint32_t)(0x1237fe28), (EDX));
  /* 1236374c jmp 0x123637f4 */
  goto L_123637f4;
L_12363751:;
  /* 12363751 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12363754 mov dword ptr [0x1237fe3c], eax */
  w32((uint32_t)(0x1237fe3c), (EAX));
  /* 12363759 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1236375c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1236375f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12363762 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363764 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12363767 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1236376a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236376c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12363772 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12363775 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363777 mov dword ptr [0x1237fe40], ecx */
  w32((uint32_t)(0x1237fe40), (ECX));
  /* 1236377d mov edx, dword ptr [0x1237fd98] */
  EDX = (r32((uint32_t)(0x1237fd98)));
  /* 12363783 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12363789 mov eax, dword ptr [0x1237fe40] */
  EAX = (r32((uint32_t)(0x1237fe40)));
  /* 1236378e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363790 mov dword ptr [0x1237fe40], eax */
  w32((uint32_t)(0x1237fe40), (EAX));
  /* 12363795 cmp dword ptr [0x1237fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1237fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236379c jge 0x123637c1 */
  if ((C.sf==C.of)) goto L_123637c1;
  /* 1236379e mov ecx, dword ptr [0x1237fe40] */
  ECX = (r32((uint32_t)(0x1237fe40)));
  /* 123637a4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123637aa mov dword ptr [0x1237fe40], ecx */
  w32((uint32_t)(0x1237fe40), (ECX));
  /* 123637b0 mov edx, dword ptr [0x1237fe3c] */
  EDX = (r32((uint32_t)(0x1237fe3c)));
  /* 123637b6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123637b9 mov dword ptr [0x1237fe3c], edx */
  w32((uint32_t)(0x1237fe3c), (EDX));
  /* 123637bf jmp 0x123637eb */
  goto L_123637eb;
L_123637c1:;
  /* 123637c1 cmp dword ptr [0x1237fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1237fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123637cb jl 0x123637eb */
  if ((C.sf!=C.of)) goto L_123637eb;
  /* 123637cd mov eax, dword ptr [0x1237fe40] */
  EAX = (r32((uint32_t)(0x1237fe40)));
  /* 123637d2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123637d7 mov dword ptr [0x1237fe40], eax */
  w32((uint32_t)(0x1237fe40), (EAX));
  /* 123637dc mov ecx, dword ptr [0x1237fe3c] */
  ECX = (r32((uint32_t)(0x1237fe3c)));
  /* 123637e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123637e5 mov dword ptr [0x1237fe3c], ecx */
  w32((uint32_t)(0x1237fe3c), (ECX));
L_123637eb:;
  /* 123637eb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123637ee mov dword ptr [0x1237fe38], edx */
  w32((uint32_t)(0x1237fe38), (EDX));
L_123637f4:;
  /* 123637f4 mov esp, ebp */
  ESP = (EBP);
  /* 123637f6 pop ebp */
  EBP = (pop32());
  /* 123637f7 ret  */
  ESPCHK(0x12363600u, _esp0);
  ESP += 4; return;
}

/* FUN_10013800 @ 0x12363800 (382 bytes, 135 insns) */
void f_12363800(void) {
  FTRACE(0x12363800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12363800 push ebp */
  push32((uint32_t)(EBP));
  /* 12363801 mov ebp, esp */
  EBP = (ESP);
  /* 12363803 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12363805 push 0x1237ca00 */
  push32((uint32_t)(0x1237ca00u));
  /* 1236380a push 0x1235d4c8 */
  push32((uint32_t)(0x1235d4c8u));
  /* 1236380f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12363815 push eax */
  push32((uint32_t)(EAX));
  /* 12363816 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1236381d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363820 push ebx */
  push32((uint32_t)(EBX));
  /* 12363821 push esi */
  push32((uint32_t)(ESI));
  /* 12363822 push edi */
  push32((uint32_t)(EDI));
  /* 12363823 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12363826 cmp dword ptr [0x123808b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236382d jne 0x12363872 */
  if (!C.zf) goto L_12363872;
  /* 1236382f push 0 */
  push32((uint32_t)(0x0u));
  /* 12363831 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363833 push 1 */
  push32((uint32_t)(0x1u));
  /* 12363835 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363837 call dword ptr [0x12383268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383268))), 0x1236383du);
  /* 1236383d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1236383f je 0x1236384d */
  if (C.zf) goto L_1236384d;
  /* 12363841 mov dword ptr [0x123808b4], 1 */
  w32((uint32_t)(0x123808b4), (0x1u));
  /* 1236384b jmp 0x12363872 */
  goto L_12363872;
L_1236384d:;
  /* 1236384d push 0 */
  push32((uint32_t)(0x0u));
  /* 1236384f push 0 */
  push32((uint32_t)(0x0u));
  /* 12363851 push 1 */
  push32((uint32_t)(0x1u));
  /* 12363853 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363855 call dword ptr [0x12383280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383280))), 0x1236385bu);
  /* 1236385b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1236385d je 0x1236386b */
  if (C.zf) goto L_1236386b;
  /* 1236385f mov dword ptr [0x123808b4], 2 */
  w32((uint32_t)(0x123808b4), (0x2u));
  /* 12363869 jmp 0x12363872 */
  goto L_12363872;
L_1236386b:;
  /* 1236386b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236386d jmp 0x12363981 */
  goto L_12363981;
L_12363872:;
  /* 12363872 cmp dword ptr [0x123808b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123808b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363879 jne 0x12363896 */
  if (!C.zf) goto L_12363896;
  /* 1236387b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1236387e push eax */
  push32((uint32_t)(EAX));
  /* 1236387f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12363882 push ecx */
  push32((uint32_t)(ECX));
  /* 12363883 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12363886 push edx */
  push32((uint32_t)(EDX));
  /* 12363887 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236388a push eax */
  push32((uint32_t)(EAX));
  /* 1236388b call dword ptr [0x12383268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383268))), 0x12363891u);
  /* 12363891 jmp 0x12363981 */
  goto L_12363981;
L_12363896:;
  /* 12363896 cmp dword ptr [0x123808b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123808b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236389d jne 0x1236397f */
  if (!C.zf) goto L_1236397f;
  /* 123638a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123638a7 jne 0x123638b2 */
  if (!C.zf) goto L_123638b2;
  /* 123638a9 mov ecx, dword ptr [0x12380768] */
  ECX = (r32((uint32_t)(0x12380768)));
  /* 123638af mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_123638b2:;
  /* 123638b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123638b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123638b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123638b9 push edx */
  push32((uint32_t)(EDX));
  /* 123638ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123638bd push eax */
  push32((uint32_t)(EAX));
  /* 123638be call dword ptr [0x12383280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383280))), 0x123638c4u);
  /* 123638c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123638c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123638cb jne 0x123638d4 */
  if (!C.zf) goto L_123638d4;
  /* 123638cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123638cf jmp 0x12363981 */
  goto L_12363981;
L_123638d4:;
  /* 123638d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123638db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123638de add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123638e1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123638e3 call 0x12357560 */
  push32(0x123638e8u); f_12357560();
  /* 123638e8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 123638eb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123638ee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123638f1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 123638f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123638fb jmp 0x12363914 */
  goto L_12363914;
  /* 123638fd mov eax, 1 */
  EAX = (0x1u);
  /* 12363902 ret  */
  ESPCHK(0x12363800u, _esp0);
  ESP += 4; return;
  /* 12363903 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12363906 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1236390d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12363914:;
  /* 12363914 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363918 jne 0x1236391e */
  if (!C.zf) goto L_1236391e;
  /* 1236391a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236391c jmp 0x12363981 */
  goto L_12363981;
L_1236391e:;
  /* 1236391e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12363921 push edx */
  push32((uint32_t)(EDX));
  /* 12363922 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12363925 push eax */
  push32((uint32_t)(EAX));
  /* 12363926 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12363929 push ecx */
  push32((uint32_t)(ECX));
  /* 1236392a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236392d push edx */
  push32((uint32_t)(EDX));
  /* 1236392e call dword ptr [0x12383280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383280))), 0x12363934u);
  /* 12363934 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12363936 jne 0x1236393c */
  if (!C.zf) goto L_1236393c;
  /* 12363938 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236393a jmp 0x12363981 */
  goto L_12363981;
L_1236393c:;
  /* 1236393c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363940 jne 0x1236395d */
  if (!C.zf) goto L_1236395d;
  /* 12363942 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363944 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363946 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12363948 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1236394b push eax */
  push32((uint32_t)(EAX));
  /* 1236394c push 1 */
  push32((uint32_t)(0x1u));
  /* 1236394e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12363951 push ecx */
  push32((uint32_t)(ECX));
  /* 12363952 call dword ptr [0x12383370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383370))), 0x12363958u);
  /* 12363958 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1236395b jmp 0x1236397a */
  goto L_1236397a;
L_1236395d:;
  /* 1236395d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12363960 push edx */
  push32((uint32_t)(EDX));
  /* 12363961 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12363964 push eax */
  push32((uint32_t)(EAX));
  /* 12363965 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12363967 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1236396a push ecx */
  push32((uint32_t)(ECX));
  /* 1236396b push 1 */
  push32((uint32_t)(0x1u));
  /* 1236396d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12363970 push edx */
  push32((uint32_t)(EDX));
  /* 12363971 call dword ptr [0x12383370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383370))), 0x12363977u);
  /* 12363977 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1236397a:;
  /* 1236397a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1236397d jmp 0x12363981 */
  goto L_12363981;
L_1236397f:;
  /* 1236397f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12363981:;
  /* 12363981 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12363984 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12363987 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1236398e pop edi */
  EDI = (pop32());
  /* 1236398f pop esi */
  ESI = (pop32());
  /* 12363990 pop ebx */
  EBX = (pop32());
  /* 12363991 mov esp, ebp */
  ESP = (EBP);
  /* 12363993 pop ebp */
  EBP = (pop32());
  /* 12363994 ret  */
  ESPCHK(0x12363800u, _esp0);
  ESP += 4; return;
}

/* FUN_100139a0 @ 0x123639a0 (398 bytes, 140 insns) */
void f_123639a0(void) {
  FTRACE(0x123639a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123639a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123639a1 mov ebp, esp */
  EBP = (ESP);
  /* 123639a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123639a5 push 0x1237ca10 */
  push32((uint32_t)(0x1237ca10u));
  /* 123639aa push 0x1235d4c8 */
  push32((uint32_t)(0x1235d4c8u));
  /* 123639af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 123639b5 push eax */
  push32((uint32_t)(EAX));
  /* 123639b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 123639bd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123639c0 push ebx */
  push32((uint32_t)(EBX));
  /* 123639c1 push esi */
  push32((uint32_t)(ESI));
  /* 123639c2 push edi */
  push32((uint32_t)(EDI));
  /* 123639c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123639c6 cmp dword ptr [0x123808b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123639cd jne 0x12363a12 */
  if (!C.zf) goto L_12363a12;
  /* 123639cf push 0 */
  push32((uint32_t)(0x0u));
  /* 123639d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123639d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123639d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123639d7 call dword ptr [0x12383268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383268))), 0x123639ddu);
  /* 123639dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123639df je 0x123639ed */
  if (C.zf) goto L_123639ed;
  /* 123639e1 mov dword ptr [0x123808b8], 1 */
  w32((uint32_t)(0x123808b8), (0x1u));
  /* 123639eb jmp 0x12363a12 */
  goto L_12363a12;
L_123639ed:;
  /* 123639ed push 0 */
  push32((uint32_t)(0x0u));
  /* 123639ef push 0 */
  push32((uint32_t)(0x0u));
  /* 123639f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 123639f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123639f5 call dword ptr [0x12383280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383280))), 0x123639fbu);
  /* 123639fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123639fd je 0x12363a0b */
  if (C.zf) goto L_12363a0b;
  /* 123639ff mov dword ptr [0x123808b8], 2 */
  w32((uint32_t)(0x123808b8), (0x2u));
  /* 12363a09 jmp 0x12363a12 */
  goto L_12363a12;
L_12363a0b:;
  /* 12363a0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12363a0d jmp 0x12363b31 */
  goto L_12363b31;
L_12363a12:;
  /* 12363a12 cmp dword ptr [0x123808b8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123808b8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363a19 jne 0x12363a36 */
  if (!C.zf) goto L_12363a36;
  /* 12363a1b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12363a1e push eax */
  push32((uint32_t)(EAX));
  /* 12363a1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12363a22 push ecx */
  push32((uint32_t)(ECX));
  /* 12363a23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12363a26 push edx */
  push32((uint32_t)(EDX));
  /* 12363a27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363a2a push eax */
  push32((uint32_t)(EAX));
  /* 12363a2b call dword ptr [0x12383280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383280))), 0x12363a31u);
  /* 12363a31 jmp 0x12363b31 */
  goto L_12363b31;
L_12363a36:;
  /* 12363a36 cmp dword ptr [0x123808b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123808b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363a3d jne 0x12363b2f */
  if (!C.zf) goto L_12363b2f;
  /* 12363a43 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363a47 jne 0x12363a52 */
  if (!C.zf) goto L_12363a52;
  /* 12363a49 mov ecx, dword ptr [0x12380768] */
  ECX = (r32((uint32_t)(0x12380768)));
  /* 12363a4f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12363a52:;
  /* 12363a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363a56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12363a59 push edx */
  push32((uint32_t)(EDX));
  /* 12363a5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363a5d push eax */
  push32((uint32_t)(EAX));
  /* 12363a5e call dword ptr [0x12383268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383268))), 0x12363a64u);
  /* 12363a64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12363a67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363a6b jne 0x12363a74 */
  if (!C.zf) goto L_12363a74;
  /* 12363a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12363a6f jmp 0x12363b31 */
  goto L_12363b31;
L_12363a74:;
  /* 12363a74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12363a7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12363a7e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12363a80 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363a83 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12363a85 call 0x12357560 */
  push32(0x12363a8au); f_12357560();
  /* 12363a8a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12363a8d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12363a90 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12363a93 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12363a96 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12363a9d jmp 0x12363ab6 */
  goto L_12363ab6;
  /* 12363a9f mov eax, 1 */
  EAX = (0x1u);
  /* 12363aa4 ret  */
  ESPCHK(0x123639a0u, _esp0);
  ESP += 4; return;
  /* 12363aa5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12363aa8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12363aaf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12363ab6:;
  /* 12363ab6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363aba jne 0x12363ac0 */
  if (!C.zf) goto L_12363ac0;
  /* 12363abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12363abe jmp 0x12363b31 */
  goto L_12363b31;
L_12363ac0:;
  /* 12363ac0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12363ac3 push edx */
  push32((uint32_t)(EDX));
  /* 12363ac4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12363ac7 push eax */
  push32((uint32_t)(EAX));
  /* 12363ac8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12363acb push ecx */
  push32((uint32_t)(ECX));
  /* 12363acc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363acf push edx */
  push32((uint32_t)(EDX));
  /* 12363ad0 call dword ptr [0x12383268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383268))), 0x12363ad6u);
  /* 12363ad6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12363ad8 jne 0x12363ade */
  if (!C.zf) goto L_12363ade;
  /* 12363ada xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12363adc jmp 0x12363b31 */
  goto L_12363b31;
L_12363ade:;
  /* 12363ade cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363ae2 jne 0x12363b06 */
  if (!C.zf) goto L_12363b06;
  /* 12363ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363ae8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363aea push 0 */
  push32((uint32_t)(0x0u));
  /* 12363aec push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12363aee mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12363af1 push eax */
  push32((uint32_t)(EAX));
  /* 12363af2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12363af7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12363afa push ecx */
  push32((uint32_t)(ECX));
  /* 12363afb call dword ptr [0x12383328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383328))), 0x12363b01u);
  /* 12363b01 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12363b04 jmp 0x12363b2a */
  goto L_12363b2a;
L_12363b06:;
  /* 12363b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363b0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12363b0d push edx */
  push32((uint32_t)(EDX));
  /* 12363b0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12363b11 push eax */
  push32((uint32_t)(EAX));
  /* 12363b12 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12363b14 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12363b17 push ecx */
  push32((uint32_t)(ECX));
  /* 12363b18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12363b1d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12363b20 push edx */
  push32((uint32_t)(EDX));
  /* 12363b21 call dword ptr [0x12383328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383328))), 0x12363b27u);
  /* 12363b27 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12363b2a:;
  /* 12363b2a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12363b2d jmp 0x12363b31 */
  goto L_12363b31;
L_12363b2f:;
  /* 12363b2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12363b31:;
  /* 12363b31 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12363b34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12363b37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12363b3e pop edi */
  EDI = (pop32());
  /* 12363b3f pop esi */
  ESI = (pop32());
  /* 12363b40 pop ebx */
  EBX = (pop32());
  /* 12363b41 mov esp, ebp */
  ESP = (EBP);
  /* 12363b43 pop ebp */
  EBP = (pop32());
  /* 12363b44 ret  */
  ESPCHK(0x123639a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b50 @ 0x12363b50 (11 bytes, 6 insns) */
void f_12363b50(void) {
  FTRACE(0x12363b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12363b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12363b51 mov ebp, esp */
  EBP = (ESP);
  /* 12363b53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363b56 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363b59 pop ebp */
  EBP = (pop32());
  /* 12363b5a ret  */
  ESPCHK(0x12363b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b60 @ 0x12363b60 (147 bytes, 43 insns) */
void f_12363b60(void) {
  FTRACE(0x12363b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12363b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12363b61 mov ebp, esp */
  EBP = (ESP);
  /* 12363b63 push ecx */
  push32((uint32_t)(ECX));
  /* 12363b64 cmp dword ptr [0x12380758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363b6b jne 0x12363b87 */
  if (!C.zf) goto L_12363b87;
  /* 12363b6d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363b71 jl 0x12363b82 */
  if ((C.sf!=C.of)) goto L_12363b82;
  /* 12363b73 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363b77 jg 0x12363b82 */
  if ((!C.zf&&C.sf==C.of)) goto L_12363b82;
  /* 12363b79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363b7c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363b7f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12363b82:;
  /* 12363b82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363b85 jmp 0x12363bef */
  goto L_12363bef;
L_12363b87:;
  /* 12363b87 push 0x123808e4 */
  push32((uint32_t)(0x123808e4u));
  /* 12363b8c call dword ptr [0x123832d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832d0))), 0x12363b92u);
  /* 12363b92 cmp dword ptr [0x123808d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363b99 je 0x12363bb9 */
  if (C.zf) goto L_12363bb9;
  /* 12363b9b push 0x123808e4 */
  push32((uint32_t)(0x123808e4u));
  /* 12363ba0 call dword ptr [0x123832c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c0))), 0x12363ba6u);
  /* 12363ba6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12363ba8 call 0x12357dc0 */
  push32(0x12363badu); f_12357dc0();
  /* 12363bad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363bb0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12363bb7 jmp 0x12363bc0 */
  goto L_12363bc0;
L_12363bb9:;
  /* 12363bb9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12363bc0:;
  /* 12363bc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12363bc4 call 0x12363c00 */
  push32(0x12363bc9u); f_12363c00();
  /* 12363bc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363bcc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12363bcf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363bd3 je 0x12363be1 */
  if (C.zf) goto L_12363be1;
  /* 12363bd5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12363bd7 call 0x12357e60 */
  push32(0x12363bdcu); f_12357e60();
  /* 12363bdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363bdf jmp 0x12363bec */
  goto L_12363bec;
L_12363be1:;
  /* 12363be1 push 0x123808e4 */
  push32((uint32_t)(0x123808e4u));
  /* 12363be6 call dword ptr [0x123832c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c0))), 0x12363becu);
L_12363bec:;
  /* 12363bec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12363bef:;
  /* 12363bef mov esp, ebp */
  ESP = (EBP);
  /* 12363bf1 pop ebp */
  EBP = (pop32());
  /* 12363bf2 ret  */
  ESPCHK(0x12363b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c00 @ 0x12363c00 (299 bytes, 91 insns) */
void f_12363c00(void) {
  FTRACE(0x12363c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12363c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12363c01 mov ebp, esp */
  EBP = (ESP);
  /* 12363c03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12363c06 cmp dword ptr [0x12380758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363c0d jne 0x12363c2c */
  if (!C.zf) goto L_12363c2c;
  /* 12363c0f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363c13 jl 0x12363c24 */
  if ((C.sf!=C.of)) goto L_12363c24;
  /* 12363c15 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363c19 jg 0x12363c24 */
  if ((!C.zf&&C.sf==C.of)) goto L_12363c24;
  /* 12363c1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363c1e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363c21 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12363c24:;
  /* 12363c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363c27 jmp 0x12363d27 */
  goto L_12363d27;
L_12363c2c:;
  /* 12363c2c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363c33 jge 0x12363c73 */
  if ((C.sf==C.of)) goto L_12363c73;
  /* 12363c35 cmp dword ptr [0x1237eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1237eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363c3c jle 0x12363c51 */
  if ((C.zf||C.sf!=C.of)) goto L_12363c51;
  /* 12363c3e push 1 */
  push32((uint32_t)(0x1u));
  /* 12363c40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363c43 push ecx */
  push32((uint32_t)(ECX));
  /* 12363c44 call 0x1235a3d0 */
  push32(0x12363c49u); f_1235a3d0();
  /* 12363c49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363c4c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12363c4f jmp 0x12363c65 */
  goto L_12363c65;
L_12363c51:;
  /* 12363c51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363c54 mov eax, dword ptr [0x1237ec98] */
  EAX = (r32((uint32_t)(0x1237ec98)));
  /* 12363c59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12363c5b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12363c5f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12363c62 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12363c65:;
  /* 12363c65 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363c69 jne 0x12363c73 */
  if (!C.zf) goto L_12363c73;
  /* 12363c6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363c6e jmp 0x12363d27 */
  goto L_12363d27;
L_12363c73:;
  /* 12363c73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363c76 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12363c79 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12363c7f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12363c85 mov eax, dword ptr [0x1237ec98] */
  EAX = (r32((uint32_t)(0x1237ec98)));
  /* 12363c8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12363c8c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12363c90 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12363c96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12363c98 je 0x12363cbc */
  if (C.zf) goto L_12363cbc;
  /* 12363c9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363c9d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12363ca0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12363ca6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12363ca9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12363cac mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12363caf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12363cb3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12363cba jmp 0x12363ccd */
  goto L_12363ccd;
L_12363cbc:;
  /* 12363cbc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12363cbf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12363cc2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12363cc6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12363ccd:;
  /* 12363ccd push 1 */
  push32((uint32_t)(0x1u));
  /* 12363ccf push 0 */
  push32((uint32_t)(0x0u));
  /* 12363cd1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12363cd3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12363cd6 push edx */
  push32((uint32_t)(EDX));
  /* 12363cd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12363cda push eax */
  push32((uint32_t)(EAX));
  /* 12363cdb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12363cde push ecx */
  push32((uint32_t)(ECX));
  /* 12363cdf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12363ce4 mov edx, dword ptr [0x12380758] */
  EDX = (r32((uint32_t)(0x12380758)));
  /* 12363cea push edx */
  push32((uint32_t)(EDX));
  /* 12363ceb call 0x1235c7b0 */
  push32(0x12363cf0u); f_1235c7b0();
  /* 12363cf0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363cf3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12363cf6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363cfa jne 0x12363d01 */
  if (!C.zf) goto L_12363d01;
  /* 12363cfc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363cff jmp 0x12363d27 */
  goto L_12363d27;
L_12363d01:;
  /* 12363d01 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363d05 jne 0x12363d11 */
  if (!C.zf) goto L_12363d11;
  /* 12363d07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363d0a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12363d0f jmp 0x12363d27 */
  goto L_12363d27;
L_12363d11:;
  /* 12363d11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363d14 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12363d19 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12363d1c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12363d22 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12363d25 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12363d27:;
  /* 12363d27 mov esp, ebp */
  ESP = (EBP);
  /* 12363d29 pop ebp */
  EBP = (pop32());
  /* 12363d2a ret  */
  ESPCHK(0x12363c00u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12363d30 (52 bytes, 19 insns) */
void f_12363d30(void) {
  FTRACE(0x12363d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12363d30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12363d34 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12363d38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12363d3a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12363d3e jne 0x12363d49 */
  if (!C.zf) goto L_12363d49;
  /* 12363d40 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12363d44 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12363d46 ret 0x10 */
  ESPCHK(0x12363d30u, _esp0);
  ESP += 20; return;
L_12363d49:;
  /* 12363d49 push ebx */
  push32((uint32_t)(EBX));
  /* 12363d4a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12363d4c mov ebx, eax */
  EBX = (EAX);
  /* 12363d4e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12363d52 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12363d56 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363d58 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12363d5c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12363d5e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363d60 pop ebx */
  EBX = (pop32());
  /* 12363d61 ret 0x10 */
  ESPCHK(0x12363d30u, _esp0);
  ESP += 20; return;
}

/* FUN_10013d70 @ 0x12363d70 (46 bytes, 18 insns) */
void f_12363d70(void) {
  FTRACE(0x12363d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12363d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12363d71 mov ebp, esp */
  EBP = (ESP);
  /* 12363d73 push ecx */
  push32((uint32_t)(ECX));
  /* 12363d74 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12363d76 call 0x12357dc0 */
  push32(0x12363d7bu); f_12357dc0();
  /* 12363d7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363d7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363d81 push eax */
  push32((uint32_t)(EAX));
  /* 12363d82 call 0x12363da0 */
  push32(0x12363d87u); f_12363da0();
  /* 12363d87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363d8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12363d8d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12363d8f call 0x12357e60 */
  push32(0x12363d94u); f_12357e60();
  /* 12363d94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363d97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12363d9a mov esp, ebp */
  ESP = (EBP);
  /* 12363d9c pop ebp */
  EBP = (pop32());
  /* 12363d9d ret  */
  ESPCHK(0x12363d70u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12363da0 (198 bytes, 69 insns) */
void f_12363da0(void) {
  FTRACE(0x12363da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12363da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12363da1 mov ebp, esp */
  EBP = (ESP);
  /* 12363da3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12363da6 mov eax, dword ptr [0x12380578] */
  EAX = (r32((uint32_t)(0x12380578)));
  /* 12363dab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12363dae cmp dword ptr [0x12382080], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12382080))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363db5 jne 0x12363dbe */
  if (!C.zf) goto L_12363dbe;
  /* 12363db7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12363db9 jmp 0x12363e62 */
  goto L_12363e62;
L_12363dbe:;
  /* 12363dbe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363dc2 jne 0x12363de6 */
  if (!C.zf) goto L_12363de6;
  /* 12363dc4 cmp dword ptr [0x12380580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363dcb je 0x12363de6 */
  if (C.zf) goto L_12363de6;
  /* 12363dcd call 0x12363ec0 */
  push32(0x12363dd2u); f_12363ec0();
  /* 12363dd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12363dd4 je 0x12363ddd */
  if (C.zf) goto L_12363ddd;
  /* 12363dd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12363dd8 jmp 0x12363e62 */
  goto L_12363e62;
L_12363ddd:;
  /* 12363ddd mov ecx, dword ptr [0x12380578] */
  ECX = (r32((uint32_t)(0x12380578)));
  /* 12363de3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12363de6:;
  /* 12363de6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363dea je 0x12363e60 */
  if (C.zf) goto L_12363e60;
  /* 12363dec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363df0 je 0x12363e60 */
  if (C.zf) goto L_12363e60;
  /* 12363df2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363df5 push edx */
  push32((uint32_t)(EDX));
  /* 12363df6 call 0x123571f0 */
  push32(0x12363dfbu); f_123571f0();
  /* 12363dfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363dfe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12363e01:;
  /* 12363e01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12363e04 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363e07 je 0x12363e60 */
  if (C.zf) goto L_12363e60;
  /* 12363e09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12363e0c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12363e0e push edx */
  push32((uint32_t)(EDX));
  /* 12363e0f call 0x123571f0 */
  push32(0x12363e14u); f_123571f0();
  /* 12363e14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363e17 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363e1a jbe 0x12363e55 */
  if ((C.cf||C.zf)) goto L_12363e55;
  /* 12363e1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12363e1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12363e21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12363e24 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12363e28 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363e2b jne 0x12363e55 */
  if (!C.zf) goto L_12363e55;
  /* 12363e2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12363e30 push ecx */
  push32((uint32_t)(ECX));
  /* 12363e31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363e34 push edx */
  push32((uint32_t)(EDX));
  /* 12363e35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12363e38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12363e3a push ecx */
  push32((uint32_t)(ECX));
  /* 12363e3b call 0x12363e70 */
  push32(0x12363e40u); f_12363e70();
  /* 12363e40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363e43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12363e45 jne 0x12363e55 */
  if (!C.zf) goto L_12363e55;
  /* 12363e47 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12363e4a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12363e4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12363e4f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12363e53 jmp 0x12363e62 */
  goto L_12363e62;
L_12363e55:;
  /* 12363e55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12363e58 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363e5b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12363e5e jmp 0x12363e01 */
  goto L_12363e01;
L_12363e60:;
  /* 12363e60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12363e62:;
  /* 12363e62 mov esp, ebp */
  ESP = (EBP);
  /* 12363e64 pop ebp */
  EBP = (pop32());
  /* 12363e65 ret  */
  ESPCHK(0x12363da0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12363e70 (79 bytes, 32 insns) */
void f_12363e70(void) {
  FTRACE(0x12363e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12363e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12363e71 mov ebp, esp */
  EBP = (ESP);
  /* 12363e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12363e74 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363e78 jne 0x12363e7e */
  if (!C.zf) goto L_12363e7e;
  /* 12363e7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12363e7c jmp 0x12363ebb */
  goto L_12363ebb;
L_12363e7e:;
  /* 12363e7e mov eax, dword ptr [0x12381c44] */
  EAX = (r32((uint32_t)(0x12381c44)));
  /* 12363e83 push eax */
  push32((uint32_t)(EAX));
  /* 12363e84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12363e87 push ecx */
  push32((uint32_t)(ECX));
  /* 12363e88 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12363e8b push edx */
  push32((uint32_t)(EDX));
  /* 12363e8c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12363e8f push eax */
  push32((uint32_t)(EAX));
  /* 12363e90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12363e93 push ecx */
  push32((uint32_t)(ECX));
  /* 12363e94 push 1 */
  push32((uint32_t)(0x1u));
  /* 12363e96 mov edx, dword ptr [0x12381ee4] */
  EDX = (r32((uint32_t)(0x12381ee4)));
  /* 12363e9c push edx */
  push32((uint32_t)(EDX));
  /* 12363e9d call 0x12363f70 */
  push32(0x12363ea2u); f_12363f70();
  /* 12363ea2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363ea5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12363ea8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363eac jne 0x12363eb5 */
  if (!C.zf) goto L_12363eb5;
  /* 12363eae mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12363eb3 jmp 0x12363ebb */
  goto L_12363ebb;
L_12363eb5:;
  /* 12363eb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12363eb8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12363ebb:;
  /* 12363ebb mov esp, ebp */
  ESP = (EBP);
  /* 12363ebd pop ebp */
  EBP = (pop32());
  /* 12363ebe ret  */
  ESPCHK(0x12363e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ec0 @ 0x12363ec0 (174 bytes, 66 insns) */
void f_12363ec0(void) {
  FTRACE(0x12363ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12363ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12363ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12363ec3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12363ec6 mov eax, dword ptr [0x12380580] */
  EAX = (r32((uint32_t)(0x12380580)));
  /* 12363ecb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12363ece:;
  /* 12363ece mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12363ed1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363ed4 je 0x12363f68 */
  if (C.zf) goto L_12363f68;
  /* 12363eda push 0 */
  push32((uint32_t)(0x0u));
  /* 12363edc push 0 */
  push32((uint32_t)(0x0u));
  /* 12363ede push 0 */
  push32((uint32_t)(0x0u));
  /* 12363ee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363ee2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12363ee4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12363ee7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12363ee9 push eax */
  push32((uint32_t)(EAX));
  /* 12363eea push 0 */
  push32((uint32_t)(0x0u));
  /* 12363eec push 1 */
  push32((uint32_t)(0x1u));
  /* 12363eee call dword ptr [0x12383328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383328))), 0x12363ef4u);
  /* 12363ef4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12363ef7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363efb jne 0x12363f02 */
  if (!C.zf) goto L_12363f02;
  /* 12363efd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12363f00 jmp 0x12363f6a */
  goto L_12363f6a;
L_12363f02:;
  /* 12363f02 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12363f04 push 0x1237ca1c */
  push32((uint32_t)(0x1237ca1cu));
  /* 12363f09 push 2 */
  push32((uint32_t)(0x2u));
  /* 12363f0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363f0e push ecx */
  push32((uint32_t)(ECX));
  /* 12363f0f call 0x123543c0 */
  push32(0x12363f14u); f_123543c0();
  /* 12363f14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363f17 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12363f1a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363f1e jne 0x12363f25 */
  if (!C.zf) goto L_12363f25;
  /* 12363f20 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12363f23 jmp 0x12363f6a */
  goto L_12363f6a;
L_12363f25:;
  /* 12363f25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363f29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12363f2c push edx */
  push32((uint32_t)(EDX));
  /* 12363f2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12363f30 push eax */
  push32((uint32_t)(EAX));
  /* 12363f31 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12363f33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12363f36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12363f38 push edx */
  push32((uint32_t)(EDX));
  /* 12363f39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363f3b push 1 */
  push32((uint32_t)(0x1u));
  /* 12363f3d call dword ptr [0x12383328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383328))), 0x12363f43u);
  /* 12363f43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12363f45 jne 0x12363f4c */
  if (!C.zf) goto L_12363f4c;
  /* 12363f47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12363f4a jmp 0x12363f6a */
  goto L_12363f6a;
L_12363f4c:;
  /* 12363f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12363f4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12363f51 push eax */
  push32((uint32_t)(EAX));
  /* 12363f52 call 0x123643c0 */
  push32(0x12363f57u); f_123643c0();
  /* 12363f57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363f5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12363f5d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12363f60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12363f63 jmp 0x12363ece */
  goto L_12363ece;
L_12363f68:;
  /* 12363f68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12363f6a:;
  /* 12363f6a mov esp, ebp */
  ESP = (EBP);
  /* 12363f6c pop ebp */
  EBP = (pop32());
  /* 12363f6d ret  */
  ESPCHK(0x12363ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f70 @ 0x12363f70 (970 bytes, 340 insns) */
void f_12363f70(void) {
  FTRACE(0x12363f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12363f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12363f71 mov ebp, esp */
  EBP = (ESP);
  /* 12363f73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12363f75 push 0x1237ca70 */
  push32((uint32_t)(0x1237ca70u));
  /* 12363f7a push 0x1235d4c8 */
  push32((uint32_t)(0x1235d4c8u));
  /* 12363f7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12363f85 push eax */
  push32((uint32_t)(EAX));
  /* 12363f86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12363f8d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12363f90 push ebx */
  push32((uint32_t)(EBX));
  /* 12363f91 push esi */
  push32((uint32_t)(ESI));
  /* 12363f92 push edi */
  push32((uint32_t)(EDI));
  /* 12363f93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12363f96 cmp dword ptr [0x123808bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123808bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363f9d jne 0x12363ff6 */
  if (!C.zf) goto L_12363ff6;
  /* 12363f9f push 1 */
  push32((uint32_t)(0x1u));
  /* 12363fa1 push 0x1237c0c8 */
  push32((uint32_t)(0x1237c0c8u));
  /* 12363fa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12363fa8 push 0x1237c0c8 */
  push32((uint32_t)(0x1237c0c8u));
  /* 12363fad push 0 */
  push32((uint32_t)(0x0u));
  /* 12363faf push 0 */
  push32((uint32_t)(0x0u));
  /* 12363fb1 call dword ptr [0x12383260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383260))), 0x12363fb7u);
  /* 12363fb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12363fb9 je 0x12363fc7 */
  if (C.zf) goto L_12363fc7;
  /* 12363fbb mov dword ptr [0x123808bc], 1 */
  w32((uint32_t)(0x123808bc), (0x1u));
  /* 12363fc5 jmp 0x12363ff6 */
  goto L_12363ff6;
L_12363fc7:;
  /* 12363fc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12363fc9 push 0x1237c0c4 */
  push32((uint32_t)(0x1237c0c4u));
  /* 12363fce push 1 */
  push32((uint32_t)(0x1u));
  /* 12363fd0 push 0x1237c0c4 */
  push32((uint32_t)(0x1237c0c4u));
  /* 12363fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12363fd9 call dword ptr [0x12383264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383264))), 0x12363fdfu);
  /* 12363fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12363fe1 je 0x12363fef */
  if (C.zf) goto L_12363fef;
  /* 12363fe3 mov dword ptr [0x123808bc], 2 */
  w32((uint32_t)(0x123808bc), (0x2u));
  /* 12363fed jmp 0x12363ff6 */
  goto L_12363ff6;
L_12363fef:;
  /* 12363fef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12363ff1 jmp 0x12364354 */
  goto L_12364354;
L_12363ff6:;
  /* 12363ff6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12363ffa jle 0x1236400f */
  if ((C.zf||C.sf!=C.of)) goto L_1236400f;
  /* 12363ffc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12363fff push eax */
  push32((uint32_t)(EAX));
  /* 12364000 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12364003 push ecx */
  push32((uint32_t)(ECX));
  /* 12364004 call 0x12364370 */
  push32(0x12364009u); f_12364370();
  /* 12364009 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236400c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1236400f:;
  /* 1236400f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364013 jle 0x12364028 */
  if ((C.zf||C.sf!=C.of)) goto L_12364028;
  /* 12364015 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12364018 push edx */
  push32((uint32_t)(EDX));
  /* 12364019 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1236401c push eax */
  push32((uint32_t)(EAX));
  /* 1236401d call 0x12364370 */
  push32(0x12364022u); f_12364370();
  /* 12364022 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12364025 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12364028:;
  /* 12364028 cmp dword ptr [0x123808bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123808bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236402f jne 0x12364054 */
  if (!C.zf) goto L_12364054;
  /* 12364031 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12364034 push ecx */
  push32((uint32_t)(ECX));
  /* 12364035 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12364038 push edx */
  push32((uint32_t)(EDX));
  /* 12364039 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1236403c push eax */
  push32((uint32_t)(EAX));
  /* 1236403d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12364040 push ecx */
  push32((uint32_t)(ECX));
  /* 12364041 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12364044 push edx */
  push32((uint32_t)(EDX));
  /* 12364045 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12364048 push eax */
  push32((uint32_t)(EAX));
  /* 12364049 call dword ptr [0x12383264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383264))), 0x1236404fu);
  /* 1236404f jmp 0x12364354 */
  goto L_12364354;
L_12364054:;
  /* 12364054 cmp dword ptr [0x123808bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123808bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236405b jne 0x12364352 */
  if (!C.zf) goto L_12364352;
  /* 12364061 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364065 jne 0x12364070 */
  if (!C.zf) goto L_12364070;
  /* 12364067 mov ecx, dword ptr [0x12380768] */
  ECX = (r32((uint32_t)(0x12380768)));
  /* 1236406d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12364070:;
  /* 12364070 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364074 je 0x12364080 */
  if (C.zf) goto L_12364080;
  /* 12364076 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236407a jne 0x123641fc */
  if (!C.zf) goto L_123641fc;
L_12364080:;
  /* 12364080 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12364083 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364086 jne 0x12364092 */
  if (!C.zf) goto L_12364092;
  /* 12364088 mov eax, 2 */
  EAX = (0x2u);
  /* 1236408d jmp 0x12364354 */
  goto L_12364354;
L_12364092:;
  /* 12364092 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364096 jle 0x123640a2 */
  if ((C.zf||C.sf!=C.of)) goto L_123640a2;
  /* 12364098 mov eax, 1 */
  EAX = (0x1u);
  /* 1236409d jmp 0x12364354 */
  goto L_12364354;
L_123640a2:;
  /* 123640a2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123640a6 jle 0x123640b2 */
  if ((C.zf||C.sf!=C.of)) goto L_123640b2;
  /* 123640a8 mov eax, 3 */
  EAX = (0x3u);
  /* 123640ad jmp 0x12364354 */
  goto L_12364354;
L_123640b2:;
  /* 123640b2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 123640b5 push eax */
  push32((uint32_t)(EAX));
  /* 123640b6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 123640b9 push ecx */
  push32((uint32_t)(ECX));
  /* 123640ba call dword ptr [0x12383364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383364))), 0x123640c0u);
  /* 123640c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123640c2 jne 0x123640cb */
  if (!C.zf) goto L_123640cb;
  /* 123640c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123640c6 jmp 0x12364354 */
  goto L_12364354;
L_123640cb:;
  /* 123640cb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123640cf jne 0x123640d7 */
  if (!C.zf) goto L_123640d7;
  /* 123640d1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123640d5 je 0x12364104 */
  if (C.zf) goto L_12364104;
L_123640d7:;
  /* 123640d7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123640db jne 0x123640e3 */
  if (!C.zf) goto L_123640e3;
  /* 123640dd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123640e1 je 0x12364104 */
  if (C.zf) goto L_12364104;
L_123640e3:;
  /* 123640e3 push 0x1237ca30 */
  push32((uint32_t)(0x1237ca30u));
  /* 123640e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123640ea push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 123640ef push 0x1237ca28 */
  push32((uint32_t)(0x1237ca28u));
  /* 123640f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 123640f6 call 0x12353480 */
  push32(0x123640fbu); f_12353480();
  /* 123640fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123640fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364101 jne 0x12364104 */
  if (!C.zf) goto L_12364104;
  /* 12364103 int3  */
  x86_unimpl("int3 @ 0x12364103");
L_12364104:;
  /* 12364104 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12364106 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12364108 jne 0x123640cb */
  if (!C.zf) goto L_123640cb;
  /* 1236410a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236410e jle 0x12364183 */
  if ((C.zf||C.sf!=C.of)) goto L_12364183;
  /* 12364110 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364114 jae 0x12364120 */
  if (!C.cf) goto L_12364120;
  /* 12364116 mov eax, 3 */
  EAX = (0x3u);
  /* 1236411b jmp 0x12364354 */
  goto L_12364354;
L_12364120:;
  /* 12364120 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12364123 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12364126 jmp 0x12364131 */
  goto L_12364131;
L_12364128:;
  /* 12364128 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1236412b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236412e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12364131:;
  /* 12364131 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12364134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12364136 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12364138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1236413a je 0x12364179 */
  if (C.zf) goto L_12364179;
  /* 1236413c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1236413f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12364141 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12364144 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12364146 je 0x12364179 */
  if (C.zf) goto L_12364179;
  /* 12364148 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1236414b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1236414d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1236414f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12364152 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12364154 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12364156 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364158 jl 0x12364177 */
  if ((C.sf!=C.of)) goto L_12364177;
  /* 1236415a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1236415d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1236415f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12364161 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12364164 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12364166 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12364169 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236416b jg 0x12364177 */
  if ((!C.zf&&C.sf==C.of)) goto L_12364177;
  /* 1236416d mov eax, 2 */
  EAX = (0x2u);
  /* 12364172 jmp 0x12364354 */
  goto L_12364354;
L_12364177:;
  /* 12364177 jmp 0x12364128 */
  goto L_12364128;
L_12364179:;
  /* 12364179 mov eax, 3 */
  EAX = (0x3u);
  /* 1236417e jmp 0x12364354 */
  goto L_12364354;
L_12364183:;
  /* 12364183 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364187 jle 0x123641fc */
  if ((C.zf||C.sf!=C.of)) goto L_123641fc;
  /* 12364189 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236418d jae 0x12364199 */
  if (!C.cf) goto L_12364199;
  /* 1236418f mov eax, 1 */
  EAX = (0x1u);
  /* 12364194 jmp 0x12364354 */
  goto L_12364354;
L_12364199:;
  /* 12364199 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1236419c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1236419f jmp 0x123641aa */
  goto L_123641aa;
L_123641a1:;
  /* 123641a1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 123641a4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123641a7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_123641aa:;
  /* 123641aa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 123641ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123641af mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123641b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123641b3 je 0x123641f2 */
  if (C.zf) goto L_123641f2;
  /* 123641b5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 123641b8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123641ba mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 123641bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123641bf je 0x123641f2 */
  if (C.zf) goto L_123641f2;
  /* 123641c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123641c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123641c6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123641c8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 123641cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123641cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123641cf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123641d1 jl 0x123641f0 */
  if ((C.sf!=C.of)) goto L_123641f0;
  /* 123641d3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123641d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123641d8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123641da mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 123641dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123641df mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 123641e2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123641e4 jg 0x123641f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_123641f0;
  /* 123641e6 mov eax, 2 */
  EAX = (0x2u);
  /* 123641eb jmp 0x12364354 */
  goto L_12364354;
L_123641f0:;
  /* 123641f0 jmp 0x123641a1 */
  goto L_123641a1;
L_123641f2:;
  /* 123641f2 mov eax, 1 */
  EAX = (0x1u);
  /* 123641f7 jmp 0x12364354 */
  goto L_12364354;
L_123641fc:;
  /* 123641fc push 0 */
  push32((uint32_t)(0x0u));
  /* 123641fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12364200 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12364203 push ecx */
  push32((uint32_t)(ECX));
  /* 12364204 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12364207 push edx */
  push32((uint32_t)(EDX));
  /* 12364208 push 9 */
  push32((uint32_t)(0x9u));
  /* 1236420a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1236420d push eax */
  push32((uint32_t)(EAX));
  /* 1236420e call dword ptr [0x12383370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383370))), 0x12364214u);
  /* 12364214 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12364217 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236421b jne 0x12364224 */
  if (!C.zf) goto L_12364224;
  /* 1236421d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236421f jmp 0x12364354 */
  goto L_12364354;
L_12364224:;
  /* 12364224 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1236422b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1236422e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12364230 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12364233 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12364235 call 0x12357560 */
  push32(0x1236423au); f_12357560();
  /* 1236423a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1236423d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12364240 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12364243 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12364246 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1236424d jmp 0x12364266 */
  goto L_12364266;
  /* 1236424f mov eax, 1 */
  EAX = (0x1u);
  /* 12364254 ret  */
  ESPCHK(0x12363f70u, _esp0);
  ESP += 4; return;
  /* 12364255 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12364258 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1236425f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12364266:;
  /* 12364266 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236426a jne 0x12364273 */
  if (!C.zf) goto L_12364273;
  /* 1236426c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236426e jmp 0x12364354 */
  goto L_12364354;
L_12364273:;
  /* 12364273 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12364276 push edx */
  push32((uint32_t)(EDX));
  /* 12364277 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1236427a push eax */
  push32((uint32_t)(EAX));
  /* 1236427b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1236427e push ecx */
  push32((uint32_t)(ECX));
  /* 1236427f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12364282 push edx */
  push32((uint32_t)(EDX));
  /* 12364283 push 1 */
  push32((uint32_t)(0x1u));
  /* 12364285 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12364288 push eax */
  push32((uint32_t)(EAX));
  /* 12364289 call dword ptr [0x12383370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383370))), 0x1236428fu);
  /* 1236428f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12364291 jne 0x1236429a */
  if (!C.zf) goto L_1236429a;
  /* 12364293 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12364295 jmp 0x12364354 */
  goto L_12364354;
L_1236429a:;
  /* 1236429a push 0 */
  push32((uint32_t)(0x0u));
  /* 1236429c push 0 */
  push32((uint32_t)(0x0u));
  /* 1236429e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123642a1 push ecx */
  push32((uint32_t)(ECX));
  /* 123642a2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123642a5 push edx */
  push32((uint32_t)(EDX));
  /* 123642a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 123642a8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 123642ab push eax */
  push32((uint32_t)(EAX));
  /* 123642ac call dword ptr [0x12383370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383370))), 0x123642b2u);
  /* 123642b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123642b5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123642b9 jne 0x123642c2 */
  if (!C.zf) goto L_123642c2;
  /* 123642bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123642bd jmp 0x12364354 */
  goto L_12364354;
L_123642c2:;
  /* 123642c2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123642c9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123642cc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123642ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123642d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123642d3 call 0x12357560 */
  push32(0x123642d8u); f_12357560();
  /* 123642d8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 123642db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123642de mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 123642e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 123642e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123642eb jmp 0x12364304 */
  goto L_12364304;
  /* 123642ed mov eax, 1 */
  EAX = (0x1u);
  /* 123642f2 ret  */
  ESPCHK(0x12363f70u, _esp0);
  ESP += 4; return;
  /* 123642f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123642f6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 123642fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12364304:;
  /* 12364304 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364308 jne 0x1236430e */
  if (!C.zf) goto L_1236430e;
  /* 1236430a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236430c jmp 0x12364354 */
  goto L_12364354;
L_1236430e:;
  /* 1236430e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12364311 push edx */
  push32((uint32_t)(EDX));
  /* 12364312 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12364315 push eax */
  push32((uint32_t)(EAX));
  /* 12364316 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12364319 push ecx */
  push32((uint32_t)(ECX));
  /* 1236431a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1236431d push edx */
  push32((uint32_t)(EDX));
  /* 1236431e push 1 */
  push32((uint32_t)(0x1u));
  /* 12364320 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12364323 push eax */
  push32((uint32_t)(EAX));
  /* 12364324 call dword ptr [0x12383370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383370))), 0x1236432au);
  /* 1236432a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1236432c jne 0x12364332 */
  if (!C.zf) goto L_12364332;
  /* 1236432e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12364330 jmp 0x12364354 */
  goto L_12364354;
L_12364332:;
  /* 12364332 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12364335 push ecx */
  push32((uint32_t)(ECX));
  /* 12364336 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12364339 push edx */
  push32((uint32_t)(EDX));
  /* 1236433a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1236433d push eax */
  push32((uint32_t)(EAX));
  /* 1236433e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12364341 push ecx */
  push32((uint32_t)(ECX));
  /* 12364342 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12364345 push edx */
  push32((uint32_t)(EDX));
  /* 12364346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12364349 push eax */
  push32((uint32_t)(EAX));
  /* 1236434a call dword ptr [0x12383260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383260))), 0x12364350u);
  /* 12364350 jmp 0x12364354 */
  goto L_12364354;
L_12364352:;
  /* 12364352 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12364354:;
  /* 12364354 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12364357 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1236435a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12364361 pop edi */
  EDI = (pop32());
  /* 12364362 pop esi */
  ESI = (pop32());
  /* 12364363 pop ebx */
  EBX = (pop32());
  /* 12364364 mov esp, ebp */
  ESP = (EBP);
  /* 12364366 pop ebp */
  EBP = (pop32());
  /* 12364367 ret  */
  ESPCHK(0x12363f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10014370 @ 0x12364370 (80 bytes, 32 insns) */
void f_12364370(void) {
  FTRACE(0x12364370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12364370 push ebp */
  push32((uint32_t)(EBP));
  /* 12364371 mov ebp, esp */
  EBP = (ESP);
  /* 12364373 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12364376 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12364379 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1236437c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236437f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12364382:;
  /* 12364382 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12364385 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12364388 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1236438b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1236438e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12364390 je 0x123643a7 */
  if (C.zf) goto L_123643a7;
  /* 12364392 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12364395 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12364398 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1236439a je 0x123643a7 */
  if (C.zf) goto L_123643a7;
  /* 1236439c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1236439f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123643a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123643a5 jmp 0x12364382 */
  goto L_12364382;
L_123643a7:;
  /* 123643a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123643aa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123643ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123643af jne 0x123643b9 */
  if (!C.zf) goto L_123643b9;
  /* 123643b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123643b4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123643b7 jmp 0x123643bc */
  goto L_123643bc;
L_123643b9:;
  /* 123643b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_123643bc:;
  /* 123643bc mov esp, ebp */
  ESP = (EBP);
  /* 123643be pop ebp */
  EBP = (pop32());
  /* 123643bf ret  */
  ESPCHK(0x12364370u, _esp0);
  ESP += 4; return;
}

/* FUN_100143c0 @ 0x123643c0 (736 bytes, 224 insns) */
void f_123643c0(void) {
  FTRACE(0x123643c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123643c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123643c1 mov ebp, esp */
  EBP = (ESP);
  /* 123643c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123643c6 push esi */
  push32((uint32_t)(ESI));
  /* 123643c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123643cb je 0x123643ec */
  if (C.zf) goto L_123643ec;
  /* 123643cd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 123643cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123643d2 push eax */
  push32((uint32_t)(EAX));
  /* 123643d3 call 0x12364810 */
  push32(0x123643d8u); f_12364810();
  /* 123643d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123643db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123643de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123643e2 je 0x123643ec */
  if (C.zf) goto L_123643ec;
  /* 123643e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123643e7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123643ea jne 0x123643f4 */
  if (!C.zf) goto L_123643f4;
L_123643ec:;
  /* 123643ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123643ef jmp 0x1236469b */
  goto L_1236469b;
L_123643f4:;
  /* 123643f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123643f7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 123643fb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123643fd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123643ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12364400 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12364403 mov ecx, dword ptr [0x12380578] */
  ECX = (r32((uint32_t)(0x12380578)));
  /* 12364409 cmp ecx, dword ptr [0x1238057c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1238057c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236440f jne 0x12364425 */
  if (!C.zf) goto L_12364425;
  /* 12364411 mov edx, dword ptr [0x12380578] */
  EDX = (r32((uint32_t)(0x12380578)));
  /* 12364417 push edx */
  push32((uint32_t)(EDX));
  /* 12364418 call 0x12364720 */
  push32(0x1236441du); f_12364720();
  /* 1236441d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12364420 mov dword ptr [0x12380578], eax */
  w32((uint32_t)(0x12380578), (EAX));
L_12364425:;
  /* 12364425 cmp dword ptr [0x12380578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236442c jne 0x123644e5 */
  if (!C.zf) goto L_123644e5;
  /* 12364432 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364436 je 0x12364457 */
  if (C.zf) goto L_12364457;
  /* 12364438 cmp dword ptr [0x12380580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236443f je 0x12364457 */
  if (C.zf) goto L_12364457;
  /* 12364441 call 0x12363ec0 */
  push32(0x12364446u); f_12363ec0();
  /* 12364446 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12364448 je 0x12364452 */
  if (C.zf) goto L_12364452;
  /* 1236444a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1236444d jmp 0x1236469b */
  goto L_1236469b;
L_12364452:;
  /* 12364452 jmp 0x123644e5 */
  goto L_123644e5;
L_12364457:;
  /* 12364457 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236445b je 0x12364464 */
  if (C.zf) goto L_12364464;
  /* 1236445d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236445f jmp 0x1236469b */
  goto L_1236469b;
L_12364464:;
  /* 12364464 cmp dword ptr [0x12380578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236446b jne 0x123644a4 */
  if (!C.zf) goto L_123644a4;
  /* 1236446d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12364472 push 0x1237ca88 */
  push32((uint32_t)(0x1237ca88u));
  /* 12364477 push 2 */
  push32((uint32_t)(0x2u));
  /* 12364479 push 4 */
  push32((uint32_t)(0x4u));
  /* 1236447b call 0x123543c0 */
  push32(0x12364480u); f_123543c0();
  /* 12364480 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12364483 mov dword ptr [0x12380578], eax */
  w32((uint32_t)(0x12380578), (EAX));
  /* 12364488 cmp dword ptr [0x12380578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236448f jne 0x12364499 */
  if (!C.zf) goto L_12364499;
  /* 12364491 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12364494 jmp 0x1236469b */
  goto L_1236469b;
L_12364499:;
  /* 12364499 mov eax, dword ptr [0x12380578] */
  EAX = (r32((uint32_t)(0x12380578)));
  /* 1236449e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_123644a4:;
  /* 123644a4 cmp dword ptr [0x12380580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123644ab jne 0x123644e5 */
  if (!C.zf) goto L_123644e5;
  /* 123644ad push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 123644b2 push 0x1237ca88 */
  push32((uint32_t)(0x1237ca88u));
  /* 123644b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123644b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 123644bb call 0x123543c0 */
  push32(0x123644c0u); f_123543c0();
  /* 123644c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123644c3 mov dword ptr [0x12380580], eax */
  w32((uint32_t)(0x12380580), (EAX));
  /* 123644c8 cmp dword ptr [0x12380580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123644cf jne 0x123644d9 */
  if (!C.zf) goto L_123644d9;
  /* 123644d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123644d4 jmp 0x1236469b */
  goto L_1236469b;
L_123644d9:;
  /* 123644d9 mov ecx, dword ptr [0x12380580] */
  ECX = (r32((uint32_t)(0x12380580)));
  /* 123644df mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_123644e5:;
  /* 123644e5 mov edx, dword ptr [0x12380578] */
  EDX = (r32((uint32_t)(0x12380578)));
  /* 123644eb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123644ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123644f1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123644f4 push eax */
  push32((uint32_t)(EAX));
  /* 123644f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123644f8 push ecx */
  push32((uint32_t)(ECX));
  /* 123644f9 call 0x123646a0 */
  push32(0x123644feu); f_123646a0();
  /* 123644fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12364501 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12364504 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364508 jl 0x123645a1 */
  if ((C.sf!=C.of)) goto L_123645a1;
  /* 1236450e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12364511 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364514 je 0x123645a1 */
  if (C.zf) goto L_123645a1;
  /* 1236451a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236451e je 0x12364593 */
  if (C.zf) goto L_12364593;
  /* 12364520 push 2 */
  push32((uint32_t)(0x2u));
  /* 12364522 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12364525 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12364528 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1236452b push edx */
  push32((uint32_t)(EDX));
  /* 1236452c call 0x12354e50 */
  push32(0x12364531u); f_12354e50();
  /* 12364531 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12364534 jmp 0x1236453f */
  goto L_1236453f;
L_12364536:;
  /* 12364536 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12364539 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236453c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1236453f:;
  /* 1236453f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12364542 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12364545 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364549 je 0x12364560 */
  if (C.zf) goto L_12364560;
  /* 1236454b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1236454e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12364551 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12364554 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12364557 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1236455b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1236455e jmp 0x12364536 */
  goto L_12364536;
L_12364560:;
  /* 12364560 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12364565 push 0x1237ca88 */
  push32((uint32_t)(0x1237ca88u));
  /* 1236456a push 2 */
  push32((uint32_t)(0x2u));
  /* 1236456c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1236456f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12364572 push eax */
  push32((uint32_t)(EAX));
  /* 12364573 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12364576 push ecx */
  push32((uint32_t)(ECX));
  /* 12364577 call 0x12354850 */
  push32(0x1236457cu); f_12354850();
  /* 1236457c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236457f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12364582 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364586 je 0x12364591 */
  if (C.zf) goto L_12364591;
  /* 12364588 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1236458b mov dword ptr [0x12380578], edx */
  w32((uint32_t)(0x12380578), (EDX));
L_12364591:;
  /* 12364591 jmp 0x1236459f */
  goto L_1236459f;
L_12364593:;
  /* 12364593 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12364596 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12364599 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236459c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1236459f:;
  /* 1236459f jmp 0x12364614 */
  goto L_12364614;
L_123645a1:;
  /* 123645a1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123645a5 jne 0x1236460d */
  if (!C.zf) goto L_1236460d;
  /* 123645a7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123645ab jge 0x123645b5 */
  if ((C.sf==C.of)) goto L_123645b5;
  /* 123645ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123645b0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123645b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123645b5:;
  /* 123645b5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 123645ba push 0x1237ca88 */
  push32((uint32_t)(0x1237ca88u));
  /* 123645bf push 2 */
  push32((uint32_t)(0x2u));
  /* 123645c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123645c4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 123645cb push edx */
  push32((uint32_t)(EDX));
  /* 123645cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123645cf push eax */
  push32((uint32_t)(EAX));
  /* 123645d0 call 0x12354850 */
  push32(0x123645d5u); f_12354850();
  /* 123645d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123645d8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123645db cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123645df jne 0x123645e9 */
  if (!C.zf) goto L_123645e9;
  /* 123645e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123645e4 jmp 0x1236469b */
  goto L_1236469b;
L_123645e9:;
  /* 123645e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123645ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123645ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123645f2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 123645f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123645f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123645fb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12364603 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12364606 mov dword ptr [0x12380578], eax */
  w32((uint32_t)(0x12380578), (EAX));
  /* 1236460b jmp 0x12364614 */
  goto L_12364614;
L_1236460d:;
  /* 1236460d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236460f jmp 0x1236469b */
  goto L_1236469b;
L_12364614:;
  /* 12364614 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364618 je 0x12364699 */
  if (C.zf) goto L_12364699;
  /* 1236461a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1236461f push 0x1237ca88 */
  push32((uint32_t)(0x1237ca88u));
  /* 12364624 push 2 */
  push32((uint32_t)(0x2u));
  /* 12364626 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12364629 push ecx */
  push32((uint32_t)(ECX));
  /* 1236462a call 0x123571f0 */
  push32(0x1236462fu); f_123571f0();
  /* 1236462f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12364632 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12364635 push eax */
  push32((uint32_t)(EAX));
  /* 12364636 call 0x123543c0 */
  push32(0x1236463bu); f_123543c0();
  /* 1236463b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236463e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12364641 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364645 je 0x12364699 */
  if (C.zf) goto L_12364699;
  /* 12364647 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236464a push edx */
  push32((uint32_t)(EDX));
  /* 1236464b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1236464e push eax */
  push32((uint32_t)(EAX));
  /* 1236464f call 0x12357370 */
  push32(0x12364654u); f_12357370();
  /* 12364654 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12364657 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1236465a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1236465d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12364660 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12364662 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12364665 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12364668 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1236466b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1236466e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12364671 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12364674 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12364677 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12364679 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1236467b not edx */
  EDX = (~(EDX));
  /* 1236467d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12364680 push edx */
  push32((uint32_t)(EDX));
  /* 12364681 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12364684 push eax */
  push32((uint32_t)(EAX));
  /* 12364685 call dword ptr [0x1238325c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238325c))), 0x1236468bu);
  /* 1236468b push 2 */
  push32((uint32_t)(0x2u));
  /* 1236468d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12364690 push ecx */
  push32((uint32_t)(ECX));
  /* 12364691 call 0x12354e50 */
  push32(0x12364696u); f_12354e50();
  /* 12364696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12364699:;
  /* 12364699 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1236469b:;
  /* 1236469b pop esi */
  ESI = (pop32());
  /* 1236469c mov esp, ebp */
  ESP = (EBP);
  /* 1236469e pop ebp */
  EBP = (pop32());
  /* 1236469f ret  */
  ESPCHK(0x123643c0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x123646a0 (124 bytes, 47 insns) */
void f_123646a0(void) {
  FTRACE(0x123646a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123646a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123646a1 mov ebp, esp */
  EBP = (ESP);
  /* 123646a3 push ecx */
  push32((uint32_t)(ECX));
  /* 123646a4 mov eax, dword ptr [0x12380578] */
  EAX = (r32((uint32_t)(0x12380578)));
  /* 123646a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123646ac jmp 0x123646b7 */
  goto L_123646b7;
L_123646ae:;
  /* 123646ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123646b1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123646b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123646b7:;
  /* 123646b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123646ba cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123646bd je 0x1236470a */
  if (C.zf) goto L_1236470a;
  /* 123646bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123646c2 push eax */
  push32((uint32_t)(EAX));
  /* 123646c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123646c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123646c8 push edx */
  push32((uint32_t)(EDX));
  /* 123646c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123646cc push eax */
  push32((uint32_t)(EAX));
  /* 123646cd call 0x12363e70 */
  push32(0x123646d2u); f_12363e70();
  /* 123646d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123646d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123646d7 jne 0x12364708 */
  if (!C.zf) goto L_12364708;
  /* 123646d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123646dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123646de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123646e1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 123646e5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123646e8 je 0x123646fa */
  if (C.zf) goto L_123646fa;
  /* 123646ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123646ed mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123646ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123646f2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 123646f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123646f8 jne 0x12364708 */
  if (!C.zf) goto L_12364708;
L_123646fa:;
  /* 123646fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123646fd sub eax, dword ptr [0x12380578] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12380578))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12364703 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12364706 jmp 0x12364718 */
  goto L_12364718;
L_12364708:;
  /* 12364708 jmp 0x123646ae */
  goto L_123646ae;
L_1236470a:;
  /* 1236470a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1236470d sub eax, dword ptr [0x12380578] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12380578))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12364713 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12364716 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12364718:;
  /* 12364718 mov esp, ebp */
  ESP = (EBP);
  /* 1236471a pop ebp */
  EBP = (pop32());
  /* 1236471b ret  */
  ESPCHK(0x123646a0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12364720 (238 bytes, 80 insns) */
void f_12364720(void) {
  FTRACE(0x12364720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12364720 push ebp */
  push32((uint32_t)(EBP));
  /* 12364721 mov ebp, esp */
  EBP = (ESP);
  /* 12364723 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12364726 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1236472d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12364730 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12364733 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364737 jne 0x12364740 */
  if (!C.zf) goto L_12364740;
  /* 12364739 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1236473b jmp 0x1236480a */
  goto L_1236480a;
L_12364740:;
  /* 12364740 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12364743 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12364745 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12364748 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236474b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1236474e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12364750 je 0x1236475d */
  if (C.zf) goto L_1236475d;
  /* 12364752 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12364755 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12364758 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1236475b jmp 0x12364740 */
  goto L_12364740;
L_1236475d:;
  /* 1236475d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12364762 push 0x1237ca88 */
  push32((uint32_t)(0x1237ca88u));
  /* 12364767 push 2 */
  push32((uint32_t)(0x2u));
  /* 12364769 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1236476c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12364773 push eax */
  push32((uint32_t)(EAX));
  /* 12364774 call 0x123543c0 */
  push32(0x12364779u); f_123543c0();
  /* 12364779 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236477c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1236477f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12364782 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12364785 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12364789 jne 0x12364795 */
  if (!C.zf) goto L_12364795;
  /* 1236478b push 9 */
  push32((uint32_t)(0x9u));
  /* 1236478d call 0x12353330 */
  push32(0x12364792u); f_12353330();
  /* 12364792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12364795:;
  /* 12364795 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12364798 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1236479b:;
  /* 1236479b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1236479e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123647a1 je 0x123647fe */
  if (C.zf) goto L_123647fe;
  /* 123647a3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 123647a8 push 0x1237ca88 */
  push32((uint32_t)(0x1237ca88u));
  /* 123647ad push 2 */
  push32((uint32_t)(0x2u));
  /* 123647af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123647b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123647b4 push edx */
  push32((uint32_t)(EDX));
  /* 123647b5 call 0x123571f0 */
  push32(0x123647bau); f_123571f0();
  /* 123647ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123647bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123647c0 push eax */
  push32((uint32_t)(EAX));
  /* 123647c1 call 0x123543c0 */
  push32(0x123647c6u); f_123543c0();
  /* 123647c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123647c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123647cc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123647ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123647d1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123647d4 je 0x123647ea */
  if (C.zf) goto L_123647ea;
  /* 123647d6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123647d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123647db push ecx */
  push32((uint32_t)(ECX));
  /* 123647dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123647df mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123647e1 push eax */
  push32((uint32_t)(EAX));
  /* 123647e2 call 0x12357370 */
  push32(0x123647e7u); f_12357370();
  /* 123647e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123647ea:;
  /* 123647ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123647ed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123647f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123647f3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123647f6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123647f9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123647fc jmp 0x1236479b */
  goto L_1236479b;
L_123647fe:;
  /* 123647fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12364801 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12364807 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1236480a:;
  /* 1236480a mov esp, ebp */
  ESP = (EBP);
  /* 1236480c pop ebp */
  EBP = (pop32());
  /* 1236480d ret  */
  ESPCHK(0x12364720u, _esp0);
  ESP += 4; return;
}

/* FUN_10014810 @ 0x12364810 (237 bytes, 81 insns) */
void f_12364810(void) {
  FTRACE(0x12364810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12364810 push ebp */
  push32((uint32_t)(EBP));
  /* 12364811 mov ebp, esp */
  EBP = (ESP);
  /* 12364813 push ecx */
  push32((uint32_t)(ECX));
  /* 12364814 cmp dword ptr [0x12381ccc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12381ccc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1236481b jne 0x12364832 */
  if (!C.zf) goto L_12364832;
  /* 1236481d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12364820 push eax */
  push32((uint32_t)(EAX));
  /* 12364821 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12364824 push ecx */
  push32((uint32_t)(ECX));
  /* 12364825 call 0x12364910 */
  push32(0x1236482au); f_12364910();
  /* 1236482a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236482d jmp 0x123648f9 */
  goto L_123648f9;
L_12364832:;
  /* 12364832 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12364834 call 0x12357dc0 */
  push32(0x12364839u); f_12357dc0();
  /* 12364839 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1236483c jmp 0x12364847 */
  goto L_12364847;
L_1236483e:;
  /* 1236483e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12364841 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12364844 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12364847:;
  /* 12364847 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1236484a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1236484e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12364852 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12364855 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1236485b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1236485d je 0x123648db */
  if (C.zf) goto L_123648db;
  /* 1236485f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12364862 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12364867 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12364869 mov cl, byte ptr [eax + 0x12381de1] */
  CL = (r8((uint32_t)(EAX + 0x12381de1)));
  /* 1236486f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12364872 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12364874 je 0x123648c6 */
  if (C.zf) goto L_123648c6;
  /* 12364876 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12364879 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1236487c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1236487f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12364882 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12364884 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12364886 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12364888 jne 0x12364898 */
  if (!C.zf) goto L_12364898;
  /* 1236488a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1236488c call 0x12357e60 */
  push32(0x12364891u); f_12357e60();
  /* 12364891 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12364894 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12364896 jmp 0x123648f9 */
  goto L_123648f9;
L_12364898:;
  /* 12364898 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1236489b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123648a1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 123648a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123648a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123648a9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123648ab or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123648ad cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123648b0 jne 0x123648c4 */
  if (!C.zf) goto L_123648c4;
  /* 123648b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123648b4 call 0x12357e60 */
  push32(0x123648b9u); f_12357e60();
  /* 123648b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123648bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123648bf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123648c2 jmp 0x123648f9 */
  goto L_123648f9;
L_123648c4:;
  /* 123648c4 jmp 0x123648d6 */
  goto L_123648d6;
L_123648c6:;
  /* 123648c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123648c9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123648cf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123648d2 jne 0x123648d6 */
  if (!C.zf) goto L_123648d6;
  /* 123648d4 jmp 0x123648db */
  goto L_123648db;
L_123648d6:;
  /* 123648d6 jmp 0x1236483e */
  goto L_1236483e;
L_123648db:;
  /* 123648db push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123648dd call 0x12357e60 */
  push32(0x123648e2u); f_12357e60();
  /* 123648e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123648e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123648e8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123648ed cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123648f0 jne 0x123648f7 */
  if (!C.zf) goto L_123648f7;
  /* 123648f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123648f5 jmp 0x123648f9 */
  goto L_123648f9;
L_123648f7:;
  /* 123648f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123648f9:;
  /* 123648f9 mov esp, ebp */
  ESP = (EBP);
  /* 123648fb pop ebp */
  EBP = (pop32());
  /* 123648fc ret  */
  ESPCHK(0x12364810u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12364910 (193 bytes, 87 insns) */
void f_12364910(void) {
  FTRACE(0x12364910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12364910 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12364912 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12364916 push ebx */
  push32((uint32_t)(EBX));
  /* 12364917 mov ebx, eax */
  EBX = (EAX);
  /* 12364919 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1236491c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12364920 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12364926 je 0x1236493b */
  if (C.zf) goto L_1236493b;
L_12364928:;
  /* 12364928 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1236492a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1236492b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1236492d je 0x12364900 */
  if (C.zf) { jmp_ind(0x12364900u); return; }
  /* 1236492f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12364931 je 0x12364984 */
  if (C.zf) goto L_12364984;
  /* 12364933 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12364939 jne 0x12364928 */
  if (!C.zf) goto L_12364928;
L_1236493b:;
  /* 1236493b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1236493d push edi */
  push32((uint32_t)(EDI));
  /* 1236493e mov eax, ebx */
  EAX = (EBX);
  /* 12364940 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12364943 push esi */
  push32((uint32_t)(ESI));
  /* 12364944 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12364946:;
  /* 12364946 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12364948 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1236494d mov eax, ecx */
  EAX = (ECX);
  /* 1236494f mov esi, edi */
  ESI = (EDI);
  /* 12364951 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12364953 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12364955 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12364957 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1236495a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1236495d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1236495f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12364961 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12364964 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1236496a jne 0x12364988 */
  if (!C.zf) goto L_12364988;
  /* 1236496c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12364971 je 0x12364946 */
  if (C.zf) goto L_12364946;
  /* 12364973 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12364978 jne 0x12364982 */
  if (!C.zf) goto L_12364982;
  /* 1236497a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12364980 jne 0x12364946 */
  if (!C.zf) goto L_12364946;
L_12364982:;
  /* 12364982 pop esi */
  ESI = (pop32());
  /* 12364983 pop edi */
  EDI = (pop32());
L_12364984:;
  /* 12364984 pop ebx */
  EBX = (pop32());
  /* 12364985 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12364987 ret  */
  ESPCHK(0x12364910u, _esp0);
  ESP += 4; return;
L_12364988:;
  /* 12364988 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1236498b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1236498d je 0x123649c5 */
  if (C.zf) goto L_123649c5;
  /* 1236498f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12364991 je 0x12364982 */
  if (C.zf) goto L_12364982;
  /* 12364993 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12364995 je 0x123649be */
  if (C.zf) goto L_123649be;
  /* 12364997 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12364999 je 0x12364982 */
  if (C.zf) goto L_12364982;
  /* 1236499b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1236499e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123649a0 je 0x123649b7 */
  if (C.zf) goto L_123649b7;
  /* 123649a2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123649a4 je 0x12364982 */
  if (C.zf) goto L_12364982;
  /* 123649a6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123649a8 je 0x123649b0 */
  if (C.zf) goto L_123649b0;
  /* 123649aa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 123649ac je 0x12364982 */
  if (C.zf) goto L_12364982;
  /* 123649ae jmp 0x12364946 */
  goto L_12364946;
L_123649b0:;
  /* 123649b0 pop esi */
  ESI = (pop32());
  /* 123649b1 pop edi */
  EDI = (pop32());
  /* 123649b2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 123649b5 pop ebx */
  EBX = (pop32());
  /* 123649b6 ret  */
  ESPCHK(0x12364910u, _esp0);
  ESP += 4; return;
L_123649b7:;
  /* 123649b7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 123649ba pop esi */
  ESI = (pop32());
  /* 123649bb pop edi */
  EDI = (pop32());
  /* 123649bc pop ebx */
  EBX = (pop32());
  /* 123649bd ret  */
  ESPCHK(0x12364910u, _esp0);
  ESP += 4; return;
L_123649be:;
  /* 123649be lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 123649c1 pop esi */
  ESI = (pop32());
  /* 123649c2 pop edi */
  EDI = (pop32());
  /* 123649c3 pop ebx */
  EBX = (pop32());
  /* 123649c4 ret  */
  ESPCHK(0x12364910u, _esp0);
  ESP += 4; return;
L_123649c5:;
  /* 123649c5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 123649c8 pop esi */
  ESI = (pop32());
  /* 123649c9 pop edi */
  EDI = (pop32());
  /* 123649ca pop ebx */
  EBX = (pop32());
  /* 123649cb ret  */
  ESPCHK(0x12364910u, _esp0);
  ESP += 4; return;
  /* 123649cc jmp dword ptr [0x123832ac] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x123832ac)))); return;
}

/* RtlUnwind @ 0x12364b1c (6 bytes, 1 insns) */
void f_12364b1c(void) {
  FTRACE(0x12364b1cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12364b1c jmp dword ptr [0x12383298] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12383298)))); return;
}

