#include "recomp.h"

/* FUN_100113c0 @ 0x126713c0 (289 bytes, 97 insns) */
void f_126713c0(void) {
  FTRACE(0x126713c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126713c0 push ebp */
  push32((uint32_t)(EBP));
  /* 126713c1 mov ebp, esp */
  EBP = (ESP);
  /* 126713c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126713c6 push esi */
  push32((uint32_t)(ESI));
  /* 126713c7 mov eax, dword ptr [0x1268fc98] */
  EAX = (r32((uint32_t)(0x1268fc98)));
  /* 126713cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126713cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 126713d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 126713dd jmp 0x126713e8 */
  goto L_126713e8;
L_126713df:;
  /* 126713df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126713e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126713e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_126713e8:;
  /* 126713e8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126713ec jae 0x12671421 */
  if (!C.cf) goto L_12671421;
  /* 126713ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126713f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126713f4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 126713f7 push ecx */
  push32((uint32_t)(ECX));
  /* 126713f8 call 0x126674a0 */
  push32(0x126713fdu); f_126674a0();
  /* 126713fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671400 mov esi, eax */
  ESI = (EAX);
  /* 12671402 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12671405 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671408 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1267140c push ecx */
  push32((uint32_t)(ECX));
  /* 1267140d call 0x126674a0 */
  push32(0x12671412u); f_126674a0();
  /* 12671412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671415 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671418 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1267141c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1267141f jmp 0x126713df */
  goto L_126713df;
L_12671421:;
  /* 12671421 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12671424 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671427 push eax */
  push32((uint32_t)(EAX));
  /* 12671428 call 0x12664650 */
  push32(0x1267142du); f_12664650();
  /* 1267142d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671430 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12671433 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671437 je 0x126714d9 */
  if (C.zf) goto L_126714d9;
  /* 1267143d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12671440 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12671443 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1267144a jmp 0x12671455 */
  goto L_12671455;
L_1267144c:;
  /* 1267144c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1267144f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671452 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12671455:;
  /* 12671455 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671459 jae 0x126714ca */
  if (!C.cf) goto L_126714ca;
  /* 1267145b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1267145e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12671461 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671464 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671467 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1267146a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1267146d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671470 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12671473 push ecx */
  push32((uint32_t)(ECX));
  /* 12671474 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671477 push edx */
  push32((uint32_t)(EDX));
  /* 12671478 call 0x12667620 */
  push32(0x1267147du); f_12667620();
  /* 1267147d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671480 push eax */
  push32((uint32_t)(EAX));
  /* 12671481 call 0x126674a0 */
  push32(0x12671486u); f_126674a0();
  /* 12671486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671489 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1267148c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267148e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12671491 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671494 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12671497 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1267149a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267149d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 126714a0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126714a3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126714a6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 126714aa push eax */
  push32((uint32_t)(EAX));
  /* 126714ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126714ae push ecx */
  push32((uint32_t)(ECX));
  /* 126714af call 0x12667620 */
  push32(0x126714b4u); f_12667620();
  /* 126714b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126714b7 push eax */
  push32((uint32_t)(EAX));
  /* 126714b8 call 0x126674a0 */
  push32(0x126714bdu); f_126674a0();
  /* 126714bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126714c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126714c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126714c5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 126714c8 jmp 0x1267144c */
  goto L_1267144c;
L_126714ca:;
  /* 126714ca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 126714cd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 126714d0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126714d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126714d6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_126714d9:;
  /* 126714d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126714dc pop esi */
  ESI = (pop32());
  /* 126714dd mov esp, ebp */
  ESP = (EBP);
  /* 126714df pop ebp */
  EBP = (pop32());
  /* 126714e0 ret  */
  ESPCHK(0x126713c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100114f0 @ 0x126714f0 (291 bytes, 97 insns) */
void f_126714f0(void) {
  FTRACE(0x126714f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126714f0 push ebp */
  push32((uint32_t)(EBP));
  /* 126714f1 mov ebp, esp */
  EBP = (ESP);
  /* 126714f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126714f6 push esi */
  push32((uint32_t)(ESI));
  /* 126714f7 mov eax, dword ptr [0x1268fc98] */
  EAX = (r32((uint32_t)(0x1268fc98)));
  /* 126714fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126714ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12671506 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1267150d jmp 0x12671518 */
  goto L_12671518;
L_1267150f:;
  /* 1267150f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12671512 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671515 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12671518:;
  /* 12671518 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267151c jae 0x12671552 */
  if (!C.cf) goto L_12671552;
  /* 1267151e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12671521 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671524 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12671528 push ecx */
  push32((uint32_t)(ECX));
  /* 12671529 call 0x126674a0 */
  push32(0x1267152eu); f_126674a0();
  /* 1267152e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671531 mov esi, eax */
  ESI = (EAX);
  /* 12671533 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12671536 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671539 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1267153d push ecx */
  push32((uint32_t)(ECX));
  /* 1267153e call 0x126674a0 */
  push32(0x12671543u); f_126674a0();
  /* 12671543 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671546 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671549 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1267154d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12671550 jmp 0x1267150f */
  goto L_1267150f;
L_12671552:;
  /* 12671552 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12671555 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671558 push eax */
  push32((uint32_t)(EAX));
  /* 12671559 call 0x12664650 */
  push32(0x1267155eu); f_12664650();
  /* 1267155e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671561 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12671564 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671568 je 0x1267160b */
  if (C.zf) goto L_1267160b;
  /* 1267156e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12671571 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12671574 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1267157b jmp 0x12671586 */
  goto L_12671586;
L_1267157d:;
  /* 1267157d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12671580 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671583 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12671586:;
  /* 12671586 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267158a jae 0x126715fc */
  if (!C.cf) goto L_126715fc;
  /* 1267158c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1267158f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12671592 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671595 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671598 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1267159b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1267159e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126715a1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 126715a5 push ecx */
  push32((uint32_t)(ECX));
  /* 126715a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126715a9 push edx */
  push32((uint32_t)(EDX));
  /* 126715aa call 0x12667620 */
  push32(0x126715afu); f_12667620();
  /* 126715af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126715b2 push eax */
  push32((uint32_t)(EAX));
  /* 126715b3 call 0x126674a0 */
  push32(0x126715b8u); f_126674a0();
  /* 126715b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126715bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126715be add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126715c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 126715c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126715c6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 126715c9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 126715cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126715cf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 126715d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126715d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126715d8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 126715dc push eax */
  push32((uint32_t)(EAX));
  /* 126715dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126715e0 push ecx */
  push32((uint32_t)(ECX));
  /* 126715e1 call 0x12667620 */
  push32(0x126715e6u); f_12667620();
  /* 126715e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126715e9 push eax */
  push32((uint32_t)(EAX));
  /* 126715ea call 0x126674a0 */
  push32(0x126715efu); f_126674a0();
  /* 126715ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126715f2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126715f5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126715f7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 126715fa jmp 0x1267157d */
  goto L_1267157d;
L_126715fc:;
  /* 126715fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 126715ff mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12671602 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671605 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671608 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1267160b:;
  /* 1267160b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267160e pop esi */
  ESI = (pop32());
  /* 1267160f mov esp, ebp */
  ESP = (EBP);
  /* 12671611 pop ebp */
  EBP = (pop32());
  /* 12671612 ret  */
  ESPCHK(0x126714f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011620 @ 0x12671620 (878 bytes, 273 insns) */
void f_12671620(void) {
  FTRACE(0x12671620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12671620 push ebp */
  push32((uint32_t)(EBP));
  /* 12671621 mov ebp, esp */
  EBP = (ESP);
  /* 12671623 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12671626 push esi */
  push32((uint32_t)(ESI));
  /* 12671627 mov eax, dword ptr [0x1268fc98] */
  EAX = (r32((uint32_t)(0x1268fc98)));
  /* 1267162c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1267162f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12671636 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1267163d jmp 0x12671648 */
  goto L_12671648;
L_1267163f:;
  /* 1267163f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12671642 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671645 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12671648:;
  /* 12671648 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267164c jae 0x12671681 */
  if (!C.cf) goto L_12671681;
  /* 1267164e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12671651 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671654 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12671657 push ecx */
  push32((uint32_t)(ECX));
  /* 12671658 call 0x126674a0 */
  push32(0x1267165du); f_126674a0();
  /* 1267165d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671660 mov esi, eax */
  ESI = (EAX);
  /* 12671662 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12671665 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671668 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1267166c push ecx */
  push32((uint32_t)(ECX));
  /* 1267166d call 0x126674a0 */
  push32(0x12671672u); f_126674a0();
  /* 12671672 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671675 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671678 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1267167c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1267167f jmp 0x1267163f */
  goto L_1267163f;
L_12671681:;
  /* 12671681 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12671688 jmp 0x12671693 */
  goto L_12671693;
L_1267168a:;
  /* 1267168a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1267168d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671690 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12671693:;
  /* 12671693 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671697 jae 0x126716cd */
  if (!C.cf) goto L_126716cd;
  /* 12671699 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1267169c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267169f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 126716a3 push eax */
  push32((uint32_t)(EAX));
  /* 126716a4 call 0x126674a0 */
  push32(0x126716a9u); f_126674a0();
  /* 126716a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126716ac mov esi, eax */
  ESI = (EAX);
  /* 126716ae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126716b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126716b4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 126716b8 push eax */
  push32((uint32_t)(EAX));
  /* 126716b9 call 0x126674a0 */
  push32(0x126716beu); f_126674a0();
  /* 126716be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126716c1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126716c4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 126716c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 126716cb jmp 0x1267168a */
  goto L_1267168a;
L_126716cd:;
  /* 126716cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126716d0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 126716d6 push eax */
  push32((uint32_t)(EAX));
  /* 126716d7 call 0x126674a0 */
  push32(0x126716dcu); f_126674a0();
  /* 126716dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126716df mov esi, eax */
  ESI = (EAX);
  /* 126716e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126716e4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 126716ea push edx */
  push32((uint32_t)(EDX));
  /* 126716eb call 0x126674a0 */
  push32(0x126716f0u); f_126674a0();
  /* 126716f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126716f3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126716f6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 126716fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126716fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671700 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12671706 push edx */
  push32((uint32_t)(EDX));
  /* 12671707 call 0x126674a0 */
  push32(0x1267170cu); f_126674a0();
  /* 1267170c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267170f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12671712 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12671716 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12671719 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267171c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12671722 push ecx */
  push32((uint32_t)(ECX));
  /* 12671723 call 0x126674a0 */
  push32(0x12671728u); f_126674a0();
  /* 12671728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267172b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1267172e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12671732 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12671735 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671738 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1267173e push edx */
  push32((uint32_t)(EDX));
  /* 1267173f call 0x126674a0 */
  push32(0x12671744u); f_126674a0();
  /* 12671744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671747 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1267174a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1267174e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12671751 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12671754 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671759 push eax */
  push32((uint32_t)(EAX));
  /* 1267175a call 0x12664650 */
  push32(0x1267175fu); f_12664650();
  /* 1267175f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671762 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12671765 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671769 je 0x12671986 */
  if (C.zf) goto L_12671986;
  /* 1267176f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12671772 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12671775 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12671778 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267177e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12671781 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12671786 mov eax, dword ptr [0x1268fc98] */
  EAX = (r32((uint32_t)(0x1268fc98)));
  /* 1267178b push eax */
  push32((uint32_t)(EAX));
  /* 1267178c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267178f push ecx */
  push32((uint32_t)(ECX));
  /* 12671790 call 0x1266af50 */
  push32(0x12671795u); f_1266af50();
  /* 12671795 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671798 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1267179f jmp 0x126717aa */
  goto L_126717aa;
L_126717a1:;
  /* 126717a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126717a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126717a7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_126717aa:;
  /* 126717aa cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126717ae jae 0x1267181e */
  if (!C.cf) goto L_1267181e;
  /* 126717b0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126717b3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126717b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126717b9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 126717bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126717bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126717c2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 126717c5 push edx */
  push32((uint32_t)(EDX));
  /* 126717c6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 126717c9 push eax */
  push32((uint32_t)(EAX));
  /* 126717ca call 0x12667620 */
  push32(0x126717cfu); f_12667620();
  /* 126717cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126717d2 push eax */
  push32((uint32_t)(EAX));
  /* 126717d3 call 0x126674a0 */
  push32(0x126717d8u); f_126674a0();
  /* 126717d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126717db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126717de lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 126717e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 126717e5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126717e8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126717eb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126717ee mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 126717f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126717f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126717f8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 126717fc push edx */
  push32((uint32_t)(EDX));
  /* 126717fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671800 push eax */
  push32((uint32_t)(EAX));
  /* 12671801 call 0x12667620 */
  push32(0x12671806u); f_12667620();
  /* 12671806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671809 push eax */
  push32((uint32_t)(EAX));
  /* 1267180a call 0x126674a0 */
  push32(0x1267180fu); f_126674a0();
  /* 1267180f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671812 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671815 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12671819 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1267181c jmp 0x126717a1 */
  goto L_126717a1;
L_1267181e:;
  /* 1267181e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12671825 jmp 0x12671830 */
  goto L_12671830;
L_12671827:;
  /* 12671827 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1267182a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267182d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12671830:;
  /* 12671830 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671834 jae 0x126718a6 */
  if (!C.cf) goto L_126718a6;
  /* 12671836 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12671839 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1267183c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1267183f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12671843 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12671846 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671849 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1267184d push eax */
  push32((uint32_t)(EAX));
  /* 1267184e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671851 push ecx */
  push32((uint32_t)(ECX));
  /* 12671852 call 0x12667620 */
  push32(0x12671857u); f_12667620();
  /* 12671857 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267185a push eax */
  push32((uint32_t)(EAX));
  /* 1267185b call 0x126674a0 */
  push32(0x12671860u); f_126674a0();
  /* 12671860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671863 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671866 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1267186a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1267186d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12671870 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12671873 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671876 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1267187a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1267187d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671880 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12671884 push eax */
  push32((uint32_t)(EAX));
  /* 12671885 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671888 push ecx */
  push32((uint32_t)(ECX));
  /* 12671889 call 0x12667620 */
  push32(0x1267188eu); f_12667620();
  /* 1267188e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671891 push eax */
  push32((uint32_t)(EAX));
  /* 12671892 call 0x126674a0 */
  push32(0x12671897u); f_126674a0();
  /* 12671897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267189a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1267189d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 126718a1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 126718a4 jmp 0x12671827 */
  goto L_12671827;
L_126718a6:;
  /* 126718a6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126718a9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126718ac mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 126718b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126718b5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 126718bb push ecx */
  push32((uint32_t)(ECX));
  /* 126718bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126718bf push edx */
  push32((uint32_t)(EDX));
  /* 126718c0 call 0x12667620 */
  push32(0x126718c5u); f_12667620();
  /* 126718c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126718c8 push eax */
  push32((uint32_t)(EAX));
  /* 126718c9 call 0x126674a0 */
  push32(0x126718ceu); f_126674a0();
  /* 126718ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126718d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126718d4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 126718d8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 126718db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126718de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126718e1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 126718e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126718ea mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 126718f0 push eax */
  push32((uint32_t)(EAX));
  /* 126718f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126718f4 push ecx */
  push32((uint32_t)(ECX));
  /* 126718f5 call 0x12667620 */
  push32(0x126718fau); f_12667620();
  /* 126718fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126718fd push eax */
  push32((uint32_t)(EAX));
  /* 126718fe call 0x126674a0 */
  push32(0x12671903u); f_126674a0();
  /* 12671903 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671906 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671909 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1267190d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12671910 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12671913 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671916 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1267191c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267191f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12671925 push ecx */
  push32((uint32_t)(ECX));
  /* 12671926 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671929 push edx */
  push32((uint32_t)(EDX));
  /* 1267192a call 0x12667620 */
  push32(0x1267192fu); f_12667620();
  /* 1267192f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671932 push eax */
  push32((uint32_t)(EAX));
  /* 12671933 call 0x126674a0 */
  push32(0x12671938u); f_126674a0();
  /* 12671938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267193b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1267193e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12671942 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12671945 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12671948 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1267194b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12671951 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671954 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1267195a push eax */
  push32((uint32_t)(EAX));
  /* 1267195b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1267195e push ecx */
  push32((uint32_t)(ECX));
  /* 1267195f call 0x12667620 */
  push32(0x12671964u); f_12667620();
  /* 12671964 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671967 push eax */
  push32((uint32_t)(EAX));
  /* 12671968 call 0x126674a0 */
  push32(0x1267196du); f_126674a0();
  /* 1267196d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671970 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671973 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12671977 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1267197a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1267197d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12671980 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12671986:;
  /* 12671986 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12671989 pop esi */
  ESI = (pop32());
  /* 1267198a mov esp, ebp */
  ESP = (EBP);
  /* 1267198c pop ebp */
  EBP = (pop32());
  /* 1267198d ret  */
  ESPCHK(0x12671620u, _esp0);
  ESP += 4; return;
}

/* FUN_10011990 @ 0x12671990 (31 bytes, 15 insns) */
void f_12671990(void) {
  FTRACE(0x12671990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12671990 push ebp */
  push32((uint32_t)(EBP));
  /* 12671991 mov ebp, esp */
  EBP = (ESP);
  /* 12671993 push 0 */
  push32((uint32_t)(0x0u));
  /* 12671995 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671998 push eax */
  push32((uint32_t)(EAX));
  /* 12671999 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267199c push ecx */
  push32((uint32_t)(ECX));
  /* 1267199d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126719a0 push edx */
  push32((uint32_t)(EDX));
  /* 126719a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126719a4 push eax */
  push32((uint32_t)(EAX));
  /* 126719a5 call 0x126719b0 */
  push32(0x126719aau); f_126719b0();
  /* 126719aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126719ad pop ebp */
  EBP = (pop32());
  /* 126719ae ret  */
  ESPCHK(0x12671990u, _esp0);
  ESP += 4; return;
}

/* FUN_100119b0 @ 0x126719b0 (394 bytes, 123 insns) */
void f_126719b0(void) {
  FTRACE(0x126719b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126719b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126719b1 mov ebp, esp */
  EBP = (ESP);
  /* 126719b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126719b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126719b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126719bc push 0x12690934 */
  push32((uint32_t)(0x12690934u));
  /* 126719c1 call dword ptr [0x12693344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693344))), 0x126719c7u);
  /* 126719c7 cmp dword ptr [0x12690924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126719ce je 0x126719ee */
  if (C.zf) goto L_126719ee;
  /* 126719d0 push 0x12690934 */
  push32((uint32_t)(0x12690934u));
  /* 126719d5 call dword ptr [0x12693334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693334))), 0x126719dbu);
  /* 126719db push 0x13 */
  push32((uint32_t)(0x13u));
  /* 126719dd call 0x12668070 */
  push32(0x126719e2u); f_12668070();
  /* 126719e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126719e5 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 126719ec jmp 0x126719f5 */
  goto L_126719f5;
L_126719ee:;
  /* 126719ee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_126719f5:;
  /* 126719f5 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126719f9 jne 0x12671a06 */
  if (!C.zf) goto L_12671a06;
  /* 126719fb mov ecx, dword ptr [0x1268fc98] */
  ECX = (r32((uint32_t)(0x1268fc98)));
  /* 12671a01 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12671a04 jmp 0x12671a0c */
  goto L_12671a0c;
L_12671a06:;
  /* 12671a06 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671a09 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12671a0c:;
  /* 12671a0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12671a0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12671a12:;
  /* 12671a12 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671a16 jbe 0x12671b03 */
  if ((C.cf||C.zf)) goto L_12671b03;
  /* 12671a1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671a1f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12671a21 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12671a24 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12671a28 je 0x12671a32 */
  if (C.zf) goto L_12671a32;
  /* 12671a2a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12671a2e je 0x12671a37 */
  if (C.zf) goto L_12671a37;
  /* 12671a30 jmp 0x12671a91 */
  goto L_12671a91;
L_12671a32:;
  /* 12671a32 jmp 0x12671b03 */
  goto L_12671b03;
L_12671a37:;
  /* 12671a37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671a3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671a3d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12671a40 mov dword ptr [0x12690910], 0 */
  w32((uint32_t)(0x12690910), (0x0u));
  /* 12671a4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671a4d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12671a50 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671a53 jne 0x12671a68 */
  if (!C.zf) goto L_12671a68;
  /* 12671a55 mov dword ptr [0x12690910], 1 */
  w32((uint32_t)(0x12690910), (0x1u));
  /* 12671a5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671a62 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671a65 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12671a68:;
  /* 12671a68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12671a6b push ecx */
  push32((uint32_t)(ECX));
  /* 12671a6c lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12671a6f push edx */
  push32((uint32_t)(EDX));
  /* 12671a70 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12671a73 push eax */
  push32((uint32_t)(EAX));
  /* 12671a74 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671a77 push ecx */
  push32((uint32_t)(ECX));
  /* 12671a78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671a7b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12671a7d push eax */
  push32((uint32_t)(EAX));
  /* 12671a7e call 0x12671b40 */
  push32(0x12671a83u); f_12671b40();
  /* 12671a83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671a86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671a89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671a8c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12671a8f jmp 0x12671afe */
  goto L_12671afe;
L_12671a91:;
  /* 12671a91 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671a94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12671a96 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12671a98 mov ecx, dword ptr [0x1268ec98] */
  ECX = (r32((uint32_t)(0x1268ec98)));
  /* 12671a9e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12671aa0 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12671aa4 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12671aaa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12671aac je 0x12671ad9 */
  if (C.zf) goto L_12671ad9;
  /* 12671aae cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671ab2 jbe 0x12671ad9 */
  if ((C.cf||C.zf)) goto L_12671ad9;
  /* 12671ab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671ab7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671aba mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12671abc mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12671abe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671ac1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671ac4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12671ac7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671aca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671acd mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12671ad0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671ad3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12671ad6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12671ad9:;
  /* 12671ad9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671adc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671adf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12671ae1 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12671ae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671ae6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671ae9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12671aec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671aef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671af2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12671af5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671af8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12671afb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12671afe:;
  /* 12671afe jmp 0x12671a12 */
  goto L_12671a12;
L_12671b03:;
  /* 12671b03 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671b07 je 0x12671b15 */
  if (C.zf) goto L_12671b15;
  /* 12671b09 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12671b0b call 0x12668110 */
  push32(0x12671b10u); f_12668110();
  /* 12671b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671b13 jmp 0x12671b20 */
  goto L_12671b20;
L_12671b15:;
  /* 12671b15 push 0x12690934 */
  push32((uint32_t)(0x12690934u));
  /* 12671b1a call dword ptr [0x12693334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693334))), 0x12671b20u);
L_12671b20:;
  /* 12671b20 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671b24 jbe 0x12671b34 */
  if ((C.cf||C.zf)) goto L_12671b34;
  /* 12671b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671b29 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12671b2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671b2f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12671b32 jmp 0x12671b36 */
  goto L_12671b36;
L_12671b34:;
  /* 12671b34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12671b36:;
  /* 12671b36 mov esp, ebp */
  ESP = (EBP);
  /* 12671b38 pop ebp */
  EBP = (pop32());
  /* 12671b39 ret  */
  ESPCHK(0x126719b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b40 @ 0x12671b40 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12671b40(void) {
  FTRACE(0x12671b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12671b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12671b41 mov ebp, esp */
  EBP = (ESP);
  /* 12671b43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12671b46 push esi */
  push32((uint32_t)(ESI));
  /* 12671b47 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12671b4b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12671b4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671b51 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12671b54 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12671b57 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671b5b ja 0x126720a8 */
  if ((!C.cf&&!C.zf)) goto L_126720a8;
  /* 12671b61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671b64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12671b66 mov dl, byte ptr [eax + 0x12672109] */
  DL = (r8((uint32_t)(EAX + 0x12672109)));
  /* 12671b6c jmp dword ptr [edx*4 + 0x126720ad] */
  switch (EDX) {
    case 0: goto L_12672086;
    case 1: goto L_12671b95;
    case 2: goto L_12671bdb;
    case 3: goto L_12671d28;
    case 4: goto L_12671d50;
    case 5: goto L_12671def;
    case 6: goto L_12671e5b;
    case 7: goto L_12671e84;
    case 8: goto L_12671ec5;
    case 9: goto L_12671fa7;
    case 10: goto L_1267200e;
    case 11: goto L_1267205b;
    case 12: goto L_12671b73;
    case 13: goto L_12671bb8;
    case 14: goto L_12671bfe;
    case 15: goto L_12671cfe;
    case 16: goto L_12671d95;
    case 17: goto L_12671dc2;
    case 18: goto L_12671e17;
    case 19: goto L_12671e9b;
    case 20: goto L_12671f49;
    case 21: goto L_12671fd8;
    case 22: goto L_126720a8;
    default: x86_unimpl("switch@0x12671b6c out of table"); return;
  }
L_12671b73:;
  /* 12671b73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671b76 push ecx */
  push32((uint32_t)(ECX));
  /* 12671b77 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671b7a push edx */
  push32((uint32_t)(EDX));
  /* 12671b7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671b7e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12671b81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671b84 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12671b87 push eax */
  push32((uint32_t)(EAX));
  /* 12671b88 call 0x12672160 */
  push32(0x12671b8du); f_12672160();
  /* 12671b8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671b90 jmp 0x126720a8 */
  goto L_126720a8;
L_12671b95:;
  /* 12671b95 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671b98 push ecx */
  push32((uint32_t)(ECX));
  /* 12671b99 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671b9c push edx */
  push32((uint32_t)(EDX));
  /* 12671b9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671ba0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12671ba3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671ba6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12671baa push eax */
  push32((uint32_t)(EAX));
  /* 12671bab call 0x12672160 */
  push32(0x12671bb0u); f_12672160();
  /* 12671bb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671bb3 jmp 0x126720a8 */
  goto L_126720a8;
L_12671bb8:;
  /* 12671bb8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671bbb push ecx */
  push32((uint32_t)(ECX));
  /* 12671bbc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671bbf push edx */
  push32((uint32_t)(EDX));
  /* 12671bc0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671bc3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12671bc6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671bc9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12671bcd push eax */
  push32((uint32_t)(EAX));
  /* 12671bce call 0x12672160 */
  push32(0x12671bd3u); f_12672160();
  /* 12671bd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671bd6 jmp 0x126720a8 */
  goto L_126720a8;
L_12671bdb:;
  /* 12671bdb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671bde push ecx */
  push32((uint32_t)(ECX));
  /* 12671bdf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671be2 push edx */
  push32((uint32_t)(EDX));
  /* 12671be3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671be6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12671be9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671bec mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12671bf0 push eax */
  push32((uint32_t)(EAX));
  /* 12671bf1 call 0x12672160 */
  push32(0x12671bf6u); f_12672160();
  /* 12671bf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671bf9 jmp 0x126720a8 */
  goto L_126720a8;
L_12671bfe:;
  /* 12671bfe cmp dword ptr [0x12690910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671c05 je 0x12671c86 */
  if (C.zf) goto L_12671c86;
  /* 12671c07 mov dword ptr [0x12690910], 0 */
  w32((uint32_t)(0x12690910), (0x0u));
  /* 12671c11 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671c14 push ecx */
  push32((uint32_t)(ECX));
  /* 12671c15 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671c18 push edx */
  push32((uint32_t)(EDX));
  /* 12671c19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671c1c push eax */
  push32((uint32_t)(EAX));
  /* 12671c1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671c20 push ecx */
  push32((uint32_t)(ECX));
  /* 12671c21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671c24 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12671c2a push eax */
  push32((uint32_t)(EAX));
  /* 12671c2b call 0x12672310 */
  push32(0x12671c30u); f_12672310();
  /* 12671c30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671c33 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671c36 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671c39 jne 0x12671c40 */
  if (!C.zf) goto L_12671c40;
  /* 12671c3b jmp 0x126720a8 */
  goto L_126720a8;
L_12671c40:;
  /* 12671c40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671c43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12671c45 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12671c48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671c4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12671c4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671c50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671c53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12671c55 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671c58 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12671c5a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12671c5d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671c60 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12671c62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671c65 push ecx */
  push32((uint32_t)(ECX));
  /* 12671c66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671c69 push edx */
  push32((uint32_t)(EDX));
  /* 12671c6a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671c6d push eax */
  push32((uint32_t)(EAX));
  /* 12671c6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671c71 push ecx */
  push32((uint32_t)(ECX));
  /* 12671c72 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671c75 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12671c7b push eax */
  push32((uint32_t)(EAX));
  /* 12671c7c call 0x12672310 */
  push32(0x12671c81u); f_12672310();
  /* 12671c81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671c84 jmp 0x12671cf9 */
  goto L_12671cf9;
L_12671c86:;
  /* 12671c86 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671c89 push ecx */
  push32((uint32_t)(ECX));
  /* 12671c8a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671c8d push edx */
  push32((uint32_t)(EDX));
  /* 12671c8e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671c91 push eax */
  push32((uint32_t)(EAX));
  /* 12671c92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671c95 push ecx */
  push32((uint32_t)(ECX));
  /* 12671c96 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671c99 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12671c9f push eax */
  push32((uint32_t)(EAX));
  /* 12671ca0 call 0x12672310 */
  push32(0x12671ca5u); f_12672310();
  /* 12671ca5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671ca8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671cab cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671cae jne 0x12671cb5 */
  if (!C.zf) goto L_12671cb5;
  /* 12671cb0 jmp 0x126720a8 */
  goto L_126720a8;
L_12671cb5:;
  /* 12671cb5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671cb8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12671cba mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12671cbd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671cc0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12671cc2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671cc5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671cc8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12671cca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671ccd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12671ccf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12671cd2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671cd5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12671cd7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671cda push ecx */
  push32((uint32_t)(ECX));
  /* 12671cdb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671cde push edx */
  push32((uint32_t)(EDX));
  /* 12671cdf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671ce2 push eax */
  push32((uint32_t)(EAX));
  /* 12671ce3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671ce6 push ecx */
  push32((uint32_t)(ECX));
  /* 12671ce7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671cea mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12671cf0 push eax */
  push32((uint32_t)(EAX));
  /* 12671cf1 call 0x12672310 */
  push32(0x12671cf6u); f_12672310();
  /* 12671cf6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12671cf9:;
  /* 12671cf9 jmp 0x126720a8 */
  goto L_126720a8;
L_12671cfe:;
  /* 12671cfe mov ecx, dword ptr [0x12690910] */
  ECX = (r32((uint32_t)(0x12690910)));
  /* 12671d04 mov dword ptr [0x12690920], ecx */
  w32((uint32_t)(0x12690920), (ECX));
  /* 12671d0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671d0d push edx */
  push32((uint32_t)(EDX));
  /* 12671d0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671d11 push eax */
  push32((uint32_t)(EAX));
  /* 12671d12 push 2 */
  push32((uint32_t)(0x2u));
  /* 12671d14 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671d17 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12671d1a push edx */
  push32((uint32_t)(EDX));
  /* 12671d1b call 0x126721b0 */
  push32(0x12671d20u); f_126721b0();
  /* 12671d20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671d23 jmp 0x126720a8 */
  goto L_126720a8;
L_12671d28:;
  /* 12671d28 mov eax, dword ptr [0x12690910] */
  EAX = (r32((uint32_t)(0x12690910)));
  /* 12671d2d mov dword ptr [0x12690920], eax */
  w32((uint32_t)(0x12690920), (EAX));
  /* 12671d32 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671d35 push ecx */
  push32((uint32_t)(ECX));
  /* 12671d36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671d39 push edx */
  push32((uint32_t)(EDX));
  /* 12671d3a push 2 */
  push32((uint32_t)(0x2u));
  /* 12671d3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671d3f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12671d42 push ecx */
  push32((uint32_t)(ECX));
  /* 12671d43 call 0x126721b0 */
  push32(0x12671d48u); f_126721b0();
  /* 12671d48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671d4b jmp 0x126720a8 */
  goto L_126720a8;
L_12671d50:;
  /* 12671d50 mov edx, dword ptr [0x12690910] */
  EDX = (r32((uint32_t)(0x12690910)));
  /* 12671d56 mov dword ptr [0x12690920], edx */
  w32((uint32_t)(0x12690920), (EDX));
  /* 12671d5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671d5f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12671d62 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12671d63 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12671d68 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12671d6a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12671d6d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671d71 jne 0x12671d7a */
  if (!C.zf) goto L_12671d7a;
  /* 12671d73 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12671d7a:;
  /* 12671d7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671d7d push edx */
  push32((uint32_t)(EDX));
  /* 12671d7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671d81 push eax */
  push32((uint32_t)(EAX));
  /* 12671d82 push 2 */
  push32((uint32_t)(0x2u));
  /* 12671d84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12671d87 push ecx */
  push32((uint32_t)(ECX));
  /* 12671d88 call 0x126721b0 */
  push32(0x12671d8du); f_126721b0();
  /* 12671d8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671d90 jmp 0x126720a8 */
  goto L_126720a8;
L_12671d95:;
  /* 12671d95 mov edx, dword ptr [0x12690910] */
  EDX = (r32((uint32_t)(0x12690910)));
  /* 12671d9b mov dword ptr [0x12690920], edx */
  w32((uint32_t)(0x12690920), (EDX));
  /* 12671da1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671da4 push eax */
  push32((uint32_t)(EAX));
  /* 12671da5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671da8 push ecx */
  push32((uint32_t)(ECX));
  /* 12671da9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12671dab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671dae mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12671db1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671db4 push eax */
  push32((uint32_t)(EAX));
  /* 12671db5 call 0x126721b0 */
  push32(0x12671dbau); f_126721b0();
  /* 12671dba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671dbd jmp 0x126720a8 */
  goto L_126720a8;
L_12671dc2:;
  /* 12671dc2 mov ecx, dword ptr [0x12690910] */
  ECX = (r32((uint32_t)(0x12690910)));
  /* 12671dc8 mov dword ptr [0x12690920], ecx */
  w32((uint32_t)(0x12690920), (ECX));
  /* 12671dce mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671dd1 push edx */
  push32((uint32_t)(EDX));
  /* 12671dd2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671dd5 push eax */
  push32((uint32_t)(EAX));
  /* 12671dd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12671dd8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671ddb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12671dde add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671de1 push edx */
  push32((uint32_t)(EDX));
  /* 12671de2 call 0x126721b0 */
  push32(0x12671de7u); f_126721b0();
  /* 12671de7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671dea jmp 0x126720a8 */
  goto L_126720a8;
L_12671def:;
  /* 12671def mov eax, dword ptr [0x12690910] */
  EAX = (r32((uint32_t)(0x12690910)));
  /* 12671df4 mov dword ptr [0x12690920], eax */
  w32((uint32_t)(0x12690920), (EAX));
  /* 12671df9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671dfc push ecx */
  push32((uint32_t)(ECX));
  /* 12671dfd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671e00 push edx */
  push32((uint32_t)(EDX));
  /* 12671e01 push 2 */
  push32((uint32_t)(0x2u));
  /* 12671e03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671e06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12671e09 push ecx */
  push32((uint32_t)(ECX));
  /* 12671e0a call 0x126721b0 */
  push32(0x12671e0fu); f_126721b0();
  /* 12671e0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671e12 jmp 0x126720a8 */
  goto L_126720a8;
L_12671e17:;
  /* 12671e17 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671e1a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671e1e jg 0x12671e3c */
  if ((!C.zf&&C.sf==C.of)) goto L_12671e3c;
  /* 12671e20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671e23 push eax */
  push32((uint32_t)(EAX));
  /* 12671e24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671e27 push ecx */
  push32((uint32_t)(ECX));
  /* 12671e28 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671e2b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12671e31 push eax */
  push32((uint32_t)(EAX));
  /* 12671e32 call 0x12672160 */
  push32(0x12671e37u); f_12672160();
  /* 12671e37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671e3a jmp 0x12671e56 */
  goto L_12671e56;
L_12671e3c:;
  /* 12671e3c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671e3f push ecx */
  push32((uint32_t)(ECX));
  /* 12671e40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671e43 push edx */
  push32((uint32_t)(EDX));
  /* 12671e44 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671e47 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12671e4d push ecx */
  push32((uint32_t)(ECX));
  /* 12671e4e call 0x12672160 */
  push32(0x12671e53u); f_12672160();
  /* 12671e53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12671e56:;
  /* 12671e56 jmp 0x126720a8 */
  goto L_126720a8;
L_12671e5b:;
  /* 12671e5b mov edx, dword ptr [0x12690910] */
  EDX = (r32((uint32_t)(0x12690910)));
  /* 12671e61 mov dword ptr [0x12690920], edx */
  w32((uint32_t)(0x12690920), (EDX));
  /* 12671e67 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671e6a push eax */
  push32((uint32_t)(EAX));
  /* 12671e6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671e6e push ecx */
  push32((uint32_t)(ECX));
  /* 12671e6f push 2 */
  push32((uint32_t)(0x2u));
  /* 12671e71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671e74 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12671e76 push eax */
  push32((uint32_t)(EAX));
  /* 12671e77 call 0x126721b0 */
  push32(0x12671e7cu); f_126721b0();
  /* 12671e7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671e7f jmp 0x126720a8 */
  goto L_126720a8;
L_12671e84:;
  /* 12671e84 mov ecx, dword ptr [0x12690910] */
  ECX = (r32((uint32_t)(0x12690910)));
  /* 12671e8a mov dword ptr [0x12690920], ecx */
  w32((uint32_t)(0x12690920), (ECX));
  /* 12671e90 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671e93 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12671e96 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12671e99 jmp 0x12671eed */
  goto L_12671eed;
L_12671e9b:;
  /* 12671e9b mov ecx, dword ptr [0x12690910] */
  ECX = (r32((uint32_t)(0x12690910)));
  /* 12671ea1 mov dword ptr [0x12690920], ecx */
  w32((uint32_t)(0x12690920), (ECX));
  /* 12671ea7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671eaa push edx */
  push32((uint32_t)(EDX));
  /* 12671eab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671eae push eax */
  push32((uint32_t)(EAX));
  /* 12671eaf push 1 */
  push32((uint32_t)(0x1u));
  /* 12671eb1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671eb4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12671eb7 push edx */
  push32((uint32_t)(EDX));
  /* 12671eb8 call 0x126721b0 */
  push32(0x12671ebdu); f_126721b0();
  /* 12671ebd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671ec0 jmp 0x126720a8 */
  goto L_126720a8;
L_12671ec5:;
  /* 12671ec5 mov eax, dword ptr [0x12690910] */
  EAX = (r32((uint32_t)(0x12690910)));
  /* 12671eca mov dword ptr [0x12690920], eax */
  w32((uint32_t)(0x12690920), (EAX));
  /* 12671ecf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671ed2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671ed6 jne 0x12671ee1 */
  if (!C.zf) goto L_12671ee1;
  /* 12671ed8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12671edf jmp 0x12671eed */
  goto L_12671eed;
L_12671ee1:;
  /* 12671ee1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671ee4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12671ee7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12671eea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12671eed:;
  /* 12671eed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671ef0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12671ef3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671ef6 jge 0x12671f01 */
  if ((C.sf==C.of)) goto L_12671f01;
  /* 12671ef8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12671eff jmp 0x12671f2e */
  goto L_12671f2e;
L_12671f01:;
  /* 12671f01 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671f04 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12671f07 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12671f08 mov ecx, 7 */
  ECX = (0x7u);
  /* 12671f0d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12671f0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12671f12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671f15 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12671f18 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12671f19 mov ecx, 7 */
  ECX = (0x7u);
  /* 12671f1e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12671f20 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671f23 jl 0x12671f2e */
  if ((C.sf!=C.of)) goto L_12671f2e;
  /* 12671f25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12671f28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671f2b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12671f2e:;
  /* 12671f2e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671f31 push eax */
  push32((uint32_t)(EAX));
  /* 12671f32 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671f35 push ecx */
  push32((uint32_t)(ECX));
  /* 12671f36 push 2 */
  push32((uint32_t)(0x2u));
  /* 12671f38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12671f3b push edx */
  push32((uint32_t)(EDX));
  /* 12671f3c call 0x126721b0 */
  push32(0x12671f41u); f_126721b0();
  /* 12671f41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671f44 jmp 0x126720a8 */
  goto L_126720a8;
L_12671f49:;
  /* 12671f49 cmp dword ptr [0x12690910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671f50 je 0x12671f80 */
  if (C.zf) goto L_12671f80;
  /* 12671f52 mov dword ptr [0x12690910], 0 */
  w32((uint32_t)(0x12690910), (0x0u));
  /* 12671f5c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671f5f push eax */
  push32((uint32_t)(EAX));
  /* 12671f60 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671f63 push ecx */
  push32((uint32_t)(ECX));
  /* 12671f64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671f67 push edx */
  push32((uint32_t)(EDX));
  /* 12671f68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671f6b push eax */
  push32((uint32_t)(EAX));
  /* 12671f6c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671f6f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12671f75 push edx */
  push32((uint32_t)(EDX));
  /* 12671f76 call 0x12672310 */
  push32(0x12671f7bu); f_12672310();
  /* 12671f7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671f7e jmp 0x12671fa2 */
  goto L_12671fa2;
L_12671f80:;
  /* 12671f80 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671f83 push eax */
  push32((uint32_t)(EAX));
  /* 12671f84 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671f87 push ecx */
  push32((uint32_t)(ECX));
  /* 12671f88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671f8b push edx */
  push32((uint32_t)(EDX));
  /* 12671f8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671f8f push eax */
  push32((uint32_t)(EAX));
  /* 12671f90 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671f93 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12671f99 push edx */
  push32((uint32_t)(EDX));
  /* 12671f9a call 0x12672310 */
  push32(0x12671f9fu); f_12672310();
  /* 12671f9f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12671fa2:;
  /* 12671fa2 jmp 0x126720a8 */
  goto L_126720a8;
L_12671fa7:;
  /* 12671fa7 mov dword ptr [0x12690910], 0 */
  w32((uint32_t)(0x12690910), (0x0u));
  /* 12671fb1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671fb4 push eax */
  push32((uint32_t)(EAX));
  /* 12671fb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671fb8 push ecx */
  push32((uint32_t)(ECX));
  /* 12671fb9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671fbc push edx */
  push32((uint32_t)(EDX));
  /* 12671fbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671fc0 push eax */
  push32((uint32_t)(EAX));
  /* 12671fc1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12671fc4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12671fca push edx */
  push32((uint32_t)(EDX));
  /* 12671fcb call 0x12672310 */
  push32(0x12671fd0u); f_12672310();
  /* 12671fd0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671fd3 jmp 0x126720a8 */
  goto L_126720a8;
L_12671fd8:;
  /* 12671fd8 mov eax, dword ptr [0x12690910] */
  EAX = (r32((uint32_t)(0x12690910)));
  /* 12671fdd mov dword ptr [0x12690920], eax */
  w32((uint32_t)(0x12690920), (EAX));
  /* 12671fe2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12671fe5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12671fe8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12671fe9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12671fee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12671ff0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12671ff3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671ff6 push edx */
  push32((uint32_t)(EDX));
  /* 12671ff7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671ffa push eax */
  push32((uint32_t)(EAX));
  /* 12671ffb push 2 */
  push32((uint32_t)(0x2u));
  /* 12671ffd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12672000 push ecx */
  push32((uint32_t)(ECX));
  /* 12672001 call 0x126721b0 */
  push32(0x12672006u); f_126721b0();
  /* 12672006 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672009 jmp 0x126720a8 */
  goto L_126720a8;
L_1267200e:;
  /* 1267200e mov edx, dword ptr [0x12690910] */
  EDX = (r32((uint32_t)(0x12690910)));
  /* 12672014 mov dword ptr [0x12690920], edx */
  w32((uint32_t)(0x12690920), (EDX));
  /* 1267201a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1267201d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12672020 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12672021 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12672026 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12672028 mov ecx, eax */
  ECX = (EAX);
  /* 1267202a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267202d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12672030 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12672033 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12672036 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12672037 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1267203c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1267203e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672040 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12672043 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12672046 push eax */
  push32((uint32_t)(EAX));
  /* 12672047 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267204a push ecx */
  push32((uint32_t)(ECX));
  /* 1267204b push 4 */
  push32((uint32_t)(0x4u));
  /* 1267204d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12672050 push edx */
  push32((uint32_t)(EDX));
  /* 12672051 call 0x126721b0 */
  push32(0x12672056u); f_126721b0();
  /* 12672056 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672059 jmp 0x126720a8 */
  goto L_126720a8;
L_1267205b:;
  /* 1267205b call 0x12673170 */
  push32(0x12672060u); f_12673170();
  /* 12672060 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12672063 push eax */
  push32((uint32_t)(EAX));
  /* 12672064 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672067 push ecx */
  push32((uint32_t)(ECX));
  /* 12672068 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1267206b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267206d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672071 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12672074 mov ecx, dword ptr [eax*4 + 0x1268fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1268fe1c)));
  /* 1267207b push ecx */
  push32((uint32_t)(ECX));
  /* 1267207c call 0x12672160 */
  push32(0x12672081u); f_12672160();
  /* 12672081 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672084 jmp 0x126720a8 */
  goto L_126720a8;
L_12672086:;
  /* 12672086 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672089 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1267208b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1267208e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672091 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12672093 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672096 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672099 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1267209b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1267209e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126720a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126720a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126720a6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_126720a8:;
  /* 126720a8 pop esi */
  ESI = (pop32());
  /* 126720a9 mov esp, ebp */
  ESP = (EBP);
  /* 126720ab pop ebp */
  EBP = (pop32());
  /* 126720ac ret  */
  ESPCHK(0x12671b40u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12672160 (72 bytes, 30 insns) */
void f_12672160(void) {
  FTRACE(0x12672160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12672160 push ebp */
  push32((uint32_t)(EBP));
  /* 12672161 mov ebp, esp */
  EBP = (ESP);
L_12672163:;
  /* 12672163 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672166 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672169 je 0x126721a6 */
  if (C.zf) goto L_126721a6;
  /* 1267216b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267216e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12672171 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12672173 je 0x126721a6 */
  if (C.zf) goto L_126721a6;
  /* 12672175 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12672178 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1267217a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267217d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1267217f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12672181 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12672184 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12672186 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672189 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1267218c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1267218e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672191 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672194 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12672197 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267219a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1267219c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1267219f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126721a2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 126721a4 jmp 0x12672163 */
  goto L_12672163;
L_126721a6:;
  /* 126721a6 pop ebp */
  EBP = (pop32());
  /* 126721a7 ret  */
  ESPCHK(0x12672160u, _esp0);
  ESP += 4; return;
}

/* FUN_100121b0 @ 0x126721b0 (173 bytes, 64 insns) */
void f_126721b0(void) {
  FTRACE(0x126721b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126721b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126721b1 mov ebp, esp */
  EBP = (ESP);
  /* 126721b3 push ecx */
  push32((uint32_t)(ECX));
  /* 126721b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 126721bb cmp dword ptr [0x12690920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126721c2 je 0x126721da */
  if (C.zf) goto L_126721da;
  /* 126721c4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126721c7 push eax */
  push32((uint32_t)(EAX));
  /* 126721c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126721cb push ecx */
  push32((uint32_t)(ECX));
  /* 126721cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126721cf push edx */
  push32((uint32_t)(EDX));
  /* 126721d0 call 0x12672260 */
  push32(0x126721d5u); f_12672260();
  /* 126721d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126721d8 jmp 0x12672259 */
  goto L_12672259;
L_126721da:;
  /* 126721da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126721dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126721e0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126721e2 jae 0x12672250 */
  if (!C.cf) goto L_12672250;
  /* 126721e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126721e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126721ea mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 126721ed jmp 0x126721f8 */
  goto L_126721f8;
L_126721ef:;
  /* 126721ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126721f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126721f5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_126721f8:;
  /* 126721f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126721fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126721fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12672200 je 0x12672234 */
  if (C.zf) goto L_12672234;
  /* 12672202 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672205 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12672206 mov ecx, 0xa */
  ECX = (0xau);
  /* 1267220b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1267220d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672210 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672213 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12672215 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12672218 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1267221b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267221e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1267221f mov ecx, 0xa */
  ECX = (0xau);
  /* 12672224 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12672226 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12672229 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267222c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267222f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12672232 jmp 0x126721ef */
  goto L_126721ef;
L_12672234:;
  /* 12672234 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672237 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12672239 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267223c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267223f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12672241 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12672244 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12672246 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12672249 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1267224c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1267224e jmp 0x12672259 */
  goto L_12672259;
L_12672250:;
  /* 12672250 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12672253 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12672259:;
  /* 12672259 mov esp, ebp */
  ESP = (EBP);
  /* 1267225b pop ebp */
  EBP = (pop32());
  /* 1267225c ret  */
  ESPCHK(0x126721b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12672260 (172 bytes, 65 insns) */
void f_12672260(void) {
  FTRACE(0x12672260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12672260 push ebp */
  push32((uint32_t)(EBP));
  /* 12672261 mov ebp, esp */
  EBP = (ESP);
  /* 12672263 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12672266 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12672269 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1267226b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1267226e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672271 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672274 jbe 0x126722bb */
  if ((C.cf||C.zf)) goto L_126722bb;
L_12672276:;
  /* 12672276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672279 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1267227a mov ecx, 0xa */
  ECX = (0xau);
  /* 1267227f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12672281 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672284 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12672287 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12672289 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267228c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267228f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12672292 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672295 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12672297 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1267229a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267229d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1267229f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126722a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 126722a3 mov ecx, 0xa */
  ECX = (0xau);
  /* 126722a8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 126722aa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 126722ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126722b1 jle 0x126722bb */
  if ((C.zf||C.sf!=C.of)) goto L_126722bb;
  /* 126722b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126722b6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126722b9 ja 0x12672276 */
  if ((!C.cf&&!C.zf)) goto L_12672276;
L_126722bb:;
  /* 126722bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126722be mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126722c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 126722c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126722c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126722c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 126722cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126722ce sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126722d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_126722d4:;
  /* 126722d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126722d7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126722d9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 126722dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126722df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126722e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126722e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 126722e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126722e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126722ec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 126722ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126722f2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 126722f5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 126722f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126722fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126722fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12672300 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12672303 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672306 jb 0x126722d4 */
  if (C.cf) goto L_126722d4;
  /* 12672308 mov esp, ebp */
  ESP = (EBP);
  /* 1267230a pop ebp */
  EBP = (pop32());
  /* 1267230b ret  */
  ESPCHK(0x12672260u, _esp0);
  ESP += 4; return;
}

/* FUN_10012310 @ 0x12672310 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12672310(void) {
  FTRACE(0x12672310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12672310 push ebp */
  push32((uint32_t)(EBP));
  /* 12672311 mov ebp, esp */
  EBP = (ESP);
  /* 12672313 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12672316:;
  /* 12672316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672319 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1267231c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1267231e je 0x1267278c */
  if (C.zf) goto L_1267278c;
  /* 12672324 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12672327 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267232a je 0x1267278c */
  if (C.zf) goto L_1267278c;
  /* 12672330 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12672334 mov dword ptr [0x12690920], 0 */
  w32((uint32_t)(0x12690920), (0x0u));
  /* 1267233e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12672345 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672348 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1267234b jmp 0x12672356 */
  goto L_12672356;
L_1267234d:;
  /* 1267234d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12672350 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672353 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12672356:;
  /* 12672356 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12672359 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1267235c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267235f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12672362 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12672365 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672368 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1267236b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267236d jne 0x12672371 */
  if (!C.zf) goto L_12672371;
  /* 1267236f jmp 0x1267234d */
  goto L_1267234d;
L_12672371:;
  /* 12672371 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12672374 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12672377 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1267237a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267237d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12672380 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12672383 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12672386 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12672389 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1267238c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672390 ja 0x126726e0 */
  if ((!C.cf&&!C.zf)) goto L_126726e0;
  /* 12672396 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12672399 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267239b mov al, byte ptr [ecx + 0x126727bc] */
  AL = (r8((uint32_t)(ECX + 0x126727bc)));
  /* 126723a1 jmp dword ptr [eax*4 + 0x12672790] */
  switch (EAX) {
    case 0: goto L_126725ff;
    case 1: goto L_126724e3;
    case 2: goto L_1267246e;
    case 3: goto L_126723a8;
    case 4: goto L_126723e6;
    case 5: goto L_12672447;
    case 6: goto L_12672495;
    case 7: goto L_126724bc;
    case 8: goto L_1267252a;
    case 9: goto L_12672424;
    case 10: goto L_126726e0;
    default: x86_unimpl("switch@0x126723a1 out of table"); return;
  }
L_126723a8:;
  /* 126723a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126723ab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 126723ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126723b1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126723b4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 126723b7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126723bb ja 0x126723e1 */
  if ((!C.cf&&!C.zf)) goto L_126723e1;
  /* 126723bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126723c0 jmp dword ptr [ecx*4 + 0x1267280f] */
  switch (ECX) {
    case 0: goto L_126723c7;
    case 1: goto L_126723d1;
    case 2: goto L_126723d7;
    case 3: goto L_126723dd;
    case 4: goto L_12672405;
    case 5: goto L_1267240f;
    case 6: goto L_12672415;
    case 7: goto L_1267241b;
    default: x86_unimpl("switch@0x126723c0 out of table"); return;
  }
L_126723c7:;
  /* 126723c7 mov dword ptr [0x12690920], 1 */
  w32((uint32_t)(0x12690920), (0x1u));
L_126723d1:;
  /* 126723d1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 126723d5 jmp 0x126723e1 */
  goto L_126723e1;
L_126723d7:;
  /* 126723d7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 126723db jmp 0x126723e1 */
  goto L_126723e1;
L_126723dd:;
  /* 126723dd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_126723e1:;
  /* 126723e1 jmp 0x126726e0 */
  goto L_126726e0;
L_126723e6:;
  /* 126723e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126723e9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 126723ec mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 126723ef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126723f2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 126723f5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126723f9 ja 0x1267241f */
  if ((!C.cf&&!C.zf)) goto L_1267241f;
  /* 126723fb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 126723fe jmp dword ptr [ecx*4 + 0x1267281f] */
  switch (ECX) {
    case 0: goto L_12672405;
    case 1: goto L_1267240f;
    case 2: goto L_12672415;
    case 3: goto L_1267241b;
    default: x86_unimpl("switch@0x126723fe out of table"); return;
  }
L_12672405:;
  /* 12672405 mov dword ptr [0x12690920], 1 */
  w32((uint32_t)(0x12690920), (0x1u));
L_1267240f:;
  /* 1267240f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12672413 jmp 0x1267241f */
  goto L_1267241f;
L_12672415:;
  /* 12672415 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12672419 jmp 0x1267241f */
  goto L_1267241f;
L_1267241b:;
  /* 1267241b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1267241f:;
  /* 1267241f jmp 0x126726e0 */
  goto L_126726e0;
L_12672424:;
  /* 12672424 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12672427 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1267242a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267242e je 0x12672438 */
  if (C.zf) goto L_12672438;
  /* 12672430 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672434 je 0x1267243e */
  if (C.zf) goto L_1267243e;
  /* 12672436 jmp 0x12672442 */
  goto L_12672442;
L_12672438:;
  /* 12672438 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1267243c jmp 0x12672442 */
  goto L_12672442;
L_1267243e:;
  /* 1267243e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12672442:;
  /* 12672442 jmp 0x126726e0 */
  goto L_126726e0;
L_12672447:;
  /* 12672447 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267244a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1267244d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672451 je 0x1267245b */
  if (C.zf) goto L_1267245b;
  /* 12672453 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672457 je 0x12672465 */
  if (C.zf) goto L_12672465;
  /* 12672459 jmp 0x12672469 */
  goto L_12672469;
L_1267245b:;
  /* 1267245b mov dword ptr [0x12690920], 1 */
  w32((uint32_t)(0x12690920), (0x1u));
L_12672465:;
  /* 12672465 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12672469:;
  /* 12672469 jmp 0x126726e0 */
  goto L_126726e0;
L_1267246e:;
  /* 1267246e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12672471 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12672474 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672478 je 0x12672482 */
  if (C.zf) goto L_12672482;
  /* 1267247a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267247e je 0x1267248c */
  if (C.zf) goto L_1267248c;
  /* 12672480 jmp 0x12672490 */
  goto L_12672490;
L_12672482:;
  /* 12672482 mov dword ptr [0x12690920], 1 */
  w32((uint32_t)(0x12690920), (0x1u));
L_1267248c:;
  /* 1267248c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12672490:;
  /* 12672490 jmp 0x126726e0 */
  goto L_126726e0;
L_12672495:;
  /* 12672495 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12672498 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1267249b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267249f je 0x126724a9 */
  if (C.zf) goto L_126724a9;
  /* 126724a1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126724a5 je 0x126724b3 */
  if (C.zf) goto L_126724b3;
  /* 126724a7 jmp 0x126724b7 */
  goto L_126724b7;
L_126724a9:;
  /* 126724a9 mov dword ptr [0x12690920], 1 */
  w32((uint32_t)(0x12690920), (0x1u));
L_126724b3:;
  /* 126724b3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_126724b7:;
  /* 126724b7 jmp 0x126726e0 */
  goto L_126726e0;
L_126724bc:;
  /* 126724bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126724bf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 126724c2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126724c6 je 0x126724d0 */
  if (C.zf) goto L_126724d0;
  /* 126724c8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126724cc je 0x126724da */
  if (C.zf) goto L_126724da;
  /* 126724ce jmp 0x126724de */
  goto L_126724de;
L_126724d0:;
  /* 126724d0 mov dword ptr [0x12690920], 1 */
  w32((uint32_t)(0x12690920), (0x1u));
L_126724da:;
  /* 126724da mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_126724de:;
  /* 126724de jmp 0x126726e0 */
  goto L_126726e0;
L_126724e3:;
  /* 126724e3 push 0x1268ca5c */
  push32((uint32_t)(0x1268ca5cu));
  /* 126724e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126724eb push ecx */
  push32((uint32_t)(ECX));
  /* 126724ec call 0x12672d40 */
  push32(0x126724f1u); f_12672d40();
  /* 126724f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126724f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126724f6 jne 0x12672503 */
  if (!C.zf) goto L_12672503;
  /* 126724f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126724fb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126724fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12672501 jmp 0x12672521 */
  goto L_12672521;
L_12672503:;
  /* 12672503 push 0x1268ca58 */
  push32((uint32_t)(0x1268ca58u));
  /* 12672508 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267250b push eax */
  push32((uint32_t)(EAX));
  /* 1267250c call 0x12672d40 */
  push32(0x12672511u); f_12672d40();
  /* 12672511 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12672516 jne 0x12672521 */
  if (!C.zf) goto L_12672521;
  /* 12672518 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267251b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267251e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12672521:;
  /* 12672521 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12672525 jmp 0x126726e0 */
  goto L_126726e0;
L_1267252a:;
  /* 1267252a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1267252d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672531 jg 0x12672541 */
  if ((!C.zf&&C.sf==C.of)) goto L_12672541;
  /* 12672533 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12672536 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1267253c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1267253f jmp 0x1267254d */
  goto L_1267254d;
L_12672541:;
  /* 12672541 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12672544 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1267254a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1267254d:;
  /* 1267254d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672551 jle 0x126725f4 */
  if ((C.zf||C.sf!=C.of)) goto L_126725f4;
  /* 12672557 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1267255a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267255d jbe 0x126725f4 */
  if ((C.cf||C.zf)) goto L_126725f4;
  /* 12672563 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12672566 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672568 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1267256a mov ecx, dword ptr [0x1268ec98] */
  ECX = (r32((uint32_t)(0x1268ec98)));
  /* 12672570 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12672572 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12672576 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1267257c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1267257e je 0x126725b7 */
  if (C.zf) goto L_126725b7;
  /* 12672580 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12672583 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672586 jbe 0x126725b7 */
  if ((C.cf||C.zf)) goto L_126725b7;
  /* 12672588 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267258b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1267258d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12672590 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12672592 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12672594 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672597 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12672599 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267259c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267259f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 126725a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126725a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126725a7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 126725aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126725ad mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126725af sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126725b2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 126725b5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_126725b7:;
  /* 126725b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126725ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126725bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126725bf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126725c1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 126725c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126725c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126725c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126725cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126725ce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 126725d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126725d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126725d6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 126725d9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 126725dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126725de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126725e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126725e4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 126725e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126725e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126725ec mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 126725ef jmp 0x1267254d */
  goto L_1267254d;
L_126725f4:;
  /* 126725f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126725f7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 126725fa jmp 0x12672316 */
  goto L_12672316;
L_126725ff:;
  /* 126725ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12672602 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12672605 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12672607 je 0x126726d2 */
  if (C.zf) goto L_126726d2;
  /* 1267260d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672610 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672613 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12672616:;
  /* 12672616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672619 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1267261c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1267261e je 0x126726d0 */
  if (C.zf) goto L_126726d0;
  /* 12672624 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12672627 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267262a je 0x126726d0 */
  if (C.zf) goto L_126726d0;
  /* 12672630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672633 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12672636 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672639 jne 0x12672649 */
  if (!C.zf) goto L_12672649;
  /* 1267263b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267263e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672641 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12672644 jmp 0x126726d0 */
  goto L_126726d0;
L_12672649:;
  /* 12672649 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267264c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1267264e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12672650 mov edx, dword ptr [0x1268ec98] */
  EDX = (r32((uint32_t)(0x1268ec98)));
  /* 12672656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672658 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1267265c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12672661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12672663 je 0x1267269c */
  if (C.zf) goto L_1267269c;
  /* 12672665 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12672668 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267266b jbe 0x1267269c */
  if ((C.cf||C.zf)) goto L_1267269c;
  /* 1267266d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672670 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12672672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672675 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12672677 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12672679 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267267c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1267267e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672681 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672684 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12672686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672689 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267268c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1267268f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12672692 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12672694 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12672697 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1267269a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1267269c:;
  /* 1267269c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267269f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126726a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126726a4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 126726a6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 126726a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126726ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126726ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126726b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126726b3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 126726b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126726b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126726bb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 126726be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126726c1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126726c3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126726c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 126726c9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 126726cb jmp 0x12672616 */
  goto L_12672616;
L_126726d0:;
  /* 126726d0 jmp 0x126726db */
  goto L_126726db;
L_126726d2:;
  /* 126726d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126726d5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126726d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_126726db:;
  /* 126726db jmp 0x12672316 */
  goto L_12672316;
L_126726e0:;
  /* 126726e0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 126726e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126726e6 je 0x1267270c */
  if (C.zf) goto L_1267270c;
  /* 126726e8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 126726eb push edx */
  push32((uint32_t)(EDX));
  /* 126726ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126726ef push eax */
  push32((uint32_t)(EAX));
  /* 126726f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126726f3 push ecx */
  push32((uint32_t)(ECX));
  /* 126726f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126726f7 push edx */
  push32((uint32_t)(EDX));
  /* 126726f8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 126726fb push eax */
  push32((uint32_t)(EAX));
  /* 126726fc call 0x12671b40 */
  push32(0x12672701u); f_12671b40();
  /* 12672701 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672704 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12672707 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1267270a jmp 0x12672787 */
  goto L_12672787;
L_1267270c:;
  /* 1267270c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267270f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672711 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12672713 mov ecx, dword ptr [0x1268ec98] */
  ECX = (r32((uint32_t)(0x1268ec98)));
  /* 12672719 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1267271b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1267271f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12672725 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12672727 je 0x12672758 */
  if (C.zf) goto L_12672758;
  /* 12672729 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267272c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1267272e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672731 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12672733 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12672735 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672738 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1267273a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267273d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672740 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12672742 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672745 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672748 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1267274b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1267274e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12672750 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12672753 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12672756 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12672758:;
  /* 12672758 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267275b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1267275d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672760 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12672762 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12672764 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672767 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12672769 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267276c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267276f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12672771 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672774 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672777 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1267277a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1267277d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1267277f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12672782 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12672785 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12672787:;
  /* 12672787 jmp 0x12672316 */
  goto L_12672316;
L_1267278c:;
  /* 1267278c mov esp, ebp */
  ESP = (EBP);
  /* 1267278e pop ebp */
  EBP = (pop32());
  /* 1267278f ret  */
  ESPCHK(0x12672310u, _esp0);
  ESP += 4; return;
}

/* FUN_10012830 @ 0x12672830 (650 bytes, 178 insns) */
void f_12672830(void) {
  FTRACE(0x12672830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12672830 push ebp */
  push32((uint32_t)(EBP));
  /* 12672831 mov ebp, esp */
  EBP = (ESP);
  /* 12672833 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12672839 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267283d jne 0x12672999 */
  if (!C.zf) goto L_12672999;
  /* 12672843 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12672846 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1267284c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12672852 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12672855 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1267285c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12672866 push 0 */
  push32((uint32_t)(0x0u));
  /* 12672868 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1267286e push edx */
  push32((uint32_t)(EDX));
  /* 1267286f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12672872 push eax */
  push32((uint32_t)(EAX));
  /* 12672873 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672876 push ecx */
  push32((uint32_t)(ECX));
  /* 12672877 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1267287a push edx */
  push32((uint32_t)(EDX));
  /* 1267287b call 0x12673c50 */
  push32(0x12672880u); f_12673c50();
  /* 12672880 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672883 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12672886 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267288a jne 0x1267291f */
  if (!C.zf) goto L_1267291f;
  /* 12672890 call dword ptr [0x12693370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693370))), 0x12672896u);
  /* 12672896 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672899 je 0x126728a0 */
  if (C.zf) goto L_126728a0;
  /* 1267289b jmp 0x1267297d */
  goto L_1267297d;
L_126728a0:;
  /* 126728a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 126728a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 126728a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126728a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126728a9 push eax */
  push32((uint32_t)(EAX));
  /* 126728aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126728ad push ecx */
  push32((uint32_t)(ECX));
  /* 126728ae call 0x12673c50 */
  push32(0x126728b3u); f_12673c50();
  /* 126728b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126728b6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 126728bc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126728c3 jne 0x126728ca */
  if (!C.zf) goto L_126728ca;
  /* 126728c5 jmp 0x1267297d */
  goto L_1267297d;
L_126728ca:;
  /* 126728ca push 0x58 */
  push32((uint32_t)(0x58u));
  /* 126728cc push 0x1268ca64 */
  push32((uint32_t)(0x1268ca64u));
  /* 126728d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 126728d3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 126728d9 push edx */
  push32((uint32_t)(EDX));
  /* 126728da call 0x12664670 */
  push32(0x126728dfu); f_12664670();
  /* 126728df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126728e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126728e5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126728e9 jne 0x126728f0 */
  if (!C.zf) goto L_126728f0;
  /* 126728eb jmp 0x1267297d */
  goto L_1267297d;
L_126728f0:;
  /* 126728f0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 126728f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 126728f9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 126728ff push eax */
  push32((uint32_t)(EAX));
  /* 12672900 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12672903 push ecx */
  push32((uint32_t)(ECX));
  /* 12672904 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672907 push edx */
  push32((uint32_t)(EDX));
  /* 12672908 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1267290b push eax */
  push32((uint32_t)(EAX));
  /* 1267290c call 0x12673c50 */
  push32(0x12672911u); f_12673c50();
  /* 12672911 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672914 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12672917 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267291b jne 0x1267291f */
  if (!C.zf) goto L_1267291f;
  /* 1267291d jmp 0x1267297d */
  goto L_1267297d;
L_1267291f:;
  /* 1267291f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12672921 push 0x1268ca64 */
  push32((uint32_t)(0x1268ca64u));
  /* 12672926 push 2 */
  push32((uint32_t)(0x2u));
  /* 12672928 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1267292b push ecx */
  push32((uint32_t)(ECX));
  /* 1267292c call 0x12664670 */
  push32(0x12672931u); f_12664670();
  /* 12672931 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672934 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1267293a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1267293c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12672942 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672945 jne 0x12672949 */
  if (!C.zf) goto L_12672949;
  /* 12672947 jmp 0x1267297d */
  goto L_1267297d;
L_12672949:;
  /* 12672949 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1267294c push ecx */
  push32((uint32_t)(ECX));
  /* 1267294d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12672950 push edx */
  push32((uint32_t)(EDX));
  /* 12672951 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12672957 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12672959 push ecx */
  push32((uint32_t)(ECX));
  /* 1267295a call 0x12667e90 */
  push32(0x1267295fu); f_12667e90();
  /* 1267295f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672962 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672966 je 0x12672976 */
  if (C.zf) goto L_12672976;
  /* 12672968 push 2 */
  push32((uint32_t)(0x2u));
  /* 1267296a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267296d push edx */
  push32((uint32_t)(EDX));
  /* 1267296e call 0x12665100 */
  push32(0x12672973u); f_12665100();
  /* 12672973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12672976:;
  /* 12672976 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672978 jmp 0x12672ab6 */
  goto L_12672ab6;
L_1267297d:;
  /* 1267297d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672981 je 0x12672991 */
  if (C.zf) goto L_12672991;
  /* 12672983 push 2 */
  push32((uint32_t)(0x2u));
  /* 12672985 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12672988 push eax */
  push32((uint32_t)(EAX));
  /* 12672989 call 0x12665100 */
  push32(0x1267298eu); f_12665100();
  /* 1267298e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12672991:;
  /* 12672991 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12672994 jmp 0x12672ab6 */
  goto L_12672ab6;
L_12672999:;
  /* 12672999 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267299d jne 0x12672ab3 */
  if (!C.zf) goto L_12672ab3;
  /* 126729a3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 126729ad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126729b0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 126729b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 126729b8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 126729be push edx */
  push32((uint32_t)(EDX));
  /* 126729bf push 0x12690838 */
  push32((uint32_t)(0x12690838u));
  /* 126729c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126729c7 push eax */
  push32((uint32_t)(EAX));
  /* 126729c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126729cb push ecx */
  push32((uint32_t)(ECX));
  /* 126729cc call 0x12673ab0 */
  push32(0x126729d1u); f_12673ab0();
  /* 126729d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126729d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126729d6 jne 0x126729e0 */
  if (!C.zf) goto L_126729e0;
  /* 126729d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126729db jmp 0x12672ab6 */
  goto L_12672ab6;
L_126729e0:;
  /* 126729e0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 126729e6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 126729e9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 126729f3 jmp 0x12672a04 */
  goto L_12672a04;
L_126729f5:;
  /* 126729f5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 126729fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126729fe mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12672a04:;
  /* 12672a04 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672a0b jge 0x12672aaf */
  if ((C.sf==C.of)) goto L_12672aaf;
  /* 12672a11 cmp dword ptr [0x1268eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1268eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672a18 jle 0x12672a4b */
  if ((C.zf||C.sf!=C.of)) goto L_12672a4b;
  /* 12672a1a push 4 */
  push32((uint32_t)(0x4u));
  /* 12672a1c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12672a22 mov dl, byte ptr [ecx*2 + 0x12690838] */
  DL = (r8((uint32_t)(ECX*2 + 0x12690838)));
  /* 12672a29 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12672a2f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12672a35 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12672a3a push eax */
  push32((uint32_t)(EAX));
  /* 12672a3b call 0x1266a680 */
  push32(0x12672a40u); f_1266a680();
  /* 12672a40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672a43 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12672a49 jmp 0x12672a7e */
  goto L_12672a7e;
L_12672a4b:;
  /* 12672a4b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12672a51 mov dl, byte ptr [ecx*2 + 0x12690838] */
  DL = (r8((uint32_t)(ECX*2 + 0x12690838)));
  /* 12672a58 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12672a5e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12672a64 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12672a69 mov ecx, dword ptr [0x1268ec98] */
  ECX = (r32((uint32_t)(0x1268ec98)));
  /* 12672a6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12672a71 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12672a75 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12672a78 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12672a7e:;
  /* 12672a7e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672a85 je 0x12672aa8 */
  if (C.zf) goto L_12672aa8;
  /* 12672a87 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12672a8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12672a90 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12672a93 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12672a9a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12672a9e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12672aa4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12672aa6 jmp 0x12672aaa */
  goto L_12672aaa;
L_12672aa8:;
  /* 12672aa8 jmp 0x12672aaf */
  goto L_12672aaf;
L_12672aaa:;
  /* 12672aaa jmp 0x126729f5 */
  goto L_126729f5;
L_12672aaf:;
  /* 12672aaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672ab1 jmp 0x12672ab6 */
  goto L_12672ab6;
L_12672ab3:;
  /* 12672ab3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12672ab6:;
  /* 12672ab6 mov esp, ebp */
  ESP = (EBP);
  /* 12672ab8 pop ebp */
  EBP = (pop32());
  /* 12672ab9 ret  */
  ESPCHK(0x12672830u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ac0 @ 0x12672ac0 (10 bytes, 5 insns) */
void f_12672ac0(void) {
  FTRACE(0x12672ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12672ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12672ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12672ac3 mov eax, dword ptr [0x1268fd88] */
  EAX = (r32((uint32_t)(0x1268fd88)));
  /* 12672ac8 pop ebp */
  EBP = (pop32());
  /* 12672ac9 ret  */
  ESPCHK(0x12672ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ad0 @ 0x12672ad0 (575 bytes, 196 insns) */
void f_12672ad0(void) {
  FTRACE(0x12672ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12672ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12672ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12672ad3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12672ad5 push 0x1268ca70 */
  push32((uint32_t)(0x1268ca70u));
  /* 12672ada push 0x1266d778 */
  push32((uint32_t)(0x1266d778u));
  /* 12672adf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12672ae5 push eax */
  push32((uint32_t)(EAX));
  /* 12672ae6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12672aed add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672af0 push ebx */
  push32((uint32_t)(EBX));
  /* 12672af1 push esi */
  push32((uint32_t)(ESI));
  /* 12672af2 push edi */
  push32((uint32_t)(EDI));
  /* 12672af3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12672af6 cmp dword ptr [0x12690844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672afd jne 0x12672b4e */
  if (!C.zf) goto L_12672b4e;
  /* 12672aff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12672b02 push eax */
  push32((uint32_t)(EAX));
  /* 12672b03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12672b05 push 0x1268c1a0 */
  push32((uint32_t)(0x1268c1a0u));
  /* 12672b0a push 1 */
  push32((uint32_t)(0x1u));
  /* 12672b0c call dword ptr [0x126932e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932e4))), 0x12672b12u);
  /* 12672b12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12672b14 je 0x12672b22 */
  if (C.zf) goto L_12672b22;
  /* 12672b16 mov dword ptr [0x12690844], 1 */
  w32((uint32_t)(0x12690844), (0x1u));
  /* 12672b20 jmp 0x12672b4e */
  goto L_12672b4e;
L_12672b22:;
  /* 12672b22 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12672b25 push ecx */
  push32((uint32_t)(ECX));
  /* 12672b26 push 1 */
  push32((uint32_t)(0x1u));
  /* 12672b28 push 0x1268c19c */
  push32((uint32_t)(0x1268c19cu));
  /* 12672b2d push 1 */
  push32((uint32_t)(0x1u));
  /* 12672b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12672b31 call dword ptr [0x126932f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932f4))), 0x12672b37u);
  /* 12672b37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12672b39 je 0x12672b47 */
  if (C.zf) goto L_12672b47;
  /* 12672b3b mov dword ptr [0x12690844], 2 */
  w32((uint32_t)(0x12690844), (0x2u));
  /* 12672b45 jmp 0x12672b4e */
  goto L_12672b4e;
L_12672b47:;
  /* 12672b47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672b49 jmp 0x12672d29 */
  goto L_12672d29;
L_12672b4e:;
  /* 12672b4e cmp dword ptr [0x12690844], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12690844))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672b55 jne 0x12672b72 */
  if (!C.zf) goto L_12672b72;
  /* 12672b57 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12672b5a push edx */
  push32((uint32_t)(EDX));
  /* 12672b5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672b5e push eax */
  push32((uint32_t)(EAX));
  /* 12672b5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12672b62 push ecx */
  push32((uint32_t)(ECX));
  /* 12672b63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672b66 push edx */
  push32((uint32_t)(EDX));
  /* 12672b67 call dword ptr [0x126932e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932e4))), 0x12672b6du);
  /* 12672b6d jmp 0x12672d29 */
  goto L_12672d29;
L_12672b72:;
  /* 12672b72 cmp dword ptr [0x12690844], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12690844))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672b79 jne 0x12672d27 */
  if (!C.zf) goto L_12672d27;
  /* 12672b7f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672b83 jne 0x12672b8d */
  if (!C.zf) goto L_12672b8d;
  /* 12672b85 mov eax, dword ptr [0x126907b8] */
  EAX = (r32((uint32_t)(0x126907b8)));
  /* 12672b8a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12672b8d:;
  /* 12672b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12672b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12672b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12672b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12672b95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672b98 push ecx */
  push32((uint32_t)(ECX));
  /* 12672b99 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12672b9c push edx */
  push32((uint32_t)(EDX));
  /* 12672b9d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12672ba2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12672ba5 push eax */
  push32((uint32_t)(EAX));
  /* 12672ba6 call dword ptr [0x1269339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269339c))), 0x12672bacu);
  /* 12672bac mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12672baf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672bb3 jne 0x12672bbc */
  if (!C.zf) goto L_12672bbc;
  /* 12672bb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672bb7 jmp 0x12672d29 */
  goto L_12672d29;
L_12672bbc:;
  /* 12672bbc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12672bc3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12672bc6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672bc9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12672bcb call 0x12667810 */
  push32(0x12672bd0u); f_12667810();
  /* 12672bd0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12672bd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12672bd6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12672bd9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12672bdc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12672bdf push edx */
  push32((uint32_t)(EDX));
  /* 12672be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12672be2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12672be5 push eax */
  push32((uint32_t)(EAX));
  /* 12672be6 call 0x126683e0 */
  push32(0x12672bebu); f_126683e0();
  /* 12672beb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672bee mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12672bf5 jmp 0x12672c0e */
  goto L_12672c0e;
  /* 12672bf7 mov eax, 1 */
  EAX = (0x1u);
  /* 12672bfc ret  */
  ESPCHK(0x12672ad0u, _esp0);
  ESP += 4; return;
  /* 12672bfd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12672c00 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12672c07 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12672c0e:;
  /* 12672c0e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672c12 jne 0x12672c1b */
  if (!C.zf) goto L_12672c1b;
  /* 12672c14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672c16 jmp 0x12672d29 */
  goto L_12672d29;
L_12672c1b:;
  /* 12672c1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12672c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12672c1f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12672c22 push ecx */
  push32((uint32_t)(ECX));
  /* 12672c23 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12672c26 push edx */
  push32((uint32_t)(EDX));
  /* 12672c27 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672c2a push eax */
  push32((uint32_t)(EAX));
  /* 12672c2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12672c2e push ecx */
  push32((uint32_t)(ECX));
  /* 12672c2f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12672c34 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12672c37 push edx */
  push32((uint32_t)(EDX));
  /* 12672c38 call dword ptr [0x1269339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269339c))), 0x12672c3eu);
  /* 12672c3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12672c40 jne 0x12672c49 */
  if (!C.zf) goto L_12672c49;
  /* 12672c42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672c44 jmp 0x12672d29 */
  goto L_12672d29;
L_12672c49:;
  /* 12672c49 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12672c50 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12672c53 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12672c57 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672c5a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12672c5c call 0x12667810 */
  push32(0x12672c61u); f_12667810();
  /* 12672c61 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12672c64 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12672c67 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12672c6a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12672c6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12672c74 jmp 0x12672c8d */
  goto L_12672c8d;
  /* 12672c76 mov eax, 1 */
  EAX = (0x1u);
  /* 12672c7b ret  */
  ESPCHK(0x12672ad0u, _esp0);
  ESP += 4; return;
  /* 12672c7c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12672c7f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12672c86 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12672c8d:;
  /* 12672c8d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672c91 jne 0x12672c9a */
  if (!C.zf) goto L_12672c9a;
  /* 12672c93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672c95 jmp 0x12672d29 */
  goto L_12672d29;
L_12672c9a:;
  /* 12672c9a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672c9e jne 0x12672ca9 */
  if (!C.zf) goto L_12672ca9;
  /* 12672ca0 mov edx, dword ptr [0x126907a8] */
  EDX = (r32((uint32_t)(0x126907a8)));
  /* 12672ca6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12672ca9:;
  /* 12672ca9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672cac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12672caf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12672cb5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672cb8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12672cbb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12672cc2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12672cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12672cc6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12672cc9 push edx */
  push32((uint32_t)(EDX));
  /* 12672cca mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12672ccd push eax */
  push32((uint32_t)(EAX));
  /* 12672cce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672cd1 push ecx */
  push32((uint32_t)(ECX));
  /* 12672cd2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12672cd5 push edx */
  push32((uint32_t)(EDX));
  /* 12672cd6 call dword ptr [0x126932f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932f4))), 0x12672cdcu);
  /* 12672cdc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12672cdf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672ce2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12672ce5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12672ce7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12672cec cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672cf2 je 0x12672d08 */
  if (C.zf) goto L_12672d08;
  /* 12672cf4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672cf7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12672cfa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12672cfc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12672d00 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672d06 je 0x12672d0c */
  if (C.zf) goto L_12672d0c;
L_12672d08:;
  /* 12672d08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672d0a jmp 0x12672d29 */
  goto L_12672d29;
L_12672d0c:;
  /* 12672d0c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672d0f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12672d11 push eax */
  push32((uint32_t)(EAX));
  /* 12672d12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12672d15 push ecx */
  push32((uint32_t)(ECX));
  /* 12672d16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12672d19 push edx */
  push32((uint32_t)(EDX));
  /* 12672d1a call 0x1266c560 */
  push32(0x12672d1fu); f_1266c560();
  /* 12672d1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672d22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12672d25 jmp 0x12672d29 */
  goto L_12672d29;
L_12672d27:;
  /* 12672d27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12672d29:;
  /* 12672d29 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12672d2c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12672d2f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12672d36 pop edi */
  EDI = (pop32());
  /* 12672d37 pop esi */
  ESI = (pop32());
  /* 12672d38 pop ebx */
  EBX = (pop32());
  /* 12672d39 mov esp, ebp */
  ESP = (EBP);
  /* 12672d3b pop ebp */
  EBP = (pop32());
  /* 12672d3c ret  */
  ESPCHK(0x12672ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d40 @ 0x12672d40 (208 bytes, 85 insns) */
void f_12672d40(void) {
  FTRACE(0x12672d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12672d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12672d41 mov ebp, esp */
  EBP = (ESP);
  /* 12672d43 push edi */
  push32((uint32_t)(EDI));
  /* 12672d44 push esi */
  push32((uint32_t)(ESI));
  /* 12672d45 push ebx */
  push32((uint32_t)(EBX));
  /* 12672d46 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12672d49 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12672d4c lea eax, [0x126907a0] */
  EAX = ((uint32_t)(0x126907a0));
  /* 12672d52 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672d56 jne 0x12672d93 */
  if (!C.zf) goto L_12672d93;
  /* 12672d58 mov al, 0xff */
  AL = (0xffu);
  /* 12672d5a mov edi, edi */
  EDI = (EDI);
L_12672d5c:;
  /* 12672d5c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12672d5e je 0x12672d8e */
  if (C.zf) goto L_12672d8e;
  /* 12672d60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12672d62 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12672d63 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12672d65 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12672d66 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12672d68 je 0x12672d5c */
  if (C.zf) goto L_12672d5c;
  /* 12672d6a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12672d6c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12672d6e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12672d70 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12672d73 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12672d75 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12672d77 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12672d79 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12672d7b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12672d7d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12672d7f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12672d82 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12672d84 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12672d86 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12672d88 je 0x12672d5c */
  if (C.zf) goto L_12672d5c;
  /* 12672d8a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12672d8c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12672d8e:;
  /* 12672d8e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12672d91 jmp 0x12672e0b */
  goto L_12672e0b;
L_12672d93:;
  /* 12672d93 lock inc dword ptr [0x12690934] */
  x86_unimpl("lock inc @ 0x12672d93");
  /* 12672d9a cmp dword ptr [0x12690924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672da1 jg 0x12672da7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12672da7;
  /* 12672da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12672da5 jmp 0x12672dbc */
  goto L_12672dbc;
L_12672da7:;
  /* 12672da7 lock dec dword ptr [0x12690934] */
  x86_unimpl("lock dec @ 0x12672da7");
  /* 12672dae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12672db0 call 0x12668070 */
  push32(0x12672db5u); f_12668070();
  /* 12672db5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12672dbc:;
  /* 12672dbc mov eax, 0xff */
  EAX = (0xffu);
  /* 12672dc1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12672dc3 nop  */
  /* nop */
L_12672dc4:;
  /* 12672dc4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12672dc6 je 0x12672def */
  if (C.zf) goto L_12672def;
  /* 12672dc8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12672dca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12672dcb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12672dcd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12672dce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12672dd0 je 0x12672dc4 */
  if (C.zf) goto L_12672dc4;
  /* 12672dd2 push eax */
  push32((uint32_t)(EAX));
  /* 12672dd3 push ebx */
  push32((uint32_t)(EBX));
  /* 12672dd4 call 0x12673eb0 */
  push32(0x12672dd9u); f_12673eb0();
  /* 12672dd9 mov ebx, eax */
  EBX = (EAX);
  /* 12672ddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672dde call 0x12673eb0 */
  push32(0x12672de3u); f_12673eb0();
  /* 12672de3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672de6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12672de8 je 0x12672dc4 */
  if (C.zf) goto L_12672dc4;
  /* 12672dea sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12672dec sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12672def:;
  /* 12672def mov ebx, eax */
  EBX = (EAX);
  /* 12672df1 pop eax */
  EAX = (pop32());
  /* 12672df2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672df4 jne 0x12672dff */
  if (!C.zf) goto L_12672dff;
  /* 12672df6 lock dec dword ptr [0x12690934] */
  x86_unimpl("lock dec @ 0x12672df6");
  /* 12672dfd jmp 0x12672e09 */
  goto L_12672e09;
L_12672dff:;
  /* 12672dff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12672e01 call 0x12668110 */
  push32(0x12672e06u); f_12668110();
  /* 12672e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12672e09:;
  /* 12672e09 mov eax, ebx */
  EAX = (EBX);
L_12672e0b:;
  /* 12672e0b pop ebx */
  EBX = (pop32());
  /* 12672e0c pop esi */
  ESI = (pop32());
  /* 12672e0d pop edi */
  EDI = (pop32());
  /* 12672e0e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12672e0f ret  */
  ESPCHK(0x12672d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e10 @ 0x12672e10 (257 bytes, 103 insns) */
void f_12672e10(void) {
  FTRACE(0x12672e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12672e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12672e11 mov ebp, esp */
  EBP = (ESP);
  /* 12672e13 push edi */
  push32((uint32_t)(EDI));
  /* 12672e14 push esi */
  push32((uint32_t)(ESI));
  /* 12672e15 push ebx */
  push32((uint32_t)(EBX));
  /* 12672e16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12672e19 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12672e1b je 0x12672f0a */
  if (C.zf) goto L_12672f0a;
  /* 12672e21 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12672e24 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12672e27 lea eax, [0x126907a0] */
  EAX = ((uint32_t)(0x126907a0));
  /* 12672e2d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672e31 jne 0x12672e81 */
  if (!C.zf) goto L_12672e81;
  /* 12672e33 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12672e35 mov bl, 0x5a */
  BL = (0x5au);
  /* 12672e37 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12672e39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12672e3c:;
  /* 12672e3c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12672e3e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12672e40 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12672e42 je 0x12672e65 */
  if (C.zf) goto L_12672e65;
  /* 12672e44 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12672e46 je 0x12672e65 */
  if (C.zf) goto L_12672e65;
  /* 12672e48 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12672e49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12672e4a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12672e4c jb 0x12672e54 */
  if (C.cf) goto L_12672e54;
  /* 12672e4e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12672e50 ja 0x12672e54 */
  if ((!C.cf&&!C.zf)) goto L_12672e54;
  /* 12672e52 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12672e54:;
  /* 12672e54 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12672e56 jb 0x12672e5e */
  if (C.cf) goto L_12672e5e;
  /* 12672e58 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12672e5a ja 0x12672e5e */
  if ((!C.cf&&!C.zf)) goto L_12672e5e;
  /* 12672e5c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12672e5e:;
  /* 12672e5e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12672e60 jne 0x12672e6f */
  if (!C.zf) goto L_12672e6f;
  /* 12672e62 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12672e63 jne 0x12672e3c */
  if (!C.zf) goto L_12672e3c;
L_12672e65:;
  /* 12672e65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12672e67 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12672e69 je 0x12672f0a */
  if (C.zf) goto L_12672f0a;
L_12672e6f:;
  /* 12672e6f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12672e74 jb 0x12672f0a */
  if (C.cf) goto L_12672f0a;
  /* 12672e7a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12672e7c jmp 0x12672f0a */
  goto L_12672f0a;
L_12672e81:;
  /* 12672e81 lock inc dword ptr [0x12690934] */
  x86_unimpl("lock inc @ 0x12672e81");
  /* 12672e88 cmp dword ptr [0x12690924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672e8f jg 0x12672e95 */
  if ((!C.zf&&C.sf==C.of)) goto L_12672e95;
  /* 12672e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12672e93 jmp 0x12672eae */
  goto L_12672eae;
L_12672e95:;
  /* 12672e95 lock dec dword ptr [0x12690934] */
  x86_unimpl("lock dec @ 0x12672e95");
  /* 12672e9c mov ebx, ecx */
  EBX = (ECX);
  /* 12672e9e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12672ea0 call 0x12668070 */
  push32(0x12672ea5u); f_12668070();
  /* 12672ea5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12672eac mov ecx, ebx */
  ECX = (EBX);
L_12672eae:;
  /* 12672eae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672eb0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12672eb2 mov edi, edi */
  EDI = (EDI);
L_12672eb4:;
  /* 12672eb4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12672eb6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672eb8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12672eba je 0x12672edf */
  if (C.zf) goto L_12672edf;
  /* 12672ebc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12672ebe je 0x12672edf */
  if (C.zf) goto L_12672edf;
  /* 12672ec0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12672ec1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12672ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 12672ec3 push eax */
  push32((uint32_t)(EAX));
  /* 12672ec4 push ebx */
  push32((uint32_t)(EBX));
  /* 12672ec5 call 0x12673eb0 */
  push32(0x12672ecau); f_12673eb0();
  /* 12672eca mov ebx, eax */
  EBX = (EAX);
  /* 12672ecc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672ecf call 0x12673eb0 */
  push32(0x12672ed4u); f_12673eb0();
  /* 12672ed4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672ed7 pop ecx */
  ECX = (pop32());
  /* 12672ed8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672eda jne 0x12672ee5 */
  if (!C.zf) goto L_12672ee5;
  /* 12672edc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12672edd jne 0x12672eb4 */
  if (!C.zf) goto L_12672eb4;
L_12672edf:;
  /* 12672edf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12672ee1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672ee3 je 0x12672eee */
  if (C.zf) goto L_12672eee;
L_12672ee5:;
  /* 12672ee5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12672eea jb 0x12672eee */
  if (C.cf) goto L_12672eee;
  /* 12672eec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12672eee:;
  /* 12672eee pop eax */
  EAX = (pop32());
  /* 12672eef or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672ef1 jne 0x12672efc */
  if (!C.zf) goto L_12672efc;
  /* 12672ef3 lock dec dword ptr [0x12690934] */
  x86_unimpl("lock dec @ 0x12672ef3");
  /* 12672efa jmp 0x12672f0a */
  goto L_12672f0a;
L_12672efc:;
  /* 12672efc mov ebx, ecx */
  EBX = (ECX);
  /* 12672efe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12672f00 call 0x12668110 */
  push32(0x12672f05u); f_12668110();
  /* 12672f05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672f08 mov ecx, ebx */
  ECX = (EBX);
L_12672f0a:;
  /* 12672f0a mov eax, ecx */
  EAX = (ECX);
  /* 12672f0c pop ebx */
  EBX = (pop32());
  /* 12672f0d pop esi */
  ESI = (pop32());
  /* 12672f0e pop edi */
  EDI = (pop32());
  /* 12672f0f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12672f10 ret  */
  ESPCHK(0x12672e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f20 @ 0x12672f20 (255 bytes, 88 insns) */
void f_12672f20(void) {
  FTRACE(0x12672f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12672f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12672f21 mov ebp, esp */
  EBP = (ESP);
  /* 12672f23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12672f26:;
  /* 12672f26 cmp dword ptr [0x1268eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1268eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672f2d jle 0x12672f46 */
  if ((C.zf||C.sf!=C.of)) goto L_12672f46;
  /* 12672f2f push 8 */
  push32((uint32_t)(0x8u));
  /* 12672f31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672f34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12672f36 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12672f38 push ecx */
  push32((uint32_t)(ECX));
  /* 12672f39 call 0x1266a680 */
  push32(0x12672f3eu); f_1266a680();
  /* 12672f3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672f41 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12672f44 jmp 0x12672f5f */
  goto L_12672f5f;
L_12672f46:;
  /* 12672f46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672f49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672f4b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12672f4d mov ecx, dword ptr [0x1268ec98] */
  ECX = (r32((uint32_t)(0x1268ec98)));
  /* 12672f53 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12672f55 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12672f59 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12672f5c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12672f5f:;
  /* 12672f5f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672f63 je 0x12672f70 */
  if (C.zf) goto L_12672f70;
  /* 12672f65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672f68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672f6b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12672f6e jmp 0x12672f26 */
  goto L_12672f26;
L_12672f70:;
  /* 12672f70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672f73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12672f75 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12672f77 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12672f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672f7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672f80 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12672f83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12672f86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12672f89 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672f8d je 0x12672f95 */
  if (C.zf) goto L_12672f95;
  /* 12672f8f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672f93 jne 0x12672fa8 */
  if (!C.zf) goto L_12672fa8;
L_12672f95:;
  /* 12672f95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672f98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12672f9a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12672f9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12672f9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672fa2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12672fa5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12672fa8:;
  /* 12672fa8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12672faf:;
  /* 12672faf cmp dword ptr [0x1268eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1268eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672fb6 jle 0x12672fcb */
  if ((C.zf||C.sf!=C.of)) goto L_12672fcb;
  /* 12672fb8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12672fba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12672fbd push edx */
  push32((uint32_t)(EDX));
  /* 12672fbe call 0x1266a680 */
  push32(0x12672fc3u); f_1266a680();
  /* 12672fc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12672fc6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12672fc9 jmp 0x12672fe0 */
  goto L_12672fe0;
L_12672fcb:;
  /* 12672fcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12672fce mov ecx, dword ptr [0x1268ec98] */
  ECX = (r32((uint32_t)(0x1268ec98)));
  /* 12672fd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12672fd6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12672fda and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12672fdd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12672fe0:;
  /* 12672fe0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12672fe4 je 0x1267300b */
  if (C.zf) goto L_1267300b;
  /* 12672fe6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12672fe9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12672fec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12672fef lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12672ff3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12672ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12672ff9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12672ffb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12672ffd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12673000 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673003 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673006 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12673009 jmp 0x12672faf */
  goto L_12672faf;
L_1267300b:;
  /* 1267300b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267300f jne 0x12673018 */
  if (!C.zf) goto L_12673018;
  /* 12673011 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12673014 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12673016 jmp 0x1267301b */
  goto L_1267301b;
L_12673018:;
  /* 12673018 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1267301b:;
  /* 1267301b mov esp, ebp */
  ESP = (EBP);
  /* 1267301d pop ebp */
  EBP = (pop32());
  /* 1267301e ret  */
  ESPCHK(0x12672f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013020 @ 0x12673020 (17 bytes, 8 insns) */
void f_12673020(void) {
  FTRACE(0x12673020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12673020 push ebp */
  push32((uint32_t)(EBP));
  /* 12673021 mov ebp, esp */
  EBP = (ESP);
  /* 12673023 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673026 push eax */
  push32((uint32_t)(EAX));
  /* 12673027 call 0x12672f20 */
  push32(0x1267302cu); f_12672f20();
  /* 1267302c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267302f pop ebp */
  EBP = (pop32());
  /* 12673030 ret  */
  ESPCHK(0x12673020u, _esp0);
  ESP += 4; return;
}

/* FUN_10013040 @ 0x12673040 (297 bytes, 106 insns) */
void f_12673040(void) {
  FTRACE(0x12673040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12673040 push ebp */
  push32((uint32_t)(EBP));
  /* 12673041 mov ebp, esp */
  EBP = (ESP);
  /* 12673043 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12673046 push esi */
  push32((uint32_t)(ESI));
L_12673047:;
  /* 12673047 cmp dword ptr [0x1268eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1268eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267304e jle 0x12673067 */
  if ((C.zf||C.sf!=C.of)) goto L_12673067;
  /* 12673050 push 8 */
  push32((uint32_t)(0x8u));
  /* 12673052 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673055 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12673057 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12673059 push ecx */
  push32((uint32_t)(ECX));
  /* 1267305a call 0x1266a680 */
  push32(0x1267305fu); f_1266a680();
  /* 1267305f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673062 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12673065 jmp 0x12673080 */
  goto L_12673080;
L_12673067:;
  /* 12673067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267306a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267306c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1267306e mov ecx, dword ptr [0x1268ec98] */
  ECX = (r32((uint32_t)(0x1268ec98)));
  /* 12673074 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12673076 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1267307a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1267307d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12673080:;
  /* 12673080 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673084 je 0x12673091 */
  if (C.zf) goto L_12673091;
  /* 12673086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673089 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267308c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1267308f jmp 0x12673047 */
  goto L_12673047;
L_12673091:;
  /* 12673091 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673094 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12673096 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12673098 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1267309b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267309e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126730a1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 126730a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126730a7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 126730aa cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126730ae je 0x126730b6 */
  if (C.zf) goto L_126730b6;
  /* 126730b0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126730b4 jne 0x126730c9 */
  if (!C.zf) goto L_126730c9;
L_126730b6:;
  /* 126730b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126730b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126730bb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126730bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126730c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126730c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126730c6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_126730c9:;
  /* 126730c9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 126730d0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_126730d7:;
  /* 126730d7 cmp dword ptr [0x1268eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1268eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126730de jle 0x126730f3 */
  if ((C.zf||C.sf!=C.of)) goto L_126730f3;
  /* 126730e0 push 4 */
  push32((uint32_t)(0x4u));
  /* 126730e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126730e5 push edx */
  push32((uint32_t)(EDX));
  /* 126730e6 call 0x1266a680 */
  push32(0x126730ebu); f_1266a680();
  /* 126730eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126730ee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 126730f1 jmp 0x12673108 */
  goto L_12673108;
L_126730f3:;
  /* 126730f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126730f6 mov ecx, dword ptr [0x1268ec98] */
  ECX = (r32((uint32_t)(0x1268ec98)));
  /* 126730fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126730fe mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12673102 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12673105 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12673108:;
  /* 12673108 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267310c je 0x12673149 */
  if (C.zf) goto L_12673149;
  /* 1267310e push 0 */
  push32((uint32_t)(0x0u));
  /* 12673110 push 0xa */
  push32((uint32_t)(0xau));
  /* 12673112 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12673115 push eax */
  push32((uint32_t)(EAX));
  /* 12673116 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673119 push ecx */
  push32((uint32_t)(ECX));
  /* 1267311a call 0x12673fe0 */
  push32(0x1267311fu); f_12673fe0();
  /* 1267311f mov ecx, eax */
  ECX = (EAX);
  /* 12673121 mov esi, edx */
  ESI = (EDX);
  /* 12673123 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12673126 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12673129 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1267312a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267312c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1267312e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12673131 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12673134 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673137 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12673139 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1267313b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1267313e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673141 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673144 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12673147 jmp 0x126730d7 */
  goto L_126730d7;
L_12673149:;
  /* 12673149 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267314d jne 0x1267315e */
  if (!C.zf) goto L_1267315e;
  /* 1267314f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673152 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12673154 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12673157 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267315a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1267315c jmp 0x12673164 */
  goto L_12673164;
L_1267315e:;
  /* 1267315e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673161 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12673164:;
  /* 12673164 pop esi */
  ESI = (pop32());
  /* 12673165 mov esp, ebp */
  ESP = (EBP);
  /* 12673167 pop ebp */
  EBP = (pop32());
  /* 12673168 ret  */
  ESPCHK(0x12673040u, _esp0);
  ESP += 4; return;
}

/* FUN_10013170 @ 0x12673170 (61 bytes, 18 insns) */
void f_12673170(void) {
  FTRACE(0x12673170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12673170 push ebp */
  push32((uint32_t)(EBP));
  /* 12673171 mov ebp, esp */
  EBP = (ESP);
  /* 12673173 cmp dword ptr [0x12690900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267317a jne 0x126731ab */
  if (!C.zf) goto L_126731ab;
  /* 1267317c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1267317e call 0x12668070 */
  push32(0x12673183u); f_12668070();
  /* 12673183 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673186 cmp dword ptr [0x12690900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267318d jne 0x126731a1 */
  if (!C.zf) goto L_126731a1;
  /* 1267318f call 0x126731d0 */
  push32(0x12673194u); f_126731d0();
  /* 12673194 mov eax, dword ptr [0x12690900] */
  EAX = (r32((uint32_t)(0x12690900)));
  /* 12673199 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267319c mov dword ptr [0x12690900], eax */
  w32((uint32_t)(0x12690900), (EAX));
L_126731a1:;
  /* 126731a1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 126731a3 call 0x12668110 */
  push32(0x126731a8u); f_12668110();
  /* 126731a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126731ab:;
  /* 126731ab pop ebp */
  EBP = (pop32());
  /* 126731ac ret  */
  ESPCHK(0x12673170u, _esp0);
  ESP += 4; return;
}

/* FUN_100131b0 @ 0x126731b0 (30 bytes, 11 insns) */
void f_126731b0(void) {
  FTRACE(0x126731b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126731b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126731b1 mov ebp, esp */
  EBP = (ESP);
  /* 126731b3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 126731b5 call 0x12668070 */
  push32(0x126731bau); f_12668070();
  /* 126731ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126731bd call 0x126731d0 */
  push32(0x126731c2u); f_126731d0();
  /* 126731c2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 126731c4 call 0x12668110 */
  push32(0x126731c9u); f_12668110();
  /* 126731c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126731cc pop ebp */
  EBP = (pop32());
  /* 126731cd ret  */
  ESPCHK(0x126731b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100131d0 @ 0x126731d0 (939 bytes, 266 insns) */
void f_126731d0(void) {
  FTRACE(0x126731d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126731d0 push ebp */
  push32((uint32_t)(EBP));
  /* 126731d1 mov ebp, esp */
  EBP = (ESP);
  /* 126731d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126731d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 126731dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 126731df call 0x12668070 */
  push32(0x126731e4u); f_12668070();
  /* 126731e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126731e7 mov dword ptr [0x12690848], 0 */
  w32((uint32_t)(0x12690848), (0x0u));
  /* 126731f1 mov dword ptr [0x1268fe38], 0xffffffff */
  w32((uint32_t)(0x1268fe38), (0xffffffffu));
  /* 126731fb mov eax, dword ptr [0x1268fe38] */
  EAX = (r32((uint32_t)(0x1268fe38)));
  /* 12673200 mov dword ptr [0x1268fe28], eax */
  w32((uint32_t)(0x1268fe28), (EAX));
  /* 12673205 push 0x1268cad0 */
  push32((uint32_t)(0x1268cad0u));
  /* 1267320a call 0x12674050 */
  push32(0x1267320fu); f_12674050();
  /* 1267320f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673212 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12673215 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673219 jne 0x12673353 */
  if (!C.zf) goto L_12673353;
  /* 1267321f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12673221 call 0x12668110 */
  push32(0x12673226u); f_12668110();
  /* 12673226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673229 push 0x12690850 */
  push32((uint32_t)(0x12690850u));
  /* 1267322e call dword ptr [0x126932a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932a8))), 0x12673234u);
  /* 12673234 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673237 je 0x1267334e */
  if (C.zf) goto L_1267334e;
  /* 1267323d mov dword ptr [0x12690848], 1 */
  w32((uint32_t)(0x12690848), (0x1u));
  /* 12673247 mov ecx, dword ptr [0x12690850] */
  ECX = (r32((uint32_t)(0x12690850)));
  /* 1267324d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12673250 mov dword ptr [0x1268fd90], ecx */
  w32((uint32_t)(0x1268fd90), (ECX));
  /* 12673256 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12673258 mov dx, word ptr [0x12690896] */
  DX = (r16((uint32_t)(0x12690896)));
  /* 1267325f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12673261 je 0x12673279 */
  if (C.zf) goto L_12673279;
  /* 12673263 mov eax, dword ptr [0x126908a4] */
  EAX = (r32((uint32_t)(0x126908a4)));
  /* 12673268 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1267326b mov ecx, dword ptr [0x1268fd90] */
  ECX = (r32((uint32_t)(0x1268fd90)));
  /* 12673271 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673273 mov dword ptr [0x1268fd90], ecx */
  w32((uint32_t)(0x1268fd90), (ECX));
L_12673279:;
  /* 12673279 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1267327b mov dx, word ptr [0x126908ea] */
  DX = (r16((uint32_t)(0x126908ea)));
  /* 12673282 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12673284 je 0x126732ae */
  if (C.zf) goto L_126732ae;
  /* 12673286 cmp dword ptr [0x126908f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126908f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267328d je 0x126732ae */
  if (C.zf) goto L_126732ae;
  /* 1267328f mov dword ptr [0x1268fd94], 1 */
  w32((uint32_t)(0x1268fd94), (0x1u));
  /* 12673299 mov eax, dword ptr [0x126908f8] */
  EAX = (r32((uint32_t)(0x126908f8)));
  /* 1267329e sub eax, dword ptr [0x126908a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x126908a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126732a4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126732a7 mov dword ptr [0x1268fd98], eax */
  w32((uint32_t)(0x1268fd98), (EAX));
  /* 126732ac jmp 0x126732c2 */
  goto L_126732c2;
L_126732ae:;
  /* 126732ae mov dword ptr [0x1268fd94], 0 */
  w32((uint32_t)(0x1268fd94), (0x0u));
  /* 126732b8 mov dword ptr [0x1268fd98], 0 */
  w32((uint32_t)(0x1268fd98), (0x0u));
L_126732c2:;
  /* 126732c2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 126732c5 push ecx */
  push32((uint32_t)(ECX));
  /* 126732c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 126732c8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 126732ca mov edx, dword ptr [0x1268fe1c] */
  EDX = (r32((uint32_t)(0x1268fe1c)));
  /* 126732d0 push edx */
  push32((uint32_t)(EDX));
  /* 126732d1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 126732d3 push 0x12690854 */
  push32((uint32_t)(0x12690854u));
  /* 126732d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 126732dd mov eax, dword ptr [0x126907b8] */
  EAX = (r32((uint32_t)(0x126907b8)));
  /* 126732e2 push eax */
  push32((uint32_t)(EAX));
  /* 126732e3 call dword ptr [0x1269339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269339c))), 0x126732e9u);
  /* 126732e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126732eb je 0x126732ff */
  if (C.zf) goto L_126732ff;
  /* 126732ed cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126732f1 jne 0x126732ff */
  if (!C.zf) goto L_126732ff;
  /* 126732f3 mov ecx, dword ptr [0x1268fe1c] */
  ECX = (r32((uint32_t)(0x1268fe1c)));
  /* 126732f9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 126732fd jmp 0x12673308 */
  goto L_12673308;
L_126732ff:;
  /* 126732ff mov edx, dword ptr [0x1268fe1c] */
  EDX = (r32((uint32_t)(0x1268fe1c)));
  /* 12673305 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12673308:;
  /* 12673308 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1267330b push eax */
  push32((uint32_t)(EAX));
  /* 1267330c push 0 */
  push32((uint32_t)(0x0u));
  /* 1267330e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12673310 mov ecx, dword ptr [0x1268fe20] */
  ECX = (r32((uint32_t)(0x1268fe20)));
  /* 12673316 push ecx */
  push32((uint32_t)(ECX));
  /* 12673317 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12673319 push 0x126908a8 */
  push32((uint32_t)(0x126908a8u));
  /* 1267331e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12673323 mov edx, dword ptr [0x126907b8] */
  EDX = (r32((uint32_t)(0x126907b8)));
  /* 12673329 push edx */
  push32((uint32_t)(EDX));
  /* 1267332a call dword ptr [0x1269339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269339c))), 0x12673330u);
  /* 12673330 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12673332 je 0x12673345 */
  if (C.zf) goto L_12673345;
  /* 12673334 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673338 jne 0x12673345 */
  if (!C.zf) goto L_12673345;
  /* 1267333a mov eax, dword ptr [0x1268fe20] */
  EAX = (r32((uint32_t)(0x1268fe20)));
  /* 1267333f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12673343 jmp 0x1267334e */
  goto L_1267334e;
L_12673345:;
  /* 12673345 mov ecx, dword ptr [0x1268fe20] */
  ECX = (r32((uint32_t)(0x1268fe20)));
  /* 1267334b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1267334e:;
  /* 1267334e jmp 0x12673577 */
  goto L_12673577;
L_12673353:;
  /* 12673353 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673356 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12673359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1267335b je 0x1267337d */
  if (C.zf) goto L_1267337d;
  /* 1267335d cmp dword ptr [0x126908fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126908fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673364 je 0x1267338c */
  if (C.zf) goto L_1267338c;
  /* 12673366 mov ecx, dword ptr [0x126908fc] */
  ECX = (r32((uint32_t)(0x126908fc)));
  /* 1267336c push ecx */
  push32((uint32_t)(ECX));
  /* 1267336d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673370 push edx */
  push32((uint32_t)(EDX));
  /* 12673371 call 0x12670300 */
  push32(0x12673376u); f_12670300();
  /* 12673376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673379 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1267337b jne 0x1267338c */
  if (!C.zf) goto L_1267338c;
L_1267337d:;
  /* 1267337d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1267337f call 0x12668110 */
  push32(0x12673384u); f_12668110();
  /* 12673384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673387 jmp 0x12673577 */
  goto L_12673577;
L_1267338c:;
  /* 1267338c push 2 */
  push32((uint32_t)(0x2u));
  /* 1267338e mov eax, dword ptr [0x126908fc] */
  EAX = (r32((uint32_t)(0x126908fc)));
  /* 12673393 push eax */
  push32((uint32_t)(EAX));
  /* 12673394 call 0x12665100 */
  push32(0x12673399u); f_12665100();
  /* 12673399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267339c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 126733a1 push 0x1268cac8 */
  push32((uint32_t)(0x1268cac8u));
  /* 126733a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 126733a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126733ab push ecx */
  push32((uint32_t)(ECX));
  /* 126733ac call 0x126674a0 */
  push32(0x126733b1u); f_126674a0();
  /* 126733b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126733b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126733b7 push eax */
  push32((uint32_t)(EAX));
  /* 126733b8 call 0x12664670 */
  push32(0x126733bdu); f_12664670();
  /* 126733bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126733c0 mov dword ptr [0x126908fc], eax */
  w32((uint32_t)(0x126908fc), (EAX));
  /* 126733c5 cmp dword ptr [0x126908fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126908fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126733cc jne 0x126733dd */
  if (!C.zf) goto L_126733dd;
  /* 126733ce push 0xc */
  push32((uint32_t)(0xcu));
  /* 126733d0 call 0x12668110 */
  push32(0x126733d5u); f_12668110();
  /* 126733d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126733d8 jmp 0x12673577 */
  goto L_12673577;
L_126733dd:;
  /* 126733dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126733e0 push edx */
  push32((uint32_t)(EDX));
  /* 126733e1 mov eax, dword ptr [0x126908fc] */
  EAX = (r32((uint32_t)(0x126908fc)));
  /* 126733e6 push eax */
  push32((uint32_t)(EAX));
  /* 126733e7 call 0x12667620 */
  push32(0x126733ecu); f_12667620();
  /* 126733ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126733ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 126733f1 call 0x12668110 */
  push32(0x126733f6u); f_12668110();
  /* 126733f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126733f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 126733fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126733fe push ecx */
  push32((uint32_t)(ECX));
  /* 126733ff mov edx, dword ptr [0x1268fe1c] */
  EDX = (r32((uint32_t)(0x1268fe1c)));
  /* 12673405 push edx */
  push32((uint32_t)(EDX));
  /* 12673406 call 0x12667e90 */
  push32(0x1267340bu); f_12667e90();
  /* 1267340b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267340e mov eax, dword ptr [0x1268fe1c] */
  EAX = (r32((uint32_t)(0x1268fe1c)));
  /* 12673413 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12673417 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267341a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267341d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12673420 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673423 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12673426 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673429 jne 0x1267343d */
  if (!C.zf) goto L_1267343d;
  /* 1267342b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267342e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673431 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12673434 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673437 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267343a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1267343d:;
  /* 1267343d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673440 push eax */
  push32((uint32_t)(EAX));
  /* 12673441 call 0x12672f20 */
  push32(0x12673446u); f_12672f20();
  /* 12673446 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673449 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1267344f mov dword ptr [0x1268fd90], eax */
  w32((uint32_t)(0x1268fd90), (EAX));
L_12673454:;
  /* 12673454 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673457 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1267345a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267345d je 0x12673475 */
  if (C.zf) goto L_12673475;
  /* 1267345f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673462 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12673465 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673468 jl 0x12673480 */
  if ((C.sf!=C.of)) goto L_12673480;
  /* 1267346a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267346d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12673470 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673473 jg 0x12673480 */
  if ((!C.zf&&C.sf==C.of)) goto L_12673480;
L_12673475:;
  /* 12673475 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673478 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267347b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1267347e jmp 0x12673454 */
  goto L_12673454;
L_12673480:;
  /* 12673480 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673483 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12673486 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673489 jne 0x12673525 */
  if (!C.zf) goto L_12673525;
  /* 1267348f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673492 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673495 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12673498 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267349b push edx */
  push32((uint32_t)(EDX));
  /* 1267349c call 0x12672f20 */
  push32(0x126734a1u); f_12672f20();
  /* 126734a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126734a4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126734a7 mov ecx, dword ptr [0x1268fd90] */
  ECX = (r32((uint32_t)(0x1268fd90)));
  /* 126734ad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126734af mov dword ptr [0x1268fd90], ecx */
  w32((uint32_t)(0x1268fd90), (ECX));
L_126734b5:;
  /* 126734b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126734b8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 126734bb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126734be jl 0x126734d6 */
  if ((C.sf!=C.of)) goto L_126734d6;
  /* 126734c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126734c3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 126734c6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126734c9 jg 0x126734d6 */
  if ((!C.zf&&C.sf==C.of)) goto L_126734d6;
  /* 126734cb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126734ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126734d1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126734d4 jmp 0x126734b5 */
  goto L_126734b5;
L_126734d6:;
  /* 126734d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126734d9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 126734dc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126734df jne 0x12673525 */
  if (!C.zf) goto L_12673525;
  /* 126734e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126734e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126734e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126734ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126734ed push ecx */
  push32((uint32_t)(ECX));
  /* 126734ee call 0x12672f20 */
  push32(0x126734f3u); f_12672f20();
  /* 126734f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126734f6 mov edx, dword ptr [0x1268fd90] */
  EDX = (r32((uint32_t)(0x1268fd90)));
  /* 126734fc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126734fe mov dword ptr [0x1268fd90], edx */
  w32((uint32_t)(0x1268fd90), (EDX));
L_12673504:;
  /* 12673504 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673507 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1267350a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267350d jl 0x12673525 */
  if ((C.sf!=C.of)) goto L_12673525;
  /* 1267350f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673512 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12673515 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673518 jg 0x12673525 */
  if ((!C.zf&&C.sf==C.of)) goto L_12673525;
  /* 1267351a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267351d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673520 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12673523 jmp 0x12673504 */
  goto L_12673504;
L_12673525:;
  /* 12673525 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673529 je 0x12673539 */
  if (C.zf) goto L_12673539;
  /* 1267352b mov edx, dword ptr [0x1268fd90] */
  EDX = (r32((uint32_t)(0x1268fd90)));
  /* 12673531 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12673533 mov dword ptr [0x1268fd90], edx */
  w32((uint32_t)(0x1268fd90), (EDX));
L_12673539:;
  /* 12673539 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267353c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1267353f mov dword ptr [0x1268fd94], ecx */
  w32((uint32_t)(0x1268fd94), (ECX));
  /* 12673545 cmp dword ptr [0x1268fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1268fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267354c je 0x1267356e */
  if (C.zf) goto L_1267356e;
  /* 1267354e push 3 */
  push32((uint32_t)(0x3u));
  /* 12673550 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673553 push edx */
  push32((uint32_t)(EDX));
  /* 12673554 mov eax, dword ptr [0x1268fe20] */
  EAX = (r32((uint32_t)(0x1268fe20)));
  /* 12673559 push eax */
  push32((uint32_t)(EAX));
  /* 1267355a call 0x12667e90 */
  push32(0x1267355fu); f_12667e90();
  /* 1267355f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673562 mov ecx, dword ptr [0x1268fe20] */
  ECX = (r32((uint32_t)(0x1268fe20)));
  /* 12673568 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1267356c jmp 0x12673577 */
  goto L_12673577;
L_1267356e:;
  /* 1267356e mov edx, dword ptr [0x1268fe20] */
  EDX = (r32((uint32_t)(0x1268fe20)));
  /* 12673574 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12673577:;
  /* 12673577 mov esp, ebp */
  ESP = (EBP);
  /* 12673579 pop ebp */
  EBP = (pop32());
  /* 1267357a ret  */
  ESPCHK(0x126731d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013580 @ 0x12673580 (46 bytes, 18 insns) */
void f_12673580(void) {
  FTRACE(0x12673580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12673580 push ebp */
  push32((uint32_t)(EBP));
  /* 12673581 mov ebp, esp */
  EBP = (ESP);
  /* 12673583 push ecx */
  push32((uint32_t)(ECX));
  /* 12673584 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12673586 call 0x12668070 */
  push32(0x1267358bu); f_12668070();
  /* 1267358b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267358e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673591 push eax */
  push32((uint32_t)(EAX));
  /* 12673592 call 0x126735b0 */
  push32(0x12673597u); f_126735b0();
  /* 12673597 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267359a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1267359d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1267359f call 0x12668110 */
  push32(0x126735a4u); f_12668110();
  /* 126735a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126735a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126735aa mov esp, ebp */
  ESP = (EBP);
  /* 126735ac pop ebp */
  EBP = (pop32());
  /* 126735ad ret  */
  ESPCHK(0x12673580u, _esp0);
  ESP += 4; return;
}

/* FUN_100135b0 @ 0x126735b0 (762 bytes, 246 insns) */
void f_126735b0(void) {
  FTRACE(0x126735b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126735b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126735b1 mov ebp, esp */
  EBP = (ESP);
  /* 126735b3 push ecx */
  push32((uint32_t)(ECX));
  /* 126735b4 cmp dword ptr [0x1268fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1268fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126735bb jne 0x126735c4 */
  if (!C.zf) goto L_126735c4;
  /* 126735bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126735bf jmp 0x126738a6 */
  goto L_126738a6;
L_126735c4:;
  /* 126735c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126735c7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 126735ca cmp ecx, dword ptr [0x1268fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1268fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126735d0 jne 0x126735e4 */
  if (!C.zf) goto L_126735e4;
  /* 126735d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126735d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 126735d8 cmp eax, dword ptr [0x1268fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1268fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126735de je 0x126737ab */
  if (C.zf) goto L_126737ab;
L_126735e4:;
  /* 126735e4 cmp dword ptr [0x12690848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126735eb je 0x12673765 */
  if (C.zf) goto L_12673765;
  /* 126735f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126735f3 mov cx, word ptr [0x126908e8] */
  CX = (r16((uint32_t)(0x126908e8)));
  /* 126735fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126735fc jne 0x12673659 */
  if (!C.zf) goto L_12673659;
  /* 126735fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12673600 mov dx, word ptr [0x126908f6] */
  DX = (r16((uint32_t)(0x126908f6)));
  /* 12673607 push edx */
  push32((uint32_t)(EDX));
  /* 12673608 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267360a mov ax, word ptr [0x126908f4] */
  AX = (r16((uint32_t)(0x126908f4)));
  /* 12673610 push eax */
  push32((uint32_t)(EAX));
  /* 12673611 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12673613 mov cx, word ptr [0x126908f2] */
  CX = (r16((uint32_t)(0x126908f2)));
  /* 1267361a push ecx */
  push32((uint32_t)(ECX));
  /* 1267361b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1267361d mov dx, word ptr [0x126908f0] */
  DX = (r16((uint32_t)(0x126908f0)));
  /* 12673624 push edx */
  push32((uint32_t)(EDX));
  /* 12673625 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673627 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12673629 mov ax, word ptr [0x126908ec] */
  AX = (r16((uint32_t)(0x126908ec)));
  /* 1267362f push eax */
  push32((uint32_t)(EAX));
  /* 12673630 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12673632 mov cx, word ptr [0x126908ee] */
  CX = (r16((uint32_t)(0x126908ee)));
  /* 12673639 push ecx */
  push32((uint32_t)(ECX));
  /* 1267363a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1267363c mov dx, word ptr [0x126908ea] */
  DX = (r16((uint32_t)(0x126908ea)));
  /* 12673643 push edx */
  push32((uint32_t)(EDX));
  /* 12673644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673647 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1267364a push ecx */
  push32((uint32_t)(ECX));
  /* 1267364b push 1 */
  push32((uint32_t)(0x1u));
  /* 1267364d push 1 */
  push32((uint32_t)(0x1u));
  /* 1267364f call 0x126738b0 */
  push32(0x12673654u); f_126738b0();
  /* 12673654 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673657 jmp 0x126736aa */
  goto L_126736aa;
L_12673659:;
  /* 12673659 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1267365b mov dx, word ptr [0x126908f6] */
  DX = (r16((uint32_t)(0x126908f6)));
  /* 12673662 push edx */
  push32((uint32_t)(EDX));
  /* 12673663 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12673665 mov ax, word ptr [0x126908f4] */
  AX = (r16((uint32_t)(0x126908f4)));
  /* 1267366b push eax */
  push32((uint32_t)(EAX));
  /* 1267366c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1267366e mov cx, word ptr [0x126908f2] */
  CX = (r16((uint32_t)(0x126908f2)));
  /* 12673675 push ecx */
  push32((uint32_t)(ECX));
  /* 12673676 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12673678 mov dx, word ptr [0x126908f0] */
  DX = (r16((uint32_t)(0x126908f0)));
  /* 1267367f push edx */
  push32((uint32_t)(EDX));
  /* 12673680 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12673682 mov ax, word ptr [0x126908ee] */
  AX = (r16((uint32_t)(0x126908ee)));
  /* 12673688 push eax */
  push32((uint32_t)(EAX));
  /* 12673689 push 0 */
  push32((uint32_t)(0x0u));
  /* 1267368b push 0 */
  push32((uint32_t)(0x0u));
  /* 1267368d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1267368f mov cx, word ptr [0x126908ea] */
  CX = (r16((uint32_t)(0x126908ea)));
  /* 12673696 push ecx */
  push32((uint32_t)(ECX));
  /* 12673697 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267369a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1267369d push eax */
  push32((uint32_t)(EAX));
  /* 1267369e push 0 */
  push32((uint32_t)(0x0u));
  /* 126736a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 126736a2 call 0x126738b0 */
  push32(0x126736a7u); f_126738b0();
  /* 126736a7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126736aa:;
  /* 126736aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126736ac mov cx, word ptr [0x12690894] */
  CX = (r16((uint32_t)(0x12690894)));
  /* 126736b3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126736b5 jne 0x12673712 */
  if (!C.zf) goto L_12673712;
  /* 126736b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126736b9 mov dx, word ptr [0x126908a2] */
  DX = (r16((uint32_t)(0x126908a2)));
  /* 126736c0 push edx */
  push32((uint32_t)(EDX));
  /* 126736c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126736c3 mov ax, word ptr [0x126908a0] */
  AX = (r16((uint32_t)(0x126908a0)));
  /* 126736c9 push eax */
  push32((uint32_t)(EAX));
  /* 126736ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126736cc mov cx, word ptr [0x1269089e] */
  CX = (r16((uint32_t)(0x1269089e)));
  /* 126736d3 push ecx */
  push32((uint32_t)(ECX));
  /* 126736d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126736d6 mov dx, word ptr [0x1269089c] */
  DX = (r16((uint32_t)(0x1269089c)));
  /* 126736dd push edx */
  push32((uint32_t)(EDX));
  /* 126736de push 0 */
  push32((uint32_t)(0x0u));
  /* 126736e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126736e2 mov ax, word ptr [0x12690898] */
  AX = (r16((uint32_t)(0x12690898)));
  /* 126736e8 push eax */
  push32((uint32_t)(EAX));
  /* 126736e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126736eb mov cx, word ptr [0x1269089a] */
  CX = (r16((uint32_t)(0x1269089a)));
  /* 126736f2 push ecx */
  push32((uint32_t)(ECX));
  /* 126736f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126736f5 mov dx, word ptr [0x12690896] */
  DX = (r16((uint32_t)(0x12690896)));
  /* 126736fc push edx */
  push32((uint32_t)(EDX));
  /* 126736fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673700 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12673703 push ecx */
  push32((uint32_t)(ECX));
  /* 12673704 push 1 */
  push32((uint32_t)(0x1u));
  /* 12673706 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673708 call 0x126738b0 */
  push32(0x1267370du); f_126738b0();
  /* 1267370d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673710 jmp 0x12673763 */
  goto L_12673763;
L_12673712:;
  /* 12673712 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12673714 mov dx, word ptr [0x126908a2] */
  DX = (r16((uint32_t)(0x126908a2)));
  /* 1267371b push edx */
  push32((uint32_t)(EDX));
  /* 1267371c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267371e mov ax, word ptr [0x126908a0] */
  AX = (r16((uint32_t)(0x126908a0)));
  /* 12673724 push eax */
  push32((uint32_t)(EAX));
  /* 12673725 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12673727 mov cx, word ptr [0x1269089e] */
  CX = (r16((uint32_t)(0x1269089e)));
  /* 1267372e push ecx */
  push32((uint32_t)(ECX));
  /* 1267372f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12673731 mov dx, word ptr [0x1269089c] */
  DX = (r16((uint32_t)(0x1269089c)));
  /* 12673738 push edx */
  push32((uint32_t)(EDX));
  /* 12673739 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267373b mov ax, word ptr [0x1269089a] */
  AX = (r16((uint32_t)(0x1269089a)));
  /* 12673741 push eax */
  push32((uint32_t)(EAX));
  /* 12673742 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673744 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673746 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12673748 mov cx, word ptr [0x12690896] */
  CX = (r16((uint32_t)(0x12690896)));
  /* 1267374f push ecx */
  push32((uint32_t)(ECX));
  /* 12673750 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673753 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12673756 push eax */
  push32((uint32_t)(EAX));
  /* 12673757 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673759 push 0 */
  push32((uint32_t)(0x0u));
  /* 1267375b call 0x126738b0 */
  push32(0x12673760u); f_126738b0();
  /* 12673760 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12673763:;
  /* 12673763 jmp 0x126737ab */
  goto L_126737ab;
L_12673765:;
  /* 12673765 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673767 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673769 push 0 */
  push32((uint32_t)(0x0u));
  /* 1267376b push 2 */
  push32((uint32_t)(0x2u));
  /* 1267376d push 0 */
  push32((uint32_t)(0x0u));
  /* 1267376f push 0 */
  push32((uint32_t)(0x0u));
  /* 12673771 push 1 */
  push32((uint32_t)(0x1u));
  /* 12673773 push 4 */
  push32((uint32_t)(0x4u));
  /* 12673775 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673778 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1267377b push edx */
  push32((uint32_t)(EDX));
  /* 1267377c push 1 */
  push32((uint32_t)(0x1u));
  /* 1267377e push 1 */
  push32((uint32_t)(0x1u));
  /* 12673780 call 0x126738b0 */
  push32(0x12673785u); f_126738b0();
  /* 12673785 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673788 push 0 */
  push32((uint32_t)(0x0u));
  /* 1267378a push 0 */
  push32((uint32_t)(0x0u));
  /* 1267378c push 0 */
  push32((uint32_t)(0x0u));
  /* 1267378e push 2 */
  push32((uint32_t)(0x2u));
  /* 12673790 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673792 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673794 push 5 */
  push32((uint32_t)(0x5u));
  /* 12673796 push 0xa */
  push32((uint32_t)(0xau));
  /* 12673798 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267379b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1267379e push ecx */
  push32((uint32_t)(ECX));
  /* 1267379f push 1 */
  push32((uint32_t)(0x1u));
  /* 126737a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 126737a3 call 0x126738b0 */
  push32(0x126737a8u); f_126738b0();
  /* 126737a8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126737ab:;
  /* 126737ab mov edx, dword ptr [0x1268fe2c] */
  EDX = (r32((uint32_t)(0x1268fe2c)));
  /* 126737b1 cmp edx, dword ptr [0x1268fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1268fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126737b7 jge 0x12673804 */
  if ((C.sf==C.of)) goto L_12673804;
  /* 126737b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126737bc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 126737bf cmp ecx, dword ptr [0x1268fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1268fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126737c5 jl 0x126737d5 */
  if ((C.sf!=C.of)) goto L_126737d5;
  /* 126737c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126737ca mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 126737cd cmp eax, dword ptr [0x1268fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1268fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126737d3 jle 0x126737dc */
  if ((C.zf||C.sf!=C.of)) goto L_126737dc;
L_126737d5:;
  /* 126737d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126737d7 jmp 0x126738a6 */
  goto L_126738a6;
L_126737dc:;
  /* 126737dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126737df mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 126737e2 cmp edx, dword ptr [0x1268fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1268fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126737e8 jle 0x12673802 */
  if ((C.zf||C.sf!=C.of)) goto L_12673802;
  /* 126737ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126737ed mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 126737f0 cmp ecx, dword ptr [0x1268fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1268fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126737f6 jge 0x12673802 */
  if ((C.sf==C.of)) goto L_12673802;
  /* 126737f8 mov eax, 1 */
  EAX = (0x1u);
  /* 126737fd jmp 0x126738a6 */
  goto L_126738a6;
L_12673802:;
  /* 12673802 jmp 0x12673847 */
  goto L_12673847;
L_12673804:;
  /* 12673804 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673807 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1267380a cmp eax, dword ptr [0x1268fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1268fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673810 jl 0x12673820 */
  if ((C.sf!=C.of)) goto L_12673820;
  /* 12673812 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673815 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12673818 cmp edx, dword ptr [0x1268fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1268fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267381e jle 0x12673827 */
  if ((C.zf||C.sf!=C.of)) goto L_12673827;
L_12673820:;
  /* 12673820 mov eax, 1 */
  EAX = (0x1u);
  /* 12673825 jmp 0x126738a6 */
  goto L_126738a6;
L_12673827:;
  /* 12673827 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267382a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1267382d cmp ecx, dword ptr [0x1268fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1268fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673833 jle 0x12673847 */
  if ((C.zf||C.sf!=C.of)) goto L_12673847;
  /* 12673835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673838 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1267383b cmp eax, dword ptr [0x1268fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1268fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673841 jge 0x12673847 */
  if ((C.sf==C.of)) goto L_12673847;
  /* 12673843 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12673845 jmp 0x126738a6 */
  goto L_126738a6;
L_12673847:;
  /* 12673847 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267384a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1267384d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12673850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673853 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12673855 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673857 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267385a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1267385d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12673863 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673865 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1267386b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1267386e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673871 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12673874 cmp edx, dword ptr [0x1268fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1268fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267387a jne 0x12673892 */
  if (!C.zf) goto L_12673892;
  /* 1267387c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267387f cmp eax, dword ptr [0x1268fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1268fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673885 jl 0x1267388e */
  if ((C.sf!=C.of)) goto L_1267388e;
  /* 12673887 mov eax, 1 */
  EAX = (0x1u);
  /* 1267388c jmp 0x126738a6 */
  goto L_126738a6;
L_1267388e:;
  /* 1267388e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12673890 jmp 0x126738a6 */
  goto L_126738a6;
L_12673892:;
  /* 12673892 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12673895 cmp ecx, dword ptr [0x1268fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1268fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267389b jge 0x126738a4 */
  if ((C.sf==C.of)) goto L_126738a4;
  /* 1267389d mov eax, 1 */
  EAX = (0x1u);
  /* 126738a2 jmp 0x126738a6 */
  goto L_126738a6;
L_126738a4:;
  /* 126738a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_126738a6:;
  /* 126738a6 mov esp, ebp */
  ESP = (EBP);
  /* 126738a8 pop ebp */
  EBP = (pop32());
  /* 126738a9 ret  */
  ESPCHK(0x126735b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100138b0 @ 0x126738b0 (504 bytes, 145 insns) */
void f_126738b0(void) {
  FTRACE(0x126738b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126738b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126738b1 mov ebp, esp */
  EBP = (ESP);
  /* 126738b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126738b6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126738ba jne 0x1267398c */
  if (!C.zf) goto L_1267398c;
  /* 126738c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126738c3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 126738c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126738c8 jne 0x126738d9 */
  if (!C.zf) goto L_126738d9;
  /* 126738ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126738cd mov edx, dword ptr [ecx*4 + 0x1268fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1268fe4c)));
  /* 126738d4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 126738d7 jmp 0x126738e6 */
  goto L_126738e6;
L_126738d9:;
  /* 126738d9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126738dc mov ecx, dword ptr [eax*4 + 0x1268fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1268fe80)));
  /* 126738e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_126738e6:;
  /* 126738e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126738e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126738ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 126738ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126738f2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126738f5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126738fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126738fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673900 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12673903 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12673906 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12673909 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1267390d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1267390e mov ecx, 7 */
  ECX = (0x7u);
  /* 12673913 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12673915 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12673918 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267391b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267391e jg 0x12673939 */
  if ((!C.zf&&C.sf==C.of)) goto L_12673939;
  /* 12673920 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12673923 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12673926 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12673929 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1267392c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1267392f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673932 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673934 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12673937 jmp 0x1267394d */
  goto L_1267394d;
L_12673939:;
  /* 12673939 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1267393c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1267393f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12673942 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12673945 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673948 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267394a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1267394d:;
  /* 1267394d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673951 jne 0x1267398a */
  if (!C.zf) goto L_1267398a;
  /* 12673953 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12673956 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12673959 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1267395b jne 0x1267396c */
  if (!C.zf) goto L_1267396c;
  /* 1267395d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12673960 mov eax, dword ptr [edx*4 + 0x1268fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1268fe50)));
  /* 12673967 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1267396a jmp 0x12673979 */
  goto L_12673979;
L_1267396c:;
  /* 1267396c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1267396f mov edx, dword ptr [ecx*4 + 0x1268fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1268fe84)));
  /* 12673976 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12673979:;
  /* 12673979 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1267397c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267397f jle 0x1267398a */
  if ((C.zf||C.sf!=C.of)) goto L_1267398a;
  /* 12673981 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12673984 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12673987 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1267398a:;
  /* 1267398a jmp 0x126739c1 */
  goto L_126739c1;
L_1267398c:;
  /* 1267398c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267398f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12673992 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12673994 jne 0x126739a5 */
  if (!C.zf) goto L_126739a5;
  /* 12673996 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12673999 mov ecx, dword ptr [eax*4 + 0x1268fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1268fe4c)));
  /* 126739a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 126739a3 jmp 0x126739b2 */
  goto L_126739b2;
L_126739a5:;
  /* 126739a5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 126739a8 mov eax, dword ptr [edx*4 + 0x1268fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1268fe80)));
  /* 126739af mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_126739b2:;
  /* 126739b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126739b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 126739b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126739bb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126739be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_126739c1:;
  /* 126739c1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126739c5 jne 0x12673a01 */
  if (!C.zf) goto L_12673a01;
  /* 126739c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126739ca mov dword ptr [0x1268fe2c], eax */
  w32((uint32_t)(0x1268fe2c), (EAX));
  /* 126739cf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 126739d2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126739d5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 126739d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126739da imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126739dd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 126739e0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126739e2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126739e8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 126739eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126739ed mov dword ptr [0x1268fe30], ecx */
  w32((uint32_t)(0x1268fe30), (ECX));
  /* 126739f3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126739f6 mov dword ptr [0x1268fe28], edx */
  w32((uint32_t)(0x1268fe28), (EDX));
  /* 126739fc jmp 0x12673aa4 */
  goto L_12673aa4;
L_12673a01:;
  /* 12673a01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12673a04 mov dword ptr [0x1268fe3c], eax */
  w32((uint32_t)(0x1268fe3c), (EAX));
  /* 12673a09 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12673a0c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12673a0f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12673a12 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673a14 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12673a17 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12673a1a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673a1c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12673a22 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12673a25 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673a27 mov dword ptr [0x1268fe40], ecx */
  w32((uint32_t)(0x1268fe40), (ECX));
  /* 12673a2d mov edx, dword ptr [0x1268fd98] */
  EDX = (r32((uint32_t)(0x1268fd98)));
  /* 12673a33 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12673a39 mov eax, dword ptr [0x1268fe40] */
  EAX = (r32((uint32_t)(0x1268fe40)));
  /* 12673a3e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673a40 mov dword ptr [0x1268fe40], eax */
  w32((uint32_t)(0x1268fe40), (EAX));
  /* 12673a45 cmp dword ptr [0x1268fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1268fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673a4c jge 0x12673a71 */
  if ((C.sf==C.of)) goto L_12673a71;
  /* 12673a4e mov ecx, dword ptr [0x1268fe40] */
  ECX = (r32((uint32_t)(0x1268fe40)));
  /* 12673a54 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673a5a mov dword ptr [0x1268fe40], ecx */
  w32((uint32_t)(0x1268fe40), (ECX));
  /* 12673a60 mov edx, dword ptr [0x1268fe3c] */
  EDX = (r32((uint32_t)(0x1268fe3c)));
  /* 12673a66 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12673a69 mov dword ptr [0x1268fe3c], edx */
  w32((uint32_t)(0x1268fe3c), (EDX));
  /* 12673a6f jmp 0x12673a9b */
  goto L_12673a9b;
L_12673a71:;
  /* 12673a71 cmp dword ptr [0x1268fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1268fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673a7b jl 0x12673a9b */
  if ((C.sf!=C.of)) goto L_12673a9b;
  /* 12673a7d mov eax, dword ptr [0x1268fe40] */
  EAX = (r32((uint32_t)(0x1268fe40)));
  /* 12673a82 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12673a87 mov dword ptr [0x1268fe40], eax */
  w32((uint32_t)(0x1268fe40), (EAX));
  /* 12673a8c mov ecx, dword ptr [0x1268fe3c] */
  ECX = (r32((uint32_t)(0x1268fe3c)));
  /* 12673a92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673a95 mov dword ptr [0x1268fe3c], ecx */
  w32((uint32_t)(0x1268fe3c), (ECX));
L_12673a9b:;
  /* 12673a9b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12673a9e mov dword ptr [0x1268fe38], edx */
  w32((uint32_t)(0x1268fe38), (EDX));
L_12673aa4:;
  /* 12673aa4 mov esp, ebp */
  ESP = (EBP);
  /* 12673aa6 pop ebp */
  EBP = (pop32());
  /* 12673aa7 ret  */
  ESPCHK(0x126738b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ab0 @ 0x12673ab0 (382 bytes, 135 insns) */
void f_12673ab0(void) {
  FTRACE(0x12673ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12673ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12673ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12673ab3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12673ab5 push 0x1268cad8 */
  push32((uint32_t)(0x1268cad8u));
  /* 12673aba push 0x1266d778 */
  push32((uint32_t)(0x1266d778u));
  /* 12673abf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12673ac5 push eax */
  push32((uint32_t)(EAX));
  /* 12673ac6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12673acd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673ad0 push ebx */
  push32((uint32_t)(EBX));
  /* 12673ad1 push esi */
  push32((uint32_t)(ESI));
  /* 12673ad2 push edi */
  push32((uint32_t)(EDI));
  /* 12673ad3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12673ad6 cmp dword ptr [0x12690904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673add jne 0x12673b22 */
  if (!C.zf) goto L_12673b22;
  /* 12673adf push 0 */
  push32((uint32_t)(0x0u));
  /* 12673ae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673ae3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12673ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673ae7 call dword ptr [0x126932a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932a4))), 0x12673aedu);
  /* 12673aed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12673aef je 0x12673afd */
  if (C.zf) goto L_12673afd;
  /* 12673af1 mov dword ptr [0x12690904], 1 */
  w32((uint32_t)(0x12690904), (0x1u));
  /* 12673afb jmp 0x12673b22 */
  goto L_12673b22;
L_12673afd:;
  /* 12673afd push 0 */
  push32((uint32_t)(0x0u));
  /* 12673aff push 0 */
  push32((uint32_t)(0x0u));
  /* 12673b01 push 1 */
  push32((uint32_t)(0x1u));
  /* 12673b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673b05 call dword ptr [0x126932bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932bc))), 0x12673b0bu);
  /* 12673b0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12673b0d je 0x12673b1b */
  if (C.zf) goto L_12673b1b;
  /* 12673b0f mov dword ptr [0x12690904], 2 */
  w32((uint32_t)(0x12690904), (0x2u));
  /* 12673b19 jmp 0x12673b22 */
  goto L_12673b22;
L_12673b1b:;
  /* 12673b1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12673b1d jmp 0x12673c31 */
  goto L_12673c31;
L_12673b22:;
  /* 12673b22 cmp dword ptr [0x12690904], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12690904))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673b29 jne 0x12673b46 */
  if (!C.zf) goto L_12673b46;
  /* 12673b2b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12673b2e push eax */
  push32((uint32_t)(EAX));
  /* 12673b2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12673b32 push ecx */
  push32((uint32_t)(ECX));
  /* 12673b33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12673b36 push edx */
  push32((uint32_t)(EDX));
  /* 12673b37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673b3a push eax */
  push32((uint32_t)(EAX));
  /* 12673b3b call dword ptr [0x126932a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932a4))), 0x12673b41u);
  /* 12673b41 jmp 0x12673c31 */
  goto L_12673c31;
L_12673b46:;
  /* 12673b46 cmp dword ptr [0x12690904], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12690904))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673b4d jne 0x12673c2f */
  if (!C.zf) goto L_12673c2f;
  /* 12673b53 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673b57 jne 0x12673b62 */
  if (!C.zf) goto L_12673b62;
  /* 12673b59 mov ecx, dword ptr [0x126907b8] */
  ECX = (r32((uint32_t)(0x126907b8)));
  /* 12673b5f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12673b62:;
  /* 12673b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673b66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12673b69 push edx */
  push32((uint32_t)(EDX));
  /* 12673b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673b6d push eax */
  push32((uint32_t)(EAX));
  /* 12673b6e call dword ptr [0x126932bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932bc))), 0x12673b74u);
  /* 12673b74 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12673b77 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673b7b jne 0x12673b84 */
  if (!C.zf) goto L_12673b84;
  /* 12673b7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12673b7f jmp 0x12673c31 */
  goto L_12673c31;
L_12673b84:;
  /* 12673b84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12673b8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12673b8e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673b91 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12673b93 call 0x12667810 */
  push32(0x12673b98u); f_12667810();
  /* 12673b98 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12673b9b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12673b9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12673ba1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12673ba4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12673bab jmp 0x12673bc4 */
  goto L_12673bc4;
  /* 12673bad mov eax, 1 */
  EAX = (0x1u);
  /* 12673bb2 ret  */
  ESPCHK(0x12673ab0u, _esp0);
  ESP += 4; return;
  /* 12673bb3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12673bb6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12673bbd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12673bc4:;
  /* 12673bc4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673bc8 jne 0x12673bce */
  if (!C.zf) goto L_12673bce;
  /* 12673bca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12673bcc jmp 0x12673c31 */
  goto L_12673c31;
L_12673bce:;
  /* 12673bce mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12673bd1 push edx */
  push32((uint32_t)(EDX));
  /* 12673bd2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12673bd5 push eax */
  push32((uint32_t)(EAX));
  /* 12673bd6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12673bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 12673bda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673bdd push edx */
  push32((uint32_t)(EDX));
  /* 12673bde call dword ptr [0x126932bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932bc))), 0x12673be4u);
  /* 12673be4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12673be6 jne 0x12673bec */
  if (!C.zf) goto L_12673bec;
  /* 12673be8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12673bea jmp 0x12673c31 */
  goto L_12673c31;
L_12673bec:;
  /* 12673bec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673bf0 jne 0x12673c0d */
  if (!C.zf) goto L_12673c0d;
  /* 12673bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673bf6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12673bf8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12673bfb push eax */
  push32((uint32_t)(EAX));
  /* 12673bfc push 1 */
  push32((uint32_t)(0x1u));
  /* 12673bfe mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12673c01 push ecx */
  push32((uint32_t)(ECX));
  /* 12673c02 call dword ptr [0x126932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932ec))), 0x12673c08u);
  /* 12673c08 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12673c0b jmp 0x12673c2a */
  goto L_12673c2a;
L_12673c0d:;
  /* 12673c0d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12673c10 push edx */
  push32((uint32_t)(EDX));
  /* 12673c11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12673c14 push eax */
  push32((uint32_t)(EAX));
  /* 12673c15 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12673c17 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12673c1a push ecx */
  push32((uint32_t)(ECX));
  /* 12673c1b push 1 */
  push32((uint32_t)(0x1u));
  /* 12673c1d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12673c20 push edx */
  push32((uint32_t)(EDX));
  /* 12673c21 call dword ptr [0x126932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932ec))), 0x12673c27u);
  /* 12673c27 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12673c2a:;
  /* 12673c2a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12673c2d jmp 0x12673c31 */
  goto L_12673c31;
L_12673c2f:;
  /* 12673c2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12673c31:;
  /* 12673c31 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12673c34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12673c37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12673c3e pop edi */
  EDI = (pop32());
  /* 12673c3f pop esi */
  ESI = (pop32());
  /* 12673c40 pop ebx */
  EBX = (pop32());
  /* 12673c41 mov esp, ebp */
  ESP = (EBP);
  /* 12673c43 pop ebp */
  EBP = (pop32());
  /* 12673c44 ret  */
  ESPCHK(0x12673ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c50 @ 0x12673c50 (398 bytes, 140 insns) */
void f_12673c50(void) {
  FTRACE(0x12673c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12673c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12673c51 mov ebp, esp */
  EBP = (ESP);
  /* 12673c53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12673c55 push 0x1268cae8 */
  push32((uint32_t)(0x1268cae8u));
  /* 12673c5a push 0x1266d778 */
  push32((uint32_t)(0x1266d778u));
  /* 12673c5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12673c65 push eax */
  push32((uint32_t)(EAX));
  /* 12673c66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12673c6d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673c70 push ebx */
  push32((uint32_t)(EBX));
  /* 12673c71 push esi */
  push32((uint32_t)(ESI));
  /* 12673c72 push edi */
  push32((uint32_t)(EDI));
  /* 12673c73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12673c76 cmp dword ptr [0x12690908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673c7d jne 0x12673cc2 */
  if (!C.zf) goto L_12673cc2;
  /* 12673c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12673c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673c83 push 1 */
  push32((uint32_t)(0x1u));
  /* 12673c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673c87 call dword ptr [0x126932a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932a4))), 0x12673c8du);
  /* 12673c8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12673c8f je 0x12673c9d */
  if (C.zf) goto L_12673c9d;
  /* 12673c91 mov dword ptr [0x12690908], 1 */
  w32((uint32_t)(0x12690908), (0x1u));
  /* 12673c9b jmp 0x12673cc2 */
  goto L_12673cc2;
L_12673c9d:;
  /* 12673c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12673c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12673ca1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12673ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673ca5 call dword ptr [0x126932bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932bc))), 0x12673cabu);
  /* 12673cab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12673cad je 0x12673cbb */
  if (C.zf) goto L_12673cbb;
  /* 12673caf mov dword ptr [0x12690908], 2 */
  w32((uint32_t)(0x12690908), (0x2u));
  /* 12673cb9 jmp 0x12673cc2 */
  goto L_12673cc2;
L_12673cbb:;
  /* 12673cbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12673cbd jmp 0x12673de1 */
  goto L_12673de1;
L_12673cc2:;
  /* 12673cc2 cmp dword ptr [0x12690908], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12690908))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673cc9 jne 0x12673ce6 */
  if (!C.zf) goto L_12673ce6;
  /* 12673ccb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12673cce push eax */
  push32((uint32_t)(EAX));
  /* 12673ccf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12673cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 12673cd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12673cd6 push edx */
  push32((uint32_t)(EDX));
  /* 12673cd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673cda push eax */
  push32((uint32_t)(EAX));
  /* 12673cdb call dword ptr [0x126932bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932bc))), 0x12673ce1u);
  /* 12673ce1 jmp 0x12673de1 */
  goto L_12673de1;
L_12673ce6:;
  /* 12673ce6 cmp dword ptr [0x12690908], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12690908))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673ced jne 0x12673ddf */
  if (!C.zf) goto L_12673ddf;
  /* 12673cf3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673cf7 jne 0x12673d02 */
  if (!C.zf) goto L_12673d02;
  /* 12673cf9 mov ecx, dword ptr [0x126907b8] */
  ECX = (r32((uint32_t)(0x126907b8)));
  /* 12673cff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12673d02:;
  /* 12673d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673d06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12673d09 push edx */
  push32((uint32_t)(EDX));
  /* 12673d0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673d0d push eax */
  push32((uint32_t)(EAX));
  /* 12673d0e call dword ptr [0x126932a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932a4))), 0x12673d14u);
  /* 12673d14 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12673d17 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673d1b jne 0x12673d24 */
  if (!C.zf) goto L_12673d24;
  /* 12673d1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12673d1f jmp 0x12673de1 */
  goto L_12673de1;
L_12673d24:;
  /* 12673d24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12673d2b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12673d2e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12673d30 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673d33 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12673d35 call 0x12667810 */
  push32(0x12673d3au); f_12667810();
  /* 12673d3a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12673d3d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12673d40 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12673d43 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12673d46 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12673d4d jmp 0x12673d66 */
  goto L_12673d66;
  /* 12673d4f mov eax, 1 */
  EAX = (0x1u);
  /* 12673d54 ret  */
  ESPCHK(0x12673c50u, _esp0);
  ESP += 4; return;
  /* 12673d55 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12673d58 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12673d5f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12673d66:;
  /* 12673d66 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673d6a jne 0x12673d70 */
  if (!C.zf) goto L_12673d70;
  /* 12673d6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12673d6e jmp 0x12673de1 */
  goto L_12673de1;
L_12673d70:;
  /* 12673d70 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12673d73 push edx */
  push32((uint32_t)(EDX));
  /* 12673d74 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12673d77 push eax */
  push32((uint32_t)(EAX));
  /* 12673d78 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12673d7b push ecx */
  push32((uint32_t)(ECX));
  /* 12673d7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673d7f push edx */
  push32((uint32_t)(EDX));
  /* 12673d80 call dword ptr [0x126932a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932a4))), 0x12673d86u);
  /* 12673d86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12673d88 jne 0x12673d8e */
  if (!C.zf) goto L_12673d8e;
  /* 12673d8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12673d8c jmp 0x12673de1 */
  goto L_12673de1;
L_12673d8e:;
  /* 12673d8e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673d92 jne 0x12673db6 */
  if (!C.zf) goto L_12673db6;
  /* 12673d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12673d9c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12673d9e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12673da1 push eax */
  push32((uint32_t)(EAX));
  /* 12673da2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12673da7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12673daa push ecx */
  push32((uint32_t)(ECX));
  /* 12673dab call dword ptr [0x1269339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269339c))), 0x12673db1u);
  /* 12673db1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12673db4 jmp 0x12673dda */
  goto L_12673dda;
L_12673db6:;
  /* 12673db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673db8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12673dba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12673dbd push edx */
  push32((uint32_t)(EDX));
  /* 12673dbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12673dc1 push eax */
  push32((uint32_t)(EAX));
  /* 12673dc2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12673dc4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12673dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12673dc8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12673dcd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12673dd0 push edx */
  push32((uint32_t)(EDX));
  /* 12673dd1 call dword ptr [0x1269339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269339c))), 0x12673dd7u);
  /* 12673dd7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12673dda:;
  /* 12673dda mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12673ddd jmp 0x12673de1 */
  goto L_12673de1;
L_12673ddf:;
  /* 12673ddf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12673de1:;
  /* 12673de1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12673de4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12673de7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12673dee pop edi */
  EDI = (pop32());
  /* 12673def pop esi */
  ESI = (pop32());
  /* 12673df0 pop ebx */
  EBX = (pop32());
  /* 12673df1 mov esp, ebp */
  ESP = (EBP);
  /* 12673df3 pop ebp */
  EBP = (pop32());
  /* 12673df4 ret  */
  ESPCHK(0x12673c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e00 @ 0x12673e00 (11 bytes, 6 insns) */
void f_12673e00(void) {
  FTRACE(0x12673e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12673e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12673e01 mov ebp, esp */
  EBP = (ESP);
  /* 12673e03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673e06 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673e09 pop ebp */
  EBP = (pop32());
  /* 12673e0a ret  */
  ESPCHK(0x12673e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e10 @ 0x12673e10 (147 bytes, 43 insns) */
void f_12673e10(void) {
  FTRACE(0x12673e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12673e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12673e11 mov ebp, esp */
  EBP = (ESP);
  /* 12673e13 push ecx */
  push32((uint32_t)(ECX));
  /* 12673e14 cmp dword ptr [0x126907a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126907a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673e1b jne 0x12673e37 */
  if (!C.zf) goto L_12673e37;
  /* 12673e1d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673e21 jl 0x12673e32 */
  if ((C.sf!=C.of)) goto L_12673e32;
  /* 12673e23 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673e27 jg 0x12673e32 */
  if ((!C.zf&&C.sf==C.of)) goto L_12673e32;
  /* 12673e29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673e2c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673e2f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12673e32:;
  /* 12673e32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673e35 jmp 0x12673e9f */
  goto L_12673e9f;
L_12673e37:;
  /* 12673e37 push 0x12690934 */
  push32((uint32_t)(0x12690934u));
  /* 12673e3c call dword ptr [0x12693344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693344))), 0x12673e42u);
  /* 12673e42 cmp dword ptr [0x12690924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673e49 je 0x12673e69 */
  if (C.zf) goto L_12673e69;
  /* 12673e4b push 0x12690934 */
  push32((uint32_t)(0x12690934u));
  /* 12673e50 call dword ptr [0x12693334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693334))), 0x12673e56u);
  /* 12673e56 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12673e58 call 0x12668070 */
  push32(0x12673e5du); f_12668070();
  /* 12673e5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673e60 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12673e67 jmp 0x12673e70 */
  goto L_12673e70;
L_12673e69:;
  /* 12673e69 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12673e70:;
  /* 12673e70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12673e74 call 0x12673eb0 */
  push32(0x12673e79u); f_12673eb0();
  /* 12673e79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673e7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12673e7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673e83 je 0x12673e91 */
  if (C.zf) goto L_12673e91;
  /* 12673e85 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12673e87 call 0x12668110 */
  push32(0x12673e8cu); f_12668110();
  /* 12673e8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673e8f jmp 0x12673e9c */
  goto L_12673e9c;
L_12673e91:;
  /* 12673e91 push 0x12690934 */
  push32((uint32_t)(0x12690934u));
  /* 12673e96 call dword ptr [0x12693334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693334))), 0x12673e9cu);
L_12673e9c:;
  /* 12673e9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12673e9f:;
  /* 12673e9f mov esp, ebp */
  ESP = (EBP);
  /* 12673ea1 pop ebp */
  EBP = (pop32());
  /* 12673ea2 ret  */
  ESPCHK(0x12673e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013eb0 @ 0x12673eb0 (299 bytes, 91 insns) */
void f_12673eb0(void) {
  FTRACE(0x12673eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12673eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12673eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12673eb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12673eb6 cmp dword ptr [0x126907a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126907a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673ebd jne 0x12673edc */
  if (!C.zf) goto L_12673edc;
  /* 12673ebf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673ec3 jl 0x12673ed4 */
  if ((C.sf!=C.of)) goto L_12673ed4;
  /* 12673ec5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673ec9 jg 0x12673ed4 */
  if ((!C.zf&&C.sf==C.of)) goto L_12673ed4;
  /* 12673ecb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673ece add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12673ed1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12673ed4:;
  /* 12673ed4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673ed7 jmp 0x12673fd7 */
  goto L_12673fd7;
L_12673edc:;
  /* 12673edc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673ee3 jge 0x12673f23 */
  if ((C.sf==C.of)) goto L_12673f23;
  /* 12673ee5 cmp dword ptr [0x1268eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1268eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673eec jle 0x12673f01 */
  if ((C.zf||C.sf!=C.of)) goto L_12673f01;
  /* 12673eee push 1 */
  push32((uint32_t)(0x1u));
  /* 12673ef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 12673ef4 call 0x1266a680 */
  push32(0x12673ef9u); f_1266a680();
  /* 12673ef9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673efc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12673eff jmp 0x12673f15 */
  goto L_12673f15;
L_12673f01:;
  /* 12673f01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673f04 mov eax, dword ptr [0x1268ec98] */
  EAX = (r32((uint32_t)(0x1268ec98)));
  /* 12673f09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12673f0b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12673f0f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12673f12 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12673f15:;
  /* 12673f15 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673f19 jne 0x12673f23 */
  if (!C.zf) goto L_12673f23;
  /* 12673f1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673f1e jmp 0x12673fd7 */
  goto L_12673fd7;
L_12673f23:;
  /* 12673f23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673f26 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12673f29 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12673f2f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12673f35 mov eax, dword ptr [0x1268ec98] */
  EAX = (r32((uint32_t)(0x1268ec98)));
  /* 12673f3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12673f3c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12673f40 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12673f46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12673f48 je 0x12673f6c */
  if (C.zf) goto L_12673f6c;
  /* 12673f4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673f4d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12673f50 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12673f56 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12673f59 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12673f5c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12673f5f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12673f63 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12673f6a jmp 0x12673f7d */
  goto L_12673f7d;
L_12673f6c:;
  /* 12673f6c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12673f6f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12673f72 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12673f76 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12673f7d:;
  /* 12673f7d push 1 */
  push32((uint32_t)(0x1u));
  /* 12673f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12673f81 push 3 */
  push32((uint32_t)(0x3u));
  /* 12673f83 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12673f86 push edx */
  push32((uint32_t)(EDX));
  /* 12673f87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12673f8a push eax */
  push32((uint32_t)(EAX));
  /* 12673f8b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12673f8e push ecx */
  push32((uint32_t)(ECX));
  /* 12673f8f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12673f94 mov edx, dword ptr [0x126907a8] */
  EDX = (r32((uint32_t)(0x126907a8)));
  /* 12673f9a push edx */
  push32((uint32_t)(EDX));
  /* 12673f9b call 0x1266ca60 */
  push32(0x12673fa0u); f_1266ca60();
  /* 12673fa0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12673fa3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12673fa6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673faa jne 0x12673fb1 */
  if (!C.zf) goto L_12673fb1;
  /* 12673fac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12673faf jmp 0x12673fd7 */
  goto L_12673fd7;
L_12673fb1:;
  /* 12673fb1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12673fb5 jne 0x12673fc1 */
  if (!C.zf) goto L_12673fc1;
  /* 12673fb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673fba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12673fbf jmp 0x12673fd7 */
  goto L_12673fd7;
L_12673fc1:;
  /* 12673fc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12673fc4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12673fc9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12673fcc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12673fd2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12673fd5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12673fd7:;
  /* 12673fd7 mov esp, ebp */
  ESP = (EBP);
  /* 12673fd9 pop ebp */
  EBP = (pop32());
  /* 12673fda ret  */
  ESPCHK(0x12673eb0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12673fe0 (52 bytes, 19 insns) */
void f_12673fe0(void) {
  FTRACE(0x12673fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12673fe0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12673fe4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12673fe8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12673fea mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12673fee jne 0x12673ff9 */
  if (!C.zf) goto L_12673ff9;
  /* 12673ff0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12673ff4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12673ff6 ret 0x10 */
  ESPCHK(0x12673fe0u, _esp0);
  ESP += 20; return;
L_12673ff9:;
  /* 12673ff9 push ebx */
  push32((uint32_t)(EBX));
  /* 12673ffa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12673ffc mov ebx, eax */
  EBX = (EAX);
  /* 12673ffe mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12674002 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12674006 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674008 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1267400c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1267400e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674010 pop ebx */
  EBX = (pop32());
  /* 12674011 ret 0x10 */
  ESPCHK(0x12673fe0u, _esp0);
  ESP += 20; return;
}

/* FUN_10014020 @ 0x12674020 (46 bytes, 18 insns) */
void f_12674020(void) {
  FTRACE(0x12674020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12674020 push ebp */
  push32((uint32_t)(EBP));
  /* 12674021 mov ebp, esp */
  EBP = (ESP);
  /* 12674023 push ecx */
  push32((uint32_t)(ECX));
  /* 12674024 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12674026 call 0x12668070 */
  push32(0x1267402bu); f_12668070();
  /* 1267402b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267402e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12674031 push eax */
  push32((uint32_t)(EAX));
  /* 12674032 call 0x12674050 */
  push32(0x12674037u); f_12674050();
  /* 12674037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267403a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1267403d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1267403f call 0x12668110 */
  push32(0x12674044u); f_12668110();
  /* 12674044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674047 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267404a mov esp, ebp */
  ESP = (EBP);
  /* 1267404c pop ebp */
  EBP = (pop32());
  /* 1267404d ret  */
  ESPCHK(0x12674020u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12674050 (198 bytes, 69 insns) */
void f_12674050(void) {
  FTRACE(0x12674050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12674050 push ebp */
  push32((uint32_t)(EBP));
  /* 12674051 mov ebp, esp */
  EBP = (ESP);
  /* 12674053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12674056 mov eax, dword ptr [0x126905c4] */
  EAX = (r32((uint32_t)(0x126905c4)));
  /* 1267405b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1267405e cmp dword ptr [0x126920c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126920c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674065 jne 0x1267406e */
  if (!C.zf) goto L_1267406e;
  /* 12674067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12674069 jmp 0x12674112 */
  goto L_12674112;
L_1267406e:;
  /* 1267406e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674072 jne 0x12674096 */
  if (!C.zf) goto L_12674096;
  /* 12674074 cmp dword ptr [0x126905cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126905cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267407b je 0x12674096 */
  if (C.zf) goto L_12674096;
  /* 1267407d call 0x12674170 */
  push32(0x12674082u); f_12674170();
  /* 12674082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12674084 je 0x1267408d */
  if (C.zf) goto L_1267408d;
  /* 12674086 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12674088 jmp 0x12674112 */
  goto L_12674112;
L_1267408d:;
  /* 1267408d mov ecx, dword ptr [0x126905c4] */
  ECX = (r32((uint32_t)(0x126905c4)));
  /* 12674093 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12674096:;
  /* 12674096 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267409a je 0x12674110 */
  if (C.zf) goto L_12674110;
  /* 1267409c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126740a0 je 0x12674110 */
  if (C.zf) goto L_12674110;
  /* 126740a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126740a5 push edx */
  push32((uint32_t)(EDX));
  /* 126740a6 call 0x126674a0 */
  push32(0x126740abu); f_126674a0();
  /* 126740ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126740ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_126740b1:;
  /* 126740b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126740b4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126740b7 je 0x12674110 */
  if (C.zf) goto L_12674110;
  /* 126740b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126740bc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126740be push edx */
  push32((uint32_t)(EDX));
  /* 126740bf call 0x126674a0 */
  push32(0x126740c4u); f_126674a0();
  /* 126740c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126740c7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126740ca jbe 0x12674105 */
  if ((C.cf||C.zf)) goto L_12674105;
  /* 126740cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126740cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126740d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126740d4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 126740d8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126740db jne 0x12674105 */
  if (!C.zf) goto L_12674105;
  /* 126740dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126740e0 push ecx */
  push32((uint32_t)(ECX));
  /* 126740e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126740e4 push edx */
  push32((uint32_t)(EDX));
  /* 126740e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126740e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126740ea push ecx */
  push32((uint32_t)(ECX));
  /* 126740eb call 0x12674120 */
  push32(0x126740f0u); f_12674120();
  /* 126740f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126740f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126740f5 jne 0x12674105 */
  if (!C.zf) goto L_12674105;
  /* 126740f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126740fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126740fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126740ff lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12674103 jmp 0x12674112 */
  goto L_12674112;
L_12674105:;
  /* 12674105 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12674108 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267410b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1267410e jmp 0x126740b1 */
  goto L_126740b1;
L_12674110:;
  /* 12674110 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12674112:;
  /* 12674112 mov esp, ebp */
  ESP = (EBP);
  /* 12674114 pop ebp */
  EBP = (pop32());
  /* 12674115 ret  */
  ESPCHK(0x12674050u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12674120 (79 bytes, 32 insns) */
void f_12674120(void) {
  FTRACE(0x12674120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12674120 push ebp */
  push32((uint32_t)(EBP));
  /* 12674121 mov ebp, esp */
  EBP = (ESP);
  /* 12674123 push ecx */
  push32((uint32_t)(ECX));
  /* 12674124 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674128 jne 0x1267412e */
  if (!C.zf) goto L_1267412e;
  /* 1267412a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267412c jmp 0x1267416b */
  goto L_1267416b;
L_1267412e:;
  /* 1267412e mov eax, dword ptr [0x12691c84] */
  EAX = (r32((uint32_t)(0x12691c84)));
  /* 12674133 push eax */
  push32((uint32_t)(EAX));
  /* 12674134 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12674137 push ecx */
  push32((uint32_t)(ECX));
  /* 12674138 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1267413b push edx */
  push32((uint32_t)(EDX));
  /* 1267413c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267413f push eax */
  push32((uint32_t)(EAX));
  /* 12674140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12674143 push ecx */
  push32((uint32_t)(ECX));
  /* 12674144 push 1 */
  push32((uint32_t)(0x1u));
  /* 12674146 mov edx, dword ptr [0x12691f24] */
  EDX = (r32((uint32_t)(0x12691f24)));
  /* 1267414c push edx */
  push32((uint32_t)(EDX));
  /* 1267414d call 0x12674220 */
  push32(0x12674152u); f_12674220();
  /* 12674152 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674155 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12674158 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267415c jne 0x12674165 */
  if (!C.zf) goto L_12674165;
  /* 1267415e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12674163 jmp 0x1267416b */
  goto L_1267416b;
L_12674165:;
  /* 12674165 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12674168 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1267416b:;
  /* 1267416b mov esp, ebp */
  ESP = (EBP);
  /* 1267416d pop ebp */
  EBP = (pop32());
  /* 1267416e ret  */
  ESPCHK(0x12674120u, _esp0);
  ESP += 4; return;
}

/* FUN_10014170 @ 0x12674170 (174 bytes, 66 insns) */
void f_12674170(void) {
  FTRACE(0x12674170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12674170 push ebp */
  push32((uint32_t)(EBP));
  /* 12674171 mov ebp, esp */
  EBP = (ESP);
  /* 12674173 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12674176 mov eax, dword ptr [0x126905cc] */
  EAX = (r32((uint32_t)(0x126905cc)));
  /* 1267417b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1267417e:;
  /* 1267417e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12674181 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674184 je 0x12674218 */
  if (C.zf) goto L_12674218;
  /* 1267418a push 0 */
  push32((uint32_t)(0x0u));
  /* 1267418c push 0 */
  push32((uint32_t)(0x0u));
  /* 1267418e push 0 */
  push32((uint32_t)(0x0u));
  /* 12674190 push 0 */
  push32((uint32_t)(0x0u));
  /* 12674192 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12674194 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12674197 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12674199 push eax */
  push32((uint32_t)(EAX));
  /* 1267419a push 0 */
  push32((uint32_t)(0x0u));
  /* 1267419c push 1 */
  push32((uint32_t)(0x1u));
  /* 1267419e call dword ptr [0x1269339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269339c))), 0x126741a4u);
  /* 126741a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126741a7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126741ab jne 0x126741b2 */
  if (!C.zf) goto L_126741b2;
  /* 126741ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126741b0 jmp 0x1267421a */
  goto L_1267421a;
L_126741b2:;
  /* 126741b2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 126741b4 push 0x1268caf4 */
  push32((uint32_t)(0x1268caf4u));
  /* 126741b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 126741bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126741be push ecx */
  push32((uint32_t)(ECX));
  /* 126741bf call 0x12664670 */
  push32(0x126741c4u); f_12664670();
  /* 126741c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126741c7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126741ca cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126741ce jne 0x126741d5 */
  if (!C.zf) goto L_126741d5;
  /* 126741d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126741d3 jmp 0x1267421a */
  goto L_1267421a;
L_126741d5:;
  /* 126741d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 126741d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 126741d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126741dc push edx */
  push32((uint32_t)(EDX));
  /* 126741dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126741e0 push eax */
  push32((uint32_t)(EAX));
  /* 126741e1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 126741e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126741e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126741e8 push edx */
  push32((uint32_t)(EDX));
  /* 126741e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 126741eb push 1 */
  push32((uint32_t)(0x1u));
  /* 126741ed call dword ptr [0x1269339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269339c))), 0x126741f3u);
  /* 126741f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126741f5 jne 0x126741fc */
  if (!C.zf) goto L_126741fc;
  /* 126741f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126741fa jmp 0x1267421a */
  goto L_1267421a;
L_126741fc:;
  /* 126741fc push 0 */
  push32((uint32_t)(0x0u));
  /* 126741fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12674201 push eax */
  push32((uint32_t)(EAX));
  /* 12674202 call 0x12674670 */
  push32(0x12674207u); f_12674670();
  /* 12674207 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267420a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267420d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674210 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12674213 jmp 0x1267417e */
  goto L_1267417e;
L_12674218:;
  /* 12674218 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1267421a:;
  /* 1267421a mov esp, ebp */
  ESP = (EBP);
  /* 1267421c pop ebp */
  EBP = (pop32());
  /* 1267421d ret  */
  ESPCHK(0x12674170u, _esp0);
  ESP += 4; return;
}

/* FUN_10014220 @ 0x12674220 (970 bytes, 340 insns) */
void f_12674220(void) {
  FTRACE(0x12674220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12674220 push ebp */
  push32((uint32_t)(EBP));
  /* 12674221 mov ebp, esp */
  EBP = (ESP);
  /* 12674223 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12674225 push 0x1268cb48 */
  push32((uint32_t)(0x1268cb48u));
  /* 1267422a push 0x1266d778 */
  push32((uint32_t)(0x1266d778u));
  /* 1267422f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12674235 push eax */
  push32((uint32_t)(EAX));
  /* 12674236 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1267423d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674240 push ebx */
  push32((uint32_t)(EBX));
  /* 12674241 push esi */
  push32((uint32_t)(ESI));
  /* 12674242 push edi */
  push32((uint32_t)(EDI));
  /* 12674243 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12674246 cmp dword ptr [0x1269090c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1269090c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267424d jne 0x126742a6 */
  if (!C.zf) goto L_126742a6;
  /* 1267424f push 1 */
  push32((uint32_t)(0x1u));
  /* 12674251 push 0x1268c1a0 */
  push32((uint32_t)(0x1268c1a0u));
  /* 12674256 push 1 */
  push32((uint32_t)(0x1u));
  /* 12674258 push 0x1268c1a0 */
  push32((uint32_t)(0x1268c1a0u));
  /* 1267425d push 0 */
  push32((uint32_t)(0x0u));
  /* 1267425f push 0 */
  push32((uint32_t)(0x0u));
  /* 12674261 call dword ptr [0x126932a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932a0))), 0x12674267u);
  /* 12674267 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12674269 je 0x12674277 */
  if (C.zf) goto L_12674277;
  /* 1267426b mov dword ptr [0x1269090c], 1 */
  w32((uint32_t)(0x1269090c), (0x1u));
  /* 12674275 jmp 0x126742a6 */
  goto L_126742a6;
L_12674277:;
  /* 12674277 push 1 */
  push32((uint32_t)(0x1u));
  /* 12674279 push 0x1268c19c */
  push32((uint32_t)(0x1268c19cu));
  /* 1267427e push 1 */
  push32((uint32_t)(0x1u));
  /* 12674280 push 0x1268c19c */
  push32((uint32_t)(0x1268c19cu));
  /* 12674285 push 0 */
  push32((uint32_t)(0x0u));
  /* 12674287 push 0 */
  push32((uint32_t)(0x0u));
  /* 12674289 call dword ptr [0x126932ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932ac))), 0x1267428fu);
  /* 1267428f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12674291 je 0x1267429f */
  if (C.zf) goto L_1267429f;
  /* 12674293 mov dword ptr [0x1269090c], 2 */
  w32((uint32_t)(0x1269090c), (0x2u));
  /* 1267429d jmp 0x126742a6 */
  goto L_126742a6;
L_1267429f:;
  /* 1267429f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126742a1 jmp 0x12674604 */
  goto L_12674604;
L_126742a6:;
  /* 126742a6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126742aa jle 0x126742bf */
  if ((C.zf||C.sf!=C.of)) goto L_126742bf;
  /* 126742ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126742af push eax */
  push32((uint32_t)(EAX));
  /* 126742b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126742b3 push ecx */
  push32((uint32_t)(ECX));
  /* 126742b4 call 0x12674620 */
  push32(0x126742b9u); f_12674620();
  /* 126742b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126742bc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_126742bf:;
  /* 126742bf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126742c3 jle 0x126742d8 */
  if ((C.zf||C.sf!=C.of)) goto L_126742d8;
  /* 126742c5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 126742c8 push edx */
  push32((uint32_t)(EDX));
  /* 126742c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 126742cc push eax */
  push32((uint32_t)(EAX));
  /* 126742cd call 0x12674620 */
  push32(0x126742d2u); f_12674620();
  /* 126742d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126742d5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_126742d8:;
  /* 126742d8 cmp dword ptr [0x1269090c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1269090c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126742df jne 0x12674304 */
  if (!C.zf) goto L_12674304;
  /* 126742e1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 126742e4 push ecx */
  push32((uint32_t)(ECX));
  /* 126742e5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 126742e8 push edx */
  push32((uint32_t)(EDX));
  /* 126742e9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126742ec push eax */
  push32((uint32_t)(EAX));
  /* 126742ed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126742f0 push ecx */
  push32((uint32_t)(ECX));
  /* 126742f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126742f4 push edx */
  push32((uint32_t)(EDX));
  /* 126742f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126742f8 push eax */
  push32((uint32_t)(EAX));
  /* 126742f9 call dword ptr [0x126932ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932ac))), 0x126742ffu);
  /* 126742ff jmp 0x12674604 */
  goto L_12674604;
L_12674304:;
  /* 12674304 cmp dword ptr [0x1269090c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1269090c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267430b jne 0x12674602 */
  if (!C.zf) goto L_12674602;
  /* 12674311 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674315 jne 0x12674320 */
  if (!C.zf) goto L_12674320;
  /* 12674317 mov ecx, dword ptr [0x126907b8] */
  ECX = (r32((uint32_t)(0x126907b8)));
  /* 1267431d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12674320:;
  /* 12674320 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674324 je 0x12674330 */
  if (C.zf) goto L_12674330;
  /* 12674326 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267432a jne 0x126744ac */
  if (!C.zf) goto L_126744ac;
L_12674330:;
  /* 12674330 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12674333 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674336 jne 0x12674342 */
  if (!C.zf) goto L_12674342;
  /* 12674338 mov eax, 2 */
  EAX = (0x2u);
  /* 1267433d jmp 0x12674604 */
  goto L_12674604;
L_12674342:;
  /* 12674342 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674346 jle 0x12674352 */
  if ((C.zf||C.sf!=C.of)) goto L_12674352;
  /* 12674348 mov eax, 1 */
  EAX = (0x1u);
  /* 1267434d jmp 0x12674604 */
  goto L_12674604;
L_12674352:;
  /* 12674352 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674356 jle 0x12674362 */
  if ((C.zf||C.sf!=C.of)) goto L_12674362;
  /* 12674358 mov eax, 3 */
  EAX = (0x3u);
  /* 1267435d jmp 0x12674604 */
  goto L_12674604;
L_12674362:;
  /* 12674362 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12674365 push eax */
  push32((uint32_t)(EAX));
  /* 12674366 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12674369 push ecx */
  push32((uint32_t)(ECX));
  /* 1267436a call dword ptr [0x126932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932f8))), 0x12674370u);
  /* 12674370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12674372 jne 0x1267437b */
  if (!C.zf) goto L_1267437b;
  /* 12674374 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12674376 jmp 0x12674604 */
  goto L_12674604;
L_1267437b:;
  /* 1267437b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267437f jne 0x12674387 */
  if (!C.zf) goto L_12674387;
  /* 12674381 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674385 je 0x126743b4 */
  if (C.zf) goto L_126743b4;
L_12674387:;
  /* 12674387 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267438b jne 0x12674393 */
  if (!C.zf) goto L_12674393;
  /* 1267438d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674391 je 0x126743b4 */
  if (C.zf) goto L_126743b4;
L_12674393:;
  /* 12674393 push 0x1268cb08 */
  push32((uint32_t)(0x1268cb08u));
  /* 12674398 push 0 */
  push32((uint32_t)(0x0u));
  /* 1267439a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1267439f push 0x1268cb00 */
  push32((uint32_t)(0x1268cb00u));
  /* 126743a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 126743a6 call 0x12663730 */
  push32(0x126743abu); f_12663730();
  /* 126743ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126743ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126743b1 jne 0x126743b4 */
  if (!C.zf) goto L_126743b4;
  /* 126743b3 int3  */
  x86_unimpl("int3 @ 0x126743b3");
L_126743b4:;
  /* 126743b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126743b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126743b8 jne 0x1267437b */
  if (!C.zf) goto L_1267437b;
  /* 126743ba cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126743be jle 0x12674433 */
  if ((C.zf||C.sf!=C.of)) goto L_12674433;
  /* 126743c0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126743c4 jae 0x126743d0 */
  if (!C.cf) goto L_126743d0;
  /* 126743c6 mov eax, 3 */
  EAX = (0x3u);
  /* 126743cb jmp 0x12674604 */
  goto L_12674604;
L_126743d0:;
  /* 126743d0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 126743d3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 126743d6 jmp 0x126743e1 */
  goto L_126743e1;
L_126743d8:;
  /* 126743d8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 126743db add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126743de mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_126743e1:;
  /* 126743e1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 126743e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126743e6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126743e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126743ea je 0x12674429 */
  if (C.zf) goto L_12674429;
  /* 126743ec mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 126743ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126743f1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 126743f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126743f6 je 0x12674429 */
  if (C.zf) goto L_12674429;
  /* 126743f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126743fb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126743fd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 126743ff mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12674402 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12674404 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12674406 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674408 jl 0x12674427 */
  if ((C.sf!=C.of)) goto L_12674427;
  /* 1267440a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267440d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1267440f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12674411 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12674414 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12674416 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12674419 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267441b jg 0x12674427 */
  if ((!C.zf&&C.sf==C.of)) goto L_12674427;
  /* 1267441d mov eax, 2 */
  EAX = (0x2u);
  /* 12674422 jmp 0x12674604 */
  goto L_12674604;
L_12674427:;
  /* 12674427 jmp 0x126743d8 */
  goto L_126743d8;
L_12674429:;
  /* 12674429 mov eax, 3 */
  EAX = (0x3u);
  /* 1267442e jmp 0x12674604 */
  goto L_12674604;
L_12674433:;
  /* 12674433 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674437 jle 0x126744ac */
  if ((C.zf||C.sf!=C.of)) goto L_126744ac;
  /* 12674439 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267443d jae 0x12674449 */
  if (!C.cf) goto L_12674449;
  /* 1267443f mov eax, 1 */
  EAX = (0x1u);
  /* 12674444 jmp 0x12674604 */
  goto L_12674604;
L_12674449:;
  /* 12674449 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1267444c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1267444f jmp 0x1267445a */
  goto L_1267445a;
L_12674451:;
  /* 12674451 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12674454 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674457 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1267445a:;
  /* 1267445a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1267445d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1267445f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12674461 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12674463 je 0x126744a2 */
  if (C.zf) goto L_126744a2;
  /* 12674465 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12674468 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1267446a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1267446d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1267446f je 0x126744a2 */
  if (C.zf) goto L_126744a2;
  /* 12674471 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12674474 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12674476 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12674478 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1267447b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1267447d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1267447f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674481 jl 0x126744a0 */
  if ((C.sf!=C.of)) goto L_126744a0;
  /* 12674483 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12674486 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12674488 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1267448a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1267448d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267448f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12674492 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674494 jg 0x126744a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_126744a0;
  /* 12674496 mov eax, 2 */
  EAX = (0x2u);
  /* 1267449b jmp 0x12674604 */
  goto L_12674604;
L_126744a0:;
  /* 126744a0 jmp 0x12674451 */
  goto L_12674451;
L_126744a2:;
  /* 126744a2 mov eax, 1 */
  EAX = (0x1u);
  /* 126744a7 jmp 0x12674604 */
  goto L_12674604;
L_126744ac:;
  /* 126744ac push 0 */
  push32((uint32_t)(0x0u));
  /* 126744ae push 0 */
  push32((uint32_t)(0x0u));
  /* 126744b0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126744b3 push ecx */
  push32((uint32_t)(ECX));
  /* 126744b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126744b7 push edx */
  push32((uint32_t)(EDX));
  /* 126744b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 126744ba mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 126744bd push eax */
  push32((uint32_t)(EAX));
  /* 126744be call dword ptr [0x126932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932ec))), 0x126744c4u);
  /* 126744c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 126744c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126744cb jne 0x126744d4 */
  if (!C.zf) goto L_126744d4;
  /* 126744cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126744cf jmp 0x12674604 */
  goto L_12674604;
L_126744d4:;
  /* 126744d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 126744db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 126744de shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 126744e0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126744e3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 126744e5 call 0x12667810 */
  push32(0x126744eau); f_12667810();
  /* 126744ea mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 126744ed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 126744f0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 126744f3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 126744f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 126744fd jmp 0x12674516 */
  goto L_12674516;
  /* 126744ff mov eax, 1 */
  EAX = (0x1u);
  /* 12674504 ret  */
  ESPCHK(0x12674220u, _esp0);
  ESP += 4; return;
  /* 12674505 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12674508 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1267450f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12674516:;
  /* 12674516 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267451a jne 0x12674523 */
  if (!C.zf) goto L_12674523;
  /* 1267451c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267451e jmp 0x12674604 */
  goto L_12674604;
L_12674523:;
  /* 12674523 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12674526 push edx */
  push32((uint32_t)(EDX));
  /* 12674527 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1267452a push eax */
  push32((uint32_t)(EAX));
  /* 1267452b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1267452e push ecx */
  push32((uint32_t)(ECX));
  /* 1267452f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12674532 push edx */
  push32((uint32_t)(EDX));
  /* 12674533 push 1 */
  push32((uint32_t)(0x1u));
  /* 12674535 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12674538 push eax */
  push32((uint32_t)(EAX));
  /* 12674539 call dword ptr [0x126932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932ec))), 0x1267453fu);
  /* 1267453f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12674541 jne 0x1267454a */
  if (!C.zf) goto L_1267454a;
  /* 12674543 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12674545 jmp 0x12674604 */
  goto L_12674604;
L_1267454a:;
  /* 1267454a push 0 */
  push32((uint32_t)(0x0u));
  /* 1267454c push 0 */
  push32((uint32_t)(0x0u));
  /* 1267454e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12674551 push ecx */
  push32((uint32_t)(ECX));
  /* 12674552 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12674555 push edx */
  push32((uint32_t)(EDX));
  /* 12674556 push 9 */
  push32((uint32_t)(0x9u));
  /* 12674558 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1267455b push eax */
  push32((uint32_t)(EAX));
  /* 1267455c call dword ptr [0x126932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932ec))), 0x12674562u);
  /* 12674562 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12674565 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674569 jne 0x12674572 */
  if (!C.zf) goto L_12674572;
  /* 1267456b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267456d jmp 0x12674604 */
  goto L_12674604;
L_12674572:;
  /* 12674572 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12674579 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1267457c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1267457e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674581 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12674583 call 0x12667810 */
  push32(0x12674588u); f_12667810();
  /* 12674588 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1267458b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1267458e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12674591 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12674594 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1267459b jmp 0x126745b4 */
  goto L_126745b4;
  /* 1267459d mov eax, 1 */
  EAX = (0x1u);
  /* 126745a2 ret  */
  ESPCHK(0x12674220u, _esp0);
  ESP += 4; return;
  /* 126745a3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 126745a6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 126745ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_126745b4:;
  /* 126745b4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126745b8 jne 0x126745be */
  if (!C.zf) goto L_126745be;
  /* 126745ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126745bc jmp 0x12674604 */
  goto L_12674604;
L_126745be:;
  /* 126745be mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 126745c1 push edx */
  push32((uint32_t)(EDX));
  /* 126745c2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 126745c5 push eax */
  push32((uint32_t)(EAX));
  /* 126745c6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 126745c9 push ecx */
  push32((uint32_t)(ECX));
  /* 126745ca mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 126745cd push edx */
  push32((uint32_t)(EDX));
  /* 126745ce push 1 */
  push32((uint32_t)(0x1u));
  /* 126745d0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 126745d3 push eax */
  push32((uint32_t)(EAX));
  /* 126745d4 call dword ptr [0x126932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932ec))), 0x126745dau);
  /* 126745da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126745dc jne 0x126745e2 */
  if (!C.zf) goto L_126745e2;
  /* 126745de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126745e0 jmp 0x12674604 */
  goto L_12674604;
L_126745e2:;
  /* 126745e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 126745e5 push ecx */
  push32((uint32_t)(ECX));
  /* 126745e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 126745e9 push edx */
  push32((uint32_t)(EDX));
  /* 126745ea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 126745ed push eax */
  push32((uint32_t)(EAX));
  /* 126745ee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 126745f1 push ecx */
  push32((uint32_t)(ECX));
  /* 126745f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126745f5 push edx */
  push32((uint32_t)(EDX));
  /* 126745f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126745f9 push eax */
  push32((uint32_t)(EAX));
  /* 126745fa call dword ptr [0x126932a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932a0))), 0x12674600u);
  /* 12674600 jmp 0x12674604 */
  goto L_12674604;
L_12674602:;
  /* 12674602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12674604:;
  /* 12674604 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12674607 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1267460a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12674611 pop edi */
  EDI = (pop32());
  /* 12674612 pop esi */
  ESI = (pop32());
  /* 12674613 pop ebx */
  EBX = (pop32());
  /* 12674614 mov esp, ebp */
  ESP = (EBP);
  /* 12674616 pop ebp */
  EBP = (pop32());
  /* 12674617 ret  */
  ESPCHK(0x12674220u, _esp0);
  ESP += 4; return;
}

/* FUN_10014620 @ 0x12674620 (80 bytes, 32 insns) */
void f_12674620(void) {
  FTRACE(0x12674620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12674620 push ebp */
  push32((uint32_t)(EBP));
  /* 12674621 mov ebp, esp */
  EBP = (ESP);
  /* 12674623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12674626 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12674629 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1267462c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267462f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12674632:;
  /* 12674632 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12674635 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12674638 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1267463b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1267463e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12674640 je 0x12674657 */
  if (C.zf) goto L_12674657;
  /* 12674642 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12674645 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12674648 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1267464a je 0x12674657 */
  if (C.zf) goto L_12674657;
  /* 1267464c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267464f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674652 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12674655 jmp 0x12674632 */
  goto L_12674632;
L_12674657:;
  /* 12674657 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267465a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1267465d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1267465f jne 0x12674669 */
  if (!C.zf) goto L_12674669;
  /* 12674661 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12674664 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12674667 jmp 0x1267466c */
  goto L_1267466c;
L_12674669:;
  /* 12674669 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1267466c:;
  /* 1267466c mov esp, ebp */
  ESP = (EBP);
  /* 1267466e pop ebp */
  EBP = (pop32());
  /* 1267466f ret  */
  ESPCHK(0x12674620u, _esp0);
  ESP += 4; return;
}

/* FUN_10014670 @ 0x12674670 (736 bytes, 224 insns) */
void f_12674670(void) {
  FTRACE(0x12674670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12674670 push ebp */
  push32((uint32_t)(EBP));
  /* 12674671 mov ebp, esp */
  EBP = (ESP);
  /* 12674673 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12674676 push esi */
  push32((uint32_t)(ESI));
  /* 12674677 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267467b je 0x1267469c */
  if (C.zf) goto L_1267469c;
  /* 1267467d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1267467f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12674682 push eax */
  push32((uint32_t)(EAX));
  /* 12674683 call 0x12674ac0 */
  push32(0x12674688u); f_12674ac0();
  /* 12674688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267468b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1267468e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674692 je 0x1267469c */
  if (C.zf) goto L_1267469c;
  /* 12674694 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12674697 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267469a jne 0x126746a4 */
  if (!C.zf) goto L_126746a4;
L_1267469c:;
  /* 1267469c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1267469f jmp 0x1267494b */
  goto L_1267494b;
L_126746a4:;
  /* 126746a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126746a7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 126746ab neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 126746ad sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126746af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 126746b0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 126746b3 mov ecx, dword ptr [0x126905c4] */
  ECX = (r32((uint32_t)(0x126905c4)));
  /* 126746b9 cmp ecx, dword ptr [0x126905c8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x126905c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126746bf jne 0x126746d5 */
  if (!C.zf) goto L_126746d5;
  /* 126746c1 mov edx, dword ptr [0x126905c4] */
  EDX = (r32((uint32_t)(0x126905c4)));
  /* 126746c7 push edx */
  push32((uint32_t)(EDX));
  /* 126746c8 call 0x126749d0 */
  push32(0x126746cdu); f_126749d0();
  /* 126746cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126746d0 mov dword ptr [0x126905c4], eax */
  w32((uint32_t)(0x126905c4), (EAX));
L_126746d5:;
  /* 126746d5 cmp dword ptr [0x126905c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126905c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126746dc jne 0x12674795 */
  if (!C.zf) goto L_12674795;
  /* 126746e2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126746e6 je 0x12674707 */
  if (C.zf) goto L_12674707;
  /* 126746e8 cmp dword ptr [0x126905cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126905cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126746ef je 0x12674707 */
  if (C.zf) goto L_12674707;
  /* 126746f1 call 0x12674170 */
  push32(0x126746f6u); f_12674170();
  /* 126746f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126746f8 je 0x12674702 */
  if (C.zf) goto L_12674702;
  /* 126746fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126746fd jmp 0x1267494b */
  goto L_1267494b;
L_12674702:;
  /* 12674702 jmp 0x12674795 */
  goto L_12674795;
L_12674707:;
  /* 12674707 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267470b je 0x12674714 */
  if (C.zf) goto L_12674714;
  /* 1267470d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267470f jmp 0x1267494b */
  goto L_1267494b;
L_12674714:;
  /* 12674714 cmp dword ptr [0x126905c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126905c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267471b jne 0x12674754 */
  if (!C.zf) goto L_12674754;
  /* 1267471d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12674722 push 0x1268cb60 */
  push32((uint32_t)(0x1268cb60u));
  /* 12674727 push 2 */
  push32((uint32_t)(0x2u));
  /* 12674729 push 4 */
  push32((uint32_t)(0x4u));
  /* 1267472b call 0x12664670 */
  push32(0x12674730u); f_12664670();
  /* 12674730 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674733 mov dword ptr [0x126905c4], eax */
  w32((uint32_t)(0x126905c4), (EAX));
  /* 12674738 cmp dword ptr [0x126905c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126905c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267473f jne 0x12674749 */
  if (!C.zf) goto L_12674749;
  /* 12674741 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12674744 jmp 0x1267494b */
  goto L_1267494b;
L_12674749:;
  /* 12674749 mov eax, dword ptr [0x126905c4] */
  EAX = (r32((uint32_t)(0x126905c4)));
  /* 1267474e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12674754:;
  /* 12674754 cmp dword ptr [0x126905cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126905cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267475b jne 0x12674795 */
  if (!C.zf) goto L_12674795;
  /* 1267475d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12674762 push 0x1268cb60 */
  push32((uint32_t)(0x1268cb60u));
  /* 12674767 push 2 */
  push32((uint32_t)(0x2u));
  /* 12674769 push 4 */
  push32((uint32_t)(0x4u));
  /* 1267476b call 0x12664670 */
  push32(0x12674770u); f_12664670();
  /* 12674770 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674773 mov dword ptr [0x126905cc], eax */
  w32((uint32_t)(0x126905cc), (EAX));
  /* 12674778 cmp dword ptr [0x126905cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126905cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267477f jne 0x12674789 */
  if (!C.zf) goto L_12674789;
  /* 12674781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12674784 jmp 0x1267494b */
  goto L_1267494b;
L_12674789:;
  /* 12674789 mov ecx, dword ptr [0x126905cc] */
  ECX = (r32((uint32_t)(0x126905cc)));
  /* 1267478f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12674795:;
  /* 12674795 mov edx, dword ptr [0x126905c4] */
  EDX = (r32((uint32_t)(0x126905c4)));
  /* 1267479b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1267479e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126747a1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126747a4 push eax */
  push32((uint32_t)(EAX));
  /* 126747a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126747a8 push ecx */
  push32((uint32_t)(ECX));
  /* 126747a9 call 0x12674950 */
  push32(0x126747aeu); f_12674950();
  /* 126747ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126747b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126747b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126747b8 jl 0x12674851 */
  if ((C.sf!=C.of)) goto L_12674851;
  /* 126747be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126747c1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126747c4 je 0x12674851 */
  if (C.zf) goto L_12674851;
  /* 126747ca cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126747ce je 0x12674843 */
  if (C.zf) goto L_12674843;
  /* 126747d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 126747d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126747d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126747d8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 126747db push edx */
  push32((uint32_t)(EDX));
  /* 126747dc call 0x12665100 */
  push32(0x126747e1u); f_12665100();
  /* 126747e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126747e4 jmp 0x126747ef */
  goto L_126747ef;
L_126747e6:;
  /* 126747e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126747e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126747ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_126747ef:;
  /* 126747ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126747f2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126747f5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126747f9 je 0x12674810 */
  if (C.zf) goto L_12674810;
  /* 126747fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126747fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12674801 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12674804 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12674807 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1267480b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1267480e jmp 0x126747e6 */
  goto L_126747e6;
L_12674810:;
  /* 12674810 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12674815 push 0x1268cb60 */
  push32((uint32_t)(0x1268cb60u));
  /* 1267481a push 2 */
  push32((uint32_t)(0x2u));
  /* 1267481c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1267481f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12674822 push eax */
  push32((uint32_t)(EAX));
  /* 12674823 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12674826 push ecx */
  push32((uint32_t)(ECX));
  /* 12674827 call 0x12664b00 */
  push32(0x1267482cu); f_12664b00();
  /* 1267482c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267482f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12674832 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674836 je 0x12674841 */
  if (C.zf) goto L_12674841;
  /* 12674838 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267483b mov dword ptr [0x126905c4], edx */
  w32((uint32_t)(0x126905c4), (EDX));
L_12674841:;
  /* 12674841 jmp 0x1267484f */
  goto L_1267484f;
L_12674843:;
  /* 12674843 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12674846 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12674849 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267484c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1267484f:;
  /* 1267484f jmp 0x126748c4 */
  goto L_126748c4;
L_12674851:;
  /* 12674851 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674855 jne 0x126748bd */
  if (!C.zf) goto L_126748bd;
  /* 12674857 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267485b jge 0x12674865 */
  if ((C.sf==C.of)) goto L_12674865;
  /* 1267485d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12674860 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12674862 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12674865:;
  /* 12674865 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1267486a push 0x1268cb60 */
  push32((uint32_t)(0x1268cb60u));
  /* 1267486f push 2 */
  push32((uint32_t)(0x2u));
  /* 12674871 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12674874 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1267487b push edx */
  push32((uint32_t)(EDX));
  /* 1267487c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267487f push eax */
  push32((uint32_t)(EAX));
  /* 12674880 call 0x12664b00 */
  push32(0x12674885u); f_12664b00();
  /* 12674885 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674888 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1267488b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267488f jne 0x12674899 */
  if (!C.zf) goto L_12674899;
  /* 12674891 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12674894 jmp 0x1267494b */
  goto L_1267494b;
L_12674899:;
  /* 12674899 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1267489c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267489f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126748a2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 126748a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126748a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126748ab mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 126748b3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126748b6 mov dword ptr [0x126905c4], eax */
  w32((uint32_t)(0x126905c4), (EAX));
  /* 126748bb jmp 0x126748c4 */
  goto L_126748c4;
L_126748bd:;
  /* 126748bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126748bf jmp 0x1267494b */
  goto L_1267494b;
L_126748c4:;
  /* 126748c4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126748c8 je 0x12674949 */
  if (C.zf) goto L_12674949;
  /* 126748ca push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 126748cf push 0x1268cb60 */
  push32((uint32_t)(0x1268cb60u));
  /* 126748d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 126748d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126748d9 push ecx */
  push32((uint32_t)(ECX));
  /* 126748da call 0x126674a0 */
  push32(0x126748dfu); f_126674a0();
  /* 126748df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126748e2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126748e5 push eax */
  push32((uint32_t)(EAX));
  /* 126748e6 call 0x12664670 */
  push32(0x126748ebu); f_12664670();
  /* 126748eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126748ee mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 126748f1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126748f5 je 0x12674949 */
  if (C.zf) goto L_12674949;
  /* 126748f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126748fa push edx */
  push32((uint32_t)(EDX));
  /* 126748fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126748fe push eax */
  push32((uint32_t)(EAX));
  /* 126748ff call 0x12667620 */
  push32(0x12674904u); f_12667620();
  /* 12674904 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674907 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1267490a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1267490d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12674910 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674912 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12674915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12674918 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1267491b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267491e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674921 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12674924 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12674927 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12674929 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1267492b not edx */
  EDX = (~(EDX));
  /* 1267492d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12674930 push edx */
  push32((uint32_t)(EDX));
  /* 12674931 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12674934 push eax */
  push32((uint32_t)(EAX));
  /* 12674935 call dword ptr [0x1269329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269329c))), 0x1267493bu);
  /* 1267493b push 2 */
  push32((uint32_t)(0x2u));
  /* 1267493d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12674940 push ecx */
  push32((uint32_t)(ECX));
  /* 12674941 call 0x12665100 */
  push32(0x12674946u); f_12665100();
  /* 12674946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12674949:;
  /* 12674949 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1267494b:;
  /* 1267494b pop esi */
  ESI = (pop32());
  /* 1267494c mov esp, ebp */
  ESP = (EBP);
  /* 1267494e pop ebp */
  EBP = (pop32());
  /* 1267494f ret  */
  ESPCHK(0x12674670u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12674950 (124 bytes, 47 insns) */
void f_12674950(void) {
  FTRACE(0x12674950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12674950 push ebp */
  push32((uint32_t)(EBP));
  /* 12674951 mov ebp, esp */
  EBP = (ESP);
  /* 12674953 push ecx */
  push32((uint32_t)(ECX));
  /* 12674954 mov eax, dword ptr [0x126905c4] */
  EAX = (r32((uint32_t)(0x126905c4)));
  /* 12674959 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1267495c jmp 0x12674967 */
  goto L_12674967;
L_1267495e:;
  /* 1267495e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12674961 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674964 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12674967:;
  /* 12674967 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267496a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267496d je 0x126749ba */
  if (C.zf) goto L_126749ba;
  /* 1267496f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12674972 push eax */
  push32((uint32_t)(EAX));
  /* 12674973 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12674976 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12674978 push edx */
  push32((uint32_t)(EDX));
  /* 12674979 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267497c push eax */
  push32((uint32_t)(EAX));
  /* 1267497d call 0x12674120 */
  push32(0x12674982u); f_12674120();
  /* 12674982 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674985 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12674987 jne 0x126749b8 */
  if (!C.zf) goto L_126749b8;
  /* 12674989 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267498c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1267498e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12674991 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12674995 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674998 je 0x126749aa */
  if (C.zf) goto L_126749aa;
  /* 1267499a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267499d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1267499f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126749a2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 126749a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126749a8 jne 0x126749b8 */
  if (!C.zf) goto L_126749b8;
L_126749aa:;
  /* 126749aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126749ad sub eax, dword ptr [0x126905c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x126905c4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126749b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 126749b6 jmp 0x126749c8 */
  goto L_126749c8;
L_126749b8:;
  /* 126749b8 jmp 0x1267495e */
  goto L_1267495e;
L_126749ba:;
  /* 126749ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126749bd sub eax, dword ptr [0x126905c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x126905c4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126749c3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 126749c6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_126749c8:;
  /* 126749c8 mov esp, ebp */
  ESP = (EBP);
  /* 126749ca pop ebp */
  EBP = (pop32());
  /* 126749cb ret  */
  ESPCHK(0x12674950u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x126749d0 (238 bytes, 80 insns) */
void f_126749d0(void) {
  FTRACE(0x126749d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126749d0 push ebp */
  push32((uint32_t)(EBP));
  /* 126749d1 mov ebp, esp */
  EBP = (ESP);
  /* 126749d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126749d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 126749dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126749e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126749e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126749e7 jne 0x126749f0 */
  if (!C.zf) goto L_126749f0;
  /* 126749e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126749eb jmp 0x12674aba */
  goto L_12674aba;
L_126749f0:;
  /* 126749f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126749f3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126749f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126749f8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126749fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126749fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12674a00 je 0x12674a0d */
  if (C.zf) goto L_12674a0d;
  /* 12674a02 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12674a05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674a08 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12674a0b jmp 0x126749f0 */
  goto L_126749f0;
L_12674a0d:;
  /* 12674a0d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12674a12 push 0x1268cb60 */
  push32((uint32_t)(0x1268cb60u));
  /* 12674a17 push 2 */
  push32((uint32_t)(0x2u));
  /* 12674a19 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12674a1c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12674a23 push eax */
  push32((uint32_t)(EAX));
  /* 12674a24 call 0x12664670 */
  push32(0x12674a29u); f_12664670();
  /* 12674a29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674a2c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12674a2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12674a32 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12674a35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674a39 jne 0x12674a45 */
  if (!C.zf) goto L_12674a45;
  /* 12674a3b push 9 */
  push32((uint32_t)(0x9u));
  /* 12674a3d call 0x126635e0 */
  push32(0x12674a42u); f_126635e0();
  /* 12674a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12674a45:;
  /* 12674a45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12674a48 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12674a4b:;
  /* 12674a4b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12674a4e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674a51 je 0x12674aae */
  if (C.zf) goto L_12674aae;
  /* 12674a53 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12674a58 push 0x1268cb60 */
  push32((uint32_t)(0x1268cb60u));
  /* 12674a5d push 2 */
  push32((uint32_t)(0x2u));
  /* 12674a5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12674a62 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12674a64 push edx */
  push32((uint32_t)(EDX));
  /* 12674a65 call 0x126674a0 */
  push32(0x12674a6au); f_126674a0();
  /* 12674a6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674a6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674a70 push eax */
  push32((uint32_t)(EAX));
  /* 12674a71 call 0x12664670 */
  push32(0x12674a76u); f_12664670();
  /* 12674a76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674a79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12674a7c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12674a7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12674a81 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674a84 je 0x12674a9a */
  if (C.zf) goto L_12674a9a;
  /* 12674a86 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12674a89 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12674a8b push ecx */
  push32((uint32_t)(ECX));
  /* 12674a8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12674a8f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12674a91 push eax */
  push32((uint32_t)(EAX));
  /* 12674a92 call 0x12667620 */
  push32(0x12674a97u); f_12667620();
  /* 12674a97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12674a9a:;
  /* 12674a9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12674a9d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674aa0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12674aa3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12674aa6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674aa9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12674aac jmp 0x12674a4b */
  goto L_12674a4b;
L_12674aae:;
  /* 12674aae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12674ab1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12674ab7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12674aba:;
  /* 12674aba mov esp, ebp */
  ESP = (EBP);
  /* 12674abc pop ebp */
  EBP = (pop32());
  /* 12674abd ret  */
  ESPCHK(0x126749d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ac0 @ 0x12674ac0 (237 bytes, 81 insns) */
void f_12674ac0(void) {
  FTRACE(0x12674ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12674ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12674ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12674ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 12674ac4 cmp dword ptr [0x12691d0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12691d0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674acb jne 0x12674ae2 */
  if (!C.zf) goto L_12674ae2;
  /* 12674acd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12674ad0 push eax */
  push32((uint32_t)(EAX));
  /* 12674ad1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12674ad4 push ecx */
  push32((uint32_t)(ECX));
  /* 12674ad5 call 0x12674bc0 */
  push32(0x12674adau); f_12674bc0();
  /* 12674ada add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674add jmp 0x12674ba9 */
  goto L_12674ba9;
L_12674ae2:;
  /* 12674ae2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12674ae4 call 0x12668070 */
  push32(0x12674ae9u); f_12668070();
  /* 12674ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674aec jmp 0x12674af7 */
  goto L_12674af7;
L_12674aee:;
  /* 12674aee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12674af1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674af4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12674af7:;
  /* 12674af7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12674afa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12674afe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12674b02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12674b05 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12674b0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12674b0d je 0x12674b8b */
  if (C.zf) goto L_12674b8b;
  /* 12674b0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12674b12 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12674b17 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12674b19 mov cl, byte ptr [eax + 0x12691e21] */
  CL = (r8((uint32_t)(EAX + 0x12691e21)));
  /* 12674b1f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12674b22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12674b24 je 0x12674b76 */
  if (C.zf) goto L_12674b76;
  /* 12674b26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12674b29 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674b2c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12674b2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12674b32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12674b34 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12674b36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12674b38 jne 0x12674b48 */
  if (!C.zf) goto L_12674b48;
  /* 12674b3a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12674b3c call 0x12668110 */
  push32(0x12674b41u); f_12668110();
  /* 12674b41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674b44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12674b46 jmp 0x12674ba9 */
  goto L_12674ba9;
L_12674b48:;
  /* 12674b48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12674b4b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12674b51 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12674b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12674b57 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12674b59 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12674b5b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12674b5d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674b60 jne 0x12674b74 */
  if (!C.zf) goto L_12674b74;
  /* 12674b62 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12674b64 call 0x12668110 */
  push32(0x12674b69u); f_12668110();
  /* 12674b69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674b6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12674b6f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12674b72 jmp 0x12674ba9 */
  goto L_12674ba9;
L_12674b74:;
  /* 12674b74 jmp 0x12674b86 */
  goto L_12674b86;
L_12674b76:;
  /* 12674b76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12674b79 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12674b7f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674b82 jne 0x12674b86 */
  if (!C.zf) goto L_12674b86;
  /* 12674b84 jmp 0x12674b8b */
  goto L_12674b8b;
L_12674b86:;
  /* 12674b86 jmp 0x12674aee */
  goto L_12674aee;
L_12674b8b:;
  /* 12674b8b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12674b8d call 0x12668110 */
  push32(0x12674b92u); f_12668110();
  /* 12674b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12674b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12674b98 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12674b9d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12674ba0 jne 0x12674ba7 */
  if (!C.zf) goto L_12674ba7;
  /* 12674ba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12674ba5 jmp 0x12674ba9 */
  goto L_12674ba9;
L_12674ba7:;
  /* 12674ba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12674ba9:;
  /* 12674ba9 mov esp, ebp */
  ESP = (EBP);
  /* 12674bab pop ebp */
  EBP = (pop32());
  /* 12674bac ret  */
  ESPCHK(0x12674ac0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12674bc0 (193 bytes, 87 insns) */
void f_12674bc0(void) {
  FTRACE(0x12674bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12674bc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12674bc2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12674bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 12674bc7 mov ebx, eax */
  EBX = (EAX);
  /* 12674bc9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12674bcc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12674bd0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12674bd6 je 0x12674beb */
  if (C.zf) goto L_12674beb;
L_12674bd8:;
  /* 12674bd8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12674bda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12674bdb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12674bdd je 0x12674bb0 */
  if (C.zf) { jmp_ind(0x12674bb0u); return; }
  /* 12674bdf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12674be1 je 0x12674c34 */
  if (C.zf) goto L_12674c34;
  /* 12674be3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12674be9 jne 0x12674bd8 */
  if (!C.zf) goto L_12674bd8;
L_12674beb:;
  /* 12674beb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12674bed push edi */
  push32((uint32_t)(EDI));
  /* 12674bee mov eax, ebx */
  EAX = (EBX);
  /* 12674bf0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12674bf3 push esi */
  push32((uint32_t)(ESI));
  /* 12674bf4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12674bf6:;
  /* 12674bf6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12674bf8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12674bfd mov eax, ecx */
  EAX = (ECX);
  /* 12674bff mov esi, edi */
  ESI = (EDI);
  /* 12674c01 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12674c03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12674c05 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12674c07 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12674c0a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12674c0d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12674c0f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12674c11 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12674c14 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12674c1a jne 0x12674c38 */
  if (!C.zf) goto L_12674c38;
  /* 12674c1c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12674c21 je 0x12674bf6 */
  if (C.zf) goto L_12674bf6;
  /* 12674c23 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12674c28 jne 0x12674c32 */
  if (!C.zf) goto L_12674c32;
  /* 12674c2a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12674c30 jne 0x12674bf6 */
  if (!C.zf) goto L_12674bf6;
L_12674c32:;
  /* 12674c32 pop esi */
  ESI = (pop32());
  /* 12674c33 pop edi */
  EDI = (pop32());
L_12674c34:;
  /* 12674c34 pop ebx */
  EBX = (pop32());
  /* 12674c35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12674c37 ret  */
  ESPCHK(0x12674bc0u, _esp0);
  ESP += 4; return;
L_12674c38:;
  /* 12674c38 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12674c3b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12674c3d je 0x12674c75 */
  if (C.zf) goto L_12674c75;
  /* 12674c3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12674c41 je 0x12674c32 */
  if (C.zf) goto L_12674c32;
  /* 12674c43 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12674c45 je 0x12674c6e */
  if (C.zf) goto L_12674c6e;
  /* 12674c47 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12674c49 je 0x12674c32 */
  if (C.zf) goto L_12674c32;
  /* 12674c4b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12674c4e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12674c50 je 0x12674c67 */
  if (C.zf) goto L_12674c67;
  /* 12674c52 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12674c54 je 0x12674c32 */
  if (C.zf) goto L_12674c32;
  /* 12674c56 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12674c58 je 0x12674c60 */
  if (C.zf) goto L_12674c60;
  /* 12674c5a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12674c5c je 0x12674c32 */
  if (C.zf) goto L_12674c32;
  /* 12674c5e jmp 0x12674bf6 */
  goto L_12674bf6;
L_12674c60:;
  /* 12674c60 pop esi */
  ESI = (pop32());
  /* 12674c61 pop edi */
  EDI = (pop32());
  /* 12674c62 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12674c65 pop ebx */
  EBX = (pop32());
  /* 12674c66 ret  */
  ESPCHK(0x12674bc0u, _esp0);
  ESP += 4; return;
L_12674c67:;
  /* 12674c67 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12674c6a pop esi */
  ESI = (pop32());
  /* 12674c6b pop edi */
  EDI = (pop32());
  /* 12674c6c pop ebx */
  EBX = (pop32());
  /* 12674c6d ret  */
  ESPCHK(0x12674bc0u, _esp0);
  ESP += 4; return;
L_12674c6e:;
  /* 12674c6e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12674c71 pop esi */
  ESI = (pop32());
  /* 12674c72 pop edi */
  EDI = (pop32());
  /* 12674c73 pop ebx */
  EBX = (pop32());
  /* 12674c74 ret  */
  ESPCHK(0x12674bc0u, _esp0);
  ESP += 4; return;
L_12674c75:;
  /* 12674c75 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12674c78 pop esi */
  ESI = (pop32());
  /* 12674c79 pop edi */
  EDI = (pop32());
  /* 12674c7a pop ebx */
  EBX = (pop32());
  /* 12674c7b ret  */
  ESPCHK(0x12674bc0u, _esp0);
  ESP += 4; return;
  /* 12674c7c jmp dword ptr [0x12693320] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12693320)))); return;
}

/* RtlUnwind @ 0x12674dcc (6 bytes, 1 insns) */
void f_12674dcc(void) {
  FTRACE(0x12674dccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12674dcc jmp dword ptr [0x126932d4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x126932d4)))); return;
}

