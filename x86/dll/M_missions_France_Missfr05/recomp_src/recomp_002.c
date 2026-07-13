#include "recomp.h"

/* FUN_100102b0 @ 0x106b02b0 (878 bytes, 273 insns) */
void f_106b02b0(void) {
  FTRACE(0x106b02b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b02b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b02b1 mov ebp, esp */
  EBP = (ESP);
  /* 106b02b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b02b6 push esi */
  push32((uint32_t)(ESI));
  /* 106b02b7 mov eax, dword ptr [0x106cec98] */
  EAX = (r32((uint32_t)(0x106cec98)));
  /* 106b02bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106b02bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106b02c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106b02cd jmp 0x106b02d8 */
  goto L_106b02d8;
L_106b02cf:;
  /* 106b02cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b02d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b02d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106b02d8:;
  /* 106b02d8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b02dc jae 0x106b0311 */
  if (!C.cf) goto L_106b0311;
  /* 106b02de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b02e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b02e4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 106b02e7 push ecx */
  push32((uint32_t)(ECX));
  /* 106b02e8 call 0x106a6130 */
  push32(0x106b02edu); f_106a6130();
  /* 106b02ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b02f0 mov esi, eax */
  ESI = (EAX);
  /* 106b02f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b02f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b02f8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 106b02fc push ecx */
  push32((uint32_t)(ECX));
  /* 106b02fd call 0x106a6130 */
  push32(0x106b0302u); f_106a6130();
  /* 106b0302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0305 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0308 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 106b030c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106b030f jmp 0x106b02cf */
  goto L_106b02cf;
L_106b0311:;
  /* 106b0311 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106b0318 jmp 0x106b0323 */
  goto L_106b0323;
L_106b031a:;
  /* 106b031a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b031d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0320 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_106b0323:;
  /* 106b0323 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0327 jae 0x106b035d */
  if (!C.cf) goto L_106b035d;
  /* 106b0329 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b032c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b032f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 106b0333 push eax */
  push32((uint32_t)(EAX));
  /* 106b0334 call 0x106a6130 */
  push32(0x106b0339u); f_106a6130();
  /* 106b0339 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b033c mov esi, eax */
  ESI = (EAX);
  /* 106b033e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b0341 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0344 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 106b0348 push eax */
  push32((uint32_t)(EAX));
  /* 106b0349 call 0x106a6130 */
  push32(0x106b034eu); f_106a6130();
  /* 106b034e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0351 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0354 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 106b0358 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106b035b jmp 0x106b031a */
  goto L_106b031a;
L_106b035d:;
  /* 106b035d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0360 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 106b0366 push eax */
  push32((uint32_t)(EAX));
  /* 106b0367 call 0x106a6130 */
  push32(0x106b036cu); f_106a6130();
  /* 106b036c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b036f mov esi, eax */
  ESI = (EAX);
  /* 106b0371 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0374 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 106b037a push edx */
  push32((uint32_t)(EDX));
  /* 106b037b call 0x106a6130 */
  push32(0x106b0380u); f_106a6130();
  /* 106b0380 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0383 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0386 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 106b038a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106b038d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0390 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 106b0396 push edx */
  push32((uint32_t)(EDX));
  /* 106b0397 call 0x106a6130 */
  push32(0x106b039cu); f_106a6130();
  /* 106b039c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b039f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b03a2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106b03a6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106b03a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b03ac mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 106b03b2 push ecx */
  push32((uint32_t)(ECX));
  /* 106b03b3 call 0x106a6130 */
  push32(0x106b03b8u); f_106a6130();
  /* 106b03b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b03bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b03be lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 106b03c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106b03c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b03c8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 106b03ce push edx */
  push32((uint32_t)(EDX));
  /* 106b03cf call 0x106a6130 */
  push32(0x106b03d4u); f_106a6130();
  /* 106b03d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b03d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b03da lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106b03de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106b03e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b03e4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b03e9 push eax */
  push32((uint32_t)(EAX));
  /* 106b03ea call 0x106a32e0 */
  push32(0x106b03efu); f_106a32e0();
  /* 106b03ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b03f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106b03f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b03f9 je 0x106b0616 */
  if (C.zf) goto L_106b0616;
  /* 106b03ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0402 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106b0405 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0408 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b040e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106b0411 push 0xac */
  push32((uint32_t)(0xacu));
  /* 106b0416 mov eax, dword ptr [0x106cec98] */
  EAX = (r32((uint32_t)(0x106cec98)));
  /* 106b041b push eax */
  push32((uint32_t)(EAX));
  /* 106b041c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b041f push ecx */
  push32((uint32_t)(ECX));
  /* 106b0420 call 0x106a9be0 */
  push32(0x106b0425u); f_106a9be0();
  /* 106b0425 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0428 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106b042f jmp 0x106b043a */
  goto L_106b043a;
L_106b0431:;
  /* 106b0431 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b0434 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0437 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106b043a:;
  /* 106b043a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b043e jae 0x106b04ae */
  if (!C.cf) goto L_106b04ae;
  /* 106b0440 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b0443 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106b0446 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0449 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 106b044c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b044f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0452 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106b0455 push edx */
  push32((uint32_t)(EDX));
  /* 106b0456 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0459 push eax */
  push32((uint32_t)(EAX));
  /* 106b045a call 0x106a62b0 */
  push32(0x106b045fu); f_106a62b0();
  /* 106b045f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0462 push eax */
  push32((uint32_t)(EAX));
  /* 106b0463 call 0x106a6130 */
  push32(0x106b0468u); f_106a6130();
  /* 106b0468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b046b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b046e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106b0472 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106b0475 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b0478 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106b047b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b047e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 106b0482 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b0485 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0488 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 106b048c push edx */
  push32((uint32_t)(EDX));
  /* 106b048d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0490 push eax */
  push32((uint32_t)(EAX));
  /* 106b0491 call 0x106a62b0 */
  push32(0x106b0496u); f_106a62b0();
  /* 106b0496 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0499 push eax */
  push32((uint32_t)(EAX));
  /* 106b049a call 0x106a6130 */
  push32(0x106b049fu); f_106a6130();
  /* 106b049f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b04a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b04a5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106b04a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106b04ac jmp 0x106b0431 */
  goto L_106b0431;
L_106b04ae:;
  /* 106b04ae mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106b04b5 jmp 0x106b04c0 */
  goto L_106b04c0;
L_106b04b7:;
  /* 106b04b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b04ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b04bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_106b04c0:;
  /* 106b04c0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b04c4 jae 0x106b0536 */
  if (!C.cf) goto L_106b0536;
  /* 106b04c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b04c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106b04cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b04cf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 106b04d3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b04d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b04d9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 106b04dd push eax */
  push32((uint32_t)(EAX));
  /* 106b04de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b04e1 push ecx */
  push32((uint32_t)(ECX));
  /* 106b04e2 call 0x106a62b0 */
  push32(0x106b04e7u); f_106a62b0();
  /* 106b04e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b04ea push eax */
  push32((uint32_t)(EAX));
  /* 106b04eb call 0x106a6130 */
  push32(0x106b04f0u); f_106a6130();
  /* 106b04f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b04f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b04f6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 106b04fa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106b04fd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b0500 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106b0503 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0506 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 106b050a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b050d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0510 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 106b0514 push eax */
  push32((uint32_t)(EAX));
  /* 106b0515 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0518 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0519 call 0x106a62b0 */
  push32(0x106b051eu); f_106a62b0();
  /* 106b051e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0521 push eax */
  push32((uint32_t)(EAX));
  /* 106b0522 call 0x106a6130 */
  push32(0x106b0527u); f_106a6130();
  /* 106b0527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b052a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b052d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 106b0531 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106b0534 jmp 0x106b04b7 */
  goto L_106b04b7;
L_106b0536:;
  /* 106b0536 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106b0539 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b053c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 106b0542 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0545 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 106b054b push ecx */
  push32((uint32_t)(ECX));
  /* 106b054c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b054f push edx */
  push32((uint32_t)(EDX));
  /* 106b0550 call 0x106a62b0 */
  push32(0x106b0555u); f_106a62b0();
  /* 106b0555 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0558 push eax */
  push32((uint32_t)(EAX));
  /* 106b0559 call 0x106a6130 */
  push32(0x106b055eu); f_106a6130();
  /* 106b055e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0561 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0564 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106b0568 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106b056b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106b056e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0571 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 106b0577 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b057a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 106b0580 push eax */
  push32((uint32_t)(EAX));
  /* 106b0581 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0584 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0585 call 0x106a62b0 */
  push32(0x106b058au); f_106a62b0();
  /* 106b058a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b058d push eax */
  push32((uint32_t)(EAX));
  /* 106b058e call 0x106a6130 */
  push32(0x106b0593u); f_106a6130();
  /* 106b0593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0596 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0599 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 106b059d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106b05a0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106b05a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b05a6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 106b05ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b05af mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 106b05b5 push ecx */
  push32((uint32_t)(ECX));
  /* 106b05b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b05b9 push edx */
  push32((uint32_t)(EDX));
  /* 106b05ba call 0x106a62b0 */
  push32(0x106b05bfu); f_106a62b0();
  /* 106b05bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b05c2 push eax */
  push32((uint32_t)(EAX));
  /* 106b05c3 call 0x106a6130 */
  push32(0x106b05c8u); f_106a6130();
  /* 106b05c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b05cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b05ce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106b05d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106b05d5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106b05d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b05db mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 106b05e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b05e4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 106b05ea push eax */
  push32((uint32_t)(EAX));
  /* 106b05eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b05ee push ecx */
  push32((uint32_t)(ECX));
  /* 106b05ef call 0x106a62b0 */
  push32(0x106b05f4u); f_106a62b0();
  /* 106b05f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b05f7 push eax */
  push32((uint32_t)(EAX));
  /* 106b05f8 call 0x106a6130 */
  push32(0x106b05fdu); f_106a6130();
  /* 106b05fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0600 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0603 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 106b0607 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106b060a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106b060d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0610 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_106b0616:;
  /* 106b0616 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0619 pop esi */
  ESI = (pop32());
  /* 106b061a mov esp, ebp */
  ESP = (EBP);
  /* 106b061c pop ebp */
  EBP = (pop32());
  /* 106b061d ret  */
  ESPCHK(0x106b02b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010620 @ 0x106b0620 (31 bytes, 15 insns) */
void f_106b0620(void) {
  FTRACE(0x106b0620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b0620 push ebp */
  push32((uint32_t)(EBP));
  /* 106b0621 mov ebp, esp */
  EBP = (ESP);
  /* 106b0623 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b0625 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0628 push eax */
  push32((uint32_t)(EAX));
  /* 106b0629 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b062c push ecx */
  push32((uint32_t)(ECX));
  /* 106b062d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0630 push edx */
  push32((uint32_t)(EDX));
  /* 106b0631 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0634 push eax */
  push32((uint32_t)(EAX));
  /* 106b0635 call 0x106b0640 */
  push32(0x106b063au); f_106b0640();
  /* 106b063a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b063d pop ebp */
  EBP = (pop32());
  /* 106b063e ret  */
  ESPCHK(0x106b0620u, _esp0);
  ESP += 4; return;
}

/* FUN_10010640 @ 0x106b0640 (393 bytes, 123 insns) */
void f_106b0640(void) {
  FTRACE(0x106b0640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b0640 push ebp */
  push32((uint32_t)(EBP));
  /* 106b0641 mov ebp, esp */
  EBP = (ESP);
  /* 106b0643 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0646 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b064a jne 0x106b0656 */
  if (!C.zf) goto L_106b0656;
  /* 106b064c mov eax, dword ptr [0x106cec98] */
  EAX = (r32((uint32_t)(0x106cec98)));
  /* 106b0651 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106b0654 jmp 0x106b065c */
  goto L_106b065c;
L_106b0656:;
  /* 106b0656 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0659 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106b065c:;
  /* 106b065c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b065f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106b0662 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0665 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106b0668 push 0x106cf81c */
  push32((uint32_t)(0x106cf81cu));
  /* 106b066d call dword ptr [0x106d12d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12d8))), 0x106b0673u);
  /* 106b0673 cmp dword ptr [0x106cf80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b067a je 0x106b069a */
  if (C.zf) goto L_106b069a;
  /* 106b067c push 0x106cf81c */
  push32((uint32_t)(0x106cf81cu));
  /* 106b0681 call dword ptr [0x106d12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c8))), 0x106b0687u);
  /* 106b0687 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106b0689 call 0x106a6d00 */
  push32(0x106b068eu); f_106a6d00();
  /* 106b068e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0691 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 106b0698 jmp 0x106b06a1 */
  goto L_106b06a1;
L_106b069a:;
  /* 106b069a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106b06a1:;
  /* 106b06a1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b06a5 jbe 0x106b0792 */
  if ((C.cf||C.zf)) goto L_106b0792;
  /* 106b06ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b06ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106b06b0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 106b06b3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b06b7 je 0x106b06c1 */
  if (C.zf) goto L_106b06c1;
  /* 106b06b9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b06bd je 0x106b06c6 */
  if (C.zf) goto L_106b06c6;
  /* 106b06bf jmp 0x106b0720 */
  goto L_106b0720;
L_106b06c1:;
  /* 106b06c1 jmp 0x106b0792 */
  goto L_106b0792;
L_106b06c6:;
  /* 106b06c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b06c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b06cc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 106b06cf mov dword ptr [0x106cf7f8], 0 */
  w32((uint32_t)(0x106cf7f8), (0x0u));
  /* 106b06d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b06dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106b06df cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b06e2 jne 0x106b06f7 */
  if (!C.zf) goto L_106b06f7;
  /* 106b06e4 mov dword ptr [0x106cf7f8], 1 */
  w32((uint32_t)(0x106cf7f8), (0x1u));
  /* 106b06ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b06f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b06f4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_106b06f7:;
  /* 106b06f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b06fa push ecx */
  push32((uint32_t)(ECX));
  /* 106b06fb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 106b06fe push edx */
  push32((uint32_t)(EDX));
  /* 106b06ff lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 106b0702 push eax */
  push32((uint32_t)(EAX));
  /* 106b0703 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0706 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0707 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b070a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b070c push eax */
  push32((uint32_t)(EAX));
  /* 106b070d call 0x106b07d0 */
  push32(0x106b0712u); f_106b07d0();
  /* 106b0712 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0715 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0718 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b071b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106b071e jmp 0x106b078d */
  goto L_106b078d;
L_106b0720:;
  /* 106b0720 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0723 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b0725 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b0727 mov ecx, dword ptr [0x106cdc98] */
  ECX = (r32((uint32_t)(0x106cdc98)));
  /* 106b072d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b072f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106b0733 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 106b0739 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b073b je 0x106b0768 */
  if (C.zf) goto L_106b0768;
  /* 106b073d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0741 jbe 0x106b0768 */
  if ((C.cf||C.zf)) goto L_106b0768;
  /* 106b0743 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0746 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0749 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106b074b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106b074d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0750 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0753 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106b0756 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0759 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b075c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106b075f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0762 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0765 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106b0768:;
  /* 106b0768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b076b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b076e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106b0770 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106b0772 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0775 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0778 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106b077b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b077e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0781 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106b0784 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0787 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b078a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106b078d:;
  /* 106b078d jmp 0x106b06a1 */
  goto L_106b06a1;
L_106b0792:;
  /* 106b0792 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0796 je 0x106b07a4 */
  if (C.zf) goto L_106b07a4;
  /* 106b0798 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106b079a call 0x106a6da0 */
  push32(0x106b079fu); f_106a6da0();
  /* 106b079f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b07a2 jmp 0x106b07af */
  goto L_106b07af;
L_106b07a4:;
  /* 106b07a4 push 0x106cf81c */
  push32((uint32_t)(0x106cf81cu));
  /* 106b07a9 call dword ptr [0x106d12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c8))), 0x106b07afu);
L_106b07af:;
  /* 106b07af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b07b3 jbe 0x106b07c3 */
  if ((C.cf||C.zf)) goto L_106b07c3;
  /* 106b07b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b07b8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106b07bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b07be sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b07c1 jmp 0x106b07c5 */
  goto L_106b07c5;
L_106b07c3:;
  /* 106b07c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106b07c5:;
  /* 106b07c5 mov esp, ebp */
  ESP = (EBP);
  /* 106b07c7 pop ebp */
  EBP = (pop32());
  /* 106b07c8 ret  */
  ESPCHK(0x106b0640u, _esp0);
  ESP += 4; return;
}

/* FUN_100107d0 @ 0x106b07d0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_106b07d0(void) {
  FTRACE(0x106b07d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b07d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b07d1 mov ebp, esp */
  EBP = (ESP);
  /* 106b07d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b07d6 push esi */
  push32((uint32_t)(ESI));
  /* 106b07d7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 106b07db mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106b07de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b07e1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b07e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106b07e7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b07eb ja 0x106b0d38 */
  if ((!C.cf&&!C.zf)) goto L_106b0d38;
  /* 106b07f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b07f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b07f6 mov dl, byte ptr [eax + 0x106b0d99] */
  DL = (r8((uint32_t)(EAX + 0x106b0d99)));
  /* 106b07fc jmp dword ptr [edx*4 + 0x106b0d3d] */
  switch (EDX) {
    case 0: goto L_106b0d16;
    case 1: goto L_106b0825;
    case 2: goto L_106b086b;
    case 3: goto L_106b09b8;
    case 4: goto L_106b09e0;
    case 5: goto L_106b0a7f;
    case 6: goto L_106b0aeb;
    case 7: goto L_106b0b14;
    case 8: goto L_106b0b55;
    case 9: goto L_106b0c37;
    case 10: goto L_106b0c9e;
    case 11: goto L_106b0ceb;
    case 12: goto L_106b0803;
    case 13: goto L_106b0848;
    case 14: goto L_106b088e;
    case 15: goto L_106b098e;
    case 16: goto L_106b0a25;
    case 17: goto L_106b0a52;
    case 18: goto L_106b0aa7;
    case 19: goto L_106b0b2b;
    case 20: goto L_106b0bd9;
    case 21: goto L_106b0c68;
    case 22: goto L_106b0d38;
    default: x86_unimpl("switch@0x106b07fc out of table"); return;
  }
L_106b0803:;
  /* 106b0803 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0806 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0807 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b080a push edx */
  push32((uint32_t)(EDX));
  /* 106b080b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b080e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 106b0811 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0814 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 106b0817 push eax */
  push32((uint32_t)(EAX));
  /* 106b0818 call 0x106b0df0 */
  push32(0x106b081du); f_106b0df0();
  /* 106b081d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0820 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0825:;
  /* 106b0825 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0828 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0829 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b082c push edx */
  push32((uint32_t)(EDX));
  /* 106b082d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0830 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 106b0833 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0836 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 106b083a push eax */
  push32((uint32_t)(EAX));
  /* 106b083b call 0x106b0df0 */
  push32(0x106b0840u); f_106b0df0();
  /* 106b0840 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0843 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0848:;
  /* 106b0848 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b084b push ecx */
  push32((uint32_t)(ECX));
  /* 106b084c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b084f push edx */
  push32((uint32_t)(EDX));
  /* 106b0850 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0853 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106b0856 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0859 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 106b085d push eax */
  push32((uint32_t)(EAX));
  /* 106b085e call 0x106b0df0 */
  push32(0x106b0863u); f_106b0df0();
  /* 106b0863 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0866 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b086b:;
  /* 106b086b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b086e push ecx */
  push32((uint32_t)(ECX));
  /* 106b086f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0872 push edx */
  push32((uint32_t)(EDX));
  /* 106b0873 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0876 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106b0879 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b087c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 106b0880 push eax */
  push32((uint32_t)(EAX));
  /* 106b0881 call 0x106b0df0 */
  push32(0x106b0886u); f_106b0df0();
  /* 106b0886 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0889 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b088e:;
  /* 106b088e cmp dword ptr [0x106cf7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0895 je 0x106b0916 */
  if (C.zf) goto L_106b0916;
  /* 106b0897 mov dword ptr [0x106cf7f8], 0 */
  w32((uint32_t)(0x106cf7f8), (0x0u));
  /* 106b08a1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b08a4 push ecx */
  push32((uint32_t)(ECX));
  /* 106b08a5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b08a8 push edx */
  push32((uint32_t)(EDX));
  /* 106b08a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b08ac push eax */
  push32((uint32_t)(EAX));
  /* 106b08ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b08b0 push ecx */
  push32((uint32_t)(ECX));
  /* 106b08b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b08b4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 106b08ba push eax */
  push32((uint32_t)(EAX));
  /* 106b08bb call 0x106b0fa0 */
  push32(0x106b08c0u); f_106b0fa0();
  /* 106b08c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b08c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b08c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b08c9 jne 0x106b08d0 */
  if (!C.zf) goto L_106b08d0;
  /* 106b08cb jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b08d0:;
  /* 106b08d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b08d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b08d5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 106b08d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b08db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b08dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b08e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b08e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106b08e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b08e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b08ea sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b08ed mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b08f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106b08f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b08f5 push ecx */
  push32((uint32_t)(ECX));
  /* 106b08f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b08f9 push edx */
  push32((uint32_t)(EDX));
  /* 106b08fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b08fd push eax */
  push32((uint32_t)(EAX));
  /* 106b08fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0901 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0902 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0905 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 106b090b push eax */
  push32((uint32_t)(EAX));
  /* 106b090c call 0x106b0fa0 */
  push32(0x106b0911u); f_106b0fa0();
  /* 106b0911 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0914 jmp 0x106b0989 */
  goto L_106b0989;
L_106b0916:;
  /* 106b0916 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0919 push ecx */
  push32((uint32_t)(ECX));
  /* 106b091a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b091d push edx */
  push32((uint32_t)(EDX));
  /* 106b091e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0921 push eax */
  push32((uint32_t)(EAX));
  /* 106b0922 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0925 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0926 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0929 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 106b092f push eax */
  push32((uint32_t)(EAX));
  /* 106b0930 call 0x106b0fa0 */
  push32(0x106b0935u); f_106b0fa0();
  /* 106b0935 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0938 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b093b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b093e jne 0x106b0945 */
  if (!C.zf) goto L_106b0945;
  /* 106b0940 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0945:;
  /* 106b0945 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0948 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b094a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 106b094d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0950 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b0952 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0955 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0958 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106b095a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b095d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b095f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0962 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0965 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106b0967 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b096a push ecx */
  push32((uint32_t)(ECX));
  /* 106b096b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b096e push edx */
  push32((uint32_t)(EDX));
  /* 106b096f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0972 push eax */
  push32((uint32_t)(EAX));
  /* 106b0973 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0976 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0977 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b097a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 106b0980 push eax */
  push32((uint32_t)(EAX));
  /* 106b0981 call 0x106b0fa0 */
  push32(0x106b0986u); f_106b0fa0();
  /* 106b0986 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106b0989:;
  /* 106b0989 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b098e:;
  /* 106b098e mov ecx, dword ptr [0x106cf7f8] */
  ECX = (r32((uint32_t)(0x106cf7f8)));
  /* 106b0994 mov dword ptr [0x106cf808], ecx */
  w32((uint32_t)(0x106cf808), (ECX));
  /* 106b099a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b099d push edx */
  push32((uint32_t)(EDX));
  /* 106b099e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b09a1 push eax */
  push32((uint32_t)(EAX));
  /* 106b09a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b09a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b09a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106b09aa push edx */
  push32((uint32_t)(EDX));
  /* 106b09ab call 0x106b0e40 */
  push32(0x106b09b0u); f_106b0e40();
  /* 106b09b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b09b3 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b09b8:;
  /* 106b09b8 mov eax, dword ptr [0x106cf7f8] */
  EAX = (r32((uint32_t)(0x106cf7f8)));
  /* 106b09bd mov dword ptr [0x106cf808], eax */
  w32((uint32_t)(0x106cf808), (EAX));
  /* 106b09c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b09c5 push ecx */
  push32((uint32_t)(ECX));
  /* 106b09c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b09c9 push edx */
  push32((uint32_t)(EDX));
  /* 106b09ca push 2 */
  push32((uint32_t)(0x2u));
  /* 106b09cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b09cf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106b09d2 push ecx */
  push32((uint32_t)(ECX));
  /* 106b09d3 call 0x106b0e40 */
  push32(0x106b09d8u); f_106b0e40();
  /* 106b09d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b09db jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b09e0:;
  /* 106b09e0 mov edx, dword ptr [0x106cf7f8] */
  EDX = (r32((uint32_t)(0x106cf7f8)));
  /* 106b09e6 mov dword ptr [0x106cf808], edx */
  w32((uint32_t)(0x106cf808), (EDX));
  /* 106b09ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b09ef mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 106b09f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106b09f3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 106b09f8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106b09fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106b09fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0a01 jne 0x106b0a0a */
  if (!C.zf) goto L_106b0a0a;
  /* 106b0a03 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_106b0a0a:;
  /* 106b0a0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0a0d push edx */
  push32((uint32_t)(EDX));
  /* 106b0a0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0a11 push eax */
  push32((uint32_t)(EAX));
  /* 106b0a12 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b0a14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0a17 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0a18 call 0x106b0e40 */
  push32(0x106b0a1du); f_106b0e40();
  /* 106b0a1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0a20 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0a25:;
  /* 106b0a25 mov edx, dword ptr [0x106cf7f8] */
  EDX = (r32((uint32_t)(0x106cf7f8)));
  /* 106b0a2b mov dword ptr [0x106cf808], edx */
  w32((uint32_t)(0x106cf808), (EDX));
  /* 106b0a31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0a34 push eax */
  push32((uint32_t)(EAX));
  /* 106b0a35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0a38 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0a39 push 3 */
  push32((uint32_t)(0x3u));
  /* 106b0a3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0a3e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106b0a41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0a44 push eax */
  push32((uint32_t)(EAX));
  /* 106b0a45 call 0x106b0e40 */
  push32(0x106b0a4au); f_106b0e40();
  /* 106b0a4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0a4d jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0a52:;
  /* 106b0a52 mov ecx, dword ptr [0x106cf7f8] */
  ECX = (r32((uint32_t)(0x106cf7f8)));
  /* 106b0a58 mov dword ptr [0x106cf808], ecx */
  w32((uint32_t)(0x106cf808), (ECX));
  /* 106b0a5e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0a61 push edx */
  push32((uint32_t)(EDX));
  /* 106b0a62 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0a65 push eax */
  push32((uint32_t)(EAX));
  /* 106b0a66 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b0a68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0a6b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106b0a6e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0a71 push edx */
  push32((uint32_t)(EDX));
  /* 106b0a72 call 0x106b0e40 */
  push32(0x106b0a77u); f_106b0e40();
  /* 106b0a77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0a7a jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0a7f:;
  /* 106b0a7f mov eax, dword ptr [0x106cf7f8] */
  EAX = (r32((uint32_t)(0x106cf7f8)));
  /* 106b0a84 mov dword ptr [0x106cf808], eax */
  w32((uint32_t)(0x106cf808), (EAX));
  /* 106b0a89 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0a8c push ecx */
  push32((uint32_t)(ECX));
  /* 106b0a8d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0a90 push edx */
  push32((uint32_t)(EDX));
  /* 106b0a91 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b0a93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0a96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106b0a99 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0a9a call 0x106b0e40 */
  push32(0x106b0a9fu); f_106b0e40();
  /* 106b0a9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0aa2 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0aa7:;
  /* 106b0aa7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0aaa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0aae jg 0x106b0acc */
  if ((!C.zf&&C.sf==C.of)) goto L_106b0acc;
  /* 106b0ab0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0ab3 push eax */
  push32((uint32_t)(EAX));
  /* 106b0ab4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0ab8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0abb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 106b0ac1 push eax */
  push32((uint32_t)(EAX));
  /* 106b0ac2 call 0x106b0df0 */
  push32(0x106b0ac7u); f_106b0df0();
  /* 106b0ac7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0aca jmp 0x106b0ae6 */
  goto L_106b0ae6;
L_106b0acc:;
  /* 106b0acc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0acf push ecx */
  push32((uint32_t)(ECX));
  /* 106b0ad0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0ad3 push edx */
  push32((uint32_t)(EDX));
  /* 106b0ad4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0ad7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 106b0add push ecx */
  push32((uint32_t)(ECX));
  /* 106b0ade call 0x106b0df0 */
  push32(0x106b0ae3u); f_106b0df0();
  /* 106b0ae3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106b0ae6:;
  /* 106b0ae6 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0aeb:;
  /* 106b0aeb mov edx, dword ptr [0x106cf7f8] */
  EDX = (r32((uint32_t)(0x106cf7f8)));
  /* 106b0af1 mov dword ptr [0x106cf808], edx */
  w32((uint32_t)(0x106cf808), (EDX));
  /* 106b0af7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0afa push eax */
  push32((uint32_t)(EAX));
  /* 106b0afb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0afe push ecx */
  push32((uint32_t)(ECX));
  /* 106b0aff push 2 */
  push32((uint32_t)(0x2u));
  /* 106b0b01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0b04 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b0b06 push eax */
  push32((uint32_t)(EAX));
  /* 106b0b07 call 0x106b0e40 */
  push32(0x106b0b0cu); f_106b0e40();
  /* 106b0b0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0b0f jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0b14:;
  /* 106b0b14 mov ecx, dword ptr [0x106cf7f8] */
  ECX = (r32((uint32_t)(0x106cf7f8)));
  /* 106b0b1a mov dword ptr [0x106cf808], ecx */
  w32((uint32_t)(0x106cf808), (ECX));
  /* 106b0b20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0b23 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 106b0b26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106b0b29 jmp 0x106b0b7d */
  goto L_106b0b7d;
L_106b0b2b:;
  /* 106b0b2b mov ecx, dword ptr [0x106cf7f8] */
  ECX = (r32((uint32_t)(0x106cf7f8)));
  /* 106b0b31 mov dword ptr [0x106cf808], ecx */
  w32((uint32_t)(0x106cf808), (ECX));
  /* 106b0b37 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0b3a push edx */
  push32((uint32_t)(EDX));
  /* 106b0b3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0b3e push eax */
  push32((uint32_t)(EAX));
  /* 106b0b3f push 1 */
  push32((uint32_t)(0x1u));
  /* 106b0b41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0b44 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106b0b47 push edx */
  push32((uint32_t)(EDX));
  /* 106b0b48 call 0x106b0e40 */
  push32(0x106b0b4du); f_106b0e40();
  /* 106b0b4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0b50 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0b55:;
  /* 106b0b55 mov eax, dword ptr [0x106cf7f8] */
  EAX = (r32((uint32_t)(0x106cf7f8)));
  /* 106b0b5a mov dword ptr [0x106cf808], eax */
  w32((uint32_t)(0x106cf808), (EAX));
  /* 106b0b5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0b62 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0b66 jne 0x106b0b71 */
  if (!C.zf) goto L_106b0b71;
  /* 106b0b68 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 106b0b6f jmp 0x106b0b7d */
  goto L_106b0b7d;
L_106b0b71:;
  /* 106b0b71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0b74 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 106b0b77 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0b7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106b0b7d:;
  /* 106b0b7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0b80 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 106b0b83 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0b86 jge 0x106b0b91 */
  if ((C.sf==C.of)) goto L_106b0b91;
  /* 106b0b88 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106b0b8f jmp 0x106b0bbe */
  goto L_106b0bbe;
L_106b0b91:;
  /* 106b0b91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0b94 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 106b0b97 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106b0b98 mov ecx, 7 */
  ECX = (0x7u);
  /* 106b0b9d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106b0b9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106b0ba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0ba5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106b0ba8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106b0ba9 mov ecx, 7 */
  ECX = (0x7u);
  /* 106b0bae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106b0bb0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0bb3 jl 0x106b0bbe */
  if ((C.sf!=C.of)) goto L_106b0bbe;
  /* 106b0bb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0bb8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0bbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106b0bbe:;
  /* 106b0bbe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0bc1 push eax */
  push32((uint32_t)(EAX));
  /* 106b0bc2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0bc5 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0bc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b0bc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0bcb push edx */
  push32((uint32_t)(EDX));
  /* 106b0bcc call 0x106b0e40 */
  push32(0x106b0bd1u); f_106b0e40();
  /* 106b0bd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0bd4 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0bd9:;
  /* 106b0bd9 cmp dword ptr [0x106cf7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0be0 je 0x106b0c10 */
  if (C.zf) goto L_106b0c10;
  /* 106b0be2 mov dword ptr [0x106cf7f8], 0 */
  w32((uint32_t)(0x106cf7f8), (0x0u));
  /* 106b0bec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0bef push eax */
  push32((uint32_t)(EAX));
  /* 106b0bf0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0bf4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0bf7 push edx */
  push32((uint32_t)(EDX));
  /* 106b0bf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0bfb push eax */
  push32((uint32_t)(EAX));
  /* 106b0bfc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0bff mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 106b0c05 push edx */
  push32((uint32_t)(EDX));
  /* 106b0c06 call 0x106b0fa0 */
  push32(0x106b0c0bu); f_106b0fa0();
  /* 106b0c0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0c0e jmp 0x106b0c32 */
  goto L_106b0c32;
L_106b0c10:;
  /* 106b0c10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0c13 push eax */
  push32((uint32_t)(EAX));
  /* 106b0c14 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0c17 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0c18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0c1b push edx */
  push32((uint32_t)(EDX));
  /* 106b0c1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0c1f push eax */
  push32((uint32_t)(EAX));
  /* 106b0c20 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0c23 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 106b0c29 push edx */
  push32((uint32_t)(EDX));
  /* 106b0c2a call 0x106b0fa0 */
  push32(0x106b0c2fu); f_106b0fa0();
  /* 106b0c2f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106b0c32:;
  /* 106b0c32 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0c37:;
  /* 106b0c37 mov dword ptr [0x106cf7f8], 0 */
  w32((uint32_t)(0x106cf7f8), (0x0u));
  /* 106b0c41 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0c44 push eax */
  push32((uint32_t)(EAX));
  /* 106b0c45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0c48 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0c49 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0c4c push edx */
  push32((uint32_t)(EDX));
  /* 106b0c4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0c50 push eax */
  push32((uint32_t)(EAX));
  /* 106b0c51 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b0c54 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 106b0c5a push edx */
  push32((uint32_t)(EDX));
  /* 106b0c5b call 0x106b0fa0 */
  push32(0x106b0c60u); f_106b0fa0();
  /* 106b0c60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0c63 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0c68:;
  /* 106b0c68 mov eax, dword ptr [0x106cf7f8] */
  EAX = (r32((uint32_t)(0x106cf7f8)));
  /* 106b0c6d mov dword ptr [0x106cf808], eax */
  w32((uint32_t)(0x106cf808), (EAX));
  /* 106b0c72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0c75 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 106b0c78 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106b0c79 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 106b0c7e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106b0c80 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106b0c83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0c86 push edx */
  push32((uint32_t)(EDX));
  /* 106b0c87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0c8a push eax */
  push32((uint32_t)(EAX));
  /* 106b0c8b push 2 */
  push32((uint32_t)(0x2u));
  /* 106b0c8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0c90 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0c91 call 0x106b0e40 */
  push32(0x106b0c96u); f_106b0e40();
  /* 106b0c96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0c99 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0c9e:;
  /* 106b0c9e mov edx, dword ptr [0x106cf7f8] */
  EDX = (r32((uint32_t)(0x106cf7f8)));
  /* 106b0ca4 mov dword ptr [0x106cf808], edx */
  w32((uint32_t)(0x106cf808), (EDX));
  /* 106b0caa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0cad mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 106b0cb0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106b0cb1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 106b0cb6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106b0cb8 mov ecx, eax */
  ECX = (EAX);
  /* 106b0cba add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0cbd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b0cc0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0cc3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106b0cc6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106b0cc7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 106b0ccc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106b0cce add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0cd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106b0cd3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0cd6 push eax */
  push32((uint32_t)(EAX));
  /* 106b0cd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0cda push ecx */
  push32((uint32_t)(ECX));
  /* 106b0cdb push 4 */
  push32((uint32_t)(0x4u));
  /* 106b0cdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0ce0 push edx */
  push32((uint32_t)(EDX));
  /* 106b0ce1 call 0x106b0e40 */
  push32(0x106b0ce6u); f_106b0e40();
  /* 106b0ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0ce9 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0ceb:;
  /* 106b0ceb call 0x106b1e00 */
  push32(0x106b0cf0u); f_106b1e00();
  /* 106b0cf0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0cf3 push eax */
  push32((uint32_t)(EAX));
  /* 106b0cf4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0cf8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0cfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b0cfd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0d01 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 106b0d04 mov ecx, dword ptr [eax*4 + 0x106cee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x106cee1c)));
  /* 106b0d0b push ecx */
  push32((uint32_t)(ECX));
  /* 106b0d0c call 0x106b0df0 */
  push32(0x106b0d11u); f_106b0df0();
  /* 106b0d11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0d14 jmp 0x106b0d38 */
  goto L_106b0d38;
L_106b0d16:;
  /* 106b0d16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0d19 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b0d1b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 106b0d1e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0d21 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b0d23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0d26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0d29 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106b0d2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0d2e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b0d30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0d33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0d36 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106b0d38:;
  /* 106b0d38 pop esi */
  ESI = (pop32());
  /* 106b0d39 mov esp, ebp */
  ESP = (EBP);
  /* 106b0d3b pop ebp */
  EBP = (pop32());
  /* 106b0d3c ret  */
  ESPCHK(0x106b07d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x106b0df0 (72 bytes, 30 insns) */
void f_106b0df0(void) {
  FTRACE(0x106b0df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b0df0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b0df1 mov ebp, esp */
  EBP = (ESP);
L_106b0df3:;
  /* 106b0df3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0df6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0df9 je 0x106b0e36 */
  if (C.zf) goto L_106b0e36;
  /* 106b0dfb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0dfe movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106b0e01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b0e03 je 0x106b0e36 */
  if (C.zf) goto L_106b0e36;
  /* 106b0e05 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0e08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b0e0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0e0d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b0e0f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106b0e11 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0e14 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b0e16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0e19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0e1c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106b0e1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0e21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0e24 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 106b0e27 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0e2a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b0e2c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0e2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0e32 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106b0e34 jmp 0x106b0df3 */
  goto L_106b0df3;
L_106b0e36:;
  /* 106b0e36 pop ebp */
  EBP = (pop32());
  /* 106b0e37 ret  */
  ESPCHK(0x106b0df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e40 @ 0x106b0e40 (173 bytes, 64 insns) */
void f_106b0e40(void) {
  FTRACE(0x106b0e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b0e40 push ebp */
  push32((uint32_t)(EBP));
  /* 106b0e41 mov ebp, esp */
  EBP = (ESP);
  /* 106b0e43 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0e44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106b0e4b cmp dword ptr [0x106cf808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0e52 je 0x106b0e6a */
  if (C.zf) goto L_106b0e6a;
  /* 106b0e54 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0e57 push eax */
  push32((uint32_t)(EAX));
  /* 106b0e58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0e5b push ecx */
  push32((uint32_t)(ECX));
  /* 106b0e5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0e5f push edx */
  push32((uint32_t)(EDX));
  /* 106b0e60 call 0x106b0ef0 */
  push32(0x106b0e65u); f_106b0ef0();
  /* 106b0e65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0e68 jmp 0x106b0ee9 */
  goto L_106b0ee9;
L_106b0e6a:;
  /* 106b0e6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0e6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0e70 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0e72 jae 0x106b0ee0 */
  if (!C.cf) goto L_106b0ee0;
  /* 106b0e74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0e77 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0e7a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 106b0e7d jmp 0x106b0e88 */
  goto L_106b0e88;
L_106b0e7f:;
  /* 106b0e7f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0e82 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0e85 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_106b0e88:;
  /* 106b0e88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0e8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0e8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106b0e90 je 0x106b0ec4 */
  if (C.zf) goto L_106b0ec4;
  /* 106b0e92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0e95 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106b0e96 mov ecx, 0xa */
  ECX = (0xau);
  /* 106b0e9b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106b0e9d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0ea0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0ea3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b0ea5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0ea8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 106b0eab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0eae cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106b0eaf mov ecx, 0xa */
  ECX = (0xau);
  /* 106b0eb4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106b0eb6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106b0eb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0ebc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0ebf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106b0ec2 jmp 0x106b0e7f */
  goto L_106b0e7f;
L_106b0ec4:;
  /* 106b0ec4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0ec7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b0ec9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0ecc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0ecf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106b0ed1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0ed4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b0ed6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0ed9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0edc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106b0ede jmp 0x106b0ee9 */
  goto L_106b0ee9;
L_106b0ee0:;
  /* 106b0ee0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0ee3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_106b0ee9:;
  /* 106b0ee9 mov esp, ebp */
  ESP = (EBP);
  /* 106b0eeb pop ebp */
  EBP = (pop32());
  /* 106b0eec ret  */
  ESPCHK(0x106b0e40u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x106b0ef0 (172 bytes, 65 insns) */
void f_106b0ef0(void) {
  FTRACE(0x106b0ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b0ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b0ef1 mov ebp, esp */
  EBP = (ESP);
  /* 106b0ef3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0ef6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0ef9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b0efb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106b0efe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0f01 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0f04 jbe 0x106b0f4b */
  if ((C.cf||C.zf)) goto L_106b0f4b;
L_106b0f06:;
  /* 106b0f06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0f09 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106b0f0a mov ecx, 0xa */
  ECX = (0xau);
  /* 106b0f0f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106b0f11 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0f14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0f17 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106b0f19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0f1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0f1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106b0f22 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0f25 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b0f27 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0f2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0f2d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106b0f2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0f32 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106b0f33 mov ecx, 0xa */
  ECX = (0xau);
  /* 106b0f38 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106b0f3a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106b0f3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0f41 jle 0x106b0f4b */
  if ((C.zf||C.sf!=C.of)) goto L_106b0f4b;
  /* 106b0f43 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b0f46 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0f49 ja 0x106b0f06 */
  if ((!C.cf&&!C.zf)) goto L_106b0f06;
L_106b0f4b:;
  /* 106b0f4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0f4e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b0f50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106b0f53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b0f56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0f59 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106b0f5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0f5e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0f61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106b0f64:;
  /* 106b0f64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0f67 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b0f69 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 106b0f6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0f6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b0f72 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b0f74 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106b0f76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0f79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0f7c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106b0f7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b0f82 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 106b0f85 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 106b0f87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b0f8a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0f8d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106b0f90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b0f93 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0f96 jb 0x106b0f64 */
  if (C.cf) goto L_106b0f64;
  /* 106b0f98 mov esp, ebp */
  ESP = (EBP);
  /* 106b0f9a pop ebp */
  EBP = (pop32());
  /* 106b0f9b ret  */
  ESPCHK(0x106b0ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fa0 @ 0x106b0fa0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_106b0fa0(void) {
  FTRACE(0x106b0fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b0fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b0fa1 mov ebp, esp */
  EBP = (ESP);
  /* 106b0fa3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_106b0fa6:;
  /* 106b0fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0fa9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106b0fac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106b0fae je 0x106b141c */
  if (C.zf) goto L_106b141c;
  /* 106b0fb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b0fb7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0fba je 0x106b141c */
  if (C.zf) goto L_106b141c;
  /* 106b0fc0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 106b0fc4 mov dword ptr [0x106cf808], 0 */
  w32((uint32_t)(0x106cf808), (0x0u));
  /* 106b0fce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106b0fd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0fd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106b0fdb jmp 0x106b0fe6 */
  goto L_106b0fe6;
L_106b0fdd:;
  /* 106b0fdd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0fe0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0fe3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_106b0fe6:;
  /* 106b0fe6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0fe9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106b0fec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0fef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106b0ff2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0ff5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0ff8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106b0ffb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b0ffd jne 0x106b1001 */
  if (!C.zf) goto L_106b1001;
  /* 106b0fff jmp 0x106b0fdd */
  goto L_106b0fdd;
L_106b1001:;
  /* 106b1001 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b1004 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b1007 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106b100a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b100d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106b1010 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106b1013 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b1016 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b1019 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106b101c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1020 ja 0x106b1370 */
  if ((!C.cf&&!C.zf)) goto L_106b1370;
  /* 106b1026 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b1029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b102b mov al, byte ptr [ecx + 0x106b144c] */
  AL = (r8((uint32_t)(ECX + 0x106b144c)));
  /* 106b1031 jmp dword ptr [eax*4 + 0x106b1420] */
  switch (EAX) {
    case 0: goto L_106b128f;
    case 1: goto L_106b1173;
    case 2: goto L_106b10fe;
    case 3: goto L_106b1038;
    case 4: goto L_106b1076;
    case 5: goto L_106b10d7;
    case 6: goto L_106b1125;
    case 7: goto L_106b114c;
    case 8: goto L_106b11ba;
    case 9: goto L_106b10b4;
    case 10: goto L_106b1370;
    default: x86_unimpl("switch@0x106b1031 out of table"); return;
  }
L_106b1038:;
  /* 106b1038 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b103b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106b103e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106b1041 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b1044 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106b1047 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b104b ja 0x106b1071 */
  if ((!C.cf&&!C.zf)) goto L_106b1071;
  /* 106b104d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106b1050 jmp dword ptr [ecx*4 + 0x106b149f] */
  switch (ECX) {
    case 0: goto L_106b1057;
    case 1: goto L_106b1061;
    case 2: goto L_106b1067;
    case 3: goto L_106b106d;
    case 4: goto L_106b1095;
    case 5: goto L_106b109f;
    case 6: goto L_106b10a5;
    case 7: goto L_106b10ab;
    default: x86_unimpl("switch@0x106b1050 out of table"); return;
  }
L_106b1057:;
  /* 106b1057 mov dword ptr [0x106cf808], 1 */
  w32((uint32_t)(0x106cf808), (0x1u));
L_106b1061:;
  /* 106b1061 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 106b1065 jmp 0x106b1071 */
  goto L_106b1071;
L_106b1067:;
  /* 106b1067 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 106b106b jmp 0x106b1071 */
  goto L_106b1071;
L_106b106d:;
  /* 106b106d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_106b1071:;
  /* 106b1071 jmp 0x106b1370 */
  goto L_106b1370;
L_106b1076:;
  /* 106b1076 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b1079 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106b107c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106b107f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b1082 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106b1085 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1089 ja 0x106b10af */
  if ((!C.cf&&!C.zf)) goto L_106b10af;
  /* 106b108b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106b108e jmp dword ptr [ecx*4 + 0x106b14af] */
  switch (ECX) {
    case 0: goto L_106b1095;
    case 1: goto L_106b109f;
    case 2: goto L_106b10a5;
    case 3: goto L_106b10ab;
    default: x86_unimpl("switch@0x106b108e out of table"); return;
  }
L_106b1095:;
  /* 106b1095 mov dword ptr [0x106cf808], 1 */
  w32((uint32_t)(0x106cf808), (0x1u));
L_106b109f:;
  /* 106b109f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 106b10a3 jmp 0x106b10af */
  goto L_106b10af;
L_106b10a5:;
  /* 106b10a5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 106b10a9 jmp 0x106b10af */
  goto L_106b10af;
L_106b10ab:;
  /* 106b10ab mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_106b10af:;
  /* 106b10af jmp 0x106b1370 */
  goto L_106b1370;
L_106b10b4:;
  /* 106b10b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b10b7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 106b10ba cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b10be je 0x106b10c8 */
  if (C.zf) goto L_106b10c8;
  /* 106b10c0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b10c4 je 0x106b10ce */
  if (C.zf) goto L_106b10ce;
  /* 106b10c6 jmp 0x106b10d2 */
  goto L_106b10d2;
L_106b10c8:;
  /* 106b10c8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 106b10cc jmp 0x106b10d2 */
  goto L_106b10d2;
L_106b10ce:;
  /* 106b10ce mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_106b10d2:;
  /* 106b10d2 jmp 0x106b1370 */
  goto L_106b1370;
L_106b10d7:;
  /* 106b10d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b10da mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106b10dd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b10e1 je 0x106b10eb */
  if (C.zf) goto L_106b10eb;
  /* 106b10e3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b10e7 je 0x106b10f5 */
  if (C.zf) goto L_106b10f5;
  /* 106b10e9 jmp 0x106b10f9 */
  goto L_106b10f9;
L_106b10eb:;
  /* 106b10eb mov dword ptr [0x106cf808], 1 */
  w32((uint32_t)(0x106cf808), (0x1u));
L_106b10f5:;
  /* 106b10f5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_106b10f9:;
  /* 106b10f9 jmp 0x106b1370 */
  goto L_106b1370;
L_106b10fe:;
  /* 106b10fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b1101 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 106b1104 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1108 je 0x106b1112 */
  if (C.zf) goto L_106b1112;
  /* 106b110a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b110e je 0x106b111c */
  if (C.zf) goto L_106b111c;
  /* 106b1110 jmp 0x106b1120 */
  goto L_106b1120;
L_106b1112:;
  /* 106b1112 mov dword ptr [0x106cf808], 1 */
  w32((uint32_t)(0x106cf808), (0x1u));
L_106b111c:;
  /* 106b111c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_106b1120:;
  /* 106b1120 jmp 0x106b1370 */
  goto L_106b1370;
L_106b1125:;
  /* 106b1125 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b1128 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 106b112b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b112f je 0x106b1139 */
  if (C.zf) goto L_106b1139;
  /* 106b1131 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1135 je 0x106b1143 */
  if (C.zf) goto L_106b1143;
  /* 106b1137 jmp 0x106b1147 */
  goto L_106b1147;
L_106b1139:;
  /* 106b1139 mov dword ptr [0x106cf808], 1 */
  w32((uint32_t)(0x106cf808), (0x1u));
L_106b1143:;
  /* 106b1143 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_106b1147:;
  /* 106b1147 jmp 0x106b1370 */
  goto L_106b1370;
L_106b114c:;
  /* 106b114c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b114f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 106b1152 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1156 je 0x106b1160 */
  if (C.zf) goto L_106b1160;
  /* 106b1158 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b115c je 0x106b116a */
  if (C.zf) goto L_106b116a;
  /* 106b115e jmp 0x106b116e */
  goto L_106b116e;
L_106b1160:;
  /* 106b1160 mov dword ptr [0x106cf808], 1 */
  w32((uint32_t)(0x106cf808), (0x1u));
L_106b116a:;
  /* 106b116a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_106b116e:;
  /* 106b116e jmp 0x106b1370 */
  goto L_106b1370;
L_106b1173:;
  /* 106b1173 push 0x106cb874 */
  push32((uint32_t)(0x106cb874u));
  /* 106b1178 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b117b push ecx */
  push32((uint32_t)(ECX));
  /* 106b117c call 0x106b19d0 */
  push32(0x106b1181u); f_106b19d0();
  /* 106b1181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b1186 jne 0x106b1193 */
  if (!C.zf) goto L_106b1193;
  /* 106b1188 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b118b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b118e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106b1191 jmp 0x106b11b1 */
  goto L_106b11b1;
L_106b1193:;
  /* 106b1193 push 0x106cb870 */
  push32((uint32_t)(0x106cb870u));
  /* 106b1198 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b119b push eax */
  push32((uint32_t)(EAX));
  /* 106b119c call 0x106b19d0 */
  push32(0x106b11a1u); f_106b19d0();
  /* 106b11a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b11a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b11a6 jne 0x106b11b1 */
  if (!C.zf) goto L_106b11b1;
  /* 106b11a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b11ab add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b11ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106b11b1:;
  /* 106b11b1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 106b11b5 jmp 0x106b1370 */
  goto L_106b1370;
L_106b11ba:;
  /* 106b11ba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b11bd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b11c1 jg 0x106b11d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_106b11d1;
  /* 106b11c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b11c6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 106b11cc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106b11cf jmp 0x106b11dd */
  goto L_106b11dd;
L_106b11d1:;
  /* 106b11d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b11d4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 106b11da mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_106b11dd:;
  /* 106b11dd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b11e1 jle 0x106b1284 */
  if ((C.zf||C.sf!=C.of)) goto L_106b1284;
  /* 106b11e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b11ea cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b11ed jbe 0x106b1284 */
  if ((C.cf||C.zf)) goto L_106b1284;
  /* 106b11f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b11f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b11f8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b11fa mov ecx, dword ptr [0x106cdc98] */
  ECX = (r32((uint32_t)(0x106cdc98)));
  /* 106b1200 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b1202 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106b1206 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 106b120c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b120e je 0x106b1247 */
  if (C.zf) goto L_106b1247;
  /* 106b1210 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b1213 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1216 jbe 0x106b1247 */
  if ((C.cf||C.zf)) goto L_106b1247;
  /* 106b1218 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b121b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b121d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b1220 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106b1222 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 106b1224 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1227 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b1229 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b122c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b122f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106b1231 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b1234 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1237 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106b123a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b123d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b123f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b1242 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b1245 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106b1247:;
  /* 106b1247 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b124a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b124c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b124f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b1251 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106b1253 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1256 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b1258 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b125b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b125e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106b1260 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b1263 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1266 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106b1269 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b126c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b126e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b1271 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b1274 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106b1276 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b1279 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b127c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106b127f jmp 0x106b11dd */
  goto L_106b11dd;
L_106b1284:;
  /* 106b1284 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b1287 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106b128a jmp 0x106b0fa6 */
  goto L_106b0fa6;
L_106b128f:;
  /* 106b128f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b1292 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106b1295 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106b1297 je 0x106b1362 */
  if (C.zf) goto L_106b1362;
  /* 106b129d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b12a0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b12a3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_106b12a6:;
  /* 106b12a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b12a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106b12ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106b12ae je 0x106b1360 */
  if (C.zf) goto L_106b1360;
  /* 106b12b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b12b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b12ba je 0x106b1360 */
  if (C.zf) goto L_106b1360;
  /* 106b12c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b12c3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106b12c6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b12c9 jne 0x106b12d9 */
  if (!C.zf) goto L_106b12d9;
  /* 106b12cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b12ce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b12d1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106b12d4 jmp 0x106b1360 */
  goto L_106b1360;
L_106b12d9:;
  /* 106b12d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b12dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b12de mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106b12e0 mov edx, dword ptr [0x106cdc98] */
  EDX = (r32((uint32_t)(0x106cdc98)));
  /* 106b12e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b12e8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 106b12ec and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 106b12f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b12f3 je 0x106b132c */
  if (C.zf) goto L_106b132c;
  /* 106b12f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b12f8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b12fb jbe 0x106b132c */
  if ((C.cf||C.zf)) goto L_106b132c;
  /* 106b12fd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1300 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b1302 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1305 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106b1307 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106b1309 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b130c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b130e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1311 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1314 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106b1316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1319 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b131c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106b131f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b1322 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b1324 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b1327 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b132a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106b132c:;
  /* 106b132c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b132f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b1331 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1334 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106b1336 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 106b1338 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b133b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b133d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1340 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1343 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106b1345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1348 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b134b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106b134e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b1351 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b1353 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b1356 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b1359 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106b135b jmp 0x106b12a6 */
  goto L_106b12a6;
L_106b1360:;
  /* 106b1360 jmp 0x106b136b */
  goto L_106b136b;
L_106b1362:;
  /* 106b1362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1365 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1368 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106b136b:;
  /* 106b136b jmp 0x106b0fa6 */
  goto L_106b0fa6;
L_106b1370:;
  /* 106b1370 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106b1374 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106b1376 je 0x106b139c */
  if (C.zf) goto L_106b139c;
  /* 106b1378 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b137b push edx */
  push32((uint32_t)(EDX));
  /* 106b137c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b137f push eax */
  push32((uint32_t)(EAX));
  /* 106b1380 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1383 push ecx */
  push32((uint32_t)(ECX));
  /* 106b1384 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b1387 push edx */
  push32((uint32_t)(EDX));
  /* 106b1388 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 106b138b push eax */
  push32((uint32_t)(EAX));
  /* 106b138c call 0x106b07d0 */
  push32(0x106b1391u); f_106b07d0();
  /* 106b1391 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1394 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b1397 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 106b139a jmp 0x106b1417 */
  goto L_106b1417;
L_106b139c:;
  /* 106b139c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b139f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b13a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b13a3 mov ecx, dword ptr [0x106cdc98] */
  ECX = (r32((uint32_t)(0x106cdc98)));
  /* 106b13a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b13ab mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106b13af and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 106b13b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b13b7 je 0x106b13e8 */
  if (C.zf) goto L_106b13e8;
  /* 106b13b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b13bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b13be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b13c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b13c3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106b13c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b13c8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b13ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b13cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b13d0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106b13d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b13d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b13d8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 106b13db mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b13de mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b13e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b13e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b13e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_106b13e8:;
  /* 106b13e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b13eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b13ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b13f0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106b13f2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106b13f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b13f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b13f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b13fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b13ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106b1401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1404 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1407 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106b140a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b140d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b140f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b1412 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b1415 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106b1417:;
  /* 106b1417 jmp 0x106b0fa6 */
  goto L_106b0fa6;
L_106b141c:;
  /* 106b141c mov esp, ebp */
  ESP = (EBP);
  /* 106b141e pop ebp */
  EBP = (pop32());
  /* 106b141f ret  */
  ESPCHK(0x106b0fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100114c0 @ 0x106b14c0 (650 bytes, 178 insns) */
void f_106b14c0(void) {
  FTRACE(0x106b14c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b14c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b14c1 mov ebp, esp */
  EBP = (ESP);
  /* 106b14c3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b14c9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b14cd jne 0x106b1629 */
  if (!C.zf) goto L_106b1629;
  /* 106b14d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b14d6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 106b14dc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 106b14e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106b14e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106b14ec mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 106b14f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b14f8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 106b14fe push edx */
  push32((uint32_t)(EDX));
  /* 106b14ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b1502 push eax */
  push32((uint32_t)(EAX));
  /* 106b1503 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1506 push ecx */
  push32((uint32_t)(ECX));
  /* 106b1507 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b150a push edx */
  push32((uint32_t)(EDX));
  /* 106b150b call 0x106b28e0 */
  push32(0x106b1510u); f_106b28e0();
  /* 106b1510 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1513 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106b1516 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b151a jne 0x106b15af */
  if (!C.zf) goto L_106b15af;
  /* 106b1520 call dword ptr [0x106d1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1304))), 0x106b1526u);
  /* 106b1526 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1529 je 0x106b1530 */
  if (C.zf) goto L_106b1530;
  /* 106b152b jmp 0x106b160d */
  goto L_106b160d;
L_106b1530:;
  /* 106b1530 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b1532 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b1534 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b1536 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1539 push eax */
  push32((uint32_t)(EAX));
  /* 106b153a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b153d push ecx */
  push32((uint32_t)(ECX));
  /* 106b153e call 0x106b28e0 */
  push32(0x106b1543u); f_106b28e0();
  /* 106b1543 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1546 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 106b154c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1553 jne 0x106b155a */
  if (!C.zf) goto L_106b155a;
  /* 106b1555 jmp 0x106b160d */
  goto L_106b160d;
L_106b155a:;
  /* 106b155a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 106b155c push 0x106cb87c */
  push32((uint32_t)(0x106cb87cu));
  /* 106b1561 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b1563 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 106b1569 push edx */
  push32((uint32_t)(EDX));
  /* 106b156a call 0x106a3300 */
  push32(0x106b156fu); f_106a3300();
  /* 106b156f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1572 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106b1575 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1579 jne 0x106b1580 */
  if (!C.zf) goto L_106b1580;
  /* 106b157b jmp 0x106b160d */
  goto L_106b160d;
L_106b1580:;
  /* 106b1580 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106b1587 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b1589 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 106b158f push eax */
  push32((uint32_t)(EAX));
  /* 106b1590 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b1593 push ecx */
  push32((uint32_t)(ECX));
  /* 106b1594 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1597 push edx */
  push32((uint32_t)(EDX));
  /* 106b1598 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b159b push eax */
  push32((uint32_t)(EAX));
  /* 106b159c call 0x106b28e0 */
  push32(0x106b15a1u); f_106b28e0();
  /* 106b15a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b15a4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106b15a7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b15ab jne 0x106b15af */
  if (!C.zf) goto L_106b15af;
  /* 106b15ad jmp 0x106b160d */
  goto L_106b160d;
L_106b15af:;
  /* 106b15af push 0x63 */
  push32((uint32_t)(0x63u));
  /* 106b15b1 push 0x106cb87c */
  push32((uint32_t)(0x106cb87cu));
  /* 106b15b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b15b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b15bb push ecx */
  push32((uint32_t)(ECX));
  /* 106b15bc call 0x106a3300 */
  push32(0x106b15c1u); f_106a3300();
  /* 106b15c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b15c4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 106b15ca mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106b15cc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 106b15d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b15d5 jne 0x106b15d9 */
  if (!C.zf) goto L_106b15d9;
  /* 106b15d7 jmp 0x106b160d */
  goto L_106b160d;
L_106b15d9:;
  /* 106b15d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b15dc push ecx */
  push32((uint32_t)(ECX));
  /* 106b15dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b15e0 push edx */
  push32((uint32_t)(EDX));
  /* 106b15e1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 106b15e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b15e9 push ecx */
  push32((uint32_t)(ECX));
  /* 106b15ea call 0x106a6b20 */
  push32(0x106b15efu); f_106a6b20();
  /* 106b15ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b15f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b15f6 je 0x106b1606 */
  if (C.zf) goto L_106b1606;
  /* 106b15f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b15fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b15fd push edx */
  push32((uint32_t)(EDX));
  /* 106b15fe call 0x106a3d90 */
  push32(0x106b1603u); f_106a3d90();
  /* 106b1603 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106b1606:;
  /* 106b1606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b1608 jmp 0x106b1746 */
  goto L_106b1746;
L_106b160d:;
  /* 106b160d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1611 je 0x106b1621 */
  if (C.zf) goto L_106b1621;
  /* 106b1613 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b1615 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b1618 push eax */
  push32((uint32_t)(EAX));
  /* 106b1619 call 0x106a3d90 */
  push32(0x106b161eu); f_106a3d90();
  /* 106b161e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106b1621:;
  /* 106b1621 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b1624 jmp 0x106b1746 */
  goto L_106b1746;
L_106b1629:;
  /* 106b1629 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b162d jne 0x106b1743 */
  if (!C.zf) goto L_106b1743;
  /* 106b1633 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 106b163d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b1640 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 106b1646 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b1648 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 106b164e push edx */
  push32((uint32_t)(EDX));
  /* 106b164f push 0x106cf720 */
  push32((uint32_t)(0x106cf720u));
  /* 106b1654 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1657 push eax */
  push32((uint32_t)(EAX));
  /* 106b1658 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b165b push ecx */
  push32((uint32_t)(ECX));
  /* 106b165c call 0x106b2740 */
  push32(0x106b1661u); f_106b2740();
  /* 106b1661 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1664 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b1666 jne 0x106b1670 */
  if (!C.zf) goto L_106b1670;
  /* 106b1668 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b166b jmp 0x106b1746 */
  goto L_106b1746;
L_106b1670:;
  /* 106b1670 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106b1676 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106b1679 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 106b1683 jmp 0x106b1694 */
  goto L_106b1694;
L_106b1685:;
  /* 106b1685 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106b168b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b168e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_106b1694:;
  /* 106b1694 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b169b jge 0x106b173f */
  if ((C.sf==C.of)) goto L_106b173f;
  /* 106b16a1 cmp dword ptr [0x106cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b16a8 jle 0x106b16db */
  if ((C.zf||C.sf!=C.of)) goto L_106b16db;
  /* 106b16aa push 4 */
  push32((uint32_t)(0x4u));
  /* 106b16ac mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106b16b2 mov dl, byte ptr [ecx*2 + 0x106cf720] */
  DL = (r8((uint32_t)(ECX*2 + 0x106cf720)));
  /* 106b16b9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 106b16bf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 106b16c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b16ca push eax */
  push32((uint32_t)(EAX));
  /* 106b16cb call 0x106a9310 */
  push32(0x106b16d0u); f_106a9310();
  /* 106b16d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b16d3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 106b16d9 jmp 0x106b170e */
  goto L_106b170e;
L_106b16db:;
  /* 106b16db mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106b16e1 mov dl, byte ptr [ecx*2 + 0x106cf720] */
  DL = (r8((uint32_t)(ECX*2 + 0x106cf720)));
  /* 106b16e8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 106b16ee mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 106b16f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b16f9 mov ecx, dword ptr [0x106cdc98] */
  ECX = (r32((uint32_t)(0x106cdc98)));
  /* 106b16ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b1701 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106b1705 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106b1708 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_106b170e:;
  /* 106b170e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1715 je 0x106b1738 */
  if (C.zf) goto L_106b1738;
  /* 106b1717 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106b171d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106b1720 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b1723 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 106b172a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 106b172e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106b1734 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106b1736 jmp 0x106b173a */
  goto L_106b173a;
L_106b1738:;
  /* 106b1738 jmp 0x106b173f */
  goto L_106b173f;
L_106b173a:;
  /* 106b173a jmp 0x106b1685 */
  goto L_106b1685;
L_106b173f:;
  /* 106b173f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b1741 jmp 0x106b1746 */
  goto L_106b1746;
L_106b1743:;
  /* 106b1743 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106b1746:;
  /* 106b1746 mov esp, ebp */
  ESP = (EBP);
  /* 106b1748 pop ebp */
  EBP = (pop32());
  /* 106b1749 ret  */
  ESPCHK(0x106b14c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011750 @ 0x106b1750 (10 bytes, 5 insns) */
void f_106b1750(void) {
  FTRACE(0x106b1750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b1750 push ebp */
  push32((uint32_t)(EBP));
  /* 106b1751 mov ebp, esp */
  EBP = (ESP);
  /* 106b1753 mov eax, dword ptr [0x106ced88] */
  EAX = (r32((uint32_t)(0x106ced88)));
  /* 106b1758 pop ebp */
  EBP = (pop32());
  /* 106b1759 ret  */
  ESPCHK(0x106b1750u, _esp0);
  ESP += 4; return;
}

/* FUN_10011760 @ 0x106b1760 (575 bytes, 196 insns) */
void f_106b1760(void) {
  FTRACE(0x106b1760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b1760 push ebp */
  push32((uint32_t)(EBP));
  /* 106b1761 mov ebp, esp */
  EBP = (ESP);
  /* 106b1763 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106b1765 push 0x106cb888 */
  push32((uint32_t)(0x106cb888u));
  /* 106b176a push 0x106ac408 */
  push32((uint32_t)(0x106ac408u));
  /* 106b176f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 106b1775 push eax */
  push32((uint32_t)(EAX));
  /* 106b1776 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 106b177d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1780 push ebx */
  push32((uint32_t)(EBX));
  /* 106b1781 push esi */
  push32((uint32_t)(ESI));
  /* 106b1782 push edi */
  push32((uint32_t)(EDI));
  /* 106b1783 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106b1786 cmp dword ptr [0x106cf72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b178d jne 0x106b17de */
  if (!C.zf) goto L_106b17de;
  /* 106b178f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 106b1792 push eax */
  push32((uint32_t)(EAX));
  /* 106b1793 push 1 */
  push32((uint32_t)(0x1u));
  /* 106b1795 push 0x106cafbc */
  push32((uint32_t)(0x106cafbcu));
  /* 106b179a push 1 */
  push32((uint32_t)(0x1u));
  /* 106b179c call dword ptr [0x106d12a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12a8))), 0x106b17a2u);
  /* 106b17a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b17a4 je 0x106b17b2 */
  if (C.zf) goto L_106b17b2;
  /* 106b17a6 mov dword ptr [0x106cf72c], 1 */
  w32((uint32_t)(0x106cf72c), (0x1u));
  /* 106b17b0 jmp 0x106b17de */
  goto L_106b17de;
L_106b17b2:;
  /* 106b17b2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 106b17b5 push ecx */
  push32((uint32_t)(ECX));
  /* 106b17b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 106b17b8 push 0x106cafb8 */
  push32((uint32_t)(0x106cafb8u));
  /* 106b17bd push 1 */
  push32((uint32_t)(0x1u));
  /* 106b17bf push 0 */
  push32((uint32_t)(0x0u));
  /* 106b17c1 call dword ptr [0x106d1318] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1318))), 0x106b17c7u);
  /* 106b17c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b17c9 je 0x106b17d7 */
  if (C.zf) goto L_106b17d7;
  /* 106b17cb mov dword ptr [0x106cf72c], 2 */
  w32((uint32_t)(0x106cf72c), (0x2u));
  /* 106b17d5 jmp 0x106b17de */
  goto L_106b17de;
L_106b17d7:;
  /* 106b17d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b17d9 jmp 0x106b19b9 */
  goto L_106b19b9;
L_106b17de:;
  /* 106b17de cmp dword ptr [0x106cf72c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf72c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b17e5 jne 0x106b1802 */
  if (!C.zf) goto L_106b1802;
  /* 106b17e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b17ea push edx */
  push32((uint32_t)(EDX));
  /* 106b17eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b17ee push eax */
  push32((uint32_t)(EAX));
  /* 106b17ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b17f2 push ecx */
  push32((uint32_t)(ECX));
  /* 106b17f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b17f6 push edx */
  push32((uint32_t)(EDX));
  /* 106b17f7 call dword ptr [0x106d12a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12a8))), 0x106b17fdu);
  /* 106b17fd jmp 0x106b19b9 */
  goto L_106b19b9;
L_106b1802:;
  /* 106b1802 cmp dword ptr [0x106cf72c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x106cf72c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1809 jne 0x106b19b7 */
  if (!C.zf) goto L_106b19b7;
  /* 106b180f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1813 jne 0x106b181d */
  if (!C.zf) goto L_106b181d;
  /* 106b1815 mov eax, dword ptr [0x106cf6a0] */
  EAX = (r32((uint32_t)(0x106cf6a0)));
  /* 106b181a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_106b181d:;
  /* 106b181d push 0 */
  push32((uint32_t)(0x0u));
  /* 106b181f push 0 */
  push32((uint32_t)(0x0u));
  /* 106b1821 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b1823 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b1825 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1828 push ecx */
  push32((uint32_t)(ECX));
  /* 106b1829 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b182c push edx */
  push32((uint32_t)(EDX));
  /* 106b182d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106b1832 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b1835 push eax */
  push32((uint32_t)(EAX));
  /* 106b1836 call dword ptr [0x106d1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1330))), 0x106b183cu);
  /* 106b183c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106b183f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1843 jne 0x106b184c */
  if (!C.zf) goto L_106b184c;
  /* 106b1845 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b1847 jmp 0x106b19b9 */
  goto L_106b19b9;
L_106b184c:;
  /* 106b184c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106b1853 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106b1856 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1859 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106b185b call 0x106a64a0 */
  push32(0x106b1860u); f_106a64a0();
  /* 106b1860 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 106b1863 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106b1866 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106b1869 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 106b186c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106b186f push edx */
  push32((uint32_t)(EDX));
  /* 106b1870 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b1872 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106b1875 push eax */
  push32((uint32_t)(EAX));
  /* 106b1876 call 0x106a7070 */
  push32(0x106b187bu); f_106a7070();
  /* 106b187b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b187e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106b1885 jmp 0x106b189e */
  goto L_106b189e;
  /* 106b1887 mov eax, 1 */
  EAX = (0x1u);
  /* 106b188c ret  */
  ESPCHK(0x106b1760u, _esp0);
  ESP += 4; return;
  /* 106b188d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106b1890 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 106b1897 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106b189e:;
  /* 106b189e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b18a2 jne 0x106b18ab */
  if (!C.zf) goto L_106b18ab;
  /* 106b18a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b18a6 jmp 0x106b19b9 */
  goto L_106b19b9;
L_106b18ab:;
  /* 106b18ab push 0 */
  push32((uint32_t)(0x0u));
  /* 106b18ad push 0 */
  push32((uint32_t)(0x0u));
  /* 106b18af mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106b18b2 push ecx */
  push32((uint32_t)(ECX));
  /* 106b18b3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106b18b6 push edx */
  push32((uint32_t)(EDX));
  /* 106b18b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b18ba push eax */
  push32((uint32_t)(EAX));
  /* 106b18bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b18be push ecx */
  push32((uint32_t)(ECX));
  /* 106b18bf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106b18c4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b18c7 push edx */
  push32((uint32_t)(EDX));
  /* 106b18c8 call dword ptr [0x106d1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1330))), 0x106b18ceu);
  /* 106b18ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b18d0 jne 0x106b18d9 */
  if (!C.zf) goto L_106b18d9;
  /* 106b18d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b18d4 jmp 0x106b19b9 */
  goto L_106b19b9;
L_106b18d9:;
  /* 106b18d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106b18e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106b18e3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 106b18e7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b18ea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106b18ec call 0x106a64a0 */
  push32(0x106b18f1u); f_106a64a0();
  /* 106b18f1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 106b18f4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106b18f7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 106b18fa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106b18fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106b1904 jmp 0x106b191d */
  goto L_106b191d;
  /* 106b1906 mov eax, 1 */
  EAX = (0x1u);
  /* 106b190b ret  */
  ESPCHK(0x106b1760u, _esp0);
  ESP += 4; return;
  /* 106b190c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106b190f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106b1916 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106b191d:;
  /* 106b191d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1921 jne 0x106b192a */
  if (!C.zf) goto L_106b192a;
  /* 106b1923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b1925 jmp 0x106b19b9 */
  goto L_106b19b9;
L_106b192a:;
  /* 106b192a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b192e jne 0x106b1939 */
  if (!C.zf) goto L_106b1939;
  /* 106b1930 mov edx, dword ptr [0x106cf690] */
  EDX = (r32((uint32_t)(0x106cf690)));
  /* 106b1936 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_106b1939:;
  /* 106b1939 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b193c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106b193f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 106b1945 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1948 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106b194b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 106b1952 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106b1955 push ecx */
  push32((uint32_t)(ECX));
  /* 106b1956 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106b1959 push edx */
  push32((uint32_t)(EDX));
  /* 106b195a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106b195d push eax */
  push32((uint32_t)(EAX));
  /* 106b195e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1961 push ecx */
  push32((uint32_t)(ECX));
  /* 106b1962 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106b1965 push edx */
  push32((uint32_t)(EDX));
  /* 106b1966 call dword ptr [0x106d1318] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1318))), 0x106b196cu);
  /* 106b196c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106b196f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1972 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106b1975 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b1977 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 106b197c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1982 je 0x106b1998 */
  if (C.zf) goto L_106b1998;
  /* 106b1984 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1987 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106b198a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b198c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106b1990 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1996 je 0x106b199c */
  if (C.zf) goto L_106b199c;
L_106b1998:;
  /* 106b1998 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b199a jmp 0x106b19b9 */
  goto L_106b19b9;
L_106b199c:;
  /* 106b199c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b199f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106b19a1 push eax */
  push32((uint32_t)(EAX));
  /* 106b19a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106b19a5 push ecx */
  push32((uint32_t)(ECX));
  /* 106b19a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b19a9 push edx */
  push32((uint32_t)(EDX));
  /* 106b19aa call 0x106ab1f0 */
  push32(0x106b19afu); f_106ab1f0();
  /* 106b19af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b19b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106b19b5 jmp 0x106b19b9 */
  goto L_106b19b9;
L_106b19b7:;
  /* 106b19b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106b19b9:;
  /* 106b19b9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 106b19bc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b19bf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 106b19c6 pop edi */
  EDI = (pop32());
  /* 106b19c7 pop esi */
  ESI = (pop32());
  /* 106b19c8 pop ebx */
  EBX = (pop32());
  /* 106b19c9 mov esp, ebp */
  ESP = (EBP);
  /* 106b19cb pop ebp */
  EBP = (pop32());
  /* 106b19cc ret  */
  ESPCHK(0x106b1760u, _esp0);
  ESP += 4; return;
}

/* FUN_100119d0 @ 0x106b19d0 (208 bytes, 85 insns) */
void f_106b19d0(void) {
  FTRACE(0x106b19d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b19d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b19d1 mov ebp, esp */
  EBP = (ESP);
  /* 106b19d3 push edi */
  push32((uint32_t)(EDI));
  /* 106b19d4 push esi */
  push32((uint32_t)(ESI));
  /* 106b19d5 push ebx */
  push32((uint32_t)(EBX));
  /* 106b19d6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 106b19d9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 106b19dc lea eax, [0x106cf688] */
  EAX = ((uint32_t)(0x106cf688));
  /* 106b19e2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b19e6 jne 0x106b1a23 */
  if (!C.zf) goto L_106b1a23;
  /* 106b19e8 mov al, 0xff */
  AL = (0xffu);
  /* 106b19ea mov edi, edi */
  EDI = (EDI);
L_106b19ec:;
  /* 106b19ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106b19ee je 0x106b1a1e */
  if (C.zf) goto L_106b1a1e;
  /* 106b19f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106b19f2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106b19f3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 106b19f5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106b19f6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b19f8 je 0x106b19ec */
  if (C.zf) goto L_106b19ec;
  /* 106b19fa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106b19fc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b19fe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106b1a00 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 106b1a03 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106b1a05 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106b1a07 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 106b1a09 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106b1a0b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b1a0d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106b1a0f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 106b1a12 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106b1a14 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106b1a16 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b1a18 je 0x106b19ec */
  if (C.zf) goto L_106b19ec;
  /* 106b1a1a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106b1a1c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_106b1a1e:;
  /* 106b1a1e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 106b1a21 jmp 0x106b1a9b */
  goto L_106b1a9b;
L_106b1a23:;
  /* 106b1a23 lock inc dword ptr [0x106cf81c] */
  x86_unimpl("lock inc @ 0x106b1a23");
  /* 106b1a2a cmp dword ptr [0x106cf80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1a31 jg 0x106b1a37 */
  if ((!C.zf&&C.sf==C.of)) goto L_106b1a37;
  /* 106b1a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b1a35 jmp 0x106b1a4c */
  goto L_106b1a4c;
L_106b1a37:;
  /* 106b1a37 lock dec dword ptr [0x106cf81c] */
  x86_unimpl("lock dec @ 0x106b1a37");
  /* 106b1a3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106b1a40 call 0x106a6d00 */
  push32(0x106b1a45u); f_106a6d00();
  /* 106b1a45 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_106b1a4c:;
  /* 106b1a4c mov eax, 0xff */
  EAX = (0xffu);
  /* 106b1a51 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 106b1a53 nop  */
  /* nop */
L_106b1a54:;
  /* 106b1a54 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106b1a56 je 0x106b1a7f */
  if (C.zf) goto L_106b1a7f;
  /* 106b1a58 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106b1a5a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106b1a5b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 106b1a5d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106b1a5e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b1a60 je 0x106b1a54 */
  if (C.zf) goto L_106b1a54;
  /* 106b1a62 push eax */
  push32((uint32_t)(EAX));
  /* 106b1a63 push ebx */
  push32((uint32_t)(EBX));
  /* 106b1a64 call 0x106b2b40 */
  push32(0x106b1a69u); f_106b2b40();
  /* 106b1a69 mov ebx, eax */
  EBX = (EAX);
  /* 106b1a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1a6e call 0x106b2b40 */
  push32(0x106b1a73u); f_106b2b40();
  /* 106b1a73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1a76 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b1a78 je 0x106b1a54 */
  if (C.zf) goto L_106b1a54;
  /* 106b1a7a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b1a7c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_106b1a7f:;
  /* 106b1a7f mov ebx, eax */
  EBX = (EAX);
  /* 106b1a81 pop eax */
  EAX = (pop32());
  /* 106b1a82 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b1a84 jne 0x106b1a8f */
  if (!C.zf) goto L_106b1a8f;
  /* 106b1a86 lock dec dword ptr [0x106cf81c] */
  x86_unimpl("lock dec @ 0x106b1a86");
  /* 106b1a8d jmp 0x106b1a99 */
  goto L_106b1a99;
L_106b1a8f:;
  /* 106b1a8f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106b1a91 call 0x106a6da0 */
  push32(0x106b1a96u); f_106a6da0();
  /* 106b1a96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106b1a99:;
  /* 106b1a99 mov eax, ebx */
  EAX = (EBX);
L_106b1a9b:;
  /* 106b1a9b pop ebx */
  EBX = (pop32());
  /* 106b1a9c pop esi */
  ESI = (pop32());
  /* 106b1a9d pop edi */
  EDI = (pop32());
  /* 106b1a9e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106b1a9f ret  */
  ESPCHK(0x106b19d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011aa0 @ 0x106b1aa0 (257 bytes, 103 insns) */
void f_106b1aa0(void) {
  FTRACE(0x106b1aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b1aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b1aa1 mov ebp, esp */
  EBP = (ESP);
  /* 106b1aa3 push edi */
  push32((uint32_t)(EDI));
  /* 106b1aa4 push esi */
  push32((uint32_t)(ESI));
  /* 106b1aa5 push ebx */
  push32((uint32_t)(EBX));
  /* 106b1aa6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b1aa9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b1aab je 0x106b1b9a */
  if (C.zf) goto L_106b1b9a;
  /* 106b1ab1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1ab4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 106b1ab7 lea eax, [0x106cf688] */
  EAX = ((uint32_t)(0x106cf688));
  /* 106b1abd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1ac1 jne 0x106b1b11 */
  if (!C.zf) goto L_106b1b11;
  /* 106b1ac3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 106b1ac5 mov bl, 0x5a */
  BL = (0x5au);
  /* 106b1ac7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 106b1ac9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106b1acc:;
  /* 106b1acc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 106b1ace or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 106b1ad0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 106b1ad2 je 0x106b1af5 */
  if (C.zf) goto L_106b1af5;
  /* 106b1ad4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106b1ad6 je 0x106b1af5 */
  if (C.zf) goto L_106b1af5;
  /* 106b1ad8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106b1ad9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106b1ada cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b1adc jb 0x106b1ae4 */
  if (C.cf) goto L_106b1ae4;
  /* 106b1ade cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b1ae0 ja 0x106b1ae4 */
  if ((!C.cf&&!C.zf)) goto L_106b1ae4;
  /* 106b1ae2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_106b1ae4:;
  /* 106b1ae4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b1ae6 jb 0x106b1aee */
  if (C.cf) goto L_106b1aee;
  /* 106b1ae8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b1aea ja 0x106b1aee */
  if ((!C.cf&&!C.zf)) goto L_106b1aee;
  /* 106b1aec add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_106b1aee:;
  /* 106b1aee cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b1af0 jne 0x106b1aff */
  if (!C.zf) goto L_106b1aff;
  /* 106b1af2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106b1af3 jne 0x106b1acc */
  if (!C.zf) goto L_106b1acc;
L_106b1af5:;
  /* 106b1af5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b1af7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b1af9 je 0x106b1b9a */
  if (C.zf) goto L_106b1b9a;
L_106b1aff:;
  /* 106b1aff mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 106b1b04 jb 0x106b1b9a */
  if (C.cf) goto L_106b1b9a;
  /* 106b1b0a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106b1b0c jmp 0x106b1b9a */
  goto L_106b1b9a;
L_106b1b11:;
  /* 106b1b11 lock inc dword ptr [0x106cf81c] */
  x86_unimpl("lock inc @ 0x106b1b11");
  /* 106b1b18 cmp dword ptr [0x106cf80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1b1f jg 0x106b1b25 */
  if ((!C.zf&&C.sf==C.of)) goto L_106b1b25;
  /* 106b1b21 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b1b23 jmp 0x106b1b3e */
  goto L_106b1b3e;
L_106b1b25:;
  /* 106b1b25 lock dec dword ptr [0x106cf81c] */
  x86_unimpl("lock dec @ 0x106b1b25");
  /* 106b1b2c mov ebx, ecx */
  EBX = (ECX);
  /* 106b1b2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106b1b30 call 0x106a6d00 */
  push32(0x106b1b35u); f_106a6d00();
  /* 106b1b35 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 106b1b3c mov ecx, ebx */
  ECX = (EBX);
L_106b1b3e:;
  /* 106b1b3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b1b40 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 106b1b42 mov edi, edi */
  EDI = (EDI);
L_106b1b44:;
  /* 106b1b44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106b1b46 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b1b48 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 106b1b4a je 0x106b1b6f */
  if (C.zf) goto L_106b1b6f;
  /* 106b1b4c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 106b1b4e je 0x106b1b6f */
  if (C.zf) goto L_106b1b6f;
  /* 106b1b50 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106b1b51 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106b1b52 push ecx */
  push32((uint32_t)(ECX));
  /* 106b1b53 push eax */
  push32((uint32_t)(EAX));
  /* 106b1b54 push ebx */
  push32((uint32_t)(EBX));
  /* 106b1b55 call 0x106b2b40 */
  push32(0x106b1b5au); f_106b2b40();
  /* 106b1b5a mov ebx, eax */
  EBX = (EAX);
  /* 106b1b5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1b5f call 0x106b2b40 */
  push32(0x106b1b64u); f_106b2b40();
  /* 106b1b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1b67 pop ecx */
  ECX = (pop32());
  /* 106b1b68 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1b6a jne 0x106b1b75 */
  if (!C.zf) goto L_106b1b75;
  /* 106b1b6c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106b1b6d jne 0x106b1b44 */
  if (!C.zf) goto L_106b1b44;
L_106b1b6f:;
  /* 106b1b6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b1b71 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1b73 je 0x106b1b7e */
  if (C.zf) goto L_106b1b7e;
L_106b1b75:;
  /* 106b1b75 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 106b1b7a jb 0x106b1b7e */
  if (C.cf) goto L_106b1b7e;
  /* 106b1b7c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_106b1b7e:;
  /* 106b1b7e pop eax */
  EAX = (pop32());
  /* 106b1b7f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b1b81 jne 0x106b1b8c */
  if (!C.zf) goto L_106b1b8c;
  /* 106b1b83 lock dec dword ptr [0x106cf81c] */
  x86_unimpl("lock dec @ 0x106b1b83");
  /* 106b1b8a jmp 0x106b1b9a */
  goto L_106b1b9a;
L_106b1b8c:;
  /* 106b1b8c mov ebx, ecx */
  EBX = (ECX);
  /* 106b1b8e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106b1b90 call 0x106a6da0 */
  push32(0x106b1b95u); f_106a6da0();
  /* 106b1b95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1b98 mov ecx, ebx */
  ECX = (EBX);
L_106b1b9a:;
  /* 106b1b9a mov eax, ecx */
  EAX = (ECX);
  /* 106b1b9c pop ebx */
  EBX = (pop32());
  /* 106b1b9d pop esi */
  ESI = (pop32());
  /* 106b1b9e pop edi */
  EDI = (pop32());
  /* 106b1b9f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106b1ba0 ret  */
  ESPCHK(0x106b1aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bb0 @ 0x106b1bb0 (255 bytes, 88 insns) */
void f_106b1bb0(void) {
  FTRACE(0x106b1bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b1bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b1bb1 mov ebp, esp */
  EBP = (ESP);
  /* 106b1bb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_106b1bb6:;
  /* 106b1bb6 cmp dword ptr [0x106cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1bbd jle 0x106b1bd6 */
  if ((C.zf||C.sf!=C.of)) goto L_106b1bd6;
  /* 106b1bbf push 8 */
  push32((uint32_t)(0x8u));
  /* 106b1bc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1bc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b1bc6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106b1bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 106b1bc9 call 0x106a9310 */
  push32(0x106b1bceu); f_106a9310();
  /* 106b1bce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1bd1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106b1bd4 jmp 0x106b1bef */
  goto L_106b1bef;
L_106b1bd6:;
  /* 106b1bd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1bd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b1bdb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b1bdd mov ecx, dword ptr [0x106cdc98] */
  ECX = (r32((uint32_t)(0x106cdc98)));
  /* 106b1be3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b1be5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106b1be9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 106b1bec mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106b1bef:;
  /* 106b1bef cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1bf3 je 0x106b1c00 */
  if (C.zf) goto L_106b1c00;
  /* 106b1bf5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1bf8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1bfb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106b1bfe jmp 0x106b1bb6 */
  goto L_106b1bb6;
L_106b1c00:;
  /* 106b1c00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1c03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b1c05 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106b1c07 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106b1c0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1c0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1c10 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106b1c13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b1c16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106b1c19 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1c1d je 0x106b1c25 */
  if (C.zf) goto L_106b1c25;
  /* 106b1c1f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1c23 jne 0x106b1c38 */
  if (!C.zf) goto L_106b1c38;
L_106b1c25:;
  /* 106b1c25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1c28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b1c2a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b1c2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106b1c2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1c32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1c35 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_106b1c38:;
  /* 106b1c38 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106b1c3f:;
  /* 106b1c3f cmp dword ptr [0x106cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1c46 jle 0x106b1c5b */
  if ((C.zf||C.sf!=C.of)) goto L_106b1c5b;
  /* 106b1c48 push 4 */
  push32((uint32_t)(0x4u));
  /* 106b1c4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b1c4d push edx */
  push32((uint32_t)(EDX));
  /* 106b1c4e call 0x106a9310 */
  push32(0x106b1c53u); f_106a9310();
  /* 106b1c53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1c56 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106b1c59 jmp 0x106b1c70 */
  goto L_106b1c70;
L_106b1c5b:;
  /* 106b1c5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b1c5e mov ecx, dword ptr [0x106cdc98] */
  ECX = (r32((uint32_t)(0x106cdc98)));
  /* 106b1c64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b1c66 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106b1c6a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106b1c6d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_106b1c70:;
  /* 106b1c70 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1c74 je 0x106b1c9b */
  if (C.zf) goto L_106b1c9b;
  /* 106b1c76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b1c79 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b1c7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b1c7f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 106b1c83 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106b1c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1c89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b1c8b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106b1c8d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106b1c90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1c93 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1c96 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106b1c99 jmp 0x106b1c3f */
  goto L_106b1c3f;
L_106b1c9b:;
  /* 106b1c9b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1c9f jne 0x106b1ca8 */
  if (!C.zf) goto L_106b1ca8;
  /* 106b1ca1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b1ca4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106b1ca6 jmp 0x106b1cab */
  goto L_106b1cab;
L_106b1ca8:;
  /* 106b1ca8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_106b1cab:;
  /* 106b1cab mov esp, ebp */
  ESP = (EBP);
  /* 106b1cad pop ebp */
  EBP = (pop32());
  /* 106b1cae ret  */
  ESPCHK(0x106b1bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cb0 @ 0x106b1cb0 (17 bytes, 8 insns) */
void f_106b1cb0(void) {
  FTRACE(0x106b1cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b1cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b1cb1 mov ebp, esp */
  EBP = (ESP);
  /* 106b1cb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1cb6 push eax */
  push32((uint32_t)(EAX));
  /* 106b1cb7 call 0x106b1bb0 */
  push32(0x106b1cbcu); f_106b1bb0();
  /* 106b1cbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1cbf pop ebp */
  EBP = (pop32());
  /* 106b1cc0 ret  */
  ESPCHK(0x106b1cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cd0 @ 0x106b1cd0 (297 bytes, 106 insns) */
void f_106b1cd0(void) {
  FTRACE(0x106b1cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b1cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b1cd1 mov ebp, esp */
  EBP = (ESP);
  /* 106b1cd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b1cd6 push esi */
  push32((uint32_t)(ESI));
L_106b1cd7:;
  /* 106b1cd7 cmp dword ptr [0x106cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1cde jle 0x106b1cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_106b1cf7;
  /* 106b1ce0 push 8 */
  push32((uint32_t)(0x8u));
  /* 106b1ce2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1ce5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b1ce7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106b1ce9 push ecx */
  push32((uint32_t)(ECX));
  /* 106b1cea call 0x106a9310 */
  push32(0x106b1cefu); f_106a9310();
  /* 106b1cef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1cf2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106b1cf5 jmp 0x106b1d10 */
  goto L_106b1d10;
L_106b1cf7:;
  /* 106b1cf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1cfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b1cfc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b1cfe mov ecx, dword ptr [0x106cdc98] */
  ECX = (r32((uint32_t)(0x106cdc98)));
  /* 106b1d04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b1d06 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106b1d0a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 106b1d0d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_106b1d10:;
  /* 106b1d10 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1d14 je 0x106b1d21 */
  if (C.zf) goto L_106b1d21;
  /* 106b1d16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1d19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1d1c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106b1d1f jmp 0x106b1cd7 */
  goto L_106b1cd7;
L_106b1d21:;
  /* 106b1d21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1d24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b1d26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106b1d28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106b1d2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1d2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1d31 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106b1d34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b1d37 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106b1d3a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1d3e je 0x106b1d46 */
  if (C.zf) goto L_106b1d46;
  /* 106b1d40 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1d44 jne 0x106b1d59 */
  if (!C.zf) goto L_106b1d59;
L_106b1d46:;
  /* 106b1d46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1d49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b1d4b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b1d4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106b1d50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1d53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1d56 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_106b1d59:;
  /* 106b1d59 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106b1d60 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106b1d67:;
  /* 106b1d67 cmp dword ptr [0x106cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1d6e jle 0x106b1d83 */
  if ((C.zf||C.sf!=C.of)) goto L_106b1d83;
  /* 106b1d70 push 4 */
  push32((uint32_t)(0x4u));
  /* 106b1d72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b1d75 push edx */
  push32((uint32_t)(EDX));
  /* 106b1d76 call 0x106a9310 */
  push32(0x106b1d7bu); f_106a9310();
  /* 106b1d7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1d7e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106b1d81 jmp 0x106b1d98 */
  goto L_106b1d98;
L_106b1d83:;
  /* 106b1d83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b1d86 mov ecx, dword ptr [0x106cdc98] */
  ECX = (r32((uint32_t)(0x106cdc98)));
  /* 106b1d8c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b1d8e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106b1d92 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106b1d95 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_106b1d98:;
  /* 106b1d98 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1d9c je 0x106b1dd9 */
  if (C.zf) goto L_106b1dd9;
  /* 106b1d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 106b1da0 push 0xa */
  push32((uint32_t)(0xau));
  /* 106b1da2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b1da5 push eax */
  push32((uint32_t)(EAX));
  /* 106b1da6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b1da9 push ecx */
  push32((uint32_t)(ECX));
  /* 106b1daa call 0x106b2c70 */
  push32(0x106b1dafu); f_106b2c70();
  /* 106b1daf mov ecx, eax */
  ECX = (EAX);
  /* 106b1db1 mov esi, edx */
  ESI = (EDX);
  /* 106b1db3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b1db6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b1db9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106b1dba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1dbc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1dbe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106b1dc1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 106b1dc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1dc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b1dc9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b1dcb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106b1dce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b1dd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1dd4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 106b1dd7 jmp 0x106b1d67 */
  goto L_106b1d67;
L_106b1dd9:;
  /* 106b1dd9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1ddd jne 0x106b1dee */
  if (!C.zf) goto L_106b1dee;
  /* 106b1ddf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b1de2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106b1de4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b1de7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1dea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106b1dec jmp 0x106b1df4 */
  goto L_106b1df4;
L_106b1dee:;
  /* 106b1dee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b1df1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_106b1df4:;
  /* 106b1df4 pop esi */
  ESI = (pop32());
  /* 106b1df5 mov esp, ebp */
  ESP = (EBP);
  /* 106b1df7 pop ebp */
  EBP = (pop32());
  /* 106b1df8 ret  */
  ESPCHK(0x106b1cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e00 @ 0x106b1e00 (61 bytes, 18 insns) */
void f_106b1e00(void) {
  FTRACE(0x106b1e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b1e00 push ebp */
  push32((uint32_t)(EBP));
  /* 106b1e01 mov ebp, esp */
  EBP = (ESP);
  /* 106b1e03 cmp dword ptr [0x106cf7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1e0a jne 0x106b1e3b */
  if (!C.zf) goto L_106b1e3b;
  /* 106b1e0c push 0xb */
  push32((uint32_t)(0xbu));
  /* 106b1e0e call 0x106a6d00 */
  push32(0x106b1e13u); f_106a6d00();
  /* 106b1e13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1e16 cmp dword ptr [0x106cf7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1e1d jne 0x106b1e31 */
  if (!C.zf) goto L_106b1e31;
  /* 106b1e1f call 0x106b1e60 */
  push32(0x106b1e24u); f_106b1e60();
  /* 106b1e24 mov eax, dword ptr [0x106cf7e8] */
  EAX = (r32((uint32_t)(0x106cf7e8)));
  /* 106b1e29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1e2c mov dword ptr [0x106cf7e8], eax */
  w32((uint32_t)(0x106cf7e8), (EAX));
L_106b1e31:;
  /* 106b1e31 push 0xb */
  push32((uint32_t)(0xbu));
  /* 106b1e33 call 0x106a6da0 */
  push32(0x106b1e38u); f_106a6da0();
  /* 106b1e38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106b1e3b:;
  /* 106b1e3b pop ebp */
  EBP = (pop32());
  /* 106b1e3c ret  */
  ESPCHK(0x106b1e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e40 @ 0x106b1e40 (30 bytes, 11 insns) */
void f_106b1e40(void) {
  FTRACE(0x106b1e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b1e40 push ebp */
  push32((uint32_t)(EBP));
  /* 106b1e41 mov ebp, esp */
  EBP = (ESP);
  /* 106b1e43 push 0xb */
  push32((uint32_t)(0xbu));
  /* 106b1e45 call 0x106a6d00 */
  push32(0x106b1e4au); f_106a6d00();
  /* 106b1e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1e4d call 0x106b1e60 */
  push32(0x106b1e52u); f_106b1e60();
  /* 106b1e52 push 0xb */
  push32((uint32_t)(0xbu));
  /* 106b1e54 call 0x106a6da0 */
  push32(0x106b1e59u); f_106a6da0();
  /* 106b1e59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1e5c pop ebp */
  EBP = (pop32());
  /* 106b1e5d ret  */
  ESPCHK(0x106b1e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e60 @ 0x106b1e60 (939 bytes, 266 insns) */
void f_106b1e60(void) {
  FTRACE(0x106b1e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b1e60 push ebp */
  push32((uint32_t)(EBP));
  /* 106b1e61 mov ebp, esp */
  EBP = (ESP);
  /* 106b1e63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b1e66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106b1e6d push 0xc */
  push32((uint32_t)(0xcu));
  /* 106b1e6f call 0x106a6d00 */
  push32(0x106b1e74u); f_106a6d00();
  /* 106b1e74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1e77 mov dword ptr [0x106cf730], 0 */
  w32((uint32_t)(0x106cf730), (0x0u));
  /* 106b1e81 mov dword ptr [0x106cee38], 0xffffffff */
  w32((uint32_t)(0x106cee38), (0xffffffffu));
  /* 106b1e8b mov eax, dword ptr [0x106cee38] */
  EAX = (r32((uint32_t)(0x106cee38)));
  /* 106b1e90 mov dword ptr [0x106cee28], eax */
  w32((uint32_t)(0x106cee28), (EAX));
  /* 106b1e95 push 0x106cb8e8 */
  push32((uint32_t)(0x106cb8e8u));
  /* 106b1e9a call 0x106b2ce0 */
  push32(0x106b1e9fu); f_106b2ce0();
  /* 106b1e9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1ea2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106b1ea5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1ea9 jne 0x106b1fe3 */
  if (!C.zf) goto L_106b1fe3;
  /* 106b1eaf push 0xc */
  push32((uint32_t)(0xcu));
  /* 106b1eb1 call 0x106a6da0 */
  push32(0x106b1eb6u); f_106a6da0();
  /* 106b1eb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1eb9 push 0x106cf738 */
  push32((uint32_t)(0x106cf738u));
  /* 106b1ebe call dword ptr [0x106d126c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d126c))), 0x106b1ec4u);
  /* 106b1ec4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1ec7 je 0x106b1fde */
  if (C.zf) goto L_106b1fde;
  /* 106b1ecd mov dword ptr [0x106cf730], 1 */
  w32((uint32_t)(0x106cf730), (0x1u));
  /* 106b1ed7 mov ecx, dword ptr [0x106cf738] */
  ECX = (r32((uint32_t)(0x106cf738)));
  /* 106b1edd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b1ee0 mov dword ptr [0x106ced90], ecx */
  w32((uint32_t)(0x106ced90), (ECX));
  /* 106b1ee6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b1ee8 mov dx, word ptr [0x106cf77e] */
  DX = (r16((uint32_t)(0x106cf77e)));
  /* 106b1eef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b1ef1 je 0x106b1f09 */
  if (C.zf) goto L_106b1f09;
  /* 106b1ef3 mov eax, dword ptr [0x106cf78c] */
  EAX = (r32((uint32_t)(0x106cf78c)));
  /* 106b1ef8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b1efb mov ecx, dword ptr [0x106ced90] */
  ECX = (r32((uint32_t)(0x106ced90)));
  /* 106b1f01 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b1f03 mov dword ptr [0x106ced90], ecx */
  w32((uint32_t)(0x106ced90), (ECX));
L_106b1f09:;
  /* 106b1f09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b1f0b mov dx, word ptr [0x106cf7d2] */
  DX = (r16((uint32_t)(0x106cf7d2)));
  /* 106b1f12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b1f14 je 0x106b1f3e */
  if (C.zf) goto L_106b1f3e;
  /* 106b1f16 cmp dword ptr [0x106cf7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1f1d je 0x106b1f3e */
  if (C.zf) goto L_106b1f3e;
  /* 106b1f1f mov dword ptr [0x106ced94], 1 */
  w32((uint32_t)(0x106ced94), (0x1u));
  /* 106b1f29 mov eax, dword ptr [0x106cf7e0] */
  EAX = (r32((uint32_t)(0x106cf7e0)));
  /* 106b1f2e sub eax, dword ptr [0x106cf78c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106cf78c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b1f34 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b1f37 mov dword ptr [0x106ced98], eax */
  w32((uint32_t)(0x106ced98), (EAX));
  /* 106b1f3c jmp 0x106b1f52 */
  goto L_106b1f52;
L_106b1f3e:;
  /* 106b1f3e mov dword ptr [0x106ced94], 0 */
  w32((uint32_t)(0x106ced94), (0x0u));
  /* 106b1f48 mov dword ptr [0x106ced98], 0 */
  w32((uint32_t)(0x106ced98), (0x0u));
L_106b1f52:;
  /* 106b1f52 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 106b1f55 push ecx */
  push32((uint32_t)(ECX));
  /* 106b1f56 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b1f58 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 106b1f5a mov edx, dword ptr [0x106cee1c] */
  EDX = (r32((uint32_t)(0x106cee1c)));
  /* 106b1f60 push edx */
  push32((uint32_t)(EDX));
  /* 106b1f61 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106b1f63 push 0x106cf73c */
  push32((uint32_t)(0x106cf73cu));
  /* 106b1f68 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106b1f6d mov eax, dword ptr [0x106cf6a0] */
  EAX = (r32((uint32_t)(0x106cf6a0)));
  /* 106b1f72 push eax */
  push32((uint32_t)(EAX));
  /* 106b1f73 call dword ptr [0x106d1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1330))), 0x106b1f79u);
  /* 106b1f79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b1f7b je 0x106b1f8f */
  if (C.zf) goto L_106b1f8f;
  /* 106b1f7d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1f81 jne 0x106b1f8f */
  if (!C.zf) goto L_106b1f8f;
  /* 106b1f83 mov ecx, dword ptr [0x106cee1c] */
  ECX = (r32((uint32_t)(0x106cee1c)));
  /* 106b1f89 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 106b1f8d jmp 0x106b1f98 */
  goto L_106b1f98;
L_106b1f8f:;
  /* 106b1f8f mov edx, dword ptr [0x106cee1c] */
  EDX = (r32((uint32_t)(0x106cee1c)));
  /* 106b1f95 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_106b1f98:;
  /* 106b1f98 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 106b1f9b push eax */
  push32((uint32_t)(EAX));
  /* 106b1f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 106b1f9e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 106b1fa0 mov ecx, dword ptr [0x106cee20] */
  ECX = (r32((uint32_t)(0x106cee20)));
  /* 106b1fa6 push ecx */
  push32((uint32_t)(ECX));
  /* 106b1fa7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106b1fa9 push 0x106cf790 */
  push32((uint32_t)(0x106cf790u));
  /* 106b1fae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106b1fb3 mov edx, dword ptr [0x106cf6a0] */
  EDX = (r32((uint32_t)(0x106cf6a0)));
  /* 106b1fb9 push edx */
  push32((uint32_t)(EDX));
  /* 106b1fba call dword ptr [0x106d1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1330))), 0x106b1fc0u);
  /* 106b1fc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b1fc2 je 0x106b1fd5 */
  if (C.zf) goto L_106b1fd5;
  /* 106b1fc4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1fc8 jne 0x106b1fd5 */
  if (!C.zf) goto L_106b1fd5;
  /* 106b1fca mov eax, dword ptr [0x106cee20] */
  EAX = (r32((uint32_t)(0x106cee20)));
  /* 106b1fcf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 106b1fd3 jmp 0x106b1fde */
  goto L_106b1fde;
L_106b1fd5:;
  /* 106b1fd5 mov ecx, dword ptr [0x106cee20] */
  ECX = (r32((uint32_t)(0x106cee20)));
  /* 106b1fdb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_106b1fde:;
  /* 106b1fde jmp 0x106b2207 */
  goto L_106b2207;
L_106b1fe3:;
  /* 106b1fe3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b1fe6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106b1fe9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b1feb je 0x106b200d */
  if (C.zf) goto L_106b200d;
  /* 106b1fed cmp dword ptr [0x106cf7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b1ff4 je 0x106b201c */
  if (C.zf) goto L_106b201c;
  /* 106b1ff6 mov ecx, dword ptr [0x106cf7e4] */
  ECX = (r32((uint32_t)(0x106cf7e4)));
  /* 106b1ffc push ecx */
  push32((uint32_t)(ECX));
  /* 106b1ffd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2000 push edx */
  push32((uint32_t)(EDX));
  /* 106b2001 call 0x106aef90 */
  push32(0x106b2006u); f_106aef90();
  /* 106b2006 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2009 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b200b jne 0x106b201c */
  if (!C.zf) goto L_106b201c;
L_106b200d:;
  /* 106b200d push 0xc */
  push32((uint32_t)(0xcu));
  /* 106b200f call 0x106a6da0 */
  push32(0x106b2014u); f_106a6da0();
  /* 106b2014 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2017 jmp 0x106b2207 */
  goto L_106b2207;
L_106b201c:;
  /* 106b201c push 2 */
  push32((uint32_t)(0x2u));
  /* 106b201e mov eax, dword ptr [0x106cf7e4] */
  EAX = (r32((uint32_t)(0x106cf7e4)));
  /* 106b2023 push eax */
  push32((uint32_t)(EAX));
  /* 106b2024 call 0x106a3d90 */
  push32(0x106b2029u); f_106a3d90();
  /* 106b2029 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b202c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 106b2031 push 0x106cb8e0 */
  push32((uint32_t)(0x106cb8e0u));
  /* 106b2036 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b2038 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b203b push ecx */
  push32((uint32_t)(ECX));
  /* 106b203c call 0x106a6130 */
  push32(0x106b2041u); f_106a6130();
  /* 106b2041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2044 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2047 push eax */
  push32((uint32_t)(EAX));
  /* 106b2048 call 0x106a3300 */
  push32(0x106b204du); f_106a3300();
  /* 106b204d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2050 mov dword ptr [0x106cf7e4], eax */
  w32((uint32_t)(0x106cf7e4), (EAX));
  /* 106b2055 cmp dword ptr [0x106cf7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b205c jne 0x106b206d */
  if (!C.zf) goto L_106b206d;
  /* 106b205e push 0xc */
  push32((uint32_t)(0xcu));
  /* 106b2060 call 0x106a6da0 */
  push32(0x106b2065u); f_106a6da0();
  /* 106b2065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2068 jmp 0x106b2207 */
  goto L_106b2207;
L_106b206d:;
  /* 106b206d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2070 push edx */
  push32((uint32_t)(EDX));
  /* 106b2071 mov eax, dword ptr [0x106cf7e4] */
  EAX = (r32((uint32_t)(0x106cf7e4)));
  /* 106b2076 push eax */
  push32((uint32_t)(EAX));
  /* 106b2077 call 0x106a62b0 */
  push32(0x106b207cu); f_106a62b0();
  /* 106b207c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b207f push 0xc */
  push32((uint32_t)(0xcu));
  /* 106b2081 call 0x106a6da0 */
  push32(0x106b2086u); f_106a6da0();
  /* 106b2086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2089 push 3 */
  push32((uint32_t)(0x3u));
  /* 106b208b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b208e push ecx */
  push32((uint32_t)(ECX));
  /* 106b208f mov edx, dword ptr [0x106cee1c] */
  EDX = (r32((uint32_t)(0x106cee1c)));
  /* 106b2095 push edx */
  push32((uint32_t)(EDX));
  /* 106b2096 call 0x106a6b20 */
  push32(0x106b209bu); f_106a6b20();
  /* 106b209b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b209e mov eax, dword ptr [0x106cee1c] */
  EAX = (r32((uint32_t)(0x106cee1c)));
  /* 106b20a3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 106b20a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b20aa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b20ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106b20b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b20b3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106b20b6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b20b9 jne 0x106b20cd */
  if (!C.zf) goto L_106b20cd;
  /* 106b20bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b20be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b20c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106b20c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b20c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b20ca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106b20cd:;
  /* 106b20cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b20d0 push eax */
  push32((uint32_t)(EAX));
  /* 106b20d1 call 0x106b1bb0 */
  push32(0x106b20d6u); f_106b1bb0();
  /* 106b20d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b20d9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b20df mov dword ptr [0x106ced90], eax */
  w32((uint32_t)(0x106ced90), (EAX));
L_106b20e4:;
  /* 106b20e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b20e7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106b20ea cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b20ed je 0x106b2105 */
  if (C.zf) goto L_106b2105;
  /* 106b20ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b20f2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106b20f5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b20f8 jl 0x106b2110 */
  if ((C.sf!=C.of)) goto L_106b2110;
  /* 106b20fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b20fd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106b2100 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2103 jg 0x106b2110 */
  if ((!C.zf&&C.sf==C.of)) goto L_106b2110;
L_106b2105:;
  /* 106b2105 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2108 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b210b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106b210e jmp 0x106b20e4 */
  goto L_106b20e4;
L_106b2110:;
  /* 106b2110 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2113 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106b2116 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2119 jne 0x106b21b5 */
  if (!C.zf) goto L_106b21b5;
  /* 106b211f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2122 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2125 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106b2128 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b212b push edx */
  push32((uint32_t)(EDX));
  /* 106b212c call 0x106b1bb0 */
  push32(0x106b2131u); f_106b1bb0();
  /* 106b2131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2134 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b2137 mov ecx, dword ptr [0x106ced90] */
  ECX = (r32((uint32_t)(0x106ced90)));
  /* 106b213d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b213f mov dword ptr [0x106ced90], ecx */
  w32((uint32_t)(0x106ced90), (ECX));
L_106b2145:;
  /* 106b2145 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2148 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106b214b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b214e jl 0x106b2166 */
  if ((C.sf!=C.of)) goto L_106b2166;
  /* 106b2150 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2153 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106b2156 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2159 jg 0x106b2166 */
  if ((!C.zf&&C.sf==C.of)) goto L_106b2166;
  /* 106b215b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b215e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2161 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106b2164 jmp 0x106b2145 */
  goto L_106b2145;
L_106b2166:;
  /* 106b2166 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2169 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106b216c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b216f jne 0x106b21b5 */
  if (!C.zf) goto L_106b21b5;
  /* 106b2171 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2174 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2177 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106b217a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b217d push ecx */
  push32((uint32_t)(ECX));
  /* 106b217e call 0x106b1bb0 */
  push32(0x106b2183u); f_106b1bb0();
  /* 106b2183 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2186 mov edx, dword ptr [0x106ced90] */
  EDX = (r32((uint32_t)(0x106ced90)));
  /* 106b218c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b218e mov dword ptr [0x106ced90], edx */
  w32((uint32_t)(0x106ced90), (EDX));
L_106b2194:;
  /* 106b2194 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2197 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106b219a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b219d jl 0x106b21b5 */
  if ((C.sf!=C.of)) goto L_106b21b5;
  /* 106b219f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b21a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106b21a5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b21a8 jg 0x106b21b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_106b21b5;
  /* 106b21aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b21ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b21b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106b21b3 jmp 0x106b2194 */
  goto L_106b2194;
L_106b21b5:;
  /* 106b21b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b21b9 je 0x106b21c9 */
  if (C.zf) goto L_106b21c9;
  /* 106b21bb mov edx, dword ptr [0x106ced90] */
  EDX = (r32((uint32_t)(0x106ced90)));
  /* 106b21c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106b21c3 mov dword ptr [0x106ced90], edx */
  w32((uint32_t)(0x106ced90), (EDX));
L_106b21c9:;
  /* 106b21c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b21cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106b21cf mov dword ptr [0x106ced94], ecx */
  w32((uint32_t)(0x106ced94), (ECX));
  /* 106b21d5 cmp dword ptr [0x106ced94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106ced94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b21dc je 0x106b21fe */
  if (C.zf) goto L_106b21fe;
  /* 106b21de push 3 */
  push32((uint32_t)(0x3u));
  /* 106b21e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b21e3 push edx */
  push32((uint32_t)(EDX));
  /* 106b21e4 mov eax, dword ptr [0x106cee20] */
  EAX = (r32((uint32_t)(0x106cee20)));
  /* 106b21e9 push eax */
  push32((uint32_t)(EAX));
  /* 106b21ea call 0x106a6b20 */
  push32(0x106b21efu); f_106a6b20();
  /* 106b21ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b21f2 mov ecx, dword ptr [0x106cee20] */
  ECX = (r32((uint32_t)(0x106cee20)));
  /* 106b21f8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 106b21fc jmp 0x106b2207 */
  goto L_106b2207;
L_106b21fe:;
  /* 106b21fe mov edx, dword ptr [0x106cee20] */
  EDX = (r32((uint32_t)(0x106cee20)));
  /* 106b2204 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_106b2207:;
  /* 106b2207 mov esp, ebp */
  ESP = (EBP);
  /* 106b2209 pop ebp */
  EBP = (pop32());
  /* 106b220a ret  */
  ESPCHK(0x106b1e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012210 @ 0x106b2210 (46 bytes, 18 insns) */
void f_106b2210(void) {
  FTRACE(0x106b2210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b2210 push ebp */
  push32((uint32_t)(EBP));
  /* 106b2211 mov ebp, esp */
  EBP = (ESP);
  /* 106b2213 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2214 push 0xb */
  push32((uint32_t)(0xbu));
  /* 106b2216 call 0x106a6d00 */
  push32(0x106b221bu); f_106a6d00();
  /* 106b221b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b221e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2221 push eax */
  push32((uint32_t)(EAX));
  /* 106b2222 call 0x106b2240 */
  push32(0x106b2227u); f_106b2240();
  /* 106b2227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b222a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106b222d push 0xb */
  push32((uint32_t)(0xbu));
  /* 106b222f call 0x106a6da0 */
  push32(0x106b2234u); f_106a6da0();
  /* 106b2234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2237 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b223a mov esp, ebp */
  ESP = (EBP);
  /* 106b223c pop ebp */
  EBP = (pop32());
  /* 106b223d ret  */
  ESPCHK(0x106b2210u, _esp0);
  ESP += 4; return;
}

/* FUN_10012240 @ 0x106b2240 (762 bytes, 246 insns) */
void f_106b2240(void) {
  FTRACE(0x106b2240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b2240 push ebp */
  push32((uint32_t)(EBP));
  /* 106b2241 mov ebp, esp */
  EBP = (ESP);
  /* 106b2243 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2244 cmp dword ptr [0x106ced94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106ced94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b224b jne 0x106b2254 */
  if (!C.zf) goto L_106b2254;
  /* 106b224d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b224f jmp 0x106b2536 */
  goto L_106b2536;
L_106b2254:;
  /* 106b2254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2257 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106b225a cmp ecx, dword ptr [0x106cee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106cee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2260 jne 0x106b2274 */
  if (!C.zf) goto L_106b2274;
  /* 106b2262 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2265 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106b2268 cmp eax, dword ptr [0x106cee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106cee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b226e je 0x106b243b */
  if (C.zf) goto L_106b243b;
L_106b2274:;
  /* 106b2274 cmp dword ptr [0x106cf730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b227b je 0x106b23f5 */
  if (C.zf) goto L_106b23f5;
  /* 106b2281 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b2283 mov cx, word ptr [0x106cf7d0] */
  CX = (r16((uint32_t)(0x106cf7d0)));
  /* 106b228a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106b228c jne 0x106b22e9 */
  if (!C.zf) goto L_106b22e9;
  /* 106b228e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b2290 mov dx, word ptr [0x106cf7de] */
  DX = (r16((uint32_t)(0x106cf7de)));
  /* 106b2297 push edx */
  push32((uint32_t)(EDX));
  /* 106b2298 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b229a mov ax, word ptr [0x106cf7dc] */
  AX = (r16((uint32_t)(0x106cf7dc)));
  /* 106b22a0 push eax */
  push32((uint32_t)(EAX));
  /* 106b22a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b22a3 mov cx, word ptr [0x106cf7da] */
  CX = (r16((uint32_t)(0x106cf7da)));
  /* 106b22aa push ecx */
  push32((uint32_t)(ECX));
  /* 106b22ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b22ad mov dx, word ptr [0x106cf7d8] */
  DX = (r16((uint32_t)(0x106cf7d8)));
  /* 106b22b4 push edx */
  push32((uint32_t)(EDX));
  /* 106b22b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b22b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b22b9 mov ax, word ptr [0x106cf7d4] */
  AX = (r16((uint32_t)(0x106cf7d4)));
  /* 106b22bf push eax */
  push32((uint32_t)(EAX));
  /* 106b22c0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b22c2 mov cx, word ptr [0x106cf7d6] */
  CX = (r16((uint32_t)(0x106cf7d6)));
  /* 106b22c9 push ecx */
  push32((uint32_t)(ECX));
  /* 106b22ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b22cc mov dx, word ptr [0x106cf7d2] */
  DX = (r16((uint32_t)(0x106cf7d2)));
  /* 106b22d3 push edx */
  push32((uint32_t)(EDX));
  /* 106b22d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b22d7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106b22da push ecx */
  push32((uint32_t)(ECX));
  /* 106b22db push 1 */
  push32((uint32_t)(0x1u));
  /* 106b22dd push 1 */
  push32((uint32_t)(0x1u));
  /* 106b22df call 0x106b2540 */
  push32(0x106b22e4u); f_106b2540();
  /* 106b22e4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b22e7 jmp 0x106b233a */
  goto L_106b233a;
L_106b22e9:;
  /* 106b22e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b22eb mov dx, word ptr [0x106cf7de] */
  DX = (r16((uint32_t)(0x106cf7de)));
  /* 106b22f2 push edx */
  push32((uint32_t)(EDX));
  /* 106b22f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b22f5 mov ax, word ptr [0x106cf7dc] */
  AX = (r16((uint32_t)(0x106cf7dc)));
  /* 106b22fb push eax */
  push32((uint32_t)(EAX));
  /* 106b22fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b22fe mov cx, word ptr [0x106cf7da] */
  CX = (r16((uint32_t)(0x106cf7da)));
  /* 106b2305 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2306 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b2308 mov dx, word ptr [0x106cf7d8] */
  DX = (r16((uint32_t)(0x106cf7d8)));
  /* 106b230f push edx */
  push32((uint32_t)(EDX));
  /* 106b2310 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b2312 mov ax, word ptr [0x106cf7d6] */
  AX = (r16((uint32_t)(0x106cf7d6)));
  /* 106b2318 push eax */
  push32((uint32_t)(EAX));
  /* 106b2319 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b231b push 0 */
  push32((uint32_t)(0x0u));
  /* 106b231d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b231f mov cx, word ptr [0x106cf7d2] */
  CX = (r16((uint32_t)(0x106cf7d2)));
  /* 106b2326 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2327 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b232a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106b232d push eax */
  push32((uint32_t)(EAX));
  /* 106b232e push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2330 push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2332 call 0x106b2540 */
  push32(0x106b2337u); f_106b2540();
  /* 106b2337 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106b233a:;
  /* 106b233a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b233c mov cx, word ptr [0x106cf77c] */
  CX = (r16((uint32_t)(0x106cf77c)));
  /* 106b2343 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106b2345 jne 0x106b23a2 */
  if (!C.zf) goto L_106b23a2;
  /* 106b2347 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b2349 mov dx, word ptr [0x106cf78a] */
  DX = (r16((uint32_t)(0x106cf78a)));
  /* 106b2350 push edx */
  push32((uint32_t)(EDX));
  /* 106b2351 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b2353 mov ax, word ptr [0x106cf788] */
  AX = (r16((uint32_t)(0x106cf788)));
  /* 106b2359 push eax */
  push32((uint32_t)(EAX));
  /* 106b235a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b235c mov cx, word ptr [0x106cf786] */
  CX = (r16((uint32_t)(0x106cf786)));
  /* 106b2363 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2364 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b2366 mov dx, word ptr [0x106cf784] */
  DX = (r16((uint32_t)(0x106cf784)));
  /* 106b236d push edx */
  push32((uint32_t)(EDX));
  /* 106b236e push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2370 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b2372 mov ax, word ptr [0x106cf780] */
  AX = (r16((uint32_t)(0x106cf780)));
  /* 106b2378 push eax */
  push32((uint32_t)(EAX));
  /* 106b2379 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b237b mov cx, word ptr [0x106cf782] */
  CX = (r16((uint32_t)(0x106cf782)));
  /* 106b2382 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2383 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b2385 mov dx, word ptr [0x106cf77e] */
  DX = (r16((uint32_t)(0x106cf77e)));
  /* 106b238c push edx */
  push32((uint32_t)(EDX));
  /* 106b238d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2390 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106b2393 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2394 push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2396 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2398 call 0x106b2540 */
  push32(0x106b239du); f_106b2540();
  /* 106b239d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b23a0 jmp 0x106b23f3 */
  goto L_106b23f3;
L_106b23a2:;
  /* 106b23a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b23a4 mov dx, word ptr [0x106cf78a] */
  DX = (r16((uint32_t)(0x106cf78a)));
  /* 106b23ab push edx */
  push32((uint32_t)(EDX));
  /* 106b23ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b23ae mov ax, word ptr [0x106cf788] */
  AX = (r16((uint32_t)(0x106cf788)));
  /* 106b23b4 push eax */
  push32((uint32_t)(EAX));
  /* 106b23b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b23b7 mov cx, word ptr [0x106cf786] */
  CX = (r16((uint32_t)(0x106cf786)));
  /* 106b23be push ecx */
  push32((uint32_t)(ECX));
  /* 106b23bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b23c1 mov dx, word ptr [0x106cf784] */
  DX = (r16((uint32_t)(0x106cf784)));
  /* 106b23c8 push edx */
  push32((uint32_t)(EDX));
  /* 106b23c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b23cb mov ax, word ptr [0x106cf782] */
  AX = (r16((uint32_t)(0x106cf782)));
  /* 106b23d1 push eax */
  push32((uint32_t)(EAX));
  /* 106b23d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b23d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b23d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b23d8 mov cx, word ptr [0x106cf77e] */
  CX = (r16((uint32_t)(0x106cf77e)));
  /* 106b23df push ecx */
  push32((uint32_t)(ECX));
  /* 106b23e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b23e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106b23e6 push eax */
  push32((uint32_t)(EAX));
  /* 106b23e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b23e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b23eb call 0x106b2540 */
  push32(0x106b23f0u); f_106b2540();
  /* 106b23f0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106b23f3:;
  /* 106b23f3 jmp 0x106b243b */
  goto L_106b243b;
L_106b23f5:;
  /* 106b23f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b23f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b23f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b23fb push 2 */
  push32((uint32_t)(0x2u));
  /* 106b23fd push 0 */
  push32((uint32_t)(0x0u));
  /* 106b23ff push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2401 push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2403 push 4 */
  push32((uint32_t)(0x4u));
  /* 106b2405 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2408 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106b240b push edx */
  push32((uint32_t)(EDX));
  /* 106b240c push 1 */
  push32((uint32_t)(0x1u));
  /* 106b240e push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2410 call 0x106b2540 */
  push32(0x106b2415u); f_106b2540();
  /* 106b2415 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2418 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b241a push 0 */
  push32((uint32_t)(0x0u));
  /* 106b241c push 0 */
  push32((uint32_t)(0x0u));
  /* 106b241e push 2 */
  push32((uint32_t)(0x2u));
  /* 106b2420 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2422 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2424 push 5 */
  push32((uint32_t)(0x5u));
  /* 106b2426 push 0xa */
  push32((uint32_t)(0xau));
  /* 106b2428 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b242b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106b242e push ecx */
  push32((uint32_t)(ECX));
  /* 106b242f push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2431 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2433 call 0x106b2540 */
  push32(0x106b2438u); f_106b2540();
  /* 106b2438 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106b243b:;
  /* 106b243b mov edx, dword ptr [0x106cee2c] */
  EDX = (r32((uint32_t)(0x106cee2c)));
  /* 106b2441 cmp edx, dword ptr [0x106cee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x106cee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2447 jge 0x106b2494 */
  if ((C.sf==C.of)) goto L_106b2494;
  /* 106b2449 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b244c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 106b244f cmp ecx, dword ptr [0x106cee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106cee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2455 jl 0x106b2465 */
  if ((C.sf!=C.of)) goto L_106b2465;
  /* 106b2457 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b245a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106b245d cmp eax, dword ptr [0x106cee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106cee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2463 jle 0x106b246c */
  if ((C.zf||C.sf!=C.of)) goto L_106b246c;
L_106b2465:;
  /* 106b2465 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b2467 jmp 0x106b2536 */
  goto L_106b2536;
L_106b246c:;
  /* 106b246c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b246f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 106b2472 cmp edx, dword ptr [0x106cee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x106cee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2478 jle 0x106b2492 */
  if ((C.zf||C.sf!=C.of)) goto L_106b2492;
  /* 106b247a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b247d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 106b2480 cmp ecx, dword ptr [0x106cee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106cee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2486 jge 0x106b2492 */
  if ((C.sf==C.of)) goto L_106b2492;
  /* 106b2488 mov eax, 1 */
  EAX = (0x1u);
  /* 106b248d jmp 0x106b2536 */
  goto L_106b2536;
L_106b2492:;
  /* 106b2492 jmp 0x106b24d7 */
  goto L_106b24d7;
L_106b2494:;
  /* 106b2494 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2497 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106b249a cmp eax, dword ptr [0x106cee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106cee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b24a0 jl 0x106b24b0 */
  if ((C.sf!=C.of)) goto L_106b24b0;
  /* 106b24a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b24a5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 106b24a8 cmp edx, dword ptr [0x106cee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x106cee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b24ae jle 0x106b24b7 */
  if ((C.zf||C.sf!=C.of)) goto L_106b24b7;
L_106b24b0:;
  /* 106b24b0 mov eax, 1 */
  EAX = (0x1u);
  /* 106b24b5 jmp 0x106b2536 */
  goto L_106b2536;
L_106b24b7:;
  /* 106b24b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b24ba mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 106b24bd cmp ecx, dword ptr [0x106cee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106cee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b24c3 jle 0x106b24d7 */
  if ((C.zf||C.sf!=C.of)) goto L_106b24d7;
  /* 106b24c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b24c8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106b24cb cmp eax, dword ptr [0x106cee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106cee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b24d1 jge 0x106b24d7 */
  if ((C.sf==C.of)) goto L_106b24d7;
  /* 106b24d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b24d5 jmp 0x106b2536 */
  goto L_106b2536;
L_106b24d7:;
  /* 106b24d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b24da mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106b24dd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b24e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b24e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b24e5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b24e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b24ea mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106b24ed imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b24f3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b24f5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b24fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106b24fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2501 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 106b2504 cmp edx, dword ptr [0x106cee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x106cee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b250a jne 0x106b2522 */
  if (!C.zf) goto L_106b2522;
  /* 106b250c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b250f cmp eax, dword ptr [0x106cee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106cee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2515 jl 0x106b251e */
  if ((C.sf!=C.of)) goto L_106b251e;
  /* 106b2517 mov eax, 1 */
  EAX = (0x1u);
  /* 106b251c jmp 0x106b2536 */
  goto L_106b2536;
L_106b251e:;
  /* 106b251e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b2520 jmp 0x106b2536 */
  goto L_106b2536;
L_106b2522:;
  /* 106b2522 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b2525 cmp ecx, dword ptr [0x106cee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106cee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b252b jge 0x106b2534 */
  if ((C.sf==C.of)) goto L_106b2534;
  /* 106b252d mov eax, 1 */
  EAX = (0x1u);
  /* 106b2532 jmp 0x106b2536 */
  goto L_106b2536;
L_106b2534:;
  /* 106b2534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106b2536:;
  /* 106b2536 mov esp, ebp */
  ESP = (EBP);
  /* 106b2538 pop ebp */
  EBP = (pop32());
  /* 106b2539 ret  */
  ESPCHK(0x106b2240u, _esp0);
  ESP += 4; return;
}

/* FUN_10012540 @ 0x106b2540 (504 bytes, 145 insns) */
void f_106b2540(void) {
  FTRACE(0x106b2540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b2540 push ebp */
  push32((uint32_t)(EBP));
  /* 106b2541 mov ebp, esp */
  EBP = (ESP);
  /* 106b2543 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b2546 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b254a jne 0x106b261c */
  if (!C.zf) goto L_106b261c;
  /* 106b2550 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b2553 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 106b2556 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b2558 jne 0x106b2569 */
  if (!C.zf) goto L_106b2569;
  /* 106b255a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b255d mov edx, dword ptr [ecx*4 + 0x106cee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x106cee4c)));
  /* 106b2564 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106b2567 jmp 0x106b2576 */
  goto L_106b2576;
L_106b2569:;
  /* 106b2569 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b256c mov ecx, dword ptr [eax*4 + 0x106cee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x106cee80)));
  /* 106b2573 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_106b2576:;
  /* 106b2576 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2579 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b257c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106b257f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b2582 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b2585 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b258b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b258e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2590 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b2593 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b2596 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 106b2599 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 106b259d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106b259e mov ecx, 7 */
  ECX = (0x7u);
  /* 106b25a3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106b25a5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106b25a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b25ab cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b25ae jge 0x106b25c9 */
  if ((C.sf==C.of)) goto L_106b25c9;
  /* 106b25b0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106b25b3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b25b6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b25b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b25bc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b25bf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b25c2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b25c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106b25c7 jmp 0x106b25dd */
  goto L_106b25dd;
L_106b25c9:;
  /* 106b25c9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106b25cc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b25cf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b25d2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b25d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b25d8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b25da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106b25dd:;
  /* 106b25dd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b25e1 jne 0x106b261a */
  if (!C.zf) goto L_106b261a;
  /* 106b25e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b25e6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 106b25e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106b25eb jne 0x106b25fc */
  if (!C.zf) goto L_106b25fc;
  /* 106b25ed mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b25f0 mov eax, dword ptr [edx*4 + 0x106cee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x106cee50)));
  /* 106b25f7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106b25fa jmp 0x106b2609 */
  goto L_106b2609;
L_106b25fc:;
  /* 106b25fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b25ff mov edx, dword ptr [ecx*4 + 0x106cee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x106cee84)));
  /* 106b2606 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106b2609:;
  /* 106b2609 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b260c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b260f jle 0x106b261a */
  if ((C.zf||C.sf!=C.of)) goto L_106b261a;
  /* 106b2611 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b2614 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b2617 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106b261a:;
  /* 106b261a jmp 0x106b2651 */
  goto L_106b2651;
L_106b261c:;
  /* 106b261c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b261f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106b2622 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b2624 jne 0x106b2635 */
  if (!C.zf) goto L_106b2635;
  /* 106b2626 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b2629 mov ecx, dword ptr [eax*4 + 0x106cee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x106cee4c)));
  /* 106b2630 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106b2633 jmp 0x106b2642 */
  goto L_106b2642;
L_106b2635:;
  /* 106b2635 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b2638 mov eax, dword ptr [edx*4 + 0x106cee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x106cee80)));
  /* 106b263f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_106b2642:;
  /* 106b2642 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b2645 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106b2648 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b264b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b264e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106b2651:;
  /* 106b2651 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2655 jne 0x106b2691 */
  if (!C.zf) goto L_106b2691;
  /* 106b2657 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b265a mov dword ptr [0x106cee2c], eax */
  w32((uint32_t)(0x106cee2c), (EAX));
  /* 106b265f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 106b2662 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b2665 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 106b2668 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b266a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b266d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 106b2670 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2672 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b2678 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 106b267b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b267d mov dword ptr [0x106cee30], ecx */
  w32((uint32_t)(0x106cee30), (ECX));
  /* 106b2683 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b2686 mov dword ptr [0x106cee28], edx */
  w32((uint32_t)(0x106cee28), (EDX));
  /* 106b268c jmp 0x106b2734 */
  goto L_106b2734;
L_106b2691:;
  /* 106b2691 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b2694 mov dword ptr [0x106cee3c], eax */
  w32((uint32_t)(0x106cee3c), (EAX));
  /* 106b2699 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 106b269c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b269f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 106b26a2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b26a4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b26a7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 106b26aa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b26ac imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b26b2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 106b26b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b26b7 mov dword ptr [0x106cee40], ecx */
  w32((uint32_t)(0x106cee40), (ECX));
  /* 106b26bd mov edx, dword ptr [0x106ced98] */
  EDX = (r32((uint32_t)(0x106ced98)));
  /* 106b26c3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106b26c9 mov eax, dword ptr [0x106cee40] */
  EAX = (r32((uint32_t)(0x106cee40)));
  /* 106b26ce add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b26d0 mov dword ptr [0x106cee40], eax */
  w32((uint32_t)(0x106cee40), (EAX));
  /* 106b26d5 cmp dword ptr [0x106cee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b26dc jge 0x106b2701 */
  if ((C.sf==C.of)) goto L_106b2701;
  /* 106b26de mov ecx, dword ptr [0x106cee40] */
  ECX = (r32((uint32_t)(0x106cee40)));
  /* 106b26e4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b26ea mov dword ptr [0x106cee40], ecx */
  w32((uint32_t)(0x106cee40), (ECX));
  /* 106b26f0 mov edx, dword ptr [0x106cee3c] */
  EDX = (r32((uint32_t)(0x106cee3c)));
  /* 106b26f6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b26f9 mov dword ptr [0x106cee3c], edx */
  w32((uint32_t)(0x106cee3c), (EDX));
  /* 106b26ff jmp 0x106b272b */
  goto L_106b272b;
L_106b2701:;
  /* 106b2701 cmp dword ptr [0x106cee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x106cee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b270b jl 0x106b272b */
  if ((C.sf!=C.of)) goto L_106b272b;
  /* 106b270d mov eax, dword ptr [0x106cee40] */
  EAX = (r32((uint32_t)(0x106cee40)));
  /* 106b2712 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b2717 mov dword ptr [0x106cee40], eax */
  w32((uint32_t)(0x106cee40), (EAX));
  /* 106b271c mov ecx, dword ptr [0x106cee3c] */
  ECX = (r32((uint32_t)(0x106cee3c)));
  /* 106b2722 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2725 mov dword ptr [0x106cee3c], ecx */
  w32((uint32_t)(0x106cee3c), (ECX));
L_106b272b:;
  /* 106b272b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b272e mov dword ptr [0x106cee38], edx */
  w32((uint32_t)(0x106cee38), (EDX));
L_106b2734:;
  /* 106b2734 mov esp, ebp */
  ESP = (EBP);
  /* 106b2736 pop ebp */
  EBP = (pop32());
  /* 106b2737 ret  */
  ESPCHK(0x106b2540u, _esp0);
  ESP += 4; return;
}

/* FUN_10012740 @ 0x106b2740 (382 bytes, 135 insns) */
void f_106b2740(void) {
  FTRACE(0x106b2740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b2740 push ebp */
  push32((uint32_t)(EBP));
  /* 106b2741 mov ebp, esp */
  EBP = (ESP);
  /* 106b2743 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106b2745 push 0x106cb8f0 */
  push32((uint32_t)(0x106cb8f0u));
  /* 106b274a push 0x106ac408 */
  push32((uint32_t)(0x106ac408u));
  /* 106b274f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 106b2755 push eax */
  push32((uint32_t)(EAX));
  /* 106b2756 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 106b275d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2760 push ebx */
  push32((uint32_t)(EBX));
  /* 106b2761 push esi */
  push32((uint32_t)(ESI));
  /* 106b2762 push edi */
  push32((uint32_t)(EDI));
  /* 106b2763 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106b2766 cmp dword ptr [0x106cf7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b276d jne 0x106b27b2 */
  if (!C.zf) goto L_106b27b2;
  /* 106b276f push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2771 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2773 push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2775 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2777 call dword ptr [0x106d1268] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1268))), 0x106b277du);
  /* 106b277d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b277f je 0x106b278d */
  if (C.zf) goto L_106b278d;
  /* 106b2781 mov dword ptr [0x106cf7ec], 1 */
  w32((uint32_t)(0x106cf7ec), (0x1u));
  /* 106b278b jmp 0x106b27b2 */
  goto L_106b27b2;
L_106b278d:;
  /* 106b278d push 0 */
  push32((uint32_t)(0x0u));
  /* 106b278f push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2791 push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2793 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2795 call dword ptr [0x106d1280] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1280))), 0x106b279bu);
  /* 106b279b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b279d je 0x106b27ab */
  if (C.zf) goto L_106b27ab;
  /* 106b279f mov dword ptr [0x106cf7ec], 2 */
  w32((uint32_t)(0x106cf7ec), (0x2u));
  /* 106b27a9 jmp 0x106b27b2 */
  goto L_106b27b2;
L_106b27ab:;
  /* 106b27ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b27ad jmp 0x106b28c1 */
  goto L_106b28c1;
L_106b27b2:;
  /* 106b27b2 cmp dword ptr [0x106cf7ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b27b9 jne 0x106b27d6 */
  if (!C.zf) goto L_106b27d6;
  /* 106b27bb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b27be push eax */
  push32((uint32_t)(EAX));
  /* 106b27bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b27c2 push ecx */
  push32((uint32_t)(ECX));
  /* 106b27c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b27c6 push edx */
  push32((uint32_t)(EDX));
  /* 106b27c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b27ca push eax */
  push32((uint32_t)(EAX));
  /* 106b27cb call dword ptr [0x106d1268] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1268))), 0x106b27d1u);
  /* 106b27d1 jmp 0x106b28c1 */
  goto L_106b28c1;
L_106b27d6:;
  /* 106b27d6 cmp dword ptr [0x106cf7ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b27dd jne 0x106b28bf */
  if (!C.zf) goto L_106b28bf;
  /* 106b27e3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b27e7 jne 0x106b27f2 */
  if (!C.zf) goto L_106b27f2;
  /* 106b27e9 mov ecx, dword ptr [0x106cf6a0] */
  ECX = (r32((uint32_t)(0x106cf6a0)));
  /* 106b27ef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_106b27f2:;
  /* 106b27f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b27f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b27f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b27f9 push edx */
  push32((uint32_t)(EDX));
  /* 106b27fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b27fd push eax */
  push32((uint32_t)(EAX));
  /* 106b27fe call dword ptr [0x106d1280] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1280))), 0x106b2804u);
  /* 106b2804 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106b2807 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b280b jne 0x106b2814 */
  if (!C.zf) goto L_106b2814;
  /* 106b280d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b280f jmp 0x106b28c1 */
  goto L_106b28c1;
L_106b2814:;
  /* 106b2814 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106b281b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106b281e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2821 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106b2823 call 0x106a64a0 */
  push32(0x106b2828u); f_106a64a0();
  /* 106b2828 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 106b282b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106b282e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106b2831 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106b2834 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106b283b jmp 0x106b2854 */
  goto L_106b2854;
  /* 106b283d mov eax, 1 */
  EAX = (0x1u);
  /* 106b2842 ret  */
  ESPCHK(0x106b2740u, _esp0);
  ESP += 4; return;
  /* 106b2843 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106b2846 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106b284d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106b2854:;
  /* 106b2854 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2858 jne 0x106b285e */
  if (!C.zf) goto L_106b285e;
  /* 106b285a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b285c jmp 0x106b28c1 */
  goto L_106b28c1;
L_106b285e:;
  /* 106b285e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106b2861 push edx */
  push32((uint32_t)(EDX));
  /* 106b2862 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106b2865 push eax */
  push32((uint32_t)(EAX));
  /* 106b2866 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b2869 push ecx */
  push32((uint32_t)(ECX));
  /* 106b286a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b286d push edx */
  push32((uint32_t)(EDX));
  /* 106b286e call dword ptr [0x106d1280] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1280))), 0x106b2874u);
  /* 106b2874 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b2876 jne 0x106b287c */
  if (!C.zf) goto L_106b287c;
  /* 106b2878 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b287a jmp 0x106b28c1 */
  goto L_106b28c1;
L_106b287c:;
  /* 106b287c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2880 jne 0x106b289d */
  if (!C.zf) goto L_106b289d;
  /* 106b2882 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2884 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2886 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106b2888 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106b288b push eax */
  push32((uint32_t)(EAX));
  /* 106b288c push 1 */
  push32((uint32_t)(0x1u));
  /* 106b288e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b2891 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2892 call dword ptr [0x106d12b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12b0))), 0x106b2898u);
  /* 106b2898 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106b289b jmp 0x106b28ba */
  goto L_106b28ba;
L_106b289d:;
  /* 106b289d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b28a0 push edx */
  push32((uint32_t)(EDX));
  /* 106b28a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b28a4 push eax */
  push32((uint32_t)(EAX));
  /* 106b28a5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106b28a7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106b28aa push ecx */
  push32((uint32_t)(ECX));
  /* 106b28ab push 1 */
  push32((uint32_t)(0x1u));
  /* 106b28ad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b28b0 push edx */
  push32((uint32_t)(EDX));
  /* 106b28b1 call dword ptr [0x106d12b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12b0))), 0x106b28b7u);
  /* 106b28b7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106b28ba:;
  /* 106b28ba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106b28bd jmp 0x106b28c1 */
  goto L_106b28c1;
L_106b28bf:;
  /* 106b28bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106b28c1:;
  /* 106b28c1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 106b28c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b28c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 106b28ce pop edi */
  EDI = (pop32());
  /* 106b28cf pop esi */
  ESI = (pop32());
  /* 106b28d0 pop ebx */
  EBX = (pop32());
  /* 106b28d1 mov esp, ebp */
  ESP = (EBP);
  /* 106b28d3 pop ebp */
  EBP = (pop32());
  /* 106b28d4 ret  */
  ESPCHK(0x106b2740u, _esp0);
  ESP += 4; return;
}

/* FUN_100128e0 @ 0x106b28e0 (398 bytes, 140 insns) */
void f_106b28e0(void) {
  FTRACE(0x106b28e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b28e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b28e1 mov ebp, esp */
  EBP = (ESP);
  /* 106b28e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106b28e5 push 0x106cb900 */
  push32((uint32_t)(0x106cb900u));
  /* 106b28ea push 0x106ac408 */
  push32((uint32_t)(0x106ac408u));
  /* 106b28ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 106b28f5 push eax */
  push32((uint32_t)(EAX));
  /* 106b28f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 106b28fd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2900 push ebx */
  push32((uint32_t)(EBX));
  /* 106b2901 push esi */
  push32((uint32_t)(ESI));
  /* 106b2902 push edi */
  push32((uint32_t)(EDI));
  /* 106b2903 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106b2906 cmp dword ptr [0x106cf7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b290d jne 0x106b2952 */
  if (!C.zf) goto L_106b2952;
  /* 106b290f push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2911 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2913 push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2915 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2917 call dword ptr [0x106d1268] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1268))), 0x106b291du);
  /* 106b291d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b291f je 0x106b292d */
  if (C.zf) goto L_106b292d;
  /* 106b2921 mov dword ptr [0x106cf7f0], 1 */
  w32((uint32_t)(0x106cf7f0), (0x1u));
  /* 106b292b jmp 0x106b2952 */
  goto L_106b2952;
L_106b292d:;
  /* 106b292d push 0 */
  push32((uint32_t)(0x0u));
  /* 106b292f push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2931 push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2933 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2935 call dword ptr [0x106d1280] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1280))), 0x106b293bu);
  /* 106b293b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b293d je 0x106b294b */
  if (C.zf) goto L_106b294b;
  /* 106b293f mov dword ptr [0x106cf7f0], 2 */
  w32((uint32_t)(0x106cf7f0), (0x2u));
  /* 106b2949 jmp 0x106b2952 */
  goto L_106b2952;
L_106b294b:;
  /* 106b294b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b294d jmp 0x106b2a71 */
  goto L_106b2a71;
L_106b2952:;
  /* 106b2952 cmp dword ptr [0x106cf7f0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7f0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2959 jne 0x106b2976 */
  if (!C.zf) goto L_106b2976;
  /* 106b295b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b295e push eax */
  push32((uint32_t)(EAX));
  /* 106b295f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b2962 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2963 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b2966 push edx */
  push32((uint32_t)(EDX));
  /* 106b2967 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b296a push eax */
  push32((uint32_t)(EAX));
  /* 106b296b call dword ptr [0x106d1280] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1280))), 0x106b2971u);
  /* 106b2971 jmp 0x106b2a71 */
  goto L_106b2a71;
L_106b2976:;
  /* 106b2976 cmp dword ptr [0x106cf7f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b297d jne 0x106b2a6f */
  if (!C.zf) goto L_106b2a6f;
  /* 106b2983 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2987 jne 0x106b2992 */
  if (!C.zf) goto L_106b2992;
  /* 106b2989 mov ecx, dword ptr [0x106cf6a0] */
  ECX = (r32((uint32_t)(0x106cf6a0)));
  /* 106b298f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_106b2992:;
  /* 106b2992 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2994 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2996 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b2999 push edx */
  push32((uint32_t)(EDX));
  /* 106b299a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b299d push eax */
  push32((uint32_t)(EAX));
  /* 106b299e call dword ptr [0x106d1268] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1268))), 0x106b29a4u);
  /* 106b29a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106b29a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b29ab jne 0x106b29b4 */
  if (!C.zf) goto L_106b29b4;
  /* 106b29ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b29af jmp 0x106b2a71 */
  goto L_106b2a71;
L_106b29b4:;
  /* 106b29b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106b29bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106b29be shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106b29c0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b29c3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106b29c5 call 0x106a64a0 */
  push32(0x106b29cau); f_106a64a0();
  /* 106b29ca mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 106b29cd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106b29d0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106b29d3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106b29d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106b29dd jmp 0x106b29f6 */
  goto L_106b29f6;
  /* 106b29df mov eax, 1 */
  EAX = (0x1u);
  /* 106b29e4 ret  */
  ESPCHK(0x106b28e0u, _esp0);
  ESP += 4; return;
  /* 106b29e5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106b29e8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106b29ef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106b29f6:;
  /* 106b29f6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b29fa jne 0x106b2a00 */
  if (!C.zf) goto L_106b2a00;
  /* 106b29fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b29fe jmp 0x106b2a71 */
  goto L_106b2a71;
L_106b2a00:;
  /* 106b2a00 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106b2a03 push edx */
  push32((uint32_t)(EDX));
  /* 106b2a04 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106b2a07 push eax */
  push32((uint32_t)(EAX));
  /* 106b2a08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b2a0b push ecx */
  push32((uint32_t)(ECX));
  /* 106b2a0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2a0f push edx */
  push32((uint32_t)(EDX));
  /* 106b2a10 call dword ptr [0x106d1268] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1268))), 0x106b2a16u);
  /* 106b2a16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b2a18 jne 0x106b2a1e */
  if (!C.zf) goto L_106b2a1e;
  /* 106b2a1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b2a1c jmp 0x106b2a71 */
  goto L_106b2a71;
L_106b2a1e:;
  /* 106b2a1e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2a22 jne 0x106b2a46 */
  if (!C.zf) goto L_106b2a46;
  /* 106b2a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2a2c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106b2a2e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106b2a31 push eax */
  push32((uint32_t)(EAX));
  /* 106b2a32 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106b2a37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b2a3a push ecx */
  push32((uint32_t)(ECX));
  /* 106b2a3b call dword ptr [0x106d1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1330))), 0x106b2a41u);
  /* 106b2a41 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106b2a44 jmp 0x106b2a6a */
  goto L_106b2a6a;
L_106b2a46:;
  /* 106b2a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2a48 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2a4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b2a4d push edx */
  push32((uint32_t)(EDX));
  /* 106b2a4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b2a51 push eax */
  push32((uint32_t)(EAX));
  /* 106b2a52 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106b2a54 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106b2a57 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2a58 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106b2a5d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b2a60 push edx */
  push32((uint32_t)(EDX));
  /* 106b2a61 call dword ptr [0x106d1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1330))), 0x106b2a67u);
  /* 106b2a67 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106b2a6a:;
  /* 106b2a6a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106b2a6d jmp 0x106b2a71 */
  goto L_106b2a71;
L_106b2a6f:;
  /* 106b2a6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106b2a71:;
  /* 106b2a71 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 106b2a74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b2a77 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 106b2a7e pop edi */
  EDI = (pop32());
  /* 106b2a7f pop esi */
  ESI = (pop32());
  /* 106b2a80 pop ebx */
  EBX = (pop32());
  /* 106b2a81 mov esp, ebp */
  ESP = (EBP);
  /* 106b2a83 pop ebp */
  EBP = (pop32());
  /* 106b2a84 ret  */
  ESPCHK(0x106b28e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a90 @ 0x106b2a90 (11 bytes, 6 insns) */
void f_106b2a90(void) {
  FTRACE(0x106b2a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b2a90 push ebp */
  push32((uint32_t)(EBP));
  /* 106b2a91 mov ebp, esp */
  EBP = (ESP);
  /* 106b2a93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2a96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2a99 pop ebp */
  EBP = (pop32());
  /* 106b2a9a ret  */
  ESPCHK(0x106b2a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012aa0 @ 0x106b2aa0 (147 bytes, 43 insns) */
void f_106b2aa0(void) {
  FTRACE(0x106b2aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b2aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b2aa1 mov ebp, esp */
  EBP = (ESP);
  /* 106b2aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2aa4 cmp dword ptr [0x106cf690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2aab jne 0x106b2ac7 */
  if (!C.zf) goto L_106b2ac7;
  /* 106b2aad cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2ab1 jl 0x106b2ac2 */
  if ((C.sf!=C.of)) goto L_106b2ac2;
  /* 106b2ab3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2ab7 jg 0x106b2ac2 */
  if ((!C.zf&&C.sf==C.of)) goto L_106b2ac2;
  /* 106b2ab9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2abc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2abf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106b2ac2:;
  /* 106b2ac2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2ac5 jmp 0x106b2b2f */
  goto L_106b2b2f;
L_106b2ac7:;
  /* 106b2ac7 push 0x106cf81c */
  push32((uint32_t)(0x106cf81cu));
  /* 106b2acc call dword ptr [0x106d12d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12d8))), 0x106b2ad2u);
  /* 106b2ad2 cmp dword ptr [0x106cf80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2ad9 je 0x106b2af9 */
  if (C.zf) goto L_106b2af9;
  /* 106b2adb push 0x106cf81c */
  push32((uint32_t)(0x106cf81cu));
  /* 106b2ae0 call dword ptr [0x106d12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c8))), 0x106b2ae6u);
  /* 106b2ae6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106b2ae8 call 0x106a6d00 */
  push32(0x106b2aedu); f_106a6d00();
  /* 106b2aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2af0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106b2af7 jmp 0x106b2b00 */
  goto L_106b2b00;
L_106b2af9:;
  /* 106b2af9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106b2b00:;
  /* 106b2b00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2b03 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2b04 call 0x106b2b40 */
  push32(0x106b2b09u); f_106b2b40();
  /* 106b2b09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2b0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106b2b0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2b13 je 0x106b2b21 */
  if (C.zf) goto L_106b2b21;
  /* 106b2b15 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106b2b17 call 0x106a6da0 */
  push32(0x106b2b1cu); f_106a6da0();
  /* 106b2b1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2b1f jmp 0x106b2b2c */
  goto L_106b2b2c;
L_106b2b21:;
  /* 106b2b21 push 0x106cf81c */
  push32((uint32_t)(0x106cf81cu));
  /* 106b2b26 call dword ptr [0x106d12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c8))), 0x106b2b2cu);
L_106b2b2c:;
  /* 106b2b2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_106b2b2f:;
  /* 106b2b2f mov esp, ebp */
  ESP = (EBP);
  /* 106b2b31 pop ebp */
  EBP = (pop32());
  /* 106b2b32 ret  */
  ESPCHK(0x106b2aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b40 @ 0x106b2b40 (299 bytes, 91 insns) */
void f_106b2b40(void) {
  FTRACE(0x106b2b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b2b40 push ebp */
  push32((uint32_t)(EBP));
  /* 106b2b41 mov ebp, esp */
  EBP = (ESP);
  /* 106b2b43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b2b46 cmp dword ptr [0x106cf690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2b4d jne 0x106b2b6c */
  if (!C.zf) goto L_106b2b6c;
  /* 106b2b4f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2b53 jl 0x106b2b64 */
  if ((C.sf!=C.of)) goto L_106b2b64;
  /* 106b2b55 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2b59 jg 0x106b2b64 */
  if ((!C.zf&&C.sf==C.of)) goto L_106b2b64;
  /* 106b2b5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2b5e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2b61 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106b2b64:;
  /* 106b2b64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2b67 jmp 0x106b2c67 */
  goto L_106b2c67;
L_106b2b6c:;
  /* 106b2b6c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2b73 jge 0x106b2bb3 */
  if ((C.sf==C.of)) goto L_106b2bb3;
  /* 106b2b75 cmp dword ptr [0x106cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2b7c jle 0x106b2b91 */
  if ((C.zf||C.sf!=C.of)) goto L_106b2b91;
  /* 106b2b7e push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2b80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2b83 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2b84 call 0x106a9310 */
  push32(0x106b2b89u); f_106a9310();
  /* 106b2b89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2b8c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106b2b8f jmp 0x106b2ba5 */
  goto L_106b2ba5;
L_106b2b91:;
  /* 106b2b91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2b94 mov eax, dword ptr [0x106cdc98] */
  EAX = (r32((uint32_t)(0x106cdc98)));
  /* 106b2b99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b2b9b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 106b2b9f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106b2ba2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106b2ba5:;
  /* 106b2ba5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2ba9 jne 0x106b2bb3 */
  if (!C.zf) goto L_106b2bb3;
  /* 106b2bab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2bae jmp 0x106b2c67 */
  goto L_106b2c67;
L_106b2bb3:;
  /* 106b2bb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2bb6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 106b2bb9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106b2bbf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106b2bc5 mov eax, dword ptr [0x106cdc98] */
  EAX = (r32((uint32_t)(0x106cdc98)));
  /* 106b2bca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b2bcc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 106b2bd0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 106b2bd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106b2bd8 je 0x106b2bfc */
  if (C.zf) goto L_106b2bfc;
  /* 106b2bda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2bdd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 106b2be0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106b2be6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 106b2be9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 106b2bec mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 106b2bef mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 106b2bf3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 106b2bfa jmp 0x106b2c0d */
  goto L_106b2c0d;
L_106b2bfc:;
  /* 106b2bfc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 106b2bff mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 106b2c02 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 106b2c06 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_106b2c0d:;
  /* 106b2c0d push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2c11 push 3 */
  push32((uint32_t)(0x3u));
  /* 106b2c13 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 106b2c16 push edx */
  push32((uint32_t)(EDX));
  /* 106b2c17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b2c1a push eax */
  push32((uint32_t)(EAX));
  /* 106b2c1b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 106b2c1e push ecx */
  push32((uint32_t)(ECX));
  /* 106b2c1f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106b2c24 mov edx, dword ptr [0x106cf690] */
  EDX = (r32((uint32_t)(0x106cf690)));
  /* 106b2c2a push edx */
  push32((uint32_t)(EDX));
  /* 106b2c2b call 0x106ab6f0 */
  push32(0x106b2c30u); f_106ab6f0();
  /* 106b2c30 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2c33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106b2c36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2c3a jne 0x106b2c41 */
  if (!C.zf) goto L_106b2c41;
  /* 106b2c3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2c3f jmp 0x106b2c67 */
  goto L_106b2c67;
L_106b2c41:;
  /* 106b2c41 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2c45 jne 0x106b2c51 */
  if (!C.zf) goto L_106b2c51;
  /* 106b2c47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2c4a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b2c4f jmp 0x106b2c67 */
  goto L_106b2c67;
L_106b2c51:;
  /* 106b2c51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2c54 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b2c59 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 106b2c5c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106b2c62 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 106b2c65 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_106b2c67:;
  /* 106b2c67 mov esp, ebp */
  ESP = (EBP);
  /* 106b2c69 pop ebp */
  EBP = (pop32());
  /* 106b2c6a ret  */
  ESPCHK(0x106b2b40u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x106b2c70 (52 bytes, 19 insns) */
void f_106b2c70(void) {
  FTRACE(0x106b2c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b2c70 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106b2c74 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 106b2c78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106b2c7a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 106b2c7e jne 0x106b2c89 */
  if (!C.zf) goto L_106b2c89;
  /* 106b2c80 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 106b2c84 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106b2c86 ret 0x10 */
  ESPCHK(0x106b2c70u, _esp0);
  ESP += 20; return;
L_106b2c89:;
  /* 106b2c89 push ebx */
  push32((uint32_t)(EBX));
  /* 106b2c8a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106b2c8c mov ebx, eax */
  EBX = (EAX);
  /* 106b2c8e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106b2c92 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106b2c96 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2c98 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106b2c9c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106b2c9e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2ca0 pop ebx */
  EBX = (pop32());
  /* 106b2ca1 ret 0x10 */
  ESPCHK(0x106b2c70u, _esp0);
  ESP += 20; return;
}

/* FUN_10012cb0 @ 0x106b2cb0 (46 bytes, 18 insns) */
void f_106b2cb0(void) {
  FTRACE(0x106b2cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b2cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b2cb1 mov ebp, esp */
  EBP = (ESP);
  /* 106b2cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2cb4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 106b2cb6 call 0x106a6d00 */
  push32(0x106b2cbbu); f_106a6d00();
  /* 106b2cbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2cbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2cc1 push eax */
  push32((uint32_t)(EAX));
  /* 106b2cc2 call 0x106b2ce0 */
  push32(0x106b2cc7u); f_106b2ce0();
  /* 106b2cc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2cca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106b2ccd push 0xc */
  push32((uint32_t)(0xcu));
  /* 106b2ccf call 0x106a6da0 */
  push32(0x106b2cd4u); f_106a6da0();
  /* 106b2cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2cd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b2cda mov esp, ebp */
  ESP = (EBP);
  /* 106b2cdc pop ebp */
  EBP = (pop32());
  /* 106b2cdd ret  */
  ESPCHK(0x106b2cb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x106b2ce0 (198 bytes, 69 insns) */
void f_106b2ce0(void) {
  FTRACE(0x106b2ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b2ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b2ce1 mov ebp, esp */
  EBP = (ESP);
  /* 106b2ce3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b2ce6 mov eax, dword ptr [0x106cf4ac] */
  EAX = (r32((uint32_t)(0x106cf4ac)));
  /* 106b2ceb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106b2cee cmp dword ptr [0x106d0fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2cf5 jne 0x106b2cfe */
  if (!C.zf) goto L_106b2cfe;
  /* 106b2cf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b2cf9 jmp 0x106b2da2 */
  goto L_106b2da2;
L_106b2cfe:;
  /* 106b2cfe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2d02 jne 0x106b2d26 */
  if (!C.zf) goto L_106b2d26;
  /* 106b2d04 cmp dword ptr [0x106cf4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2d0b je 0x106b2d26 */
  if (C.zf) goto L_106b2d26;
  /* 106b2d0d call 0x106b2e00 */
  push32(0x106b2d12u); f_106b2e00();
  /* 106b2d12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b2d14 je 0x106b2d1d */
  if (C.zf) goto L_106b2d1d;
  /* 106b2d16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b2d18 jmp 0x106b2da2 */
  goto L_106b2da2;
L_106b2d1d:;
  /* 106b2d1d mov ecx, dword ptr [0x106cf4ac] */
  ECX = (r32((uint32_t)(0x106cf4ac)));
  /* 106b2d23 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106b2d26:;
  /* 106b2d26 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2d2a je 0x106b2da0 */
  if (C.zf) goto L_106b2da0;
  /* 106b2d2c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2d30 je 0x106b2da0 */
  if (C.zf) goto L_106b2da0;
  /* 106b2d32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2d35 push edx */
  push32((uint32_t)(EDX));
  /* 106b2d36 call 0x106a6130 */
  push32(0x106b2d3bu); f_106a6130();
  /* 106b2d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2d3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106b2d41:;
  /* 106b2d41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b2d44 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2d47 je 0x106b2da0 */
  if (C.zf) goto L_106b2da0;
  /* 106b2d49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b2d4c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b2d4e push edx */
  push32((uint32_t)(EDX));
  /* 106b2d4f call 0x106a6130 */
  push32(0x106b2d54u); f_106a6130();
  /* 106b2d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2d57 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2d5a jbe 0x106b2d95 */
  if ((C.cf||C.zf)) goto L_106b2d95;
  /* 106b2d5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b2d5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b2d61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b2d64 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 106b2d68 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2d6b jne 0x106b2d95 */
  if (!C.zf) goto L_106b2d95;
  /* 106b2d6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b2d70 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2d71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2d74 push edx */
  push32((uint32_t)(EDX));
  /* 106b2d75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b2d78 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b2d7a push ecx */
  push32((uint32_t)(ECX));
  /* 106b2d7b call 0x106b2db0 */
  push32(0x106b2d80u); f_106b2db0();
  /* 106b2d80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2d83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b2d85 jne 0x106b2d95 */
  if (!C.zf) goto L_106b2d95;
  /* 106b2d87 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b2d8a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b2d8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b2d8f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 106b2d93 jmp 0x106b2da2 */
  goto L_106b2da2;
L_106b2d95:;
  /* 106b2d95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b2d98 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2d9b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106b2d9e jmp 0x106b2d41 */
  goto L_106b2d41;
L_106b2da0:;
  /* 106b2da0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106b2da2:;
  /* 106b2da2 mov esp, ebp */
  ESP = (EBP);
  /* 106b2da4 pop ebp */
  EBP = (pop32());
  /* 106b2da5 ret  */
  ESPCHK(0x106b2ce0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x106b2db0 (79 bytes, 32 insns) */
void f_106b2db0(void) {
  FTRACE(0x106b2db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b2db0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b2db1 mov ebp, esp */
  EBP = (ESP);
  /* 106b2db3 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2db4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2db8 jne 0x106b2dbe */
  if (!C.zf) goto L_106b2dbe;
  /* 106b2dba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b2dbc jmp 0x106b2dfb */
  goto L_106b2dfb;
L_106b2dbe:;
  /* 106b2dbe mov eax, dword ptr [0x106d0b64] */
  EAX = (r32((uint32_t)(0x106d0b64)));
  /* 106b2dc3 push eax */
  push32((uint32_t)(EAX));
  /* 106b2dc4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b2dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2dc8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b2dcb push edx */
  push32((uint32_t)(EDX));
  /* 106b2dcc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b2dcf push eax */
  push32((uint32_t)(EAX));
  /* 106b2dd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2dd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2dd6 mov edx, dword ptr [0x106d0e04] */
  EDX = (r32((uint32_t)(0x106d0e04)));
  /* 106b2ddc push edx */
  push32((uint32_t)(EDX));
  /* 106b2ddd call 0x106b2eb0 */
  push32(0x106b2de2u); f_106b2eb0();
  /* 106b2de2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2de5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106b2de8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2dec jne 0x106b2df5 */
  if (!C.zf) goto L_106b2df5;
  /* 106b2dee mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 106b2df3 jmp 0x106b2dfb */
  goto L_106b2dfb;
L_106b2df5:;
  /* 106b2df5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b2df8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_106b2dfb:;
  /* 106b2dfb mov esp, ebp */
  ESP = (EBP);
  /* 106b2dfd pop ebp */
  EBP = (pop32());
  /* 106b2dfe ret  */
  ESPCHK(0x106b2db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e00 @ 0x106b2e00 (174 bytes, 66 insns) */
void f_106b2e00(void) {
  FTRACE(0x106b2e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b2e00 push ebp */
  push32((uint32_t)(EBP));
  /* 106b2e01 mov ebp, esp */
  EBP = (ESP);
  /* 106b2e03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b2e06 mov eax, dword ptr [0x106cf4b4] */
  EAX = (r32((uint32_t)(0x106cf4b4)));
  /* 106b2e0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106b2e0e:;
  /* 106b2e0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b2e11 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2e14 je 0x106b2ea8 */
  if (C.zf) goto L_106b2ea8;
  /* 106b2e1a push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2e1c push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2e1e push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2e20 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2e22 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106b2e24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b2e27 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b2e29 push eax */
  push32((uint32_t)(EAX));
  /* 106b2e2a push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2e2c push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2e2e call dword ptr [0x106d1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1330))), 0x106b2e34u);
  /* 106b2e34 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106b2e37 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2e3b jne 0x106b2e42 */
  if (!C.zf) goto L_106b2e42;
  /* 106b2e3d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b2e40 jmp 0x106b2eaa */
  goto L_106b2eaa;
L_106b2e42:;
  /* 106b2e42 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 106b2e44 push 0x106cb90c */
  push32((uint32_t)(0x106cb90cu));
  /* 106b2e49 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b2e4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2e4e push ecx */
  push32((uint32_t)(ECX));
  /* 106b2e4f call 0x106a3300 */
  push32(0x106b2e54u); f_106a3300();
  /* 106b2e54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2e57 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106b2e5a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2e5e jne 0x106b2e65 */
  if (!C.zf) goto L_106b2e65;
  /* 106b2e60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b2e63 jmp 0x106b2eaa */
  goto L_106b2eaa;
L_106b2e65:;
  /* 106b2e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2e69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b2e6c push edx */
  push32((uint32_t)(EDX));
  /* 106b2e6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b2e70 push eax */
  push32((uint32_t)(EAX));
  /* 106b2e71 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106b2e73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b2e76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b2e78 push edx */
  push32((uint32_t)(EDX));
  /* 106b2e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2e7b push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2e7d call dword ptr [0x106d1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1330))), 0x106b2e83u);
  /* 106b2e83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b2e85 jne 0x106b2e8c */
  if (!C.zf) goto L_106b2e8c;
  /* 106b2e87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b2e8a jmp 0x106b2eaa */
  goto L_106b2eaa;
L_106b2e8c:;
  /* 106b2e8c push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2e8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b2e91 push eax */
  push32((uint32_t)(EAX));
  /* 106b2e92 call 0x106b3300 */
  push32(0x106b2e97u); f_106b3300();
  /* 106b2e97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2e9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b2e9d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2ea0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106b2ea3 jmp 0x106b2e0e */
  goto L_106b2e0e;
L_106b2ea8:;
  /* 106b2ea8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106b2eaa:;
  /* 106b2eaa mov esp, ebp */
  ESP = (EBP);
  /* 106b2eac pop ebp */
  EBP = (pop32());
  /* 106b2ead ret  */
  ESPCHK(0x106b2e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012eb0 @ 0x106b2eb0 (970 bytes, 340 insns) */
void f_106b2eb0(void) {
  FTRACE(0x106b2eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b2eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b2eb1 mov ebp, esp */
  EBP = (ESP);
  /* 106b2eb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106b2eb5 push 0x106cb960 */
  push32((uint32_t)(0x106cb960u));
  /* 106b2eba push 0x106ac408 */
  push32((uint32_t)(0x106ac408u));
  /* 106b2ebf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 106b2ec5 push eax */
  push32((uint32_t)(EAX));
  /* 106b2ec6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 106b2ecd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2ed0 push ebx */
  push32((uint32_t)(EBX));
  /* 106b2ed1 push esi */
  push32((uint32_t)(ESI));
  /* 106b2ed2 push edi */
  push32((uint32_t)(EDI));
  /* 106b2ed3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106b2ed6 cmp dword ptr [0x106cf7f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2edd jne 0x106b2f36 */
  if (!C.zf) goto L_106b2f36;
  /* 106b2edf push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2ee1 push 0x106cafbc */
  push32((uint32_t)(0x106cafbcu));
  /* 106b2ee6 push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2ee8 push 0x106cafbc */
  push32((uint32_t)(0x106cafbcu));
  /* 106b2eed push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2eef push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2ef1 call dword ptr [0x106d1264] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1264))), 0x106b2ef7u);
  /* 106b2ef7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b2ef9 je 0x106b2f07 */
  if (C.zf) goto L_106b2f07;
  /* 106b2efb mov dword ptr [0x106cf7f4], 1 */
  w32((uint32_t)(0x106cf7f4), (0x1u));
  /* 106b2f05 jmp 0x106b2f36 */
  goto L_106b2f36;
L_106b2f07:;
  /* 106b2f07 push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2f09 push 0x106cafb8 */
  push32((uint32_t)(0x106cafb8u));
  /* 106b2f0e push 1 */
  push32((uint32_t)(0x1u));
  /* 106b2f10 push 0x106cafb8 */
  push32((uint32_t)(0x106cafb8u));
  /* 106b2f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b2f19 call dword ptr [0x106d1270] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1270))), 0x106b2f1fu);
  /* 106b2f1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b2f21 je 0x106b2f2f */
  if (C.zf) goto L_106b2f2f;
  /* 106b2f23 mov dword ptr [0x106cf7f4], 2 */
  w32((uint32_t)(0x106cf7f4), (0x2u));
  /* 106b2f2d jmp 0x106b2f36 */
  goto L_106b2f36;
L_106b2f2f:;
  /* 106b2f2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b2f31 jmp 0x106b3294 */
  goto L_106b3294;
L_106b2f36:;
  /* 106b2f36 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2f3a jle 0x106b2f4f */
  if ((C.zf||C.sf!=C.of)) goto L_106b2f4f;
  /* 106b2f3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b2f3f push eax */
  push32((uint32_t)(EAX));
  /* 106b2f40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b2f43 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2f44 call 0x106b32b0 */
  push32(0x106b2f49u); f_106b32b0();
  /* 106b2f49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2f4c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_106b2f4f:;
  /* 106b2f4f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2f53 jle 0x106b2f68 */
  if ((C.zf||C.sf!=C.of)) goto L_106b2f68;
  /* 106b2f55 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106b2f58 push edx */
  push32((uint32_t)(EDX));
  /* 106b2f59 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b2f5c push eax */
  push32((uint32_t)(EAX));
  /* 106b2f5d call 0x106b32b0 */
  push32(0x106b2f62u); f_106b32b0();
  /* 106b2f62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b2f65 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_106b2f68:;
  /* 106b2f68 cmp dword ptr [0x106cf7f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2f6f jne 0x106b2f94 */
  if (!C.zf) goto L_106b2f94;
  /* 106b2f71 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106b2f74 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2f75 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b2f78 push edx */
  push32((uint32_t)(EDX));
  /* 106b2f79 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b2f7c push eax */
  push32((uint32_t)(EAX));
  /* 106b2f7d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b2f80 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2f81 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b2f84 push edx */
  push32((uint32_t)(EDX));
  /* 106b2f85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b2f88 push eax */
  push32((uint32_t)(EAX));
  /* 106b2f89 call dword ptr [0x106d1270] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1270))), 0x106b2f8fu);
  /* 106b2f8f jmp 0x106b3294 */
  goto L_106b3294;
L_106b2f94:;
  /* 106b2f94 cmp dword ptr [0x106cf7f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf7f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2f9b jne 0x106b3292 */
  if (!C.zf) goto L_106b3292;
  /* 106b2fa1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2fa5 jne 0x106b2fb0 */
  if (!C.zf) goto L_106b2fb0;
  /* 106b2fa7 mov ecx, dword ptr [0x106cf6a0] */
  ECX = (r32((uint32_t)(0x106cf6a0)));
  /* 106b2fad mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_106b2fb0:;
  /* 106b2fb0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2fb4 je 0x106b2fc0 */
  if (C.zf) goto L_106b2fc0;
  /* 106b2fb6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2fba jne 0x106b313c */
  if (!C.zf) goto L_106b313c;
L_106b2fc0:;
  /* 106b2fc0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b2fc3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2fc6 jne 0x106b2fd2 */
  if (!C.zf) goto L_106b2fd2;
  /* 106b2fc8 mov eax, 2 */
  EAX = (0x2u);
  /* 106b2fcd jmp 0x106b3294 */
  goto L_106b3294;
L_106b2fd2:;
  /* 106b2fd2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2fd6 jle 0x106b2fe2 */
  if ((C.zf||C.sf!=C.of)) goto L_106b2fe2;
  /* 106b2fd8 mov eax, 1 */
  EAX = (0x1u);
  /* 106b2fdd jmp 0x106b3294 */
  goto L_106b3294;
L_106b2fe2:;
  /* 106b2fe2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b2fe6 jle 0x106b2ff2 */
  if ((C.zf||C.sf!=C.of)) goto L_106b2ff2;
  /* 106b2fe8 mov eax, 3 */
  EAX = (0x3u);
  /* 106b2fed jmp 0x106b3294 */
  goto L_106b3294;
L_106b2ff2:;
  /* 106b2ff2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 106b2ff5 push eax */
  push32((uint32_t)(EAX));
  /* 106b2ff6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 106b2ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 106b2ffa call dword ptr [0x106d1370] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1370))), 0x106b3000u);
  /* 106b3000 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b3002 jne 0x106b300b */
  if (!C.zf) goto L_106b300b;
  /* 106b3004 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b3006 jmp 0x106b3294 */
  goto L_106b3294;
L_106b300b:;
  /* 106b300b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b300f jne 0x106b3017 */
  if (!C.zf) goto L_106b3017;
  /* 106b3011 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3015 je 0x106b3044 */
  if (C.zf) goto L_106b3044;
L_106b3017:;
  /* 106b3017 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b301b jne 0x106b3023 */
  if (!C.zf) goto L_106b3023;
  /* 106b301d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3021 je 0x106b3044 */
  if (C.zf) goto L_106b3044;
L_106b3023:;
  /* 106b3023 push 0x106cb920 */
  push32((uint32_t)(0x106cb920u));
  /* 106b3028 push 0 */
  push32((uint32_t)(0x0u));
  /* 106b302a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 106b302f push 0x106cb918 */
  push32((uint32_t)(0x106cb918u));
  /* 106b3034 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b3036 call 0x106a23c0 */
  push32(0x106b303bu); f_106a23c0();
  /* 106b303b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b303e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3041 jne 0x106b3044 */
  if (!C.zf) goto L_106b3044;
  /* 106b3043 int3  */
  x86_unimpl("int3 @ 0x106b3043");
L_106b3044:;
  /* 106b3044 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b3046 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b3048 jne 0x106b300b */
  if (!C.zf) goto L_106b300b;
  /* 106b304a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b304e jle 0x106b30c3 */
  if ((C.zf||C.sf!=C.of)) goto L_106b30c3;
  /* 106b3050 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3054 jae 0x106b3060 */
  if (!C.cf) goto L_106b3060;
  /* 106b3056 mov eax, 3 */
  EAX = (0x3u);
  /* 106b305b jmp 0x106b3294 */
  goto L_106b3294;
L_106b3060:;
  /* 106b3060 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 106b3063 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 106b3066 jmp 0x106b3071 */
  goto L_106b3071;
L_106b3068:;
  /* 106b3068 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 106b306b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b306e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_106b3071:;
  /* 106b3071 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 106b3074 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b3076 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b3078 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b307a je 0x106b30b9 */
  if (C.zf) goto L_106b30b9;
  /* 106b307c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 106b307f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b3081 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 106b3084 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b3086 je 0x106b30b9 */
  if (C.zf) goto L_106b30b9;
  /* 106b3088 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b308b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b308d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106b308f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 106b3092 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b3094 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b3096 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3098 jl 0x106b30b7 */
  if ((C.sf!=C.of)) goto L_106b30b7;
  /* 106b309a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b309d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b309f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106b30a1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 106b30a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b30a6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 106b30a9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b30ab jg 0x106b30b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_106b30b7;
  /* 106b30ad mov eax, 2 */
  EAX = (0x2u);
  /* 106b30b2 jmp 0x106b3294 */
  goto L_106b3294;
L_106b30b7:;
  /* 106b30b7 jmp 0x106b3068 */
  goto L_106b3068;
L_106b30b9:;
  /* 106b30b9 mov eax, 3 */
  EAX = (0x3u);
  /* 106b30be jmp 0x106b3294 */
  goto L_106b3294;
L_106b30c3:;
  /* 106b30c3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b30c7 jle 0x106b313c */
  if ((C.zf||C.sf!=C.of)) goto L_106b313c;
  /* 106b30c9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b30cd jae 0x106b30d9 */
  if (!C.cf) goto L_106b30d9;
  /* 106b30cf mov eax, 1 */
  EAX = (0x1u);
  /* 106b30d4 jmp 0x106b3294 */
  goto L_106b3294;
L_106b30d9:;
  /* 106b30d9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 106b30dc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 106b30df jmp 0x106b30ea */
  goto L_106b30ea;
L_106b30e1:;
  /* 106b30e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 106b30e4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b30e7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_106b30ea:;
  /* 106b30ea mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 106b30ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b30ef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106b30f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b30f3 je 0x106b3132 */
  if (C.zf) goto L_106b3132;
  /* 106b30f5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 106b30f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b30fa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 106b30fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106b30ff je 0x106b3132 */
  if (C.zf) goto L_106b3132;
  /* 106b3101 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b3104 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b3106 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106b3108 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 106b310b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106b310d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106b310f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3111 jl 0x106b3130 */
  if ((C.sf!=C.of)) goto L_106b3130;
  /* 106b3113 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b3116 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b3118 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106b311a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 106b311d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b311f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 106b3122 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3124 jg 0x106b3130 */
  if ((!C.zf&&C.sf==C.of)) goto L_106b3130;
  /* 106b3126 mov eax, 2 */
  EAX = (0x2u);
  /* 106b312b jmp 0x106b3294 */
  goto L_106b3294;
L_106b3130:;
  /* 106b3130 jmp 0x106b30e1 */
  goto L_106b30e1;
L_106b3132:;
  /* 106b3132 mov eax, 1 */
  EAX = (0x1u);
  /* 106b3137 jmp 0x106b3294 */
  goto L_106b3294;
L_106b313c:;
  /* 106b313c push 0 */
  push32((uint32_t)(0x0u));
  /* 106b313e push 0 */
  push32((uint32_t)(0x0u));
  /* 106b3140 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b3143 push ecx */
  push32((uint32_t)(ECX));
  /* 106b3144 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b3147 push edx */
  push32((uint32_t)(EDX));
  /* 106b3148 push 9 */
  push32((uint32_t)(0x9u));
  /* 106b314a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106b314d push eax */
  push32((uint32_t)(EAX));
  /* 106b314e call dword ptr [0x106d12b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12b0))), 0x106b3154u);
  /* 106b3154 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106b3157 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b315b jne 0x106b3164 */
  if (!C.zf) goto L_106b3164;
  /* 106b315d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b315f jmp 0x106b3294 */
  goto L_106b3294;
L_106b3164:;
  /* 106b3164 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106b316b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106b316e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106b3170 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3173 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106b3175 call 0x106a64a0 */
  push32(0x106b317au); f_106a64a0();
  /* 106b317a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 106b317d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106b3180 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 106b3183 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106b3186 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106b318d jmp 0x106b31a6 */
  goto L_106b31a6;
  /* 106b318f mov eax, 1 */
  EAX = (0x1u);
  /* 106b3194 ret  */
  ESPCHK(0x106b2eb0u, _esp0);
  ESP += 4; return;
  /* 106b3195 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106b3198 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106b319f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106b31a6:;
  /* 106b31a6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b31aa jne 0x106b31b3 */
  if (!C.zf) goto L_106b31b3;
  /* 106b31ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b31ae jmp 0x106b3294 */
  goto L_106b3294;
L_106b31b3:;
  /* 106b31b3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106b31b6 push edx */
  push32((uint32_t)(EDX));
  /* 106b31b7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106b31ba push eax */
  push32((uint32_t)(EAX));
  /* 106b31bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106b31be push ecx */
  push32((uint32_t)(ECX));
  /* 106b31bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106b31c2 push edx */
  push32((uint32_t)(EDX));
  /* 106b31c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106b31c5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106b31c8 push eax */
  push32((uint32_t)(EAX));
  /* 106b31c9 call dword ptr [0x106d12b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12b0))), 0x106b31cfu);
  /* 106b31cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b31d1 jne 0x106b31da */
  if (!C.zf) goto L_106b31da;
  /* 106b31d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b31d5 jmp 0x106b3294 */
  goto L_106b3294;
L_106b31da:;
  /* 106b31da push 0 */
  push32((uint32_t)(0x0u));
  /* 106b31dc push 0 */
  push32((uint32_t)(0x0u));
  /* 106b31de mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106b31e1 push ecx */
  push32((uint32_t)(ECX));
  /* 106b31e2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b31e5 push edx */
  push32((uint32_t)(EDX));
  /* 106b31e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 106b31e8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106b31eb push eax */
  push32((uint32_t)(EAX));
  /* 106b31ec call dword ptr [0x106d12b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12b0))), 0x106b31f2u);
  /* 106b31f2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106b31f5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b31f9 jne 0x106b3202 */
  if (!C.zf) goto L_106b3202;
  /* 106b31fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b31fd jmp 0x106b3294 */
  goto L_106b3294;
L_106b3202:;
  /* 106b3202 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106b3209 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106b320c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106b320e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3211 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106b3213 call 0x106a64a0 */
  push32(0x106b3218u); f_106a64a0();
  /* 106b3218 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 106b321b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106b321e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 106b3221 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 106b3224 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106b322b jmp 0x106b3244 */
  goto L_106b3244;
  /* 106b322d mov eax, 1 */
  EAX = (0x1u);
  /* 106b3232 ret  */
  ESPCHK(0x106b2eb0u, _esp0);
  ESP += 4; return;
  /* 106b3233 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106b3236 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 106b323d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106b3244:;
  /* 106b3244 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3248 jne 0x106b324e */
  if (!C.zf) goto L_106b324e;
  /* 106b324a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b324c jmp 0x106b3294 */
  goto L_106b3294;
L_106b324e:;
  /* 106b324e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106b3251 push edx */
  push32((uint32_t)(EDX));
  /* 106b3252 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106b3255 push eax */
  push32((uint32_t)(EAX));
  /* 106b3256 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106b3259 push ecx */
  push32((uint32_t)(ECX));
  /* 106b325a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106b325d push edx */
  push32((uint32_t)(EDX));
  /* 106b325e push 1 */
  push32((uint32_t)(0x1u));
  /* 106b3260 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106b3263 push eax */
  push32((uint32_t)(EAX));
  /* 106b3264 call dword ptr [0x106d12b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12b0))), 0x106b326au);
  /* 106b326a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b326c jne 0x106b3272 */
  if (!C.zf) goto L_106b3272;
  /* 106b326e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b3270 jmp 0x106b3294 */
  goto L_106b3294;
L_106b3272:;
  /* 106b3272 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106b3275 push ecx */
  push32((uint32_t)(ECX));
  /* 106b3276 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106b3279 push edx */
  push32((uint32_t)(EDX));
  /* 106b327a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106b327d push eax */
  push32((uint32_t)(EAX));
  /* 106b327e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106b3281 push ecx */
  push32((uint32_t)(ECX));
  /* 106b3282 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b3285 push edx */
  push32((uint32_t)(EDX));
  /* 106b3286 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b3289 push eax */
  push32((uint32_t)(EAX));
  /* 106b328a call dword ptr [0x106d1264] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1264))), 0x106b3290u);
  /* 106b3290 jmp 0x106b3294 */
  goto L_106b3294;
L_106b3292:;
  /* 106b3292 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106b3294:;
  /* 106b3294 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 106b3297 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b329a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 106b32a1 pop edi */
  EDI = (pop32());
  /* 106b32a2 pop esi */
  ESI = (pop32());
  /* 106b32a3 pop ebx */
  EBX = (pop32());
  /* 106b32a4 mov esp, ebp */
  ESP = (EBP);
  /* 106b32a6 pop ebp */
  EBP = (pop32());
  /* 106b32a7 ret  */
  ESPCHK(0x106b2eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100132b0 @ 0x106b32b0 (80 bytes, 32 insns) */
void f_106b32b0(void) {
  FTRACE(0x106b32b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b32b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b32b1 mov ebp, esp */
  EBP = (ESP);
  /* 106b32b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b32b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b32b9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106b32bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b32bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106b32c2:;
  /* 106b32c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b32c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b32c8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b32cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106b32ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b32d0 je 0x106b32e7 */
  if (C.zf) goto L_106b32e7;
  /* 106b32d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b32d5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106b32d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b32da je 0x106b32e7 */
  if (C.zf) goto L_106b32e7;
  /* 106b32dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b32df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b32e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106b32e5 jmp 0x106b32c2 */
  goto L_106b32c2;
L_106b32e7:;
  /* 106b32e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b32ea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106b32ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b32ef jne 0x106b32f9 */
  if (!C.zf) goto L_106b32f9;
  /* 106b32f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b32f4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b32f7 jmp 0x106b32fc */
  goto L_106b32fc;
L_106b32f9:;
  /* 106b32f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_106b32fc:;
  /* 106b32fc mov esp, ebp */
  ESP = (EBP);
  /* 106b32fe pop ebp */
  EBP = (pop32());
  /* 106b32ff ret  */
  ESPCHK(0x106b32b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013300 @ 0x106b3300 (736 bytes, 224 insns) */
void f_106b3300(void) {
  FTRACE(0x106b3300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b3300 push ebp */
  push32((uint32_t)(EBP));
  /* 106b3301 mov ebp, esp */
  EBP = (ESP);
  /* 106b3303 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b3306 push esi */
  push32((uint32_t)(ESI));
  /* 106b3307 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b330b je 0x106b332c */
  if (C.zf) goto L_106b332c;
  /* 106b330d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 106b330f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b3312 push eax */
  push32((uint32_t)(EAX));
  /* 106b3313 call 0x106b3750 */
  push32(0x106b3318u); f_106b3750();
  /* 106b3318 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b331b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106b331e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3322 je 0x106b332c */
  if (C.zf) goto L_106b332c;
  /* 106b3324 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b3327 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b332a jne 0x106b3334 */
  if (!C.zf) goto L_106b3334;
L_106b332c:;
  /* 106b332c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b332f jmp 0x106b35db */
  goto L_106b35db;
L_106b3334:;
  /* 106b3334 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106b3337 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 106b333b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106b333d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b333f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 106b3340 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106b3343 mov ecx, dword ptr [0x106cf4ac] */
  ECX = (r32((uint32_t)(0x106cf4ac)));
  /* 106b3349 cmp ecx, dword ptr [0x106cf4b0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106cf4b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b334f jne 0x106b3365 */
  if (!C.zf) goto L_106b3365;
  /* 106b3351 mov edx, dword ptr [0x106cf4ac] */
  EDX = (r32((uint32_t)(0x106cf4ac)));
  /* 106b3357 push edx */
  push32((uint32_t)(EDX));
  /* 106b3358 call 0x106b3660 */
  push32(0x106b335du); f_106b3660();
  /* 106b335d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3360 mov dword ptr [0x106cf4ac], eax */
  w32((uint32_t)(0x106cf4ac), (EAX));
L_106b3365:;
  /* 106b3365 cmp dword ptr [0x106cf4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b336c jne 0x106b3425 */
  if (!C.zf) goto L_106b3425;
  /* 106b3372 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3376 je 0x106b3397 */
  if (C.zf) goto L_106b3397;
  /* 106b3378 cmp dword ptr [0x106cf4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b337f je 0x106b3397 */
  if (C.zf) goto L_106b3397;
  /* 106b3381 call 0x106b2e00 */
  push32(0x106b3386u); f_106b2e00();
  /* 106b3386 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b3388 je 0x106b3392 */
  if (C.zf) goto L_106b3392;
  /* 106b338a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b338d jmp 0x106b35db */
  goto L_106b35db;
L_106b3392:;
  /* 106b3392 jmp 0x106b3425 */
  goto L_106b3425;
L_106b3397:;
  /* 106b3397 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b339b je 0x106b33a4 */
  if (C.zf) goto L_106b33a4;
  /* 106b339d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b339f jmp 0x106b35db */
  goto L_106b35db;
L_106b33a4:;
  /* 106b33a4 cmp dword ptr [0x106cf4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b33ab jne 0x106b33e4 */
  if (!C.zf) goto L_106b33e4;
  /* 106b33ad push 0x87 */
  push32((uint32_t)(0x87u));
  /* 106b33b2 push 0x106cb978 */
  push32((uint32_t)(0x106cb978u));
  /* 106b33b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b33b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 106b33bb call 0x106a3300 */
  push32(0x106b33c0u); f_106a3300();
  /* 106b33c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b33c3 mov dword ptr [0x106cf4ac], eax */
  w32((uint32_t)(0x106cf4ac), (EAX));
  /* 106b33c8 cmp dword ptr [0x106cf4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b33cf jne 0x106b33d9 */
  if (!C.zf) goto L_106b33d9;
  /* 106b33d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b33d4 jmp 0x106b35db */
  goto L_106b35db;
L_106b33d9:;
  /* 106b33d9 mov eax, dword ptr [0x106cf4ac] */
  EAX = (r32((uint32_t)(0x106cf4ac)));
  /* 106b33de mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_106b33e4:;
  /* 106b33e4 cmp dword ptr [0x106cf4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b33eb jne 0x106b3425 */
  if (!C.zf) goto L_106b3425;
  /* 106b33ed push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 106b33f2 push 0x106cb978 */
  push32((uint32_t)(0x106cb978u));
  /* 106b33f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b33f9 push 4 */
  push32((uint32_t)(0x4u));
  /* 106b33fb call 0x106a3300 */
  push32(0x106b3400u); f_106a3300();
  /* 106b3400 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3403 mov dword ptr [0x106cf4b4], eax */
  w32((uint32_t)(0x106cf4b4), (EAX));
  /* 106b3408 cmp dword ptr [0x106cf4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b340f jne 0x106b3419 */
  if (!C.zf) goto L_106b3419;
  /* 106b3411 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b3414 jmp 0x106b35db */
  goto L_106b35db;
L_106b3419:;
  /* 106b3419 mov ecx, dword ptr [0x106cf4b4] */
  ECX = (r32((uint32_t)(0x106cf4b4)));
  /* 106b341f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_106b3425:;
  /* 106b3425 mov edx, dword ptr [0x106cf4ac] */
  EDX = (r32((uint32_t)(0x106cf4ac)));
  /* 106b342b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106b342e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106b3431 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b3434 push eax */
  push32((uint32_t)(EAX));
  /* 106b3435 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b3438 push ecx */
  push32((uint32_t)(ECX));
  /* 106b3439 call 0x106b35e0 */
  push32(0x106b343eu); f_106b35e0();
  /* 106b343e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3441 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106b3444 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3448 jl 0x106b34e1 */
  if ((C.sf!=C.of)) goto L_106b34e1;
  /* 106b344e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b3451 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3454 je 0x106b34e1 */
  if (C.zf) goto L_106b34e1;
  /* 106b345a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b345e je 0x106b34d3 */
  if (C.zf) goto L_106b34d3;
  /* 106b3460 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b3462 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b3465 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b3468 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106b346b push edx */
  push32((uint32_t)(EDX));
  /* 106b346c call 0x106a3d90 */
  push32(0x106b3471u); f_106a3d90();
  /* 106b3471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3474 jmp 0x106b347f */
  goto L_106b347f;
L_106b3476:;
  /* 106b3476 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b3479 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b347c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106b347f:;
  /* 106b347f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b3482 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b3485 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3489 je 0x106b34a0 */
  if (C.zf) goto L_106b34a0;
  /* 106b348b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b348e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b3491 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b3494 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 106b3497 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 106b349b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 106b349e jmp 0x106b3476 */
  goto L_106b3476;
L_106b34a0:;
  /* 106b34a0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 106b34a5 push 0x106cb978 */
  push32((uint32_t)(0x106cb978u));
  /* 106b34aa push 2 */
  push32((uint32_t)(0x2u));
  /* 106b34ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b34af shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 106b34b2 push eax */
  push32((uint32_t)(EAX));
  /* 106b34b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b34b6 push ecx */
  push32((uint32_t)(ECX));
  /* 106b34b7 call 0x106a3790 */
  push32(0x106b34bcu); f_106a3790();
  /* 106b34bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b34bf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106b34c2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b34c6 je 0x106b34d1 */
  if (C.zf) goto L_106b34d1;
  /* 106b34c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b34cb mov dword ptr [0x106cf4ac], edx */
  w32((uint32_t)(0x106cf4ac), (EDX));
L_106b34d1:;
  /* 106b34d1 jmp 0x106b34df */
  goto L_106b34df;
L_106b34d3:;
  /* 106b34d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b34d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b34d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b34dc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_106b34df:;
  /* 106b34df jmp 0x106b3554 */
  goto L_106b3554;
L_106b34e1:;
  /* 106b34e1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b34e5 jne 0x106b354d */
  if (!C.zf) goto L_106b354d;
  /* 106b34e7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b34eb jge 0x106b34f5 */
  if ((C.sf==C.of)) goto L_106b34f5;
  /* 106b34ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b34f0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106b34f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106b34f5:;
  /* 106b34f5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 106b34fa push 0x106cb978 */
  push32((uint32_t)(0x106cb978u));
  /* 106b34ff push 2 */
  push32((uint32_t)(0x2u));
  /* 106b3501 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b3504 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 106b350b push edx */
  push32((uint32_t)(EDX));
  /* 106b350c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b350f push eax */
  push32((uint32_t)(EAX));
  /* 106b3510 call 0x106a3790 */
  push32(0x106b3515u); f_106a3790();
  /* 106b3515 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3518 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106b351b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b351f jne 0x106b3529 */
  if (!C.zf) goto L_106b3529;
  /* 106b3521 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b3524 jmp 0x106b35db */
  goto L_106b35db;
L_106b3529:;
  /* 106b3529 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b352c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b352f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b3532 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 106b3535 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b3538 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b353b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 106b3543 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b3546 mov dword ptr [0x106cf4ac], eax */
  w32((uint32_t)(0x106cf4ac), (EAX));
  /* 106b354b jmp 0x106b3554 */
  goto L_106b3554;
L_106b354d:;
  /* 106b354d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b354f jmp 0x106b35db */
  goto L_106b35db;
L_106b3554:;
  /* 106b3554 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3558 je 0x106b35d9 */
  if (C.zf) goto L_106b35d9;
  /* 106b355a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 106b355f push 0x106cb978 */
  push32((uint32_t)(0x106cb978u));
  /* 106b3564 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b3566 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b3569 push ecx */
  push32((uint32_t)(ECX));
  /* 106b356a call 0x106a6130 */
  push32(0x106b356fu); f_106a6130();
  /* 106b356f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3572 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3575 push eax */
  push32((uint32_t)(EAX));
  /* 106b3576 call 0x106a3300 */
  push32(0x106b357bu); f_106a3300();
  /* 106b357b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b357e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106b3581 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3585 je 0x106b35d9 */
  if (C.zf) goto L_106b35d9;
  /* 106b3587 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b358a push edx */
  push32((uint32_t)(EDX));
  /* 106b358b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b358e push eax */
  push32((uint32_t)(EAX));
  /* 106b358f call 0x106a62b0 */
  push32(0x106b3594u); f_106a62b0();
  /* 106b3594 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3597 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106b359a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b359d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b35a0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b35a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106b35a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b35a8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106b35ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b35ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b35b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106b35b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b35b7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106b35b9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b35bb not edx */
  EDX = (~(EDX));
  /* 106b35bd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 106b35c0 push edx */
  push32((uint32_t)(EDX));
  /* 106b35c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b35c4 push eax */
  push32((uint32_t)(EAX));
  /* 106b35c5 call dword ptr [0x106d1260] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1260))), 0x106b35cbu);
  /* 106b35cb push 2 */
  push32((uint32_t)(0x2u));
  /* 106b35cd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b35d0 push ecx */
  push32((uint32_t)(ECX));
  /* 106b35d1 call 0x106a3d90 */
  push32(0x106b35d6u); f_106a3d90();
  /* 106b35d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106b35d9:;
  /* 106b35d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106b35db:;
  /* 106b35db pop esi */
  ESI = (pop32());
  /* 106b35dc mov esp, ebp */
  ESP = (EBP);
  /* 106b35de pop ebp */
  EBP = (pop32());
  /* 106b35df ret  */
  ESPCHK(0x106b3300u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x106b35e0 (124 bytes, 47 insns) */
void f_106b35e0(void) {
  FTRACE(0x106b35e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b35e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106b35e1 mov ebp, esp */
  EBP = (ESP);
  /* 106b35e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106b35e4 mov eax, dword ptr [0x106cf4ac] */
  EAX = (r32((uint32_t)(0x106cf4ac)));
  /* 106b35e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106b35ec jmp 0x106b35f7 */
  goto L_106b35f7;
L_106b35ee:;
  /* 106b35ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b35f1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b35f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106b35f7:;
  /* 106b35f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b35fa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b35fd je 0x106b364a */
  if (C.zf) goto L_106b364a;
  /* 106b35ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b3602 push eax */
  push32((uint32_t)(EAX));
  /* 106b3603 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b3606 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b3608 push edx */
  push32((uint32_t)(EDX));
  /* 106b3609 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b360c push eax */
  push32((uint32_t)(EAX));
  /* 106b360d call 0x106b2db0 */
  push32(0x106b3612u); f_106b2db0();
  /* 106b3612 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3615 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106b3617 jne 0x106b3648 */
  if (!C.zf) goto L_106b3648;
  /* 106b3619 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b361c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b361e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b3621 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 106b3625 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3628 je 0x106b363a */
  if (C.zf) goto L_106b363a;
  /* 106b362a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b362d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b362f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b3632 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 106b3636 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b3638 jne 0x106b3648 */
  if (!C.zf) goto L_106b3648;
L_106b363a:;
  /* 106b363a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b363d sub eax, dword ptr [0x106cf4ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106cf4ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b3643 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 106b3646 jmp 0x106b3658 */
  goto L_106b3658;
L_106b3648:;
  /* 106b3648 jmp 0x106b35ee */
  goto L_106b35ee;
L_106b364a:;
  /* 106b364a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b364d sub eax, dword ptr [0x106cf4ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106cf4ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b3653 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 106b3656 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_106b3658:;
  /* 106b3658 mov esp, ebp */
  ESP = (EBP);
  /* 106b365a pop ebp */
  EBP = (pop32());
  /* 106b365b ret  */
  ESPCHK(0x106b35e0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x106b3660 (238 bytes, 80 insns) */
void f_106b3660(void) {
  FTRACE(0x106b3660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b3660 push ebp */
  push32((uint32_t)(EBP));
  /* 106b3661 mov ebp, esp */
  EBP = (ESP);
  /* 106b3663 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b3666 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106b366d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b3670 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106b3673 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3677 jne 0x106b3680 */
  if (!C.zf) goto L_106b3680;
  /* 106b3679 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b367b jmp 0x106b374a */
  goto L_106b374a;
L_106b3680:;
  /* 106b3680 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b3683 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b3685 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b3688 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b368b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106b368e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b3690 je 0x106b369d */
  if (C.zf) goto L_106b369d;
  /* 106b3692 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b3695 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3698 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106b369b jmp 0x106b3680 */
  goto L_106b3680;
L_106b369d:;
  /* 106b369d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 106b36a2 push 0x106cb978 */
  push32((uint32_t)(0x106cb978u));
  /* 106b36a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106b36a9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b36ac lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 106b36b3 push eax */
  push32((uint32_t)(EAX));
  /* 106b36b4 call 0x106a3300 */
  push32(0x106b36b9u); f_106a3300();
  /* 106b36b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b36bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106b36bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b36c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106b36c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b36c9 jne 0x106b36d5 */
  if (!C.zf) goto L_106b36d5;
  /* 106b36cb push 9 */
  push32((uint32_t)(0x9u));
  /* 106b36cd call 0x106a2270 */
  push32(0x106b36d2u); f_106a2270();
  /* 106b36d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106b36d5:;
  /* 106b36d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b36d8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106b36db:;
  /* 106b36db mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b36de cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b36e1 je 0x106b373e */
  if (C.zf) goto L_106b373e;
  /* 106b36e3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 106b36e8 push 0x106cb978 */
  push32((uint32_t)(0x106cb978u));
  /* 106b36ed push 2 */
  push32((uint32_t)(0x2u));
  /* 106b36ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b36f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106b36f4 push edx */
  push32((uint32_t)(EDX));
  /* 106b36f5 call 0x106a6130 */
  push32(0x106b36fau); f_106a6130();
  /* 106b36fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b36fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3700 push eax */
  push32((uint32_t)(EAX));
  /* 106b3701 call 0x106a3300 */
  push32(0x106b3706u); f_106a3300();
  /* 106b3706 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3709 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b370c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106b370e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b3711 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3714 je 0x106b372a */
  if (C.zf) goto L_106b372a;
  /* 106b3716 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b3719 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106b371b push ecx */
  push32((uint32_t)(ECX));
  /* 106b371c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b371f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106b3721 push eax */
  push32((uint32_t)(EAX));
  /* 106b3722 call 0x106a62b0 */
  push32(0x106b3727u); f_106a62b0();
  /* 106b3727 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106b372a:;
  /* 106b372a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b372d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3730 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106b3733 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b3736 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3739 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106b373c jmp 0x106b36db */
  goto L_106b36db;
L_106b373e:;
  /* 106b373e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b3741 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106b3747 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106b374a:;
  /* 106b374a mov esp, ebp */
  ESP = (EBP);
  /* 106b374c pop ebp */
  EBP = (pop32());
  /* 106b374d ret  */
  ESPCHK(0x106b3660u, _esp0);
  ESP += 4; return;
}

/* FUN_10013750 @ 0x106b3750 (237 bytes, 81 insns) */
void f_106b3750(void) {
  FTRACE(0x106b3750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b3750 push ebp */
  push32((uint32_t)(EBP));
  /* 106b3751 mov ebp, esp */
  EBP = (ESP);
  /* 106b3753 push ecx */
  push32((uint32_t)(ECX));
  /* 106b3754 cmp dword ptr [0x106d0bec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0bec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b375b jne 0x106b3772 */
  if (!C.zf) goto L_106b3772;
  /* 106b375d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106b3760 push eax */
  push32((uint32_t)(EAX));
  /* 106b3761 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b3764 push ecx */
  push32((uint32_t)(ECX));
  /* 106b3765 call 0x106b3850 */
  push32(0x106b376au); f_106b3850();
  /* 106b376a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b376d jmp 0x106b3839 */
  goto L_106b3839;
L_106b3772:;
  /* 106b3772 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106b3774 call 0x106a6d00 */
  push32(0x106b3779u); f_106a6d00();
  /* 106b3779 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b377c jmp 0x106b3787 */
  goto L_106b3787;
L_106b377e:;
  /* 106b377e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b3781 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3784 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_106b3787:;
  /* 106b3787 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b378a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 106b378e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 106b3792 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b3795 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106b379b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106b379d je 0x106b381b */
  if (C.zf) goto L_106b381b;
  /* 106b379f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b37a2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b37a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b37a9 mov cl, byte ptr [eax + 0x106d0d01] */
  CL = (r8((uint32_t)(EAX + 0x106d0d01)));
  /* 106b37af and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 106b37b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106b37b4 je 0x106b3806 */
  if (C.zf) goto L_106b3806;
  /* 106b37b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b37b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b37bc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106b37bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b37c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b37c4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106b37c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106b37c8 jne 0x106b37d8 */
  if (!C.zf) goto L_106b37d8;
  /* 106b37ca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106b37cc call 0x106a6da0 */
  push32(0x106b37d1u); f_106a6da0();
  /* 106b37d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b37d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b37d6 jmp 0x106b3839 */
  goto L_106b3839;
L_106b37d8:;
  /* 106b37d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b37db and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106b37e1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 106b37e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b37e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106b37e9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106b37eb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106b37ed cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b37f0 jne 0x106b3804 */
  if (!C.zf) goto L_106b3804;
  /* 106b37f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106b37f4 call 0x106a6da0 */
  push32(0x106b37f9u); f_106a6da0();
  /* 106b37f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b37fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b37ff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b3802 jmp 0x106b3839 */
  goto L_106b3839;
L_106b3804:;
  /* 106b3804 jmp 0x106b3816 */
  goto L_106b3816;
L_106b3806:;
  /* 106b3806 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b3809 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106b380f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3812 jne 0x106b3816 */
  if (!C.zf) goto L_106b3816;
  /* 106b3814 jmp 0x106b381b */
  goto L_106b381b;
L_106b3816:;
  /* 106b3816 jmp 0x106b377e */
  goto L_106b377e;
L_106b381b:;
  /* 106b381b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106b381d call 0x106a6da0 */
  push32(0x106b3822u); f_106a6da0();
  /* 106b3822 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b3828 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b382d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b3830 jne 0x106b3837 */
  if (!C.zf) goto L_106b3837;
  /* 106b3832 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b3835 jmp 0x106b3839 */
  goto L_106b3839;
L_106b3837:;
  /* 106b3837 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106b3839:;
  /* 106b3839 mov esp, ebp */
  ESP = (EBP);
  /* 106b383b pop ebp */
  EBP = (pop32());
  /* 106b383c ret  */
  ESPCHK(0x106b3750u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x106b3850 (193 bytes, 87 insns) */
void f_106b3850(void) {
  FTRACE(0x106b3850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b3850 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b3852 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 106b3856 push ebx */
  push32((uint32_t)(EBX));
  /* 106b3857 mov ebx, eax */
  EBX = (EAX);
  /* 106b3859 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 106b385c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 106b3860 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 106b3866 je 0x106b387b */
  if (C.zf) goto L_106b387b;
L_106b3868:;
  /* 106b3868 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 106b386a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 106b386b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b386d je 0x106b3840 */
  if (C.zf) { jmp_ind(0x106b3840u); return; }
  /* 106b386f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 106b3871 je 0x106b38c4 */
  if (C.zf) goto L_106b38c4;
  /* 106b3873 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 106b3879 jne 0x106b3868 */
  if (!C.zf) goto L_106b3868;
L_106b387b:;
  /* 106b387b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 106b387d push edi */
  push32((uint32_t)(EDI));
  /* 106b387e mov eax, ebx */
  EAX = (EBX);
  /* 106b3880 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 106b3883 push esi */
  push32((uint32_t)(ESI));
  /* 106b3884 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_106b3886:;
  /* 106b3886 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 106b3888 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 106b388d mov eax, ecx */
  EAX = (ECX);
  /* 106b388f mov esi, edi */
  ESI = (EDI);
  /* 106b3891 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 106b3893 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3895 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106b3897 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106b389a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106b389d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 106b389f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 106b38a1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b38a4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 106b38aa jne 0x106b38c8 */
  if (!C.zf) goto L_106b38c8;
  /* 106b38ac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 106b38b1 je 0x106b3886 */
  if (C.zf) goto L_106b3886;
  /* 106b38b3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 106b38b8 jne 0x106b38c2 */
  if (!C.zf) goto L_106b38c2;
  /* 106b38ba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 106b38c0 jne 0x106b3886 */
  if (!C.zf) goto L_106b3886;
L_106b38c2:;
  /* 106b38c2 pop esi */
  ESI = (pop32());
  /* 106b38c3 pop edi */
  EDI = (pop32());
L_106b38c4:;
  /* 106b38c4 pop ebx */
  EBX = (pop32());
  /* 106b38c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106b38c7 ret  */
  ESPCHK(0x106b3850u, _esp0);
  ESP += 4; return;
L_106b38c8:;
  /* 106b38c8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 106b38cb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b38cd je 0x106b3905 */
  if (C.zf) goto L_106b3905;
  /* 106b38cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106b38d1 je 0x106b38c2 */
  if (C.zf) goto L_106b38c2;
  /* 106b38d3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b38d5 je 0x106b38fe */
  if (C.zf) goto L_106b38fe;
  /* 106b38d7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 106b38d9 je 0x106b38c2 */
  if (C.zf) goto L_106b38c2;
  /* 106b38db shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 106b38de cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b38e0 je 0x106b38f7 */
  if (C.zf) goto L_106b38f7;
  /* 106b38e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106b38e4 je 0x106b38c2 */
  if (C.zf) goto L_106b38c2;
  /* 106b38e6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106b38e8 je 0x106b38f0 */
  if (C.zf) goto L_106b38f0;
  /* 106b38ea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 106b38ec je 0x106b38c2 */
  if (C.zf) goto L_106b38c2;
  /* 106b38ee jmp 0x106b3886 */
  goto L_106b3886;
L_106b38f0:;
  /* 106b38f0 pop esi */
  ESI = (pop32());
  /* 106b38f1 pop edi */
  EDI = (pop32());
  /* 106b38f2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 106b38f5 pop ebx */
  EBX = (pop32());
  /* 106b38f6 ret  */
  ESPCHK(0x106b3850u, _esp0);
  ESP += 4; return;
L_106b38f7:;
  /* 106b38f7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 106b38fa pop esi */
  ESI = (pop32());
  /* 106b38fb pop edi */
  EDI = (pop32());
  /* 106b38fc pop ebx */
  EBX = (pop32());
  /* 106b38fd ret  */
  ESPCHK(0x106b3850u, _esp0);
  ESP += 4; return;
L_106b38fe:;
  /* 106b38fe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 106b3901 pop esi */
  ESI = (pop32());
  /* 106b3902 pop edi */
  EDI = (pop32());
  /* 106b3903 pop ebx */
  EBX = (pop32());
  /* 106b3904 ret  */
  ESPCHK(0x106b3850u, _esp0);
  ESP += 4; return;
L_106b3905:;
  /* 106b3905 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 106b3908 pop esi */
  ESI = (pop32());
  /* 106b3909 pop edi */
  EDI = (pop32());
  /* 106b390a pop ebx */
  EBX = (pop32());
  /* 106b390b ret  */
  ESPCHK(0x106b3850u, _esp0);
  ESP += 4; return;
  /* 106b390c jmp dword ptr [0x106d12b4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x106d12b4)))); return;
}

/* RtlUnwind @ 0x106b3a5c (6 bytes, 1 insns) */
void f_106b3a5c(void) {
  FTRACE(0x106b3a5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b3a5c jmp dword ptr [0x106d1298] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x106d1298)))); return;
}

