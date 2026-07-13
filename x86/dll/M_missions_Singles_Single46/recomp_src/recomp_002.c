#include "recomp.h"

/* ___free_lc_time @ 0x117a62e0 (779 bytes, 265 insns) */
void f_117a62e0(void) {
  FTRACE(0x117a62e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a62e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a62e1 mov ebp, esp */
  EBP = (ESP);
  /* 117a62e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a62e7 jne 0x117a62ee */
  if (!C.zf) goto L_117a62ee;
  /* 117a62e9 jmp 0x117a65e9 */
  goto L_117a65e9;
L_117a62ee:;
  /* 117a62ee push 2 */
  push32((uint32_t)(0x2u));
  /* 117a62f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a62f3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117a62f6 push ecx */
  push32((uint32_t)(ECX));
  /* 117a62f7 call 0x1179a830 */
  push32(0x117a62fcu); f_1179a830();
  /* 117a62fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a62ff push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6301 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6304 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117a6307 push eax */
  push32((uint32_t)(EAX));
  /* 117a6308 call 0x1179a830 */
  push32(0x117a630du); f_1179a830();
  /* 117a630d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6310 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6312 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6315 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a6318 push edx */
  push32((uint32_t)(EDX));
  /* 117a6319 call 0x1179a830 */
  push32(0x117a631eu); f_1179a830();
  /* 117a631e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6321 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6323 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6326 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117a6329 push ecx */
  push32((uint32_t)(ECX));
  /* 117a632a call 0x1179a830 */
  push32(0x117a632fu); f_1179a830();
  /* 117a632f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6332 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6334 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6337 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117a633a push eax */
  push32((uint32_t)(EAX));
  /* 117a633b call 0x1179a830 */
  push32(0x117a6340u); f_1179a830();
  /* 117a6340 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6343 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6345 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6348 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 117a634b push edx */
  push32((uint32_t)(EDX));
  /* 117a634c call 0x1179a830 */
  push32(0x117a6351u); f_1179a830();
  /* 117a6351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6354 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6359 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a635b push ecx */
  push32((uint32_t)(ECX));
  /* 117a635c call 0x1179a830 */
  push32(0x117a6361u); f_1179a830();
  /* 117a6361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6364 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6366 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6369 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 117a636c push eax */
  push32((uint32_t)(EAX));
  /* 117a636d call 0x1179a830 */
  push32(0x117a6372u); f_1179a830();
  /* 117a6372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6375 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6377 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a637a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 117a637d push edx */
  push32((uint32_t)(EDX));
  /* 117a637e call 0x1179a830 */
  push32(0x117a6383u); f_1179a830();
  /* 117a6383 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6386 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6388 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a638b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 117a638e push ecx */
  push32((uint32_t)(ECX));
  /* 117a638f call 0x1179a830 */
  push32(0x117a6394u); f_1179a830();
  /* 117a6394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6397 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a639c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 117a639f push eax */
  push32((uint32_t)(EAX));
  /* 117a63a0 call 0x1179a830 */
  push32(0x117a63a5u); f_1179a830();
  /* 117a63a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a63a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a63aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a63ad mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 117a63b0 push edx */
  push32((uint32_t)(EDX));
  /* 117a63b1 call 0x1179a830 */
  push32(0x117a63b6u); f_1179a830();
  /* 117a63b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a63b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a63bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a63be mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 117a63c1 push ecx */
  push32((uint32_t)(ECX));
  /* 117a63c2 call 0x1179a830 */
  push32(0x117a63c7u); f_1179a830();
  /* 117a63c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a63ca push 2 */
  push32((uint32_t)(0x2u));
  /* 117a63cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a63cf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 117a63d2 push eax */
  push32((uint32_t)(EAX));
  /* 117a63d3 call 0x1179a830 */
  push32(0x117a63d8u); f_1179a830();
  /* 117a63d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a63db push 2 */
  push32((uint32_t)(0x2u));
  /* 117a63dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a63e0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 117a63e3 push edx */
  push32((uint32_t)(EDX));
  /* 117a63e4 call 0x1179a830 */
  push32(0x117a63e9u); f_1179a830();
  /* 117a63e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a63ec push 2 */
  push32((uint32_t)(0x2u));
  /* 117a63ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a63f1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 117a63f4 push ecx */
  push32((uint32_t)(ECX));
  /* 117a63f5 call 0x1179a830 */
  push32(0x117a63fau); f_1179a830();
  /* 117a63fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a63fd push 2 */
  push32((uint32_t)(0x2u));
  /* 117a63ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6402 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 117a6405 push eax */
  push32((uint32_t)(EAX));
  /* 117a6406 call 0x1179a830 */
  push32(0x117a640bu); f_1179a830();
  /* 117a640b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a640e push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6413 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 117a6416 push edx */
  push32((uint32_t)(EDX));
  /* 117a6417 call 0x1179a830 */
  push32(0x117a641cu); f_1179a830();
  /* 117a641c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a641f push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6421 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6424 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 117a6427 push ecx */
  push32((uint32_t)(ECX));
  /* 117a6428 call 0x1179a830 */
  push32(0x117a642du); f_1179a830();
  /* 117a642d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6430 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6432 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6435 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 117a6438 push eax */
  push32((uint32_t)(EAX));
  /* 117a6439 call 0x1179a830 */
  push32(0x117a643eu); f_1179a830();
  /* 117a643e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6441 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6443 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6446 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 117a6449 push edx */
  push32((uint32_t)(EDX));
  /* 117a644a call 0x1179a830 */
  push32(0x117a644fu); f_1179a830();
  /* 117a644f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6452 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6457 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 117a645a push ecx */
  push32((uint32_t)(ECX));
  /* 117a645b call 0x1179a830 */
  push32(0x117a6460u); f_1179a830();
  /* 117a6460 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6463 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6468 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 117a646b push eax */
  push32((uint32_t)(EAX));
  /* 117a646c call 0x1179a830 */
  push32(0x117a6471u); f_1179a830();
  /* 117a6471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6474 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6476 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6479 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 117a647c push edx */
  push32((uint32_t)(EDX));
  /* 117a647d call 0x1179a830 */
  push32(0x117a6482u); f_1179a830();
  /* 117a6482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6485 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6487 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a648a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 117a648d push ecx */
  push32((uint32_t)(ECX));
  /* 117a648e call 0x1179a830 */
  push32(0x117a6493u); f_1179a830();
  /* 117a6493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6496 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6498 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a649b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 117a649e push eax */
  push32((uint32_t)(EAX));
  /* 117a649f call 0x1179a830 */
  push32(0x117a64a4u); f_1179a830();
  /* 117a64a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a64a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a64a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a64ac mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 117a64af push edx */
  push32((uint32_t)(EDX));
  /* 117a64b0 call 0x1179a830 */
  push32(0x117a64b5u); f_1179a830();
  /* 117a64b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a64b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a64ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a64bd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 117a64c0 push ecx */
  push32((uint32_t)(ECX));
  /* 117a64c1 call 0x1179a830 */
  push32(0x117a64c6u); f_1179a830();
  /* 117a64c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a64c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a64cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a64ce mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 117a64d1 push eax */
  push32((uint32_t)(EAX));
  /* 117a64d2 call 0x1179a830 */
  push32(0x117a64d7u); f_1179a830();
  /* 117a64d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a64da push 2 */
  push32((uint32_t)(0x2u));
  /* 117a64dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a64df mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 117a64e2 push edx */
  push32((uint32_t)(EDX));
  /* 117a64e3 call 0x1179a830 */
  push32(0x117a64e8u); f_1179a830();
  /* 117a64e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a64eb push 2 */
  push32((uint32_t)(0x2u));
  /* 117a64ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a64f0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 117a64f3 push ecx */
  push32((uint32_t)(ECX));
  /* 117a64f4 call 0x1179a830 */
  push32(0x117a64f9u); f_1179a830();
  /* 117a64f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a64fc push 2 */
  push32((uint32_t)(0x2u));
  /* 117a64fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6501 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 117a6504 push eax */
  push32((uint32_t)(EAX));
  /* 117a6505 call 0x1179a830 */
  push32(0x117a650au); f_1179a830();
  /* 117a650a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a650d push 2 */
  push32((uint32_t)(0x2u));
  /* 117a650f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6512 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 117a6518 push edx */
  push32((uint32_t)(EDX));
  /* 117a6519 call 0x1179a830 */
  push32(0x117a651eu); f_1179a830();
  /* 117a651e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6521 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6526 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 117a652c push ecx */
  push32((uint32_t)(ECX));
  /* 117a652d call 0x1179a830 */
  push32(0x117a6532u); f_1179a830();
  /* 117a6532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6535 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6537 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a653a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 117a6540 push eax */
  push32((uint32_t)(EAX));
  /* 117a6541 call 0x1179a830 */
  push32(0x117a6546u); f_1179a830();
  /* 117a6546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6549 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a654b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a654e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 117a6554 push edx */
  push32((uint32_t)(EDX));
  /* 117a6555 call 0x1179a830 */
  push32(0x117a655au); f_1179a830();
  /* 117a655a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a655d push 2 */
  push32((uint32_t)(0x2u));
  /* 117a655f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6562 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 117a6568 push ecx */
  push32((uint32_t)(ECX));
  /* 117a6569 call 0x1179a830 */
  push32(0x117a656eu); f_1179a830();
  /* 117a656e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6571 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6573 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6576 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 117a657c push eax */
  push32((uint32_t)(EAX));
  /* 117a657d call 0x1179a830 */
  push32(0x117a6582u); f_1179a830();
  /* 117a6582 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6585 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6587 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a658a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 117a6590 push edx */
  push32((uint32_t)(EDX));
  /* 117a6591 call 0x1179a830 */
  push32(0x117a6596u); f_1179a830();
  /* 117a6596 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6599 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a659b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a659e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 117a65a4 push ecx */
  push32((uint32_t)(ECX));
  /* 117a65a5 call 0x1179a830 */
  push32(0x117a65aau); f_1179a830();
  /* 117a65aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a65ad push 2 */
  push32((uint32_t)(0x2u));
  /* 117a65af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a65b2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 117a65b8 push eax */
  push32((uint32_t)(EAX));
  /* 117a65b9 call 0x1179a830 */
  push32(0x117a65beu); f_1179a830();
  /* 117a65be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a65c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a65c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a65c6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 117a65cc push edx */
  push32((uint32_t)(EDX));
  /* 117a65cd call 0x1179a830 */
  push32(0x117a65d2u); f_1179a830();
  /* 117a65d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a65d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a65d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a65da mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 117a65e0 push ecx */
  push32((uint32_t)(ECX));
  /* 117a65e1 call 0x1179a830 */
  push32(0x117a65e6u); f_1179a830();
  /* 117a65e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a65e9:;
  /* 117a65e9 pop ebp */
  EBP = (pop32());
  /* 117a65ea ret  */
  ESPCHK(0x117a62e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100165f0 @ 0x117a65f0 (678 bytes, 180 insns) */
void f_117a65f0(void) {
  FTRACE(0x117a65f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a65f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a65f1 mov ebp, esp */
  EBP = (ESP);
  /* 117a65f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a65f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117a65fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a65ff mov ax, word ptr [0x117c7eda] */
  AX = (r16((uint32_t)(0x117c7eda)));
  /* 117a6605 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a6608 cmp dword ptr [0x117c7e78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a660f je 0x117a676a */
  if (C.zf) goto L_117a676a;
  /* 117a6615 push 0x117c7ea8 */
  push32((uint32_t)(0x117c7ea8u));
  /* 117a661a push 0xe */
  push32((uint32_t)(0xeu));
  /* 117a661c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a661f push ecx */
  push32((uint32_t)(ECX));
  /* 117a6620 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6622 call 0x117a96c0 */
  push32(0x117a6627u); f_117a96c0();
  /* 117a6627 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a662a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a662d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 117a662f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117a6632 push 0x117c7eac */
  push32((uint32_t)(0x117c7eacu));
  /* 117a6637 push 0xf */
  push32((uint32_t)(0xfu));
  /* 117a6639 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a663c push eax */
  push32((uint32_t)(EAX));
  /* 117a663d push 1 */
  push32((uint32_t)(0x1u));
  /* 117a663f call 0x117a96c0 */
  push32(0x117a6644u); f_117a96c0();
  /* 117a6644 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6647 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a664a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a664c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a664f push 0x117c7eb0 */
  push32((uint32_t)(0x117c7eb0u));
  /* 117a6654 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 117a6656 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6659 push edx */
  push32((uint32_t)(EDX));
  /* 117a665a push 1 */
  push32((uint32_t)(0x1u));
  /* 117a665c call 0x117a96c0 */
  push32(0x117a6661u); f_117a96c0();
  /* 117a6661 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6664 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6667 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6669 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a666c mov edx, dword ptr [0x117c7eb0] */
  EDX = (r32((uint32_t)(0x117c7eb0)));
  /* 117a6672 push edx */
  push32((uint32_t)(EDX));
  /* 117a6673 call 0x117a68a0 */
  push32(0x117a6678u); f_117a68a0();
  /* 117a6678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a667b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a667f je 0x117a66d9 */
  if (C.zf) goto L_117a66d9;
  /* 117a6681 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6683 mov eax, dword ptr [0x117c7ea8] */
  EAX = (r32((uint32_t)(0x117c7ea8)));
  /* 117a6688 push eax */
  push32((uint32_t)(EAX));
  /* 117a6689 call 0x1179a830 */
  push32(0x117a668eu); f_1179a830();
  /* 117a668e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6691 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6693 mov ecx, dword ptr [0x117c7eac] */
  ECX = (r32((uint32_t)(0x117c7eac)));
  /* 117a6699 push ecx */
  push32((uint32_t)(ECX));
  /* 117a669a call 0x1179a830 */
  push32(0x117a669fu); f_1179a830();
  /* 117a669f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a66a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a66a4 mov edx, dword ptr [0x117c7eb0] */
  EDX = (r32((uint32_t)(0x117c7eb0)));
  /* 117a66aa push edx */
  push32((uint32_t)(EDX));
  /* 117a66ab call 0x1179a830 */
  push32(0x117a66b0u); f_1179a830();
  /* 117a66b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a66b3 mov dword ptr [0x117c7ea8], 0 */
  w32((uint32_t)(0x117c7ea8), (0x0u));
  /* 117a66bd mov dword ptr [0x117c7eac], 0 */
  w32((uint32_t)(0x117c7eac), (0x0u));
  /* 117a66c7 mov dword ptr [0x117c7eb0], 0 */
  w32((uint32_t)(0x117c7eb0), (0x0u));
  /* 117a66d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a66d4 jmp 0x117a6892 */
  goto L_117a6892;
L_117a66d9:;
  /* 117a66d9 mov eax, dword ptr [0x117c6eb8] */
  EAX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a66de cmp dword ptr [eax], 0x117c6e80 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x117c6e80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a66e4 je 0x117a6720 */
  if (C.zf) goto L_117a6720;
  /* 117a66e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a66e8 mov ecx, dword ptr [0x117c6eb8] */
  ECX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a66ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a66f0 push edx */
  push32((uint32_t)(EDX));
  /* 117a66f1 call 0x1179a830 */
  push32(0x117a66f6u); f_1179a830();
  /* 117a66f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a66f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a66fb mov eax, dword ptr [0x117c6eb8] */
  EAX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a6700 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117a6703 push ecx */
  push32((uint32_t)(ECX));
  /* 117a6704 call 0x1179a830 */
  push32(0x117a6709u); f_1179a830();
  /* 117a6709 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a670c push 2 */
  push32((uint32_t)(0x2u));
  /* 117a670e mov edx, dword ptr [0x117c6eb8] */
  EDX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a6714 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117a6717 push eax */
  push32((uint32_t)(EAX));
  /* 117a6718 call 0x1179a830 */
  push32(0x117a671du); f_1179a830();
  /* 117a671d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a6720:;
  /* 117a6720 mov ecx, dword ptr [0x117c6eb8] */
  ECX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a6726 mov edx, dword ptr [0x117c7ea8] */
  EDX = (r32((uint32_t)(0x117c7ea8)));
  /* 117a672c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 117a672e mov eax, dword ptr [0x117c6eb8] */
  EAX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a6733 mov ecx, dword ptr [0x117c7eac] */
  ECX = (r32((uint32_t)(0x117c7eac)));
  /* 117a6739 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 117a673c mov edx, dword ptr [0x117c6eb8] */
  EDX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a6742 mov eax, dword ptr [0x117c7eb0] */
  EAX = (r32((uint32_t)(0x117c7eb0)));
  /* 117a6747 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 117a674a mov ecx, dword ptr [0x117c6eb8] */
  ECX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a6750 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a6752 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a6754 mov byte ptr [0x117c5fc8], al */
  w8((uint32_t)(0x117c5fc8), (AL));
  /* 117a6759 mov dword ptr [0x117c5fcc], 1 */
  w32((uint32_t)(0x117c5fcc), (0x1u));
  /* 117a6763 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a6765 jmp 0x117a6892 */
  goto L_117a6892;
L_117a676a:;
  /* 117a676a push 2 */
  push32((uint32_t)(0x2u));
  /* 117a676c mov ecx, dword ptr [0x117c7ea8] */
  ECX = (r32((uint32_t)(0x117c7ea8)));
  /* 117a6772 push ecx */
  push32((uint32_t)(ECX));
  /* 117a6773 call 0x1179a830 */
  push32(0x117a6778u); f_1179a830();
  /* 117a6778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a677b push 2 */
  push32((uint32_t)(0x2u));
  /* 117a677d mov edx, dword ptr [0x117c7eac] */
  EDX = (r32((uint32_t)(0x117c7eac)));
  /* 117a6783 push edx */
  push32((uint32_t)(EDX));
  /* 117a6784 call 0x1179a830 */
  push32(0x117a6789u); f_1179a830();
  /* 117a6789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a678c push 2 */
  push32((uint32_t)(0x2u));
  /* 117a678e mov eax, dword ptr [0x117c7eb0] */
  EAX = (r32((uint32_t)(0x117c7eb0)));
  /* 117a6793 push eax */
  push32((uint32_t)(EAX));
  /* 117a6794 call 0x1179a830 */
  push32(0x117a6799u); f_1179a830();
  /* 117a6799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a679c mov dword ptr [0x117c7ea8], 0 */
  w32((uint32_t)(0x117c7ea8), (0x0u));
  /* 117a67a6 mov dword ptr [0x117c7eac], 0 */
  w32((uint32_t)(0x117c7eac), (0x0u));
  /* 117a67b0 mov dword ptr [0x117c7eb0], 0 */
  w32((uint32_t)(0x117c7eb0), (0x0u));
  /* 117a67ba push 0x88 */
  push32((uint32_t)(0x88u));
  /* 117a67bf push 0x117c2f3c */
  push32((uint32_t)(0x117c2f3cu));
  /* 117a67c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a67c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a67c8 call 0x11799da0 */
  push32(0x117a67cdu); f_11799da0();
  /* 117a67cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a67d0 mov ecx, dword ptr [0x117c6eb8] */
  ECX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a67d6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117a67d8 mov edx, dword ptr [0x117c6eb8] */
  EDX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a67de cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a67e1 jne 0x117a67eb */
  if (!C.zf) goto L_117a67eb;
  /* 117a67e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a67e6 jmp 0x117a6892 */
  goto L_117a6892;
L_117a67eb:;
  /* 117a67eb push 0x117c2ea0 */
  push32((uint32_t)(0x117c2ea0u));
  /* 117a67f0 mov eax, dword ptr [0x117c6eb8] */
  EAX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a67f5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a67f7 push ecx */
  push32((uint32_t)(ECX));
  /* 117a67f8 call 0x1179cd50 */
  push32(0x117a67fdu); f_1179cd50();
  /* 117a67fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6800 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 117a6805 push 0x117c2f3c */
  push32((uint32_t)(0x117c2f3cu));
  /* 117a680a push 2 */
  push32((uint32_t)(0x2u));
  /* 117a680c push 2 */
  push32((uint32_t)(0x2u));
  /* 117a680e call 0x11799da0 */
  push32(0x117a6813u); f_11799da0();
  /* 117a6813 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6816 mov edx, dword ptr [0x117c6eb8] */
  EDX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a681c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 117a681f mov eax, dword ptr [0x117c6eb8] */
  EAX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a6824 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6828 jne 0x117a682f */
  if (!C.zf) goto L_117a682f;
  /* 117a682a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a682d jmp 0x117a6892 */
  goto L_117a6892;
L_117a682f:;
  /* 117a682f mov ecx, dword ptr [0x117c6eb8] */
  ECX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a6835 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117a6838 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 117a683b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 117a6840 push 0x117c2f3c */
  push32((uint32_t)(0x117c2f3cu));
  /* 117a6845 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6847 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6849 call 0x11799da0 */
  push32(0x117a684eu); f_11799da0();
  /* 117a684e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6851 mov ecx, dword ptr [0x117c6eb8] */
  ECX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a6857 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 117a685a mov edx, dword ptr [0x117c6eb8] */
  EDX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a6860 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6864 jne 0x117a686b */
  if (!C.zf) goto L_117a686b;
  /* 117a6866 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a6869 jmp 0x117a6892 */
  goto L_117a6892;
L_117a686b:;
  /* 117a686b mov eax, dword ptr [0x117c6eb8] */
  EAX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a6870 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117a6873 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 117a6876 mov edx, dword ptr [0x117c6eb8] */
  EDX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a687c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a687e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a6880 mov byte ptr [0x117c5fc8], cl */
  w8((uint32_t)(0x117c5fc8), (CL));
  /* 117a6886 mov dword ptr [0x117c5fcc], 1 */
  w32((uint32_t)(0x117c5fcc), (0x1u));
  /* 117a6890 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a6892:;
  /* 117a6892 mov esp, ebp */
  ESP = (EBP);
  /* 117a6894 pop ebp */
  EBP = (pop32());
  /* 117a6895 ret  */
  ESPCHK(0x117a65f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x117a68a0 (125 bytes, 49 insns) */
void f_117a68a0(void) {
  FTRACE(0x117a68a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a68a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a68a1 mov ebp, esp */
  EBP = (ESP);
  /* 117a68a3 push ecx */
  push32((uint32_t)(ECX));
L_117a68a4:;
  /* 117a68a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a68a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a68aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a68ac je 0x117a6919 */
  if (C.zf) goto L_117a6919;
  /* 117a68ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a68b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117a68b4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a68b7 jl 0x117a68dd */
  if ((C.sf!=C.of)) goto L_117a68dd;
  /* 117a68b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a68bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a68bf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a68c2 jg 0x117a68dd */
  if ((!C.zf&&C.sf==C.of)) goto L_117a68dd;
  /* 117a68c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a68c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a68ca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a68cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a68d0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 117a68d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a68d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a68d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a68db jmp 0x117a6917 */
  goto L_117a6917;
L_117a68dd:;
  /* 117a68dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a68e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a68e3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a68e6 jne 0x117a690e */
  if (!C.zf) goto L_117a690e;
  /* 117a68e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a68eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117a68ee:;
  /* 117a68ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a68f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a68f4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 117a68f7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 117a68f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a68fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a68ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a6902 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6905 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117a6908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a690a jne 0x117a68ee */
  if (!C.zf) goto L_117a68ee;
  /* 117a690c jmp 0x117a6917 */
  goto L_117a6917;
L_117a690e:;
  /* 117a690e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6911 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6914 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_117a6917:;
  /* 117a6917 jmp 0x117a68a4 */
  goto L_117a68a4;
L_117a6919:;
  /* 117a6919 mov esp, ebp */
  ESP = (EBP);
  /* 117a691b pop ebp */
  EBP = (pop32());
  /* 117a691c ret  */
  ESPCHK(0x117a68a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016920 @ 0x117a6920 (304 bytes, 85 insns) */
void f_117a6920(void) {
  FTRACE(0x117a6920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a6920 push ebp */
  push32((uint32_t)(EBP));
  /* 117a6921 mov ebp, esp */
  EBP = (ESP);
  /* 117a6923 push ecx */
  push32((uint32_t)(ECX));
  /* 117a6924 cmp dword ptr [0x117c7e74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a692b je 0x117a69ec */
  if (C.zf) goto L_117a69ec;
  /* 117a6931 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 117a6933 push 0x117c2f48 */
  push32((uint32_t)(0x117c2f48u));
  /* 117a6938 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a693a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 117a693c push 1 */
  push32((uint32_t)(0x1u));
  /* 117a693e call 0x1179a1b0 */
  push32(0x117a6943u); f_1179a1b0();
  /* 117a6943 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6946 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a6949 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a694d jne 0x117a6959 */
  if (!C.zf) goto L_117a6959;
  /* 117a694f mov eax, 1 */
  EAX = (0x1u);
  /* 117a6954 jmp 0x117a6a4c */
  goto L_117a6a4c;
L_117a6959:;
  /* 117a6959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a695c push eax */
  push32((uint32_t)(EAX));
  /* 117a695d call 0x117a6a50 */
  push32(0x117a6962u); f_117a6a50();
  /* 117a6962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6965 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a6967 je 0x117a698d */
  if (C.zf) goto L_117a698d;
  /* 117a6969 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a696c push ecx */
  push32((uint32_t)(ECX));
  /* 117a696d call 0x117a6ce0 */
  push32(0x117a6972u); f_117a6ce0();
  /* 117a6972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6975 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6977 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a697a push edx */
  push32((uint32_t)(EDX));
  /* 117a697b call 0x1179a830 */
  push32(0x117a6980u); f_1179a830();
  /* 117a6980 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6983 mov eax, 1 */
  EAX = (0x1u);
  /* 117a6988 jmp 0x117a6a4c */
  goto L_117a6a4c;
L_117a698d:;
  /* 117a698d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6990 mov ecx, dword ptr [0x117c6eb8] */
  ECX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a6996 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a6998 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117a699a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a699d mov ecx, dword ptr [0x117c6eb8] */
  ECX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a69a3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117a69a6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 117a69a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a69ac mov ecx, dword ptr [0x117c6eb8] */
  ECX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a69b2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117a69b5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 117a69b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a69bb mov dword ptr [0x117c6eb8], eax */
  w32((uint32_t)(0x117c6eb8), (EAX));
  /* 117a69c0 mov ecx, dword ptr [0x117c7eb4] */
  ECX = (r32((uint32_t)(0x117c7eb4)));
  /* 117a69c6 push ecx */
  push32((uint32_t)(ECX));
  /* 117a69c7 call 0x117a6ce0 */
  push32(0x117a69ccu); f_117a6ce0();
  /* 117a69cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a69cf push 2 */
  push32((uint32_t)(0x2u));
  /* 117a69d1 mov edx, dword ptr [0x117c7eb4] */
  EDX = (r32((uint32_t)(0x117c7eb4)));
  /* 117a69d7 push edx */
  push32((uint32_t)(EDX));
  /* 117a69d8 call 0x1179a830 */
  push32(0x117a69ddu); f_1179a830();
  /* 117a69dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a69e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a69e3 mov dword ptr [0x117c7eb4], eax */
  w32((uint32_t)(0x117c7eb4), (EAX));
  /* 117a69e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a69ea jmp 0x117a6a4c */
  goto L_117a6a4c;
L_117a69ec:;
  /* 117a69ec mov ecx, dword ptr [0x117c6eb8] */
  ECX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a69f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a69f4 mov dword ptr [0x117c6e88], edx */
  w32((uint32_t)(0x117c6e88), (EDX));
  /* 117a69fa mov eax, dword ptr [0x117c6eb8] */
  EAX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a69ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117a6a02 mov dword ptr [0x117c6e8c], ecx */
  w32((uint32_t)(0x117c6e8c), (ECX));
  /* 117a6a08 mov edx, dword ptr [0x117c6eb8] */
  EDX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a6a0e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117a6a11 mov dword ptr [0x117c6e90], eax */
  w32((uint32_t)(0x117c6e90), (EAX));
  /* 117a6a16 mov dword ptr [0x117c6eb8], 0x117c6e88 */
  w32((uint32_t)(0x117c6eb8), (0x117c6e88u));
  /* 117a6a20 mov ecx, dword ptr [0x117c7eb4] */
  ECX = (r32((uint32_t)(0x117c7eb4)));
  /* 117a6a26 push ecx */
  push32((uint32_t)(ECX));
  /* 117a6a27 call 0x117a6ce0 */
  push32(0x117a6a2cu); f_117a6ce0();
  /* 117a6a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6a2f push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6a31 mov edx, dword ptr [0x117c7eb4] */
  EDX = (r32((uint32_t)(0x117c7eb4)));
  /* 117a6a37 push edx */
  push32((uint32_t)(EDX));
  /* 117a6a38 call 0x1179a830 */
  push32(0x117a6a3du); f_1179a830();
  /* 117a6a3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6a40 mov dword ptr [0x117c7eb4], 0 */
  w32((uint32_t)(0x117c7eb4), (0x0u));
  /* 117a6a4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a6a4c:;
  /* 117a6a4c mov esp, ebp */
  ESP = (EBP);
  /* 117a6a4e pop ebp */
  EBP = (pop32());
  /* 117a6a4f ret  */
  ESPCHK(0x117a6920u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a50 @ 0x117a6a50 (525 bytes, 200 insns) */
void f_117a6a50(void) {
  FTRACE(0x117a6a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a6a50 push ebp */
  push32((uint32_t)(EBP));
  /* 117a6a51 mov ebp, esp */
  EBP = (ESP);
  /* 117a6a53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a6a56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117a6a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a6a5f mov ax, word ptr [0x117c7ed4] */
  AX = (r16((uint32_t)(0x117c7ed4)));
  /* 117a6a65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a6a68 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6a6c jne 0x117a6a76 */
  if (!C.zf) goto L_117a6a76;
  /* 117a6a6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a6a71 jmp 0x117a6c59 */
  goto L_117a6c59;
L_117a6a76:;
  /* 117a6a76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6a79 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6a7c push ecx */
  push32((uint32_t)(ECX));
  /* 117a6a7d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 117a6a7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6a82 push edx */
  push32((uint32_t)(EDX));
  /* 117a6a83 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6a85 call 0x117a96c0 */
  push32(0x117a6a8au); f_117a96c0();
  /* 117a6a8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6a8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6a90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6a92 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6a95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6a98 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6a9b push edx */
  push32((uint32_t)(EDX));
  /* 117a6a9c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 117a6a9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6aa1 push eax */
  push32((uint32_t)(EAX));
  /* 117a6aa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6aa4 call 0x117a96c0 */
  push32(0x117a6aa9u); f_117a96c0();
  /* 117a6aa9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6aac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6aaf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6ab1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6ab4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6ab7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6aba push edx */
  push32((uint32_t)(EDX));
  /* 117a6abb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 117a6abd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6ac0 push eax */
  push32((uint32_t)(EAX));
  /* 117a6ac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6ac3 call 0x117a96c0 */
  push32(0x117a6ac8u); f_117a96c0();
  /* 117a6ac8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6acb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6ace or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6ad0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6ad3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6ad6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6ad9 push edx */
  push32((uint32_t)(EDX));
  /* 117a6ada push 0x17 */
  push32((uint32_t)(0x17u));
  /* 117a6adc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6adf push eax */
  push32((uint32_t)(EAX));
  /* 117a6ae0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6ae2 call 0x117a96c0 */
  push32(0x117a6ae7u); f_117a96c0();
  /* 117a6ae7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6aea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6aed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6aef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6af2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6af5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6af8 push edx */
  push32((uint32_t)(EDX));
  /* 117a6af9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 117a6afb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6afe push eax */
  push32((uint32_t)(EAX));
  /* 117a6aff push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6b01 call 0x117a96c0 */
  push32(0x117a6b06u); f_117a96c0();
  /* 117a6b06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6b09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6b0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6b0e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6b11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6b14 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 117a6b17 push eax */
  push32((uint32_t)(EAX));
  /* 117a6b18 call 0x117a6c60 */
  push32(0x117a6b1du); f_117a6c60();
  /* 117a6b1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6b20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6b23 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6b26 push ecx */
  push32((uint32_t)(ECX));
  /* 117a6b27 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 117a6b29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6b2c push edx */
  push32((uint32_t)(EDX));
  /* 117a6b2d push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6b2f call 0x117a96c0 */
  push32(0x117a6b34u); f_117a96c0();
  /* 117a6b34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6b37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6b3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6b3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6b3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6b42 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6b45 push edx */
  push32((uint32_t)(EDX));
  /* 117a6b46 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 117a6b48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6b4b push eax */
  push32((uint32_t)(EAX));
  /* 117a6b4c push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6b4e call 0x117a96c0 */
  push32(0x117a6b53u); f_117a96c0();
  /* 117a6b53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6b56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6b59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6b5b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6b5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6b61 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6b64 push edx */
  push32((uint32_t)(EDX));
  /* 117a6b65 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 117a6b67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6b6a push eax */
  push32((uint32_t)(EAX));
  /* 117a6b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 117a6b6d call 0x117a96c0 */
  push32(0x117a6b72u); f_117a96c0();
  /* 117a6b72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6b75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6b78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6b7a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6b7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6b80 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6b83 push edx */
  push32((uint32_t)(EDX));
  /* 117a6b84 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117a6b86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6b89 push eax */
  push32((uint32_t)(EAX));
  /* 117a6b8a push 0 */
  push32((uint32_t)(0x0u));
  /* 117a6b8c call 0x117a96c0 */
  push32(0x117a6b91u); f_117a96c0();
  /* 117a6b91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6b94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6b97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6b99 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6b9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6b9f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6ba2 push edx */
  push32((uint32_t)(EDX));
  /* 117a6ba3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 117a6ba5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6ba8 push eax */
  push32((uint32_t)(EAX));
  /* 117a6ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a6bab call 0x117a96c0 */
  push32(0x117a6bb0u); f_117a96c0();
  /* 117a6bb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6bb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6bb6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6bb8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6bbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6bbe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6bc1 push edx */
  push32((uint32_t)(EDX));
  /* 117a6bc2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 117a6bc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6bc7 push eax */
  push32((uint32_t)(EAX));
  /* 117a6bc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a6bca call 0x117a96c0 */
  push32(0x117a6bcfu); f_117a96c0();
  /* 117a6bcf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6bd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6bd5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6bd7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6bda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6bdd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6be0 push edx */
  push32((uint32_t)(EDX));
  /* 117a6be1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 117a6be3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6be6 push eax */
  push32((uint32_t)(EAX));
  /* 117a6be7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a6be9 call 0x117a96c0 */
  push32(0x117a6beeu); f_117a96c0();
  /* 117a6bee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6bf1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6bf4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6bf6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6bf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6bfc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6bff push edx */
  push32((uint32_t)(EDX));
  /* 117a6c00 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 117a6c02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6c05 push eax */
  push32((uint32_t)(EAX));
  /* 117a6c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a6c08 call 0x117a96c0 */
  push32(0x117a6c0du); f_117a96c0();
  /* 117a6c0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6c10 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6c13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6c15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6c18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6c1b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6c1e push edx */
  push32((uint32_t)(EDX));
  /* 117a6c1f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 117a6c21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6c24 push eax */
  push32((uint32_t)(EAX));
  /* 117a6c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a6c27 call 0x117a96c0 */
  push32(0x117a6c2cu); f_117a96c0();
  /* 117a6c2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6c2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6c32 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6c34 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6c37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6c3a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6c3d push edx */
  push32((uint32_t)(EDX));
  /* 117a6c3e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 117a6c40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6c43 push eax */
  push32((uint32_t)(EAX));
  /* 117a6c44 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a6c46 call 0x117a96c0 */
  push32(0x117a6c4bu); f_117a96c0();
  /* 117a6c4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6c4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a6c51 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6c53 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a6c56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_117a6c59:;
  /* 117a6c59 mov esp, ebp */
  ESP = (EBP);
  /* 117a6c5b pop ebp */
  EBP = (pop32());
  /* 117a6c5c ret  */
  ESPCHK(0x117a6a50u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x117a6c60 (125 bytes, 49 insns) */
void f_117a6c60(void) {
  FTRACE(0x117a6c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a6c60 push ebp */
  push32((uint32_t)(EBP));
  /* 117a6c61 mov ebp, esp */
  EBP = (ESP);
  /* 117a6c63 push ecx */
  push32((uint32_t)(ECX));
L_117a6c64:;
  /* 117a6c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6c67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a6c6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a6c6c je 0x117a6cd9 */
  if (C.zf) goto L_117a6cd9;
  /* 117a6c6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6c71 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117a6c74 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6c77 jl 0x117a6c9d */
  if ((C.sf!=C.of)) goto L_117a6c9d;
  /* 117a6c79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6c7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a6c7f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6c82 jg 0x117a6c9d */
  if ((!C.zf&&C.sf==C.of)) goto L_117a6c9d;
  /* 117a6c84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6c87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a6c8a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a6c8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6c90 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 117a6c92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6c95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6c98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a6c9b jmp 0x117a6cd7 */
  goto L_117a6cd7;
L_117a6c9d:;
  /* 117a6c9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6ca0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a6ca3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6ca6 jne 0x117a6cce */
  if (!C.zf) goto L_117a6cce;
  /* 117a6ca8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6cab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117a6cae:;
  /* 117a6cae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6cb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6cb4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 117a6cb7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 117a6cb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6cbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6cbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a6cc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6cc5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117a6cc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a6cca jne 0x117a6cae */
  if (!C.zf) goto L_117a6cae;
  /* 117a6ccc jmp 0x117a6cd7 */
  goto L_117a6cd7;
L_117a6cce:;
  /* 117a6cce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6cd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6cd4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_117a6cd7:;
  /* 117a6cd7 jmp 0x117a6c64 */
  goto L_117a6c64;
L_117a6cd9:;
  /* 117a6cd9 mov esp, ebp */
  ESP = (EBP);
  /* 117a6cdb pop ebp */
  EBP = (pop32());
  /* 117a6cdc ret  */
  ESPCHK(0x117a6c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ce0 @ 0x117a6ce0 (147 bytes, 52 insns) */
void f_117a6ce0(void) {
  FTRACE(0x117a6ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a6ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a6ce1 mov ebp, esp */
  EBP = (ESP);
  /* 117a6ce3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6ce7 jne 0x117a6cee */
  if (!C.zf) goto L_117a6cee;
  /* 117a6ce9 jmp 0x117a6d71 */
  goto L_117a6d71;
L_117a6cee:;
  /* 117a6cee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6cf1 cmp dword ptr [eax + 0xc], 0x117c7f10 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x117c7f10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6cf8 je 0x117a6d71 */
  if (C.zf) goto L_117a6d71;
  /* 117a6cfa push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6cfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6cff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a6d02 push edx */
  push32((uint32_t)(EDX));
  /* 117a6d03 call 0x1179a830 */
  push32(0x117a6d08u); f_1179a830();
  /* 117a6d08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6d0b push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6d0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6d10 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117a6d13 push ecx */
  push32((uint32_t)(ECX));
  /* 117a6d14 call 0x1179a830 */
  push32(0x117a6d19u); f_1179a830();
  /* 117a6d19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6d1c push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6d1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6d21 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117a6d24 push eax */
  push32((uint32_t)(EAX));
  /* 117a6d25 call 0x1179a830 */
  push32(0x117a6d2au); f_1179a830();
  /* 117a6d2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6d2d push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6d2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6d32 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 117a6d35 push edx */
  push32((uint32_t)(EDX));
  /* 117a6d36 call 0x1179a830 */
  push32(0x117a6d3bu); f_1179a830();
  /* 117a6d3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6d3e push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6d40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6d43 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 117a6d46 push ecx */
  push32((uint32_t)(ECX));
  /* 117a6d47 call 0x1179a830 */
  push32(0x117a6d4cu); f_1179a830();
  /* 117a6d4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6d4f push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6d51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6d54 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 117a6d57 push eax */
  push32((uint32_t)(EAX));
  /* 117a6d58 call 0x1179a830 */
  push32(0x117a6d5du); f_1179a830();
  /* 117a6d5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6d60 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6d62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6d65 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 117a6d68 push edx */
  push32((uint32_t)(EDX));
  /* 117a6d69 call 0x1179a830 */
  push32(0x117a6d6eu); f_1179a830();
  /* 117a6d6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a6d71:;
  /* 117a6d71 pop ebp */
  EBP = (pop32());
  /* 117a6d72 ret  */
  ESPCHK(0x117a6ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d80 @ 0x117a6d80 (928 bytes, 284 insns) */
void f_117a6d80(void) {
  FTRACE(0x117a6d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a6d80 push ebp */
  push32((uint32_t)(EBP));
  /* 117a6d81 mov ebp, esp */
  EBP = (ESP);
  /* 117a6d83 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a6d86 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 117a6d8d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 117a6d94 cmp dword ptr [0x117c7e70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6d9b je 0x117a70d1 */
  if (C.zf) goto L_117a70d1;
  /* 117a6da1 cmp dword ptr [0x117c7e80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6da8 jne 0x117a6dd0 */
  if (!C.zf) goto L_117a6dd0;
  /* 117a6daa push 0x117c7e80 */
  push32((uint32_t)(0x117c7e80u));
  /* 117a6daf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 117a6db4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a6db6 mov ax, word ptr [0x117c7ecc] */
  AX = (r16((uint32_t)(0x117c7ecc)));
  /* 117a6dbc push eax */
  push32((uint32_t)(EAX));
  /* 117a6dbd push 0 */
  push32((uint32_t)(0x0u));
  /* 117a6dbf call 0x117a96c0 */
  push32(0x117a6dc4u); f_117a96c0();
  /* 117a6dc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6dc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a6dc9 je 0x117a6dd0 */
  if (C.zf) goto L_117a6dd0;
  /* 117a6dcb jmp 0x117a7092 */
  goto L_117a7092;
L_117a6dd0:;
  /* 117a6dd0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 117a6dd2 push 0x117c2f54 */
  push32((uint32_t)(0x117c2f54u));
  /* 117a6dd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6dd9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 117a6dde call 0x11799da0 */
  push32(0x117a6de3u); f_11799da0();
  /* 117a6de3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6de6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 117a6de9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 117a6deb push 0x117c2f54 */
  push32((uint32_t)(0x117c2f54u));
  /* 117a6df0 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6df2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 117a6df7 call 0x11799da0 */
  push32(0x117a6dfcu); f_11799da0();
  /* 117a6dfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6dff mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 117a6e02 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 117a6e04 push 0x117c2f54 */
  push32((uint32_t)(0x117c2f54u));
  /* 117a6e09 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6e0b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 117a6e10 call 0x11799da0 */
  push32(0x117a6e15u); f_11799da0();
  /* 117a6e15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6e18 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 117a6e1b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 117a6e1d push 0x117c2f54 */
  push32((uint32_t)(0x117c2f54u));
  /* 117a6e22 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a6e24 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 117a6e29 call 0x11799da0 */
  push32(0x117a6e2eu); f_11799da0();
  /* 117a6e2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6e31 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117a6e34 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6e38 je 0x117a6e4c */
  if (C.zf) goto L_117a6e4c;
  /* 117a6e3a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6e3e je 0x117a6e4c */
  if (C.zf) goto L_117a6e4c;
  /* 117a6e40 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6e44 je 0x117a6e4c */
  if (C.zf) goto L_117a6e4c;
  /* 117a6e46 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6e4a jne 0x117a6e51 */
  if (!C.zf) goto L_117a6e51;
L_117a6e4c:;
  /* 117a6e4c jmp 0x117a7092 */
  goto L_117a7092;
L_117a6e51:;
  /* 117a6e51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117a6e54 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 117a6e57 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 117a6e5e jmp 0x117a6e69 */
  goto L_117a6e69;
L_117a6e60:;
  /* 117a6e60 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a6e63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6e66 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_117a6e69:;
  /* 117a6e69 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6e70 jge 0x117a6e85 */
  if ((C.sf==C.of)) goto L_117a6e85;
  /* 117a6e72 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a6e75 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 117a6e78 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 117a6e7a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a6e7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6e80 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 117a6e83 jmp 0x117a6e60 */
  goto L_117a6e60;
L_117a6e85:;
  /* 117a6e85 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 117a6e88 push eax */
  push32((uint32_t)(EAX));
  /* 117a6e89 mov ecx, dword ptr [0x117c7e80] */
  ECX = (r32((uint32_t)(0x117c7e80)));
  /* 117a6e8f push ecx */
  push32((uint32_t)(ECX));
  /* 117a6e90 call dword ptr [0x117ca334] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca334))), 0x117a6e96u);
  /* 117a6e96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a6e98 jne 0x117a6e9f */
  if (!C.zf) goto L_117a6e9f;
  /* 117a6e9a jmp 0x117a7092 */
  goto L_117a7092;
L_117a6e9f:;
  /* 117a6e9f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6ea3 jbe 0x117a6eaa */
  if ((C.cf||C.zf)) goto L_117a6eaa;
  /* 117a6ea5 jmp 0x117a7092 */
  goto L_117a7092;
L_117a6eaa:;
  /* 117a6eaa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a6ead and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117a6eb3 mov dword ptr [0x117c5fc4], edx */
  w32((uint32_t)(0x117c5fc4), (EDX));
  /* 117a6eb9 cmp dword ptr [0x117c5fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c5fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6ec0 jle 0x117a6f19 */
  if ((C.zf||C.sf!=C.of)) goto L_117a6f19;
  /* 117a6ec2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 117a6ec5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117a6ec8 jmp 0x117a6ed3 */
  goto L_117a6ed3;
L_117a6eca:;
  /* 117a6eca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a6ecd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6ed0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_117a6ed3:;
  /* 117a6ed3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a6ed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a6ed8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a6eda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a6edc je 0x117a6f19 */
  if (C.zf) goto L_117a6f19;
  /* 117a6ede mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a6ee1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a6ee3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 117a6ee6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a6ee8 je 0x117a6f19 */
  if (C.zf) goto L_117a6f19;
  /* 117a6eea mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a6eed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6eef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a6ef1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 117a6ef4 jmp 0x117a6eff */
  goto L_117a6eff;
L_117a6ef6:;
  /* 117a6ef6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a6ef9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6efc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_117a6eff:;
  /* 117a6eff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a6f02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6f04 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 117a6f07 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6f0a jg 0x117a6f17 */
  if ((!C.zf&&C.sf==C.of)) goto L_117a6f17;
  /* 117a6f0c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117a6f0f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6f12 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 117a6f15 jmp 0x117a6ef6 */
  goto L_117a6ef6;
L_117a6f17:;
  /* 117a6f17 jmp 0x117a6eca */
  goto L_117a6eca;
L_117a6f19:;
  /* 117a6f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a6f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 117a6f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 117a6f1f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117a6f22 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6f25 push eax */
  push32((uint32_t)(EAX));
  /* 117a6f26 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117a6f2b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117a6f2e push ecx */
  push32((uint32_t)(ECX));
  /* 117a6f2f push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6f31 call 0x117a2cf0 */
  push32(0x117a6f36u); f_117a2cf0();
  /* 117a6f36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6f39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a6f3b jne 0x117a6f42 */
  if (!C.zf) goto L_117a6f42;
  /* 117a6f3d jmp 0x117a7092 */
  goto L_117a7092;
L_117a6f42:;
  /* 117a6f42 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117a6f45 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 117a6f4a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a6f4d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117a6f50 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 117a6f57 jmp 0x117a6f62 */
  goto L_117a6f62;
L_117a6f59:;
  /* 117a6f59 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a6f5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6f5f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_117a6f62:;
  /* 117a6f62 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6f69 jge 0x117a6f80 */
  if ((C.sf==C.of)) goto L_117a6f80;
  /* 117a6f6b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a6f6e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 117a6f72 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 117a6f75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a6f78 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6f7b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 117a6f7e jmp 0x117a6f59 */
  goto L_117a6f59;
L_117a6f80:;
  /* 117a6f80 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a6f82 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a6f84 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a6f87 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6f8a push edx */
  push32((uint32_t)(EDX));
  /* 117a6f8b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117a6f90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a6f93 push eax */
  push32((uint32_t)(EAX));
  /* 117a6f94 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6f96 call 0x117a9960 */
  push32(0x117a6f9bu); f_117a9960();
  /* 117a6f9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6f9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a6fa0 jne 0x117a6fa7 */
  if (!C.zf) goto L_117a6fa7;
  /* 117a6fa2 jmp 0x117a7092 */
  goto L_117a7092;
L_117a6fa7:;
  /* 117a6fa7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a6faa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 117a6faf cmp dword ptr [0x117c5fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c5fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a6fb6 jle 0x117a7013 */
  if ((C.zf||C.sf!=C.of)) goto L_117a7013;
  /* 117a6fb8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 117a6fbb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 117a6fbe jmp 0x117a6fc9 */
  goto L_117a6fc9;
L_117a6fc0:;
  /* 117a6fc0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a6fc3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6fc6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_117a6fc9:;
  /* 117a6fc9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a6fcc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a6fce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a6fd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a6fd2 je 0x117a7013 */
  if (C.zf) goto L_117a7013;
  /* 117a6fd4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a6fd7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6fd9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 117a6fdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a6fde je 0x117a7013 */
  if (C.zf) goto L_117a7013;
  /* 117a6fe0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a6fe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a6fe5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a6fe7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117a6fea jmp 0x117a6ff5 */
  goto L_117a6ff5;
L_117a6fec:;
  /* 117a6fec mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a6fef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6ff2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_117a6ff5:;
  /* 117a6ff5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a6ff8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a6ffa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 117a6ffd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7000 jg 0x117a7011 */
  if ((!C.zf&&C.sf==C.of)) goto L_117a7011;
  /* 117a7002 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a7005 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117a7008 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 117a700f jmp 0x117a6fec */
  goto L_117a6fec;
L_117a7011:;
  /* 117a7011 jmp 0x117a6fc0 */
  goto L_117a6fc0;
L_117a7013:;
  /* 117a7013 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117a7016 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7019 mov dword ptr [0x117c5db8], eax */
  w32((uint32_t)(0x117c5db8), (EAX));
  /* 117a701e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a7021 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7024 mov dword ptr [0x117c5dbc], ecx */
  w32((uint32_t)(0x117c5dbc), (ECX));
  /* 117a702a cmp dword ptr [0x117c7eb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7eb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7031 je 0x117a7044 */
  if (C.zf) goto L_117a7044;
  /* 117a7033 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a7035 mov edx, dword ptr [0x117c7eb8] */
  EDX = (r32((uint32_t)(0x117c7eb8)));
  /* 117a703b push edx */
  push32((uint32_t)(EDX));
  /* 117a703c call 0x1179a830 */
  push32(0x117a7041u); f_1179a830();
  /* 117a7041 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a7044:;
  /* 117a7044 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117a7047 mov dword ptr [0x117c7eb8], eax */
  w32((uint32_t)(0x117c7eb8), (EAX));
  /* 117a704c cmp dword ptr [0x117c7ebc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ebc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7053 je 0x117a7066 */
  if (C.zf) goto L_117a7066;
  /* 117a7055 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a7057 mov ecx, dword ptr [0x117c7ebc] */
  ECX = (r32((uint32_t)(0x117c7ebc)));
  /* 117a705d push ecx */
  push32((uint32_t)(ECX));
  /* 117a705e call 0x1179a830 */
  push32(0x117a7063u); f_1179a830();
  /* 117a7063 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a7066:;
  /* 117a7066 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a7069 mov dword ptr [0x117c7ebc], edx */
  w32((uint32_t)(0x117c7ebc), (EDX));
  /* 117a706f push 2 */
  push32((uint32_t)(0x2u));
  /* 117a7071 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117a7074 push eax */
  push32((uint32_t)(EAX));
  /* 117a7075 call 0x1179a830 */
  push32(0x117a707au); f_1179a830();
  /* 117a707a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a707d push 2 */
  push32((uint32_t)(0x2u));
  /* 117a707f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a7082 push ecx */
  push32((uint32_t)(ECX));
  /* 117a7083 call 0x1179a830 */
  push32(0x117a7088u); f_1179a830();
  /* 117a7088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a708b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a708d jmp 0x117a711c */
  goto L_117a711c;
L_117a7092:;
  /* 117a7092 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a7094 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117a7097 push edx */
  push32((uint32_t)(EDX));
  /* 117a7098 call 0x1179a830 */
  push32(0x117a709du); f_1179a830();
  /* 117a709d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a70a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a70a2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a70a5 push eax */
  push32((uint32_t)(EAX));
  /* 117a70a6 call 0x1179a830 */
  push32(0x117a70abu); f_1179a830();
  /* 117a70ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a70ae push 2 */
  push32((uint32_t)(0x2u));
  /* 117a70b0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117a70b3 push ecx */
  push32((uint32_t)(ECX));
  /* 117a70b4 call 0x1179a830 */
  push32(0x117a70b9u); f_1179a830();
  /* 117a70b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a70bc push 2 */
  push32((uint32_t)(0x2u));
  /* 117a70be mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a70c1 push edx */
  push32((uint32_t)(EDX));
  /* 117a70c2 call 0x1179a830 */
  push32(0x117a70c7u); f_1179a830();
  /* 117a70c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a70ca mov eax, 1 */
  EAX = (0x1u);
  /* 117a70cf jmp 0x117a711c */
  goto L_117a711c;
L_117a70d1:;
  /* 117a70d1 mov dword ptr [0x117c5db8], 0x117c5dc2 */
  w32((uint32_t)(0x117c5db8), (0x117c5dc2u));
  /* 117a70db mov dword ptr [0x117c5dbc], 0x117c5dc2 */
  w32((uint32_t)(0x117c5dbc), (0x117c5dc2u));
  /* 117a70e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a70e7 mov eax, dword ptr [0x117c7eb8] */
  EAX = (r32((uint32_t)(0x117c7eb8)));
  /* 117a70ec push eax */
  push32((uint32_t)(EAX));
  /* 117a70ed call 0x1179a830 */
  push32(0x117a70f2u); f_1179a830();
  /* 117a70f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a70f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a70f7 mov ecx, dword ptr [0x117c7ebc] */
  ECX = (r32((uint32_t)(0x117c7ebc)));
  /* 117a70fd push ecx */
  push32((uint32_t)(ECX));
  /* 117a70fe call 0x1179a830 */
  push32(0x117a7103u); f_1179a830();
  /* 117a7103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7106 mov dword ptr [0x117c7eb8], 0 */
  w32((uint32_t)(0x117c7eb8), (0x0u));
  /* 117a7110 mov dword ptr [0x117c7ebc], 0 */
  w32((uint32_t)(0x117c7ebc), (0x0u));
  /* 117a711a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a711c:;
  /* 117a711c mov esp, ebp */
  ESP = (EBP);
  /* 117a711e pop ebp */
  EBP = (pop32());
  /* 117a711f ret  */
  ESPCHK(0x117a6d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10017120 @ 0x117a7120 (7 bytes, 5 insns) */
void f_117a7120(void) {
  FTRACE(0x117a7120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7120 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7121 mov ebp, esp */
  EBP = (ESP);
  /* 117a7123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a7125 pop ebp */
  EBP = (pop32());
  /* 117a7126 ret  */
  ESPCHK(0x117a7120u, _esp0);
  ESP += 4; return;
}

/* FUN_10017130 @ 0x117a7130 (62 bytes, 35 insns) */
void f_117a7130(void) {
  FTRACE(0x117a7130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7130 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7131 mov ebp, esp */
  EBP = (ESP);
  /* 117a7133 push esi */
  push32((uint32_t)(ESI));
  /* 117a7134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a7136 push eax */
  push32((uint32_t)(EAX));
  /* 117a7137 push eax */
  push32((uint32_t)(EAX));
  /* 117a7138 push eax */
  push32((uint32_t)(EAX));
  /* 117a7139 push eax */
  push32((uint32_t)(EAX));
  /* 117a713a push eax */
  push32((uint32_t)(EAX));
  /* 117a713b push eax */
  push32((uint32_t)(EAX));
  /* 117a713c push eax */
  push32((uint32_t)(EAX));
  /* 117a713d push eax */
  push32((uint32_t)(EAX));
  /* 117a713e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a7141 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a7144:;
  /* 117a7144 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a7146 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 117a7148 je 0x117a7151 */
  if (C.zf) goto L_117a7151;
  /* 117a714a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 117a714b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x117a714b");
  /* 117a714f jmp 0x117a7144 */
  goto L_117a7144;
L_117a7151:;
  /* 117a7151 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7154 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117a7157 nop  */
  /* nop */
L_117a7158:;
  /* 117a7158 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117a7159 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a715b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 117a715d je 0x117a7166 */
  if (C.zf) goto L_117a7166;
  /* 117a715f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117a7160 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x117a7160");
  /* 117a7164 jae 0x117a7158 */
  if (!C.cf) goto L_117a7158;
L_117a7166:;
  /* 117a7166 mov eax, ecx */
  EAX = (ECX);
  /* 117a7168 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a716b pop esi */
  ESI = (pop32());
  /* 117a716c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a716d ret  */
  ESPCHK(0x117a7130u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x117a7170 (56 bytes, 31 insns) */
void f_117a7170(void) {
  FTRACE(0x117a7170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7170 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7171 mov ebp, esp */
  EBP = (ESP);
  /* 117a7173 push edi */
  push32((uint32_t)(EDI));
  /* 117a7174 push esi */
  push32((uint32_t)(ESI));
  /* 117a7175 push ebx */
  push32((uint32_t)(EBX));
  /* 117a7176 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a7179 jecxz 0x117a71a1 */
  x86_unimpl("jecxz @ 0x117a7179");
  /* 117a717b mov ebx, ecx */
  EBX = (ECX);
  /* 117a717d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7180 mov esi, edi */
  ESI = (EDI);
  /* 117a7182 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a7184 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 117a7186 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a7188 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a718a mov edi, esi */
  EDI = (ESI);
  /* 117a718c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117a718f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 117a7191 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 117a7194 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a7196 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a7199 ja 0x117a719f */
  if ((!C.cf&&!C.zf)) goto L_117a719f;
  /* 117a719b je 0x117a71a1 */
  if (C.zf) goto L_117a71a1;
  /* 117a719d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117a719e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_117a719f:;
  /* 117a719f not ecx */
  ECX = (~(ECX));
L_117a71a1:;
  /* 117a71a1 mov eax, ecx */
  EAX = (ECX);
  /* 117a71a3 pop ebx */
  EBX = (pop32());
  /* 117a71a4 pop esi */
  ESI = (pop32());
  /* 117a71a5 pop edi */
  EDI = (pop32());
  /* 117a71a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a71a7 ret  */
  ESPCHK(0x117a7170u, _esp0);
  ESP += 4; return;
}

/* FUN_100171b0 @ 0x117a71b0 (58 bytes, 32 insns) */
void f_117a71b0(void) {
  FTRACE(0x117a71b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a71b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a71b1 mov ebp, esp */
  EBP = (ESP);
  /* 117a71b3 push esi */
  push32((uint32_t)(ESI));
  /* 117a71b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a71b6 push eax */
  push32((uint32_t)(EAX));
  /* 117a71b7 push eax */
  push32((uint32_t)(EAX));
  /* 117a71b8 push eax */
  push32((uint32_t)(EAX));
  /* 117a71b9 push eax */
  push32((uint32_t)(EAX));
  /* 117a71ba push eax */
  push32((uint32_t)(EAX));
  /* 117a71bb push eax */
  push32((uint32_t)(EAX));
  /* 117a71bc push eax */
  push32((uint32_t)(EAX));
  /* 117a71bd push eax */
  push32((uint32_t)(EAX));
  /* 117a71be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a71c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a71c4:;
  /* 117a71c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a71c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 117a71c8 je 0x117a71d1 */
  if (C.zf) goto L_117a71d1;
  /* 117a71ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 117a71cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x117a71cb");
  /* 117a71cf jmp 0x117a71c4 */
  goto L_117a71c4;
L_117a71d1:;
  /* 117a71d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_117a71d4:;
  /* 117a71d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a71d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 117a71d8 je 0x117a71e4 */
  if (C.zf) goto L_117a71e4;
  /* 117a71da inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117a71db bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x117a71db");
  /* 117a71df jae 0x117a71d4 */
  if (!C.cf) goto L_117a71d4;
  /* 117a71e1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_117a71e4:;
  /* 117a71e4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a71e7 pop esi */
  ESI = (pop32());
  /* 117a71e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a71e9 ret  */
  ESPCHK(0x117a71b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100171f0 @ 0x117a71f0 (512 bytes, 147 insns) */
void f_117a71f0(void) {
  FTRACE(0x117a71f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a71f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a71f1 mov ebp, esp */
  EBP = (ESP);
  /* 117a71f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a71f6 cmp dword ptr [0x117c7f04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a71fd jne 0x117a7222 */
  if (!C.zf) goto L_117a7222;
  /* 117a71ff call 0x117a7cc0 */
  push32(0x117a7204u); f_117a7cc0();
  /* 117a7204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7206 je 0x117a7212 */
  if (C.zf) goto L_117a7212;
  /* 117a7208 mov eax, dword ptr [0x117ca2ec] */
  EAX = (r32((uint32_t)(0x117ca2ec)));
  /* 117a720d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a7210 jmp 0x117a7219 */
  goto L_117a7219;
L_117a7212:;
  /* 117a7212 mov dword ptr [ebp - 8], 0x117a7d10 */
  w32((uint32_t)(EBP + -0x8), (0x117a7d10u));
L_117a7219:;
  /* 117a7219 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a721c mov dword ptr [0x117c7f04], ecx */
  w32((uint32_t)(0x117c7f04), (ECX));
L_117a7222:;
  /* 117a7222 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7226 jne 0x117a7232 */
  if (!C.zf) goto L_117a7232;
  /* 117a7228 call 0x117a7b10 */
  push32(0x117a722du); f_117a7b10();
  /* 117a722d jmp 0x117a72fe */
  goto L_117a72fe;
L_117a7232:;
  /* 117a7232 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7235 mov dword ptr [0x117c7ef4], edx */
  w32((uint32_t)(0x117c7ef4), (EDX));
  /* 117a723b cmp dword ptr [0x117c7ef4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ef4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7242 je 0x117a7264 */
  if (C.zf) goto L_117a7264;
  /* 117a7244 mov eax, dword ptr [0x117c7ef4] */
  EAX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a7249 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a724c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a724e je 0x117a7264 */
  if (C.zf) goto L_117a7264;
  /* 117a7250 push 0x117c7ef4 */
  push32((uint32_t)(0x117c7ef4u));
  /* 117a7255 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117a7257 push 0x117c6bc0 */
  push32((uint32_t)(0x117c6bc0u));
  /* 117a725c call 0x117a73f0 */
  push32(0x117a7261u); f_117a73f0();
  /* 117a7261 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a7264:;
  /* 117a7264 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7267 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a726a mov dword ptr [0x117c7ef8], edx */
  w32((uint32_t)(0x117c7ef8), (EDX));
  /* 117a7270 cmp dword ptr [0x117c7ef8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ef8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7277 je 0x117a7299 */
  if (C.zf) goto L_117a7299;
  /* 117a7279 mov eax, dword ptr [0x117c7ef8] */
  EAX = (r32((uint32_t)(0x117c7ef8)));
  /* 117a727e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a7281 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a7283 je 0x117a7299 */
  if (C.zf) goto L_117a7299;
  /* 117a7285 push 0x117c7ef8 */
  push32((uint32_t)(0x117c7ef8u));
  /* 117a728a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 117a728c push 0x117c6b08 */
  push32((uint32_t)(0x117c6b08u));
  /* 117a7291 call 0x117a73f0 */
  push32(0x117a7296u); f_117a73f0();
  /* 117a7296 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a7299:;
  /* 117a7299 mov dword ptr [0x117c7efc], 0 */
  w32((uint32_t)(0x117c7efc), (0x0u));
  /* 117a72a3 cmp dword ptr [0x117c7ef4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ef4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a72aa je 0x117a72dd */
  if (C.zf) goto L_117a72dd;
  /* 117a72ac mov edx, dword ptr [0x117c7ef4] */
  EDX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a72b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117a72b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a72b7 je 0x117a72dd */
  if (C.zf) goto L_117a72dd;
  /* 117a72b9 cmp dword ptr [0x117c7ef8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ef8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a72c0 je 0x117a72d6 */
  if (C.zf) goto L_117a72d6;
  /* 117a72c2 mov ecx, dword ptr [0x117c7ef8] */
  ECX = (r32((uint32_t)(0x117c7ef8)));
  /* 117a72c8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a72cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a72cd je 0x117a72d6 */
  if (C.zf) goto L_117a72d6;
  /* 117a72cf call 0x117a7480 */
  push32(0x117a72d4u); f_117a7480();
  /* 117a72d4 jmp 0x117a72db */
  goto L_117a72db;
L_117a72d6:;
  /* 117a72d6 call 0x117a7870 */
  push32(0x117a72dbu); f_117a7870();
L_117a72db:;
  /* 117a72db jmp 0x117a72fe */
  goto L_117a72fe;
L_117a72dd:;
  /* 117a72dd cmp dword ptr [0x117c7ef8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ef8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a72e4 je 0x117a72f9 */
  if (C.zf) goto L_117a72f9;
  /* 117a72e6 mov eax, dword ptr [0x117c7ef8] */
  EAX = (r32((uint32_t)(0x117c7ef8)));
  /* 117a72eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a72ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a72f0 je 0x117a72f9 */
  if (C.zf) goto L_117a72f9;
  /* 117a72f2 call 0x117a7a10 */
  push32(0x117a72f7u); f_117a7a10();
  /* 117a72f7 jmp 0x117a72fe */
  goto L_117a72fe;
L_117a72f9:;
  /* 117a72f9 call 0x117a7b10 */
  push32(0x117a72feu); f_117a7b10();
L_117a72fe:;
  /* 117a72fe cmp dword ptr [0x117c7efc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7efc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7305 jne 0x117a730e */
  if (!C.zf) goto L_117a730e;
  /* 117a7307 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a7309 jmp 0x117a73ec */
  goto L_117a73ec;
L_117a730e:;
  /* 117a730e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7311 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7317 push edx */
  push32((uint32_t)(EDX));
  /* 117a7318 call 0x117a7b40 */
  push32(0x117a731du); f_117a7b40();
  /* 117a731d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7320 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a7323 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7327 je 0x117a733c */
  if (C.zf) goto L_117a733c;
  /* 117a7329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a732c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a7331 push eax */
  push32((uint32_t)(EAX));
  /* 117a7332 call dword ptr [0x117ca2f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2f0))), 0x117a7338u);
  /* 117a7338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a733a jne 0x117a7343 */
  if (!C.zf) goto L_117a7343;
L_117a733c:;
  /* 117a733c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a733e jmp 0x117a73ec */
  goto L_117a73ec;
L_117a7343:;
  /* 117a7343 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a7345 mov ecx, dword ptr [0x117c7ee4] */
  ECX = (r32((uint32_t)(0x117c7ee4)));
  /* 117a734b push ecx */
  push32((uint32_t)(ECX));
  /* 117a734c call dword ptr [0x117ca2f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2f4))), 0x117a7352u);
  /* 117a7352 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7354 jne 0x117a735d */
  if (!C.zf) goto L_117a735d;
  /* 117a7356 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a7358 jmp 0x117a73ec */
  goto L_117a73ec;
L_117a735d:;
  /* 117a735d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7361 je 0x117a7388 */
  if (C.zf) goto L_117a7388;
  /* 117a7363 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a7366 mov ax, word ptr [0x117c7ee4] */
  AX = (r16((uint32_t)(0x117c7ee4)));
  /* 117a736c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 117a736f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a7372 mov dx, word ptr [0x117c7f00] */
  DX = (r16((uint32_t)(0x117c7f00)));
  /* 117a7379 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 117a737d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a7380 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 117a7384 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_117a7388:;
  /* 117a7388 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a738c je 0x117a73e7 */
  if (C.zf) goto L_117a73e7;
  /* 117a738e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117a7390 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a7393 push edx */
  push32((uint32_t)(EDX));
  /* 117a7394 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 117a7399 mov eax, dword ptr [0x117c7ee4] */
  EAX = (r32((uint32_t)(0x117c7ee4)));
  /* 117a739e push eax */
  push32((uint32_t)(EAX));
  /* 117a739f call dword ptr [0x117c7f04] */
  call_ind((uint32_t)(r32((uint32_t)(0x117c7f04))), 0x117a73a5u);
  /* 117a73a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a73a7 jne 0x117a73ad */
  if (!C.zf) goto L_117a73ad;
  /* 117a73a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a73ab jmp 0x117a73ec */
  goto L_117a73ec;
L_117a73ad:;
  /* 117a73ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117a73af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a73b2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a73b5 push ecx */
  push32((uint32_t)(ECX));
  /* 117a73b6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 117a73bb mov edx, dword ptr [0x117c7f00] */
  EDX = (r32((uint32_t)(0x117c7f00)));
  /* 117a73c1 push edx */
  push32((uint32_t)(EDX));
  /* 117a73c2 call dword ptr [0x117c7f04] */
  call_ind((uint32_t)(r32((uint32_t)(0x117c7f04))), 0x117a73c8u);
  /* 117a73c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a73ca jne 0x117a73d0 */
  if (!C.zf) goto L_117a73d0;
  /* 117a73cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a73ce jmp 0x117a73ec */
  goto L_117a73ec;
L_117a73d0:;
  /* 117a73d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 117a73d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a73d5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a73da push eax */
  push32((uint32_t)(EAX));
  /* 117a73db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a73de push ecx */
  push32((uint32_t)(ECX));
  /* 117a73df call 0x1179c8e0 */
  push32(0x117a73e4u); f_1179c8e0();
  /* 117a73e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a73e7:;
  /* 117a73e7 mov eax, 1 */
  EAX = (0x1u);
L_117a73ec:;
  /* 117a73ec mov esp, ebp */
  ESP = (EBP);
  /* 117a73ee pop ebp */
  EBP = (pop32());
  /* 117a73ef ret  */
  ESPCHK(0x117a71f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100173f0 @ 0x117a73f0 (130 bytes, 47 insns) */
void f_117a73f0(void) {
  FTRACE(0x117a73f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a73f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a73f1 mov ebp, esp */
  EBP = (ESP);
  /* 117a73f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a73f6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 117a73fd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_117a7404:;
  /* 117a7404 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a7407 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a740a jg 0x117a746e */
  if ((!C.zf&&C.sf==C.of)) goto L_117a746e;
  /* 117a740c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7410 je 0x117a746e */
  if (C.zf) goto L_117a746e;
  /* 117a7412 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a7415 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7418 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a7419 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a741b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117a741d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a7420 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a7423 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7426 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 117a7429 push eax */
  push32((uint32_t)(EAX));
  /* 117a742a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a742d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a742f push edx */
  push32((uint32_t)(EDX));
  /* 117a7430 call 0x117a9bd0 */
  push32(0x117a7435u); f_117a9bd0();
  /* 117a7435 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7438 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a743b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a743f jne 0x117a7452 */
  if (!C.zf) goto L_117a7452;
  /* 117a7441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a7444 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7447 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 117a744b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a744e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117a7450 jmp 0x117a746c */
  goto L_117a746c;
L_117a7452:;
  /* 117a7452 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7456 jge 0x117a7463 */
  if ((C.sf==C.of)) goto L_117a7463;
  /* 117a7458 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a745b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a745e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 117a7461 jmp 0x117a746c */
  goto L_117a746c;
L_117a7463:;
  /* 117a7463 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a7466 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7469 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_117a746c:;
  /* 117a746c jmp 0x117a7404 */
  goto L_117a7404;
L_117a746e:;
  /* 117a746e mov esp, ebp */
  ESP = (EBP);
  /* 117a7470 pop ebp */
  EBP = (pop32());
  /* 117a7471 ret  */
  ESPCHK(0x117a73f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017480 @ 0x117a7480 (186 bytes, 50 insns) */
void f_117a7480(void) {
  FTRACE(0x117a7480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7480 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7481 mov ebp, esp */
  EBP = (ESP);
  /* 117a7483 push ecx */
  push32((uint32_t)(ECX));
  /* 117a7484 mov eax, dword ptr [0x117c7ef4] */
  EAX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a7489 push eax */
  push32((uint32_t)(EAX));
  /* 117a748a call 0x1179cbd0 */
  push32(0x117a748fu); f_1179cbd0();
  /* 117a748f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7492 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a7494 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7497 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 117a749a mov dword ptr [0x117c7ef0], ecx */
  w32((uint32_t)(0x117c7ef0), (ECX));
  /* 117a74a0 mov edx, dword ptr [0x117c7ef8] */
  EDX = (r32((uint32_t)(0x117c7ef8)));
  /* 117a74a6 push edx */
  push32((uint32_t)(EDX));
  /* 117a74a7 call 0x1179cbd0 */
  push32(0x117a74acu); f_1179cbd0();
  /* 117a74ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a74af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a74b1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a74b4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 117a74b7 mov dword ptr [0x117c7ee8], ecx */
  w32((uint32_t)(0x117c7ee8), (ECX));
  /* 117a74bd mov dword ptr [0x117c7ee4], 0 */
  w32((uint32_t)(0x117c7ee4), (0x0u));
  /* 117a74c7 cmp dword ptr [0x117c7ef0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ef0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a74ce je 0x117a74d9 */
  if (C.zf) goto L_117a74d9;
  /* 117a74d0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 117a74d7 jmp 0x117a74eb */
  goto L_117a74eb;
L_117a74d9:;
  /* 117a74d9 mov edx, dword ptr [0x117c7ef4] */
  EDX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a74df push edx */
  push32((uint32_t)(EDX));
  /* 117a74e0 call 0x117a7f20 */
  push32(0x117a74e5u); f_117a7f20();
  /* 117a74e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a74e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117a74eb:;
  /* 117a74eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a74ee mov dword ptr [0x117c7eec], eax */
  w32((uint32_t)(0x117c7eec), (EAX));
  /* 117a74f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a74f5 push 0x117a7540 */
  push32((uint32_t)(0x117a7540u));
  /* 117a74fa call dword ptr [0x117ca2e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2e8))), 0x117a7500u);
  /* 117a7500 mov ecx, dword ptr [0x117c7efc] */
  ECX = (r32((uint32_t)(0x117c7efc)));
  /* 117a7506 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 117a750c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a750e je 0x117a752c */
  if (C.zf) goto L_117a752c;
  /* 117a7510 mov edx, dword ptr [0x117c7efc] */
  EDX = (r32((uint32_t)(0x117c7efc)));
  /* 117a7516 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 117a751c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a751e je 0x117a752c */
  if (C.zf) goto L_117a752c;
  /* 117a7520 mov eax, dword ptr [0x117c7efc] */
  EAX = (r32((uint32_t)(0x117c7efc)));
  /* 117a7525 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 117a7528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a752a jne 0x117a7536 */
  if (!C.zf) goto L_117a7536;
L_117a752c:;
  /* 117a752c mov dword ptr [0x117c7efc], 0 */
  w32((uint32_t)(0x117c7efc), (0x0u));
L_117a7536:;
  /* 117a7536 mov esp, ebp */
  ESP = (EBP);
  /* 117a7538 pop ebp */
  EBP = (pop32());
  /* 117a7539 ret  */
  ESPCHK(0x117a7480u, _esp0);
  ESP += 4; return;
}

/* FUN_10017540 @ 0x117a7540 (804 bytes, 220 insns) */
void f_117a7540(void) {
  FTRACE(0x117a7540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7540 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7541 mov ebp, esp */
  EBP = (ESP);
  /* 117a7543 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7549 push eax */
  push32((uint32_t)(EAX));
  /* 117a754a call 0x117a7ea0 */
  push32(0x117a754fu); f_117a7ea0();
  /* 117a754f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7552 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 117a7555 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 117a7557 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 117a755a push ecx */
  push32((uint32_t)(ECX));
  /* 117a755b mov edx, dword ptr [0x117c7ee8] */
  EDX = (r32((uint32_t)(0x117c7ee8)));
  /* 117a7561 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a7563 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7565 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 117a756b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7571 push edx */
  push32((uint32_t)(EDX));
  /* 117a7572 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a7575 push eax */
  push32((uint32_t)(EAX));
  /* 117a7576 call dword ptr [0x117c7f04] */
  call_ind((uint32_t)(r32((uint32_t)(0x117c7f04))), 0x117a757cu);
  /* 117a757c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a757e jne 0x117a7594 */
  if (!C.zf) goto L_117a7594;
  /* 117a7580 mov dword ptr [0x117c7efc], 0 */
  w32((uint32_t)(0x117c7efc), (0x0u));
  /* 117a758a mov eax, 1 */
  EAX = (0x1u);
  /* 117a758f jmp 0x117a785e */
  goto L_117a785e;
L_117a7594:;
  /* 117a7594 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 117a7597 push ecx */
  push32((uint32_t)(ECX));
  /* 117a7598 mov edx, dword ptr [0x117c7ef8] */
  EDX = (r32((uint32_t)(0x117c7ef8)));
  /* 117a759e push edx */
  push32((uint32_t)(EDX));
  /* 117a759f call 0x117a9bd0 */
  push32(0x117a75a4u); f_117a9bd0();
  /* 117a75a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a75a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a75a9 jne 0x117a76cf */
  if (!C.zf) goto L_117a76cf;
  /* 117a75af push 0x78 */
  push32((uint32_t)(0x78u));
  /* 117a75b1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 117a75b4 push eax */
  push32((uint32_t)(EAX));
  /* 117a75b5 mov ecx, dword ptr [0x117c7ef0] */
  ECX = (r32((uint32_t)(0x117c7ef0)));
  /* 117a75bb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a75bd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a75bf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 117a75c5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a75cb push ecx */
  push32((uint32_t)(ECX));
  /* 117a75cc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a75cf push edx */
  push32((uint32_t)(EDX));
  /* 117a75d0 call dword ptr [0x117c7f04] */
  call_ind((uint32_t)(r32((uint32_t)(0x117c7f04))), 0x117a75d6u);
  /* 117a75d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a75d8 jne 0x117a75ee */
  if (!C.zf) goto L_117a75ee;
  /* 117a75da mov dword ptr [0x117c7efc], 0 */
  w32((uint32_t)(0x117c7efc), (0x0u));
  /* 117a75e4 mov eax, 1 */
  EAX = (0x1u);
  /* 117a75e9 jmp 0x117a785e */
  goto L_117a785e;
L_117a75ee:;
  /* 117a75ee lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 117a75f1 push eax */
  push32((uint32_t)(EAX));
  /* 117a75f2 mov ecx, dword ptr [0x117c7ef4] */
  ECX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a75f8 push ecx */
  push32((uint32_t)(ECX));
  /* 117a75f9 call 0x117a9bd0 */
  push32(0x117a75feu); f_117a9bd0();
  /* 117a75fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7601 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7603 jne 0x117a7630 */
  if (!C.zf) goto L_117a7630;
  /* 117a7605 mov edx, dword ptr [0x117c7efc] */
  EDX = (r32((uint32_t)(0x117c7efc)));
  /* 117a760b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 117a7611 mov dword ptr [0x117c7efc], edx */
  w32((uint32_t)(0x117c7efc), (EDX));
  /* 117a7617 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a761a mov dword ptr [0x117c7f00], eax */
  w32((uint32_t)(0x117c7f00), (EAX));
  /* 117a761f mov ecx, dword ptr [0x117c7f00] */
  ECX = (r32((uint32_t)(0x117c7f00)));
  /* 117a7625 mov dword ptr [0x117c7ee4], ecx */
  w32((uint32_t)(0x117c7ee4), (ECX));
  /* 117a762b jmp 0x117a76cf */
  goto L_117a76cf;
L_117a7630:;
  /* 117a7630 mov edx, dword ptr [0x117c7efc] */
  EDX = (r32((uint32_t)(0x117c7efc)));
  /* 117a7636 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 117a7639 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a763b jne 0x117a76cf */
  if (!C.zf) goto L_117a76cf;
  /* 117a7641 cmp dword ptr [0x117c7eec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7eec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7648 je 0x117a769d */
  if (C.zf) goto L_117a769d;
  /* 117a764a mov eax, dword ptr [0x117c7eec] */
  EAX = (r32((uint32_t)(0x117c7eec)));
  /* 117a764f push eax */
  push32((uint32_t)(EAX));
  /* 117a7650 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 117a7653 push ecx */
  push32((uint32_t)(ECX));
  /* 117a7654 mov edx, dword ptr [0x117c7ef4] */
  EDX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a765a push edx */
  push32((uint32_t)(EDX));
  /* 117a765b call 0x117a9ca0 */
  push32(0x117a7660u); f_117a9ca0();
  /* 117a7660 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7663 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7665 jne 0x117a769d */
  if (!C.zf) goto L_117a769d;
  /* 117a7667 mov eax, dword ptr [0x117c7efc] */
  EAX = (r32((uint32_t)(0x117c7efc)));
  /* 117a766c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 117a766e mov dword ptr [0x117c7efc], eax */
  w32((uint32_t)(0x117c7efc), (EAX));
  /* 117a7673 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a7676 mov dword ptr [0x117c7f00], ecx */
  w32((uint32_t)(0x117c7f00), (ECX));
  /* 117a767c mov edx, dword ptr [0x117c7ef4] */
  EDX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a7682 push edx */
  push32((uint32_t)(EDX));
  /* 117a7683 call 0x1179cbd0 */
  push32(0x117a7688u); f_1179cbd0();
  /* 117a7688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a768b cmp eax, dword ptr [0x117c7eec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c7eec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7691 jne 0x117a769b */
  if (!C.zf) goto L_117a769b;
  /* 117a7693 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a7696 mov dword ptr [0x117c7ee4], eax */
  w32((uint32_t)(0x117c7ee4), (EAX));
L_117a769b:;
  /* 117a769b jmp 0x117a76cf */
  goto L_117a76cf;
L_117a769d:;
  /* 117a769d mov ecx, dword ptr [0x117c7efc] */
  ECX = (r32((uint32_t)(0x117c7efc)));
  /* 117a76a3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117a76a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a76a8 jne 0x117a76cf */
  if (!C.zf) goto L_117a76cf;
  /* 117a76aa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a76ad push edx */
  push32((uint32_t)(EDX));
  /* 117a76ae call 0x117a7be0 */
  push32(0x117a76b3u); f_117a7be0();
  /* 117a76b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a76b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a76b8 je 0x117a76cf */
  if (C.zf) goto L_117a76cf;
  /* 117a76ba mov eax, dword ptr [0x117c7efc] */
  EAX = (r32((uint32_t)(0x117c7efc)));
  /* 117a76bf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 117a76c1 mov dword ptr [0x117c7efc], eax */
  w32((uint32_t)(0x117c7efc), (EAX));
  /* 117a76c6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a76c9 mov dword ptr [0x117c7f00], ecx */
  w32((uint32_t)(0x117c7f00), (ECX));
L_117a76cf:;
  /* 117a76cf mov edx, dword ptr [0x117c7efc] */
  EDX = (r32((uint32_t)(0x117c7efc)));
  /* 117a76d5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 117a76db cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a76e1 je 0x117a7851 */
  if (C.zf) goto L_117a7851;
  /* 117a76e7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 117a76e9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 117a76ec push eax */
  push32((uint32_t)(EAX));
  /* 117a76ed mov ecx, dword ptr [0x117c7ef0] */
  ECX = (r32((uint32_t)(0x117c7ef0)));
  /* 117a76f3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a76f5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a76f7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 117a76fd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7703 push ecx */
  push32((uint32_t)(ECX));
  /* 117a7704 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a7707 push edx */
  push32((uint32_t)(EDX));
  /* 117a7708 call dword ptr [0x117c7f04] */
  call_ind((uint32_t)(r32((uint32_t)(0x117c7f04))), 0x117a770eu);
  /* 117a770e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7710 jne 0x117a7726 */
  if (!C.zf) goto L_117a7726;
  /* 117a7712 mov dword ptr [0x117c7efc], 0 */
  w32((uint32_t)(0x117c7efc), (0x0u));
  /* 117a771c mov eax, 1 */
  EAX = (0x1u);
  /* 117a7721 jmp 0x117a785e */
  goto L_117a785e;
L_117a7726:;
  /* 117a7726 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 117a7729 push eax */
  push32((uint32_t)(EAX));
  /* 117a772a mov ecx, dword ptr [0x117c7ef4] */
  ECX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a7730 push ecx */
  push32((uint32_t)(ECX));
  /* 117a7731 call 0x117a9bd0 */
  push32(0x117a7736u); f_117a9bd0();
  /* 117a7736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a773b jne 0x117a77f0 */
  if (!C.zf) goto L_117a77f0;
  /* 117a7741 mov edx, dword ptr [0x117c7efc] */
  EDX = (r32((uint32_t)(0x117c7efc)));
  /* 117a7747 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 117a774a mov dword ptr [0x117c7efc], edx */
  w32((uint32_t)(0x117c7efc), (EDX));
  /* 117a7750 cmp dword ptr [0x117c7ef0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ef0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7757 je 0x117a777a */
  if (C.zf) goto L_117a777a;
  /* 117a7759 mov eax, dword ptr [0x117c7efc] */
  EAX = (r32((uint32_t)(0x117c7efc)));
  /* 117a775e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 117a7761 mov dword ptr [0x117c7efc], eax */
  w32((uint32_t)(0x117c7efc), (EAX));
  /* 117a7766 cmp dword ptr [0x117c7ee4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ee4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a776d jne 0x117a7778 */
  if (!C.zf) goto L_117a7778;
  /* 117a776f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a7772 mov dword ptr [0x117c7ee4], ecx */
  w32((uint32_t)(0x117c7ee4), (ECX));
L_117a7778:;
  /* 117a7778 jmp 0x117a77ee */
  goto L_117a77ee;
L_117a777a:;
  /* 117a777a cmp dword ptr [0x117c7eec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7eec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7781 je 0x117a77cf */
  if (C.zf) goto L_117a77cf;
  /* 117a7783 mov edx, dword ptr [0x117c7ef4] */
  EDX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a7789 push edx */
  push32((uint32_t)(EDX));
  /* 117a778a call 0x1179cbd0 */
  push32(0x117a778fu); f_1179cbd0();
  /* 117a778f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7792 cmp eax, dword ptr [0x117c7eec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c7eec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7798 jne 0x117a77cf */
  if (!C.zf) goto L_117a77cf;
  /* 117a779a push 1 */
  push32((uint32_t)(0x1u));
  /* 117a779c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a779f push eax */
  push32((uint32_t)(EAX));
  /* 117a77a0 call 0x117a7c30 */
  push32(0x117a77a5u); f_117a7c30();
  /* 117a77a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a77a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a77aa je 0x117a77cd */
  if (C.zf) goto L_117a77cd;
  /* 117a77ac mov ecx, dword ptr [0x117c7efc] */
  ECX = (r32((uint32_t)(0x117c7efc)));
  /* 117a77b2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 117a77b5 mov dword ptr [0x117c7efc], ecx */
  w32((uint32_t)(0x117c7efc), (ECX));
  /* 117a77bb cmp dword ptr [0x117c7ee4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ee4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a77c2 jne 0x117a77cd */
  if (!C.zf) goto L_117a77cd;
  /* 117a77c4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a77c7 mov dword ptr [0x117c7ee4], edx */
  w32((uint32_t)(0x117c7ee4), (EDX));
L_117a77cd:;
  /* 117a77cd jmp 0x117a77ee */
  goto L_117a77ee;
L_117a77cf:;
  /* 117a77cf mov eax, dword ptr [0x117c7efc] */
  EAX = (r32((uint32_t)(0x117c7efc)));
  /* 117a77d4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 117a77d7 mov dword ptr [0x117c7efc], eax */
  w32((uint32_t)(0x117c7efc), (EAX));
  /* 117a77dc cmp dword ptr [0x117c7ee4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ee4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a77e3 jne 0x117a77ee */
  if (!C.zf) goto L_117a77ee;
  /* 117a77e5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a77e8 mov dword ptr [0x117c7ee4], ecx */
  w32((uint32_t)(0x117c7ee4), (ECX));
L_117a77ee:;
  /* 117a77ee jmp 0x117a7851 */
  goto L_117a7851;
L_117a77f0:;
  /* 117a77f0 cmp dword ptr [0x117c7ef0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ef0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a77f7 jne 0x117a7851 */
  if (!C.zf) goto L_117a7851;
  /* 117a77f9 cmp dword ptr [0x117c7eec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7eec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7800 je 0x117a7851 */
  if (C.zf) goto L_117a7851;
  /* 117a7802 mov edx, dword ptr [0x117c7eec] */
  EDX = (r32((uint32_t)(0x117c7eec)));
  /* 117a7808 push edx */
  push32((uint32_t)(EDX));
  /* 117a7809 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 117a780c push eax */
  push32((uint32_t)(EAX));
  /* 117a780d mov ecx, dword ptr [0x117c7ef4] */
  ECX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a7813 push ecx */
  push32((uint32_t)(ECX));
  /* 117a7814 call 0x117a9ca0 */
  push32(0x117a7819u); f_117a9ca0();
  /* 117a7819 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a781c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a781e jne 0x117a7851 */
  if (!C.zf) goto L_117a7851;
  /* 117a7820 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a7822 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a7825 push edx */
  push32((uint32_t)(EDX));
  /* 117a7826 call 0x117a7c30 */
  push32(0x117a782bu); f_117a7c30();
  /* 117a782b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a782e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7830 je 0x117a7851 */
  if (C.zf) goto L_117a7851;
  /* 117a7832 mov eax, dword ptr [0x117c7efc] */
  EAX = (r32((uint32_t)(0x117c7efc)));
  /* 117a7837 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 117a783a mov dword ptr [0x117c7efc], eax */
  w32((uint32_t)(0x117c7efc), (EAX));
  /* 117a783f cmp dword ptr [0x117c7ee4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ee4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7846 jne 0x117a7851 */
  if (!C.zf) goto L_117a7851;
  /* 117a7848 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a784b mov dword ptr [0x117c7ee4], ecx */
  w32((uint32_t)(0x117c7ee4), (ECX));
L_117a7851:;
  /* 117a7851 mov eax, dword ptr [0x117c7efc] */
  EAX = (r32((uint32_t)(0x117c7efc)));
  /* 117a7856 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 117a7859 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a785b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a785d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_117a785e:;
  /* 117a785e mov esp, ebp */
  ESP = (EBP);
  /* 117a7860 pop ebp */
  EBP = (pop32());
  /* 117a7861 ret 4 */
  ESPCHK(0x117a7540u, _esp0);
  ESP += 8; return;
}

/* FUN_10017870 @ 0x117a7870 (116 bytes, 33 insns) */
void f_117a7870(void) {
  FTRACE(0x117a7870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7870 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7871 mov ebp, esp */
  EBP = (ESP);
  /* 117a7873 push ecx */
  push32((uint32_t)(ECX));
  /* 117a7874 mov eax, dword ptr [0x117c7ef4] */
  EAX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a7879 push eax */
  push32((uint32_t)(EAX));
  /* 117a787a call 0x1179cbd0 */
  push32(0x117a787fu); f_1179cbd0();
  /* 117a787f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7882 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a7884 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7887 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 117a788a mov dword ptr [0x117c7ef0], ecx */
  w32((uint32_t)(0x117c7ef0), (ECX));
  /* 117a7890 cmp dword ptr [0x117c7ef0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ef0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7897 je 0x117a78a2 */
  if (C.zf) goto L_117a78a2;
  /* 117a7899 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 117a78a0 jmp 0x117a78b4 */
  goto L_117a78b4;
L_117a78a2:;
  /* 117a78a2 mov edx, dword ptr [0x117c7ef4] */
  EDX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a78a8 push edx */
  push32((uint32_t)(EDX));
  /* 117a78a9 call 0x117a7f20 */
  push32(0x117a78aeu); f_117a7f20();
  /* 117a78ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a78b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117a78b4:;
  /* 117a78b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a78b7 mov dword ptr [0x117c7eec], eax */
  w32((uint32_t)(0x117c7eec), (EAX));
  /* 117a78bc push 1 */
  push32((uint32_t)(0x1u));
  /* 117a78be push 0x117a78f0 */
  push32((uint32_t)(0x117a78f0u));
  /* 117a78c3 call dword ptr [0x117ca2e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2e8))), 0x117a78c9u);
  /* 117a78c9 mov ecx, dword ptr [0x117c7efc] */
  ECX = (r32((uint32_t)(0x117c7efc)));
  /* 117a78cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 117a78d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a78d4 jne 0x117a78e0 */
  if (!C.zf) goto L_117a78e0;
  /* 117a78d6 mov dword ptr [0x117c7efc], 0 */
  w32((uint32_t)(0x117c7efc), (0x0u));
L_117a78e0:;
  /* 117a78e0 mov esp, ebp */
  ESP = (EBP);
  /* 117a78e2 pop ebp */
  EBP = (pop32());
  /* 117a78e3 ret  */
  ESPCHK(0x117a7870u, _esp0);
  ESP += 4; return;
}

/* FUN_100178f0 @ 0x117a78f0 (287 bytes, 86 insns) */
void f_117a78f0(void) {
  FTRACE(0x117a78f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a78f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a78f1 mov ebp, esp */
  EBP = (ESP);
  /* 117a78f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a78f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a78f9 push eax */
  push32((uint32_t)(EAX));
  /* 117a78fa call 0x117a7ea0 */
  push32(0x117a78ffu); f_117a7ea0();
  /* 117a78ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7902 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 117a7905 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 117a7907 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 117a790a push ecx */
  push32((uint32_t)(ECX));
  /* 117a790b mov edx, dword ptr [0x117c7ef0] */
  EDX = (r32((uint32_t)(0x117c7ef0)));
  /* 117a7911 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a7913 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7915 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 117a791b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7921 push edx */
  push32((uint32_t)(EDX));
  /* 117a7922 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a7925 push eax */
  push32((uint32_t)(EAX));
  /* 117a7926 call dword ptr [0x117c7f04] */
  call_ind((uint32_t)(r32((uint32_t)(0x117c7f04))), 0x117a792cu);
  /* 117a792c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a792e jne 0x117a7944 */
  if (!C.zf) goto L_117a7944;
  /* 117a7930 mov dword ptr [0x117c7efc], 0 */
  w32((uint32_t)(0x117c7efc), (0x0u));
  /* 117a793a mov eax, 1 */
  EAX = (0x1u);
  /* 117a793f jmp 0x117a7a09 */
  goto L_117a7a09;
L_117a7944:;
  /* 117a7944 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 117a7947 push ecx */
  push32((uint32_t)(ECX));
  /* 117a7948 mov edx, dword ptr [0x117c7ef4] */
  EDX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a794e push edx */
  push32((uint32_t)(EDX));
  /* 117a794f call 0x117a9bd0 */
  push32(0x117a7954u); f_117a9bd0();
  /* 117a7954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7959 jne 0x117a7999 */
  if (!C.zf) goto L_117a7999;
  /* 117a795b cmp dword ptr [0x117c7ef0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ef0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7962 jne 0x117a7976 */
  if (!C.zf) goto L_117a7976;
  /* 117a7964 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a7966 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a7969 push eax */
  push32((uint32_t)(EAX));
  /* 117a796a call 0x117a7c30 */
  push32(0x117a796fu); f_117a7c30();
  /* 117a796f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7974 je 0x117a7997 */
  if (C.zf) goto L_117a7997;
L_117a7976:;
  /* 117a7976 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a7979 mov dword ptr [0x117c7f00], ecx */
  w32((uint32_t)(0x117c7f00), (ECX));
  /* 117a797f mov edx, dword ptr [0x117c7f00] */
  EDX = (r32((uint32_t)(0x117c7f00)));
  /* 117a7985 mov dword ptr [0x117c7ee4], edx */
  w32((uint32_t)(0x117c7ee4), (EDX));
  /* 117a798b mov eax, dword ptr [0x117c7efc] */
  EAX = (r32((uint32_t)(0x117c7efc)));
  /* 117a7990 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 117a7992 mov dword ptr [0x117c7efc], eax */
  w32((uint32_t)(0x117c7efc), (EAX));
L_117a7997:;
  /* 117a7997 jmp 0x117a79fc */
  goto L_117a79fc;
L_117a7999:;
  /* 117a7999 cmp dword ptr [0x117c7ef0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ef0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a79a0 jne 0x117a79fc */
  if (!C.zf) goto L_117a79fc;
  /* 117a79a2 cmp dword ptr [0x117c7eec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7eec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a79a9 je 0x117a79fc */
  if (C.zf) goto L_117a79fc;
  /* 117a79ab mov ecx, dword ptr [0x117c7eec] */
  ECX = (r32((uint32_t)(0x117c7eec)));
  /* 117a79b1 push ecx */
  push32((uint32_t)(ECX));
  /* 117a79b2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 117a79b5 push edx */
  push32((uint32_t)(EDX));
  /* 117a79b6 mov eax, dword ptr [0x117c7ef4] */
  EAX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a79bb push eax */
  push32((uint32_t)(EAX));
  /* 117a79bc call 0x117a9ca0 */
  push32(0x117a79c1u); f_117a9ca0();
  /* 117a79c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a79c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a79c6 jne 0x117a79fc */
  if (!C.zf) goto L_117a79fc;
  /* 117a79c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a79ca mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a79cd push ecx */
  push32((uint32_t)(ECX));
  /* 117a79ce call 0x117a7c30 */
  push32(0x117a79d3u); f_117a7c30();
  /* 117a79d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a79d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a79d8 je 0x117a79fc */
  if (C.zf) goto L_117a79fc;
  /* 117a79da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a79dd mov dword ptr [0x117c7f00], edx */
  w32((uint32_t)(0x117c7f00), (EDX));
  /* 117a79e3 mov eax, dword ptr [0x117c7f00] */
  EAX = (r32((uint32_t)(0x117c7f00)));
  /* 117a79e8 mov dword ptr [0x117c7ee4], eax */
  w32((uint32_t)(0x117c7ee4), (EAX));
  /* 117a79ed mov ecx, dword ptr [0x117c7efc] */
  ECX = (r32((uint32_t)(0x117c7efc)));
  /* 117a79f3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 117a79f6 mov dword ptr [0x117c7efc], ecx */
  w32((uint32_t)(0x117c7efc), (ECX));
L_117a79fc:;
  /* 117a79fc mov eax, dword ptr [0x117c7efc] */
  EAX = (r32((uint32_t)(0x117c7efc)));
  /* 117a7a01 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 117a7a04 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a7a06 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7a08 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_117a7a09:;
  /* 117a7a09 mov esp, ebp */
  ESP = (EBP);
  /* 117a7a0b pop ebp */
  EBP = (pop32());
  /* 117a7a0c ret 4 */
  ESPCHK(0x117a78f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10017a10 @ 0x117a7a10 (69 bytes, 20 insns) */
void f_117a7a10(void) {
  FTRACE(0x117a7a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7a10 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7a11 mov ebp, esp */
  EBP = (ESP);
  /* 117a7a13 mov eax, dword ptr [0x117c7ef8] */
  EAX = (r32((uint32_t)(0x117c7ef8)));
  /* 117a7a18 push eax */
  push32((uint32_t)(EAX));
  /* 117a7a19 call 0x1179cbd0 */
  push32(0x117a7a1eu); f_1179cbd0();
  /* 117a7a1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7a21 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a7a23 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7a26 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 117a7a29 mov dword ptr [0x117c7ee8], ecx */
  w32((uint32_t)(0x117c7ee8), (ECX));
  /* 117a7a2f push 1 */
  push32((uint32_t)(0x1u));
  /* 117a7a31 push 0x117a7a60 */
  push32((uint32_t)(0x117a7a60u));
  /* 117a7a36 call dword ptr [0x117ca2e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2e8))), 0x117a7a3cu);
  /* 117a7a3c mov edx, dword ptr [0x117c7efc] */
  EDX = (r32((uint32_t)(0x117c7efc)));
  /* 117a7a42 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 117a7a45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a7a47 jne 0x117a7a53 */
  if (!C.zf) goto L_117a7a53;
  /* 117a7a49 mov dword ptr [0x117c7efc], 0 */
  w32((uint32_t)(0x117c7efc), (0x0u));
L_117a7a53:;
  /* 117a7a53 pop ebp */
  EBP = (pop32());
  /* 117a7a54 ret  */
  ESPCHK(0x117a7a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10017a60 @ 0x117a7a60 (172 bytes, 54 insns) */
void f_117a7a60(void) {
  FTRACE(0x117a7a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7a60 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7a61 mov ebp, esp */
  EBP = (ESP);
  /* 117a7a63 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7a66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7a69 push eax */
  push32((uint32_t)(EAX));
  /* 117a7a6a call 0x117a7ea0 */
  push32(0x117a7a6fu); f_117a7ea0();
  /* 117a7a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7a72 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 117a7a75 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 117a7a77 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 117a7a7a push ecx */
  push32((uint32_t)(ECX));
  /* 117a7a7b mov edx, dword ptr [0x117c7ee8] */
  EDX = (r32((uint32_t)(0x117c7ee8)));
  /* 117a7a81 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a7a83 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7a85 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 117a7a8b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7a91 push edx */
  push32((uint32_t)(EDX));
  /* 117a7a92 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a7a95 push eax */
  push32((uint32_t)(EAX));
  /* 117a7a96 call dword ptr [0x117c7f04] */
  call_ind((uint32_t)(r32((uint32_t)(0x117c7f04))), 0x117a7a9cu);
  /* 117a7a9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7a9e jne 0x117a7ab1 */
  if (!C.zf) goto L_117a7ab1;
  /* 117a7aa0 mov dword ptr [0x117c7efc], 0 */
  w32((uint32_t)(0x117c7efc), (0x0u));
  /* 117a7aaa mov eax, 1 */
  EAX = (0x1u);
  /* 117a7aaf jmp 0x117a7b06 */
  goto L_117a7b06;
L_117a7ab1:;
  /* 117a7ab1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 117a7ab4 push ecx */
  push32((uint32_t)(ECX));
  /* 117a7ab5 mov edx, dword ptr [0x117c7ef8] */
  EDX = (r32((uint32_t)(0x117c7ef8)));
  /* 117a7abb push edx */
  push32((uint32_t)(EDX));
  /* 117a7abc call 0x117a9bd0 */
  push32(0x117a7ac1u); f_117a9bd0();
  /* 117a7ac1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7ac4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7ac6 jne 0x117a7af9 */
  if (!C.zf) goto L_117a7af9;
  /* 117a7ac8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a7acb push eax */
  push32((uint32_t)(EAX));
  /* 117a7acc call 0x117a7be0 */
  push32(0x117a7ad1u); f_117a7be0();
  /* 117a7ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7ad4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7ad6 je 0x117a7af9 */
  if (C.zf) goto L_117a7af9;
  /* 117a7ad8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117a7adb mov dword ptr [0x117c7f00], ecx */
  w32((uint32_t)(0x117c7f00), (ECX));
  /* 117a7ae1 mov edx, dword ptr [0x117c7f00] */
  EDX = (r32((uint32_t)(0x117c7f00)));
  /* 117a7ae7 mov dword ptr [0x117c7ee4], edx */
  w32((uint32_t)(0x117c7ee4), (EDX));
  /* 117a7aed mov eax, dword ptr [0x117c7efc] */
  EAX = (r32((uint32_t)(0x117c7efc)));
  /* 117a7af2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 117a7af4 mov dword ptr [0x117c7efc], eax */
  w32((uint32_t)(0x117c7efc), (EAX));
L_117a7af9:;
  /* 117a7af9 mov eax, dword ptr [0x117c7efc] */
  EAX = (r32((uint32_t)(0x117c7efc)));
  /* 117a7afe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 117a7b01 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a7b03 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7b05 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_117a7b06:;
  /* 117a7b06 mov esp, ebp */
  ESP = (EBP);
  /* 117a7b08 pop ebp */
  EBP = (pop32());
  /* 117a7b09 ret 4 */
  ESPCHK(0x117a7a60u, _esp0);
  ESP += 8; return;
}

/* FUN_10017b10 @ 0x117a7b10 (43 bytes, 11 insns) */
void f_117a7b10(void) {
  FTRACE(0x117a7b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7b10 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7b11 mov ebp, esp */
  EBP = (ESP);
  /* 117a7b13 mov eax, dword ptr [0x117c7efc] */
  EAX = (r32((uint32_t)(0x117c7efc)));
  /* 117a7b18 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 117a7b1d mov dword ptr [0x117c7efc], eax */
  w32((uint32_t)(0x117c7efc), (EAX));
  /* 117a7b22 call dword ptr [0x117ca2e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2e4))), 0x117a7b28u);
  /* 117a7b28 mov dword ptr [0x117c7f00], eax */
  w32((uint32_t)(0x117c7f00), (EAX));
  /* 117a7b2d mov ecx, dword ptr [0x117c7f00] */
  ECX = (r32((uint32_t)(0x117c7f00)));
  /* 117a7b33 mov dword ptr [0x117c7ee4], ecx */
  w32((uint32_t)(0x117c7ee4), (ECX));
  /* 117a7b39 pop ebp */
  EBP = (pop32());
  /* 117a7b3a ret  */
  ESPCHK(0x117a7b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10017b40 @ 0x117a7b40 (155 bytes, 57 insns) */
void f_117a7b40(void) {
  FTRACE(0x117a7b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7b40 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7b41 mov ebp, esp */
  EBP = (ESP);
  /* 117a7b43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7b46 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7b4a je 0x117a7b6b */
  if (C.zf) goto L_117a7b6b;
  /* 117a7b4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7b4f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a7b52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a7b54 je 0x117a7b6b */
  if (C.zf) goto L_117a7b6b;
  /* 117a7b56 push 0x117c35e4 */
  push32((uint32_t)(0x117c35e4u));
  /* 117a7b5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7b5e push edx */
  push32((uint32_t)(EDX));
  /* 117a7b5f call 0x117a2820 */
  push32(0x117a7b64u); f_117a2820();
  /* 117a7b64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7b67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7b69 jne 0x117a7b93 */
  if (!C.zf) goto L_117a7b93;
L_117a7b6b:;
  /* 117a7b6b push 8 */
  push32((uint32_t)(0x8u));
  /* 117a7b6d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 117a7b70 push eax */
  push32((uint32_t)(EAX));
  /* 117a7b71 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 117a7b76 mov ecx, dword ptr [0x117c7f00] */
  ECX = (r32((uint32_t)(0x117c7f00)));
  /* 117a7b7c push ecx */
  push32((uint32_t)(ECX));
  /* 117a7b7d call dword ptr [0x117c7f04] */
  call_ind((uint32_t)(r32((uint32_t)(0x117c7f04))), 0x117a7b83u);
  /* 117a7b83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7b85 jne 0x117a7b8b */
  if (!C.zf) goto L_117a7b8b;
  /* 117a7b87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a7b89 jmp 0x117a7bd7 */
  goto L_117a7bd7;
L_117a7b8b:;
  /* 117a7b8b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 117a7b8e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 117a7b91 jmp 0x117a7bcb */
  goto L_117a7bcb;
L_117a7b93:;
  /* 117a7b93 push 0x117c35e0 */
  push32((uint32_t)(0x117c35e0u));
  /* 117a7b98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7b9b push eax */
  push32((uint32_t)(EAX));
  /* 117a7b9c call 0x117a2820 */
  push32(0x117a7ba1u); f_117a2820();
  /* 117a7ba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7ba4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7ba6 jne 0x117a7bcb */
  if (!C.zf) goto L_117a7bcb;
  /* 117a7ba8 push 8 */
  push32((uint32_t)(0x8u));
  /* 117a7baa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 117a7bad push ecx */
  push32((uint32_t)(ECX));
  /* 117a7bae push 0xb */
  push32((uint32_t)(0xbu));
  /* 117a7bb0 mov edx, dword ptr [0x117c7f00] */
  EDX = (r32((uint32_t)(0x117c7f00)));
  /* 117a7bb6 push edx */
  push32((uint32_t)(EDX));
  /* 117a7bb7 call dword ptr [0x117c7f04] */
  call_ind((uint32_t)(r32((uint32_t)(0x117c7f04))), 0x117a7bbdu);
  /* 117a7bbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7bbf jne 0x117a7bc5 */
  if (!C.zf) goto L_117a7bc5;
  /* 117a7bc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a7bc3 jmp 0x117a7bd7 */
  goto L_117a7bd7;
L_117a7bc5:;
  /* 117a7bc5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 117a7bc8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_117a7bcb:;
  /* 117a7bcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7bce push ecx */
  push32((uint32_t)(ECX));
  /* 117a7bcf call 0x117a25d0 */
  push32(0x117a7bd4u); f_117a25d0();
  /* 117a7bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a7bd7:;
  /* 117a7bd7 mov esp, ebp */
  ESP = (EBP);
  /* 117a7bd9 pop ebp */
  EBP = (pop32());
  /* 117a7bda ret  */
  ESPCHK(0x117a7b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10017be0 @ 0x117a7be0 (79 bytes, 26 insns) */
void f_117a7be0(void) {
  FTRACE(0x117a7be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7be0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7be1 mov ebp, esp */
  EBP = (ESP);
  /* 117a7be3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7be6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 117a7bea mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 117a7bee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117a7bf5 jmp 0x117a7c00 */
  goto L_117a7c00;
L_117a7bf7:;
  /* 117a7bf7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a7bfa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7bfd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_117a7c00:;
  /* 117a7c00 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7c04 jae 0x117a7c26 */
  if (!C.cf) goto L_117a7c26;
  /* 117a7c06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a7c09 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117a7c0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a7c12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a7c14 mov cx, word ptr [eax*2 + 0x117c6af4] */
  CX = (r16((uint32_t)(EAX*2 + 0x117c6af4)));
  /* 117a7c1c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7c1e jne 0x117a7c24 */
  if (!C.zf) goto L_117a7c24;
  /* 117a7c20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a7c22 jmp 0x117a7c2b */
  goto L_117a7c2b;
L_117a7c24:;
  /* 117a7c24 jmp 0x117a7bf7 */
  goto L_117a7bf7;
L_117a7c26:;
  /* 117a7c26 mov eax, 1 */
  EAX = (0x1u);
L_117a7c2b:;
  /* 117a7c2b mov esp, ebp */
  ESP = (EBP);
  /* 117a7c2d pop ebp */
  EBP = (pop32());
  /* 117a7c2e ret  */
  ESPCHK(0x117a7be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017c30 @ 0x117a7c30 (135 bytes, 48 insns) */
void f_117a7c30(void) {
  FTRACE(0x117a7c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7c30 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7c31 mov ebp, esp */
  EBP = (ESP);
  /* 117a7c33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7c36 push esi */
  push32((uint32_t)(ESI));
  /* 117a7c37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7c3a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a7c3f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a7c44 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a7c49 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 117a7c4c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a7c51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a7c54 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 117a7c56 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 117a7c59 push ecx */
  push32((uint32_t)(ECX));
  /* 117a7c5a push 1 */
  push32((uint32_t)(0x1u));
  /* 117a7c5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a7c5f push edx */
  push32((uint32_t)(EDX));
  /* 117a7c60 call dword ptr [0x117c7f04] */
  call_ind((uint32_t)(r32((uint32_t)(0x117c7f04))), 0x117a7c66u);
  /* 117a7c66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7c68 jne 0x117a7c6e */
  if (!C.zf) goto L_117a7c6e;
  /* 117a7c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a7c6c jmp 0x117a7cb2 */
  goto L_117a7cb2;
L_117a7c6e:;
  /* 117a7c6e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 117a7c71 push eax */
  push32((uint32_t)(EAX));
  /* 117a7c72 call 0x117a7ea0 */
  push32(0x117a7c77u); f_117a7ea0();
  /* 117a7c77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7c7a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7c7d je 0x117a7cad */
  if (C.zf) goto L_117a7cad;
  /* 117a7c7f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7c83 je 0x117a7cad */
  if (C.zf) goto L_117a7cad;
  /* 117a7c85 mov ecx, dword ptr [0x117c7ef4] */
  ECX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a7c8b push ecx */
  push32((uint32_t)(ECX));
  /* 117a7c8c call 0x117a7f20 */
  push32(0x117a7c91u); f_117a7f20();
  /* 117a7c91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7c94 mov esi, eax */
  ESI = (EAX);
  /* 117a7c96 mov edx, dword ptr [0x117c7ef4] */
  EDX = (r32((uint32_t)(0x117c7ef4)));
  /* 117a7c9c push edx */
  push32((uint32_t)(EDX));
  /* 117a7c9d call 0x1179cbd0 */
  push32(0x117a7ca2u); f_1179cbd0();
  /* 117a7ca2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7ca5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7ca7 jne 0x117a7cad */
  if (!C.zf) goto L_117a7cad;
  /* 117a7ca9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a7cab jmp 0x117a7cb2 */
  goto L_117a7cb2;
L_117a7cad:;
  /* 117a7cad mov eax, 1 */
  EAX = (0x1u);
L_117a7cb2:;
  /* 117a7cb2 pop esi */
  ESI = (pop32());
  /* 117a7cb3 mov esp, ebp */
  ESP = (EBP);
  /* 117a7cb5 pop ebp */
  EBP = (pop32());
  /* 117a7cb6 ret  */
  ESPCHK(0x117a7c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10017cc0 @ 0x117a7cc0 (77 bytes, 18 insns) */
void f_117a7cc0(void) {
  FTRACE(0x117a7cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7cc1 mov ebp, esp */
  EBP = (ESP);
  /* 117a7cc3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7cc9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 117a7cd3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 117a7cd9 push eax */
  push32((uint32_t)(EAX));
  /* 117a7cda call dword ptr [0x117ca2e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2e0))), 0x117a7ce0u);
  /* 117a7ce0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a7ce2 je 0x117a7cf9 */
  if (C.zf) goto L_117a7cf9;
  /* 117a7ce4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7ceb jne 0x117a7cf9 */
  if (!C.zf) goto L_117a7cf9;
  /* 117a7ced mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 117a7cf7 jmp 0x117a7d03 */
  goto L_117a7d03;
L_117a7cf9:;
  /* 117a7cf9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_117a7d03:;
  /* 117a7d03 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 117a7d09 mov esp, ebp */
  ESP = (EBP);
  /* 117a7d0b pop ebp */
  EBP = (pop32());
  /* 117a7d0c ret  */
  ESPCHK(0x117a7cc0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x117a7d10 (388 bytes, 118 insns) */
void f_117a7d10(void) {
  FTRACE(0x117a7d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7d10 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7d11 mov ebp, esp */
  EBP = (ESP);
  /* 117a7d13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7d16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117a7d1d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 117a7d24 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_117a7d2b:;
  /* 117a7d2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a7d2e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7d31 jg 0x117a7e78 */
  if ((!C.zf&&C.sf==C.of)) goto L_117a7e78;
  /* 117a7d37 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a7d3a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7d3d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a7d3e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7d40 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117a7d42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a7d45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a7d48 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a7d4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7d4e cmp edx, dword ptr [ecx + 0x117c6650] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x117c6650))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7d54 jne 0x117a7e4e */
  if (!C.zf) goto L_117a7e4e;
  /* 117a7d5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a7d5d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117a7d60 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7d64 ja 0x117a7d87 */
  if ((!C.cf&&!C.zf)) goto L_117a7d87;
  /* 117a7d66 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7d6a je 0x117a7df9 */
  if (C.zf) goto L_117a7df9;
  /* 117a7d70 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7d74 je 0x117a7da4 */
  if (C.zf) goto L_117a7da4;
  /* 117a7d76 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7d7a je 0x117a7dc6 */
  if (C.zf) goto L_117a7dc6;
  /* 117a7d7c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7d80 je 0x117a7de8 */
  if (C.zf) goto L_117a7de8;
  /* 117a7d82 jmp 0x117a7e18 */
  goto L_117a7e18;
L_117a7d87:;
  /* 117a7d87 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7d8e je 0x117a7db5 */
  if (C.zf) goto L_117a7db5;
  /* 117a7d90 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7d97 je 0x117a7dd7 */
  if (C.zf) goto L_117a7dd7;
  /* 117a7d99 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7da0 je 0x117a7e0a */
  if (C.zf) goto L_117a7e0a;
  /* 117a7da2 jmp 0x117a7e18 */
  goto L_117a7e18;
L_117a7da4:;
  /* 117a7da4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a7da7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a7daa add ecx, 0x117c6654 */
  { uint32_t _a=(ECX),_b=(0x117c6654u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7db0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a7db3 jmp 0x117a7e18 */
  goto L_117a7e18;
L_117a7db5:;
  /* 117a7db5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a7db8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a7dbb mov eax, dword ptr [edx + 0x117c665c] */
  EAX = (r32((uint32_t)(EDX + 0x117c665c)));
  /* 117a7dc1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a7dc4 jmp 0x117a7e18 */
  goto L_117a7e18;
L_117a7dc6:;
  /* 117a7dc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a7dc9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a7dcc add ecx, 0x117c6660 */
  { uint32_t _a=(ECX),_b=(0x117c6660u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7dd2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a7dd5 jmp 0x117a7e18 */
  goto L_117a7e18;
L_117a7dd7:;
  /* 117a7dd7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a7dda imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a7ddd mov eax, dword ptr [edx + 0x117c6664] */
  EAX = (r32((uint32_t)(EDX + 0x117c6664)));
  /* 117a7de3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a7de6 jmp 0x117a7e18 */
  goto L_117a7e18;
L_117a7de8:;
  /* 117a7de8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a7deb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a7dee add ecx, 0x117c6668 */
  { uint32_t _a=(ECX),_b=(0x117c6668u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7df4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a7df7 jmp 0x117a7e18 */
  goto L_117a7e18;
L_117a7df9:;
  /* 117a7df9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a7dfc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a7dff add edx, 0x117c666c */
  { uint32_t _a=(EDX),_b=(0x117c666cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7e05 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117a7e08 jmp 0x117a7e18 */
  goto L_117a7e18;
L_117a7e0a:;
  /* 117a7e0a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a7e0d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a7e10 add eax, 0x117c6674 */
  { uint32_t _a=(EAX),_b=(0x117c6674u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7e15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117a7e18:;
  /* 117a7e18 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7e1c je 0x117a7e24 */
  if (C.zf) goto L_117a7e24;
  /* 117a7e1e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7e22 jge 0x117a7e26 */
  if ((C.sf==C.of)) goto L_117a7e26;
L_117a7e24:;
  /* 117a7e24 jmp 0x117a7e78 */
  goto L_117a7e78;
L_117a7e26:;
  /* 117a7e26 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a7e29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7e2c push ecx */
  push32((uint32_t)(ECX));
  /* 117a7e2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a7e30 push edx */
  push32((uint32_t)(EDX));
  /* 117a7e31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a7e34 push eax */
  push32((uint32_t)(EAX));
  /* 117a7e35 call 0x1179d5c0 */
  push32(0x117a7e3au); f_1179d5c0();
  /* 117a7e3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7e3d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a7e40 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7e43 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 117a7e47 mov eax, 1 */
  EAX = (0x1u);
  /* 117a7e4c jmp 0x117a7e8e */
  goto L_117a7e8e;
L_117a7e4e:;
  /* 117a7e4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a7e51 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a7e54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7e57 cmp eax, dword ptr [edx + 0x117c6650] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x117c6650))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7e5d jae 0x117a7e6a */
  if (!C.cf) goto L_117a7e6a;
  /* 117a7e5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a7e62 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7e65 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a7e68 jmp 0x117a7e73 */
  goto L_117a7e73;
L_117a7e6a:;
  /* 117a7e6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a7e6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7e70 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_117a7e73:;
  /* 117a7e73 jmp 0x117a7d2b */
  goto L_117a7d2b;
L_117a7e78:;
  /* 117a7e78 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a7e7b push eax */
  push32((uint32_t)(EAX));
  /* 117a7e7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a7e7f push ecx */
  push32((uint32_t)(ECX));
  /* 117a7e80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a7e83 push edx */
  push32((uint32_t)(EDX));
  /* 117a7e84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7e87 push eax */
  push32((uint32_t)(EAX));
  /* 117a7e88 call dword ptr [0x117ca2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2ec))), 0x117a7e8eu);
L_117a7e8e:;
  /* 117a7e8e mov esp, ebp */
  ESP = (EBP);
  /* 117a7e90 pop ebp */
  EBP = (pop32());
  /* 117a7e91 ret 0x10 */
  ESPCHK(0x117a7d10u, _esp0);
  ESP += 20; return;
}

/* FUN_10017ea0 @ 0x117a7ea0 (118 bytes, 42 insns) */
void f_117a7ea0(void) {
  FTRACE(0x117a7ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7ea1 mov ebp, esp */
  EBP = (ESP);
  /* 117a7ea3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7ea6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117a7ead:;
  /* 117a7ead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7eb0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a7eb2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 117a7eb5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 117a7eb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7ebc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7ebf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a7ec2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a7ec4 je 0x117a7f0f */
  if (C.zf) goto L_117a7f0f;
  /* 117a7ec6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 117a7eca cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7ecd jl 0x117a7ee2 */
  if ((C.sf!=C.of)) goto L_117a7ee2;
  /* 117a7ecf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 117a7ed3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7ed6 jg 0x117a7ee2 */
  if ((!C.zf&&C.sf==C.of)) goto L_117a7ee2;
  /* 117a7ed8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 117a7edb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 117a7edd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 117a7ee0 jmp 0x117a7efc */
  goto L_117a7efc;
L_117a7ee2:;
  /* 117a7ee2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 117a7ee6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7ee9 jl 0x117a7efc */
  if ((C.sf!=C.of)) goto L_117a7efc;
  /* 117a7eeb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 117a7eef cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7ef2 jg 0x117a7efc */
  if ((!C.zf&&C.sf==C.of)) goto L_117a7efc;
  /* 117a7ef4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 117a7ef7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 117a7ef9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_117a7efc:;
  /* 117a7efc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a7eff shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 117a7f02 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 117a7f06 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 117a7f0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a7f0d jmp 0x117a7ead */
  goto L_117a7ead;
L_117a7f0f:;
  /* 117a7f0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a7f12 mov esp, ebp */
  ESP = (EBP);
  /* 117a7f14 pop ebp */
  EBP = (pop32());
  /* 117a7f15 ret  */
  ESPCHK(0x117a7ea0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x117a7f20 (101 bytes, 36 insns) */
void f_117a7f20(void) {
  FTRACE(0x117a7f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7f20 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7f21 mov ebp, esp */
  EBP = (ESP);
  /* 117a7f23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a7f26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117a7f2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7f30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a7f32 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 117a7f35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7f38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7f3b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_117a7f3e:;
  /* 117a7f3e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 117a7f42 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7f45 jl 0x117a7f50 */
  if ((C.sf!=C.of)) goto L_117a7f50;
  /* 117a7f47 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 117a7f4b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7f4e jle 0x117a7f62 */
  if ((C.zf||C.sf!=C.of)) goto L_117a7f62;
L_117a7f50:;
  /* 117a7f50 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 117a7f54 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7f57 jl 0x117a7f7e */
  if ((C.sf!=C.of)) goto L_117a7f7e;
  /* 117a7f59 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 117a7f5d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7f60 jg 0x117a7f7e */
  if ((!C.zf&&C.sf==C.of)) goto L_117a7f7e;
L_117a7f62:;
  /* 117a7f62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a7f65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7f68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a7f6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7f6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a7f70 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 117a7f73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7f76 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7f79 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 117a7f7c jmp 0x117a7f3e */
  goto L_117a7f3e;
L_117a7f7e:;
  /* 117a7f7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a7f81 mov esp, ebp */
  ESP = (EBP);
  /* 117a7f83 pop ebp */
  EBP = (pop32());
  /* 117a7f84 ret  */
  ESPCHK(0x117a7f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10017f90 @ 0x117a7f90 (237 bytes, 81 insns) */
void f_117a7f90(void) {
  FTRACE(0x117a7f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a7f90 push ebp */
  push32((uint32_t)(EBP));
  /* 117a7f91 mov ebp, esp */
  EBP = (ESP);
  /* 117a7f93 push ecx */
  push32((uint32_t)(ECX));
  /* 117a7f94 cmp dword ptr [0x117c932c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c932c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a7f9b jne 0x117a7fb2 */
  if (!C.zf) goto L_117a7fb2;
  /* 117a7f9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a7fa0 push eax */
  push32((uint32_t)(EAX));
  /* 117a7fa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 117a7fa5 call 0x117a9dc0 */
  push32(0x117a7faau); f_117a9dc0();
  /* 117a7faa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7fad jmp 0x117a8079 */
  goto L_117a8079;
L_117a7fb2:;
  /* 117a7fb2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117a7fb4 call 0x1179d7a0 */
  push32(0x117a7fb9u); f_1179d7a0();
  /* 117a7fb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7fbc jmp 0x117a7fc7 */
  goto L_117a7fc7;
L_117a7fbe:;
  /* 117a7fbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7fc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7fc4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_117a7fc7:;
  /* 117a7fc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7fca movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 117a7fce mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 117a7fd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a7fd5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117a7fdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a7fdd je 0x117a805b */
  if (C.zf) goto L_117a805b;
  /* 117a7fdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a7fe2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a7fe7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a7fe9 mov cl, byte ptr [eax + 0x117c9441] */
  CL = (r8((uint32_t)(EAX + 0x117c9441)));
  /* 117a7fef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 117a7ff2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a7ff4 je 0x117a8046 */
  if (C.zf) goto L_117a8046;
  /* 117a7ff6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a7ff9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a7ffc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 117a7fff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8002 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a8004 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a8006 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a8008 jne 0x117a8018 */
  if (!C.zf) goto L_117a8018;
  /* 117a800a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117a800c call 0x1179d840 */
  push32(0x117a8011u); f_1179d840();
  /* 117a8011 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8014 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a8016 jmp 0x117a8079 */
  goto L_117a8079;
L_117a8018:;
  /* 117a8018 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a801b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117a8021 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 117a8024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8027 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a8029 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a802b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117a802d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8030 jne 0x117a8044 */
  if (!C.zf) goto L_117a8044;
  /* 117a8032 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117a8034 call 0x1179d840 */
  push32(0x117a8039u); f_1179d840();
  /* 117a8039 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a803c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a803f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a8042 jmp 0x117a8079 */
  goto L_117a8079;
L_117a8044:;
  /* 117a8044 jmp 0x117a8056 */
  goto L_117a8056;
L_117a8046:;
  /* 117a8046 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a8049 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117a804f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8052 jne 0x117a8056 */
  if (!C.zf) goto L_117a8056;
  /* 117a8054 jmp 0x117a805b */
  goto L_117a805b;
L_117a8056:;
  /* 117a8056 jmp 0x117a7fbe */
  goto L_117a7fbe;
L_117a805b:;
  /* 117a805b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117a805d call 0x1179d840 */
  push32(0x117a8062u); f_1179d840();
  /* 117a8062 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8065 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a8068 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a806d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8070 jne 0x117a8077 */
  if (!C.zf) goto L_117a8077;
  /* 117a8072 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8075 jmp 0x117a8079 */
  goto L_117a8079;
L_117a8077:;
  /* 117a8077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a8079:;
  /* 117a8079 mov esp, ebp */
  ESP = (EBP);
  /* 117a807b pop ebp */
  EBP = (pop32());
  /* 117a807c ret  */
  ESPCHK(0x117a7f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10018080 @ 0x117a8080 (122 bytes, 39 insns) */
void f_117a8080(void) {
  FTRACE(0x117a8080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a8080 push ebp */
  push32((uint32_t)(EBP));
  /* 117a8081 mov ebp, esp */
  EBP = (ESP);
  /* 117a8083 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8087 cmp eax, dword ptr [0x117c96dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c96dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a808d jae 0x117a80b1 */
  if (!C.cf) goto L_117a80b1;
  /* 117a808f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8092 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a8095 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8098 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117a809b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a809e mov eax, dword ptr [ecx*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117c95a0)));
  /* 117a80a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 117a80aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117a80ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a80af jne 0x117a80cc */
  if (!C.zf) goto L_117a80cc;
L_117a80b1:;
  /* 117a80b1 call 0x117a25b0 */
  push32(0x117a80b6u); f_117a25b0();
  /* 117a80b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117a80bc call 0x117a25c0 */
  push32(0x117a80c1u); f_117a25c0();
  /* 117a80c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117a80c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a80ca jmp 0x117a80f6 */
  goto L_117a80f6;
L_117a80cc:;
  /* 117a80cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a80cf push edx */
  push32((uint32_t)(EDX));
  /* 117a80d0 call 0x117a42f0 */
  push32(0x117a80d5u); f_117a42f0();
  /* 117a80d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a80d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a80db push eax */
  push32((uint32_t)(EAX));
  /* 117a80dc call 0x117a8100 */
  push32(0x117a80e1u); f_117a8100();
  /* 117a80e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a80e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a80e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a80ea push ecx */
  push32((uint32_t)(ECX));
  /* 117a80eb call 0x117a4380 */
  push32(0x117a80f0u); f_117a4380();
  /* 117a80f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a80f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117a80f6:;
  /* 117a80f6 mov esp, ebp */
  ESP = (EBP);
  /* 117a80f8 pop ebp */
  EBP = (pop32());
  /* 117a80f9 ret  */
  ESPCHK(0x117a8080u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x117a8100 (170 bytes, 59 insns) */
void f_117a8100(void) {
  FTRACE(0x117a8100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a8100 push ebp */
  push32((uint32_t)(EBP));
  /* 117a8101 mov ebp, esp */
  EBP = (ESP);
  /* 117a8103 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8104 push esi */
  push32((uint32_t)(ESI));
  /* 117a8105 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8108 push eax */
  push32((uint32_t)(EAX));
  /* 117a8109 call 0x117a4170 */
  push32(0x117a810eu); f_117a4170();
  /* 117a810e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8111 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8114 je 0x117a8153 */
  if (C.zf) goto L_117a8153;
  /* 117a8116 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a811a je 0x117a8122 */
  if (C.zf) goto L_117a8122;
  /* 117a811c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8120 jne 0x117a813c */
  if (!C.zf) goto L_117a813c;
L_117a8122:;
  /* 117a8122 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a8124 call 0x117a4170 */
  push32(0x117a8129u); f_117a4170();
  /* 117a8129 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a812c mov esi, eax */
  ESI = (EAX);
  /* 117a812e push 2 */
  push32((uint32_t)(0x2u));
  /* 117a8130 call 0x117a4170 */
  push32(0x117a8135u); f_117a4170();
  /* 117a8135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8138 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a813a je 0x117a8153 */
  if (C.zf) goto L_117a8153;
L_117a813c:;
  /* 117a813c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a813f push ecx */
  push32((uint32_t)(ECX));
  /* 117a8140 call 0x117a4170 */
  push32(0x117a8145u); f_117a4170();
  /* 117a8145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8148 push eax */
  push32((uint32_t)(EAX));
  /* 117a8149 call dword ptr [0x117ca2dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2dc))), 0x117a814fu);
  /* 117a814f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a8151 je 0x117a815c */
  if (C.zf) goto L_117a815c;
L_117a8153:;
  /* 117a8153 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a815a jmp 0x117a8165 */
  goto L_117a8165;
L_117a815c:;
  /* 117a815c call dword ptr [0x117ca3d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3d8))), 0x117a8162u);
  /* 117a8162 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117a8165:;
  /* 117a8165 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8168 push edx */
  push32((uint32_t)(EDX));
  /* 117a8169 call 0x117a4090 */
  push32(0x117a816eu); f_117a4090();
  /* 117a816e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8171 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8174 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117a8177 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a817a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117a817d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a8180 mov edx, dword ptr [eax*4 + 0x117c95a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117c95a0)));
  /* 117a8187 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 117a818c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8190 je 0x117a81a3 */
  if (C.zf) goto L_117a81a3;
  /* 117a8192 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a8195 push eax */
  push32((uint32_t)(EAX));
  /* 117a8196 call 0x117a2510 */
  push32(0x117a819bu); f_117a2510();
  /* 117a819b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a819e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a81a1 jmp 0x117a81a5 */
  goto L_117a81a5;
L_117a81a3:;
  /* 117a81a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a81a5:;
  /* 117a81a5 pop esi */
  ESI = (pop32());
  /* 117a81a6 mov esp, ebp */
  ESP = (EBP);
  /* 117a81a8 pop ebp */
  EBP = (pop32());
  /* 117a81a9 ret  */
  ESPCHK(0x117a8100u, _esp0);
  ESP += 4; return;
}

/* FUN_100181b0 @ 0x117a81b0 (146 bytes, 52 insns) */
void f_117a81b0(void) {
  FTRACE(0x117a81b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a81b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a81b1 mov ebp, esp */
  EBP = (ESP);
  /* 117a81b3 push ebx */
  push32((uint32_t)(EBX));
  /* 117a81b4 push esi */
  push32((uint32_t)(ESI));
  /* 117a81b5 push edi */
  push32((uint32_t)(EDI));
L_117a81b6:;
  /* 117a81b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a81ba jne 0x117a81da */
  if (!C.zf) goto L_117a81da;
  /* 117a81bc push 0x117c2f20 */
  push32((uint32_t)(0x117c2f20u));
  /* 117a81c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a81c3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 117a81c5 push 0x117c35e8 */
  push32((uint32_t)(0x117c35e8u));
  /* 117a81ca push 2 */
  push32((uint32_t)(0x2u));
  /* 117a81cc call 0x11798d70 */
  push32(0x117a81d1u); f_11798d70();
  /* 117a81d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a81d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a81d7 jne 0x117a81da */
  if (!C.zf) goto L_117a81da;
  /* 117a81d9 int3  */
  x86_unimpl("int3 @ 0x117a81d9");
L_117a81da:;
  /* 117a81da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a81dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a81de jne 0x117a81b6 */
  if (!C.zf) goto L_117a81b6;
  /* 117a81e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a81e3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a81e6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 117a81ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a81ee je 0x117a823d */
  if (C.zf) goto L_117a823d;
  /* 117a81f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a81f3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117a81f6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 117a81f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a81fb je 0x117a823d */
  if (C.zf) goto L_117a823d;
  /* 117a81fd push 2 */
  push32((uint32_t)(0x2u));
  /* 117a81ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8202 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117a8205 push eax */
  push32((uint32_t)(EAX));
  /* 117a8206 call 0x1179a830 */
  push32(0x117a820bu); f_1179a830();
  /* 117a820b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a820e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8211 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a8214 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 117a821a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a821d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 117a8220 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8223 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 117a8229 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a822c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 117a8233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8236 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_117a823d:;
  /* 117a823d pop edi */
  EDI = (pop32());
  /* 117a823e pop esi */
  ESI = (pop32());
  /* 117a823f pop ebx */
  EBX = (pop32());
  /* 117a8240 pop ebp */
  EBP = (pop32());
  /* 117a8241 ret  */
  ESPCHK(0x117a81b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018250 @ 0x117a8250 (289 bytes, 97 insns) */
void f_117a8250(void) {
  FTRACE(0x117a8250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a8250 push ebp */
  push32((uint32_t)(EBP));
  /* 117a8251 mov ebp, esp */
  EBP = (ESP);
  /* 117a8253 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a8256 push esi */
  push32((uint32_t)(ESI));
  /* 117a8257 mov eax, dword ptr [0x117c6dc8] */
  EAX = (r32((uint32_t)(0x117c6dc8)));
  /* 117a825c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a825f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117a8266 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117a826d jmp 0x117a8278 */
  goto L_117a8278;
L_117a826f:;
  /* 117a826f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a8272 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8275 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_117a8278:;
  /* 117a8278 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a827c jae 0x117a82b1 */
  if (!C.cf) goto L_117a82b1;
  /* 117a827e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a8281 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8284 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 117a8287 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8288 call 0x1179cbd0 */
  push32(0x117a828du); f_1179cbd0();
  /* 117a828d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8290 mov esi, eax */
  ESI = (EAX);
  /* 117a8292 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a8295 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8298 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 117a829c push ecx */
  push32((uint32_t)(ECX));
  /* 117a829d call 0x1179cbd0 */
  push32(0x117a82a2u); f_1179cbd0();
  /* 117a82a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a82a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a82a8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 117a82ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117a82af jmp 0x117a826f */
  goto L_117a826f;
L_117a82b1:;
  /* 117a82b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a82b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a82b7 push eax */
  push32((uint32_t)(EAX));
  /* 117a82b8 call 0x11799d80 */
  push32(0x117a82bdu); f_11799d80();
  /* 117a82bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a82c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a82c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a82c7 je 0x117a8369 */
  if (C.zf) goto L_117a8369;
  /* 117a82cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a82d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117a82d3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117a82da jmp 0x117a82e5 */
  goto L_117a82e5;
L_117a82dc:;
  /* 117a82dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a82df add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a82e2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_117a82e5:;
  /* 117a82e5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a82e9 jae 0x117a835a */
  if (!C.cf) goto L_117a835a;
  /* 117a82eb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a82ee mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 117a82f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a82f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a82f7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117a82fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a82fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8300 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 117a8303 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8304 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8307 push edx */
  push32((uint32_t)(EDX));
  /* 117a8308 call 0x1179cd50 */
  push32(0x117a830du); f_1179cd50();
  /* 117a830d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8310 push eax */
  push32((uint32_t)(EAX));
  /* 117a8311 call 0x1179cbd0 */
  push32(0x117a8316u); f_1179cbd0();
  /* 117a8316 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8319 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a831c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a831e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117a8321 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8324 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 117a8327 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a832a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a832d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117a8330 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a8333 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8336 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 117a833a push eax */
  push32((uint32_t)(EAX));
  /* 117a833b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a833e push ecx */
  push32((uint32_t)(ECX));
  /* 117a833f call 0x1179cd50 */
  push32(0x117a8344u); f_1179cd50();
  /* 117a8344 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8347 push eax */
  push32((uint32_t)(EAX));
  /* 117a8348 call 0x1179cbd0 */
  push32(0x117a834du); f_1179cbd0();
  /* 117a834d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8350 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8353 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8355 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 117a8358 jmp 0x117a82dc */
  goto L_117a82dc;
L_117a835a:;
  /* 117a835a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a835d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 117a8360 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8363 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8366 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_117a8369:;
  /* 117a8369 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a836c pop esi */
  ESI = (pop32());
  /* 117a836d mov esp, ebp */
  ESP = (EBP);
  /* 117a836f pop ebp */
  EBP = (pop32());
  /* 117a8370 ret  */
  ESPCHK(0x117a8250u, _esp0);
  ESP += 4; return;
}

/* FUN_10018380 @ 0x117a8380 (291 bytes, 97 insns) */
void f_117a8380(void) {
  FTRACE(0x117a8380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a8380 push ebp */
  push32((uint32_t)(EBP));
  /* 117a8381 mov ebp, esp */
  EBP = (ESP);
  /* 117a8383 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a8386 push esi */
  push32((uint32_t)(ESI));
  /* 117a8387 mov eax, dword ptr [0x117c6dc8] */
  EAX = (r32((uint32_t)(0x117c6dc8)));
  /* 117a838c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a838f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117a8396 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117a839d jmp 0x117a83a8 */
  goto L_117a83a8;
L_117a839f:;
  /* 117a839f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a83a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a83a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_117a83a8:;
  /* 117a83a8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a83ac jae 0x117a83e2 */
  if (!C.cf) goto L_117a83e2;
  /* 117a83ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a83b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a83b4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 117a83b8 push ecx */
  push32((uint32_t)(ECX));
  /* 117a83b9 call 0x1179cbd0 */
  push32(0x117a83beu); f_1179cbd0();
  /* 117a83be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a83c1 mov esi, eax */
  ESI = (EAX);
  /* 117a83c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a83c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a83c9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 117a83cd push ecx */
  push32((uint32_t)(ECX));
  /* 117a83ce call 0x1179cbd0 */
  push32(0x117a83d3u); f_1179cbd0();
  /* 117a83d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a83d6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a83d9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 117a83dd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117a83e0 jmp 0x117a839f */
  goto L_117a839f;
L_117a83e2:;
  /* 117a83e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a83e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a83e8 push eax */
  push32((uint32_t)(EAX));
  /* 117a83e9 call 0x11799d80 */
  push32(0x117a83eeu); f_11799d80();
  /* 117a83ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a83f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a83f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a83f8 je 0x117a849b */
  if (C.zf) goto L_117a849b;
  /* 117a83fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a8401 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117a8404 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117a840b jmp 0x117a8416 */
  goto L_117a8416;
L_117a840d:;
  /* 117a840d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a8410 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8413 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_117a8416:;
  /* 117a8416 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a841a jae 0x117a848c */
  if (!C.cf) goto L_117a848c;
  /* 117a841c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a841f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 117a8422 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8425 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8428 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117a842b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a842e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8431 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 117a8435 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8436 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8439 push edx */
  push32((uint32_t)(EDX));
  /* 117a843a call 0x1179cd50 */
  push32(0x117a843fu); f_1179cd50();
  /* 117a843f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8442 push eax */
  push32((uint32_t)(EAX));
  /* 117a8443 call 0x1179cbd0 */
  push32(0x117a8448u); f_1179cbd0();
  /* 117a8448 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a844b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a844e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8450 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117a8453 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8456 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 117a8459 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a845c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a845f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117a8462 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a8465 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8468 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 117a846c push eax */
  push32((uint32_t)(EAX));
  /* 117a846d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8470 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8471 call 0x1179cd50 */
  push32(0x117a8476u); f_1179cd50();
  /* 117a8476 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8479 push eax */
  push32((uint32_t)(EAX));
  /* 117a847a call 0x1179cbd0 */
  push32(0x117a847fu); f_1179cbd0();
  /* 117a847f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8482 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8485 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8487 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 117a848a jmp 0x117a840d */
  goto L_117a840d;
L_117a848c:;
  /* 117a848c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a848f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 117a8492 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8495 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8498 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_117a849b:;
  /* 117a849b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a849e pop esi */
  ESI = (pop32());
  /* 117a849f mov esp, ebp */
  ESP = (EBP);
  /* 117a84a1 pop ebp */
  EBP = (pop32());
  /* 117a84a2 ret  */
  ESPCHK(0x117a8380u, _esp0);
  ESP += 4; return;
}

/* FUN_100184b0 @ 0x117a84b0 (878 bytes, 273 insns) */
void f_117a84b0(void) {
  FTRACE(0x117a84b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a84b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a84b1 mov ebp, esp */
  EBP = (ESP);
  /* 117a84b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a84b6 push esi */
  push32((uint32_t)(ESI));
  /* 117a84b7 mov eax, dword ptr [0x117c6dc8] */
  EAX = (r32((uint32_t)(0x117c6dc8)));
  /* 117a84bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a84bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117a84c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117a84cd jmp 0x117a84d8 */
  goto L_117a84d8;
L_117a84cf:;
  /* 117a84cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a84d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a84d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_117a84d8:;
  /* 117a84d8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a84dc jae 0x117a8511 */
  if (!C.cf) goto L_117a8511;
  /* 117a84de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a84e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a84e4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 117a84e7 push ecx */
  push32((uint32_t)(ECX));
  /* 117a84e8 call 0x1179cbd0 */
  push32(0x117a84edu); f_1179cbd0();
  /* 117a84ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a84f0 mov esi, eax */
  ESI = (EAX);
  /* 117a84f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a84f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a84f8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 117a84fc push ecx */
  push32((uint32_t)(ECX));
  /* 117a84fd call 0x1179cbd0 */
  push32(0x117a8502u); f_1179cbd0();
  /* 117a8502 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8505 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8508 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 117a850c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117a850f jmp 0x117a84cf */
  goto L_117a84cf;
L_117a8511:;
  /* 117a8511 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117a8518 jmp 0x117a8523 */
  goto L_117a8523;
L_117a851a:;
  /* 117a851a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a851d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8520 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_117a8523:;
  /* 117a8523 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8527 jae 0x117a855d */
  if (!C.cf) goto L_117a855d;
  /* 117a8529 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a852c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a852f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 117a8533 push eax */
  push32((uint32_t)(EAX));
  /* 117a8534 call 0x1179cbd0 */
  push32(0x117a8539u); f_1179cbd0();
  /* 117a8539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a853c mov esi, eax */
  ESI = (EAX);
  /* 117a853e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a8541 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8544 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 117a8548 push eax */
  push32((uint32_t)(EAX));
  /* 117a8549 call 0x1179cbd0 */
  push32(0x117a854eu); f_1179cbd0();
  /* 117a854e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8551 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8554 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 117a8558 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a855b jmp 0x117a851a */
  goto L_117a851a;
L_117a855d:;
  /* 117a855d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8560 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 117a8566 push eax */
  push32((uint32_t)(EAX));
  /* 117a8567 call 0x1179cbd0 */
  push32(0x117a856cu); f_1179cbd0();
  /* 117a856c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a856f mov esi, eax */
  ESI = (EAX);
  /* 117a8571 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8574 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 117a857a push edx */
  push32((uint32_t)(EDX));
  /* 117a857b call 0x1179cbd0 */
  push32(0x117a8580u); f_1179cbd0();
  /* 117a8580 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8583 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8586 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 117a858a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a858d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8590 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 117a8596 push edx */
  push32((uint32_t)(EDX));
  /* 117a8597 call 0x1179cbd0 */
  push32(0x117a859cu); f_1179cbd0();
  /* 117a859c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a859f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a85a2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 117a85a6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117a85a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a85ac mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 117a85b2 push ecx */
  push32((uint32_t)(ECX));
  /* 117a85b3 call 0x1179cbd0 */
  push32(0x117a85b8u); f_1179cbd0();
  /* 117a85b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a85bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a85be lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 117a85c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a85c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a85c8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 117a85ce push edx */
  push32((uint32_t)(EDX));
  /* 117a85cf call 0x1179cbd0 */
  push32(0x117a85d4u); f_1179cbd0();
  /* 117a85d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a85d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a85da lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 117a85de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117a85e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a85e4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a85e9 push eax */
  push32((uint32_t)(EAX));
  /* 117a85ea call 0x11799d80 */
  push32(0x117a85efu); f_11799d80();
  /* 117a85ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a85f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a85f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a85f9 je 0x117a8816 */
  if (C.zf) goto L_117a8816;
  /* 117a85ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a8602 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 117a8605 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a8608 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a860e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 117a8611 push 0xac */
  push32((uint32_t)(0xacu));
  /* 117a8616 mov eax, dword ptr [0x117c6dc8] */
  EAX = (r32((uint32_t)(0x117c6dc8)));
  /* 117a861b push eax */
  push32((uint32_t)(EAX));
  /* 117a861c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a861f push ecx */
  push32((uint32_t)(ECX));
  /* 117a8620 call 0x117a0fc0 */
  push32(0x117a8625u); f_117a0fc0();
  /* 117a8625 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8628 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117a862f jmp 0x117a863a */
  goto L_117a863a;
L_117a8631:;
  /* 117a8631 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a8634 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8637 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_117a863a:;
  /* 117a863a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a863e jae 0x117a86ae */
  if (!C.cf) goto L_117a86ae;
  /* 117a8640 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a8643 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a8646 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8649 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 117a864c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a864f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8652 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 117a8655 push edx */
  push32((uint32_t)(EDX));
  /* 117a8656 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8659 push eax */
  push32((uint32_t)(EAX));
  /* 117a865a call 0x1179cd50 */
  push32(0x117a865fu); f_1179cd50();
  /* 117a865f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8662 push eax */
  push32((uint32_t)(EAX));
  /* 117a8663 call 0x1179cbd0 */
  push32(0x117a8668u); f_1179cbd0();
  /* 117a8668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a866b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a866e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 117a8672 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 117a8675 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a8678 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a867b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a867e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 117a8682 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a8685 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8688 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 117a868c push edx */
  push32((uint32_t)(EDX));
  /* 117a868d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8690 push eax */
  push32((uint32_t)(EAX));
  /* 117a8691 call 0x1179cd50 */
  push32(0x117a8696u); f_1179cd50();
  /* 117a8696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8699 push eax */
  push32((uint32_t)(EAX));
  /* 117a869a call 0x1179cbd0 */
  push32(0x117a869fu); f_1179cbd0();
  /* 117a869f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a86a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a86a5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 117a86a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 117a86ac jmp 0x117a8631 */
  goto L_117a8631;
L_117a86ae:;
  /* 117a86ae mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117a86b5 jmp 0x117a86c0 */
  goto L_117a86c0;
L_117a86b7:;
  /* 117a86b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a86ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a86bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_117a86c0:;
  /* 117a86c0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a86c4 jae 0x117a8736 */
  if (!C.cf) goto L_117a8736;
  /* 117a86c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a86c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a86cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a86cf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 117a86d3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a86d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a86d9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 117a86dd push eax */
  push32((uint32_t)(EAX));
  /* 117a86de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a86e1 push ecx */
  push32((uint32_t)(ECX));
  /* 117a86e2 call 0x1179cd50 */
  push32(0x117a86e7u); f_1179cd50();
  /* 117a86e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a86ea push eax */
  push32((uint32_t)(EAX));
  /* 117a86eb call 0x1179cbd0 */
  push32(0x117a86f0u); f_1179cbd0();
  /* 117a86f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a86f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a86f6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 117a86fa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117a86fd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a8700 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a8703 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8706 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 117a870a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a870d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8710 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 117a8714 push eax */
  push32((uint32_t)(EAX));
  /* 117a8715 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8718 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8719 call 0x1179cd50 */
  push32(0x117a871eu); f_1179cd50();
  /* 117a871e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8721 push eax */
  push32((uint32_t)(EAX));
  /* 117a8722 call 0x1179cbd0 */
  push32(0x117a8727u); f_1179cbd0();
  /* 117a8727 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a872a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a872d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 117a8731 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117a8734 jmp 0x117a86b7 */
  goto L_117a86b7;
L_117a8736:;
  /* 117a8736 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a8739 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a873c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 117a8742 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8745 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 117a874b push ecx */
  push32((uint32_t)(ECX));
  /* 117a874c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a874f push edx */
  push32((uint32_t)(EDX));
  /* 117a8750 call 0x1179cd50 */
  push32(0x117a8755u); f_1179cd50();
  /* 117a8755 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8758 push eax */
  push32((uint32_t)(EAX));
  /* 117a8759 call 0x1179cbd0 */
  push32(0x117a875eu); f_1179cbd0();
  /* 117a875e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8761 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8764 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 117a8768 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 117a876b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a876e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8771 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 117a8777 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a877a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 117a8780 push eax */
  push32((uint32_t)(EAX));
  /* 117a8781 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8784 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8785 call 0x1179cd50 */
  push32(0x117a878au); f_1179cd50();
  /* 117a878a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a878d push eax */
  push32((uint32_t)(EAX));
  /* 117a878e call 0x1179cbd0 */
  push32(0x117a8793u); f_1179cbd0();
  /* 117a8793 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8796 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8799 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 117a879d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117a87a0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a87a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a87a6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 117a87ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a87af mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 117a87b5 push ecx */
  push32((uint32_t)(ECX));
  /* 117a87b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a87b9 push edx */
  push32((uint32_t)(EDX));
  /* 117a87ba call 0x1179cd50 */
  push32(0x117a87bfu); f_1179cd50();
  /* 117a87bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a87c2 push eax */
  push32((uint32_t)(EAX));
  /* 117a87c3 call 0x1179cbd0 */
  push32(0x117a87c8u); f_1179cbd0();
  /* 117a87c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a87cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a87ce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 117a87d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 117a87d5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a87d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a87db mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 117a87e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a87e4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 117a87ea push eax */
  push32((uint32_t)(EAX));
  /* 117a87eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a87ee push ecx */
  push32((uint32_t)(ECX));
  /* 117a87ef call 0x1179cd50 */
  push32(0x117a87f4u); f_1179cd50();
  /* 117a87f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a87f7 push eax */
  push32((uint32_t)(EAX));
  /* 117a87f8 call 0x1179cbd0 */
  push32(0x117a87fdu); f_1179cbd0();
  /* 117a87fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8800 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8803 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 117a8807 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117a880a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a880d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a8810 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_117a8816:;
  /* 117a8816 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a8819 pop esi */
  ESI = (pop32());
  /* 117a881a mov esp, ebp */
  ESP = (EBP);
  /* 117a881c pop ebp */
  EBP = (pop32());
  /* 117a881d ret  */
  ESPCHK(0x117a84b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018820 @ 0x117a8820 (31 bytes, 15 insns) */
void f_117a8820(void) {
  FTRACE(0x117a8820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a8820 push ebp */
  push32((uint32_t)(EBP));
  /* 117a8821 mov ebp, esp */
  EBP = (ESP);
  /* 117a8823 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a8825 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8828 push eax */
  push32((uint32_t)(EAX));
  /* 117a8829 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a882c push ecx */
  push32((uint32_t)(ECX));
  /* 117a882d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8830 push edx */
  push32((uint32_t)(EDX));
  /* 117a8831 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8834 push eax */
  push32((uint32_t)(EAX));
  /* 117a8835 call 0x117a8840 */
  push32(0x117a883au); f_117a8840();
  /* 117a883a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a883d pop ebp */
  EBP = (pop32());
  /* 117a883e ret  */
  ESPCHK(0x117a8820u, _esp0);
  ESP += 4; return;
}

/* FUN_10018840 @ 0x117a8840 (393 bytes, 123 insns) */
void f_117a8840(void) {
  FTRACE(0x117a8840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a8840 push ebp */
  push32((uint32_t)(EBP));
  /* 117a8841 mov ebp, esp */
  EBP = (ESP);
  /* 117a8843 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a8846 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a884a jne 0x117a8856 */
  if (!C.zf) goto L_117a8856;
  /* 117a884c mov eax, dword ptr [0x117c6dc8] */
  EAX = (r32((uint32_t)(0x117c6dc8)));
  /* 117a8851 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117a8854 jmp 0x117a885c */
  goto L_117a885c;
L_117a8856:;
  /* 117a8856 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8859 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_117a885c:;
  /* 117a885c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a885f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a8862 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8865 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a8868 push 0x117c7f44 */
  push32((uint32_t)(0x117c7f44u));
  /* 117a886d call dword ptr [0x117ca3b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3b8))), 0x117a8873u);
  /* 117a8873 cmp dword ptr [0x117c7f34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a887a je 0x117a889a */
  if (C.zf) goto L_117a889a;
  /* 117a887c push 0x117c7f44 */
  push32((uint32_t)(0x117c7f44u));
  /* 117a8881 call dword ptr [0x117ca3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3a8))), 0x117a8887u);
  /* 117a8887 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117a8889 call 0x1179d7a0 */
  push32(0x117a888eu); f_1179d7a0();
  /* 117a888e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8891 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 117a8898 jmp 0x117a88a1 */
  goto L_117a88a1;
L_117a889a:;
  /* 117a889a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_117a88a1:;
  /* 117a88a1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a88a5 jbe 0x117a8992 */
  if ((C.cf||C.zf)) goto L_117a8992;
  /* 117a88ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a88ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a88b0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 117a88b3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a88b7 je 0x117a88c1 */
  if (C.zf) goto L_117a88c1;
  /* 117a88b9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a88bd je 0x117a88c6 */
  if (C.zf) goto L_117a88c6;
  /* 117a88bf jmp 0x117a8920 */
  goto L_117a8920;
L_117a88c1:;
  /* 117a88c1 jmp 0x117a8992 */
  goto L_117a8992;
L_117a88c6:;
  /* 117a88c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a88c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a88cc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 117a88cf mov dword ptr [0x117c7f20], 0 */
  w32((uint32_t)(0x117c7f20), (0x0u));
  /* 117a88d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a88dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a88df cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a88e2 jne 0x117a88f7 */
  if (!C.zf) goto L_117a88f7;
  /* 117a88e4 mov dword ptr [0x117c7f20], 1 */
  w32((uint32_t)(0x117c7f20), (0x1u));
  /* 117a88ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a88f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a88f4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_117a88f7:;
  /* 117a88f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a88fa push ecx */
  push32((uint32_t)(ECX));
  /* 117a88fb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 117a88fe push edx */
  push32((uint32_t)(EDX));
  /* 117a88ff lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 117a8902 push eax */
  push32((uint32_t)(EAX));
  /* 117a8903 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8906 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8907 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a890a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a890c push eax */
  push32((uint32_t)(EAX));
  /* 117a890d call 0x117a89d0 */
  push32(0x117a8912u); f_117a89d0();
  /* 117a8912 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8915 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8918 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a891b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 117a891e jmp 0x117a898d */
  goto L_117a898d;
L_117a8920:;
  /* 117a8920 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a8925 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a8927 mov ecx, dword ptr [0x117c5db8] */
  ECX = (r32((uint32_t)(0x117c5db8)));
  /* 117a892d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a892f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 117a8933 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 117a8939 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a893b je 0x117a8968 */
  if (C.zf) goto L_117a8968;
  /* 117a893d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8941 jbe 0x117a8968 */
  if ((C.cf||C.zf)) goto L_117a8968;
  /* 117a8943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8946 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8949 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a894b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117a894d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8950 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8953 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a8956 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8959 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a895c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 117a895f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8962 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a8965 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_117a8968:;
  /* 117a8968 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a896b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a896e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a8970 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117a8972 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8975 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8978 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a897b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a897e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8981 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 117a8984 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a8987 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a898a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_117a898d:;
  /* 117a898d jmp 0x117a88a1 */
  goto L_117a88a1;
L_117a8992:;
  /* 117a8992 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8996 je 0x117a89a4 */
  if (C.zf) goto L_117a89a4;
  /* 117a8998 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117a899a call 0x1179d840 */
  push32(0x117a899fu); f_1179d840();
  /* 117a899f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a89a2 jmp 0x117a89af */
  goto L_117a89af;
L_117a89a4:;
  /* 117a89a4 push 0x117c7f44 */
  push32((uint32_t)(0x117c7f44u));
  /* 117a89a9 call dword ptr [0x117ca3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3a8))), 0x117a89afu);
L_117a89af:;
  /* 117a89af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a89b3 jbe 0x117a89c3 */
  if ((C.cf||C.zf)) goto L_117a89c3;
  /* 117a89b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a89b8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 117a89bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a89be sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a89c1 jmp 0x117a89c5 */
  goto L_117a89c5;
L_117a89c3:;
  /* 117a89c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a89c5:;
  /* 117a89c5 mov esp, ebp */
  ESP = (EBP);
  /* 117a89c7 pop ebp */
  EBP = (pop32());
  /* 117a89c8 ret  */
  ESPCHK(0x117a8840u, _esp0);
  ESP += 4; return;
}

/* FUN_100189d0 @ 0x117a89d0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_117a89d0(void) {
  FTRACE(0x117a89d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a89d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a89d1 mov ebp, esp */
  EBP = (ESP);
  /* 117a89d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a89d6 push esi */
  push32((uint32_t)(ESI));
  /* 117a89d7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 117a89db mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a89de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a89e1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a89e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a89e7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a89eb ja 0x117a8f38 */
  if ((!C.cf&&!C.zf)) goto L_117a8f38;
  /* 117a89f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a89f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a89f6 mov dl, byte ptr [eax + 0x117a8f99] */
  DL = (r8((uint32_t)(EAX + 0x117a8f99)));
  /* 117a89fc jmp dword ptr [edx*4 + 0x117a8f3d] */
  switch (EDX) {
    case 0: goto L_117a8f16;
    case 1: goto L_117a8a25;
    case 2: goto L_117a8a6b;
    case 3: goto L_117a8bb8;
    case 4: goto L_117a8be0;
    case 5: goto L_117a8c7f;
    case 6: goto L_117a8ceb;
    case 7: goto L_117a8d14;
    case 8: goto L_117a8d55;
    case 9: goto L_117a8e37;
    case 10: goto L_117a8e9e;
    case 11: goto L_117a8eeb;
    case 12: goto L_117a8a03;
    case 13: goto L_117a8a48;
    case 14: goto L_117a8a8e;
    case 15: goto L_117a8b8e;
    case 16: goto L_117a8c25;
    case 17: goto L_117a8c52;
    case 18: goto L_117a8ca7;
    case 19: goto L_117a8d2b;
    case 20: goto L_117a8dd9;
    case 21: goto L_117a8e68;
    case 22: goto L_117a8f38;
    default: x86_unimpl("switch@0x117a89fc out of table"); return;
  }
L_117a8a03:;
  /* 117a8a03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8a06 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8a07 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8a0a push edx */
  push32((uint32_t)(EDX));
  /* 117a8a0b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8a0e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 117a8a11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8a14 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 117a8a17 push eax */
  push32((uint32_t)(EAX));
  /* 117a8a18 call 0x117a8ff0 */
  push32(0x117a8a1du); f_117a8ff0();
  /* 117a8a1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8a20 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8a25:;
  /* 117a8a25 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8a28 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8a29 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8a2c push edx */
  push32((uint32_t)(EDX));
  /* 117a8a2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8a30 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 117a8a33 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8a36 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 117a8a3a push eax */
  push32((uint32_t)(EAX));
  /* 117a8a3b call 0x117a8ff0 */
  push32(0x117a8a40u); f_117a8ff0();
  /* 117a8a40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8a43 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8a48:;
  /* 117a8a48 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8a4b push ecx */
  push32((uint32_t)(ECX));
  /* 117a8a4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8a4f push edx */
  push32((uint32_t)(EDX));
  /* 117a8a50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8a53 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117a8a56 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8a59 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 117a8a5d push eax */
  push32((uint32_t)(EAX));
  /* 117a8a5e call 0x117a8ff0 */
  push32(0x117a8a63u); f_117a8ff0();
  /* 117a8a63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8a66 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8a6b:;
  /* 117a8a6b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8a6e push ecx */
  push32((uint32_t)(ECX));
  /* 117a8a6f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8a72 push edx */
  push32((uint32_t)(EDX));
  /* 117a8a73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8a76 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117a8a79 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8a7c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 117a8a80 push eax */
  push32((uint32_t)(EAX));
  /* 117a8a81 call 0x117a8ff0 */
  push32(0x117a8a86u); f_117a8ff0();
  /* 117a8a86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8a89 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8a8e:;
  /* 117a8a8e cmp dword ptr [0x117c7f20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8a95 je 0x117a8b16 */
  if (C.zf) goto L_117a8b16;
  /* 117a8a97 mov dword ptr [0x117c7f20], 0 */
  w32((uint32_t)(0x117c7f20), (0x0u));
  /* 117a8aa1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8aa4 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8aa5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8aa8 push edx */
  push32((uint32_t)(EDX));
  /* 117a8aa9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8aac push eax */
  push32((uint32_t)(EAX));
  /* 117a8aad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8ab0 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8ab1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8ab4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 117a8aba push eax */
  push32((uint32_t)(EAX));
  /* 117a8abb call 0x117a91a0 */
  push32(0x117a8ac0u); f_117a91a0();
  /* 117a8ac0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8ac3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8ac6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8ac9 jne 0x117a8ad0 */
  if (!C.zf) goto L_117a8ad0;
  /* 117a8acb jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8ad0:;
  /* 117a8ad0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8ad3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a8ad5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 117a8ad8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8adb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a8add add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8ae0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8ae3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117a8ae5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8ae8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a8aea sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a8aed mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8af0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117a8af2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8af5 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8af6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8af9 push edx */
  push32((uint32_t)(EDX));
  /* 117a8afa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8afd push eax */
  push32((uint32_t)(EAX));
  /* 117a8afe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8b01 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8b02 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8b05 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 117a8b0b push eax */
  push32((uint32_t)(EAX));
  /* 117a8b0c call 0x117a91a0 */
  push32(0x117a8b11u); f_117a91a0();
  /* 117a8b11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8b14 jmp 0x117a8b89 */
  goto L_117a8b89;
L_117a8b16:;
  /* 117a8b16 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8b19 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8b1a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8b1d push edx */
  push32((uint32_t)(EDX));
  /* 117a8b1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8b21 push eax */
  push32((uint32_t)(EAX));
  /* 117a8b22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8b25 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8b26 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8b29 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 117a8b2f push eax */
  push32((uint32_t)(EAX));
  /* 117a8b30 call 0x117a91a0 */
  push32(0x117a8b35u); f_117a91a0();
  /* 117a8b35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8b38 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8b3b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8b3e jne 0x117a8b45 */
  if (!C.zf) goto L_117a8b45;
  /* 117a8b40 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8b45:;
  /* 117a8b45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8b48 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a8b4a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 117a8b4d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8b50 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a8b52 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8b55 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8b58 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117a8b5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8b5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a8b5f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a8b62 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8b65 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117a8b67 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8b6a push ecx */
  push32((uint32_t)(ECX));
  /* 117a8b6b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8b6e push edx */
  push32((uint32_t)(EDX));
  /* 117a8b6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8b72 push eax */
  push32((uint32_t)(EAX));
  /* 117a8b73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8b76 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8b77 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8b7a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 117a8b80 push eax */
  push32((uint32_t)(EAX));
  /* 117a8b81 call 0x117a91a0 */
  push32(0x117a8b86u); f_117a91a0();
  /* 117a8b86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a8b89:;
  /* 117a8b89 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8b8e:;
  /* 117a8b8e mov ecx, dword ptr [0x117c7f20] */
  ECX = (r32((uint32_t)(0x117c7f20)));
  /* 117a8b94 mov dword ptr [0x117c7f30], ecx */
  w32((uint32_t)(0x117c7f30), (ECX));
  /* 117a8b9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8b9d push edx */
  push32((uint32_t)(EDX));
  /* 117a8b9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8ba1 push eax */
  push32((uint32_t)(EAX));
  /* 117a8ba2 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a8ba4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8ba7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a8baa push edx */
  push32((uint32_t)(EDX));
  /* 117a8bab call 0x117a9040 */
  push32(0x117a8bb0u); f_117a9040();
  /* 117a8bb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8bb3 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8bb8:;
  /* 117a8bb8 mov eax, dword ptr [0x117c7f20] */
  EAX = (r32((uint32_t)(0x117c7f20)));
  /* 117a8bbd mov dword ptr [0x117c7f30], eax */
  w32((uint32_t)(0x117c7f30), (EAX));
  /* 117a8bc2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8bc5 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8bc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8bc9 push edx */
  push32((uint32_t)(EDX));
  /* 117a8bca push 2 */
  push32((uint32_t)(0x2u));
  /* 117a8bcc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8bcf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117a8bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8bd3 call 0x117a9040 */
  push32(0x117a8bd8u); f_117a9040();
  /* 117a8bd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8bdb jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8be0:;
  /* 117a8be0 mov edx, dword ptr [0x117c7f20] */
  EDX = (r32((uint32_t)(0x117c7f20)));
  /* 117a8be6 mov dword ptr [0x117c7f30], edx */
  w32((uint32_t)(0x117c7f30), (EDX));
  /* 117a8bec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8bef mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 117a8bf2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a8bf3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 117a8bf8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a8bfa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a8bfd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8c01 jne 0x117a8c0a */
  if (!C.zf) goto L_117a8c0a;
  /* 117a8c03 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_117a8c0a:;
  /* 117a8c0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8c0d push edx */
  push32((uint32_t)(EDX));
  /* 117a8c0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8c11 push eax */
  push32((uint32_t)(EAX));
  /* 117a8c12 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a8c14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a8c17 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8c18 call 0x117a9040 */
  push32(0x117a8c1du); f_117a9040();
  /* 117a8c1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8c20 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8c25:;
  /* 117a8c25 mov edx, dword ptr [0x117c7f20] */
  EDX = (r32((uint32_t)(0x117c7f20)));
  /* 117a8c2b mov dword ptr [0x117c7f30], edx */
  w32((uint32_t)(0x117c7f30), (EDX));
  /* 117a8c31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8c34 push eax */
  push32((uint32_t)(EAX));
  /* 117a8c35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8c38 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8c39 push 3 */
  push32((uint32_t)(0x3u));
  /* 117a8c3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8c3e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 117a8c41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8c44 push eax */
  push32((uint32_t)(EAX));
  /* 117a8c45 call 0x117a9040 */
  push32(0x117a8c4au); f_117a9040();
  /* 117a8c4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8c4d jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8c52:;
  /* 117a8c52 mov ecx, dword ptr [0x117c7f20] */
  ECX = (r32((uint32_t)(0x117c7f20)));
  /* 117a8c58 mov dword ptr [0x117c7f30], ecx */
  w32((uint32_t)(0x117c7f30), (ECX));
  /* 117a8c5e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8c61 push edx */
  push32((uint32_t)(EDX));
  /* 117a8c62 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8c65 push eax */
  push32((uint32_t)(EAX));
  /* 117a8c66 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a8c68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8c6b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 117a8c6e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8c71 push edx */
  push32((uint32_t)(EDX));
  /* 117a8c72 call 0x117a9040 */
  push32(0x117a8c77u); f_117a9040();
  /* 117a8c77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8c7a jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8c7f:;
  /* 117a8c7f mov eax, dword ptr [0x117c7f20] */
  EAX = (r32((uint32_t)(0x117c7f20)));
  /* 117a8c84 mov dword ptr [0x117c7f30], eax */
  w32((uint32_t)(0x117c7f30), (EAX));
  /* 117a8c89 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8c8c push ecx */
  push32((uint32_t)(ECX));
  /* 117a8c8d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8c90 push edx */
  push32((uint32_t)(EDX));
  /* 117a8c91 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a8c93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8c96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117a8c99 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8c9a call 0x117a9040 */
  push32(0x117a8c9fu); f_117a9040();
  /* 117a8c9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8ca2 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8ca7:;
  /* 117a8ca7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8caa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8cae jg 0x117a8ccc */
  if ((!C.zf&&C.sf==C.of)) goto L_117a8ccc;
  /* 117a8cb0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8cb3 push eax */
  push32((uint32_t)(EAX));
  /* 117a8cb4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8cb7 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8cb8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8cbb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 117a8cc1 push eax */
  push32((uint32_t)(EAX));
  /* 117a8cc2 call 0x117a8ff0 */
  push32(0x117a8cc7u); f_117a8ff0();
  /* 117a8cc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8cca jmp 0x117a8ce6 */
  goto L_117a8ce6;
L_117a8ccc:;
  /* 117a8ccc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8ccf push ecx */
  push32((uint32_t)(ECX));
  /* 117a8cd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8cd3 push edx */
  push32((uint32_t)(EDX));
  /* 117a8cd4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8cd7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 117a8cdd push ecx */
  push32((uint32_t)(ECX));
  /* 117a8cde call 0x117a8ff0 */
  push32(0x117a8ce3u); f_117a8ff0();
  /* 117a8ce3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a8ce6:;
  /* 117a8ce6 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8ceb:;
  /* 117a8ceb mov edx, dword ptr [0x117c7f20] */
  EDX = (r32((uint32_t)(0x117c7f20)));
  /* 117a8cf1 mov dword ptr [0x117c7f30], edx */
  w32((uint32_t)(0x117c7f30), (EDX));
  /* 117a8cf7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8cfa push eax */
  push32((uint32_t)(EAX));
  /* 117a8cfb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8cfe push ecx */
  push32((uint32_t)(ECX));
  /* 117a8cff push 2 */
  push32((uint32_t)(0x2u));
  /* 117a8d01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8d04 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a8d06 push eax */
  push32((uint32_t)(EAX));
  /* 117a8d07 call 0x117a9040 */
  push32(0x117a8d0cu); f_117a9040();
  /* 117a8d0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8d0f jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8d14:;
  /* 117a8d14 mov ecx, dword ptr [0x117c7f20] */
  ECX = (r32((uint32_t)(0x117c7f20)));
  /* 117a8d1a mov dword ptr [0x117c7f30], ecx */
  w32((uint32_t)(0x117c7f30), (ECX));
  /* 117a8d20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8d23 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 117a8d26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a8d29 jmp 0x117a8d7d */
  goto L_117a8d7d;
L_117a8d2b:;
  /* 117a8d2b mov ecx, dword ptr [0x117c7f20] */
  ECX = (r32((uint32_t)(0x117c7f20)));
  /* 117a8d31 mov dword ptr [0x117c7f30], ecx */
  w32((uint32_t)(0x117c7f30), (ECX));
  /* 117a8d37 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8d3a push edx */
  push32((uint32_t)(EDX));
  /* 117a8d3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8d3e push eax */
  push32((uint32_t)(EAX));
  /* 117a8d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 117a8d41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8d44 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 117a8d47 push edx */
  push32((uint32_t)(EDX));
  /* 117a8d48 call 0x117a9040 */
  push32(0x117a8d4du); f_117a9040();
  /* 117a8d4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8d50 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8d55:;
  /* 117a8d55 mov eax, dword ptr [0x117c7f20] */
  EAX = (r32((uint32_t)(0x117c7f20)));
  /* 117a8d5a mov dword ptr [0x117c7f30], eax */
  w32((uint32_t)(0x117c7f30), (EAX));
  /* 117a8d5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8d62 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8d66 jne 0x117a8d71 */
  if (!C.zf) goto L_117a8d71;
  /* 117a8d68 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 117a8d6f jmp 0x117a8d7d */
  goto L_117a8d7d;
L_117a8d71:;
  /* 117a8d71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8d74 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 117a8d77 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a8d7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117a8d7d:;
  /* 117a8d7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8d80 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 117a8d83 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8d86 jge 0x117a8d91 */
  if ((C.sf==C.of)) goto L_117a8d91;
  /* 117a8d88 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a8d8f jmp 0x117a8dbe */
  goto L_117a8dbe;
L_117a8d91:;
  /* 117a8d91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8d94 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 117a8d97 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a8d98 mov ecx, 7 */
  ECX = (0x7u);
  /* 117a8d9d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a8d9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a8da2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8da5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 117a8da8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a8da9 mov ecx, 7 */
  ECX = (0x7u);
  /* 117a8dae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a8db0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8db3 jl 0x117a8dbe */
  if ((C.sf!=C.of)) goto L_117a8dbe;
  /* 117a8db5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a8db8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8dbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117a8dbe:;
  /* 117a8dbe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8dc1 push eax */
  push32((uint32_t)(EAX));
  /* 117a8dc2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8dc5 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8dc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a8dc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a8dcb push edx */
  push32((uint32_t)(EDX));
  /* 117a8dcc call 0x117a9040 */
  push32(0x117a8dd1u); f_117a9040();
  /* 117a8dd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8dd4 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8dd9:;
  /* 117a8dd9 cmp dword ptr [0x117c7f20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8de0 je 0x117a8e10 */
  if (C.zf) goto L_117a8e10;
  /* 117a8de2 mov dword ptr [0x117c7f20], 0 */
  w32((uint32_t)(0x117c7f20), (0x0u));
  /* 117a8dec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8def push eax */
  push32((uint32_t)(EAX));
  /* 117a8df0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8df3 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8df4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8df7 push edx */
  push32((uint32_t)(EDX));
  /* 117a8df8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8dfb push eax */
  push32((uint32_t)(EAX));
  /* 117a8dfc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8dff mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 117a8e05 push edx */
  push32((uint32_t)(EDX));
  /* 117a8e06 call 0x117a91a0 */
  push32(0x117a8e0bu); f_117a91a0();
  /* 117a8e0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8e0e jmp 0x117a8e32 */
  goto L_117a8e32;
L_117a8e10:;
  /* 117a8e10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8e13 push eax */
  push32((uint32_t)(EAX));
  /* 117a8e14 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8e17 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8e18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8e1b push edx */
  push32((uint32_t)(EDX));
  /* 117a8e1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8e1f push eax */
  push32((uint32_t)(EAX));
  /* 117a8e20 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8e23 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 117a8e29 push edx */
  push32((uint32_t)(EDX));
  /* 117a8e2a call 0x117a91a0 */
  push32(0x117a8e2fu); f_117a91a0();
  /* 117a8e2f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a8e32:;
  /* 117a8e32 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8e37:;
  /* 117a8e37 mov dword ptr [0x117c7f20], 0 */
  w32((uint32_t)(0x117c7f20), (0x0u));
  /* 117a8e41 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8e44 push eax */
  push32((uint32_t)(EAX));
  /* 117a8e45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8e48 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8e49 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8e4c push edx */
  push32((uint32_t)(EDX));
  /* 117a8e4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8e50 push eax */
  push32((uint32_t)(EAX));
  /* 117a8e51 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a8e54 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 117a8e5a push edx */
  push32((uint32_t)(EDX));
  /* 117a8e5b call 0x117a91a0 */
  push32(0x117a8e60u); f_117a91a0();
  /* 117a8e60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8e63 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8e68:;
  /* 117a8e68 mov eax, dword ptr [0x117c7f20] */
  EAX = (r32((uint32_t)(0x117c7f20)));
  /* 117a8e6d mov dword ptr [0x117c7f30], eax */
  w32((uint32_t)(0x117c7f30), (EAX));
  /* 117a8e72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8e75 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 117a8e78 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a8e79 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 117a8e7e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a8e80 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a8e83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8e86 push edx */
  push32((uint32_t)(EDX));
  /* 117a8e87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8e8a push eax */
  push32((uint32_t)(EAX));
  /* 117a8e8b push 2 */
  push32((uint32_t)(0x2u));
  /* 117a8e8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a8e90 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8e91 call 0x117a9040 */
  push32(0x117a8e96u); f_117a9040();
  /* 117a8e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8e99 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8e9e:;
  /* 117a8e9e mov edx, dword ptr [0x117c7f20] */
  EDX = (r32((uint32_t)(0x117c7f20)));
  /* 117a8ea4 mov dword ptr [0x117c7f30], edx */
  w32((uint32_t)(0x117c7f30), (EDX));
  /* 117a8eaa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8ead mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 117a8eb0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a8eb1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 117a8eb6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a8eb8 mov ecx, eax */
  ECX = (EAX);
  /* 117a8eba add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8ebd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a8ec0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8ec3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117a8ec6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a8ec7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 117a8ecc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a8ece add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8ed0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a8ed3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8ed6 push eax */
  push32((uint32_t)(EAX));
  /* 117a8ed7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8eda push ecx */
  push32((uint32_t)(ECX));
  /* 117a8edb push 4 */
  push32((uint32_t)(0x4u));
  /* 117a8edd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a8ee0 push edx */
  push32((uint32_t)(EDX));
  /* 117a8ee1 call 0x117a9040 */
  push32(0x117a8ee6u); f_117a9040();
  /* 117a8ee6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8ee9 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8eeb:;
  /* 117a8eeb call 0x1179daa0 */
  push32(0x117a8ef0u); f_1179daa0();
  /* 117a8ef0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8ef3 push eax */
  push32((uint32_t)(EAX));
  /* 117a8ef4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 117a8ef8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a8efb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a8efd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8f01 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 117a8f04 mov ecx, dword ptr [eax*4 + 0x117c5d14] */
  ECX = (r32((uint32_t)(EAX*4 + 0x117c5d14)));
  /* 117a8f0b push ecx */
  push32((uint32_t)(ECX));
  /* 117a8f0c call 0x117a8ff0 */
  push32(0x117a8f11u); f_117a8ff0();
  /* 117a8f11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8f14 jmp 0x117a8f38 */
  goto L_117a8f38;
L_117a8f16:;
  /* 117a8f16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8f19 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a8f1b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 117a8f1e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8f21 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a8f23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a8f26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8f29 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117a8f2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8f2e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a8f30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a8f33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a8f36 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_117a8f38:;
  /* 117a8f38 pop esi */
  ESI = (pop32());
  /* 117a8f39 mov esp, ebp */
  ESP = (EBP);
  /* 117a8f3b pop ebp */
  EBP = (pop32());
  /* 117a8f3c ret  */
  ESPCHK(0x117a89d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x117a8ff0 (72 bytes, 30 insns) */
void f_117a8ff0(void) {
  FTRACE(0x117a8ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a8ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a8ff1 mov ebp, esp */
  EBP = (ESP);
L_117a8ff3:;
  /* 117a8ff3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a8ff6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a8ff9 je 0x117a9036 */
  if (C.zf) goto L_117a9036;
  /* 117a8ffb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a8ffe movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a9001 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a9003 je 0x117a9036 */
  if (C.zf) goto L_117a9036;
  /* 117a9005 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a9008 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a900a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a900d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a900f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 117a9011 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a9014 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a9016 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9019 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a901c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117a901e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9021 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9024 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 117a9027 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a902a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a902c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a902f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9032 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117a9034 jmp 0x117a8ff3 */
  goto L_117a8ff3;
L_117a9036:;
  /* 117a9036 pop ebp */
  EBP = (pop32());
  /* 117a9037 ret  */
  ESPCHK(0x117a8ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019040 @ 0x117a9040 (173 bytes, 64 insns) */
void f_117a9040(void) {
  FTRACE(0x117a9040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a9040 push ebp */
  push32((uint32_t)(EBP));
  /* 117a9041 mov ebp, esp */
  EBP = (ESP);
  /* 117a9043 push ecx */
  push32((uint32_t)(ECX));
  /* 117a9044 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a904b cmp dword ptr [0x117c7f30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9052 je 0x117a906a */
  if (C.zf) goto L_117a906a;
  /* 117a9054 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a9057 push eax */
  push32((uint32_t)(EAX));
  /* 117a9058 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a905b push ecx */
  push32((uint32_t)(ECX));
  /* 117a905c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a905f push edx */
  push32((uint32_t)(EDX));
  /* 117a9060 call 0x117a90f0 */
  push32(0x117a9065u); f_117a90f0();
  /* 117a9065 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9068 jmp 0x117a90e9 */
  goto L_117a90e9;
L_117a906a:;
  /* 117a906a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a906d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a9070 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9072 jae 0x117a90e0 */
  if (!C.cf) goto L_117a90e0;
  /* 117a9074 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a9077 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a907a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 117a907d jmp 0x117a9088 */
  goto L_117a9088;
L_117a907f:;
  /* 117a907f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a9082 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a9085 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_117a9088:;
  /* 117a9088 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a908b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a908e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a9090 je 0x117a90c4 */
  if (C.zf) goto L_117a90c4;
  /* 117a9092 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9095 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a9096 mov ecx, 0xa */
  ECX = (0xau);
  /* 117a909b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a909d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a90a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a90a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a90a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a90a8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 117a90ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a90ae cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a90af mov ecx, 0xa */
  ECX = (0xau);
  /* 117a90b4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a90b6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a90b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a90bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a90bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a90c2 jmp 0x117a907f */
  goto L_117a907f;
L_117a90c4:;
  /* 117a90c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a90c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a90c9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a90cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a90cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117a90d1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a90d4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a90d6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a90d9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a90dc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117a90de jmp 0x117a90e9 */
  goto L_117a90e9;
L_117a90e0:;
  /* 117a90e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a90e3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_117a90e9:;
  /* 117a90e9 mov esp, ebp */
  ESP = (EBP);
  /* 117a90eb pop ebp */
  EBP = (pop32());
  /* 117a90ec ret  */
  ESPCHK(0x117a9040u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x117a90f0 (172 bytes, 65 insns) */
void f_117a90f0(void) {
  FTRACE(0x117a90f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a90f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a90f1 mov ebp, esp */
  EBP = (ESP);
  /* 117a90f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a90f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a90f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a90fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a90fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9101 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9104 jbe 0x117a914b */
  if ((C.cf||C.zf)) goto L_117a914b;
L_117a9106:;
  /* 117a9106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9109 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a910a mov ecx, 0xa */
  ECX = (0xau);
  /* 117a910f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a9111 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9114 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a9117 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117a9119 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a911c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a911f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a9122 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9125 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a9127 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a912a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a912d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117a912f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9132 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a9133 mov ecx, 0xa */
  ECX = (0xau);
  /* 117a9138 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a913a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a913d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9141 jle 0x117a914b */
  if ((C.zf||C.sf!=C.of)) goto L_117a914b;
  /* 117a9143 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9146 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9149 ja 0x117a9106 */
  if ((!C.cf&&!C.zf)) goto L_117a9106;
L_117a914b:;
  /* 117a914b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a914e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a9150 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a9153 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a9156 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a9159 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 117a915b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a915e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a9161 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117a9164:;
  /* 117a9164 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a9167 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a9169 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 117a916c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a916f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a9172 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a9174 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 117a9176 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a9179 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a917c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a917f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a9182 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 117a9185 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 117a9187 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a918a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a918d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a9190 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a9193 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9196 jb 0x117a9164 */
  if (C.cf) goto L_117a9164;
  /* 117a9198 mov esp, ebp */
  ESP = (EBP);
  /* 117a919a pop ebp */
  EBP = (pop32());
  /* 117a919b ret  */
  ESPCHK(0x117a90f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100191a0 @ 0x117a91a0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_117a91a0(void) {
  FTRACE(0x117a91a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a91a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a91a1 mov ebp, esp */
  EBP = (ESP);
  /* 117a91a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_117a91a6:;
  /* 117a91a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a91a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a91ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a91ae je 0x117a961c */
  if (C.zf) goto L_117a961c;
  /* 117a91b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a91b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a91ba je 0x117a961c */
  if (C.zf) goto L_117a961c;
  /* 117a91c0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 117a91c4 mov dword ptr [0x117c7f30], 0 */
  w32((uint32_t)(0x117c7f30), (0x0u));
  /* 117a91ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117a91d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a91d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a91db jmp 0x117a91e6 */
  goto L_117a91e6;
L_117a91dd:;
  /* 117a91dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a91e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a91e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_117a91e6:;
  /* 117a91e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a91e9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117a91ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a91ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a91f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a91f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a91f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a91fb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a91fd jne 0x117a9201 */
  if (!C.zf) goto L_117a9201;
  /* 117a91ff jmp 0x117a91dd */
  goto L_117a91dd;
L_117a9201:;
  /* 117a9201 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a9204 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a9207 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a920a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a920d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a9210 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117a9213 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a9216 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a9219 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 117a921c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9220 ja 0x117a9570 */
  if ((!C.cf&&!C.zf)) goto L_117a9570;
  /* 117a9226 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a9229 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a922b mov al, byte ptr [ecx + 0x117a964c] */
  AL = (r8((uint32_t)(ECX + 0x117a964c)));
  /* 117a9231 jmp dword ptr [eax*4 + 0x117a9620] */
  switch (EAX) {
    case 0: goto L_117a948f;
    case 1: goto L_117a9373;
    case 2: goto L_117a92fe;
    case 3: goto L_117a9238;
    case 4: goto L_117a9276;
    case 5: goto L_117a92d7;
    case 6: goto L_117a9325;
    case 7: goto L_117a934c;
    case 8: goto L_117a93ba;
    case 9: goto L_117a92b4;
    case 10: goto L_117a9570;
    default: x86_unimpl("switch@0x117a9231 out of table"); return;
  }
L_117a9238:;
  /* 117a9238 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a923b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 117a923e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a9241 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a9244 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117a9247 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a924b ja 0x117a9271 */
  if ((!C.cf&&!C.zf)) goto L_117a9271;
  /* 117a924d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a9250 jmp dword ptr [ecx*4 + 0x117a969f] */
  switch (ECX) {
    case 0: goto L_117a9257;
    case 1: goto L_117a9261;
    case 2: goto L_117a9267;
    case 3: goto L_117a926d;
    case 4: goto L_117a9295;
    case 5: goto L_117a929f;
    case 6: goto L_117a92a5;
    case 7: goto L_117a92ab;
    default: x86_unimpl("switch@0x117a9250 out of table"); return;
  }
L_117a9257:;
  /* 117a9257 mov dword ptr [0x117c7f30], 1 */
  w32((uint32_t)(0x117c7f30), (0x1u));
L_117a9261:;
  /* 117a9261 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 117a9265 jmp 0x117a9271 */
  goto L_117a9271;
L_117a9267:;
  /* 117a9267 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 117a926b jmp 0x117a9271 */
  goto L_117a9271;
L_117a926d:;
  /* 117a926d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_117a9271:;
  /* 117a9271 jmp 0x117a9570 */
  goto L_117a9570;
L_117a9276:;
  /* 117a9276 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a9279 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 117a927c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a927f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a9282 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 117a9285 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9289 ja 0x117a92af */
  if ((!C.cf&&!C.zf)) goto L_117a92af;
  /* 117a928b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a928e jmp dword ptr [ecx*4 + 0x117a96af] */
  switch (ECX) {
    case 0: goto L_117a9295;
    case 1: goto L_117a929f;
    case 2: goto L_117a92a5;
    case 3: goto L_117a92ab;
    default: x86_unimpl("switch@0x117a928e out of table"); return;
  }
L_117a9295:;
  /* 117a9295 mov dword ptr [0x117c7f30], 1 */
  w32((uint32_t)(0x117c7f30), (0x1u));
L_117a929f:;
  /* 117a929f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 117a92a3 jmp 0x117a92af */
  goto L_117a92af;
L_117a92a5:;
  /* 117a92a5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 117a92a9 jmp 0x117a92af */
  goto L_117a92af;
L_117a92ab:;
  /* 117a92ab mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_117a92af:;
  /* 117a92af jmp 0x117a9570 */
  goto L_117a9570;
L_117a92b4:;
  /* 117a92b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a92b7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 117a92ba cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a92be je 0x117a92c8 */
  if (C.zf) goto L_117a92c8;
  /* 117a92c0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a92c4 je 0x117a92ce */
  if (C.zf) goto L_117a92ce;
  /* 117a92c6 jmp 0x117a92d2 */
  goto L_117a92d2;
L_117a92c8:;
  /* 117a92c8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 117a92cc jmp 0x117a92d2 */
  goto L_117a92d2;
L_117a92ce:;
  /* 117a92ce mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_117a92d2:;
  /* 117a92d2 jmp 0x117a9570 */
  goto L_117a9570;
L_117a92d7:;
  /* 117a92d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a92da mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117a92dd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a92e1 je 0x117a92eb */
  if (C.zf) goto L_117a92eb;
  /* 117a92e3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a92e7 je 0x117a92f5 */
  if (C.zf) goto L_117a92f5;
  /* 117a92e9 jmp 0x117a92f9 */
  goto L_117a92f9;
L_117a92eb:;
  /* 117a92eb mov dword ptr [0x117c7f30], 1 */
  w32((uint32_t)(0x117c7f30), (0x1u));
L_117a92f5:;
  /* 117a92f5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_117a92f9:;
  /* 117a92f9 jmp 0x117a9570 */
  goto L_117a9570;
L_117a92fe:;
  /* 117a92fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a9301 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 117a9304 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9308 je 0x117a9312 */
  if (C.zf) goto L_117a9312;
  /* 117a930a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a930e je 0x117a931c */
  if (C.zf) goto L_117a931c;
  /* 117a9310 jmp 0x117a9320 */
  goto L_117a9320;
L_117a9312:;
  /* 117a9312 mov dword ptr [0x117c7f30], 1 */
  w32((uint32_t)(0x117c7f30), (0x1u));
L_117a931c:;
  /* 117a931c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_117a9320:;
  /* 117a9320 jmp 0x117a9570 */
  goto L_117a9570;
L_117a9325:;
  /* 117a9325 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a9328 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 117a932b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a932f je 0x117a9339 */
  if (C.zf) goto L_117a9339;
  /* 117a9331 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9335 je 0x117a9343 */
  if (C.zf) goto L_117a9343;
  /* 117a9337 jmp 0x117a9347 */
  goto L_117a9347;
L_117a9339:;
  /* 117a9339 mov dword ptr [0x117c7f30], 1 */
  w32((uint32_t)(0x117c7f30), (0x1u));
L_117a9343:;
  /* 117a9343 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_117a9347:;
  /* 117a9347 jmp 0x117a9570 */
  goto L_117a9570;
L_117a934c:;
  /* 117a934c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a934f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 117a9352 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9356 je 0x117a9360 */
  if (C.zf) goto L_117a9360;
  /* 117a9358 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a935c je 0x117a936a */
  if (C.zf) goto L_117a936a;
  /* 117a935e jmp 0x117a936e */
  goto L_117a936e;
L_117a9360:;
  /* 117a9360 mov dword ptr [0x117c7f30], 1 */
  w32((uint32_t)(0x117c7f30), (0x1u));
L_117a936a:;
  /* 117a936a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_117a936e:;
  /* 117a936e jmp 0x117a9570 */
  goto L_117a9570;
L_117a9373:;
  /* 117a9373 push 0x117c371c */
  push32((uint32_t)(0x117c371cu));
  /* 117a9378 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a937b push ecx */
  push32((uint32_t)(ECX));
  /* 117a937c call 0x117a9bd0 */
  push32(0x117a9381u); f_117a9bd0();
  /* 117a9381 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9384 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a9386 jne 0x117a9393 */
  if (!C.zf) goto L_117a9393;
  /* 117a9388 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a938b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a938e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a9391 jmp 0x117a93b1 */
  goto L_117a93b1;
L_117a9393:;
  /* 117a9393 push 0x117c3718 */
  push32((uint32_t)(0x117c3718u));
  /* 117a9398 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a939b push eax */
  push32((uint32_t)(EAX));
  /* 117a939c call 0x117a9bd0 */
  push32(0x117a93a1u); f_117a9bd0();
  /* 117a93a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a93a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a93a6 jne 0x117a93b1 */
  if (!C.zf) goto L_117a93b1;
  /* 117a93a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a93ab add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a93ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117a93b1:;
  /* 117a93b1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 117a93b5 jmp 0x117a9570 */
  goto L_117a9570;
L_117a93ba:;
  /* 117a93ba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a93bd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a93c1 jg 0x117a93d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_117a93d1;
  /* 117a93c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a93c6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 117a93cc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117a93cf jmp 0x117a93dd */
  goto L_117a93dd;
L_117a93d1:;
  /* 117a93d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a93d4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 117a93da mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_117a93dd:;
  /* 117a93dd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a93e1 jle 0x117a9484 */
  if ((C.zf||C.sf!=C.of)) goto L_117a9484;
  /* 117a93e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a93ea cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a93ed jbe 0x117a9484 */
  if ((C.cf||C.zf)) goto L_117a9484;
  /* 117a93f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a93f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a93f8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a93fa mov ecx, dword ptr [0x117c5db8] */
  ECX = (r32((uint32_t)(0x117c5db8)));
  /* 117a9400 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a9402 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 117a9406 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 117a940c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a940e je 0x117a9447 */
  if (C.zf) goto L_117a9447;
  /* 117a9410 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a9413 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9416 jbe 0x117a9447 */
  if ((C.cf||C.zf)) goto L_117a9447;
  /* 117a9418 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a941b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a941d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a9420 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a9422 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 117a9424 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9427 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a9429 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a942c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a942f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117a9431 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a9434 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9437 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 117a943a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a943d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a943f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a9442 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a9445 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_117a9447:;
  /* 117a9447 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a944a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a944c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a944f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a9451 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 117a9453 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9456 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a9458 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a945b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a945e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117a9460 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a9463 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9466 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117a9469 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a946c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a946e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a9471 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a9474 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117a9476 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a9479 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a947c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 117a947f jmp 0x117a93dd */
  goto L_117a93dd;
L_117a9484:;
  /* 117a9484 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a9487 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a948a jmp 0x117a91a6 */
  goto L_117a91a6;
L_117a948f:;
  /* 117a948f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a9492 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117a9495 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a9497 je 0x117a9562 */
  if (C.zf) goto L_117a9562;
  /* 117a949d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a94a0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a94a3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_117a94a6:;
  /* 117a94a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a94a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a94ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a94ae je 0x117a9560 */
  if (C.zf) goto L_117a9560;
  /* 117a94b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a94b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a94ba je 0x117a9560 */
  if (C.zf) goto L_117a9560;
  /* 117a94c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a94c3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a94c6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a94c9 jne 0x117a94d9 */
  if (!C.zf) goto L_117a94d9;
  /* 117a94cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a94ce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a94d1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 117a94d4 jmp 0x117a9560 */
  goto L_117a9560;
L_117a94d9:;
  /* 117a94d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a94dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a94de mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a94e0 mov edx, dword ptr [0x117c5db8] */
  EDX = (r32((uint32_t)(0x117c5db8)));
  /* 117a94e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a94e8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 117a94ec and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 117a94f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a94f3 je 0x117a952c */
  if (C.zf) goto L_117a952c;
  /* 117a94f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a94f8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a94fb jbe 0x117a952c */
  if ((C.cf||C.zf)) goto L_117a952c;
  /* 117a94fd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9500 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a9502 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9505 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a9507 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117a9509 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a950c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a950e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9511 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9514 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117a9516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9519 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a951c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a951f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a9522 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a9524 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a9527 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a952a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_117a952c:;
  /* 117a952c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a952f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a9531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9534 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a9536 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 117a9538 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a953b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a953d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9540 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9543 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117a9545 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9548 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a954b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 117a954e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a9551 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a9553 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a9556 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a9559 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117a955b jmp 0x117a94a6 */
  goto L_117a94a6;
L_117a9560:;
  /* 117a9560 jmp 0x117a956b */
  goto L_117a956b;
L_117a9562:;
  /* 117a9562 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9565 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9568 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_117a956b:;
  /* 117a956b jmp 0x117a91a6 */
  goto L_117a91a6;
L_117a9570:;
  /* 117a9570 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 117a9574 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a9576 je 0x117a959c */
  if (C.zf) goto L_117a959c;
  /* 117a9578 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a957b push edx */
  push32((uint32_t)(EDX));
  /* 117a957c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a957f push eax */
  push32((uint32_t)(EAX));
  /* 117a9580 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9583 push ecx */
  push32((uint32_t)(ECX));
  /* 117a9584 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a9587 push edx */
  push32((uint32_t)(EDX));
  /* 117a9588 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 117a958b push eax */
  push32((uint32_t)(EAX));
  /* 117a958c call 0x117a89d0 */
  push32(0x117a9591u); f_117a89d0();
  /* 117a9591 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9594 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a9597 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 117a959a jmp 0x117a9617 */
  goto L_117a9617;
L_117a959c:;
  /* 117a959c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a959f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a95a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a95a3 mov ecx, dword ptr [0x117c5db8] */
  ECX = (r32((uint32_t)(0x117c5db8)));
  /* 117a95a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a95ab mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 117a95af and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 117a95b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a95b7 je 0x117a95e8 */
  if (C.zf) goto L_117a95e8;
  /* 117a95b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a95bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a95be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a95c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a95c3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 117a95c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a95c8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a95ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a95cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a95d0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117a95d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a95d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a95d8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 117a95db mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a95de mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a95e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a95e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a95e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_117a95e8:;
  /* 117a95e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a95eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a95ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a95f0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a95f2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117a95f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a95f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a95f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a95fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a95ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117a9601 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9604 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9607 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a960a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a960d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a960f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a9612 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a9615 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_117a9617:;
  /* 117a9617 jmp 0x117a91a6 */
  goto L_117a91a6;
L_117a961c:;
  /* 117a961c mov esp, ebp */
  ESP = (EBP);
  /* 117a961e pop ebp */
  EBP = (pop32());
  /* 117a961f ret  */
  ESPCHK(0x117a91a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100196c0 @ 0x117a96c0 (650 bytes, 178 insns) */
void f_117a96c0(void) {
  FTRACE(0x117a96c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a96c0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a96c1 mov ebp, esp */
  EBP = (ESP);
  /* 117a96c3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a96c9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a96cd jne 0x117a9829 */
  if (!C.zf) goto L_117a9829;
  /* 117a96d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a96d6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 117a96dc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 117a96e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a96e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a96ec mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 117a96f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a96f8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 117a96fe push edx */
  push32((uint32_t)(EDX));
  /* 117a96ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a9702 push eax */
  push32((uint32_t)(EAX));
  /* 117a9703 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9706 push ecx */
  push32((uint32_t)(ECX));
  /* 117a9707 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a970a push edx */
  push32((uint32_t)(EDX));
  /* 117a970b call 0x117aa020 */
  push32(0x117a9710u); f_117aa020();
  /* 117a9710 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9713 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a9716 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a971a jne 0x117a97af */
  if (!C.zf) goto L_117a97af;
  /* 117a9720 call dword ptr [0x117ca3d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3d8))), 0x117a9726u);
  /* 117a9726 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9729 je 0x117a9730 */
  if (C.zf) goto L_117a9730;
  /* 117a972b jmp 0x117a980d */
  goto L_117a980d;
L_117a9730:;
  /* 117a9730 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9732 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9734 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9736 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9739 push eax */
  push32((uint32_t)(EAX));
  /* 117a973a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a973d push ecx */
  push32((uint32_t)(ECX));
  /* 117a973e call 0x117aa020 */
  push32(0x117a9743u); f_117aa020();
  /* 117a9743 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9746 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 117a974c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9753 jne 0x117a975a */
  if (!C.zf) goto L_117a975a;
  /* 117a9755 jmp 0x117a980d */
  goto L_117a980d;
L_117a975a:;
  /* 117a975a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 117a975c push 0x117c3724 */
  push32((uint32_t)(0x117c3724u));
  /* 117a9761 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a9763 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 117a9769 push edx */
  push32((uint32_t)(EDX));
  /* 117a976a call 0x11799da0 */
  push32(0x117a976fu); f_11799da0();
  /* 117a976f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9772 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a9775 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9779 jne 0x117a9780 */
  if (!C.zf) goto L_117a9780;
  /* 117a977b jmp 0x117a980d */
  goto L_117a980d;
L_117a9780:;
  /* 117a9780 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117a9787 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9789 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 117a978f push eax */
  push32((uint32_t)(EAX));
  /* 117a9790 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a9793 push ecx */
  push32((uint32_t)(ECX));
  /* 117a9794 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9797 push edx */
  push32((uint32_t)(EDX));
  /* 117a9798 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a979b push eax */
  push32((uint32_t)(EAX));
  /* 117a979c call 0x117aa020 */
  push32(0x117a97a1u); f_117aa020();
  /* 117a97a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a97a4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a97a7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a97ab jne 0x117a97af */
  if (!C.zf) goto L_117a97af;
  /* 117a97ad jmp 0x117a980d */
  goto L_117a980d;
L_117a97af:;
  /* 117a97af push 0x63 */
  push32((uint32_t)(0x63u));
  /* 117a97b1 push 0x117c3724 */
  push32((uint32_t)(0x117c3724u));
  /* 117a97b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a97b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a97bb push ecx */
  push32((uint32_t)(ECX));
  /* 117a97bc call 0x11799da0 */
  push32(0x117a97c1u); f_11799da0();
  /* 117a97c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a97c4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 117a97ca mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 117a97cc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 117a97d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a97d5 jne 0x117a97d9 */
  if (!C.zf) goto L_117a97d9;
  /* 117a97d7 jmp 0x117a980d */
  goto L_117a980d;
L_117a97d9:;
  /* 117a97d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a97dc push ecx */
  push32((uint32_t)(ECX));
  /* 117a97dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a97e0 push edx */
  push32((uint32_t)(EDX));
  /* 117a97e1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 117a97e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a97e9 push ecx */
  push32((uint32_t)(ECX));
  /* 117a97ea call 0x1179d5c0 */
  push32(0x117a97efu); f_1179d5c0();
  /* 117a97ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a97f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a97f6 je 0x117a9806 */
  if (C.zf) goto L_117a9806;
  /* 117a97f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a97fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a97fd push edx */
  push32((uint32_t)(EDX));
  /* 117a97fe call 0x1179a830 */
  push32(0x117a9803u); f_1179a830();
  /* 117a9803 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a9806:;
  /* 117a9806 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9808 jmp 0x117a9946 */
  goto L_117a9946;
L_117a980d:;
  /* 117a980d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9811 je 0x117a9821 */
  if (C.zf) goto L_117a9821;
  /* 117a9813 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a9815 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a9818 push eax */
  push32((uint32_t)(EAX));
  /* 117a9819 call 0x1179a830 */
  push32(0x117a981eu); f_1179a830();
  /* 117a981e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a9821:;
  /* 117a9821 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a9824 jmp 0x117a9946 */
  goto L_117a9946;
L_117a9829:;
  /* 117a9829 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a982d jne 0x117a9943 */
  if (!C.zf) goto L_117a9943;
  /* 117a9833 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 117a983d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a9840 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 117a9846 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9848 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 117a984e push edx */
  push32((uint32_t)(EDX));
  /* 117a984f push 0x117c7f08 */
  push32((uint32_t)(0x117c7f08u));
  /* 117a9854 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9857 push eax */
  push32((uint32_t)(EAX));
  /* 117a9858 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a985b push ecx */
  push32((uint32_t)(ECX));
  /* 117a985c call 0x117a9e80 */
  push32(0x117a9861u); f_117a9e80();
  /* 117a9861 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a9866 jne 0x117a9870 */
  if (!C.zf) goto L_117a9870;
  /* 117a9868 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a986b jmp 0x117a9946 */
  goto L_117a9946;
L_117a9870:;
  /* 117a9870 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 117a9876 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 117a9879 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 117a9883 jmp 0x117a9894 */
  goto L_117a9894;
L_117a9885:;
  /* 117a9885 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 117a988b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a988e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_117a9894:;
  /* 117a9894 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a989b jge 0x117a993f */
  if ((C.sf==C.of)) goto L_117a993f;
  /* 117a98a1 cmp dword ptr [0x117c5fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c5fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a98a8 jle 0x117a98db */
  if ((C.zf||C.sf!=C.of)) goto L_117a98db;
  /* 117a98aa push 4 */
  push32((uint32_t)(0x4u));
  /* 117a98ac mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 117a98b2 mov dl, byte ptr [ecx*2 + 0x117c7f08] */
  DL = (r8((uint32_t)(ECX*2 + 0x117c7f08)));
  /* 117a98b9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 117a98bf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 117a98c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a98ca push eax */
  push32((uint32_t)(EAX));
  /* 117a98cb call 0x117a06f0 */
  push32(0x117a98d0u); f_117a06f0();
  /* 117a98d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a98d3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 117a98d9 jmp 0x117a990e */
  goto L_117a990e;
L_117a98db:;
  /* 117a98db mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 117a98e1 mov dl, byte ptr [ecx*2 + 0x117c7f08] */
  DL = (r8((uint32_t)(ECX*2 + 0x117c7f08)));
  /* 117a98e8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 117a98ee mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 117a98f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a98f9 mov ecx, dword ptr [0x117c5db8] */
  ECX = (r32((uint32_t)(0x117c5db8)));
  /* 117a98ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a9901 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 117a9905 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 117a9908 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_117a990e:;
  /* 117a990e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9915 je 0x117a9938 */
  if (C.zf) goto L_117a9938;
  /* 117a9917 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 117a991d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a9920 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a9923 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 117a992a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 117a992e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 117a9934 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 117a9936 jmp 0x117a993a */
  goto L_117a993a;
L_117a9938:;
  /* 117a9938 jmp 0x117a993f */
  goto L_117a993f;
L_117a993a:;
  /* 117a993a jmp 0x117a9885 */
  goto L_117a9885;
L_117a993f:;
  /* 117a993f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9941 jmp 0x117a9946 */
  goto L_117a9946;
L_117a9943:;
  /* 117a9943 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_117a9946:;
  /* 117a9946 mov esp, ebp */
  ESP = (EBP);
  /* 117a9948 pop ebp */
  EBP = (pop32());
  /* 117a9949 ret  */
  ESPCHK(0x117a96c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019950 @ 0x117a9950 (10 bytes, 5 insns) */
void f_117a9950(void) {
  FTRACE(0x117a9950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a9950 push ebp */
  push32((uint32_t)(EBP));
  /* 117a9951 mov ebp, esp */
  EBP = (ESP);
  /* 117a9953 mov eax, dword ptr [0x117c6eb8] */
  EAX = (r32((uint32_t)(0x117c6eb8)));
  /* 117a9958 pop ebp */
  EBP = (pop32());
  /* 117a9959 ret  */
  ESPCHK(0x117a9950u, _esp0);
  ESP += 4; return;
}

/* FUN_10019960 @ 0x117a9960 (575 bytes, 196 insns) */
void f_117a9960(void) {
  FTRACE(0x117a9960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a9960 push ebp */
  push32((uint32_t)(EBP));
  /* 117a9961 mov ebp, esp */
  EBP = (ESP);
  /* 117a9963 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117a9965 push 0x117c3730 */
  push32((uint32_t)(0x117c3730u));
  /* 117a996a push 0x117a3d08 */
  push32((uint32_t)(0x117a3d08u));
  /* 117a996f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117a9975 push eax */
  push32((uint32_t)(EAX));
  /* 117a9976 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117a997d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9980 push ebx */
  push32((uint32_t)(EBX));
  /* 117a9981 push esi */
  push32((uint32_t)(ESI));
  /* 117a9982 push edi */
  push32((uint32_t)(EDI));
  /* 117a9983 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117a9986 cmp dword ptr [0x117c7f14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a998d jne 0x117a99de */
  if (!C.zf) goto L_117a99de;
  /* 117a998f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 117a9992 push eax */
  push32((uint32_t)(EAX));
  /* 117a9993 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a9995 push 0x117c2de8 */
  push32((uint32_t)(0x117c2de8u));
  /* 117a999a push 1 */
  push32((uint32_t)(0x1u));
  /* 117a999c call dword ptr [0x117ca320] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca320))), 0x117a99a2u);
  /* 117a99a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a99a4 je 0x117a99b2 */
  if (C.zf) goto L_117a99b2;
  /* 117a99a6 mov dword ptr [0x117c7f14], 1 */
  w32((uint32_t)(0x117c7f14), (0x1u));
  /* 117a99b0 jmp 0x117a99de */
  goto L_117a99de;
L_117a99b2:;
  /* 117a99b2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 117a99b5 push ecx */
  push32((uint32_t)(ECX));
  /* 117a99b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a99b8 push 0x117c2de4 */
  push32((uint32_t)(0x117c2de4u));
  /* 117a99bd push 1 */
  push32((uint32_t)(0x1u));
  /* 117a99bf push 0 */
  push32((uint32_t)(0x0u));
  /* 117a99c1 call dword ptr [0x117ca324] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca324))), 0x117a99c7u);
  /* 117a99c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a99c9 je 0x117a99d7 */
  if (C.zf) goto L_117a99d7;
  /* 117a99cb mov dword ptr [0x117c7f14], 2 */
  w32((uint32_t)(0x117c7f14), (0x2u));
  /* 117a99d5 jmp 0x117a99de */
  goto L_117a99de;
L_117a99d7:;
  /* 117a99d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a99d9 jmp 0x117a9bb9 */
  goto L_117a9bb9;
L_117a99de:;
  /* 117a99de cmp dword ptr [0x117c7f14], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a99e5 jne 0x117a9a02 */
  if (!C.zf) goto L_117a9a02;
  /* 117a99e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a99ea push edx */
  push32((uint32_t)(EDX));
  /* 117a99eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a99ee push eax */
  push32((uint32_t)(EAX));
  /* 117a99ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a99f2 push ecx */
  push32((uint32_t)(ECX));
  /* 117a99f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a99f6 push edx */
  push32((uint32_t)(EDX));
  /* 117a99f7 call dword ptr [0x117ca320] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca320))), 0x117a99fdu);
  /* 117a99fd jmp 0x117a9bb9 */
  goto L_117a9bb9;
L_117a9a02:;
  /* 117a9a02 cmp dword ptr [0x117c7f14], 2 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9a09 jne 0x117a9bb7 */
  if (!C.zf) goto L_117a9bb7;
  /* 117a9a0f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9a13 jne 0x117a9a1d */
  if (!C.zf) goto L_117a9a1d;
  /* 117a9a15 mov eax, dword ptr [0x117c7e80] */
  EAX = (r32((uint32_t)(0x117c7e80)));
  /* 117a9a1a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_117a9a1d:;
  /* 117a9a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9a25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9a28 push ecx */
  push32((uint32_t)(ECX));
  /* 117a9a29 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a9a2c push edx */
  push32((uint32_t)(EDX));
  /* 117a9a2d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 117a9a32 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a9a35 push eax */
  push32((uint32_t)(EAX));
  /* 117a9a36 call dword ptr [0x117ca374] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca374))), 0x117a9a3cu);
  /* 117a9a3c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117a9a3f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9a43 jne 0x117a9a4c */
  if (!C.zf) goto L_117a9a4c;
  /* 117a9a45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9a47 jmp 0x117a9bb9 */
  goto L_117a9bb9;
L_117a9a4c:;
  /* 117a9a4c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a9a53 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a9a56 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9a59 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117a9a5b call 0x1179cf40 */
  push32(0x117a9a60u); f_1179cf40();
  /* 117a9a60 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 117a9a63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117a9a66 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117a9a69 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 117a9a6c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a9a6f push edx */
  push32((uint32_t)(EDX));
  /* 117a9a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9a72 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117a9a75 push eax */
  push32((uint32_t)(EAX));
  /* 117a9a76 call 0x1179e450 */
  push32(0x117a9a7bu); f_1179e450();
  /* 117a9a7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9a7e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117a9a85 jmp 0x117a9a9e */
  goto L_117a9a9e;
  /* 117a9a87 mov eax, 1 */
  EAX = (0x1u);
  /* 117a9a8c ret  */
  ESPCHK(0x117a9960u, _esp0);
  ESP += 4; return;
  /* 117a9a8d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117a9a90 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 117a9a97 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117a9a9e:;
  /* 117a9a9e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9aa2 jne 0x117a9aab */
  if (!C.zf) goto L_117a9aab;
  /* 117a9aa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9aa6 jmp 0x117a9bb9 */
  goto L_117a9bb9;
L_117a9aab:;
  /* 117a9aab push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9aad push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9aaf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a9ab2 push ecx */
  push32((uint32_t)(ECX));
  /* 117a9ab3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117a9ab6 push edx */
  push32((uint32_t)(EDX));
  /* 117a9ab7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9aba push eax */
  push32((uint32_t)(EAX));
  /* 117a9abb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a9abe push ecx */
  push32((uint32_t)(ECX));
  /* 117a9abf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 117a9ac4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a9ac7 push edx */
  push32((uint32_t)(EDX));
  /* 117a9ac8 call dword ptr [0x117ca374] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca374))), 0x117a9aceu);
  /* 117a9ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a9ad0 jne 0x117a9ad9 */
  if (!C.zf) goto L_117a9ad9;
  /* 117a9ad2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9ad4 jmp 0x117a9bb9 */
  goto L_117a9bb9;
L_117a9ad9:;
  /* 117a9ad9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117a9ae0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a9ae3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 117a9ae7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9aea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117a9aec call 0x1179cf40 */
  push32(0x117a9af1u); f_1179cf40();
  /* 117a9af1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 117a9af4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117a9af7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 117a9afa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 117a9afd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117a9b04 jmp 0x117a9b1d */
  goto L_117a9b1d;
  /* 117a9b06 mov eax, 1 */
  EAX = (0x1u);
  /* 117a9b0b ret  */
  ESPCHK(0x117a9960u, _esp0);
  ESP += 4; return;
  /* 117a9b0c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117a9b0f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 117a9b16 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117a9b1d:;
  /* 117a9b1d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9b21 jne 0x117a9b2a */
  if (!C.zf) goto L_117a9b2a;
  /* 117a9b23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9b25 jmp 0x117a9bb9 */
  goto L_117a9bb9;
L_117a9b2a:;
  /* 117a9b2a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9b2e jne 0x117a9b39 */
  if (!C.zf) goto L_117a9b39;
  /* 117a9b30 mov edx, dword ptr [0x117c7e70] */
  EDX = (r32((uint32_t)(0x117c7e70)));
  /* 117a9b36 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_117a9b39:;
  /* 117a9b39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9b3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a9b3f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 117a9b45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9b48 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a9b4b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 117a9b52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a9b55 push ecx */
  push32((uint32_t)(ECX));
  /* 117a9b56 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a9b59 push edx */
  push32((uint32_t)(EDX));
  /* 117a9b5a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117a9b5d push eax */
  push32((uint32_t)(EAX));
  /* 117a9b5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9b61 push ecx */
  push32((uint32_t)(ECX));
  /* 117a9b62 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117a9b65 push edx */
  push32((uint32_t)(EDX));
  /* 117a9b66 call dword ptr [0x117ca324] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca324))), 0x117a9b6cu);
  /* 117a9b6c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117a9b6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9b72 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a9b75 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a9b77 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 117a9b7c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9b82 je 0x117a9b98 */
  if (C.zf) goto L_117a9b98;
  /* 117a9b84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9b87 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a9b8a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a9b8c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 117a9b90 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9b96 je 0x117a9b9c */
  if (C.zf) goto L_117a9b9c;
L_117a9b98:;
  /* 117a9b98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9b9a jmp 0x117a9bb9 */
  goto L_117a9bb9;
L_117a9b9c:;
  /* 117a9b9c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9b9f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117a9ba1 push eax */
  push32((uint32_t)(EAX));
  /* 117a9ba2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a9ba5 push ecx */
  push32((uint32_t)(ECX));
  /* 117a9ba6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a9ba9 push edx */
  push32((uint32_t)(EDX));
  /* 117a9baa call 0x117a29b0 */
  push32(0x117a9bafu); f_117a29b0();
  /* 117a9baf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9bb2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a9bb5 jmp 0x117a9bb9 */
  goto L_117a9bb9;
L_117a9bb7:;
  /* 117a9bb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a9bb9:;
  /* 117a9bb9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 117a9bbc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a9bbf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117a9bc6 pop edi */
  EDI = (pop32());
  /* 117a9bc7 pop esi */
  ESI = (pop32());
  /* 117a9bc8 pop ebx */
  EBX = (pop32());
  /* 117a9bc9 mov esp, ebp */
  ESP = (EBP);
  /* 117a9bcb pop ebp */
  EBP = (pop32());
  /* 117a9bcc ret  */
  ESPCHK(0x117a9960u, _esp0);
  ESP += 4; return;
}

/* FUN_10019bd0 @ 0x117a9bd0 (208 bytes, 85 insns) */
void f_117a9bd0(void) {
  FTRACE(0x117a9bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a9bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a9bd1 mov ebp, esp */
  EBP = (ESP);
  /* 117a9bd3 push edi */
  push32((uint32_t)(EDI));
  /* 117a9bd4 push esi */
  push32((uint32_t)(ESI));
  /* 117a9bd5 push ebx */
  push32((uint32_t)(EBX));
  /* 117a9bd6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117a9bd9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9bdc lea eax, [0x117c7e68] */
  EAX = ((uint32_t)(0x117c7e68));
  /* 117a9be2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9be6 jne 0x117a9c23 */
  if (!C.zf) goto L_117a9c23;
  /* 117a9be8 mov al, 0xff */
  AL = (0xffu);
  /* 117a9bea mov edi, edi */
  EDI = (EDI);
L_117a9bec:;
  /* 117a9bec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 117a9bee je 0x117a9c1e */
  if (C.zf) goto L_117a9c1e;
  /* 117a9bf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a9bf2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117a9bf3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 117a9bf5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117a9bf6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9bf8 je 0x117a9bec */
  if (C.zf) goto L_117a9bec;
  /* 117a9bfa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117a9bfc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9bfe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117a9c00 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 117a9c03 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 117a9c05 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 117a9c07 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 117a9c09 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117a9c0b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9c0d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117a9c0f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 117a9c12 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 117a9c14 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 117a9c16 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9c18 je 0x117a9bec */
  if (C.zf) goto L_117a9bec;
  /* 117a9c1a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117a9c1c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_117a9c1e:;
  /* 117a9c1e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 117a9c21 jmp 0x117a9c9b */
  goto L_117a9c9b;
L_117a9c23:;
  /* 117a9c23 lock inc dword ptr [0x117c7f44] */
  x86_unimpl("lock inc @ 0x117a9c23");
  /* 117a9c2a cmp dword ptr [0x117c7f34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9c31 jg 0x117a9c37 */
  if ((!C.zf&&C.sf==C.of)) goto L_117a9c37;
  /* 117a9c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9c35 jmp 0x117a9c4c */
  goto L_117a9c4c;
L_117a9c37:;
  /* 117a9c37 lock dec dword ptr [0x117c7f44] */
  x86_unimpl("lock dec @ 0x117a9c37");
  /* 117a9c3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117a9c40 call 0x1179d7a0 */
  push32(0x117a9c45u); f_1179d7a0();
  /* 117a9c45 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_117a9c4c:;
  /* 117a9c4c mov eax, 0xff */
  EAX = (0xffu);
  /* 117a9c51 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117a9c53 nop  */
  /* nop */
L_117a9c54:;
  /* 117a9c54 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 117a9c56 je 0x117a9c7f */
  if (C.zf) goto L_117a9c7f;
  /* 117a9c58 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a9c5a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117a9c5b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 117a9c5d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117a9c5e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9c60 je 0x117a9c54 */
  if (C.zf) goto L_117a9c54;
  /* 117a9c62 push eax */
  push32((uint32_t)(EAX));
  /* 117a9c63 push ebx */
  push32((uint32_t)(EBX));
  /* 117a9c64 call 0x117aa280 */
  push32(0x117a9c69u); f_117aa280();
  /* 117a9c69 mov ebx, eax */
  EBX = (EAX);
  /* 117a9c6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9c6e call 0x117aa280 */
  push32(0x117a9c73u); f_117aa280();
  /* 117a9c73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9c76 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9c78 je 0x117a9c54 */
  if (C.zf) goto L_117a9c54;
  /* 117a9c7a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a9c7c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_117a9c7f:;
  /* 117a9c7f mov ebx, eax */
  EBX = (EAX);
  /* 117a9c81 pop eax */
  EAX = (pop32());
  /* 117a9c82 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9c84 jne 0x117a9c8f */
  if (!C.zf) goto L_117a9c8f;
  /* 117a9c86 lock dec dword ptr [0x117c7f44] */
  x86_unimpl("lock dec @ 0x117a9c86");
  /* 117a9c8d jmp 0x117a9c99 */
  goto L_117a9c99;
L_117a9c8f:;
  /* 117a9c8f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117a9c91 call 0x1179d840 */
  push32(0x117a9c96u); f_1179d840();
  /* 117a9c96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a9c99:;
  /* 117a9c99 mov eax, ebx */
  EAX = (EBX);
L_117a9c9b:;
  /* 117a9c9b pop ebx */
  EBX = (pop32());
  /* 117a9c9c pop esi */
  ESI = (pop32());
  /* 117a9c9d pop edi */
  EDI = (pop32());
  /* 117a9c9e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a9c9f ret  */
  ESPCHK(0x117a9bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019ca0 @ 0x117a9ca0 (257 bytes, 103 insns) */
void f_117a9ca0(void) {
  FTRACE(0x117a9ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a9ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a9ca1 mov ebp, esp */
  EBP = (ESP);
  /* 117a9ca3 push edi */
  push32((uint32_t)(EDI));
  /* 117a9ca4 push esi */
  push32((uint32_t)(ESI));
  /* 117a9ca5 push ebx */
  push32((uint32_t)(EBX));
  /* 117a9ca6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9ca9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a9cab je 0x117a9d9a */
  if (C.zf) goto L_117a9d9a;
  /* 117a9cb1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9cb4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 117a9cb7 lea eax, [0x117c7e68] */
  EAX = ((uint32_t)(0x117c7e68));
  /* 117a9cbd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9cc1 jne 0x117a9d11 */
  if (!C.zf) goto L_117a9d11;
  /* 117a9cc3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 117a9cc5 mov bl, 0x5a */
  BL = (0x5au);
  /* 117a9cc7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 117a9cc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a9ccc:;
  /* 117a9ccc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 117a9cce or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 117a9cd0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 117a9cd2 je 0x117a9cf5 */
  if (C.zf) goto L_117a9cf5;
  /* 117a9cd4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 117a9cd6 je 0x117a9cf5 */
  if (C.zf) goto L_117a9cf5;
  /* 117a9cd8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117a9cd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117a9cda cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9cdc jb 0x117a9ce4 */
  if (C.cf) goto L_117a9ce4;
  /* 117a9cde cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9ce0 ja 0x117a9ce4 */
  if ((!C.cf&&!C.zf)) goto L_117a9ce4;
  /* 117a9ce2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_117a9ce4:;
  /* 117a9ce4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9ce6 jb 0x117a9cee */
  if (C.cf) goto L_117a9cee;
  /* 117a9ce8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9cea ja 0x117a9cee */
  if ((!C.cf&&!C.zf)) goto L_117a9cee;
  /* 117a9cec add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_117a9cee:;
  /* 117a9cee cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9cf0 jne 0x117a9cff */
  if (!C.zf) goto L_117a9cff;
  /* 117a9cf2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117a9cf3 jne 0x117a9ccc */
  if (!C.zf) goto L_117a9ccc;
L_117a9cf5:;
  /* 117a9cf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a9cf7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9cf9 je 0x117a9d9a */
  if (C.zf) goto L_117a9d9a;
L_117a9cff:;
  /* 117a9cff mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 117a9d04 jb 0x117a9d9a */
  if (C.cf) goto L_117a9d9a;
  /* 117a9d0a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a9d0c jmp 0x117a9d9a */
  goto L_117a9d9a;
L_117a9d11:;
  /* 117a9d11 lock inc dword ptr [0x117c7f44] */
  x86_unimpl("lock inc @ 0x117a9d11");
  /* 117a9d18 cmp dword ptr [0x117c7f34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9d1f jg 0x117a9d25 */
  if ((!C.zf&&C.sf==C.of)) goto L_117a9d25;
  /* 117a9d21 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9d23 jmp 0x117a9d3e */
  goto L_117a9d3e;
L_117a9d25:;
  /* 117a9d25 lock dec dword ptr [0x117c7f44] */
  x86_unimpl("lock dec @ 0x117a9d25");
  /* 117a9d2c mov ebx, ecx */
  EBX = (ECX);
  /* 117a9d2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117a9d30 call 0x1179d7a0 */
  push32(0x117a9d35u); f_1179d7a0();
  /* 117a9d35 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 117a9d3c mov ecx, ebx */
  ECX = (EBX);
L_117a9d3e:;
  /* 117a9d3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9d40 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117a9d42 mov edi, edi */
  EDI = (EDI);
L_117a9d44:;
  /* 117a9d44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a9d46 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9d48 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 117a9d4a je 0x117a9d6f */
  if (C.zf) goto L_117a9d6f;
  /* 117a9d4c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117a9d4e je 0x117a9d6f */
  if (C.zf) goto L_117a9d6f;
  /* 117a9d50 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117a9d51 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117a9d52 push ecx */
  push32((uint32_t)(ECX));
  /* 117a9d53 push eax */
  push32((uint32_t)(EAX));
  /* 117a9d54 push ebx */
  push32((uint32_t)(EBX));
  /* 117a9d55 call 0x117aa280 */
  push32(0x117a9d5au); f_117aa280();
  /* 117a9d5a mov ebx, eax */
  EBX = (EAX);
  /* 117a9d5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9d5f call 0x117aa280 */
  push32(0x117a9d64u); f_117aa280();
  /* 117a9d64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9d67 pop ecx */
  ECX = (pop32());
  /* 117a9d68 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9d6a jne 0x117a9d75 */
  if (!C.zf) goto L_117a9d75;
  /* 117a9d6c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117a9d6d jne 0x117a9d44 */
  if (!C.zf) goto L_117a9d44;
L_117a9d6f:;
  /* 117a9d6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a9d71 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9d73 je 0x117a9d7e */
  if (C.zf) goto L_117a9d7e;
L_117a9d75:;
  /* 117a9d75 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 117a9d7a jb 0x117a9d7e */
  if (C.cf) goto L_117a9d7e;
  /* 117a9d7c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_117a9d7e:;
  /* 117a9d7e pop eax */
  EAX = (pop32());
  /* 117a9d7f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9d81 jne 0x117a9d8c */
  if (!C.zf) goto L_117a9d8c;
  /* 117a9d83 lock dec dword ptr [0x117c7f44] */
  x86_unimpl("lock dec @ 0x117a9d83");
  /* 117a9d8a jmp 0x117a9d9a */
  goto L_117a9d9a;
L_117a9d8c:;
  /* 117a9d8c mov ebx, ecx */
  EBX = (ECX);
  /* 117a9d8e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117a9d90 call 0x1179d840 */
  push32(0x117a9d95u); f_1179d840();
  /* 117a9d95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9d98 mov ecx, ebx */
  ECX = (EBX);
L_117a9d9a:;
  /* 117a9d9a mov eax, ecx */
  EAX = (ECX);
  /* 117a9d9c pop ebx */
  EBX = (pop32());
  /* 117a9d9d pop esi */
  ESI = (pop32());
  /* 117a9d9e pop edi */
  EDI = (pop32());
  /* 117a9d9f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a9da0 ret  */
  ESPCHK(0x117a9ca0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x117a9dc0 (193 bytes, 91 insns) */
void f_117a9dc0(void) {
  FTRACE(0x117a9dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a9dc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9dc2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 117a9dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 117a9dc7 mov ebx, eax */
  EBX = (EAX);
  /* 117a9dc9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 117a9dcc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 117a9dd0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 117a9dd6 je 0x117a9deb */
  if (C.zf) goto L_117a9deb;
L_117a9dd8:;
  /* 117a9dd8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 117a9dda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 117a9ddb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9ddd je 0x117a9db0 */
  if (C.zf) { jmp_ind(0x117a9db0u); return; }
  /* 117a9ddf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 117a9de1 je 0x117a9e34 */
  if (C.zf) goto L_117a9e34;
  /* 117a9de3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 117a9de9 jne 0x117a9dd8 */
  if (!C.zf) goto L_117a9dd8;
L_117a9deb:;
  /* 117a9deb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 117a9ded push edi */
  push32((uint32_t)(EDI));
  /* 117a9dee mov eax, ebx */
  EAX = (EBX);
  /* 117a9df0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 117a9df3 push esi */
  push32((uint32_t)(ESI));
  /* 117a9df4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_117a9df6:;
  /* 117a9df6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 117a9df8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 117a9dfd mov eax, ecx */
  EAX = (ECX);
  /* 117a9dff mov esi, edi */
  ESI = (EDI);
  /* 117a9e01 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 117a9e03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9e05 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9e07 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117a9e0a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a9e0d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 117a9e0f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 117a9e11 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9e14 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 117a9e1a jne 0x117a9e38 */
  if (!C.zf) goto L_117a9e38;
  /* 117a9e1c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 117a9e21 je 0x117a9df6 */
  if (C.zf) goto L_117a9df6;
  /* 117a9e23 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 117a9e28 jne 0x117a9e32 */
  if (!C.zf) goto L_117a9e32;
  /* 117a9e2a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 117a9e30 jne 0x117a9df6 */
  if (!C.zf) goto L_117a9df6;
L_117a9e32:;
  /* 117a9e32 pop esi */
  ESI = (pop32());
  /* 117a9e33 pop edi */
  EDI = (pop32());
L_117a9e34:;
  /* 117a9e34 pop ebx */
  EBX = (pop32());
  /* 117a9e35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9e37 ret  */
  ESPCHK(0x117a9dc0u, _esp0);
  ESP += 4; return;
L_117a9e38:;
  /* 117a9e38 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 117a9e3b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9e3d je 0x117a9e75 */
  if (C.zf) goto L_117a9e75;
  /* 117a9e3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117a9e41 je 0x117a9e32 */
  if (C.zf) goto L_117a9e32;
  /* 117a9e43 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9e45 je 0x117a9e6e */
  if (C.zf) goto L_117a9e6e;
  /* 117a9e47 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 117a9e49 je 0x117a9e32 */
  if (C.zf) goto L_117a9e32;
  /* 117a9e4b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 117a9e4e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9e50 je 0x117a9e67 */
  if (C.zf) goto L_117a9e67;
  /* 117a9e52 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117a9e54 je 0x117a9e32 */
  if (C.zf) goto L_117a9e32;
  /* 117a9e56 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a9e58 je 0x117a9e60 */
  if (C.zf) goto L_117a9e60;
  /* 117a9e5a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 117a9e5c je 0x117a9e32 */
  if (C.zf) goto L_117a9e32;
  /* 117a9e5e jmp 0x117a9df6 */
  goto L_117a9df6;
L_117a9e60:;
  /* 117a9e60 pop esi */
  ESI = (pop32());
  /* 117a9e61 pop edi */
  EDI = (pop32());
  /* 117a9e62 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 117a9e65 pop ebx */
  EBX = (pop32());
  /* 117a9e66 ret  */
  ESPCHK(0x117a9dc0u, _esp0);
  ESP += 4; return;
L_117a9e67:;
  /* 117a9e67 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 117a9e6a pop esi */
  ESI = (pop32());
  /* 117a9e6b pop edi */
  EDI = (pop32());
  /* 117a9e6c pop ebx */
  EBX = (pop32());
  /* 117a9e6d ret  */
  ESPCHK(0x117a9dc0u, _esp0);
  ESP += 4; return;
L_117a9e6e:;
  /* 117a9e6e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 117a9e71 pop esi */
  ESI = (pop32());
  /* 117a9e72 pop edi */
  EDI = (pop32());
  /* 117a9e73 pop ebx */
  EBX = (pop32());
  /* 117a9e74 ret  */
  ESPCHK(0x117a9dc0u, _esp0);
  ESP += 4; return;
L_117a9e75:;
  /* 117a9e75 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 117a9e78 pop esi */
  ESI = (pop32());
  /* 117a9e79 pop edi */
  EDI = (pop32());
  /* 117a9e7a pop ebx */
  EBX = (pop32());
  /* 117a9e7b ret  */
  ESPCHK(0x117a9dc0u, _esp0);
  ESP += 4; return;
  /* 117a9e7c int3  */
  x86_unimpl("int3 @ 0x117a9e7c");
  /* 117a9e7d int3  */
  x86_unimpl("int3 @ 0x117a9e7d");
  /* 117a9e7e int3  */
  x86_unimpl("int3 @ 0x117a9e7e");
  /* 117a9e7f int3  */
  x86_unimpl("int3 @ 0x117a9e7f");
  /* 117a9e80 push ebp */
  push32((uint32_t)(EBP));
}

/* FUN_10019e80 @ 0x117a9e80 (382 bytes, 135 insns) */
void f_117a9e80(void) {
  FTRACE(0x117a9e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a9e80 push ebp */
  push32((uint32_t)(EBP));
  /* 117a9e81 mov ebp, esp */
  EBP = (ESP);
  /* 117a9e83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117a9e85 push 0x117c3748 */
  push32((uint32_t)(0x117c3748u));
  /* 117a9e8a push 0x117a3d08 */
  push32((uint32_t)(0x117a3d08u));
  /* 117a9e8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117a9e95 push eax */
  push32((uint32_t)(EAX));
  /* 117a9e96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117a9e9d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9ea0 push ebx */
  push32((uint32_t)(EBX));
  /* 117a9ea1 push esi */
  push32((uint32_t)(ESI));
  /* 117a9ea2 push edi */
  push32((uint32_t)(EDI));
  /* 117a9ea3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117a9ea6 cmp dword ptr [0x117c7f18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9ead jne 0x117a9ef2 */
  if (!C.zf) goto L_117a9ef2;
  /* 117a9eaf push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9eb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9eb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a9eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9eb7 call dword ptr [0x117ca2d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2d8))), 0x117a9ebdu);
  /* 117a9ebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a9ebf je 0x117a9ecd */
  if (C.zf) goto L_117a9ecd;
  /* 117a9ec1 mov dword ptr [0x117c7f18], 1 */
  w32((uint32_t)(0x117c7f18), (0x1u));
  /* 117a9ecb jmp 0x117a9ef2 */
  goto L_117a9ef2;
L_117a9ecd:;
  /* 117a9ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9ed1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a9ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9ed5 call dword ptr [0x117ca2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2ec))), 0x117a9edbu);
  /* 117a9edb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a9edd je 0x117a9eeb */
  if (C.zf) goto L_117a9eeb;
  /* 117a9edf mov dword ptr [0x117c7f18], 2 */
  w32((uint32_t)(0x117c7f18), (0x2u));
  /* 117a9ee9 jmp 0x117a9ef2 */
  goto L_117a9ef2;
L_117a9eeb:;
  /* 117a9eeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9eed jmp 0x117aa001 */
  goto L_117aa001;
L_117a9ef2:;
  /* 117a9ef2 cmp dword ptr [0x117c7f18], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9ef9 jne 0x117a9f16 */
  if (!C.zf) goto L_117a9f16;
  /* 117a9efb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a9efe push eax */
  push32((uint32_t)(EAX));
  /* 117a9eff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9f02 push ecx */
  push32((uint32_t)(ECX));
  /* 117a9f03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a9f06 push edx */
  push32((uint32_t)(EDX));
  /* 117a9f07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9f0a push eax */
  push32((uint32_t)(EAX));
  /* 117a9f0b call dword ptr [0x117ca2d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2d8))), 0x117a9f11u);
  /* 117a9f11 jmp 0x117aa001 */
  goto L_117aa001;
L_117a9f16:;
  /* 117a9f16 cmp dword ptr [0x117c7f18], 2 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9f1d jne 0x117a9fff */
  if (!C.zf) goto L_117a9fff;
  /* 117a9f23 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9f27 jne 0x117a9f32 */
  if (!C.zf) goto L_117a9f32;
  /* 117a9f29 mov ecx, dword ptr [0x117c7e80] */
  ECX = (r32((uint32_t)(0x117c7e80)));
  /* 117a9f2f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_117a9f32:;
  /* 117a9f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9f36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a9f39 push edx */
  push32((uint32_t)(EDX));
  /* 117a9f3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9f3d push eax */
  push32((uint32_t)(EAX));
  /* 117a9f3e call dword ptr [0x117ca2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2ec))), 0x117a9f44u);
  /* 117a9f44 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 117a9f47 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9f4b jne 0x117a9f54 */
  if (!C.zf) goto L_117a9f54;
  /* 117a9f4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9f4f jmp 0x117aa001 */
  goto L_117aa001;
L_117a9f54:;
  /* 117a9f54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a9f5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a9f5e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a9f61 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117a9f63 call 0x1179cf40 */
  push32(0x117a9f68u); f_1179cf40();
  /* 117a9f68 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 117a9f6b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117a9f6e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a9f71 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 117a9f74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117a9f7b jmp 0x117a9f94 */
  goto L_117a9f94;
  /* 117a9f7d mov eax, 1 */
  EAX = (0x1u);
  /* 117a9f82 ret  */
  ESPCHK(0x117a9e80u, _esp0);
  ESP += 4; return;
  /* 117a9f83 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117a9f86 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 117a9f8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117a9f94:;
  /* 117a9f94 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9f98 jne 0x117a9f9e */
  if (!C.zf) goto L_117a9f9e;
  /* 117a9f9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9f9c jmp 0x117aa001 */
  goto L_117aa001;
L_117a9f9e:;
  /* 117a9f9e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a9fa1 push edx */
  push32((uint32_t)(EDX));
  /* 117a9fa2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a9fa5 push eax */
  push32((uint32_t)(EAX));
  /* 117a9fa6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a9fa9 push ecx */
  push32((uint32_t)(ECX));
  /* 117a9faa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a9fad push edx */
  push32((uint32_t)(EDX));
  /* 117a9fae call dword ptr [0x117ca2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2ec))), 0x117a9fb4u);
  /* 117a9fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a9fb6 jne 0x117a9fbc */
  if (!C.zf) goto L_117a9fbc;
  /* 117a9fb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a9fba jmp 0x117aa001 */
  goto L_117aa001;
L_117a9fbc:;
  /* 117a9fbc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a9fc0 jne 0x117a9fdd */
  if (!C.zf) goto L_117a9fdd;
  /* 117a9fc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a9fc6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117a9fc8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a9fcb push eax */
  push32((uint32_t)(EAX));
  /* 117a9fcc push 1 */
  push32((uint32_t)(0x1u));
  /* 117a9fce mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a9fd1 push ecx */
  push32((uint32_t)(ECX));
  /* 117a9fd2 call dword ptr [0x117ca328] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca328))), 0x117a9fd8u);
  /* 117a9fd8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117a9fdb jmp 0x117a9ffa */
  goto L_117a9ffa;
L_117a9fdd:;
  /* 117a9fdd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a9fe0 push edx */
  push32((uint32_t)(EDX));
  /* 117a9fe1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a9fe4 push eax */
  push32((uint32_t)(EAX));
  /* 117a9fe5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117a9fe7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a9fea push ecx */
  push32((uint32_t)(ECX));
  /* 117a9feb push 1 */
  push32((uint32_t)(0x1u));
  /* 117a9fed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a9ff0 push edx */
  push32((uint32_t)(EDX));
  /* 117a9ff1 call dword ptr [0x117ca328] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca328))), 0x117a9ff7u);
  /* 117a9ff7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_117a9ffa:;
  /* 117a9ffa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a9ffd jmp 0x117aa001 */
  goto L_117aa001;
L_117a9fff:;
  /* 117a9fff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117aa001:;
  /* 117aa001 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 117aa004 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117aa007 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117aa00e pop edi */
  EDI = (pop32());
  /* 117aa00f pop esi */
  ESI = (pop32());
  /* 117aa010 pop ebx */
  EBX = (pop32());
  /* 117aa011 mov esp, ebp */
  ESP = (EBP);
  /* 117aa013 pop ebp */
  EBP = (pop32());
  /* 117aa014 ret  */
  ESPCHK(0x117a9e80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a020 @ 0x117aa020 (398 bytes, 140 insns) */
void f_117aa020(void) {
  FTRACE(0x117aa020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117aa020 push ebp */
  push32((uint32_t)(EBP));
  /* 117aa021 mov ebp, esp */
  EBP = (ESP);
  /* 117aa023 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117aa025 push 0x117c3758 */
  push32((uint32_t)(0x117c3758u));
  /* 117aa02a push 0x117a3d08 */
  push32((uint32_t)(0x117a3d08u));
  /* 117aa02f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117aa035 push eax */
  push32((uint32_t)(EAX));
  /* 117aa036 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117aa03d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117aa040 push ebx */
  push32((uint32_t)(EBX));
  /* 117aa041 push esi */
  push32((uint32_t)(ESI));
  /* 117aa042 push edi */
  push32((uint32_t)(EDI));
  /* 117aa043 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117aa046 cmp dword ptr [0x117c7f1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa04d jne 0x117aa092 */
  if (!C.zf) goto L_117aa092;
  /* 117aa04f push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa051 push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa053 push 1 */
  push32((uint32_t)(0x1u));
  /* 117aa055 push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa057 call dword ptr [0x117ca2d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2d8))), 0x117aa05du);
  /* 117aa05d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117aa05f je 0x117aa06d */
  if (C.zf) goto L_117aa06d;
  /* 117aa061 mov dword ptr [0x117c7f1c], 1 */
  w32((uint32_t)(0x117c7f1c), (0x1u));
  /* 117aa06b jmp 0x117aa092 */
  goto L_117aa092;
L_117aa06d:;
  /* 117aa06d push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa06f push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa071 push 1 */
  push32((uint32_t)(0x1u));
  /* 117aa073 push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa075 call dword ptr [0x117ca2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2ec))), 0x117aa07bu);
  /* 117aa07b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117aa07d je 0x117aa08b */
  if (C.zf) goto L_117aa08b;
  /* 117aa07f mov dword ptr [0x117c7f1c], 2 */
  w32((uint32_t)(0x117c7f1c), (0x2u));
  /* 117aa089 jmp 0x117aa092 */
  goto L_117aa092;
L_117aa08b:;
  /* 117aa08b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117aa08d jmp 0x117aa1b1 */
  goto L_117aa1b1;
L_117aa092:;
  /* 117aa092 cmp dword ptr [0x117c7f1c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f1c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa099 jne 0x117aa0b6 */
  if (!C.zf) goto L_117aa0b6;
  /* 117aa09b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117aa09e push eax */
  push32((uint32_t)(EAX));
  /* 117aa09f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117aa0a2 push ecx */
  push32((uint32_t)(ECX));
  /* 117aa0a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117aa0a6 push edx */
  push32((uint32_t)(EDX));
  /* 117aa0a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa0aa push eax */
  push32((uint32_t)(EAX));
  /* 117aa0ab call dword ptr [0x117ca2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2ec))), 0x117aa0b1u);
  /* 117aa0b1 jmp 0x117aa1b1 */
  goto L_117aa1b1;
L_117aa0b6:;
  /* 117aa0b6 cmp dword ptr [0x117c7f1c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa0bd jne 0x117aa1af */
  if (!C.zf) goto L_117aa1af;
  /* 117aa0c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa0c7 jne 0x117aa0d2 */
  if (!C.zf) goto L_117aa0d2;
  /* 117aa0c9 mov ecx, dword ptr [0x117c7e80] */
  ECX = (r32((uint32_t)(0x117c7e80)));
  /* 117aa0cf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_117aa0d2:;
  /* 117aa0d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa0d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa0d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117aa0d9 push edx */
  push32((uint32_t)(EDX));
  /* 117aa0da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa0dd push eax */
  push32((uint32_t)(EAX));
  /* 117aa0de call dword ptr [0x117ca2d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2d8))), 0x117aa0e4u);
  /* 117aa0e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 117aa0e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa0eb jne 0x117aa0f4 */
  if (!C.zf) goto L_117aa0f4;
  /* 117aa0ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117aa0ef jmp 0x117aa1b1 */
  goto L_117aa1b1;
L_117aa0f4:;
  /* 117aa0f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117aa0fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117aa0fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117aa100 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117aa103 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117aa105 call 0x1179cf40 */
  push32(0x117aa10au); f_1179cf40();
  /* 117aa10a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 117aa10d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117aa110 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117aa113 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 117aa116 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117aa11d jmp 0x117aa136 */
  goto L_117aa136;
  /* 117aa11f mov eax, 1 */
  EAX = (0x1u);
  /* 117aa124 ret  */
  ESPCHK(0x117aa020u, _esp0);
  ESP += 4; return;
  /* 117aa125 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117aa128 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 117aa12f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117aa136:;
  /* 117aa136 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa13a jne 0x117aa140 */
  if (!C.zf) goto L_117aa140;
  /* 117aa13c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117aa13e jmp 0x117aa1b1 */
  goto L_117aa1b1;
L_117aa140:;
  /* 117aa140 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117aa143 push edx */
  push32((uint32_t)(EDX));
  /* 117aa144 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117aa147 push eax */
  push32((uint32_t)(EAX));
  /* 117aa148 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117aa14b push ecx */
  push32((uint32_t)(ECX));
  /* 117aa14c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa14f push edx */
  push32((uint32_t)(EDX));
  /* 117aa150 call dword ptr [0x117ca2d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2d8))), 0x117aa156u);
  /* 117aa156 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117aa158 jne 0x117aa15e */
  if (!C.zf) goto L_117aa15e;
  /* 117aa15a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117aa15c jmp 0x117aa1b1 */
  goto L_117aa1b1;
L_117aa15e:;
  /* 117aa15e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa162 jne 0x117aa186 */
  if (!C.zf) goto L_117aa186;
  /* 117aa164 push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa166 push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa168 push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa16a push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa16c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117aa16e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117aa171 push eax */
  push32((uint32_t)(EAX));
  /* 117aa172 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 117aa177 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117aa17a push ecx */
  push32((uint32_t)(ECX));
  /* 117aa17b call dword ptr [0x117ca374] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca374))), 0x117aa181u);
  /* 117aa181 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117aa184 jmp 0x117aa1aa */
  goto L_117aa1aa;
L_117aa186:;
  /* 117aa186 push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa188 push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa18a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117aa18d push edx */
  push32((uint32_t)(EDX));
  /* 117aa18e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117aa191 push eax */
  push32((uint32_t)(EAX));
  /* 117aa192 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117aa194 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117aa197 push ecx */
  push32((uint32_t)(ECX));
  /* 117aa198 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 117aa19d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117aa1a0 push edx */
  push32((uint32_t)(EDX));
  /* 117aa1a1 call dword ptr [0x117ca374] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca374))), 0x117aa1a7u);
  /* 117aa1a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_117aa1aa:;
  /* 117aa1aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117aa1ad jmp 0x117aa1b1 */
  goto L_117aa1b1;
L_117aa1af:;
  /* 117aa1af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117aa1b1:;
  /* 117aa1b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 117aa1b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117aa1b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117aa1be pop edi */
  EDI = (pop32());
  /* 117aa1bf pop esi */
  ESI = (pop32());
  /* 117aa1c0 pop ebx */
  EBX = (pop32());
  /* 117aa1c1 mov esp, ebp */
  ESP = (EBP);
  /* 117aa1c3 pop ebp */
  EBP = (pop32());
  /* 117aa1c4 ret  */
  ESPCHK(0x117aa020u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a1d0 @ 0x117aa1d0 (11 bytes, 6 insns) */
void f_117aa1d0(void) {
  FTRACE(0x117aa1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117aa1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117aa1d1 mov ebp, esp */
  EBP = (ESP);
  /* 117aa1d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa1d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117aa1d9 pop ebp */
  EBP = (pop32());
  /* 117aa1da ret  */
  ESPCHK(0x117aa1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a1e0 @ 0x117aa1e0 (147 bytes, 43 insns) */
void f_117aa1e0(void) {
  FTRACE(0x117aa1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117aa1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117aa1e1 mov ebp, esp */
  EBP = (ESP);
  /* 117aa1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 117aa1e4 cmp dword ptr [0x117c7e70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa1eb jne 0x117aa207 */
  if (!C.zf) goto L_117aa207;
  /* 117aa1ed cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa1f1 jl 0x117aa202 */
  if ((C.sf!=C.of)) goto L_117aa202;
  /* 117aa1f3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa1f7 jg 0x117aa202 */
  if ((!C.zf&&C.sf==C.of)) goto L_117aa202;
  /* 117aa1f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa1fc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117aa1ff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_117aa202:;
  /* 117aa202 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa205 jmp 0x117aa26f */
  goto L_117aa26f;
L_117aa207:;
  /* 117aa207 push 0x117c7f44 */
  push32((uint32_t)(0x117c7f44u));
  /* 117aa20c call dword ptr [0x117ca3b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3b8))), 0x117aa212u);
  /* 117aa212 cmp dword ptr [0x117c7f34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa219 je 0x117aa239 */
  if (C.zf) goto L_117aa239;
  /* 117aa21b push 0x117c7f44 */
  push32((uint32_t)(0x117c7f44u));
  /* 117aa220 call dword ptr [0x117ca3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3a8))), 0x117aa226u);
  /* 117aa226 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117aa228 call 0x1179d7a0 */
  push32(0x117aa22du); f_1179d7a0();
  /* 117aa22d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117aa230 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117aa237 jmp 0x117aa240 */
  goto L_117aa240;
L_117aa239:;
  /* 117aa239 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117aa240:;
  /* 117aa240 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa243 push ecx */
  push32((uint32_t)(ECX));
  /* 117aa244 call 0x117aa280 */
  push32(0x117aa249u); f_117aa280();
  /* 117aa249 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117aa24c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117aa24f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa253 je 0x117aa261 */
  if (C.zf) goto L_117aa261;
  /* 117aa255 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117aa257 call 0x1179d840 */
  push32(0x117aa25cu); f_1179d840();
  /* 117aa25c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117aa25f jmp 0x117aa26c */
  goto L_117aa26c;
L_117aa261:;
  /* 117aa261 push 0x117c7f44 */
  push32((uint32_t)(0x117c7f44u));
  /* 117aa266 call dword ptr [0x117ca3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3a8))), 0x117aa26cu);
L_117aa26c:;
  /* 117aa26c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_117aa26f:;
  /* 117aa26f mov esp, ebp */
  ESP = (EBP);
  /* 117aa271 pop ebp */
  EBP = (pop32());
  /* 117aa272 ret  */
  ESPCHK(0x117aa1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a280 @ 0x117aa280 (299 bytes, 91 insns) */
void f_117aa280(void) {
  FTRACE(0x117aa280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117aa280 push ebp */
  push32((uint32_t)(EBP));
  /* 117aa281 mov ebp, esp */
  EBP = (ESP);
  /* 117aa283 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117aa286 cmp dword ptr [0x117c7e70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa28d jne 0x117aa2ac */
  if (!C.zf) goto L_117aa2ac;
  /* 117aa28f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa293 jl 0x117aa2a4 */
  if ((C.sf!=C.of)) goto L_117aa2a4;
  /* 117aa295 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa299 jg 0x117aa2a4 */
  if ((!C.zf&&C.sf==C.of)) goto L_117aa2a4;
  /* 117aa29b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa29e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117aa2a1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_117aa2a4:;
  /* 117aa2a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa2a7 jmp 0x117aa3a7 */
  goto L_117aa3a7;
L_117aa2ac:;
  /* 117aa2ac cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa2b3 jge 0x117aa2f3 */
  if ((C.sf==C.of)) goto L_117aa2f3;
  /* 117aa2b5 cmp dword ptr [0x117c5fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c5fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa2bc jle 0x117aa2d1 */
  if ((C.zf||C.sf!=C.of)) goto L_117aa2d1;
  /* 117aa2be push 1 */
  push32((uint32_t)(0x1u));
  /* 117aa2c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 117aa2c4 call 0x117a06f0 */
  push32(0x117aa2c9u); f_117a06f0();
  /* 117aa2c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117aa2cc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117aa2cf jmp 0x117aa2e5 */
  goto L_117aa2e5;
L_117aa2d1:;
  /* 117aa2d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa2d4 mov eax, dword ptr [0x117c5db8] */
  EAX = (r32((uint32_t)(0x117c5db8)));
  /* 117aa2d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117aa2db mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 117aa2df and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117aa2e2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_117aa2e5:;
  /* 117aa2e5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa2e9 jne 0x117aa2f3 */
  if (!C.zf) goto L_117aa2f3;
  /* 117aa2eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa2ee jmp 0x117aa3a7 */
  goto L_117aa3a7;
L_117aa2f3:;
  /* 117aa2f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa2f6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 117aa2f9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117aa2ff and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117aa305 mov eax, dword ptr [0x117c5db8] */
  EAX = (r32((uint32_t)(0x117c5db8)));
  /* 117aa30a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117aa30c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 117aa310 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 117aa316 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117aa318 je 0x117aa33c */
  if (C.zf) goto L_117aa33c;
  /* 117aa31a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa31d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 117aa320 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117aa326 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 117aa329 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 117aa32c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 117aa32f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 117aa333 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 117aa33a jmp 0x117aa34d */
  goto L_117aa34d;
L_117aa33c:;
  /* 117aa33c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 117aa33f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 117aa342 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 117aa346 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_117aa34d:;
  /* 117aa34d push 1 */
  push32((uint32_t)(0x1u));
  /* 117aa34f push 0 */
  push32((uint32_t)(0x0u));
  /* 117aa351 push 3 */
  push32((uint32_t)(0x3u));
  /* 117aa353 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 117aa356 push edx */
  push32((uint32_t)(EDX));
  /* 117aa357 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117aa35a push eax */
  push32((uint32_t)(EAX));
  /* 117aa35b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 117aa35e push ecx */
  push32((uint32_t)(ECX));
  /* 117aa35f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117aa364 mov edx, dword ptr [0x117c7e70] */
  EDX = (r32((uint32_t)(0x117c7e70)));
  /* 117aa36a push edx */
  push32((uint32_t)(EDX));
  /* 117aa36b call 0x117a2eb0 */
  push32(0x117aa370u); f_117a2eb0();
  /* 117aa370 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117aa373 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117aa376 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa37a jne 0x117aa381 */
  if (!C.zf) goto L_117aa381;
  /* 117aa37c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117aa37f jmp 0x117aa3a7 */
  goto L_117aa3a7;
L_117aa381:;
  /* 117aa381 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117aa385 jne 0x117aa391 */
  if (!C.zf) goto L_117aa391;
  /* 117aa387 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117aa38a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117aa38f jmp 0x117aa3a7 */
  goto L_117aa3a7;
L_117aa391:;
  /* 117aa391 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117aa394 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117aa399 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 117aa39c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117aa3a2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 117aa3a5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_117aa3a7:;
  /* 117aa3a7 mov esp, ebp */
  ESP = (EBP);
  /* 117aa3a9 pop ebp */
  EBP = (pop32());
  /* 117aa3aa ret  */
  ESPCHK(0x117aa280u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x117aa50e (6 bytes, 1 insns) */
void f_117aa50e(void) {
  FTRACE(0x117aa50eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117aa50e jmp dword ptr [0x117ca310] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x117ca310)))); return;
}

